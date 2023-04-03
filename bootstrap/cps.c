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
static struct { VBlob sym; char bytes[12]; } _V10string_D3675 = { { VSTRING, 12 }, "VMakeImport" };
static struct { VBlob sym; char bytes[21]; } _V10string_D3674 = { { VSTRING, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[6]; } _V10string_D3673 = { { VSTRING, 6 }, "utils" };
static struct { VBlob sym; char bytes[6]; } _V10string_D3672 = { { VSTRING, 6 }, "match" };
static struct { VBlob sym; char bytes[13]; } _V10string_D3671 = { { VSTRING, 13 }, "VLoadLibrary" };
static struct { VBlob sym; char bytes[10]; } _V10string_D3670 = { { VSTRING, 10 }, "variables" };
static struct { VBlob sym; char bytes[4]; } _V10string_D3669 = { { VSTRING, 4 }, "cps" };
static struct { VBlob sym; char bytes[8]; } _V0call_Wcc = { { VSYMBOL, 8 }, "call/cc" };
static struct { VBlob sym; char bytes[7]; } _V0equal_Q = { { VSYMBOL, 7 }, "equal\?" };
static struct { VBlob sym; char bytes[4]; } _V0map = { { VSYMBOL, 4 }, "map" };
static struct { VBlob sym; char bytes[17]; } _V0call__with__values = { { VSYMBOL, 17 }, "call-with-values" };
static struct { VBlob sym; char bytes[8]; } _V0reverse = { { VSYMBOL, 8 }, "reverse" };
static struct { VBlob sym; char bytes[4]; } _V0not = { { VSYMBOL, 4 }, "not" };
static struct { VBlob sym; char bytes[2]; } _V0_E = { { VSYMBOL, 2 }, "=" };
static struct { VBlob sym; char bytes[14]; } _V0lookup__inline = { { VSYMBOL, 14 }, "lookup-inline" };
static struct { VBlob sym; char bytes[8]; } _V0symbol_Q = { { VSYMBOL, 8 }, "symbol\?" };
static struct { VBlob sym; char bytes[5]; } _V0cons = { { VSYMBOL, 5 }, "cons" };
static struct { VBlob sym; char bytes[6]; } _V0error = { { VSYMBOL, 6 }, "error" };
static struct { VBlob sym; char bytes[7]; } _V0length = { { VSYMBOL, 7 }, "length" };
static struct { VBlob sym; char bytes[3]; } _V0_L_E = { { VSYMBOL, 3 }, "<=" };
static struct { VBlob sym; char bytes[2]; } _V0_P = { { VSYMBOL, 2 }, "+" };
static struct { VBlob sym; char bytes[4]; } _V0cdr = { { VSYMBOL, 4 }, "cdr" };
static struct { VBlob sym; char bytes[6]; } _V0pair_Q = { { VSYMBOL, 6 }, "pair\?" };
static struct { VBlob sym; char bytes[6]; } _V0atom_Q = { { VSYMBOL, 6 }, "atom\?" };
static struct { VBlob sym; char bytes[4]; } _V0car = { { VSYMBOL, 4 }, "car" };
static struct { VBlob sym; char bytes[5]; } _V0eqv_Q = { { VSYMBOL, 5 }, "eqv\?" };
static struct { VBlob sym; char bytes[5]; } _V0fold = { { VSYMBOL, 5 }, "fold" };
static struct { VBlob sym; char bytes[15]; } _V0symbol___Gstring = { { VSYMBOL, 15 }, "symbol->string" };
static struct { VBlob sym; char bytes[11]; } _V0string__ref = { { VSYMBOL, 11 }, "string-ref" };
static struct { VBlob sym; char bytes[4]; } _V0eq_Q = { { VSYMBOL, 4 }, "eq\?" };
static struct { VBlob sym; char bytes[15]; } _V0string___Gsymbol = { { VSYMBOL, 15 }, "string->symbol" };
static struct { VBlob sym; char bytes[10]; } _V0substring = { { VSYMBOL, 10 }, "substring" };
static struct { VBlob sym; char bytes[7]; } _V0gensym = { { VSYMBOL, 7 }, "gensym" };
static struct { VBlob sym; char bytes[6]; } _V0null_Q = { { VSYMBOL, 6 }, "null\?" };
static struct { VBlob sym; char bytes[6]; } _V0apply = { { VSYMBOL, 6 }, "apply" };
static struct { VBlob sym; char bytes[7]; } _V0append = { { VSYMBOL, 7 }, "append" };
static struct { VBlob sym; char bytes[5]; } _V0list = { { VSYMBOL, 5 }, "list" };
static struct { VBlob sym; char bytes[5]; } _V0cadr = { { VSYMBOL, 5 }, "cadr" };
static struct { VBlob sym; char bytes[13]; } _V10string_D3668 = { { VSTRING, 13 }, "Not a lambda" };
static struct { VBlob sym; char bytes[2]; } _V10string_D3667 = { { VSTRING, 2 }, "k" };
static struct { VBlob sym; char bytes[17]; } _V10string_D3666 = { { VSTRING, 17 }, "No matching case" };
static struct { VBlob sym; char bytes[2]; } _V10string_D3665 = { { VSTRING, 2 }, "x" };
static struct { VBlob sym; char bytes[11]; } _V10sys_Dnext = { { VSYMBOL, 11 }, "##sys.next" };
static struct { VBlob sym; char bytes[5]; } _V0set_B = { { VSYMBOL, 5 }, "set!" };
static struct { VBlob sym; char bytes[51]; } _V10string_D3664 = { { VSTRING, 51 }, "Not enough arguments to continuation. Codegen bug." };
static struct { VBlob sym; char bytes[31]; } _V10string_D3663 = { { VSTRING, 31 }, "Not enough arguments to lambda" };
static struct { VBlob sym; char bytes[17]; } _V10string_D3662 = { { VSTRING, 17 }, "no matching case" };
static struct { VBlob sym; char bytes[9]; } _V10sys_Dor = { { VSYMBOL, 9 }, "##sys.or" };
static struct { VBlob sym; char bytes[30]; } _V10string_D3661 = { { VSTRING, 30 }, "failed to inline or statement" };
static struct { VBlob sym; char bytes[10]; } _V10sys_Dand = { { VSYMBOL, 10 }, "##sys.and" };
static struct { VBlob sym; char bytes[31]; } _V10string_D3660 = { { VSTRING, 31 }, "failed to inline and statement" };
static struct { VBlob sym; char bytes[12]; } _V10sys_Dbegin = { { VSYMBOL, 12 }, "##sys.begin" };
static struct { VBlob sym; char bytes[33]; } _V10string_D3659 = { { VSTRING, 33 }, "failed to inline begin statement" };
static struct { VBlob sym; char bytes[9]; } _V10sys_Dif = { { VSYMBOL, 9 }, "##sys.if" };
static struct { VBlob sym; char bytes[30]; } _V10string_D3658 = { { VSTRING, 30 }, "failed to inline if statement" };
static struct { VBlob sym; char bytes[3]; } _V0if = { { VSYMBOL, 3 }, "if" };
static struct { VBlob sym; char bytes[12]; } _V0case__lambda = { { VSYMBOL, 12 }, "case-lambda" };
static struct { VBlob sym; char bytes[13]; } _V0continuation = { { VSYMBOL, 13 }, "continuation" };
static struct { VBlob sym; char bytes[7]; } _V0lambda = { { VSYMBOL, 7 }, "lambda" };
static struct { VBlob sym; char bytes[9]; } _V10inline = { { VSYMBOL, 9 }, "##inline" };
static struct { VBlob sym; char bytes[6]; } _V0quote = { { VSYMBOL, 6 }, "quote" };
static struct { VBlob sym; char bytes[16]; } _V10vcore_Ddeclare = { { VSYMBOL, 16 }, "##vcore.declare" };
static struct { VBlob sym; char bytes[19]; } _V0deannotate__lambdas = { { VSYMBOL, 19 }, "deannotate-lambdas" };
static struct { VBlob sym; char bytes[17]; } _V0annotate__lambdas = { { VSYMBOL, 17 }, "annotate-lambdas" };
static struct { VBlob sym; char bytes[14]; } _V0alpha__convert = { { VSYMBOL, 14 }, "alpha-convert" };
static struct { VBlob sym; char bytes[9]; } _V0optimize = { { VSYMBOL, 9 }, "optimize" };
static struct { VBlob sym; char bytes[7]; } _V0to__cps = { { VSYMBOL, 7 }, "to-cps" };
static void cps_k61(VEnv * env) {
 static VDebugInfo dbg = { "cps_k61" };
 VRecordCall(&dbg);
 V_GC_CHECK(cps_k61, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.248 20 0) (##inline ##sys.cons (##inline ##sys.cons (quote to-cps) (bruijn to-cps 20 1)) (##inline ##sys.cons (##inline ##sys.cons (quote optimize) (bruijn optimize 20 20)) (##inline ##sys.cons (##inline ##sys.cons (quote alpha-convert) (bruijn alpha-convert 20 11)) (##inline ##sys.cons (##inline ##sys.cons (quote annotate-lambdas) (bruijn annotate-lambdas 20 3)) (##inline ##sys.cons (##inline ##sys.cons (quote deannotate-lambdas) (bruijn deannotate-lambdas 20 4)) (quote ())))))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 0)),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0to__cps.sym, VPOINTER_OTHER),
      VGetArg(env, 20, 1)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0optimize.sym, VPOINTER_OTHER),
      VGetArg(env, 20, 20)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0alpha__convert.sym, VPOINTER_OTHER),
      VGetArg(env, 20, 11)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0annotate__lambdas.sym, VPOINTER_OTHER),
      VGetArg(env, 20, 3)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0deannotate__lambdas.sym, VPOINTER_OTHER),
      VGetArg(env, 20, 4)
    )
,
      VNULL
    )

    )

    )

    )

    )

    );
 } else {
  VError("Not enough arguments to cps_k61, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize_k64(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize_k64" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize_k64, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.236 8 1) (bruijn ##k.351 1 0) (##inline ##sys.cons (quote ##vcore.declare) (##inline ##sys.cons (bruijn f 3 1) (##inline ##sys.cons (bruijn ##x.359 0 0) (quote ())))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 1)),
      env->up->vars[0],
      VInlineCons(
VEncodePointer(&_V10vcore_Ddeclare.sym, VPOINTER_OTHER),
      VInlineCons(
env->up->up->up->vars[1],
      VInlineCons(
env->vars[0],
      VNULL
    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0optimize_k64, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize_lambda13(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize_lambda13" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize_lambda13, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.240 1 1))) ((bruijn optimize-impl 30 19) (close _V0optimize_k64) (bruijn l 0 1)) ((bruijn ##k.351 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize_k64, env)}),
      env->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize_lambda12(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize_lambda12" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize_lambda12, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.240 0 1)) ((close _V0optimize_lambda13) (bruijn ##k.346 0 0) (##inline ##sys.car (bruijn ##expr.240 0 1))) ((bruijn ##k.346 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize_lambda13, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize_lambda11(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize_lambda11" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize_lambda11, env) {
  // ((close _V0optimize_lambda12) (bruijn ##k.344 0 0) (##inline ##sys.cdr (bruijn ##expr.239 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize_lambda12, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0optimize_lambda10(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize_lambda10" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize_lambda10, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.239 0 1)) ((close _V0optimize_lambda11) (bruijn ##k.339 0 0) (##inline ##sys.car (bruijn ##expr.239 0 1))) ((bruijn ##k.339 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize_lambda11, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize_k63(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize_k63" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize_k63, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.336 0 0) ((close _V0optimize_lambda10) (bruijn ##k.331 1 0) (##inline ##sys.cdr (bruijn ##expr.238 1 1))) ((bruijn ##k.331 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize_lambda10, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0optimize_k63, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize_lambda9(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize_lambda9" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize_lambda9, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.238 0 1)) ((bruijn equal? 26 2) (close _V0optimize_k63) (quote ##vcore.declare) (##inline ##sys.car (bruijn ##expr.238 0 1))) ((bruijn ##k.331 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize_k63, env)}),
      VEncodePointer(&_V10vcore_Ddeclare.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize_k66(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize_k66" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize_k66, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.236 3 1) (bruijn ##k.325 2 0) (bruijn ##x.330 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[1]),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0optimize_k66, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize_k65(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize_k65" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize_k65, env) {
 if (env->num_vars == 1) {
  // ((bruijn optimize-impl 25 19) (close _V0optimize_k66) (bruijn expr 3 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize_k66, env)}),
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0optimize_k65, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize_lambda8(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize_lambda8" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize_lambda8, env) {
  // ((close _V0optimize_lambda9) (close _V0optimize_k65) (bruijn ##input.237 0 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize_lambda9, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize_k65, env)}),
      env->vars[1]
    );
 }
}
static void _V0optimize_lambda7(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize_lambda7" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize_lambda7, env) {
 if (env->num_vars == 2) {
  // ((close _V0optimize_lambda8) (bruijn ##k.323 0 0) (bruijn expr 1 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize_lambda8, env)},
      env->vars[0],
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0optimize_lambda7, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize_lambda6(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize_lambda6" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize_lambda6, env) {
  // ((bruijn call/cc 23 1) (bruijn ##k.321 0 0) (close _V0optimize_lambda7))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 1)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize_lambda7, env)})
    );
 }
}
static void _V0optimize_k62(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize_k62" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize_k62, env) {
 if (env->num_vars == 1) {
  // ((close _V0optimize_lambda6) (bruijn ##k.319 1 0) (bruijn ##x.376 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize_lambda6, env)},
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0optimize_k62, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize_lambda5(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize_lambda5" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize_lambda5, env) {
 if (env->num_vars == 2) {
  // ((bruijn alpha-convert 20 11) (close _V0optimize_k62) (bruijn expr 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 11)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize_k62, env)}),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0optimize_lambda5, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void cps_k60(VEnv * env) {
 static VDebugInfo dbg = { "cps_k60" };
 VRecordCall(&dbg);
 V_GC_CHECK(cps_k60, env) {
 if (env->num_vars == 1) {
  // (set! (close cps_k61) (bruijn optimize 19 20) (close _V0optimize_lambda5))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(cps_k61, env)}),
      VEncodeInt(19l), VEncodeInt(20l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize_lambda5, env)})
    );
 } else {
  VError("Not enough arguments to cps_k60, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__impl_k67(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__impl_k67" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__impl_k67, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.452 0 0) ((bruijn ##k.229 3 1) (bruijn ##k.447 1 0) (bruijn expr 4 1)) ((bruijn ##k.447 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[1]),
      env->up->vars[0],
      VGetArg(env, 4, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0optimize__impl_k67, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__impl_lambda17(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__impl_lambda17" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__impl_lambda17, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.231 0 1)) ((bruijn equal? 23 2) (close _V0optimize__impl_k67) (quote quote) (##inline ##sys.car (bruijn ##expr.231 0 1))) ((bruijn ##k.447 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__impl_k67, env)}),
      VEncodePointer(&_V0quote.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__impl_k69(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__impl_k69" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__impl_k69, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.439 0 0) ((bruijn ##k.229 4 1) (bruijn ##k.434 1 0) (bruijn expr 5 1)) ((bruijn ##k.434 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 1)),
      env->up->vars[0],
      VGetArg(env, 5, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0optimize__impl_k69, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__impl_lambda18(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__impl_lambda18" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__impl_lambda18, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.232 0 1)) ((bruijn equal? 24 2) (close _V0optimize__impl_k69) (quote ##inline) (##inline ##sys.car (bruijn ##expr.232 0 1))) ((bruijn ##k.434 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__impl_k69, env)}),
      VEncodePointer(&_V10inline.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__impl_k72(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__impl_k72" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__impl_k72, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.229 6 1) (bruijn ##k.420 2 0) (bruijn ##x.428 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 1)),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0optimize__impl_k72, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__impl_k71(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__impl_k71" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__impl_k71, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.425 0 0) ((bruijn optimize-lambda 25 13) (close _V0optimize__impl_k72) (bruijn expr 6 1)) ((bruijn ##k.420 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 13)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__impl_k72, env)}),
      VGetArg(env, 6, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0optimize__impl_k71, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__impl_lambda19(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__impl_lambda19" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__impl_lambda19, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.233 0 1)) ((bruijn equal? 25 2) (close _V0optimize__impl_k71) (quote lambda) (##inline ##sys.car (bruijn ##expr.233 0 1))) ((bruijn ##k.420 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__impl_k71, env)}),
      VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__impl_k75(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__impl_k75" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__impl_k75, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.229 7 1) (bruijn ##k.406 2 0) (bruijn ##x.414 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 1)),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0optimize__impl_k75, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__impl_k74(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__impl_k74" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__impl_k74, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.411 0 0) ((bruijn optimize-lambda 26 13) (close _V0optimize__impl_k75) (bruijn expr 7 1)) ((bruijn ##k.406 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 13)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__impl_k75, env)}),
      VGetArg(env, 7, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0optimize__impl_k74, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__impl_lambda20(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__impl_lambda20" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__impl_lambda20, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.234 0 1)) ((bruijn equal? 26 2) (close _V0optimize__impl_k74) (quote continuation) (##inline ##sys.car (bruijn ##expr.234 0 1))) ((bruijn ##k.406 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__impl_k74, env)}),
      VEncodePointer(&_V0continuation.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__impl_k77(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__impl_k77" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__impl_k77, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.229 7 1) (bruijn ##k.398 1 0) (bruijn ##x.403 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 1)),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0optimize__impl_k77, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__impl_lambda21(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__impl_lambda21" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__impl_lambda21, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.235 0 1)) ((bruijn optimize-apply 26 17) (close _V0optimize__impl_k77) (bruijn expr 7 1)) ((bruijn ##k.398 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 17)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__impl_k77, env)}),
      VGetArg(env, 7, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__impl_k78(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__impl_k78" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__impl_k78, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.229 6 1) (bruijn ##k.381 5 0) (bruijn expr 7 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 1)),
      VGetArg(env, 5, 0),
      VGetArg(env, 7, 1)
    );
 } else {
  VError("Not enough arguments to _V0optimize__impl_k78, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__impl_k76(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__impl_k76" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__impl_k76, env) {
 if (env->num_vars == 1) {
  // ((close _V0optimize__impl_lambda21) (close _V0optimize__impl_k78) (bruijn ##input.230 4 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__impl_lambda21, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__impl_k78, env)}),
      VGetArg(env, 4, 1)
    );
 } else {
  VError("Not enough arguments to _V0optimize__impl_k76, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__impl_k73(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__impl_k73" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__impl_k73, env) {
 if (env->num_vars == 1) {
  // ((close _V0optimize__impl_lambda20) (close _V0optimize__impl_k76) (bruijn ##input.230 3 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__impl_lambda20, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__impl_k76, env)}),
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0optimize__impl_k73, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__impl_k70(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__impl_k70" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__impl_k70, env) {
 if (env->num_vars == 1) {
  // ((close _V0optimize__impl_lambda19) (close _V0optimize__impl_k73) (bruijn ##input.230 2 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__impl_lambda19, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__impl_k73, env)}),
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0optimize__impl_k70, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__impl_k68(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__impl_k68" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__impl_k68, env) {
 if (env->num_vars == 1) {
  // ((close _V0optimize__impl_lambda18) (close _V0optimize__impl_k70) (bruijn ##input.230 1 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__impl_lambda18, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__impl_k70, env)}),
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0optimize__impl_k68, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__impl_lambda16(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__impl_lambda16" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__impl_lambda16, env) {
  // ((close _V0optimize__impl_lambda17) (close _V0optimize__impl_k68) (bruijn ##input.230 0 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__impl_lambda17, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__impl_k68, env)}),
      env->vars[1]
    );
 }
}
static void _V0optimize__impl_lambda15(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__impl_lambda15" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__impl_lambda15, env) {
 if (env->num_vars == 2) {
  // ((close _V0optimize__impl_lambda16) (bruijn ##k.379 0 0) (bruijn expr 1 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__impl_lambda16, env)},
      env->vars[0],
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0optimize__impl_lambda15, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__impl_lambda14(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__impl_lambda14" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__impl_lambda14, env) {
 if (env->num_vars == 2) {
  // ((bruijn call/cc 20 1) (bruijn ##k.377 0 0) (close _V0optimize__impl_lambda15))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 1)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__impl_lambda15, env)})
    );
 } else {
  VError("Not enough arguments to _V0optimize__impl_lambda14, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void cps_k59(VEnv * env) {
 static VDebugInfo dbg = { "cps_k59" };
 VRecordCall(&dbg);
 V_GC_CHECK(cps_k59, env) {
 if (env->num_vars == 1) {
  // (set! (close cps_k60) (bruijn optimize-impl 18 19) (close _V0optimize__impl_lambda14))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(cps_k60, env)}),
      VEncodeInt(18l), VEncodeInt(19l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__impl_lambda14, env)})
    );
 } else {
  VError("Not enough arguments to cps_k59, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__atom_k79(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__atom_k79" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__atom_k79, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.618 0 0) ((bruijn ##k.214 3 1) (bruijn ##k.613 1 0) (bruijn expr 4 1)) ((bruijn ##k.613 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[1]),
      env->up->vars[0],
      VGetArg(env, 4, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0optimize__atom_k79, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__atom_lambda25(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__atom_lambda25" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__atom_lambda25, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.216 0 1)) ((bruijn equal? 22 2) (close _V0optimize__atom_k79) (quote quote) (##inline ##sys.car (bruijn ##expr.216 0 1))) ((bruijn ##k.613 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__atom_k79, env)}),
      VEncodePointer(&_V0quote.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__atom_k81(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__atom_k81" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__atom_k81, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.605 0 0) ((bruijn ##k.214 4 1) (bruijn ##k.600 1 0) (bruijn expr 5 1)) ((bruijn ##k.600 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 1)),
      env->up->vars[0],
      VGetArg(env, 5, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0optimize__atom_k81, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__atom_lambda26(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__atom_lambda26" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__atom_lambda26, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.217 0 1)) ((bruijn equal? 23 2) (close _V0optimize__atom_k81) (quote ##inline) (##inline ##sys.car (bruijn ##expr.217 0 1))) ((bruijn ##k.600 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__atom_k81, env)}),
      VEncodePointer(&_V10inline.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__atom_k84(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__atom_k84" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__atom_k84, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.214 6 1) (bruijn ##k.586 2 0) (bruijn ##x.594 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 1)),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0optimize__atom_k84, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__atom_k83(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__atom_k83" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__atom_k83, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.591 0 0) ((bruijn optimize-lambda 24 13) (close _V0optimize__atom_k84) (bruijn expr 6 1)) ((bruijn ##k.586 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 13)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__atom_k84, env)}),
      VGetArg(env, 6, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0optimize__atom_k83, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__atom_lambda27(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__atom_lambda27" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__atom_lambda27, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.218 0 1)) ((bruijn equal? 24 2) (close _V0optimize__atom_k83) (quote lambda) (##inline ##sys.car (bruijn ##expr.218 0 1))) ((bruijn ##k.586 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__atom_k83, env)}),
      VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__atom_k87(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__atom_k87" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__atom_k87, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.214 7 1) (bruijn ##k.572 2 0) (bruijn ##x.580 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 1)),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0optimize__atom_k87, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__atom_k86(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__atom_k86" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__atom_k86, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.577 0 0) ((bruijn optimize-lambda 25 13) (close _V0optimize__atom_k87) (bruijn expr 7 1)) ((bruijn ##k.572 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 13)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__atom_k87, env)}),
      VGetArg(env, 7, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0optimize__atom_k86, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__atom_lambda28(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__atom_lambda28" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__atom_lambda28, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.219 0 1)) ((bruijn equal? 25 2) (close _V0optimize__atom_k86) (quote continuation) (##inline ##sys.car (bruijn ##expr.219 0 1))) ((bruijn ##k.572 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__atom_k86, env)}),
      VEncodePointer(&_V0continuation.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__atom_k90(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__atom_k90" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__atom_k90, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 1 1) (bruijn ##k.495 1 0) (bruijn ##expr.221 4 1) (quote ()) (quote ()))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->up->vars[0],
      VGetArg(env, 4, 1),
      VNULL,
      VNULL
    );
 } else {
  VError("Not enough arguments to _V0optimize__atom_k90, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda40(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda40" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda40, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.228 1 1))) ((bruijn ##k.225 4 1) (bruijn ##k.526 0 0) (##inline ##sys.cdr (bruijn ##expr.226 9 1)) (##inline ##sys.cons (bruijn args 2 1) (bruijn ##args.222 9 2)) (##inline ##sys.cons (bruijn body 0 1) (bruijn ##body.223 9 3))) ((bruijn ##k.526 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 1)),
      env->vars[0],
      VInlineCdr(
VGetArg(env, 9, 1)
    )
,
      VInlineCons(
env->up->up->vars[1],
      VGetArg(env, 9, 2)
    )
,
      VInlineCons(
env->vars[1],
      VGetArg(env, 9, 3)
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda39(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda39" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda39, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.228 0 1)) ((close _V0loop_lambda40) (bruijn ##k.521 0 0) (##inline ##sys.car (bruijn ##expr.228 0 1))) ((bruijn ##k.521 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda40, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda38(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda38" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda38, env) {
  // ((close _V0loop_lambda39) (bruijn ##k.519 0 0) (##inline ##sys.cdr (bruijn ##expr.227 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda39, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0loop_lambda37(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda37" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda37, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.227 0 1)) ((close _V0loop_lambda38) (bruijn ##k.514 0 0) (##inline ##sys.car (bruijn ##expr.227 0 1))) ((bruijn ##k.514 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda38, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k96(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k96" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k96, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.224 10 1) (bruijn ##k.507 3 0) (bruijn ##expr.226 8 1) (bruijn ##x.512 1 0) (bruijn ##x.513 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 10, 1)),
      env->up->up->up->vars[0],
      VGetArg(env, 8, 1),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k96, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k95(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k95" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k95, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 39 5) (close _V0loop_k96) (bruijn ##body.223 7 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 39, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k96, env)}),
      VGetArg(env, 7, 3)
    );
 } else {
  VError("Not enough arguments to _V0loop_k95, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k94(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k94" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k94, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 38 5) (close _V0loop_k95) (bruijn ##args.222 6 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 38, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k95, env)}),
      VGetArg(env, 6, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k94, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda36(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda36" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda36, env) {
 if (env->num_vars == 2) {
  // ((close _V0loop_lambda37) (close _V0loop_k94) (##inline ##sys.car (bruijn ##expr.226 5 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda37, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k94, env)}),
      VInlineCar(
VGetArg(env, 5, 1)
    )

    );
 } else {
  VError("Not enough arguments to _V0loop_lambda36, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda35(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda35" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda35, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 36 1) (bruijn ##k.505 0 0) (close _V0loop_lambda36))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 36, 1)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda36, env)})
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda35, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k93(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k93" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k93, env) {
 if (env->num_vars == 1) {
  // ((bruijn call-with-values 35 4) (bruijn ##k.500 3 0) (close _V0loop_lambda35) (bruijn loop 4 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 35, 4)),
      env->up->up->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda35, env)}),
      VGetArg(env, 4, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k93, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k92(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k92" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k92, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.224 4 1) (close _V0loop_k93) (bruijn ##expr.226 2 1) (bruijn ##x.548 1 0) (bruijn ##x.549 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k93, env)}),
      env->up->up->vars[1],
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k92, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k91(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k91" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k91, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 33 5) (close _V0loop_k92) (bruijn ##body.223 1 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 33, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k92, env)}),
      env->up->vars[3]
    );
 } else {
  VError("Not enough arguments to _V0loop_k91, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda46(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda46" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda46, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.228 1 1))) ((bruijn ##k.225 4 1) (bruijn ##k.526 0 0) (##inline ##sys.cdr (bruijn ##expr.226 6 1)) (##inline ##sys.cons (bruijn args 2 1) (bruijn ##args.222 6 2)) (##inline ##sys.cons (bruijn body 0 1) (bruijn ##body.223 6 3))) ((bruijn ##k.526 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 1)),
      env->vars[0],
      VInlineCdr(
VGetArg(env, 6, 1)
    )
,
      VInlineCons(
env->up->up->vars[1],
      VGetArg(env, 6, 2)
    )
,
      VInlineCons(
env->vars[1],
      VGetArg(env, 6, 3)
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda45(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda45" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda45, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.228 0 1)) ((close _V0loop_lambda46) (bruijn ##k.521 0 0) (##inline ##sys.car (bruijn ##expr.228 0 1))) ((bruijn ##k.521 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda46, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda44(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda44" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda44, env) {
  // ((close _V0loop_lambda45) (bruijn ##k.519 0 0) (##inline ##sys.cdr (bruijn ##expr.227 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda45, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0loop_lambda43(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda43" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda43, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.227 0 1)) ((close _V0loop_lambda44) (bruijn ##k.514 0 0) (##inline ##sys.car (bruijn ##expr.227 0 1))) ((bruijn ##k.514 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda44, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k99(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k99" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k99, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.224 7 1) (bruijn ##k.507 3 0) (bruijn ##expr.226 5 1) (bruijn ##x.512 1 0) (bruijn ##x.513 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 1)),
      env->up->up->up->vars[0],
      VGetArg(env, 5, 1),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k99, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k98(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k98" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k98, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 36 5) (close _V0loop_k99) (bruijn ##body.223 4 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 36, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k99, env)}),
      VGetArg(env, 4, 3)
    );
 } else {
  VError("Not enough arguments to _V0loop_k98, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k97(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k97" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k97, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 35 5) (close _V0loop_k98) (bruijn ##args.222 3 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 35, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k98, env)}),
      env->up->up->up->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0loop_k97, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda42(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda42" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda42, env) {
 if (env->num_vars == 2) {
  // ((close _V0loop_lambda43) (close _V0loop_k97) (##inline ##sys.car (bruijn ##expr.226 2 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda43, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k97, env)}),
      VInlineCar(
env->up->up->vars[1]
    )

    );
 } else {
  VError("Not enough arguments to _V0loop_lambda42, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda41(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda41" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda41, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 33 1) (bruijn ##k.505 0 0) (close _V0loop_lambda42))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 33, 1)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda42, env)})
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda41, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda34(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda34" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda34, env) {
 if (env->num_vars == 4) {
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.226 0 1))) ((bruijn reverse 32 5) (close _V0loop_k91) (bruijn ##args.222 0 2)) ((bruijn call-with-values 32 4) (bruijn ##k.500 0 0) (close _V0loop_lambda41) (bruijn loop 1 1)))
if(VDecodeBool(
VInlineNot(
VInlinePairP(
env->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 32, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k91, env)}),
      env->vars[2]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 32, 4)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda41, env)}),
      env->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0loop_lambda34, got ~D~N"
  "-- expected 4~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__atom_lambda33(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__atom_lambda33" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__atom_lambda33, env) {
  // (set! (close _V0optimize__atom_k90) (bruijn loop 0 1) (close _V0loop_lambda34))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__atom_k90, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda34, env)})
    );
 }
}
static void _V0optimize__atom_lambda32(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__atom_lambda32" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__atom_lambda32, env) {
 if (env->num_vars == 2) {
  // ((close _V0optimize__atom_lambda33) (bruijn ##k.493 0 0) #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__atom_lambda33, env)},
      env->vars[0],
      VEncodeBool(false)
    );
 } else {
  VError("Not enough arguments to _V0optimize__atom_lambda32, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__atom_lambda31(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__atom_lambda31" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__atom_lambda31, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 29 1) (bruijn ##k.491 0 0) (close _V0optimize__atom_lambda32))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 1)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__atom_lambda32, env)})
    );
 } else {
  VError("Not enough arguments to _V0optimize__atom_lambda31, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__atom_k100(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__atom_k100" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__atom_k100, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.214 10 1) (bruijn ##k.553 1 0) (##inline ##sys.cons (quote case-lambda) (bruijn ##x.559 0 0)))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 10, 1)),
      env->up->vars[0],
      VInlineCons(
VEncodePointer(&_V0case__lambda.sym, VPOINTER_OTHER),
      env->vars[0]
    )

    );
 } else {
  VError("Not enough arguments to _V0optimize__atom_k100, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__atom_k101(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__atom_k101" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__atom_k101, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.560 1 0) (##inline ##sys.cons (bruijn args 1 1) (##inline ##sys.cons (bruijn ##x.563 0 0) (quote ()))))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VInlineCons(
env->up->vars[1],
      VInlineCons(
env->vars[0],
      VNULL
    )

    )

    );
 } else {
  VError("Not enough arguments to _V0optimize__atom_k101, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__atom_lambda48(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__atom_lambda48" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__atom_lambda48, env) {
 if (env->num_vars == 3) {
  // ((bruijn optimize-apply 29 17) (close _V0optimize__atom_k101) (bruijn body 0 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 17)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__atom_k101, env)}),
      env->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0optimize__atom_lambda48, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__atom_lambda47(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__atom_lambda47" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__atom_lambda47, env) {
 if (env->num_vars == 4) {
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((bruijn map 29 3) (close _V0optimize__atom_k100) (close _V0optimize__atom_lambda48) (bruijn args 0 2) (bruijn body 0 3)) ((bruijn ##k.553 0 0) #f))
if(VDecodeBool(
VInlineNullP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 3)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__atom_k100, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__atom_lambda48, env)}),
      env->vars[2],
      env->vars[3]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0optimize__atom_lambda47, got ~D~N"
  "-- expected 4~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__atom_lambda30(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__atom_lambda30" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__atom_lambda30, env) {
  // ((bruijn call-with-values 28 4) (bruijn ##k.489 0 0) (close _V0optimize__atom_lambda31) (close _V0optimize__atom_lambda47))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 28, 4)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__atom_lambda31, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__atom_lambda47, env)})
    );
 }
}
static void _V0optimize__atom_k89(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__atom_k89" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__atom_k89, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.486 0 0) ((close _V0optimize__atom_lambda30) (bruijn ##k.481 1 0) (##inline ##sys.cdr (bruijn ##expr.220 1 1))) ((bruijn ##k.481 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__atom_lambda30, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0optimize__atom_k89, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__atom_lambda29(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__atom_lambda29" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__atom_lambda29, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.220 0 1)) ((bruijn equal? 26 2) (close _V0optimize__atom_k89) (quote case-lambda) (##inline ##sys.car (bruijn ##expr.220 0 1))) ((bruijn ##k.481 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__atom_k89, env)}),
      VEncodePointer(&_V0case__lambda.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__atom_k102(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__atom_k102" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__atom_k102, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.214 6 1) (bruijn ##k.464 5 0) (bruijn expr 7 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 1)),
      VGetArg(env, 5, 0),
      VGetArg(env, 7, 1)
    );
 } else {
  VError("Not enough arguments to _V0optimize__atom_k102, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__atom_k88(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__atom_k88" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__atom_k88, env) {
 if (env->num_vars == 1) {
  // ((close _V0optimize__atom_lambda29) (close _V0optimize__atom_k102) (bruijn ##input.215 4 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__atom_lambda29, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__atom_k102, env)}),
      VGetArg(env, 4, 1)
    );
 } else {
  VError("Not enough arguments to _V0optimize__atom_k88, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__atom_k85(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__atom_k85" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__atom_k85, env) {
 if (env->num_vars == 1) {
  // ((close _V0optimize__atom_lambda28) (close _V0optimize__atom_k88) (bruijn ##input.215 3 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__atom_lambda28, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__atom_k88, env)}),
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0optimize__atom_k85, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__atom_k82(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__atom_k82" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__atom_k82, env) {
 if (env->num_vars == 1) {
  // ((close _V0optimize__atom_lambda27) (close _V0optimize__atom_k85) (bruijn ##input.215 2 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__atom_lambda27, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__atom_k85, env)}),
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0optimize__atom_k82, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__atom_k80(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__atom_k80" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__atom_k80, env) {
 if (env->num_vars == 1) {
  // ((close _V0optimize__atom_lambda26) (close _V0optimize__atom_k82) (bruijn ##input.215 1 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__atom_lambda26, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__atom_k82, env)}),
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0optimize__atom_k80, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__atom_lambda24(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__atom_lambda24" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__atom_lambda24, env) {
  // ((close _V0optimize__atom_lambda25) (close _V0optimize__atom_k80) (bruijn ##input.215 0 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__atom_lambda25, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__atom_k80, env)}),
      env->vars[1]
    );
 }
}
static void _V0optimize__atom_lambda23(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__atom_lambda23" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__atom_lambda23, env) {
 if (env->num_vars == 2) {
  // ((close _V0optimize__atom_lambda24) (bruijn ##k.462 0 0) (bruijn expr 1 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__atom_lambda24, env)},
      env->vars[0],
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0optimize__atom_lambda23, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__atom_lambda22(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__atom_lambda22" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__atom_lambda22, env) {
 if (env->num_vars == 2) {
  // ((bruijn call/cc 19 1) (bruijn ##k.460 0 0) (close _V0optimize__atom_lambda23))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 1)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__atom_lambda23, env)})
    );
 } else {
  VError("Not enough arguments to _V0optimize__atom_lambda22, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void cps_k58(VEnv * env) {
 static VDebugInfo dbg = { "cps_k58" };
 VRecordCall(&dbg);
 V_GC_CHECK(cps_k58, env) {
 if (env->num_vars == 1) {
  // (set! (close cps_k59) (bruijn optimize-atom 17 18) (close _V0optimize__atom_lambda22))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(cps_k59, env)}),
      VEncodeInt(17l), VEncodeInt(18l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__atom_lambda22, env)})
    );
 } else {
  VError("Not enough arguments to cps_k58, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_k104(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k104" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k104, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.153 5 1) (bruijn ##k.1524 2 0) (bruijn ##x.1532 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 5, 1)),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k104, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_k103(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k103" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k103, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1529 0 0) ((bruijn optimize-let 22 16) (close _V0optimize__apply_k104) (bruijn expr 5 1)) ((bruijn ##k.1524 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 16)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k104, env)}),
      VGetArg(env, 5, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0optimize__apply_k103, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_lambda53(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda53" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda53, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.156 0 1)) ((bruijn equal? 22 2) (close _V0optimize__apply_k103) (quote continuation) (##inline ##sys.car (bruijn ##expr.156 0 1))) ((bruijn ##k.1524 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k103, env)}),
      VEncodePointer(&_V0continuation.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda52(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda52" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda52, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.155 0 1)) ((close _V0optimize__apply_lambda53) (bruijn ##k.1519 0 0) (##inline ##sys.car (bruijn ##expr.155 0 1))) ((bruijn ##k.1519 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda53, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_k107(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k107" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k107, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.153 6 1) (bruijn ##k.1502 2 0) (bruijn ##x.1510 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 1)),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k107, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_k106(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k106" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k106, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1507 0 0) ((bruijn optimize-let 23 16) (close _V0optimize__apply_k107) (bruijn expr 6 1)) ((bruijn ##k.1502 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 16)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k107, env)}),
      VGetArg(env, 6, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0optimize__apply_k106, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_lambda55(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda55" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda55, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.158 0 1)) ((bruijn equal? 23 2) (close _V0optimize__apply_k106) (quote lambda) (##inline ##sys.car (bruijn ##expr.158 0 1))) ((bruijn ##k.1502 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k106, env)}),
      VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda54(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda54" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda54, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.157 0 1)) ((close _V0optimize__apply_lambda55) (bruijn ##k.1497 0 0) (##inline ##sys.car (bruijn ##expr.157 0 1))) ((bruijn ##k.1497 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda55, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_k110(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k110" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k110, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.153 11 1) (bruijn ##k.1469 1 0) (bruijn ##x.1474 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 1)),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k110, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_lambda61(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda61" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda61, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.162 1 1))) ((bruijn optimize-apply 28 17) (close _V0optimize__apply_k110) (bruijn a 2 1)) ((bruijn ##k.1469 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 28, 17)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k110, env)}),
      env->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda60(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda60" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda60, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.162 0 1)) ((close _V0optimize__apply_lambda61) (bruijn ##k.1464 0 0) (##inline ##sys.car (bruijn ##expr.162 0 1))) ((bruijn ##k.1464 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda61, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda59(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda59" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda59, env) {
  // ((close _V0optimize__apply_lambda60) (bruijn ##k.1462 0 0) (##inline ##sys.cdr (bruijn ##expr.161 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda60, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0optimize__apply_lambda58(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda58" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda58, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.161 0 1)) ((close _V0optimize__apply_lambda59) (bruijn ##k.1457 0 0) (##inline ##sys.car (bruijn ##expr.161 0 1))) ((bruijn ##k.1457 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda59, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda57(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda57" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda57, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.160 0 1)) (if (##inline ##sys.eq? #t (##inline ##sys.car (bruijn ##expr.160 0 1))) ((close _V0optimize__apply_lambda58) (bruijn ##k.1449 0 0) (##inline ##sys.cdr (bruijn ##expr.160 0 1))) ((bruijn ##k.1449 0 0) #f)) ((bruijn ##k.1449 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
if(VDecodeBool(
VInlineEq(
VEncodeBool(true),
      VInlineCar(
env->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda58, env)},
      env->vars[0],
      VInlineCdr(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_k109(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k109" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k109, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1446 0 0) ((close _V0optimize__apply_lambda57) (bruijn ##k.1441 1 0) (##inline ##sys.cdr (bruijn ##expr.159 1 1))) ((bruijn ##k.1441 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda57, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0optimize__apply_k109, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_lambda56(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda56" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda56, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.159 0 1)) ((bruijn equal? 23 2) (close _V0optimize__apply_k109) (quote if) (##inline ##sys.car (bruijn ##expr.159 0 1))) ((bruijn ##k.1441 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k109, env)}),
      VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_k113(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k113" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k113, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.153 12 1) (bruijn ##k.1413 1 0) (bruijn ##x.1418 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 12, 1)),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k113, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_lambda67(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda67" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda67, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.166 1 1))) ((bruijn optimize-apply 29 17) (close _V0optimize__apply_k113) (bruijn b 0 1)) ((bruijn ##k.1413 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 17)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k113, env)}),
      env->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda66(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda66" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda66, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.166 0 1)) ((close _V0optimize__apply_lambda67) (bruijn ##k.1408 0 0) (##inline ##sys.car (bruijn ##expr.166 0 1))) ((bruijn ##k.1408 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda67, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda65(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda65" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda65, env) {
  // ((close _V0optimize__apply_lambda66) (bruijn ##k.1406 0 0) (##inline ##sys.cdr (bruijn ##expr.165 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda66, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0optimize__apply_lambda64(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda64" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda64, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.165 0 1)) ((close _V0optimize__apply_lambda65) (bruijn ##k.1401 0 0) (##inline ##sys.car (bruijn ##expr.165 0 1))) ((bruijn ##k.1401 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda65, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda63(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda63" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda63, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.164 0 1)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.164 0 1))) ((close _V0optimize__apply_lambda64) (bruijn ##k.1393 0 0) (##inline ##sys.cdr (bruijn ##expr.164 0 1))) ((bruijn ##k.1393 0 0) #f)) ((bruijn ##k.1393 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
if(VDecodeBool(
VInlineEq(
VEncodeBool(false),
      VInlineCar(
env->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda64, env)},
      env->vars[0],
      VInlineCdr(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_k112(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k112" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k112, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1390 0 0) ((close _V0optimize__apply_lambda63) (bruijn ##k.1385 1 0) (##inline ##sys.cdr (bruijn ##expr.163 1 1))) ((bruijn ##k.1385 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda63, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0optimize__apply_k112, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_lambda62(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda62" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda62, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.163 0 1)) ((bruijn equal? 24 2) (close _V0optimize__apply_k112) (quote if) (##inline ##sys.car (bruijn ##expr.163 0 1))) ((bruijn ##k.1385 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k112, env)}),
      VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_k117(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k117" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k117, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.153 15 1) (bruijn ##k.1354 2 0) (##inline ##sys.cons (quote if) (##inline ##sys.cons (bruijn p 6 1) (##inline ##sys.cons (bruijn ##x.1362 1 0) (##inline ##sys.cons (bruijn ##x.1364 0 0) (quote ()))))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 1)),
      env->up->up->vars[0],
      VInlineCons(
VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(env, 6, 1),
      VInlineCons(
env->up->vars[0],
      VInlineCons(
env->vars[0],
      VNULL
    )

    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k117, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_k116(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k116" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k116, env) {
 if (env->num_vars == 1) {
  // ((bruijn optimize-apply 32 17) (close _V0optimize__apply_k117) (bruijn b 1 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 32, 17)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k117, env)}),
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k116, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_lambda74(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda74" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda74, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.170 1 1))) ((bruijn optimize-apply 31 17) (close _V0optimize__apply_k116) (bruijn a 2 1)) ((bruijn ##k.1354 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 31, 17)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k116, env)}),
      env->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda73(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda73" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda73, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.170 0 1)) ((close _V0optimize__apply_lambda74) (bruijn ##k.1349 0 0) (##inline ##sys.car (bruijn ##expr.170 0 1))) ((bruijn ##k.1349 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda74, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda72(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda72" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda72, env) {
  // ((close _V0optimize__apply_lambda73) (bruijn ##k.1347 0 0) (##inline ##sys.cdr (bruijn ##expr.169 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda73, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0optimize__apply_lambda71(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda71" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda71, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.169 0 1)) ((close _V0optimize__apply_lambda72) (bruijn ##k.1342 0 0) (##inline ##sys.car (bruijn ##expr.169 0 1))) ((bruijn ##k.1342 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda72, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda70(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda70" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda70, env) {
  // ((close _V0optimize__apply_lambda71) (bruijn ##k.1340 0 0) (##inline ##sys.cdr (bruijn ##expr.168 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda71, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0optimize__apply_lambda69(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda69" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda69, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.168 0 1)) ((close _V0optimize__apply_lambda70) (bruijn ##k.1335 0 0) (##inline ##sys.car (bruijn ##expr.168 0 1))) ((bruijn ##k.1335 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda70, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_k115(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k115" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k115, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1332 0 0) ((close _V0optimize__apply_lambda69) (bruijn ##k.1327 1 0) (##inline ##sys.cdr (bruijn ##expr.167 1 1))) ((bruijn ##k.1327 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda69, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0optimize__apply_k115, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_lambda68(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda68" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda68, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.167 0 1)) ((bruijn equal? 25 2) (close _V0optimize__apply_k115) (quote if) (##inline ##sys.car (bruijn ##expr.167 0 1))) ((bruijn ##k.1327 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k115, env)}),
      VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_k128(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k128" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k128, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.153 35 1) (bruijn ##k.1229 7 0) (bruijn ##x.1240 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 35, 1)),
      VGetArg(env, 7, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k128, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_k127(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k127" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k127, env) {
 if (env->num_vars == 1) {
  // ((bruijn optimize-apply 52 17) (close _V0optimize__apply_k128) (##inline ##sys.cons (quote if) (##inline ##sys.cons (bruijn p 22 1) (##inline ##sys.cons (bruijn ##x.1244 1 0) (##inline ##sys.cons (bruijn ##x.1246 0 0) (quote ()))))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 52, 17)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k128, env)}),
      VInlineCons(
VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(env, 22, 1),
      VInlineCons(
env->up->vars[0],
      VInlineCons(
env->vars[0],
      VNULL
    )

    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k127, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_k126(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k126" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k126, env) {
 if (env->num_vars == 1) {
  // ((bruijn substitute 51 10) (close _V0optimize__apply_k127) (bruijn k2 7 1) (bruijn k 23 1) (bruijn apply2 5 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 51, 10)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k127, env)}),
      VGetArg(env, 7, 1),
      VGetArg(env, 23, 1),
      VGetArg(env, 5, 1)
    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k126, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_k125(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k125" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k125, env) {
 if (env->num_vars == 1) {
  // ((bruijn substitute 50 10) (close _V0optimize__apply_k126) (bruijn k1 14 1) (bruijn k 22 1) (bruijn apply1 12 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 50, 10)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k126, env)}),
      VGetArg(env, 14, 1),
      VGetArg(env, 22, 1),
      VGetArg(env, 12, 1)
    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k125, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_k131(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k131" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k131, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.153 34 1) (bruijn ##k.1229 6 0) (bruijn ##x.1240 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 34, 1)),
      VGetArg(env, 6, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k131, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_k130(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k130" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k130, env) {
 if (env->num_vars == 1) {
  // ((bruijn optimize-apply 51 17) (close _V0optimize__apply_k131) (##inline ##sys.cons (quote if) (##inline ##sys.cons (bruijn p 21 1) (##inline ##sys.cons (bruijn ##x.1244 1 0) (##inline ##sys.cons (bruijn ##x.1246 0 0) (quote ()))))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 51, 17)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k131, env)}),
      VInlineCons(
VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(env, 21, 1),
      VInlineCons(
env->up->vars[0],
      VInlineCons(
env->vars[0],
      VNULL
    )

    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k130, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_k129(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k129" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k129, env) {
 if (env->num_vars == 1) {
  // ((bruijn substitute 50 10) (close _V0optimize__apply_k130) (bruijn k2 6 1) (bruijn k 22 1) (bruijn apply2 4 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 50, 10)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k130, env)}),
      VGetArg(env, 6, 1),
      VGetArg(env, 22, 1),
      VGetArg(env, 4, 1)
    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k129, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_k138(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k138" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k138, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.153 38 1) (bruijn ##k.1229 10 0) (bruijn ##x.1240 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 38, 1)),
      VGetArg(env, 10, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k138, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_k137(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k137" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k137, env) {
 if (env->num_vars == 1) {
  // ((bruijn optimize-apply 55 17) (close _V0optimize__apply_k138) (##inline ##sys.cons (quote if) (##inline ##sys.cons (bruijn p 25 1) (##inline ##sys.cons (bruijn ##x.1244 1 0) (##inline ##sys.cons (bruijn ##x.1246 0 0) (quote ()))))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 55, 17)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k138, env)}),
      VInlineCons(
VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(env, 25, 1),
      VInlineCons(
env->up->vars[0],
      VInlineCons(
env->vars[0],
      VNULL
    )

    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k137, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_k136(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k136" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k136, env) {
 if (env->num_vars == 1) {
  // ((bruijn substitute 54 10) (close _V0optimize__apply_k137) (bruijn k2 10 1) (bruijn k 26 1) (bruijn apply2 8 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 54, 10)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k137, env)}),
      VGetArg(env, 10, 1),
      VGetArg(env, 26, 1),
      VGetArg(env, 8, 1)
    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k136, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_k135(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k135" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k135, env) {
 if (env->num_vars == 1) {
  // ((bruijn substitute 53 10) (close _V0optimize__apply_k136) (bruijn k1 17 1) (bruijn k 25 1) (bruijn apply1 15 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 53, 10)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k136, env)}),
      VGetArg(env, 17, 1),
      VGetArg(env, 25, 1),
      VGetArg(env, 15, 1)
    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k135, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_k141(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k141" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k141, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.153 37 1) (bruijn ##k.1229 9 0) (bruijn ##x.1240 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 37, 1)),
      VGetArg(env, 9, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k141, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_k140(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k140" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k140, env) {
 if (env->num_vars == 1) {
  // ((bruijn optimize-apply 54 17) (close _V0optimize__apply_k141) (##inline ##sys.cons (quote if) (##inline ##sys.cons (bruijn p 24 1) (##inline ##sys.cons (bruijn ##x.1244 1 0) (##inline ##sys.cons (bruijn ##x.1246 0 0) (quote ()))))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 54, 17)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k141, env)}),
      VInlineCons(
VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(env, 24, 1),
      VInlineCons(
env->up->vars[0],
      VInlineCons(
env->vars[0],
      VNULL
    )

    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k140, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_k139(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k139" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k139, env) {
 if (env->num_vars == 1) {
  // ((bruijn substitute 53 10) (close _V0optimize__apply_k140) (bruijn k2 9 1) (bruijn k 25 1) (bruijn apply2 7 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 53, 10)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k140, env)}),
      VGetArg(env, 9, 1),
      VGetArg(env, 25, 1),
      VGetArg(env, 7, 1)
    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k139, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_k134(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k134" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k134, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1254 0 0) ((bruijn error 53 11) (close _V0optimize__apply_k135) (##string ##string.3658)) ((bruijn substitute 52 10) (close _V0optimize__apply_k139) (bruijn k1 16 1) (bruijn k 24 1) (bruijn apply1 14 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 53, 11)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k135, env)}),
      VEncodePointer(&_V10string_D3658.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 52, 10)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k139, env)}),
      VGetArg(env, 16, 1),
      VGetArg(env, 24, 1),
      VGetArg(env, 14, 1)
    );
}
 } else {
  VError("Not enough arguments to _V0optimize__apply_k134, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_k133(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k133" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k133, env) {
 if (env->num_vars == 1) {
  // ((bruijn not 52 6) (close _V0optimize__apply_k134) (bruijn ##x.1255 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 52, 6)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k134, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k133, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_k132(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k132" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k132, env) {
 if (env->num_vars == 1) {
  // ((bruijn = 51 7) (close _V0optimize__apply_k133) 1 (bruijn ##x.1256 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 51, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k133, env)}),
      VEncodeInt(1l),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k132, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_k124(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k124" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k124, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1252 0 0) (if (bruijn ##x.1252 0 0) ((bruijn error 50 11) (close _V0optimize__apply_k125) (##string ##string.3658)) ((bruijn substitute 49 10) (close _V0optimize__apply_k129) (bruijn k1 13 1) (bruijn k 21 1) (bruijn apply1 11 1))) ((bruijn ref-count 49 6) (close _V0optimize__apply_k132) (bruijn k2 5 1) (bruijn apply2 3 1)))
if(VDecodeBool(
env->vars[0])) {
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 50, 11)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k125, env)}),
      VEncodePointer(&_V10string_D3658.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 49, 10)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k129, env)}),
      VGetArg(env, 13, 1),
      VGetArg(env, 21, 1),
      VGetArg(env, 11, 1)
    );
}
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 49, 6)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k132, env)}),
      VGetArg(env, 5, 1),
      env->up->up->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0optimize__apply_k124, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_k123(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k123" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k123, env) {
 if (env->num_vars == 1) {
  // ((bruijn not 49 6) (close _V0optimize__apply_k124) (bruijn ##x.1257 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 49, 6)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k124, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k123, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_k122(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k122" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k122, env) {
 if (env->num_vars == 1) {
  // ((bruijn = 48 7) (close _V0optimize__apply_k123) 1 (bruijn ##x.1258 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 48, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k123, env)}),
      VEncodeInt(1l),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k122, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_lambda93(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda93" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda93, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.183 1 1))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.179 7 1))) ((bruijn ref-count 46 6) (close _V0optimize__apply_k122) (bruijn k1 10 1) (bruijn apply1 8 1)) ((bruijn ##k.1229 0 0) #f)) ((bruijn ##k.1229 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
VGetArg(env, 7, 1)
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 46, 6)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k122, env)}),
      VGetArg(env, 10, 1),
      VGetArg(env, 8, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda92(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda92" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda92, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.183 0 1)) ((close _V0optimize__apply_lambda93) (bruijn ##k.1224 0 0) (##inline ##sys.car (bruijn ##expr.183 0 1))) ((bruijn ##k.1224 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda93, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda91(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda91" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda91, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.182 1 1))) ((close _V0optimize__apply_lambda92) (bruijn ##k.1219 0 0) (##inline ##sys.cdr (bruijn ##expr.181 2 1))) ((bruijn ##k.1219 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda92, env)},
      env->vars[0],
      VInlineCdr(
env->up->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda90(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda90" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda90, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.182 0 1)) ((close _V0optimize__apply_lambda91) (bruijn ##k.1214 0 0) (##inline ##sys.car (bruijn ##expr.182 0 1))) ((bruijn ##k.1214 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda91, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda89(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda89" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda89, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.181 0 1)) ((close _V0optimize__apply_lambda90) (bruijn ##k.1209 0 0) (##inline ##sys.car (bruijn ##expr.181 0 1))) ((bruijn ##k.1209 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda90, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_k121(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k121" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k121, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1206 0 0) ((close _V0optimize__apply_lambda89) (bruijn ##k.1201 1 0) (##inline ##sys.cdr (bruijn ##expr.180 1 1))) ((bruijn ##k.1201 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda89, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0optimize__apply_k121, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_lambda88(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda88" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda88, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.180 0 1)) ((bruijn equal? 41 2) (close _V0optimize__apply_k121) (quote lambda) (##inline ##sys.car (bruijn ##expr.180 0 1))) ((bruijn ##k.1201 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 41, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k121, env)}),
      VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda87(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda87" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda87, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.179 0 1)) ((close _V0optimize__apply_lambda88) (bruijn ##k.1196 0 0) (##inline ##sys.car (bruijn ##expr.179 0 1))) ((bruijn ##k.1196 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda88, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda86(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda86" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda86, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.178 1 1))) ((close _V0optimize__apply_lambda87) (bruijn ##k.1191 0 0) (##inline ##sys.cdr (bruijn ##expr.174 7 1))) ((bruijn ##k.1191 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda87, env)},
      env->vars[0],
      VInlineCdr(
VGetArg(env, 7, 1)
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda85(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda85" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda85, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.178 0 1)) ((close _V0optimize__apply_lambda86) (bruijn ##k.1186 0 0) (##inline ##sys.car (bruijn ##expr.178 0 1))) ((bruijn ##k.1186 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda86, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda84(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda84" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda84, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.177 1 1))) ((close _V0optimize__apply_lambda85) (bruijn ##k.1181 0 0) (##inline ##sys.cdr (bruijn ##expr.176 2 1))) ((bruijn ##k.1181 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda85, env)},
      env->vars[0],
      VInlineCdr(
env->up->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda83(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda83" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda83, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.177 0 1)) ((close _V0optimize__apply_lambda84) (bruijn ##k.1176 0 0) (##inline ##sys.car (bruijn ##expr.177 0 1))) ((bruijn ##k.1176 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda84, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda82(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda82" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda82, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.176 0 1)) ((close _V0optimize__apply_lambda83) (bruijn ##k.1171 0 0) (##inline ##sys.car (bruijn ##expr.176 0 1))) ((bruijn ##k.1171 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda83, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_k120(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k120" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k120, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1168 0 0) ((close _V0optimize__apply_lambda82) (bruijn ##k.1163 1 0) (##inline ##sys.cdr (bruijn ##expr.175 1 1))) ((bruijn ##k.1163 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda82, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0optimize__apply_k120, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_lambda81(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda81" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda81, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.175 0 1)) ((bruijn equal? 33 2) (close _V0optimize__apply_k120) (quote lambda) (##inline ##sys.car (bruijn ##expr.175 0 1))) ((bruijn ##k.1163 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 33, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k120, env)}),
      VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda80(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda80" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda80, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.174 0 1)) ((close _V0optimize__apply_lambda81) (bruijn ##k.1158 0 0) (##inline ##sys.car (bruijn ##expr.174 0 1))) ((bruijn ##k.1158 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda81, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda79(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda79" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda79, env) {
  // ((close _V0optimize__apply_lambda80) (bruijn ##k.1156 0 0) (##inline ##sys.cdr (bruijn ##expr.173 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda80, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0optimize__apply_lambda78(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda78" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda78, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.173 0 1)) ((close _V0optimize__apply_lambda79) (bruijn ##k.1151 0 0) (##inline ##sys.car (bruijn ##expr.173 0 1))) ((bruijn ##k.1151 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda79, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda77(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda77" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda77, env) {
  // ((close _V0optimize__apply_lambda78) (bruijn ##k.1149 0 0) (##inline ##sys.cdr (bruijn ##expr.172 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda78, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0optimize__apply_lambda76(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda76" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda76, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.172 0 1)) ((close _V0optimize__apply_lambda77) (bruijn ##k.1144 0 0) (##inline ##sys.car (bruijn ##expr.172 0 1))) ((bruijn ##k.1144 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda77, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_k119(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k119" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k119, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1141 0 0) ((close _V0optimize__apply_lambda76) (bruijn ##k.1136 1 0) (##inline ##sys.cdr (bruijn ##expr.171 1 1))) ((bruijn ##k.1136 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda76, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0optimize__apply_k119, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_lambda75(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda75" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda75, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.171 0 1)) ((bruijn equal? 26 2) (close _V0optimize__apply_k119) (quote ##sys.if) (##inline ##sys.car (bruijn ##expr.171 0 1))) ((bruijn ##k.1136 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k119, env)}),
      VEncodePointer(&_V10sys_Dif.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_k150(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k150" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k150, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.153 27 1) (bruijn ##k.1074 6 0) (bruijn ##x.1085 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 27, 1)),
      VGetArg(env, 6, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k150, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_k149(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k149" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k149, env) {
 if (env->num_vars == 1) {
  // ((bruijn optimize-apply 44 17) (close _V0optimize__apply_k150) (bruijn ##x.1086 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 44, 17)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k150, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k149, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_k148(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k148" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k148, env) {
 if (env->num_vars == 1) {
  // ((bruijn substitute 43 10) (close _V0optimize__apply_k149) (bruijn k1 6 1) (bruijn k 14 1) (bruijn apply 4 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 43, 10)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k149, env)}),
      VGetArg(env, 6, 1),
      VGetArg(env, 14, 1),
      VGetArg(env, 4, 1)
    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k148, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_k152(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k152" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k152, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.153 26 1) (bruijn ##k.1074 5 0) (bruijn ##x.1085 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 1)),
      VGetArg(env, 5, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k152, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_k151(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k151" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k151, env) {
 if (env->num_vars == 1) {
  // ((bruijn optimize-apply 43 17) (close _V0optimize__apply_k152) (bruijn ##x.1086 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 43, 17)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k152, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k151, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_k147(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k147" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k147, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1087 0 0) ((bruijn error 43 11) (close _V0optimize__apply_k148) (##string ##string.3659)) ((bruijn substitute 42 10) (close _V0optimize__apply_k151) (bruijn k1 5 1) (bruijn k 13 1) (bruijn apply 3 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 43, 11)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k148, env)}),
      VEncodePointer(&_V10string_D3659.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 42, 10)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k151, env)}),
      VGetArg(env, 5, 1),
      VGetArg(env, 13, 1),
      env->up->up->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0optimize__apply_k147, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_k146(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k146" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k146, env) {
 if (env->num_vars == 1) {
  // ((bruijn not 42 6) (close _V0optimize__apply_k147) (bruijn ##x.1092 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 42, 6)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k147, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k146, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_k145(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k145" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k145, env) {
 if (env->num_vars == 1) {
  // ((bruijn = 41 7) (close _V0optimize__apply_k146) 1 (bruijn ##x.1093 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 41, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k146, env)}),
      VEncodeInt(1l),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k145, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_lambda105(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda105" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda105, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.191 1 1))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.187 7 1))) ((bruijn ref-count 39 6) (close _V0optimize__apply_k145) (bruijn k1 2 1) (bruijn apply 0 1)) ((bruijn ##k.1074 0 0) #f)) ((bruijn ##k.1074 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
VGetArg(env, 7, 1)
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 39, 6)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k145, env)}),
      env->up->up->vars[1],
      env->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda104(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda104" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda104, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.191 0 1)) ((close _V0optimize__apply_lambda105) (bruijn ##k.1069 0 0) (##inline ##sys.car (bruijn ##expr.191 0 1))) ((bruijn ##k.1069 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda105, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda103(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda103" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda103, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.190 1 1))) ((close _V0optimize__apply_lambda104) (bruijn ##k.1064 0 0) (##inline ##sys.cdr (bruijn ##expr.189 2 1))) ((bruijn ##k.1064 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda104, env)},
      env->vars[0],
      VInlineCdr(
env->up->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda102(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda102" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda102, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.190 0 1)) ((close _V0optimize__apply_lambda103) (bruijn ##k.1059 0 0) (##inline ##sys.car (bruijn ##expr.190 0 1))) ((bruijn ##k.1059 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda103, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda101(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda101" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda101, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.189 0 1)) ((close _V0optimize__apply_lambda102) (bruijn ##k.1054 0 0) (##inline ##sys.car (bruijn ##expr.189 0 1))) ((bruijn ##k.1054 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda102, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_k144(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k144" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k144, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1051 0 0) ((close _V0optimize__apply_lambda101) (bruijn ##k.1046 1 0) (##inline ##sys.cdr (bruijn ##expr.188 1 1))) ((bruijn ##k.1046 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda101, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0optimize__apply_k144, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_lambda100(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda100" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda100, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.188 0 1)) ((bruijn equal? 34 2) (close _V0optimize__apply_k144) (quote lambda) (##inline ##sys.car (bruijn ##expr.188 0 1))) ((bruijn ##k.1046 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 34, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k144, env)}),
      VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda99(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda99" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda99, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.187 0 1)) ((close _V0optimize__apply_lambda100) (bruijn ##k.1041 0 0) (##inline ##sys.car (bruijn ##expr.187 0 1))) ((bruijn ##k.1041 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda100, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda98(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda98" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda98, env) {
  // ((close _V0optimize__apply_lambda99) (bruijn ##k.1039 0 0) (##inline ##sys.cdr (bruijn ##expr.186 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda99, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0optimize__apply_lambda97(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda97" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda97, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.186 0 1)) ((close _V0optimize__apply_lambda98) (bruijn ##k.1034 0 0) (##inline ##sys.car (bruijn ##expr.186 0 1))) ((bruijn ##k.1034 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda98, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda96(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda96" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda96, env) {
  // ((close _V0optimize__apply_lambda97) (bruijn ##k.1032 0 0) (##inline ##sys.cdr (bruijn ##expr.185 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda97, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0optimize__apply_lambda95(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda95" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda95, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.185 0 1)) ((close _V0optimize__apply_lambda96) (bruijn ##k.1027 0 0) (##inline ##sys.car (bruijn ##expr.185 0 1))) ((bruijn ##k.1027 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda96, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_k143(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k143" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k143, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1024 0 0) ((close _V0optimize__apply_lambda95) (bruijn ##k.1019 1 0) (##inline ##sys.cdr (bruijn ##expr.184 1 1))) ((bruijn ##k.1019 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda95, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0optimize__apply_k143, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_lambda94(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda94" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda94, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.184 0 1)) ((bruijn equal? 27 2) (close _V0optimize__apply_k143) (quote ##sys.begin) (##inline ##sys.car (bruijn ##expr.184 0 1))) ((bruijn ##k.1019 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 27, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k143, env)}),
      VEncodePointer(&_V10sys_Dbegin.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_k161(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k161" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k161, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.153 28 1) (bruijn ##k.951 6 0) (bruijn ##x.962 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 28, 1)),
      VGetArg(env, 6, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k161, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_k160(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k160" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k160, env) {
 if (env->num_vars == 1) {
  // ((bruijn optimize-apply 45 17) (close _V0optimize__apply_k161) (##inline ##sys.cons (quote if) (##inline ##sys.cons (bruijn x 13 1) (##inline ##sys.cons (bruijn ##x.966 0 0) (##inline ##sys.cons (##inline ##sys.cons (bruijn k 15 1) (##inline ##sys.cons (quote #f) (quote ()))) (quote ()))))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 45, 17)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k161, env)}),
      VInlineCons(
VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(env, 13, 1),
      VInlineCons(
env->vars[0],
      VInlineCons(
VInlineCons(
VGetArg(env, 15, 1),
      VInlineCons(
VEncodeBool(false),
      VNULL
    )

    )
,
      VNULL
    )

    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k160, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_k159(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k159" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k159, env) {
 if (env->num_vars == 1) {
  // ((bruijn substitute 44 10) (close _V0optimize__apply_k160) (bruijn k1 6 1) (bruijn k 14 1) (bruijn apply 4 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 44, 10)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k160, env)}),
      VGetArg(env, 6, 1),
      VGetArg(env, 14, 1),
      VGetArg(env, 4, 1)
    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k159, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_k163(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k163" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k163, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.153 27 1) (bruijn ##k.951 5 0) (bruijn ##x.962 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 27, 1)),
      VGetArg(env, 5, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k163, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_k162(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k162" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k162, env) {
 if (env->num_vars == 1) {
  // ((bruijn optimize-apply 44 17) (close _V0optimize__apply_k163) (##inline ##sys.cons (quote if) (##inline ##sys.cons (bruijn x 12 1) (##inline ##sys.cons (bruijn ##x.966 0 0) (##inline ##sys.cons (##inline ##sys.cons (bruijn k 14 1) (##inline ##sys.cons (quote #f) (quote ()))) (quote ()))))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 44, 17)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k163, env)}),
      VInlineCons(
VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(env, 12, 1),
      VInlineCons(
env->vars[0],
      VInlineCons(
VInlineCons(
VGetArg(env, 14, 1),
      VInlineCons(
VEncodeBool(false),
      VNULL
    )

    )
,
      VNULL
    )

    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k162, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_k158(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k158" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k158, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.970 0 0) ((bruijn error 44 11) (close _V0optimize__apply_k159) (##string ##string.3660)) ((bruijn substitute 43 10) (close _V0optimize__apply_k162) (bruijn k1 5 1) (bruijn k 13 1) (bruijn apply 3 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 44, 11)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k159, env)}),
      VEncodePointer(&_V10string_D3660.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 43, 10)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k162, env)}),
      VGetArg(env, 5, 1),
      VGetArg(env, 13, 1),
      env->up->up->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0optimize__apply_k158, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_k157(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k157" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k157, env) {
 if (env->num_vars == 1) {
  // ((bruijn not 43 6) (close _V0optimize__apply_k158) (bruijn ##x.975 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 43, 6)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k158, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k157, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_k156(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k156" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k156, env) {
 if (env->num_vars == 1) {
  // ((bruijn = 42 7) (close _V0optimize__apply_k157) 1 (bruijn ##x.976 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 42, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k157, env)}),
      VEncodeInt(1l),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k156, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_lambda117(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda117" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda117, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.199 1 1))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.195 7 1))) ((bruijn ref-count 40 6) (close _V0optimize__apply_k156) (bruijn k1 2 1) (bruijn apply 0 1)) ((bruijn ##k.951 0 0) #f)) ((bruijn ##k.951 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
VGetArg(env, 7, 1)
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 40, 6)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k156, env)}),
      env->up->up->vars[1],
      env->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda116(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda116" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda116, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.199 0 1)) ((close _V0optimize__apply_lambda117) (bruijn ##k.946 0 0) (##inline ##sys.car (bruijn ##expr.199 0 1))) ((bruijn ##k.946 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda117, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda115(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda115" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda115, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.198 1 1))) ((close _V0optimize__apply_lambda116) (bruijn ##k.941 0 0) (##inline ##sys.cdr (bruijn ##expr.197 2 1))) ((bruijn ##k.941 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda116, env)},
      env->vars[0],
      VInlineCdr(
env->up->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda114(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda114" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda114, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.198 0 1)) ((close _V0optimize__apply_lambda115) (bruijn ##k.936 0 0) (##inline ##sys.car (bruijn ##expr.198 0 1))) ((bruijn ##k.936 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda115, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda113(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda113" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda113, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.197 0 1)) ((close _V0optimize__apply_lambda114) (bruijn ##k.931 0 0) (##inline ##sys.car (bruijn ##expr.197 0 1))) ((bruijn ##k.931 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda114, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_k155(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k155" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k155, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.928 0 0) ((close _V0optimize__apply_lambda113) (bruijn ##k.923 1 0) (##inline ##sys.cdr (bruijn ##expr.196 1 1))) ((bruijn ##k.923 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda113, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0optimize__apply_k155, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_lambda112(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda112" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda112, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.196 0 1)) ((bruijn equal? 35 2) (close _V0optimize__apply_k155) (quote lambda) (##inline ##sys.car (bruijn ##expr.196 0 1))) ((bruijn ##k.923 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 35, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k155, env)}),
      VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda111(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda111" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda111, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.195 0 1)) ((close _V0optimize__apply_lambda112) (bruijn ##k.918 0 0) (##inline ##sys.car (bruijn ##expr.195 0 1))) ((bruijn ##k.918 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda112, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda110(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda110" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda110, env) {
  // ((close _V0optimize__apply_lambda111) (bruijn ##k.916 0 0) (##inline ##sys.cdr (bruijn ##expr.194 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda111, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0optimize__apply_lambda109(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda109" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda109, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.194 0 1)) ((close _V0optimize__apply_lambda110) (bruijn ##k.911 0 0) (##inline ##sys.car (bruijn ##expr.194 0 1))) ((bruijn ##k.911 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda110, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda108(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda108" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda108, env) {
  // ((close _V0optimize__apply_lambda109) (bruijn ##k.909 0 0) (##inline ##sys.cdr (bruijn ##expr.193 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda109, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0optimize__apply_lambda107(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda107" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda107, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.193 0 1)) ((close _V0optimize__apply_lambda108) (bruijn ##k.904 0 0) (##inline ##sys.car (bruijn ##expr.193 0 1))) ((bruijn ##k.904 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda108, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_k154(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k154" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k154, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.901 0 0) ((close _V0optimize__apply_lambda107) (bruijn ##k.896 1 0) (##inline ##sys.cdr (bruijn ##expr.192 1 1))) ((bruijn ##k.896 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda107, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0optimize__apply_k154, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_lambda106(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda106" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda106, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.192 0 1)) ((bruijn equal? 28 2) (close _V0optimize__apply_k154) (quote ##sys.and) (##inline ##sys.car (bruijn ##expr.192 0 1))) ((bruijn ##k.896 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 28, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k154, env)}),
      VEncodePointer(&_V10sys_Dand.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_k172(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k172" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k172, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.153 29 1) (bruijn ##k.828 6 0) (bruijn ##x.839 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 1)),
      VGetArg(env, 6, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k172, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_k171(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k171" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k171, env) {
 if (env->num_vars == 1) {
  // ((bruijn optimize-apply 46 17) (close _V0optimize__apply_k172) (##inline ##sys.cons (quote if) (##inline ##sys.cons (bruijn x 13 1) (##inline ##sys.cons (##inline ##sys.cons (bruijn k 15 1) (##inline ##sys.cons (bruijn x 13 1) (quote ()))) (##inline ##sys.cons (bruijn ##x.845 0 0) (quote ()))))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 46, 17)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k172, env)}),
      VInlineCons(
VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(env, 13, 1),
      VInlineCons(
VInlineCons(
VGetArg(env, 15, 1),
      VInlineCons(
VGetArg(env, 13, 1),
      VNULL
    )

    )
,
      VInlineCons(
env->vars[0],
      VNULL
    )

    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k171, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_k170(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k170" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k170, env) {
 if (env->num_vars == 1) {
  // ((bruijn substitute 45 10) (close _V0optimize__apply_k171) (bruijn k1 6 1) (bruijn k 14 1) (bruijn apply 4 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 45, 10)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k171, env)}),
      VGetArg(env, 6, 1),
      VGetArg(env, 14, 1),
      VGetArg(env, 4, 1)
    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k170, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_k174(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k174" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k174, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.153 28 1) (bruijn ##k.828 5 0) (bruijn ##x.839 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 28, 1)),
      VGetArg(env, 5, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k174, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_k173(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k173" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k173, env) {
 if (env->num_vars == 1) {
  // ((bruijn optimize-apply 45 17) (close _V0optimize__apply_k174) (##inline ##sys.cons (quote if) (##inline ##sys.cons (bruijn x 12 1) (##inline ##sys.cons (##inline ##sys.cons (bruijn k 14 1) (##inline ##sys.cons (bruijn x 12 1) (quote ()))) (##inline ##sys.cons (bruijn ##x.845 0 0) (quote ()))))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 45, 17)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k174, env)}),
      VInlineCons(
VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(env, 12, 1),
      VInlineCons(
VInlineCons(
VGetArg(env, 14, 1),
      VInlineCons(
VGetArg(env, 12, 1),
      VNULL
    )

    )
,
      VInlineCons(
env->vars[0],
      VNULL
    )

    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k173, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_k169(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k169" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k169, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.847 0 0) ((bruijn error 45 11) (close _V0optimize__apply_k170) (##string ##string.3661)) ((bruijn substitute 44 10) (close _V0optimize__apply_k173) (bruijn k1 5 1) (bruijn k 13 1) (bruijn apply 3 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 45, 11)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k170, env)}),
      VEncodePointer(&_V10string_D3661.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 44, 10)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k173, env)}),
      VGetArg(env, 5, 1),
      VGetArg(env, 13, 1),
      env->up->up->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0optimize__apply_k169, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_k168(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k168" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k168, env) {
 if (env->num_vars == 1) {
  // ((bruijn not 44 6) (close _V0optimize__apply_k169) (bruijn ##x.852 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 44, 6)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k169, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k168, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_k167(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k167" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k167, env) {
 if (env->num_vars == 1) {
  // ((bruijn = 43 7) (close _V0optimize__apply_k168) 1 (bruijn ##x.853 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 43, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k168, env)}),
      VEncodeInt(1l),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k167, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_lambda129(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda129" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda129, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.207 1 1))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.203 7 1))) ((bruijn ref-count 41 6) (close _V0optimize__apply_k167) (bruijn k1 2 1) (bruijn apply 0 1)) ((bruijn ##k.828 0 0) #f)) ((bruijn ##k.828 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
VGetArg(env, 7, 1)
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 41, 6)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k167, env)}),
      env->up->up->vars[1],
      env->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda128(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda128" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda128, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.207 0 1)) ((close _V0optimize__apply_lambda129) (bruijn ##k.823 0 0) (##inline ##sys.car (bruijn ##expr.207 0 1))) ((bruijn ##k.823 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda129, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda127(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda127" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda127, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.206 1 1))) ((close _V0optimize__apply_lambda128) (bruijn ##k.818 0 0) (##inline ##sys.cdr (bruijn ##expr.205 2 1))) ((bruijn ##k.818 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda128, env)},
      env->vars[0],
      VInlineCdr(
env->up->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda126(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda126" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda126, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.206 0 1)) ((close _V0optimize__apply_lambda127) (bruijn ##k.813 0 0) (##inline ##sys.car (bruijn ##expr.206 0 1))) ((bruijn ##k.813 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda127, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda125(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda125" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda125, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.205 0 1)) ((close _V0optimize__apply_lambda126) (bruijn ##k.808 0 0) (##inline ##sys.car (bruijn ##expr.205 0 1))) ((bruijn ##k.808 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda126, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_k166(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k166" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k166, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.805 0 0) ((close _V0optimize__apply_lambda125) (bruijn ##k.800 1 0) (##inline ##sys.cdr (bruijn ##expr.204 1 1))) ((bruijn ##k.800 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda125, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0optimize__apply_k166, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_lambda124(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda124" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda124, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.204 0 1)) ((bruijn equal? 36 2) (close _V0optimize__apply_k166) (quote lambda) (##inline ##sys.car (bruijn ##expr.204 0 1))) ((bruijn ##k.800 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 36, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k166, env)}),
      VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda123(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda123" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda123, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.203 0 1)) ((close _V0optimize__apply_lambda124) (bruijn ##k.795 0 0) (##inline ##sys.car (bruijn ##expr.203 0 1))) ((bruijn ##k.795 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda124, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda122(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda122" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda122, env) {
  // ((close _V0optimize__apply_lambda123) (bruijn ##k.793 0 0) (##inline ##sys.cdr (bruijn ##expr.202 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda123, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0optimize__apply_lambda121(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda121" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda121, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.202 0 1)) ((close _V0optimize__apply_lambda122) (bruijn ##k.788 0 0) (##inline ##sys.car (bruijn ##expr.202 0 1))) ((bruijn ##k.788 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda122, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda120(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda120" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda120, env) {
  // ((close _V0optimize__apply_lambda121) (bruijn ##k.786 0 0) (##inline ##sys.cdr (bruijn ##expr.201 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda121, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0optimize__apply_lambda119(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda119" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda119, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.201 0 1)) ((close _V0optimize__apply_lambda120) (bruijn ##k.781 0 0) (##inline ##sys.car (bruijn ##expr.201 0 1))) ((bruijn ##k.781 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda120, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_k165(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k165" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k165, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.778 0 0) ((close _V0optimize__apply_lambda119) (bruijn ##k.773 1 0) (##inline ##sys.cdr (bruijn ##expr.200 1 1))) ((bruijn ##k.773 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda119, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0optimize__apply_k165, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_lambda118(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda118" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda118, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.200 0 1)) ((bruijn equal? 29 2) (close _V0optimize__apply_k165) (quote ##sys.or) (##inline ##sys.car (bruijn ##expr.200 0 1))) ((bruijn ##k.773 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k165, env)}),
      VEncodePointer(&_V10sys_Dor.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_k177(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k177" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k177, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.153 13 1) (bruijn ##k.759 2 0) (bruijn ##x.767 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 1)),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k177, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_k176(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k176" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k176, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.764 0 0) ((bruijn error 31 11) (close _V0optimize__apply_k177) (##string ##string.3658)) ((bruijn ##k.759 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 31, 11)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k177, env)}),
      VEncodePointer(&_V10string_D3658.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0optimize__apply_k176, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_lambda130(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda130" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda130, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.208 0 1)) ((bruijn equal? 30 2) (close _V0optimize__apply_k176) (quote ##sys.if) (##inline ##sys.car (bruijn ##expr.208 0 1))) ((bruijn ##k.759 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k176, env)}),
      VEncodePointer(&_V10sys_Dif.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_k180(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k180" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k180, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.153 14 1) (bruijn ##k.745 2 0) (bruijn ##x.753 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 1)),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k180, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_k179(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k179" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k179, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.750 0 0) ((bruijn error 32 11) (close _V0optimize__apply_k180) (##string ##string.3661)) ((bruijn ##k.745 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 32, 11)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k180, env)}),
      VEncodePointer(&_V10string_D3661.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0optimize__apply_k179, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_lambda131(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda131" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda131, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.209 0 1)) ((bruijn equal? 31 2) (close _V0optimize__apply_k179) (quote ##sys.or) (##inline ##sys.car (bruijn ##expr.209 0 1))) ((bruijn ##k.745 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 31, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k179, env)}),
      VEncodePointer(&_V10sys_Dor.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_k183(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k183" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k183, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.153 15 1) (bruijn ##k.731 2 0) (bruijn ##x.739 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 1)),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k183, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_k182(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k182" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k182, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.736 0 0) ((bruijn error 33 11) (close _V0optimize__apply_k183) (##string ##string.3660)) ((bruijn ##k.731 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 33, 11)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k183, env)}),
      VEncodePointer(&_V10string_D3660.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0optimize__apply_k182, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_lambda132(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda132" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda132, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.210 0 1)) ((bruijn equal? 32 2) (close _V0optimize__apply_k182) (quote ##sys.and) (##inline ##sys.car (bruijn ##expr.210 0 1))) ((bruijn ##k.731 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 32, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k182, env)}),
      VEncodePointer(&_V10sys_Dand.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_k186(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k186" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k186, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.153 16 1) (bruijn ##k.717 2 0) (bruijn ##x.725 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 1)),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k186, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_k185(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k185" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k185, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.722 0 0) ((bruijn error 34 11) (close _V0optimize__apply_k186) (##string ##string.3659)) ((bruijn ##k.717 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 34, 11)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k186, env)}),
      VEncodePointer(&_V10string_D3659.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0optimize__apply_k185, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_lambda133(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda133" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda133, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.211 0 1)) ((bruijn equal? 33 2) (close _V0optimize__apply_k185) (quote ##sys.begin) (##inline ##sys.car (bruijn ##expr.211 0 1))) ((bruijn ##k.717 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 33, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k185, env)}),
      VEncodePointer(&_V10sys_Dbegin.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_k192(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k192" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k192, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.153 24 1) (bruijn ##k.688 5 0) (bruijn ##x.693 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 1)),
      VGetArg(env, 5, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k192, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_k191(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k191" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k191, env) {
 if (env->num_vars == 1) {
  // ((bruijn optimize-apply 41 17) (close _V0optimize__apply_k192) (##inline ##sys.cons (bruijn ##x.695 1 0) (##inline ##sys.cons (##inline ##sys.cons (quote ##inline) (##inline ##sys.cons (bruijn f 7 1) (bruijn ##x.699 0 0))) (quote ()))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 41, 17)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k192, env)}),
      VInlineCons(
env->up->vars[0],
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10inline.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(env, 7, 1),
      env->vars[0]
    )

    )
,
      VNULL
    )

    )

    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k191, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_k190(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k190" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k190, env) {
 if (env->num_vars == 1) {
  // ((bruijn map 41 3) (close _V0optimize__apply_k191) (bruijn optimize-atom 40 18) (bruijn xs 3 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 41, 3)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k191, env)}),
      VGetArg(env, 40, 18),
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k190, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_k197(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k197" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k197, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.153 26 1) (bruijn ##k.688 7 0) (bruijn ##x.701 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 1)),
      VGetArg(env, 7, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k197, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_k196(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k196" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k196, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 44 10) (close _V0optimize__apply_k197) (bruijn ##x.702 3 0) (bruijn ##x.703 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 44, 10)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k197, env)}),
      env->up->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k196, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_k195(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k195" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k195, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 43 10) (close _V0optimize__apply_k196) (bruijn ##x.704 1 0) (bruijn ##x.705 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 43, 10)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k196, env)}),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k195, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_k194(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k194" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k194, env) {
 if (env->num_vars == 1) {
  // ((bruijn map 42 3) (close _V0optimize__apply_k195) (bruijn optimize-atom 41 18) (bruijn xs 4 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 42, 3)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k195, env)}),
      VGetArg(env, 41, 18),
      VGetArg(env, 4, 1)
    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k194, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_k193(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k193" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k193, env) {
 if (env->num_vars == 1) {
  // ((bruijn optimize-atom 40 18) (close _V0optimize__apply_k194) (bruijn k 4 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 40, 18)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k194, env)}),
      VGetArg(env, 4, 1)
    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k193, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_k189(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k189" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k189, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.708 0 0) ((bruijn optimize-atom 39 18) (close _V0optimize__apply_k190) (bruijn k 3 1)) ((bruijn optimize-atom 39 18) (close _V0optimize__apply_k193) (bruijn f 5 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 39, 18)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k190, env)}),
      env->up->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 39, 18)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k193, env)}),
      VGetArg(env, 5, 1)
    );
}
 } else {
  VError("Not enough arguments to _V0optimize__apply_k189, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_k202(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k202" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k202, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.153 25 1) (bruijn ##k.688 6 0) (bruijn ##x.701 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 1)),
      VGetArg(env, 6, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k202, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_k201(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k201" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k201, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 43 10) (close _V0optimize__apply_k202) (bruijn ##x.702 3 0) (bruijn ##x.703 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 43, 10)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k202, env)}),
      env->up->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k201, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_k200(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k200" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k200, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 42 10) (close _V0optimize__apply_k201) (bruijn ##x.704 1 0) (bruijn ##x.705 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 42, 10)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k201, env)}),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k200, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_k199(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k199" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k199, env) {
 if (env->num_vars == 1) {
  // ((bruijn map 41 3) (close _V0optimize__apply_k200) (bruijn optimize-atom 40 18) (bruijn xs 3 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 41, 3)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k200, env)}),
      VGetArg(env, 40, 18),
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k199, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_k198(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k198" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k198, env) {
 if (env->num_vars == 1) {
  // ((bruijn optimize-atom 39 18) (close _V0optimize__apply_k199) (bruijn k 3 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 39, 18)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k199, env)}),
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k198, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_k188(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k188" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k188, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.706 0 0) ((bruijn lookup-inline 39 8) (close _V0optimize__apply_k189) (bruijn f 4 1)) ((bruijn optimize-atom 38 18) (close _V0optimize__apply_k198) (bruijn f 4 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 39, 8)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k189, env)}),
      VGetArg(env, 4, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 38, 18)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k198, env)}),
      VGetArg(env, 4, 1)
    );
}
 } else {
  VError("Not enough arguments to _V0optimize__apply_k188, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_lambda138(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda138" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda138, env) {
  // ((bruijn symbol? 38 9) (close _V0optimize__apply_k188) (bruijn f 3 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 38, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k188, env)}),
      env->up->up->up->vars[1]
    );
 }
}
static void _V0optimize__apply_lambda137(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda137" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda137, env) {
  // ((close _V0optimize__apply_lambda138) (bruijn ##k.686 0 0) (##inline ##sys.cdr (bruijn ##expr.213 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda138, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0optimize__apply_lambda136(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda136" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda136, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.213 0 1)) ((close _V0optimize__apply_lambda137) (bruijn ##k.681 0 0) (##inline ##sys.car (bruijn ##expr.213 0 1))) ((bruijn ##k.681 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda137, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda135(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda135" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda135, env) {
  // ((close _V0optimize__apply_lambda136) (bruijn ##k.679 0 0) (##inline ##sys.cdr (bruijn ##expr.212 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda136, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0optimize__apply_lambda134(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda134" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda134, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.212 0 1)) ((close _V0optimize__apply_lambda135) (bruijn ##k.674 0 0) (##inline ##sys.car (bruijn ##expr.212 0 1))) ((bruijn ##k.674 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda135, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_k203(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k203" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k203, env) {
 if (env->num_vars == 1) {
  // ((bruijn error 34 11) (bruijn ##k.630 14 0) (##string ##string.3662))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 34, 11)),
      VGetArg(env, 14, 0),
      VEncodePointer(&_V10string_D3662.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k203, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_k187(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k187" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k187, env) {
 if (env->num_vars == 1) {
  // ((close _V0optimize__apply_lambda134) (close _V0optimize__apply_k203) (bruijn ##input.154 13 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda134, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k203, env)}),
      VGetArg(env, 13, 1)
    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k187, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_k184(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k184" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k184, env) {
 if (env->num_vars == 1) {
  // ((close _V0optimize__apply_lambda133) (close _V0optimize__apply_k187) (bruijn ##input.154 12 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda133, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k187, env)}),
      VGetArg(env, 12, 1)
    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k184, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_k181(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k181" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k181, env) {
 if (env->num_vars == 1) {
  // ((close _V0optimize__apply_lambda132) (close _V0optimize__apply_k184) (bruijn ##input.154 11 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda132, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k184, env)}),
      VGetArg(env, 11, 1)
    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k181, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_k178(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k178" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k178, env) {
 if (env->num_vars == 1) {
  // ((close _V0optimize__apply_lambda131) (close _V0optimize__apply_k181) (bruijn ##input.154 10 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda131, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k181, env)}),
      VGetArg(env, 10, 1)
    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k178, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_k175(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k175" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k175, env) {
 if (env->num_vars == 1) {
  // ((close _V0optimize__apply_lambda130) (close _V0optimize__apply_k178) (bruijn ##input.154 9 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda130, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k178, env)}),
      VGetArg(env, 9, 1)
    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k175, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_k164(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k164" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k164, env) {
 if (env->num_vars == 1) {
  // ((close _V0optimize__apply_lambda118) (close _V0optimize__apply_k175) (bruijn ##input.154 8 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda118, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k175, env)}),
      VGetArg(env, 8, 1)
    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k164, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_k153(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k153" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k153, env) {
 if (env->num_vars == 1) {
  // ((close _V0optimize__apply_lambda106) (close _V0optimize__apply_k164) (bruijn ##input.154 7 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda106, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k164, env)}),
      VGetArg(env, 7, 1)
    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k153, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_k142(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k142" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k142, env) {
 if (env->num_vars == 1) {
  // ((close _V0optimize__apply_lambda94) (close _V0optimize__apply_k153) (bruijn ##input.154 6 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda94, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k153, env)}),
      VGetArg(env, 6, 1)
    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k142, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_k118(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k118" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k118, env) {
 if (env->num_vars == 1) {
  // ((close _V0optimize__apply_lambda75) (close _V0optimize__apply_k142) (bruijn ##input.154 5 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda75, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k142, env)}),
      VGetArg(env, 5, 1)
    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k118, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_k114(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k114" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k114, env) {
 if (env->num_vars == 1) {
  // ((close _V0optimize__apply_lambda68) (close _V0optimize__apply_k118) (bruijn ##input.154 4 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda68, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k118, env)}),
      VGetArg(env, 4, 1)
    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k114, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_k111(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k111" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k111, env) {
 if (env->num_vars == 1) {
  // ((close _V0optimize__apply_lambda62) (close _V0optimize__apply_k114) (bruijn ##input.154 3 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda62, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k114, env)}),
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k111, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_k108(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k108" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k108, env) {
 if (env->num_vars == 1) {
  // ((close _V0optimize__apply_lambda56) (close _V0optimize__apply_k111) (bruijn ##input.154 2 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda56, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k111, env)}),
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k108, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_k105(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_k105" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_k105, env) {
 if (env->num_vars == 1) {
  // ((close _V0optimize__apply_lambda54) (close _V0optimize__apply_k108) (bruijn ##input.154 1 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda54, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k108, env)}),
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_k105, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_lambda51(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda51" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda51, env) {
  // ((close _V0optimize__apply_lambda52) (close _V0optimize__apply_k105) (bruijn ##input.154 0 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda52, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_k105, env)}),
      env->vars[1]
    );
 }
}
static void _V0optimize__apply_lambda50(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda50" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda50, env) {
 if (env->num_vars == 2) {
  // ((close _V0optimize__apply_lambda51) (bruijn ##k.628 0 0) (bruijn expr 1 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__apply_lambda51, env)},
      env->vars[0],
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_lambda50, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__apply_lambda49(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda49" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__apply_lambda49, env) {
 if (env->num_vars == 2) {
  // ((bruijn call/cc 18 1) (bruijn ##k.626 0 0) (close _V0optimize__apply_lambda50))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 1)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_lambda50, env)})
    );
 } else {
  VError("Not enough arguments to _V0optimize__apply_lambda49, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void cps_k57(VEnv * env) {
 static VDebugInfo dbg = { "cps_k57" };
 VRecordCall(&dbg);
 V_GC_CHECK(cps_k57, env) {
 if (env->num_vars == 1) {
  // (set! (close cps_k58) (bruijn optimize-apply 16 17) (close _V0optimize__apply_lambda49))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(cps_k58, env)}),
      VEncodeInt(16l), VEncodeInt(17l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__apply_lambda49, env)})
    );
 } else {
  VError("Not enough arguments to cps_k57, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__let_k207(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__let_k207" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__let_k207, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.125 14 1) (bruijn ##k.1844 3 0) (bruijn ##x.1852 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 1)),
      env->up->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0optimize__let_k207, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__let_k206(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__let_k206" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__let_k206, env) {
 if (env->num_vars == 1) {
  // ((bruijn optimize-apply 30 17) (close _V0optimize__let_k207) (bruijn ##x.1853 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 17)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__let_k207, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0optimize__let_k206, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__let_k209(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__let_k209" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__let_k209, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.125 14 1) (bruijn ##k.1844 3 0) (##inline ##sys.cons (bruijn ##x.1856 1 0) (##inline ##sys.cons (bruijn ##x.1858 0 0) (quote ()))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 1)),
      env->up->up->up->vars[0],
      VInlineCons(
env->up->vars[0],
      VInlineCons(
env->vars[0],
      VNULL
    )

    )

    );
 } else {
  VError("Not enough arguments to _V0optimize__let_k209, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__let_k208(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__let_k208" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__let_k208, env) {
 if (env->num_vars == 1) {
  // ((bruijn optimize-atom 30 18) (close _V0optimize__let_k209) (bruijn x 2 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 18)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__let_k209, env)}),
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0optimize__let_k208, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__let_k205(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__let_k205" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__let_k205, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1850 0 0) ((bruijn substitute 29 10) (close _V0optimize__let_k206) (bruijn y 5 1) (bruijn x 1 1) (bruijn expr 3 1)) ((bruijn optimize-atom 29 18) (close _V0optimize__let_k208) (##inline ##sys.cons (quote continuation) (##inline ##sys.cons (##inline ##sys.cons (bruijn y 5 1) (quote ())) (##inline ##sys.cons (bruijn expr 3 1) (quote ()))))))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 10)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__let_k206, env)}),
      VGetArg(env, 5, 1),
      env->up->vars[1],
      env->up->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 18)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__let_k208, env)}),
      VInlineCons(
VEncodePointer(&_V0continuation.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VGetArg(env, 5, 1),
      VNULL
    )
,
      VInlineCons(
env->up->up->up->vars[1],
      VNULL
    )

    )

    )

    );
}
 } else {
  VError("Not enough arguments to _V0optimize__let_k205, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__let_lambda150(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda150" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__let_lambda150, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.132 1 1))) ((bruijn reducible? 28 14) (close _V0optimize__let_k205) (bruijn x 0 1) (bruijn y 4 1) (bruijn expr 2 1)) ((bruijn ##k.1844 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 28, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__let_k205, env)}),
      env->vars[1],
      VGetArg(env, 4, 1),
      env->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__let_lambda149(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda149" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__let_lambda149, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.132 0 1)) ((close _V0optimize__let_lambda150) (bruijn ##k.1839 0 0) (##inline ##sys.car (bruijn ##expr.132 0 1))) ((bruijn ##k.1839 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__let_lambda150, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__let_lambda148(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda148" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__let_lambda148, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.131 1 1))) ((close _V0optimize__let_lambda149) (bruijn ##k.1834 0 0) (##inline ##sys.cdr (bruijn ##expr.127 7 1))) ((bruijn ##k.1834 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__let_lambda149, env)},
      env->vars[0],
      VInlineCdr(
VGetArg(env, 7, 1)
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__let_lambda147(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda147" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__let_lambda147, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.131 0 1)) ((close _V0optimize__let_lambda148) (bruijn ##k.1829 0 0) (##inline ##sys.car (bruijn ##expr.131 0 1))) ((bruijn ##k.1829 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__let_lambda148, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__let_lambda146(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda146" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__let_lambda146, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.130 1 1))) ((close _V0optimize__let_lambda147) (bruijn ##k.1824 0 0) (##inline ##sys.cdr (bruijn ##expr.129 2 1))) ((bruijn ##k.1824 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__let_lambda147, env)},
      env->vars[0],
      VInlineCdr(
env->up->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__let_lambda145(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda145" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__let_lambda145, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.130 0 1)) ((close _V0optimize__let_lambda146) (bruijn ##k.1819 0 0) (##inline ##sys.car (bruijn ##expr.130 0 1))) ((bruijn ##k.1819 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__let_lambda146, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__let_lambda144(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda144" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__let_lambda144, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.129 0 1)) ((close _V0optimize__let_lambda145) (bruijn ##k.1814 0 0) (##inline ##sys.car (bruijn ##expr.129 0 1))) ((bruijn ##k.1814 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__let_lambda145, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__let_k204(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__let_k204" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__let_k204, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1811 0 0) ((close _V0optimize__let_lambda144) (bruijn ##k.1806 1 0) (##inline ##sys.cdr (bruijn ##expr.128 1 1))) ((bruijn ##k.1806 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__let_lambda144, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0optimize__let_k204, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__let_lambda143(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda143" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__let_lambda143, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.128 0 1)) ((bruijn equal? 21 2) (close _V0optimize__let_k204) (quote continuation) (##inline ##sys.car (bruijn ##expr.128 0 1))) ((bruijn ##k.1806 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__let_k204, env)}),
      VEncodePointer(&_V0continuation.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__let_lambda142(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda142" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__let_lambda142, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.127 0 1)) ((close _V0optimize__let_lambda143) (bruijn ##k.1801 0 0) (##inline ##sys.car (bruijn ##expr.127 0 1))) ((bruijn ##k.1801 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__let_lambda143, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__let_k212(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__let_k212" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__let_k212, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 1 1) (bruijn ##k.1674 1 0) (bruijn ##expr.136 4 1) (quote ()))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->up->vars[0],
      VGetArg(env, 4, 1),
      VNULL
    );
 } else {
  VError("Not enough arguments to _V0optimize__let_k212, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda161(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda161" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda161, env) {
  // ((bruijn ##k.139 1 1) (bruijn ##k.1692 0 0) (##inline ##sys.cdr (bruijn ##expr.140 5 1)) (##inline ##sys.cons (bruijn ys 0 1) (bruijn ##ys.137 5 2)))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->vars[0],
      VInlineCdr(
VGetArg(env, 5, 1)
    )
,
      VInlineCons(
env->vars[1],
      VGetArg(env, 5, 2)
    )

    );
 }
}
static void _V0loop_k216(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k216" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k216, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.138 8 1) (bruijn ##k.1686 2 0) (bruijn ##expr.140 6 1) (bruijn ##x.1691 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 1)),
      env->up->up->vars[0],
      VGetArg(env, 6, 1),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k216, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k215(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k215" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k215, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 34 5) (close _V0loop_k216) (bruijn ##ys.137 5 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 34, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k216, env)}),
      VGetArg(env, 5, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k215, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda160(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda160" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda160, env) {
 if (env->num_vars == 2) {
  // ((close _V0loop_lambda161) (close _V0loop_k215) (##inline ##sys.car (bruijn ##expr.140 4 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda161, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k215, env)}),
      VInlineCar(
VGetArg(env, 4, 1)
    )

    );
 } else {
  VError("Not enough arguments to _V0loop_lambda160, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda159(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda159" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda159, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 32 1) (bruijn ##k.1684 0 0) (close _V0loop_lambda160))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 32, 1)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda160, env)})
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda159, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k214(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k214" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k214, env) {
 if (env->num_vars == 1) {
  // ((bruijn call-with-values 31 4) (bruijn ##k.1679 2 0) (close _V0loop_lambda159) (bruijn loop 3 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 31, 4)),
      env->up->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda159, env)}),
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop_k214, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k213(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k213" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k213, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.138 3 1) (close _V0loop_k214) (bruijn ##expr.140 1 1) (bruijn ##x.1700 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[1]),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k214, env)}),
      env->up->vars[1],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k213, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda164(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda164" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda164, env) {
  // ((bruijn ##k.139 1 1) (bruijn ##k.1692 0 0) (##inline ##sys.cdr (bruijn ##expr.140 3 1)) (##inline ##sys.cons (bruijn ys 0 1) (bruijn ##ys.137 3 2)))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->vars[0],
      VInlineCdr(
env->up->up->up->vars[1]
    )
,
      VInlineCons(
env->vars[1],
      env->up->up->up->vars[2]
    )

    );
 }
}
static void _V0loop_k218(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k218" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k218, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.138 6 1) (bruijn ##k.1686 2 0) (bruijn ##expr.140 4 1) (bruijn ##x.1691 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 1)),
      env->up->up->vars[0],
      VGetArg(env, 4, 1),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k218, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k217(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k217" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k217, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 32 5) (close _V0loop_k218) (bruijn ##ys.137 3 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 32, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k218, env)}),
      env->up->up->up->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0loop_k217, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda163(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda163" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda163, env) {
 if (env->num_vars == 2) {
  // ((close _V0loop_lambda164) (close _V0loop_k217) (##inline ##sys.car (bruijn ##expr.140 2 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda164, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k217, env)}),
      VInlineCar(
env->up->up->vars[1]
    )

    );
 } else {
  VError("Not enough arguments to _V0loop_lambda163, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda162(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda162" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda162, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 30 1) (bruijn ##k.1684 0 0) (close _V0loop_lambda163))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 1)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda163, env)})
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda162, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda158(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda158" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda158, env) {
 if (env->num_vars == 3) {
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.140 0 1))) ((bruijn reverse 29 5) (close _V0loop_k213) (bruijn ##ys.137 0 2)) ((bruijn call-with-values 29 4) (bruijn ##k.1679 0 0) (close _V0loop_lambda162) (bruijn loop 1 1)))
if(VDecodeBool(
VInlineNot(
VInlinePairP(
env->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k213, env)}),
      env->vars[2]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 4)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda162, env)}),
      env->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0loop_lambda158, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__let_lambda157(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda157" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__let_lambda157, env) {
  // (set! (close _V0optimize__let_k212) (bruijn loop 0 1) (close _V0loop_lambda158))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__let_k212, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda158, env)})
    );
 }
}
static void _V0optimize__let_lambda156(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda156" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__let_lambda156, env) {
 if (env->num_vars == 2) {
  // ((close _V0optimize__let_lambda157) (bruijn ##k.1672 0 0) #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__let_lambda157, env)},
      env->vars[0],
      VEncodeBool(false)
    );
 } else {
  VError("Not enough arguments to _V0optimize__let_lambda156, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__let_lambda155(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda155" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__let_lambda155, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 26 1) (bruijn ##k.1670 0 0) (close _V0optimize__let_lambda156))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 1)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__let_lambda156, env)})
    );
 } else {
  VError("Not enough arguments to _V0optimize__let_lambda155, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__let_k219(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__let_k219" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__let_k219, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 1 1) (bruijn ##k.1725 1 0) (bruijn ##expr.142 4 1) (quote ()))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->up->vars[0],
      VGetArg(env, 4, 1),
      VNULL
    );
 } else {
  VError("Not enough arguments to _V0optimize__let_k219, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda175(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda175" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda175, env) {
  // ((bruijn ##k.145 1 1) (bruijn ##k.1743 0 0) (##inline ##sys.cdr (bruijn ##expr.146 5 1)) (##inline ##sys.cons (bruijn xs 0 1) (bruijn ##xs.143 5 2)))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->vars[0],
      VInlineCdr(
VGetArg(env, 5, 1)
    )
,
      VInlineCons(
env->vars[1],
      VGetArg(env, 5, 2)
    )

    );
 }
}
static void _V0loop_k223(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k223" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k223, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.144 8 1) (bruijn ##k.1737 2 0) (bruijn ##expr.146 6 1) (bruijn ##x.1742 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 1)),
      env->up->up->vars[0],
      VGetArg(env, 6, 1),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k223, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k222(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k222" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k222, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 38 5) (close _V0loop_k223) (bruijn ##xs.143 5 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 38, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k223, env)}),
      VGetArg(env, 5, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k222, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda174(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda174" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda174, env) {
 if (env->num_vars == 2) {
  // ((close _V0loop_lambda175) (close _V0loop_k222) (##inline ##sys.car (bruijn ##expr.146 4 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda175, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k222, env)}),
      VInlineCar(
VGetArg(env, 4, 1)
    )

    );
 } else {
  VError("Not enough arguments to _V0loop_lambda174, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda173(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda173" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda173, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 36 1) (bruijn ##k.1735 0 0) (close _V0loop_lambda174))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 36, 1)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda174, env)})
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda173, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k221(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k221" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k221, env) {
 if (env->num_vars == 1) {
  // ((bruijn call-with-values 35 4) (bruijn ##k.1730 2 0) (close _V0loop_lambda173) (bruijn loop 3 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 35, 4)),
      env->up->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda173, env)}),
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop_k221, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k220(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k220" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k220, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.144 3 1) (close _V0loop_k221) (bruijn ##expr.146 1 1) (bruijn ##x.1751 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[1]),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k221, env)}),
      env->up->vars[1],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k220, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda178(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda178" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda178, env) {
  // ((bruijn ##k.145 1 1) (bruijn ##k.1743 0 0) (##inline ##sys.cdr (bruijn ##expr.146 3 1)) (##inline ##sys.cons (bruijn xs 0 1) (bruijn ##xs.143 3 2)))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->vars[0],
      VInlineCdr(
env->up->up->up->vars[1]
    )
,
      VInlineCons(
env->vars[1],
      env->up->up->up->vars[2]
    )

    );
 }
}
static void _V0loop_k225(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k225" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k225, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.144 6 1) (bruijn ##k.1737 2 0) (bruijn ##expr.146 4 1) (bruijn ##x.1742 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 1)),
      env->up->up->vars[0],
      VGetArg(env, 4, 1),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k225, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k224(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k224" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k224, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 36 5) (close _V0loop_k225) (bruijn ##xs.143 3 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 36, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k225, env)}),
      env->up->up->up->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0loop_k224, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda177(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda177" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda177, env) {
 if (env->num_vars == 2) {
  // ((close _V0loop_lambda178) (close _V0loop_k224) (##inline ##sys.car (bruijn ##expr.146 2 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda178, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k224, env)}),
      VInlineCar(
env->up->up->vars[1]
    )

    );
 } else {
  VError("Not enough arguments to _V0loop_lambda177, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda176(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda176" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda176, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 34 1) (bruijn ##k.1735 0 0) (close _V0loop_lambda177))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 34, 1)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda177, env)})
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda176, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda172(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda172" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda172, env) {
 if (env->num_vars == 3) {
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.146 0 1))) ((bruijn reverse 33 5) (close _V0loop_k220) (bruijn ##xs.143 0 2)) ((bruijn call-with-values 33 4) (bruijn ##k.1730 0 0) (close _V0loop_lambda176) (bruijn loop 1 1)))
if(VDecodeBool(
VInlineNot(
VInlinePairP(
env->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 33, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k220, env)}),
      env->vars[2]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 33, 4)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda176, env)}),
      env->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0loop_lambda172, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__let_lambda171(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda171" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__let_lambda171, env) {
  // (set! (close _V0optimize__let_k219) (bruijn loop 0 1) (close _V0loop_lambda172))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__let_k219, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda172, env)})
    );
 }
}
static void _V0optimize__let_lambda170(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda170" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__let_lambda170, env) {
 if (env->num_vars == 2) {
  // ((close _V0optimize__let_lambda171) (bruijn ##k.1723 0 0) #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__let_lambda171, env)},
      env->vars[0],
      VEncodeBool(false)
    );
 } else {
  VError("Not enough arguments to _V0optimize__let_lambda170, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__let_lambda169(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda169" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__let_lambda169, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 30 1) (bruijn ##k.1721 0 0) (close _V0optimize__let_lambda170))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 1)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__let_lambda170, env)})
    );
 } else {
  VError("Not enough arguments to _V0optimize__let_lambda169, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__let_k232(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__let_k232" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__let_k232, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.125 19 1) (bruijn ##k.1755 7 0) (##inline ##sys.cons (bruijn ##x.1764 1 0) (bruijn ##x.1765 0 0)))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 1)),
      VGetArg(env, 7, 0),
      VInlineCons(
env->up->vars[0],
      env->vars[0]
    )

    );
 } else {
  VError("Not enough arguments to _V0optimize__let_k232, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__let_k231(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__let_k231" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__let_k231, env) {
 if (env->num_vars == 1) {
  // ((bruijn map 36 3) (close _V0optimize__let_k232) (bruijn optimize-atom 35 18) (bruijn xs 6 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 36, 3)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__let_k232, env)}),
      VGetArg(env, 35, 18),
      VGetArg(env, 6, 2)
    );
 } else {
  VError("Not enough arguments to _V0optimize__let_k231, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__let_k230(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__let_k230" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__let_k230, env) {
 if (env->num_vars == 1) {
  // ((bruijn optimize-atom 34 18) (close _V0optimize__let_k231) (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (bruijn ys 9 2) (##inline ##sys.cons (bruijn expr 7 1) (quote ())))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 34, 18)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__let_k231, env)}),
      VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(env, 9, 2),
      VInlineCons(
VGetArg(env, 7, 1),
      VNULL
    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0optimize__let_k230, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__let_k234(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__let_k234" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__let_k234, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.125 18 1) (bruijn ##k.1755 6 0) (##inline ##sys.cons (bruijn ##x.1764 1 0) (bruijn ##x.1765 0 0)))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 1)),
      VGetArg(env, 6, 0),
      VInlineCons(
env->up->vars[0],
      env->vars[0]
    )

    );
 } else {
  VError("Not enough arguments to _V0optimize__let_k234, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__let_k233(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__let_k233" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__let_k233, env) {
 if (env->num_vars == 1) {
  // ((bruijn map 35 3) (close _V0optimize__let_k234) (bruijn optimize-atom 34 18) (bruijn xs 5 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 35, 3)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__let_k234, env)}),
      VGetArg(env, 34, 18),
      VGetArg(env, 5, 2)
    );
 } else {
  VError("Not enough arguments to _V0optimize__let_k233, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__let_k229(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__let_k229" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__let_k229, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1769 0 0) ((bruijn error 34 11) (close _V0optimize__let_k230) (##string ##string.3663)) ((bruijn optimize-atom 33 18) (close _V0optimize__let_k233) (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (bruijn ys 8 2) (##inline ##sys.cons (bruijn expr 6 1) (quote ()))))))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 34, 11)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__let_k230, env)}),
      VEncodePointer(&_V10string_D3663.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 33, 18)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__let_k233, env)}),
      VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(env, 8, 2),
      VInlineCons(
VGetArg(env, 6, 1),
      VNULL
    )

    )

    )

    );
}
 } else {
  VError("Not enough arguments to _V0optimize__let_k229, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__let_k228(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__let_k228" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__let_k228, env) {
 if (env->num_vars == 1) {
  // ((bruijn not 33 6) (close _V0optimize__let_k229) (bruijn ##x.1774 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 33, 6)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__let_k229, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0optimize__let_k228, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__let_k227(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__let_k227" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__let_k227, env) {
 if (env->num_vars == 1) {
  // ((bruijn = 32 7) (close _V0optimize__let_k228) (bruijn ##x.1775 1 0) (bruijn ##x.1776 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 32, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__let_k228, env)}),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0optimize__let_k227, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__let_k226(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__let_k226" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__let_k226, env) {
 if (env->num_vars == 1) {
  // ((bruijn length 31 12) (close _V0optimize__let_k227) (bruijn xs 1 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 31, 12)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__let_k227, env)}),
      env->up->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0optimize__let_k226, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__let_lambda179(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda179" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__let_lambda179, env) {
 if (env->num_vars == 3) {
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((bruijn length 30 12) (close _V0optimize__let_k226) (bruijn ys 4 2)) ((bruijn ##k.1755 0 0) #f))
if(VDecodeBool(
VInlineNullP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 12)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__let_k226, env)}),
      VGetArg(env, 4, 2)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0optimize__let_lambda179, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__let_lambda168(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda168" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__let_lambda168, env) {
  // ((bruijn call-with-values 29 4) (bruijn ##k.1719 0 0) (close _V0optimize__let_lambda169) (close _V0optimize__let_lambda179))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 4)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__let_lambda169, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__let_lambda179, env)})
    );
 }
}
static void _V0optimize__let_lambda167(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda167" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__let_lambda167, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.141 1 1))) ((close _V0optimize__let_lambda168) (bruijn ##k.1714 0 0) (##inline ##sys.cdr (bruijn ##expr.133 7 1))) ((bruijn ##k.1714 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__let_lambda168, env)},
      env->vars[0],
      VInlineCdr(
VGetArg(env, 7, 1)
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__let_lambda166(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda166" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__let_lambda166, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.141 0 1)) ((close _V0optimize__let_lambda167) (bruijn ##k.1709 0 0) (##inline ##sys.car (bruijn ##expr.141 0 1))) ((bruijn ##k.1709 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__let_lambda167, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__let_lambda165(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda165" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__let_lambda165, env) {
 if (env->num_vars == 3) {
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((close _V0optimize__let_lambda166) (bruijn ##k.1704 0 0) (##inline ##sys.cdr (bruijn ##expr.135 2 1))) ((bruijn ##k.1704 0 0) #f))
if(VDecodeBool(
VInlineNullP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__let_lambda166, env)},
      env->vars[0],
      VInlineCdr(
env->up->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0optimize__let_lambda165, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__let_lambda154(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda154" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__let_lambda154, env) {
  // ((bruijn call-with-values 25 4) (bruijn ##k.1668 0 0) (close _V0optimize__let_lambda155) (close _V0optimize__let_lambda165))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 4)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__let_lambda155, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__let_lambda165, env)})
    );
 }
}
static void _V0optimize__let_lambda153(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda153" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__let_lambda153, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.135 0 1)) ((close _V0optimize__let_lambda154) (bruijn ##k.1663 0 0) (##inline ##sys.car (bruijn ##expr.135 0 1))) ((bruijn ##k.1663 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__let_lambda154, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__let_k211(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__let_k211" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__let_k211, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1660 0 0) ((close _V0optimize__let_lambda153) (bruijn ##k.1655 1 0) (##inline ##sys.cdr (bruijn ##expr.134 1 1))) ((bruijn ##k.1655 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__let_lambda153, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0optimize__let_k211, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__let_lambda152(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda152" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__let_lambda152, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.134 0 1)) ((bruijn equal? 22 2) (close _V0optimize__let_k211) (quote lambda) (##inline ##sys.car (bruijn ##expr.134 0 1))) ((bruijn ##k.1655 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__let_k211, env)}),
      VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__let_lambda151(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda151" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__let_lambda151, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.133 0 1)) ((close _V0optimize__let_lambda152) (bruijn ##k.1650 0 0) (##inline ##sys.car (bruijn ##expr.133 0 1))) ((bruijn ##k.1650 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__let_lambda152, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__let_k243(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__let_k243" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__let_k243, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.125 18 1) (bruijn ##k.1611 7 0) (##inline ##sys.cons (bruijn ##x.1617 1 0) (bruijn ##x.1618 0 0)))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 1)),
      VGetArg(env, 7, 0),
      VInlineCons(
env->up->vars[0],
      env->vars[0]
    )

    );
 } else {
  VError("Not enough arguments to _V0optimize__let_k243, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__let_k242(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__let_k242" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__let_k242, env) {
 if (env->num_vars == 1) {
  // ((bruijn map 35 3) (close _V0optimize__let_k243) (bruijn optimize-atom 34 18) (bruijn xs 6 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 35, 3)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__let_k243, env)}),
      VGetArg(env, 34, 18),
      VGetArg(env, 6, 1)
    );
 } else {
  VError("Not enough arguments to _V0optimize__let_k242, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__let_k241(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__let_k241" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__let_k241, env) {
 if (env->num_vars == 1) {
  // ((bruijn optimize-atom 33 18) (close _V0optimize__let_k242) (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (bruijn ys 8 1) (##inline ##sys.cons (bruijn expr 6 1) (quote ())))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 33, 18)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__let_k242, env)}),
      VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(env, 8, 1),
      VInlineCons(
VGetArg(env, 6, 1),
      VNULL
    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0optimize__let_k241, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__let_k245(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__let_k245" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__let_k245, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.125 17 1) (bruijn ##k.1611 6 0) (##inline ##sys.cons (bruijn ##x.1617 1 0) (bruijn ##x.1618 0 0)))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 1)),
      VGetArg(env, 6, 0),
      VInlineCons(
env->up->vars[0],
      env->vars[0]
    )

    );
 } else {
  VError("Not enough arguments to _V0optimize__let_k245, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__let_k244(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__let_k244" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__let_k244, env) {
 if (env->num_vars == 1) {
  // ((bruijn map 34 3) (close _V0optimize__let_k245) (bruijn optimize-atom 33 18) (bruijn xs 5 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 34, 3)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__let_k245, env)}),
      VGetArg(env, 33, 18),
      VGetArg(env, 5, 1)
    );
 } else {
  VError("Not enough arguments to _V0optimize__let_k244, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__let_k240(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__let_k240" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__let_k240, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1622 0 0) ((bruijn error 33 11) (close _V0optimize__let_k241) (##string ##string.3663)) ((bruijn optimize-atom 32 18) (close _V0optimize__let_k244) (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (bruijn ys 7 1) (##inline ##sys.cons (bruijn expr 5 1) (quote ()))))))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 33, 11)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__let_k241, env)}),
      VEncodePointer(&_V10string_D3663.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 32, 18)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__let_k244, env)}),
      VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(env, 7, 1),
      VInlineCons(
VGetArg(env, 5, 1),
      VNULL
    )

    )

    )

    );
}
 } else {
  VError("Not enough arguments to _V0optimize__let_k240, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__let_k239(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__let_k239" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__let_k239, env) {
 if (env->num_vars == 1) {
  // ((bruijn not 32 6) (close _V0optimize__let_k240) (bruijn ##x.1627 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 32, 6)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__let_k240, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0optimize__let_k239, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__let_k238(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__let_k238" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__let_k238, env) {
 if (env->num_vars == 1) {
  // ((bruijn <= 31 13) (close _V0optimize__let_k239) (bruijn ##x.1628 1 0) (bruijn ##x.1629 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 31, 13)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__let_k239, env)}),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0optimize__let_k238, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__let_k237(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__let_k237" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__let_k237, env) {
 if (env->num_vars == 1) {
  // ((bruijn length 30 12) (close _V0optimize__let_k238) (bruijn xs 1 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 12)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__let_k238, env)}),
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0optimize__let_k237, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__let_lambda186(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda186" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__let_lambda186, env) {
  // ((bruijn taillength 28 15) (close _V0optimize__let_k237) (bruijn ys 3 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 28, 15)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__let_k237, env)}),
      env->up->up->up->vars[1]
    );
 }
}
static void _V0optimize__let_lambda185(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda185" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__let_lambda185, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.150 1 1))) ((close _V0optimize__let_lambda186) (bruijn ##k.1606 0 0) (##inline ##sys.cdr (bruijn ##expr.147 6 1))) ((bruijn ##k.1606 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__let_lambda186, env)},
      env->vars[0],
      VInlineCdr(
VGetArg(env, 6, 1)
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__let_lambda184(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda184" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__let_lambda184, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.150 0 1)) ((close _V0optimize__let_lambda185) (bruijn ##k.1601 0 0) (##inline ##sys.car (bruijn ##expr.150 0 1))) ((bruijn ##k.1601 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__let_lambda185, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__let_lambda183(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda183" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__let_lambda183, env) {
  // ((close _V0optimize__let_lambda184) (bruijn ##k.1599 0 0) (##inline ##sys.cdr (bruijn ##expr.149 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__let_lambda184, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0optimize__let_lambda182(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda182" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__let_lambda182, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.149 0 1)) ((close _V0optimize__let_lambda183) (bruijn ##k.1594 0 0) (##inline ##sys.car (bruijn ##expr.149 0 1))) ((bruijn ##k.1594 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__let_lambda183, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__let_k236(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__let_k236" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__let_k236, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1591 0 0) ((close _V0optimize__let_lambda182) (bruijn ##k.1586 1 0) (##inline ##sys.cdr (bruijn ##expr.148 1 1))) ((bruijn ##k.1586 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__let_lambda182, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0optimize__let_k236, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__let_lambda181(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda181" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__let_lambda181, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.148 0 1)) ((bruijn equal? 23 2) (close _V0optimize__let_k236) (quote lambda) (##inline ##sys.car (bruijn ##expr.148 0 1))) ((bruijn ##k.1586 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__let_k236, env)}),
      VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__let_lambda180(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda180" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__let_lambda180, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.147 0 1)) ((close _V0optimize__let_lambda181) (bruijn ##k.1581 0 0) (##inline ##sys.car (bruijn ##expr.147 0 1))) ((bruijn ##k.1581 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__let_lambda181, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__let_k248(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__let_k248" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__let_k248, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.125 8 1) (bruijn ##k.1564 2 0) (bruijn ##x.1572 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 1)),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0optimize__let_k248, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__let_k247(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__let_k247" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__let_k247, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1569 0 0) ((bruijn error 25 11) (close _V0optimize__let_k248) (##string ##string.3664)) ((bruijn ##k.1564 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 11)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__let_k248, env)}),
      VEncodePointer(&_V10string_D3664.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0optimize__let_k247, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__let_lambda188(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda188" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__let_lambda188, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.152 0 1)) ((bruijn equal? 24 2) (close _V0optimize__let_k247) (quote continuation) (##inline ##sys.car (bruijn ##expr.152 0 1))) ((bruijn ##k.1564 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__let_k247, env)}),
      VEncodePointer(&_V0continuation.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__let_lambda187(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda187" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__let_lambda187, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.151 0 1)) ((close _V0optimize__let_lambda188) (bruijn ##k.1559 0 0) (##inline ##sys.car (bruijn ##expr.151 0 1))) ((bruijn ##k.1559 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__let_lambda188, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__let_k249(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__let_k249" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__let_k249, env) {
 if (env->num_vars == 1) {
  // ((bruijn error 23 11) (bruijn ##k.1545 4 0) (##string ##string.3662))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 11)),
      VGetArg(env, 4, 0),
      VEncodePointer(&_V10string_D3662.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0optimize__let_k249, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__let_k246(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__let_k246" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__let_k246, env) {
 if (env->num_vars == 1) {
  // ((close _V0optimize__let_lambda187) (close _V0optimize__let_k249) (bruijn ##input.126 3 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__let_lambda187, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__let_k249, env)}),
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0optimize__let_k246, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__let_k235(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__let_k235" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__let_k235, env) {
 if (env->num_vars == 1) {
  // ((close _V0optimize__let_lambda180) (close _V0optimize__let_k246) (bruijn ##input.126 2 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__let_lambda180, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__let_k246, env)}),
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0optimize__let_k235, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__let_k210(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__let_k210" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__let_k210, env) {
 if (env->num_vars == 1) {
  // ((close _V0optimize__let_lambda151) (close _V0optimize__let_k235) (bruijn ##input.126 1 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__let_lambda151, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__let_k235, env)}),
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0optimize__let_k210, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__let_lambda141(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda141" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__let_lambda141, env) {
  // ((close _V0optimize__let_lambda142) (close _V0optimize__let_k210) (bruijn ##input.126 0 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__let_lambda142, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__let_k210, env)}),
      env->vars[1]
    );
 }
}
static void _V0optimize__let_lambda140(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda140" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__let_lambda140, env) {
 if (env->num_vars == 2) {
  // ((close _V0optimize__let_lambda141) (bruijn ##k.1543 0 0) (bruijn let-expr 1 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__let_lambda141, env)},
      env->vars[0],
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0optimize__let_lambda140, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__let_lambda139(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda139" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__let_lambda139, env) {
 if (env->num_vars == 2) {
  // ((bruijn call/cc 17 1) (bruijn ##k.1541 0 0) (close _V0optimize__let_lambda140))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 1)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__let_lambda140, env)})
    );
 } else {
  VError("Not enough arguments to _V0optimize__let_lambda139, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void cps_k56(VEnv * env) {
 static VDebugInfo dbg = { "cps_k56" };
 VRecordCall(&dbg);
 V_GC_CHECK(cps_k56, env) {
 if (env->num_vars == 1) {
  // (set! (close cps_k57) (bruijn optimize-let 15 16) (close _V0optimize__let_lambda139))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(cps_k57, env)}),
      VEncodeInt(15l), VEncodeInt(16l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__let_lambda139, env)})
    );
 } else {
  VError("Not enough arguments to cps_k56, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0taillength_k250(VEnv * env) {
 static VDebugInfo dbg = { "_V0taillength_k250" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0taillength_k250, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 1 1) (bruijn ##k.1897 1 0) (bruijn lst 2 1) 0)
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->up->vars[0],
      env->up->up->vars[1],
      VEncodeInt(0l)
    );
 } else {
  VError("Not enough arguments to _V0taillength_k250, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k253(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k253" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k253, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 4 1) (bruijn ##k.1902 3 0) (bruijn ##x.1907 1 0) (bruijn ##x.1908 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 1)),
      env->up->up->up->vars[0],
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k253, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k252(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k252" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k252, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 20 14) (close _V0loop_k253) (bruijn len 2 2) 1)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k253, env)}),
      env->up->up->vars[2],
      VEncodeInt(1l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k252, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k251(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k251" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k251, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1904 0 0) ((bruijn cdr 19 15) (close _V0loop_k252) (bruijn lst 1 1)) ((bruijn ##k.1902 1 0) (bruijn len 1 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 15)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k252, env)}),
      env->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      env->up->vars[2]
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k251, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda191(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda191" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda191, env) {
 if (env->num_vars == 3) {
  // ((bruijn pair? 18 16) (close _V0loop_k251) (bruijn lst 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 16)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k251, env)}),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda191, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0taillength_lambda190(VEnv * env) {
 static VDebugInfo dbg = { "_V0taillength_lambda190" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0taillength_lambda190, env) {
  // (set! (close _V0taillength_k250) (bruijn loop 0 1) (close _V0loop_lambda191))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0taillength_k250, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda191, env)})
    );
 }
}
static void _V0taillength_lambda189(VEnv * env) {
 static VDebugInfo dbg = { "_V0taillength_lambda189" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0taillength_lambda189, env) {
 if (env->num_vars == 2) {
  // ((close _V0taillength_lambda190) (bruijn ##k.1895 0 0) #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0taillength_lambda190, env)},
      env->vars[0],
      VEncodeBool(false)
    );
 } else {
  VError("Not enough arguments to _V0taillength_lambda189, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void cps_k55(VEnv * env) {
 static VDebugInfo dbg = { "cps_k55" };
 VRecordCall(&dbg);
 V_GC_CHECK(cps_k55, env) {
 if (env->num_vars == 1) {
  // (set! (close cps_k56) (bruijn taillength 14 15) (close _V0taillength_lambda189))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(cps_k56, env)}),
      VEncodeInt(14l), VEncodeInt(15l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0taillength_lambda189, env)})
    );
 } else {
  VError("Not enough arguments to cps_k55, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0reducible_Q_k257(VEnv * env) {
 static VDebugInfo dbg = { "_V0reducible_Q_k257" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0reducible_Q_k257, env) {
 if (env->num_vars == 1) {
  // ((bruijn = 19 7) (bruijn ##k.1911 4 0) 1 (bruijn ##x.1919 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 7)),
      VGetArg(env, 4, 0),
      VEncodeInt(1l),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0reducible_Q_k257, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0reducible_Q_k256(VEnv * env) {
 static VDebugInfo dbg = { "_V0reducible_Q_k256" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0reducible_Q_k256, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1916 0 0) ((bruijn ##k.1911 3 0) (bruijn ##x.1916 0 0)) ((bruijn ref-count 17 6) (close _V0reducible_Q_k257) (bruijn y 3 2) (bruijn expr 3 3)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[0]),
      env->vars[0]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 6)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0reducible_Q_k257, env)}),
      env->up->up->up->vars[2],
      env->up->up->up->vars[3]
    );
}
 } else {
  VError("Not enough arguments to _V0reducible_Q_k256, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0reducible_Q_k255(VEnv * env) {
 static VDebugInfo dbg = { "_V0reducible_Q_k255" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0reducible_Q_k255, env) {
 if (env->num_vars == 1) {
  // ((bruijn eqv? 17 19) (close _V0reducible_Q_k256) (bruijn ##x.1920 0 0) (quote quote))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0reducible_Q_k256, env)}),
      env->vars[0],
      VEncodePointer(&_V0quote.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0reducible_Q_k255, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0reducible_Q_k254(VEnv * env) {
 static VDebugInfo dbg = { "_V0reducible_Q_k254" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0reducible_Q_k254, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1913 0 0) ((bruijn ##k.1911 1 0) (bruijn ##x.1913 0 0)) ((bruijn car 16 18) (close _V0reducible_Q_k255) (bruijn x 1 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      env->vars[0]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 18)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0reducible_Q_k255, env)}),
      env->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0reducible_Q_k254, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0reducible_Q_lambda192(VEnv * env) {
 static VDebugInfo dbg = { "_V0reducible_Q_lambda192" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0reducible_Q_lambda192, env) {
 if (env->num_vars == 4) {
  // ((bruijn atom? 15 17) (close _V0reducible_Q_k254) (bruijn x 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 17)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0reducible_Q_k254, env)}),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0reducible_Q_lambda192, got ~D~N"
  "-- expected 4~N"
  , env->num_vars);
 }
 }
}
static void cps_k54(VEnv * env) {
 static VDebugInfo dbg = { "cps_k54" };
 VRecordCall(&dbg);
 V_GC_CHECK(cps_k54, env) {
 if (env->num_vars == 1) {
  // (set! (close cps_k55) (bruijn reducible? 13 14) (close _V0reducible_Q_lambda192))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(cps_k55, env)}),
      VEncodeInt(13l), VEncodeInt(14l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0reducible_Q_lambda192, env)})
    );
 } else {
  VError("Not enough arguments to cps_k54, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__lambda_k258(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__lambda_k258" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__lambda_k258, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.117 8 1) (bruijn ##k.1949 1 0) (bruijn ##x.1954 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 1)),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0optimize__lambda_k258, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__lambda_k265(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__lambda_k265" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__lambda_k265, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1993 0 0) ((bruijn ##k.122 11 1) (bruijn ##k.1977 6 0) (bruijn f 7 1)) ((bruijn ##k.122 11 1) (bruijn ##k.1977 6 0) (##inline ##sys.cons (bruijn lamb 16 1) (##inline ##sys.cons (bruijn xs 14 1) (##inline ##sys.cons (##inline ##sys.cons (bruijn f 7 1) (bruijn ys 6 1)) (quote ()))))))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 1)),
      VGetArg(env, 6, 0),
      VGetArg(env, 7, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 1)),
      VGetArg(env, 6, 0),
      VInlineCons(
VGetArg(env, 16, 1),
      VInlineCons(
VGetArg(env, 14, 1),
      VInlineCons(
VInlineCons(
VGetArg(env, 7, 1),
      VGetArg(env, 6, 1)
    )
,
      VNULL
    )

    )

    )

    );
}
 } else {
  VError("Not enough arguments to _V0optimize__lambda_k265, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__lambda_k264(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__lambda_k264" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__lambda_k264, env) {
 if (env->num_vars == 1) {
  // ((bruijn = 33 7) (close _V0optimize__lambda_k265) 0 (bruijn ##x.1994 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 33, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__lambda_k265, env)}),
      VEncodeInt(0l),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0optimize__lambda_k264, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__lambda_k263(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__lambda_k263" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__lambda_k263, env) {
 if (env->num_vars == 1) {
  // ((bruijn fold 32 20) (close _V0optimize__lambda_k264) (bruijn + 32 14) 0 (bruijn ##x.1995 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 32, 20)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__lambda_k264, env)}),
      VGetArg(env, 32, 14),
      VEncodeInt(0l),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0optimize__lambda_k263, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__lambda_lambda207(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__lambda_lambda207" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__lambda_lambda207, env) {
 if (env->num_vars == 2) {
  // ((bruijn ref-count 31 6) (bruijn ##k.1996 0 0) (bruijn x 0 1) (bruijn f 5 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 31, 6)),
      env->vars[0],
      env->vars[1],
      VGetArg(env, 5, 1)
    );
 } else {
  VError("Not enough arguments to _V0optimize__lambda_lambda207, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__lambda_k262(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__lambda_k262" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__lambda_k262, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1991 0 0) ((bruijn map 31 3) (close _V0optimize__lambda_k263) (close _V0optimize__lambda_lambda207) (bruijn xs 11 1)) ((bruijn ##k.122 8 1) (bruijn ##k.1977 3 0) (##inline ##sys.cons (bruijn lamb 13 1) (##inline ##sys.cons (bruijn xs 11 1) (##inline ##sys.cons (##inline ##sys.cons (bruijn f 4 1) (bruijn ys 3 1)) (quote ()))))))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 31, 3)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__lambda_k263, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__lambda_lambda207, env)}),
      VGetArg(env, 11, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 1)),
      env->up->up->up->vars[0],
      VInlineCons(
VGetArg(env, 13, 1),
      VInlineCons(
VGetArg(env, 11, 1),
      VInlineCons(
VInlineCons(
VGetArg(env, 4, 1),
      env->up->up->up->vars[1]
    )
,
      VNULL
    )

    )

    )

    );
}
 } else {
  VError("Not enough arguments to _V0optimize__lambda_k262, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__lambda_k261(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__lambda_k261" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__lambda_k261, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1988 0 0) ((bruijn equal? 30 2) (close _V0optimize__lambda_k262) (bruijn xs 10 1) (bruijn ys 2 1)) ((bruijn ##k.122 7 1) (bruijn ##k.1977 2 0) (##inline ##sys.cons (bruijn lamb 12 1) (##inline ##sys.cons (bruijn xs 10 1) (##inline ##sys.cons (##inline ##sys.cons (bruijn f 3 1) (bruijn ys 2 1)) (quote ()))))))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__lambda_k262, env)}),
      VGetArg(env, 10, 1),
      env->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 1)),
      env->up->up->vars[0],
      VInlineCons(
VGetArg(env, 12, 1),
      VInlineCons(
VGetArg(env, 10, 1),
      VInlineCons(
VInlineCons(
env->up->up->up->vars[1],
      env->up->up->vars[1]
    )
,
      VNULL
    )

    )

    )

    );
}
 } else {
  VError("Not enough arguments to _V0optimize__lambda_k261, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__lambda_k260(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__lambda_k260" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__lambda_k260, env) {
 if (env->num_vars == 1) {
  // ((bruijn not 29 6) (close _V0optimize__lambda_k261) (bruijn ##x.1998 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 6)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__lambda_k261, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0optimize__lambda_k260, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__lambda_lambda206(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__lambda_lambda206" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__lambda_lambda206, env) {
  // ((bruijn special-apply? 27 12) (close _V0optimize__lambda_k260) (bruijn f 1 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 27, 12)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__lambda_k260, env)}),
      env->up->vars[1]
    );
 }
}
static void _V0optimize__lambda_lambda205(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__lambda_lambda205" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__lambda_lambda205, env) {
  // ((close _V0optimize__lambda_lambda206) (bruijn ##k.1975 0 0) (##inline ##sys.cdr (bruijn ##expr.124 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__lambda_lambda206, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0optimize__lambda_lambda204(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__lambda_lambda204" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__lambda_lambda204, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.124 0 1)) ((close _V0optimize__lambda_lambda205) (bruijn ##k.1970 0 0) (##inline ##sys.car (bruijn ##expr.124 0 1))) ((bruijn ##k.1970 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__lambda_lambda205, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__lambda_lambda208(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__lambda_lambda208" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__lambda_lambda208, env) {
  // ((bruijn ##k.122 4 1) (bruijn ##k.1965 0 0) (##inline ##sys.cons (bruijn lamb 9 1) (##inline ##sys.cons (bruijn xs 7 1) (##inline ##sys.cons (bruijn opt-body 0 1) (quote ())))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 1)),
      env->vars[0],
      VInlineCons(
VGetArg(env, 9, 1),
      VInlineCons(
VGetArg(env, 7, 1),
      VInlineCons(
env->vars[1],
      VNULL
    )

    )

    )

    );
 }
}
static void _V0optimize__lambda_k267(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__lambda_k267" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__lambda_k267, env) {
 if (env->num_vars == 1) {
  // ((bruijn error 27 11) (bruijn ##k.1957 2 0) (##string ##string.3662))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 27, 11)),
      env->up->up->vars[0],
      VEncodePointer(&_V10string_D3662.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0optimize__lambda_k267, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__lambda_k266(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__lambda_k266" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__lambda_k266, env) {
 if (env->num_vars == 1) {
  // ((close _V0optimize__lambda_lambda208) (close _V0optimize__lambda_k267) (bruijn ##input.123 1 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__lambda_lambda208, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__lambda_k267, env)}),
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0optimize__lambda_k266, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__lambda_lambda203(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__lambda_lambda203" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__lambda_lambda203, env) {
  // ((close _V0optimize__lambda_lambda204) (close _V0optimize__lambda_k266) (bruijn ##input.123 0 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__lambda_lambda204, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__lambda_k266, env)}),
      env->vars[1]
    );
 }
}
static void _V0optimize__lambda_k259(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__lambda_k259" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__lambda_k259, env) {
 if (env->num_vars == 1) {
  // ((close _V0optimize__lambda_lambda203) (bruijn ##k.1955 1 0) (bruijn ##x.2003 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__lambda_lambda203, env)},
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0optimize__lambda_k259, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__lambda_lambda202(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__lambda_lambda202" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__lambda_lambda202, env) {
 if (env->num_vars == 2) {
  // ((bruijn optimize-apply 22 17) (close _V0optimize__lambda_k259) (bruijn body 1 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 17)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__lambda_k259, env)}),
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0optimize__lambda_lambda202, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__lambda_lambda201(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__lambda_lambda201" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__lambda_lambda201, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.121 1 1))) ((bruijn call/cc 22 1) (close _V0optimize__lambda_k258) (close _V0optimize__lambda_lambda202)) ((bruijn ##k.1949 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__lambda_k258, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__lambda_lambda202, env)})
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__lambda_lambda200(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__lambda_lambda200" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__lambda_lambda200, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.121 0 1)) ((close _V0optimize__lambda_lambda201) (bruijn ##k.1944 0 0) (##inline ##sys.car (bruijn ##expr.121 0 1))) ((bruijn ##k.1944 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__lambda_lambda201, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__lambda_lambda199(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__lambda_lambda199" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__lambda_lambda199, env) {
  // ((close _V0optimize__lambda_lambda200) (bruijn ##k.1942 0 0) (##inline ##sys.cdr (bruijn ##expr.120 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__lambda_lambda200, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0optimize__lambda_lambda198(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__lambda_lambda198" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__lambda_lambda198, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.120 0 1)) ((close _V0optimize__lambda_lambda199) (bruijn ##k.1937 0 0) (##inline ##sys.car (bruijn ##expr.120 0 1))) ((bruijn ##k.1937 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__lambda_lambda199, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__lambda_lambda197(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__lambda_lambda197" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__lambda_lambda197, env) {
  // ((close _V0optimize__lambda_lambda198) (bruijn ##k.1935 0 0) (##inline ##sys.cdr (bruijn ##expr.119 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__lambda_lambda198, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0optimize__lambda_lambda196(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__lambda_lambda196" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__lambda_lambda196, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.119 0 1)) ((close _V0optimize__lambda_lambda197) (bruijn ##k.1930 0 0) (##inline ##sys.car (bruijn ##expr.119 0 1))) ((bruijn ##k.1930 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__lambda_lambda197, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__lambda_k268(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__lambda_k268" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__lambda_k268, env) {
 if (env->num_vars == 1) {
  // ((bruijn error 17 11) (bruijn ##k.1925 1 0) (##string ##string.3662))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 11)),
      env->up->vars[0],
      VEncodePointer(&_V10string_D3662.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0optimize__lambda_k268, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__lambda_lambda195(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__lambda_lambda195" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__lambda_lambda195, env) {
  // ((close _V0optimize__lambda_lambda196) (close _V0optimize__lambda_k268) (bruijn ##input.118 0 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__lambda_lambda196, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__lambda_k268, env)}),
      env->vars[1]
    );
 }
}
static void _V0optimize__lambda_lambda194(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__lambda_lambda194" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__lambda_lambda194, env) {
 if (env->num_vars == 2) {
  // ((close _V0optimize__lambda_lambda195) (bruijn ##k.1923 0 0) (bruijn expr 1 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0optimize__lambda_lambda195, env)},
      env->vars[0],
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0optimize__lambda_lambda194, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0optimize__lambda_lambda193(VEnv * env) {
 static VDebugInfo dbg = { "_V0optimize__lambda_lambda193" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0optimize__lambda_lambda193, env) {
 if (env->num_vars == 2) {
  // ((bruijn call/cc 14 1) (bruijn ##k.1921 0 0) (close _V0optimize__lambda_lambda194))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 1)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__lambda_lambda194, env)})
    );
 } else {
  VError("Not enough arguments to _V0optimize__lambda_lambda193, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void cps_k53(VEnv * env) {
 static VDebugInfo dbg = { "cps_k53" };
 VRecordCall(&dbg);
 V_GC_CHECK(cps_k53, env) {
 if (env->num_vars == 1) {
  // (set! (close cps_k54) (bruijn optimize-lambda 12 13) (close _V0optimize__lambda_lambda193))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(cps_k54, env)}),
      VEncodeInt(12l), VEncodeInt(13l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0optimize__lambda_lambda193, env)})
    );
 } else {
  VError("Not enough arguments to cps_k53, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0special__apply_Q_lambda209(VEnv * env) {
 static VDebugInfo dbg = { "_V0special__apply_Q_lambda209" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0special__apply_Q_lambda209, env) {
 if (env->num_vars == 2) {
  // ((bruijn eqv? 13 19) (bruijn ##k.2018 0 0) (bruijn tok 0 1) (quote if))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 19)),
      env->vars[0],
      env->vars[1],
      VEncodePointer(&_V0if.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0special__apply_Q_lambda209, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void cps_k52(VEnv * env) {
 static VDebugInfo dbg = { "cps_k52" };
 VRecordCall(&dbg);
 V_GC_CHECK(cps_k52, env) {
 if (env->num_vars == 1) {
  // (set! (close cps_k53) (bruijn special-apply? 11 12) (close _V0special__apply_Q_lambda209))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(cps_k53, env)}),
      VEncodeInt(11l), VEncodeInt(12l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0special__apply_Q_lambda209, env)})
    );
 } else {
  VError("Not enough arguments to cps_k52, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0alpha__convert_k270(VEnv * env) {
 static VDebugInfo dbg = { "_V0alpha__convert_k270" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0alpha__convert_k270, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.2022 2 0) (bruijn expr 3 1))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->vars[0]),
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0alpha__convert_k270, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0make__substitutes_k273(VEnv * env) {
 static VDebugInfo dbg = { "_V0make__substitutes_k273" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0make__substitutes_k273, env) {
 if (env->num_vars == 1) {
  // ((bruijn make-substitutes 5 2) (bruijn ##k.2030 3 0) (bruijn ##x.2040 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 5, 2)),
      env->up->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0make__substitutes_k273, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0make__substitutes_k279(VEnv * env) {
 static VDebugInfo dbg = { "_V0make__substitutes_k279" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0make__substitutes_k279, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 23 10) (bruijn ##k.2030 8 0) (bruijn ##x.2043 2 0) (bruijn ##x.2044 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 10)),
      VGetArg(env, 8, 0),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0make__substitutes_k279, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0make__substitutes_k278(VEnv * env) {
 static VDebugInfo dbg = { "_V0make__substitutes_k278" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0make__substitutes_k278, env) {
 if (env->num_vars == 1) {
  // ((bruijn make-substitutes 9 2) (close _V0make__substitutes_k279) (bruijn ##x.2045 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0make__substitutes_k279, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0make__substitutes_k278, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0make__substitutes_k277(VEnv * env) {
 static VDebugInfo dbg = { "_V0make__substitutes_k277" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0make__substitutes_k277, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 21 15) (close _V0make__substitutes_k278) (bruijn args 6 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 15)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0make__substitutes_k278, env)}),
      VGetArg(env, 6, 1)
    );
 } else {
  VError("Not enough arguments to _V0make__substitutes_k277, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0make__substitutes_k276(VEnv * env) {
 static VDebugInfo dbg = { "_V0make__substitutes_k276" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0make__substitutes_k276, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 20 10) (close _V0make__substitutes_k277) (bruijn ##x.2046 2 0) (bruijn ##x.2047 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 10)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0make__substitutes_k277, env)}),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0make__substitutes_k276, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0make__substitutes_k275(VEnv * env) {
 static VDebugInfo dbg = { "_V0make__substitutes_k275" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0make__substitutes_k275, env) {
 if (env->num_vars == 1) {
  // ((bruijn make-conversion 6 1) (close _V0make__substitutes_k276) (bruijn ##x.2048 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0make__substitutes_k276, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0make__substitutes_k275, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0make__substitutes_k274(VEnv * env) {
 static VDebugInfo dbg = { "_V0make__substitutes_k274" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0make__substitutes_k274, env) {
 if (env->num_vars == 1) {
  // ((bruijn car 18 18) (close _V0make__substitutes_k275) (bruijn args 3 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 18)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0make__substitutes_k275, env)}),
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0make__substitutes_k274, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0make__substitutes_k272(VEnv * env) {
 static VDebugInfo dbg = { "_V0make__substitutes_k272" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0make__substitutes_k272, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2037 0 0) ((bruijn cons 17 10) (close _V0make__substitutes_k273) (bruijn args 2 1) (quote ())) ((bruijn car 17 18) (close _V0make__substitutes_k274) (bruijn args 2 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 10)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0make__substitutes_k273, env)}),
      env->up->up->vars[1],
      VNULL
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 18)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0make__substitutes_k274, env)}),
      env->up->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0make__substitutes_k272, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0make__substitutes_k271(VEnv * env) {
 static VDebugInfo dbg = { "_V0make__substitutes_k271" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0make__substitutes_k271, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2032 0 0) ((bruijn ##k.2030 1 0) (quote ())) ((bruijn symbol? 16 9) (close _V0make__substitutes_k272) (bruijn args 1 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VNULL
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0make__substitutes_k272, env)}),
      env->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0make__substitutes_k271, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0make__substitutes_lambda212(VEnv * env) {
 static VDebugInfo dbg = { "_V0make__substitutes_lambda212" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0make__substitutes_lambda212, env) {
 if (env->num_vars == 2) {
  // ((bruijn null? 15 27) (close _V0make__substitutes_k271) (bruijn args 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 27)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0make__substitutes_k271, env)}),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0make__substitutes_lambda212, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0alpha__convert_k269(VEnv * env) {
 static VDebugInfo dbg = { "_V0alpha__convert_k269" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0alpha__convert_k269, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0alpha__convert_k270) (bruijn make-substitutes 1 2) (close _V0make__substitutes_lambda212))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0alpha__convert_k270, env)}),
      VEncodeInt(1l), VEncodeInt(2l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0make__substitutes_lambda212, env)})
    );
 } else {
  VError("Not enough arguments to _V0alpha__convert_k269, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0make__conversion_k284(VEnv * env) {
 static VDebugInfo dbg = { "_V0make__conversion_k284" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0make__conversion_k284, env) {
 if (env->num_vars == 1) {
  // ((bruijn gensym 20 26) (bruijn ##k.2051 4 0) (bruijn ##x.2056 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 26)),
      VGetArg(env, 4, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0make__conversion_k284, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0make__conversion_k283(VEnv * env) {
 static VDebugInfo dbg = { "_V0make__conversion_k283" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0make__conversion_k283, env) {
 if (env->num_vars == 1) {
  // ((bruijn string->symbol 19 24) (close _V0make__conversion_k284) (bruijn ##x.2057 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 24)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0make__conversion_k284, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0make__conversion_k283, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0make__conversion_k282(VEnv * env) {
 static VDebugInfo dbg = { "_V0make__conversion_k282" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0make__conversion_k282, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2054 0 0) ((bruijn substring 18 25) (close _V0make__conversion_k283) (bruijn str 2 1) 2) ((bruijn gensym 18 26) (bruijn ##k.2051 2 0) (bruijn sym 4 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 25)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0make__conversion_k283, env)}),
      env->up->up->vars[1],
      VEncodeInt(2l)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 26)),
      env->up->up->vars[0],
      VGetArg(env, 4, 1)
    );
}
 } else {
  VError("Not enough arguments to _V0make__conversion_k282, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0make__conversion_k281(VEnv * env) {
 static VDebugInfo dbg = { "_V0make__conversion_k281" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0make__conversion_k281, env) {
 if (env->num_vars == 1) {
  // ((bruijn eq? 17 23) (close _V0make__conversion_k282) #\# (bruijn ##x.2060 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 23)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0make__conversion_k282, env)}),
      VEncodeChar('#'),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0make__conversion_k281, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0make__conversion_lambda214(VEnv * env) {
 static VDebugInfo dbg = { "_V0make__conversion_lambda214" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0make__conversion_lambda214, env) {
  // ((bruijn string-ref 16 22) (close _V0make__conversion_k281) (bruijn str 0 1) 0)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 22)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0make__conversion_k281, env)}),
      env->vars[1],
      VEncodeInt(0l)
    );
 }
}
static void _V0make__conversion_k280(VEnv * env) {
 static VDebugInfo dbg = { "_V0make__conversion_k280" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0make__conversion_k280, env) {
 if (env->num_vars == 1) {
  // ((close _V0make__conversion_lambda214) (bruijn ##k.2049 1 0) (bruijn ##x.2061 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0make__conversion_lambda214, env)},
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0make__conversion_k280, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0make__conversion_lambda213(VEnv * env) {
 static VDebugInfo dbg = { "_V0make__conversion_lambda213" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0make__conversion_lambda213, env) {
 if (env->num_vars == 2) {
  // ((bruijn symbol->string 14 21) (close _V0make__conversion_k280) (bruijn sym 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 21)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0make__conversion_k280, env)}),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0make__conversion_lambda213, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0alpha__convert_lambda211(VEnv * env) {
 static VDebugInfo dbg = { "_V0alpha__convert_lambda211" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0alpha__convert_lambda211, env) {
  // (set! (close _V0alpha__convert_k269) (bruijn make-conversion 0 1) (close _V0make__conversion_lambda213))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0alpha__convert_k269, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0make__conversion_lambda213, env)})
    );
 }
}
static void _V0alpha__convert_lambda210(VEnv * env) {
 static VDebugInfo dbg = { "_V0alpha__convert_lambda210" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0alpha__convert_lambda210, env) {
 if (env->num_vars == 2) {
  // ((close _V0alpha__convert_lambda211) (bruijn ##k.2020 0 0) #f #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0alpha__convert_lambda211, env)},
      env->vars[0],
      VEncodeBool(false),
      VEncodeBool(false)
    );
 } else {
  VError("Not enough arguments to _V0alpha__convert_lambda210, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void cps_k51(VEnv * env) {
 static VDebugInfo dbg = { "cps_k51" };
 VRecordCall(&dbg);
 V_GC_CHECK(cps_k51, env) {
 if (env->num_vars == 1) {
  // (set! (close cps_k52) (bruijn alpha-convert 10 11) (close _V0alpha__convert_lambda210))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(cps_k52, env)}),
      VEncodeInt(10l), VEncodeInt(11l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0alpha__convert_lambda210, env)})
    );
 } else {
  VError("Not enough arguments to cps_k51, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0substitute_k287(VEnv * env) {
 static VDebugInfo dbg = { "_V0substitute_k287" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0substitute_k287, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.97 9 1) (bruijn ##k.2292 2 0) (bruijn ##x.2297 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 1)),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0substitute_k287, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0substitute_k286(VEnv * env) {
 static VDebugInfo dbg = { "_V0substitute_k286" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0substitute_k286, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 20 10) (close _V0substitute_k287) (quote lambda) (bruijn ##x.2298 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 10)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0substitute_k287, env)}),
      VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0substitute_k286, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0substitute_lambda222(VEnv * env) {
 static VDebugInfo dbg = { "_V0substitute_lambda222" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0substitute_lambda222, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.101 1 1))) ((bruijn substitute-lambda 18 9) (close _V0substitute_k286) (bruijn x 8 1) (bruijn atom 8 2) (bruijn args 2 1) (bruijn body 0 1)) ((bruijn ##k.2292 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0substitute_k286, env)}),
      VGetArg(env, 8, 1),
      VGetArg(env, 8, 2),
      env->up->up->vars[1],
      env->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0substitute_lambda221(VEnv * env) {
 static VDebugInfo dbg = { "_V0substitute_lambda221" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0substitute_lambda221, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.101 0 1)) ((close _V0substitute_lambda222) (bruijn ##k.2287 0 0) (##inline ##sys.car (bruijn ##expr.101 0 1))) ((bruijn ##k.2287 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0substitute_lambda222, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0substitute_lambda220(VEnv * env) {
 static VDebugInfo dbg = { "_V0substitute_lambda220" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0substitute_lambda220, env) {
  // ((close _V0substitute_lambda221) (bruijn ##k.2285 0 0) (##inline ##sys.cdr (bruijn ##expr.100 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0substitute_lambda221, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0substitute_lambda219(VEnv * env) {
 static VDebugInfo dbg = { "_V0substitute_lambda219" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0substitute_lambda219, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.100 0 1)) ((close _V0substitute_lambda220) (bruijn ##k.2280 0 0) (##inline ##sys.car (bruijn ##expr.100 0 1))) ((bruijn ##k.2280 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0substitute_lambda220, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0substitute_k285(VEnv * env) {
 static VDebugInfo dbg = { "_V0substitute_k285" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0substitute_k285, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2277 0 0) ((close _V0substitute_lambda219) (bruijn ##k.2272 1 0) (##inline ##sys.cdr (bruijn ##expr.99 1 1))) ((bruijn ##k.2272 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0substitute_lambda219, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0substitute_k285, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0substitute_lambda218(VEnv * env) {
 static VDebugInfo dbg = { "_V0substitute_lambda218" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0substitute_lambda218, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.99 0 1)) ((bruijn equal? 14 2) (close _V0substitute_k285) (quote lambda) (##inline ##sys.car (bruijn ##expr.99 0 1))) ((bruijn ##k.2272 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0substitute_k285, env)}),
      VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0substitute_k291(VEnv * env) {
 static VDebugInfo dbg = { "_V0substitute_k291" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0substitute_k291, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.97 10 1) (bruijn ##k.2249 2 0) (bruijn ##x.2254 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 10, 1)),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0substitute_k291, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0substitute_k290(VEnv * env) {
 static VDebugInfo dbg = { "_V0substitute_k290" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0substitute_k290, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 21 10) (close _V0substitute_k291) (quote continuation) (bruijn ##x.2255 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 10)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0substitute_k291, env)}),
      VEncodePointer(&_V0continuation.sym, VPOINTER_OTHER),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0substitute_k290, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0substitute_lambda227(VEnv * env) {
 static VDebugInfo dbg = { "_V0substitute_lambda227" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0substitute_lambda227, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.104 1 1))) ((bruijn substitute-lambda 19 9) (close _V0substitute_k290) (bruijn x 9 1) (bruijn atom 9 2) (bruijn args 2 1) (bruijn body 0 1)) ((bruijn ##k.2249 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0substitute_k290, env)}),
      VGetArg(env, 9, 1),
      VGetArg(env, 9, 2),
      env->up->up->vars[1],
      env->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0substitute_lambda226(VEnv * env) {
 static VDebugInfo dbg = { "_V0substitute_lambda226" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0substitute_lambda226, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.104 0 1)) ((close _V0substitute_lambda227) (bruijn ##k.2244 0 0) (##inline ##sys.car (bruijn ##expr.104 0 1))) ((bruijn ##k.2244 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0substitute_lambda227, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0substitute_lambda225(VEnv * env) {
 static VDebugInfo dbg = { "_V0substitute_lambda225" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0substitute_lambda225, env) {
  // ((close _V0substitute_lambda226) (bruijn ##k.2242 0 0) (##inline ##sys.cdr (bruijn ##expr.103 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0substitute_lambda226, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0substitute_lambda224(VEnv * env) {
 static VDebugInfo dbg = { "_V0substitute_lambda224" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0substitute_lambda224, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.103 0 1)) ((close _V0substitute_lambda225) (bruijn ##k.2237 0 0) (##inline ##sys.car (bruijn ##expr.103 0 1))) ((bruijn ##k.2237 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0substitute_lambda225, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0substitute_k289(VEnv * env) {
 static VDebugInfo dbg = { "_V0substitute_k289" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0substitute_k289, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2234 0 0) ((close _V0substitute_lambda224) (bruijn ##k.2229 1 0) (##inline ##sys.cdr (bruijn ##expr.102 1 1))) ((bruijn ##k.2229 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0substitute_lambda224, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0substitute_k289, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0substitute_lambda223(VEnv * env) {
 static VDebugInfo dbg = { "_V0substitute_lambda223" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0substitute_lambda223, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.102 0 1)) ((bruijn equal? 15 2) (close _V0substitute_k289) (quote continuation) (##inline ##sys.car (bruijn ##expr.102 0 1))) ((bruijn ##k.2229 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0substitute_k289, env)}),
      VEncodePointer(&_V0continuation.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0substitute_k294(VEnv * env) {
 static VDebugInfo dbg = { "_V0substitute_k294" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0substitute_k294, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 1 1) (bruijn ##k.2154 1 0) (bruijn ##expr.106 4 1) (quote ()) (quote ()))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->up->vars[0],
      VGetArg(env, 4, 1),
      VNULL,
      VNULL
    );
 } else {
  VError("Not enough arguments to _V0substitute_k294, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda239(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda239" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda239, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.113 1 1))) ((bruijn ##k.110 4 1) (bruijn ##k.2185 0 0) (##inline ##sys.cdr (bruijn ##expr.111 9 1)) (##inline ##sys.cons (bruijn args 2 1) (bruijn ##args.107 9 2)) (##inline ##sys.cons (bruijn body 0 1) (bruijn ##body.108 9 3))) ((bruijn ##k.2185 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 1)),
      env->vars[0],
      VInlineCdr(
VGetArg(env, 9, 1)
    )
,
      VInlineCons(
env->up->up->vars[1],
      VGetArg(env, 9, 2)
    )
,
      VInlineCons(
env->vars[1],
      VGetArg(env, 9, 3)
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda238(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda238" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda238, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.113 0 1)) ((close _V0loop_lambda239) (bruijn ##k.2180 0 0) (##inline ##sys.car (bruijn ##expr.113 0 1))) ((bruijn ##k.2180 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda239, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda237(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda237" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda237, env) {
  // ((close _V0loop_lambda238) (bruijn ##k.2178 0 0) (##inline ##sys.cdr (bruijn ##expr.112 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda238, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0loop_lambda236(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda236" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda236, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.112 0 1)) ((close _V0loop_lambda237) (bruijn ##k.2173 0 0) (##inline ##sys.car (bruijn ##expr.112 0 1))) ((bruijn ##k.2173 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda237, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k300(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k300" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k300, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.109 10 1) (bruijn ##k.2166 3 0) (bruijn ##expr.111 8 1) (bruijn ##x.2171 1 0) (bruijn ##x.2172 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 10, 1)),
      env->up->up->up->vars[0],
      VGetArg(env, 8, 1),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k300, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k299(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k299" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k299, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 29 5) (close _V0loop_k300) (bruijn ##body.108 7 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k300, env)}),
      VGetArg(env, 7, 3)
    );
 } else {
  VError("Not enough arguments to _V0loop_k299, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k298(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k298" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k298, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 28 5) (close _V0loop_k299) (bruijn ##args.107 6 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 28, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k299, env)}),
      VGetArg(env, 6, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k298, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda235(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda235" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda235, env) {
 if (env->num_vars == 2) {
  // ((close _V0loop_lambda236) (close _V0loop_k298) (##inline ##sys.car (bruijn ##expr.111 5 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda236, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k298, env)}),
      VInlineCar(
VGetArg(env, 5, 1)
    )

    );
 } else {
  VError("Not enough arguments to _V0loop_lambda235, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda234(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda234" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda234, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 26 1) (bruijn ##k.2164 0 0) (close _V0loop_lambda235))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 1)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda235, env)})
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda234, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k297(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k297" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k297, env) {
 if (env->num_vars == 1) {
  // ((bruijn call-with-values 25 4) (bruijn ##k.2159 3 0) (close _V0loop_lambda234) (bruijn loop 4 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 4)),
      env->up->up->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda234, env)}),
      VGetArg(env, 4, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k297, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k296(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k296" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k296, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.109 4 1) (close _V0loop_k297) (bruijn ##expr.111 2 1) (bruijn ##x.2207 1 0) (bruijn ##x.2208 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k297, env)}),
      env->up->up->vars[1],
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k296, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k295(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k295" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k295, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 23 5) (close _V0loop_k296) (bruijn ##body.108 1 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k296, env)}),
      env->up->vars[3]
    );
 } else {
  VError("Not enough arguments to _V0loop_k295, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda245(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda245" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda245, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.113 1 1))) ((bruijn ##k.110 4 1) (bruijn ##k.2185 0 0) (##inline ##sys.cdr (bruijn ##expr.111 6 1)) (##inline ##sys.cons (bruijn args 2 1) (bruijn ##args.107 6 2)) (##inline ##sys.cons (bruijn body 0 1) (bruijn ##body.108 6 3))) ((bruijn ##k.2185 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 1)),
      env->vars[0],
      VInlineCdr(
VGetArg(env, 6, 1)
    )
,
      VInlineCons(
env->up->up->vars[1],
      VGetArg(env, 6, 2)
    )
,
      VInlineCons(
env->vars[1],
      VGetArg(env, 6, 3)
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda244(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda244" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda244, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.113 0 1)) ((close _V0loop_lambda245) (bruijn ##k.2180 0 0) (##inline ##sys.car (bruijn ##expr.113 0 1))) ((bruijn ##k.2180 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda245, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda243(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda243" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda243, env) {
  // ((close _V0loop_lambda244) (bruijn ##k.2178 0 0) (##inline ##sys.cdr (bruijn ##expr.112 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda244, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0loop_lambda242(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda242" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda242, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.112 0 1)) ((close _V0loop_lambda243) (bruijn ##k.2173 0 0) (##inline ##sys.car (bruijn ##expr.112 0 1))) ((bruijn ##k.2173 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda243, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k303(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k303" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k303, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.109 7 1) (bruijn ##k.2166 3 0) (bruijn ##expr.111 5 1) (bruijn ##x.2171 1 0) (bruijn ##x.2172 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 1)),
      env->up->up->up->vars[0],
      VGetArg(env, 5, 1),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k303, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k302(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k302" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k302, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 26 5) (close _V0loop_k303) (bruijn ##body.108 4 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k303, env)}),
      VGetArg(env, 4, 3)
    );
 } else {
  VError("Not enough arguments to _V0loop_k302, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k301(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k301" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k301, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 25 5) (close _V0loop_k302) (bruijn ##args.107 3 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k302, env)}),
      env->up->up->up->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0loop_k301, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda241(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda241" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda241, env) {
 if (env->num_vars == 2) {
  // ((close _V0loop_lambda242) (close _V0loop_k301) (##inline ##sys.car (bruijn ##expr.111 2 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda242, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k301, env)}),
      VInlineCar(
env->up->up->vars[1]
    )

    );
 } else {
  VError("Not enough arguments to _V0loop_lambda241, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda240(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda240" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda240, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 23 1) (bruijn ##k.2164 0 0) (close _V0loop_lambda241))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 1)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda241, env)})
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda240, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda233(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda233" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda233, env) {
 if (env->num_vars == 4) {
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.111 0 1))) ((bruijn reverse 22 5) (close _V0loop_k295) (bruijn ##args.107 0 2)) ((bruijn call-with-values 22 4) (bruijn ##k.2159 0 0) (close _V0loop_lambda240) (bruijn loop 1 1)))
if(VDecodeBool(
VInlineNot(
VInlinePairP(
env->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k295, env)}),
      env->vars[2]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 4)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda240, env)}),
      env->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0loop_lambda233, got ~D~N"
  "-- expected 4~N"
  , env->num_vars);
 }
 }
}
static void _V0substitute_lambda232(VEnv * env) {
 static VDebugInfo dbg = { "_V0substitute_lambda232" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0substitute_lambda232, env) {
  // (set! (close _V0substitute_k294) (bruijn loop 0 1) (close _V0loop_lambda233))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0substitute_k294, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda233, env)})
    );
 }
}
static void _V0substitute_lambda231(VEnv * env) {
 static VDebugInfo dbg = { "_V0substitute_lambda231" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0substitute_lambda231, env) {
 if (env->num_vars == 2) {
  // ((close _V0substitute_lambda232) (bruijn ##k.2152 0 0) #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0substitute_lambda232, env)},
      env->vars[0],
      VEncodeBool(false)
    );
 } else {
  VError("Not enough arguments to _V0substitute_lambda231, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0substitute_lambda230(VEnv * env) {
 static VDebugInfo dbg = { "_V0substitute_lambda230" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0substitute_lambda230, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 19 1) (bruijn ##k.2150 0 0) (close _V0substitute_lambda231))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 1)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0substitute_lambda231, env)})
    );
 } else {
  VError("Not enough arguments to _V0substitute_lambda230, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0substitute_k305(VEnv * env) {
 static VDebugInfo dbg = { "_V0substitute_k305" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0substitute_k305, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.97 9 1) (bruijn ##k.2212 2 0) (bruijn ##x.2217 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 1)),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0substitute_k305, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0substitute_k304(VEnv * env) {
 static VDebugInfo dbg = { "_V0substitute_k304" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0substitute_k304, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 20 10) (close _V0substitute_k305) (quote case-lambda) (bruijn ##x.2218 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 10)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0substitute_k305, env)}),
      VEncodePointer(&_V0case__lambda.sym, VPOINTER_OTHER),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0substitute_k304, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0substitute_lambda247(VEnv * env) {
 static VDebugInfo dbg = { "_V0substitute_lambda247" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0substitute_lambda247, env) {
 if (env->num_vars == 3) {
  // ((bruijn substitute-lambda 19 9) (bruijn ##k.2219 0 0) (bruijn x 9 1) (bruijn atom 9 2) (bruijn args 0 1) (bruijn body 0 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 9)),
      env->vars[0],
      VGetArg(env, 9, 1),
      VGetArg(env, 9, 2),
      env->vars[1],
      env->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0substitute_lambda247, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0substitute_lambda246(VEnv * env) {
 static VDebugInfo dbg = { "_V0substitute_lambda246" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0substitute_lambda246, env) {
 if (env->num_vars == 4) {
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((bruijn map 19 3) (close _V0substitute_k304) (close _V0substitute_lambda247) (bruijn args 0 2) (bruijn body 0 3)) ((bruijn ##k.2212 0 0) #f))
if(VDecodeBool(
VInlineNullP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 3)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0substitute_k304, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0substitute_lambda247, env)}),
      env->vars[2],
      env->vars[3]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0substitute_lambda246, got ~D~N"
  "-- expected 4~N"
  , env->num_vars);
 }
 }
}
static void _V0substitute_lambda229(VEnv * env) {
 static VDebugInfo dbg = { "_V0substitute_lambda229" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0substitute_lambda229, env) {
  // ((bruijn call-with-values 18 4) (bruijn ##k.2148 0 0) (close _V0substitute_lambda230) (close _V0substitute_lambda246))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 4)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0substitute_lambda230, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0substitute_lambda246, env)})
    );
 }
}
static void _V0substitute_k293(VEnv * env) {
 static VDebugInfo dbg = { "_V0substitute_k293" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0substitute_k293, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2145 0 0) ((close _V0substitute_lambda229) (bruijn ##k.2140 1 0) (##inline ##sys.cdr (bruijn ##expr.105 1 1))) ((bruijn ##k.2140 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0substitute_lambda229, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0substitute_k293, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0substitute_lambda228(VEnv * env) {
 static VDebugInfo dbg = { "_V0substitute_lambda228" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0substitute_lambda228, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.105 0 1)) ((bruijn equal? 16 2) (close _V0substitute_k293) (quote case-lambda) (##inline ##sys.car (bruijn ##expr.105 0 1))) ((bruijn ##k.2140 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0substitute_k293, env)}),
      VEncodePointer(&_V0case__lambda.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0substitute_lambda250(VEnv * env) {
 static VDebugInfo dbg = { "_V0substitute_lambda250" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0substitute_lambda250, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.115 1 1))) ((bruijn ##k.97 8 1) (bruijn ##k.2123 0 0) (bruijn expr 9 3)) ((bruijn ##k.2123 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 1)),
      env->vars[0],
      VGetArg(env, 9, 3)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0substitute_lambda249(VEnv * env) {
 static VDebugInfo dbg = { "_V0substitute_lambda249" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0substitute_lambda249, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.115 0 1)) ((close _V0substitute_lambda250) (bruijn ##k.2118 0 0) (##inline ##sys.car (bruijn ##expr.115 0 1))) ((bruijn ##k.2118 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0substitute_lambda250, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0substitute_k307(VEnv * env) {
 static VDebugInfo dbg = { "_V0substitute_k307" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0substitute_k307, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2115 0 0) ((close _V0substitute_lambda249) (bruijn ##k.2110 1 0) (##inline ##sys.cdr (bruijn ##expr.114 1 1))) ((bruijn ##k.2110 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0substitute_lambda249, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0substitute_k307, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0substitute_lambda248(VEnv * env) {
 static VDebugInfo dbg = { "_V0substitute_lambda248" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0substitute_lambda248, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.114 0 1)) ((bruijn equal? 17 2) (close _V0substitute_k307) (quote quote) (##inline ##sys.car (bruijn ##expr.114 0 1))) ((bruijn ##k.2110 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0substitute_k307, env)}),
      VEncodePointer(&_V0quote.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0substitute_k311(VEnv * env) {
 static VDebugInfo dbg = { "_V0substitute_k311" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0substitute_k311, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.97 11 1) (bruijn ##k.2101 3 0) (bruijn ##x.2103 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 1)),
      env->up->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0substitute_k311, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0substitute_k310(VEnv * env) {
 static VDebugInfo dbg = { "_V0substitute_k310" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0substitute_k310, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 22 10) (close _V0substitute_k311) (bruijn ##x.2104 1 0) (bruijn ##x.2105 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 10)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0substitute_k311, env)}),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0substitute_k310, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0substitute_k309(VEnv * env) {
 static VDebugInfo dbg = { "_V0substitute_k309" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0substitute_k309, env) {
 if (env->num_vars == 1) {
  // ((bruijn substitute 20 10) (close _V0substitute_k310) (bruijn x 10 1) (bruijn atom 10 2) (bruijn xs 1 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 10)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0substitute_k310, env)}),
      VGetArg(env, 10, 1),
      VGetArg(env, 10, 2),
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0substitute_k309, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0substitute_lambda253(VEnv * env) {
 static VDebugInfo dbg = { "_V0substitute_lambda253" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0substitute_lambda253, env) {
  // ((bruijn substitute 19 10) (close _V0substitute_k309) (bruijn x 9 1) (bruijn atom 9 2) (bruijn f 1 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 10)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0substitute_k309, env)}),
      VGetArg(env, 9, 1),
      VGetArg(env, 9, 2),
      env->up->vars[1]
    );
 }
}
static void _V0substitute_lambda252(VEnv * env) {
 static VDebugInfo dbg = { "_V0substitute_lambda252" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0substitute_lambda252, env) {
  // ((close _V0substitute_lambda253) (bruijn ##k.2099 0 0) (##inline ##sys.cdr (bruijn ##expr.116 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0substitute_lambda253, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0substitute_lambda251(VEnv * env) {
 static VDebugInfo dbg = { "_V0substitute_lambda251" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0substitute_lambda251, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.116 0 1)) ((close _V0substitute_lambda252) (bruijn ##k.2094 0 0) (##inline ##sys.car (bruijn ##expr.116 0 1))) ((bruijn ##k.2094 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0substitute_lambda252, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0substitute_k313(VEnv * env) {
 static VDebugInfo dbg = { "_V0substitute_k313" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0substitute_k313, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2089 0 0) ((bruijn ##k.97 8 1) (bruijn ##k.2086 1 0) (bruijn atom 9 2)) ((bruijn ##k.97 8 1) (bruijn ##k.2086 1 0) (bruijn y 1 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 1)),
      env->up->vars[0],
      VGetArg(env, 9, 2)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 1)),
      env->up->vars[0],
      env->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0substitute_k313, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0substitute_lambda254(VEnv * env) {
 static VDebugInfo dbg = { "_V0substitute_lambda254" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0substitute_lambda254, env) {
  // ((bruijn eqv? 19 19) (close _V0substitute_k313) (bruijn x 8 1) (bruijn y 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0substitute_k313, env)}),
      VGetArg(env, 8, 1),
      env->vars[1]
    );
 }
}
static void _V0substitute_k314(VEnv * env) {
 static VDebugInfo dbg = { "_V0substitute_k314" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0substitute_k314, env) {
 if (env->num_vars == 1) {
  // ((bruijn error 19 11) (bruijn ##k.2066 6 0) (##string ##string.3662))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 11)),
      VGetArg(env, 6, 0),
      VEncodePointer(&_V10string_D3662.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0substitute_k314, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0substitute_k312(VEnv * env) {
 static VDebugInfo dbg = { "_V0substitute_k312" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0substitute_k312, env) {
 if (env->num_vars == 1) {
  // ((close _V0substitute_lambda254) (close _V0substitute_k314) (bruijn ##input.98 5 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0substitute_lambda254, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0substitute_k314, env)}),
      VGetArg(env, 5, 1)
    );
 } else {
  VError("Not enough arguments to _V0substitute_k312, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0substitute_k308(VEnv * env) {
 static VDebugInfo dbg = { "_V0substitute_k308" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0substitute_k308, env) {
 if (env->num_vars == 1) {
  // ((close _V0substitute_lambda251) (close _V0substitute_k312) (bruijn ##input.98 4 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0substitute_lambda251, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0substitute_k312, env)}),
      VGetArg(env, 4, 1)
    );
 } else {
  VError("Not enough arguments to _V0substitute_k308, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0substitute_k306(VEnv * env) {
 static VDebugInfo dbg = { "_V0substitute_k306" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0substitute_k306, env) {
 if (env->num_vars == 1) {
  // ((close _V0substitute_lambda248) (close _V0substitute_k308) (bruijn ##input.98 3 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0substitute_lambda248, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0substitute_k308, env)}),
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0substitute_k306, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0substitute_k292(VEnv * env) {
 static VDebugInfo dbg = { "_V0substitute_k292" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0substitute_k292, env) {
 if (env->num_vars == 1) {
  // ((close _V0substitute_lambda228) (close _V0substitute_k306) (bruijn ##input.98 2 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0substitute_lambda228, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0substitute_k306, env)}),
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0substitute_k292, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0substitute_k288(VEnv * env) {
 static VDebugInfo dbg = { "_V0substitute_k288" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0substitute_k288, env) {
 if (env->num_vars == 1) {
  // ((close _V0substitute_lambda223) (close _V0substitute_k292) (bruijn ##input.98 1 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0substitute_lambda223, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0substitute_k292, env)}),
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0substitute_k288, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0substitute_lambda217(VEnv * env) {
 static VDebugInfo dbg = { "_V0substitute_lambda217" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0substitute_lambda217, env) {
  // ((close _V0substitute_lambda218) (close _V0substitute_k288) (bruijn ##input.98 0 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0substitute_lambda218, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0substitute_k288, env)}),
      env->vars[1]
    );
 }
}
static void _V0substitute_lambda216(VEnv * env) {
 static VDebugInfo dbg = { "_V0substitute_lambda216" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0substitute_lambda216, env) {
 if (env->num_vars == 2) {
  // ((close _V0substitute_lambda217) (bruijn ##k.2064 0 0) (bruijn expr 1 3))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0substitute_lambda217, env)},
      env->vars[0],
      env->up->vars[3]
    );
 } else {
  VError("Not enough arguments to _V0substitute_lambda216, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0substitute_lambda215(VEnv * env) {
 static VDebugInfo dbg = { "_V0substitute_lambda215" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0substitute_lambda215, env) {
 if (env->num_vars == 4) {
  // ((bruijn call/cc 11 1) (bruijn ##k.2062 0 0) (close _V0substitute_lambda216))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 1)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0substitute_lambda216, env)})
    );
 } else {
  VError("Not enough arguments to _V0substitute_lambda215, got ~D~N"
  "-- expected 4~N"
  , env->num_vars);
 }
 }
}
static void cps_k50(VEnv * env) {
 static VDebugInfo dbg = { "cps_k50" };
 VRecordCall(&dbg);
 V_GC_CHECK(cps_k50, env) {
 if (env->num_vars == 1) {
  // (set! (close cps_k51) (bruijn substitute 9 10) (close _V0substitute_lambda215))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(cps_k51, env)}),
      VEncodeInt(9l), VEncodeInt(10l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0substitute_lambda215, env)})
    );
 } else {
  VError("Not enough arguments to cps_k50, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0substitute__lambda_k316(VEnv * env) {
 static VDebugInfo dbg = { "_V0substitute__lambda_k316" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0substitute__lambda_k316, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.2315 2 0) (##inline ##sys.cons (bruijn args 2 3) (##inline ##sys.cons (bruijn ##x.2323 0 0) (quote ()))))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->vars[0]),
      VInlineCons(
env->up->up->vars[3],
      VInlineCons(
env->vars[0],
      VNULL
    )

    )

    );
 } else {
  VError("Not enough arguments to _V0substitute__lambda_k316, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0substitute__lambda_k315(VEnv * env) {
 static VDebugInfo dbg = { "_V0substitute__lambda_k315" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0substitute__lambda_k315, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2317 0 0) ((bruijn ##k.2315 1 0) (bruijn body 1 4)) ((bruijn substitute 10 10) (close _V0substitute__lambda_k316) (bruijn x 1 1) (bruijn atom 1 2) (bruijn body 1 4)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      env->up->vars[4]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 10, 10)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0substitute__lambda_k316, env)}),
      env->up->vars[1],
      env->up->vars[2],
      env->up->vars[4]
    );
}
 } else {
  VError("Not enough arguments to _V0substitute__lambda_k315, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0substitute__lambda_lambda255(VEnv * env) {
 static VDebugInfo dbg = { "_V0substitute__lambda_lambda255" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0substitute__lambda_lambda255, env) {
 if (env->num_vars == 5) {
  // ((bruijn memtail 9 2) (close _V0substitute__lambda_k315) (bruijn x 0 1) (bruijn args 0 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0substitute__lambda_k315, env)}),
      env->vars[1],
      env->vars[3]
    );
 } else {
  VError("Not enough arguments to _V0substitute__lambda_lambda255, got ~D~N"
  "-- expected 5~N"
  , env->num_vars);
 }
 }
}
static void cps_k49(VEnv * env) {
 static VDebugInfo dbg = { "cps_k49" };
 VRecordCall(&dbg);
 V_GC_CHECK(cps_k49, env) {
 if (env->num_vars == 1) {
  // (set! (close cps_k50) (bruijn substitute-lambda 8 9) (close _V0substitute__lambda_lambda255))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(cps_k50, env)}),
      VEncodeInt(8l), VEncodeInt(9l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0substitute__lambda_lambda255, env)})
    );
 } else {
  VError("Not enough arguments to cps_k49, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0pure__in_Q_k318(VEnv * env) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k318" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0pure__in_Q_k318, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.74 8 1) (bruijn ##k.2597 1 0) (bruijn ##x.2602 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 1)),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0pure__in_Q_k318, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0pure__in_Q_lambda263(VEnv * env) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda263" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0pure__in_Q_lambda263, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.78 1 1))) ((bruijn pure-in-lambda? 16 7) (close _V0pure__in_Q_k318) (bruijn x 8 1) (bruijn args 2 1) (bruijn body 0 1)) ((bruijn ##k.2597 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0pure__in_Q_k318, env)}),
      VGetArg(env, 8, 1),
      env->up->up->vars[1],
      env->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0pure__in_Q_lambda262(VEnv * env) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda262" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0pure__in_Q_lambda262, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.78 0 1)) ((close _V0pure__in_Q_lambda263) (bruijn ##k.2592 0 0) (##inline ##sys.car (bruijn ##expr.78 0 1))) ((bruijn ##k.2592 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0pure__in_Q_lambda263, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0pure__in_Q_lambda261(VEnv * env) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda261" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0pure__in_Q_lambda261, env) {
  // ((close _V0pure__in_Q_lambda262) (bruijn ##k.2590 0 0) (##inline ##sys.cdr (bruijn ##expr.77 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0pure__in_Q_lambda262, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0pure__in_Q_lambda260(VEnv * env) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda260" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0pure__in_Q_lambda260, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.77 0 1)) ((close _V0pure__in_Q_lambda261) (bruijn ##k.2585 0 0) (##inline ##sys.car (bruijn ##expr.77 0 1))) ((bruijn ##k.2585 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0pure__in_Q_lambda261, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0pure__in_Q_k317(VEnv * env) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k317" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0pure__in_Q_k317, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2582 0 0) ((close _V0pure__in_Q_lambda260) (bruijn ##k.2577 1 0) (##inline ##sys.cdr (bruijn ##expr.76 1 1))) ((bruijn ##k.2577 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0pure__in_Q_lambda260, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0pure__in_Q_k317, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0pure__in_Q_lambda259(VEnv * env) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda259" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0pure__in_Q_lambda259, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.76 0 1)) ((bruijn equal? 12 2) (close _V0pure__in_Q_k317) (quote lambda) (##inline ##sys.car (bruijn ##expr.76 0 1))) ((bruijn ##k.2577 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 12, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0pure__in_Q_k317, env)}),
      VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0pure__in_Q_k321(VEnv * env) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k321" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0pure__in_Q_k321, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.74 9 1) (bruijn ##k.2555 1 0) (bruijn ##x.2560 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 1)),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0pure__in_Q_k321, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0pure__in_Q_lambda268(VEnv * env) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda268" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0pure__in_Q_lambda268, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.81 1 1))) ((bruijn pure-in-lambda? 17 7) (close _V0pure__in_Q_k321) (bruijn x 9 1) (bruijn args 2 1) (bruijn body 0 1)) ((bruijn ##k.2555 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0pure__in_Q_k321, env)}),
      VGetArg(env, 9, 1),
      env->up->up->vars[1],
      env->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0pure__in_Q_lambda267(VEnv * env) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda267" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0pure__in_Q_lambda267, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.81 0 1)) ((close _V0pure__in_Q_lambda268) (bruijn ##k.2550 0 0) (##inline ##sys.car (bruijn ##expr.81 0 1))) ((bruijn ##k.2550 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0pure__in_Q_lambda268, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0pure__in_Q_lambda266(VEnv * env) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda266" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0pure__in_Q_lambda266, env) {
  // ((close _V0pure__in_Q_lambda267) (bruijn ##k.2548 0 0) (##inline ##sys.cdr (bruijn ##expr.80 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0pure__in_Q_lambda267, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0pure__in_Q_lambda265(VEnv * env) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda265" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0pure__in_Q_lambda265, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.80 0 1)) ((close _V0pure__in_Q_lambda266) (bruijn ##k.2543 0 0) (##inline ##sys.car (bruijn ##expr.80 0 1))) ((bruijn ##k.2543 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0pure__in_Q_lambda266, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0pure__in_Q_k320(VEnv * env) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k320" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0pure__in_Q_k320, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2540 0 0) ((close _V0pure__in_Q_lambda265) (bruijn ##k.2535 1 0) (##inline ##sys.cdr (bruijn ##expr.79 1 1))) ((bruijn ##k.2535 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0pure__in_Q_lambda265, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0pure__in_Q_k320, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0pure__in_Q_lambda264(VEnv * env) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda264" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0pure__in_Q_lambda264, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.79 0 1)) ((bruijn equal? 13 2) (close _V0pure__in_Q_k320) (quote continuation) (##inline ##sys.car (bruijn ##expr.79 0 1))) ((bruijn ##k.2535 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0pure__in_Q_k320, env)}),
      VEncodePointer(&_V0continuation.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0pure__in_Q_k324(VEnv * env) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k324" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0pure__in_Q_k324, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 1 1) (bruijn ##k.2456 1 0) (bruijn ##expr.83 4 1) (quote ()) (quote ()))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->up->vars[0],
      VGetArg(env, 4, 1),
      VNULL,
      VNULL
    );
 } else {
  VError("Not enough arguments to _V0pure__in_Q_k324, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda280(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda280" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda280, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.90 1 1))) ((bruijn ##k.87 4 1) (bruijn ##k.2487 0 0) (##inline ##sys.cdr (bruijn ##expr.88 9 1)) (##inline ##sys.cons (bruijn args 2 1) (bruijn ##args.84 9 2)) (##inline ##sys.cons (bruijn body 0 1) (bruijn ##body.85 9 3))) ((bruijn ##k.2487 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 1)),
      env->vars[0],
      VInlineCdr(
VGetArg(env, 9, 1)
    )
,
      VInlineCons(
env->up->up->vars[1],
      VGetArg(env, 9, 2)
    )
,
      VInlineCons(
env->vars[1],
      VGetArg(env, 9, 3)
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda279(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda279" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda279, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.90 0 1)) ((close _V0loop_lambda280) (bruijn ##k.2482 0 0) (##inline ##sys.car (bruijn ##expr.90 0 1))) ((bruijn ##k.2482 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda280, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda278(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda278" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda278, env) {
  // ((close _V0loop_lambda279) (bruijn ##k.2480 0 0) (##inline ##sys.cdr (bruijn ##expr.89 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda279, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0loop_lambda277(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda277" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda277, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.89 0 1)) ((close _V0loop_lambda278) (bruijn ##k.2475 0 0) (##inline ##sys.car (bruijn ##expr.89 0 1))) ((bruijn ##k.2475 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda278, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k330(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k330" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k330, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.86 10 1) (bruijn ##k.2468 3 0) (bruijn ##expr.88 8 1) (bruijn ##x.2473 1 0) (bruijn ##x.2474 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 10, 1)),
      env->up->up->up->vars[0],
      VGetArg(env, 8, 1),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k330, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k329(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k329" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k329, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 27 5) (close _V0loop_k330) (bruijn ##body.85 7 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 27, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k330, env)}),
      VGetArg(env, 7, 3)
    );
 } else {
  VError("Not enough arguments to _V0loop_k329, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k328(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k328" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k328, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 26 5) (close _V0loop_k329) (bruijn ##args.84 6 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k329, env)}),
      VGetArg(env, 6, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k328, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda276(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda276" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda276, env) {
 if (env->num_vars == 2) {
  // ((close _V0loop_lambda277) (close _V0loop_k328) (##inline ##sys.car (bruijn ##expr.88 5 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda277, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k328, env)}),
      VInlineCar(
VGetArg(env, 5, 1)
    )

    );
 } else {
  VError("Not enough arguments to _V0loop_lambda276, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda275(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda275" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda275, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 24 1) (bruijn ##k.2466 0 0) (close _V0loop_lambda276))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 1)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda276, env)})
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda275, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k327(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k327" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k327, env) {
 if (env->num_vars == 1) {
  // ((bruijn call-with-values 23 4) (bruijn ##k.2461 3 0) (close _V0loop_lambda275) (bruijn loop 4 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 4)),
      env->up->up->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda275, env)}),
      VGetArg(env, 4, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k327, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k326(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k326" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k326, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.86 4 1) (close _V0loop_k327) (bruijn ##expr.88 2 1) (bruijn ##x.2509 1 0) (bruijn ##x.2510 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k327, env)}),
      env->up->up->vars[1],
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k326, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k325(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k325" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k325, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 21 5) (close _V0loop_k326) (bruijn ##body.85 1 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k326, env)}),
      env->up->vars[3]
    );
 } else {
  VError("Not enough arguments to _V0loop_k325, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda286(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda286" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda286, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.90 1 1))) ((bruijn ##k.87 4 1) (bruijn ##k.2487 0 0) (##inline ##sys.cdr (bruijn ##expr.88 6 1)) (##inline ##sys.cons (bruijn args 2 1) (bruijn ##args.84 6 2)) (##inline ##sys.cons (bruijn body 0 1) (bruijn ##body.85 6 3))) ((bruijn ##k.2487 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 1)),
      env->vars[0],
      VInlineCdr(
VGetArg(env, 6, 1)
    )
,
      VInlineCons(
env->up->up->vars[1],
      VGetArg(env, 6, 2)
    )
,
      VInlineCons(
env->vars[1],
      VGetArg(env, 6, 3)
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda285(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda285" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda285, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.90 0 1)) ((close _V0loop_lambda286) (bruijn ##k.2482 0 0) (##inline ##sys.car (bruijn ##expr.90 0 1))) ((bruijn ##k.2482 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda286, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda284(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda284" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda284, env) {
  // ((close _V0loop_lambda285) (bruijn ##k.2480 0 0) (##inline ##sys.cdr (bruijn ##expr.89 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda285, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0loop_lambda283(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda283" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda283, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.89 0 1)) ((close _V0loop_lambda284) (bruijn ##k.2475 0 0) (##inline ##sys.car (bruijn ##expr.89 0 1))) ((bruijn ##k.2475 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda284, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k333(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k333" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k333, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.86 7 1) (bruijn ##k.2468 3 0) (bruijn ##expr.88 5 1) (bruijn ##x.2473 1 0) (bruijn ##x.2474 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 1)),
      env->up->up->up->vars[0],
      VGetArg(env, 5, 1),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k333, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k332(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k332" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k332, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 24 5) (close _V0loop_k333) (bruijn ##body.85 4 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k333, env)}),
      VGetArg(env, 4, 3)
    );
 } else {
  VError("Not enough arguments to _V0loop_k332, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k331(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k331" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k331, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 23 5) (close _V0loop_k332) (bruijn ##args.84 3 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k332, env)}),
      env->up->up->up->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0loop_k331, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda282(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda282" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda282, env) {
 if (env->num_vars == 2) {
  // ((close _V0loop_lambda283) (close _V0loop_k331) (##inline ##sys.car (bruijn ##expr.88 2 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda283, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k331, env)}),
      VInlineCar(
env->up->up->vars[1]
    )

    );
 } else {
  VError("Not enough arguments to _V0loop_lambda282, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda281(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda281" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda281, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 21 1) (bruijn ##k.2466 0 0) (close _V0loop_lambda282))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 1)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda282, env)})
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda281, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda274(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda274" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda274, env) {
 if (env->num_vars == 4) {
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.88 0 1))) ((bruijn reverse 20 5) (close _V0loop_k325) (bruijn ##args.84 0 2)) ((bruijn call-with-values 20 4) (bruijn ##k.2461 0 0) (close _V0loop_lambda281) (bruijn loop 1 1)))
if(VDecodeBool(
VInlineNot(
VInlinePairP(
env->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k325, env)}),
      env->vars[2]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 4)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda281, env)}),
      env->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0loop_lambda274, got ~D~N"
  "-- expected 4~N"
  , env->num_vars);
 }
 }
}
static void _V0pure__in_Q_lambda273(VEnv * env) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda273" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0pure__in_Q_lambda273, env) {
  // (set! (close _V0pure__in_Q_k324) (bruijn loop 0 1) (close _V0loop_lambda274))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0pure__in_Q_k324, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda274, env)})
    );
 }
}
static void _V0pure__in_Q_lambda272(VEnv * env) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda272" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0pure__in_Q_lambda272, env) {
 if (env->num_vars == 2) {
  // ((close _V0pure__in_Q_lambda273) (bruijn ##k.2454 0 0) #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0pure__in_Q_lambda273, env)},
      env->vars[0],
      VEncodeBool(false)
    );
 } else {
  VError("Not enough arguments to _V0pure__in_Q_lambda272, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0pure__in_Q_lambda271(VEnv * env) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda271" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0pure__in_Q_lambda271, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 17 1) (bruijn ##k.2452 0 0) (close _V0pure__in_Q_lambda272))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 1)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0pure__in_Q_lambda272, env)})
    );
 } else {
  VError("Not enough arguments to _V0pure__in_Q_lambda271, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0pure__in_Q_k335(VEnv * env) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k335" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0pure__in_Q_k335, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.74 9 1) (bruijn ##k.2514 2 0) (bruijn ##x.2519 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 1)),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0pure__in_Q_k335, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0pure__in_Q_lambda288(VEnv * env) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda288" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0pure__in_Q_lambda288, env) {
 if (env->num_vars == 3) {
  // (if (bruijn a 0 1) ((bruijn ##k.2520 0 0) (bruijn b 0 2)) ((bruijn ##k.2520 0 0) #f))
if(VDecodeBool(
env->vars[1])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      env->vars[2]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0pure__in_Q_lambda288, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0pure__in_Q_k334(VEnv * env) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k334" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0pure__in_Q_k334, env) {
 if (env->num_vars == 1) {
  // ((bruijn fold 18 20) (close _V0pure__in_Q_k335) (close _V0pure__in_Q_lambda288) #t (bruijn ##x.2524 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 20)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0pure__in_Q_k335, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0pure__in_Q_lambda288, env)}),
      VEncodeBool(true),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0pure__in_Q_k334, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0pure__in_Q_lambda289(VEnv * env) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda289" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0pure__in_Q_lambda289, env) {
 if (env->num_vars == 3) {
  // ((bruijn pure-in-lambda? 17 7) (bruijn ##k.2525 0 0) (bruijn x 9 1) (bruijn args 0 1) (bruijn body 0 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 7)),
      env->vars[0],
      VGetArg(env, 9, 1),
      env->vars[1],
      env->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0pure__in_Q_lambda289, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0pure__in_Q_lambda287(VEnv * env) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda287" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0pure__in_Q_lambda287, env) {
 if (env->num_vars == 4) {
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((bruijn map 17 3) (close _V0pure__in_Q_k334) (close _V0pure__in_Q_lambda289) (bruijn args 0 2) (bruijn body 0 3)) ((bruijn ##k.2514 0 0) #f))
if(VDecodeBool(
VInlineNullP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 3)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0pure__in_Q_k334, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0pure__in_Q_lambda289, env)}),
      env->vars[2],
      env->vars[3]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0pure__in_Q_lambda287, got ~D~N"
  "-- expected 4~N"
  , env->num_vars);
 }
 }
}
static void _V0pure__in_Q_lambda270(VEnv * env) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda270" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0pure__in_Q_lambda270, env) {
  // ((bruijn call-with-values 16 4) (bruijn ##k.2450 0 0) (close _V0pure__in_Q_lambda271) (close _V0pure__in_Q_lambda287))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 4)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0pure__in_Q_lambda271, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0pure__in_Q_lambda287, env)})
    );
 }
}
static void _V0pure__in_Q_k323(VEnv * env) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k323" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0pure__in_Q_k323, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2447 0 0) ((close _V0pure__in_Q_lambda270) (bruijn ##k.2442 1 0) (##inline ##sys.cdr (bruijn ##expr.82 1 1))) ((bruijn ##k.2442 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0pure__in_Q_lambda270, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0pure__in_Q_k323, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0pure__in_Q_lambda269(VEnv * env) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda269" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0pure__in_Q_lambda269, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.82 0 1)) ((bruijn equal? 14 2) (close _V0pure__in_Q_k323) (quote case-lambda) (##inline ##sys.car (bruijn ##expr.82 0 1))) ((bruijn ##k.2442 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0pure__in_Q_k323, env)}),
      VEncodePointer(&_V0case__lambda.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0pure__in_Q_lambda292(VEnv * env) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda292" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0pure__in_Q_lambda292, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.92 1 1))) ((bruijn ##k.74 8 1) (bruijn ##k.2425 0 0) #t) ((bruijn ##k.2425 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 1)),
      env->vars[0],
      VEncodeBool(true)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0pure__in_Q_lambda291(VEnv * env) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda291" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0pure__in_Q_lambda291, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.92 0 1)) ((close _V0pure__in_Q_lambda292) (bruijn ##k.2420 0 0) (##inline ##sys.car (bruijn ##expr.92 0 1))) ((bruijn ##k.2420 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0pure__in_Q_lambda292, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0pure__in_Q_k337(VEnv * env) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k337" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0pure__in_Q_k337, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2417 0 0) ((close _V0pure__in_Q_lambda291) (bruijn ##k.2412 1 0) (##inline ##sys.cdr (bruijn ##expr.91 1 1))) ((bruijn ##k.2412 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0pure__in_Q_lambda291, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0pure__in_Q_k337, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0pure__in_Q_lambda290(VEnv * env) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda290" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0pure__in_Q_lambda290, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.91 0 1)) ((bruijn equal? 15 2) (close _V0pure__in_Q_k337) (quote quote) (##inline ##sys.car (bruijn ##expr.91 0 1))) ((bruijn ##k.2412 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0pure__in_Q_k337, env)}),
      VEncodePointer(&_V0quote.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0pure__in_Q_k342(VEnv * env) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k342" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0pure__in_Q_k342, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.74 15 1) (bruijn ##k.2387 3 0) (bruijn ##x.2397 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 1)),
      env->up->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0pure__in_Q_k342, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0pure__in_Q_k341(VEnv * env) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k341" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0pure__in_Q_k341, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2395 0 0) ((bruijn pure-in? 23 8) (close _V0pure__in_Q_k342) (bruijn x 15 1) (bruijn body 2 1)) ((bruijn ##k.74 14 1) (bruijn ##k.2387 2 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 8)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0pure__in_Q_k342, env)}),
      VGetArg(env, 15, 1),
      env->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 1)),
      env->up->up->vars[0],
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0pure__in_Q_k341, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0pure__in_Q_k340(VEnv * env) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k340" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0pure__in_Q_k340, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2390 0 0) ((bruijn ##k.74 13 1) (bruijn ##k.2387 1 0) #f) ((bruijn pure-in? 22 8) (close _V0pure__in_Q_k341) (bruijn x 14 1) (bruijn k 4 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 1)),
      env->up->vars[0],
      VEncodeBool(false)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 8)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0pure__in_Q_k341, env)}),
      VGetArg(env, 14, 1),
      VGetArg(env, 4, 1)
    );
}
 } else {
  VError("Not enough arguments to _V0pure__in_Q_k340, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0pure__in_Q_lambda298(VEnv * env) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda298" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0pure__in_Q_lambda298, env) {
  // ((bruijn eqv? 22 19) (close _V0pure__in_Q_k340) (bruijn x 13 1) (bruijn y 1 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0pure__in_Q_k340, env)}),
      VGetArg(env, 13, 1),
      env->up->vars[1]
    );
 }
}
static void _V0pure__in_Q_lambda297(VEnv * env) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda297" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0pure__in_Q_lambda297, env) {
  // ((close _V0pure__in_Q_lambda298) (bruijn ##k.2385 0 0) (##inline ##sys.cdr (bruijn ##expr.95 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0pure__in_Q_lambda298, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0pure__in_Q_lambda296(VEnv * env) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda296" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0pure__in_Q_lambda296, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.95 0 1)) ((close _V0pure__in_Q_lambda297) (bruijn ##k.2380 0 0) (##inline ##sys.car (bruijn ##expr.95 0 1))) ((bruijn ##k.2380 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0pure__in_Q_lambda297, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0pure__in_Q_lambda295(VEnv * env) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda295" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0pure__in_Q_lambda295, env) {
  // ((close _V0pure__in_Q_lambda296) (bruijn ##k.2378 0 0) (##inline ##sys.cdr (bruijn ##expr.94 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0pure__in_Q_lambda296, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0pure__in_Q_lambda294(VEnv * env) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda294" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0pure__in_Q_lambda294, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.94 0 1)) ((close _V0pure__in_Q_lambda295) (bruijn ##k.2373 0 0) (##inline ##sys.car (bruijn ##expr.94 0 1))) ((bruijn ##k.2373 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0pure__in_Q_lambda295, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0pure__in_Q_k339(VEnv * env) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k339" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0pure__in_Q_k339, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2370 0 0) ((close _V0pure__in_Q_lambda294) (bruijn ##k.2365 1 0) (##inline ##sys.cdr (bruijn ##expr.93 1 1))) ((bruijn ##k.2365 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0pure__in_Q_lambda294, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0pure__in_Q_k339, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0pure__in_Q_lambda293(VEnv * env) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda293" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0pure__in_Q_lambda293, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.93 0 1)) ((bruijn equal? 16 2) (close _V0pure__in_Q_k339) (quote set!) (##inline ##sys.car (bruijn ##expr.93 0 1))) ((bruijn ##k.2365 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0pure__in_Q_k339, env)}),
      VEncodePointer(&_V0set_B.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0pure__in_Q_k345(VEnv * env) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k345" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0pure__in_Q_k345, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.74 11 1) (bruijn ##k.2355 2 0) (bruijn ##x.2360 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 1)),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0pure__in_Q_k345, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0pure__in_Q_k344(VEnv * env) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k344" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0pure__in_Q_k344, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2358 0 0) ((bruijn pure-in? 19 8) (close _V0pure__in_Q_k345) (bruijn x 11 1) (bruijn xs 1 1)) ((bruijn ##k.74 10 1) (bruijn ##k.2355 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 8)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0pure__in_Q_k345, env)}),
      VGetArg(env, 11, 1),
      env->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 10, 1)),
      env->up->vars[0],
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0pure__in_Q_k344, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0pure__in_Q_lambda301(VEnv * env) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda301" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0pure__in_Q_lambda301, env) {
  // ((bruijn pure-in? 18 8) (close _V0pure__in_Q_k344) (bruijn x 10 1) (bruijn f 1 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 8)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0pure__in_Q_k344, env)}),
      VGetArg(env, 10, 1),
      env->up->vars[1]
    );
 }
}
static void _V0pure__in_Q_lambda300(VEnv * env) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda300" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0pure__in_Q_lambda300, env) {
  // ((close _V0pure__in_Q_lambda301) (bruijn ##k.2353 0 0) (##inline ##sys.cdr (bruijn ##expr.96 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0pure__in_Q_lambda301, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0pure__in_Q_lambda299(VEnv * env) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda299" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0pure__in_Q_lambda299, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.96 0 1)) ((close _V0pure__in_Q_lambda300) (bruijn ##k.2348 0 0) (##inline ##sys.car (bruijn ##expr.96 0 1))) ((bruijn ##k.2348 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0pure__in_Q_lambda300, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0pure__in_Q_k346(VEnv * env) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k346" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0pure__in_Q_k346, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.74 7 1) (bruijn ##k.2328 6 0) #t)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 1)),
      VGetArg(env, 6, 0),
      VEncodeBool(true)
    );
 } else {
  VError("Not enough arguments to _V0pure__in_Q_k346, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0pure__in_Q_k343(VEnv * env) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k343" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0pure__in_Q_k343, env) {
 if (env->num_vars == 1) {
  // ((close _V0pure__in_Q_lambda299) (close _V0pure__in_Q_k346) (bruijn ##input.75 5 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0pure__in_Q_lambda299, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0pure__in_Q_k346, env)}),
      VGetArg(env, 5, 1)
    );
 } else {
  VError("Not enough arguments to _V0pure__in_Q_k343, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0pure__in_Q_k338(VEnv * env) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k338" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0pure__in_Q_k338, env) {
 if (env->num_vars == 1) {
  // ((close _V0pure__in_Q_lambda293) (close _V0pure__in_Q_k343) (bruijn ##input.75 4 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0pure__in_Q_lambda293, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0pure__in_Q_k343, env)}),
      VGetArg(env, 4, 1)
    );
 } else {
  VError("Not enough arguments to _V0pure__in_Q_k338, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0pure__in_Q_k336(VEnv * env) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k336" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0pure__in_Q_k336, env) {
 if (env->num_vars == 1) {
  // ((close _V0pure__in_Q_lambda290) (close _V0pure__in_Q_k338) (bruijn ##input.75 3 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0pure__in_Q_lambda290, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0pure__in_Q_k338, env)}),
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0pure__in_Q_k336, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0pure__in_Q_k322(VEnv * env) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k322" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0pure__in_Q_k322, env) {
 if (env->num_vars == 1) {
  // ((close _V0pure__in_Q_lambda269) (close _V0pure__in_Q_k336) (bruijn ##input.75 2 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0pure__in_Q_lambda269, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0pure__in_Q_k336, env)}),
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0pure__in_Q_k322, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0pure__in_Q_k319(VEnv * env) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k319" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0pure__in_Q_k319, env) {
 if (env->num_vars == 1) {
  // ((close _V0pure__in_Q_lambda264) (close _V0pure__in_Q_k322) (bruijn ##input.75 1 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0pure__in_Q_lambda264, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0pure__in_Q_k322, env)}),
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0pure__in_Q_k319, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0pure__in_Q_lambda258(VEnv * env) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda258" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0pure__in_Q_lambda258, env) {
  // ((close _V0pure__in_Q_lambda259) (close _V0pure__in_Q_k319) (bruijn ##input.75 0 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0pure__in_Q_lambda259, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0pure__in_Q_k319, env)}),
      env->vars[1]
    );
 }
}
static void _V0pure__in_Q_lambda257(VEnv * env) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda257" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0pure__in_Q_lambda257, env) {
 if (env->num_vars == 2) {
  // ((close _V0pure__in_Q_lambda258) (bruijn ##k.2326 0 0) (bruijn expr 1 2))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0pure__in_Q_lambda258, env)},
      env->vars[0],
      env->up->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0pure__in_Q_lambda257, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0pure__in_Q_lambda256(VEnv * env) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda256" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0pure__in_Q_lambda256, env) {
 if (env->num_vars == 3) {
  // ((bruijn call/cc 9 1) (bruijn ##k.2324 0 0) (close _V0pure__in_Q_lambda257))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 1)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0pure__in_Q_lambda257, env)})
    );
 } else {
  VError("Not enough arguments to _V0pure__in_Q_lambda256, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void cps_k48(VEnv * env) {
 static VDebugInfo dbg = { "cps_k48" };
 VRecordCall(&dbg);
 V_GC_CHECK(cps_k48, env) {
 if (env->num_vars == 1) {
  // (set! (close cps_k49) (bruijn pure-in? 7 8) (close _V0pure__in_Q_lambda256))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(cps_k49, env)}),
      VEncodeInt(7l), VEncodeInt(8l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0pure__in_Q_lambda256, env)})
    );
 } else {
  VError("Not enough arguments to cps_k48, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0pure__in__lambda_Q_k347(VEnv * env) {
 static VDebugInfo dbg = { "_V0pure__in__lambda_Q_k347" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0pure__in__lambda_Q_k347, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2621 0 0) ((bruijn ##k.2619 1 0) #t) ((bruijn pure-in? 8 8) (bruijn ##k.2619 1 0) (bruijn x 1 1) (bruijn body 1 3)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(true)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 8)),
      env->up->vars[0],
      env->up->vars[1],
      env->up->vars[3]
    );
}
 } else {
  VError("Not enough arguments to _V0pure__in__lambda_Q_k347, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0pure__in__lambda_Q_lambda302(VEnv * env) {
 static VDebugInfo dbg = { "_V0pure__in__lambda_Q_lambda302" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0pure__in__lambda_Q_lambda302, env) {
 if (env->num_vars == 4) {
  // ((bruijn memtail 7 2) (close _V0pure__in__lambda_Q_k347) (bruijn x 0 1) (bruijn args 0 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0pure__in__lambda_Q_k347, env)}),
      env->vars[1],
      env->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0pure__in__lambda_Q_lambda302, got ~D~N"
  "-- expected 4~N"
  , env->num_vars);
 }
 }
}
static void cps_k47(VEnv * env) {
 static VDebugInfo dbg = { "cps_k47" };
 VRecordCall(&dbg);
 V_GC_CHECK(cps_k47, env) {
 if (env->num_vars == 1) {
  // (set! (close cps_k48) (bruijn pure-in-lambda? 6 7) (close _V0pure__in__lambda_Q_lambda302))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(cps_k48, env)}),
      VEncodeInt(6l), VEncodeInt(7l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0pure__in__lambda_Q_lambda302, env)})
    );
 } else {
  VError("Not enough arguments to cps_k47, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0ref__count_k349(VEnv * env) {
 static VDebugInfo dbg = { "_V0ref__count_k349" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0ref__count_k349, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.54 8 1) (bruijn ##k.2855 1 0) (bruijn ##x.2860 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 1)),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0ref__count_k349, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0ref__count_lambda310(VEnv * env) {
 static VDebugInfo dbg = { "_V0ref__count_lambda310" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0ref__count_lambda310, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.58 1 1))) ((bruijn ref-count-lambda 14 5) (close _V0ref__count_k349) (bruijn x 8 1) (bruijn args 2 1) (bruijn body 0 1)) ((bruijn ##k.2855 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0ref__count_k349, env)}),
      VGetArg(env, 8, 1),
      env->up->up->vars[1],
      env->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0ref__count_lambda309(VEnv * env) {
 static VDebugInfo dbg = { "_V0ref__count_lambda309" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0ref__count_lambda309, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.58 0 1)) ((close _V0ref__count_lambda310) (bruijn ##k.2850 0 0) (##inline ##sys.car (bruijn ##expr.58 0 1))) ((bruijn ##k.2850 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0ref__count_lambda310, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0ref__count_lambda308(VEnv * env) {
 static VDebugInfo dbg = { "_V0ref__count_lambda308" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0ref__count_lambda308, env) {
  // ((close _V0ref__count_lambda309) (bruijn ##k.2848 0 0) (##inline ##sys.cdr (bruijn ##expr.57 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0ref__count_lambda309, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0ref__count_lambda307(VEnv * env) {
 static VDebugInfo dbg = { "_V0ref__count_lambda307" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0ref__count_lambda307, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.57 0 1)) ((close _V0ref__count_lambda308) (bruijn ##k.2843 0 0) (##inline ##sys.car (bruijn ##expr.57 0 1))) ((bruijn ##k.2843 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0ref__count_lambda308, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0ref__count_k348(VEnv * env) {
 static VDebugInfo dbg = { "_V0ref__count_k348" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0ref__count_k348, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2840 0 0) ((close _V0ref__count_lambda307) (bruijn ##k.2835 1 0) (##inline ##sys.cdr (bruijn ##expr.56 1 1))) ((bruijn ##k.2835 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0ref__count_lambda307, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0ref__count_k348, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0ref__count_lambda306(VEnv * env) {
 static VDebugInfo dbg = { "_V0ref__count_lambda306" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0ref__count_lambda306, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.56 0 1)) ((bruijn equal? 10 2) (close _V0ref__count_k348) (quote lambda) (##inline ##sys.car (bruijn ##expr.56 0 1))) ((bruijn ##k.2835 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 10, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0ref__count_k348, env)}),
      VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0ref__count_k352(VEnv * env) {
 static VDebugInfo dbg = { "_V0ref__count_k352" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0ref__count_k352, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.54 9 1) (bruijn ##k.2813 1 0) (bruijn ##x.2818 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 1)),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0ref__count_k352, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0ref__count_lambda315(VEnv * env) {
 static VDebugInfo dbg = { "_V0ref__count_lambda315" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0ref__count_lambda315, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.61 1 1))) ((bruijn ref-count-lambda 15 5) (close _V0ref__count_k352) (bruijn x 9 1) (bruijn args 2 1) (bruijn body 0 1)) ((bruijn ##k.2813 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0ref__count_k352, env)}),
      VGetArg(env, 9, 1),
      env->up->up->vars[1],
      env->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0ref__count_lambda314(VEnv * env) {
 static VDebugInfo dbg = { "_V0ref__count_lambda314" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0ref__count_lambda314, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.61 0 1)) ((close _V0ref__count_lambda315) (bruijn ##k.2808 0 0) (##inline ##sys.car (bruijn ##expr.61 0 1))) ((bruijn ##k.2808 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0ref__count_lambda315, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0ref__count_lambda313(VEnv * env) {
 static VDebugInfo dbg = { "_V0ref__count_lambda313" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0ref__count_lambda313, env) {
  // ((close _V0ref__count_lambda314) (bruijn ##k.2806 0 0) (##inline ##sys.cdr (bruijn ##expr.60 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0ref__count_lambda314, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0ref__count_lambda312(VEnv * env) {
 static VDebugInfo dbg = { "_V0ref__count_lambda312" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0ref__count_lambda312, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.60 0 1)) ((close _V0ref__count_lambda313) (bruijn ##k.2801 0 0) (##inline ##sys.car (bruijn ##expr.60 0 1))) ((bruijn ##k.2801 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0ref__count_lambda313, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0ref__count_k351(VEnv * env) {
 static VDebugInfo dbg = { "_V0ref__count_k351" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0ref__count_k351, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2798 0 0) ((close _V0ref__count_lambda312) (bruijn ##k.2793 1 0) (##inline ##sys.cdr (bruijn ##expr.59 1 1))) ((bruijn ##k.2793 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0ref__count_lambda312, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0ref__count_k351, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0ref__count_lambda311(VEnv * env) {
 static VDebugInfo dbg = { "_V0ref__count_lambda311" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0ref__count_lambda311, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.59 0 1)) ((bruijn equal? 11 2) (close _V0ref__count_k351) (quote continuation) (##inline ##sys.car (bruijn ##expr.59 0 1))) ((bruijn ##k.2793 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0ref__count_k351, env)}),
      VEncodePointer(&_V0continuation.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0ref__count_k355(VEnv * env) {
 static VDebugInfo dbg = { "_V0ref__count_k355" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0ref__count_k355, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 1 1) (bruijn ##k.2718 1 0) (bruijn ##expr.63 4 1) (quote ()) (quote ()))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->up->vars[0],
      VGetArg(env, 4, 1),
      VNULL,
      VNULL
    );
 } else {
  VError("Not enough arguments to _V0ref__count_k355, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda327(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda327" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda327, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.70 1 1))) ((bruijn ##k.67 4 1) (bruijn ##k.2749 0 0) (##inline ##sys.cdr (bruijn ##expr.68 9 1)) (##inline ##sys.cons (bruijn args 2 1) (bruijn ##args.64 9 2)) (##inline ##sys.cons (bruijn body 0 1) (bruijn ##body.65 9 3))) ((bruijn ##k.2749 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 1)),
      env->vars[0],
      VInlineCdr(
VGetArg(env, 9, 1)
    )
,
      VInlineCons(
env->up->up->vars[1],
      VGetArg(env, 9, 2)
    )
,
      VInlineCons(
env->vars[1],
      VGetArg(env, 9, 3)
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda326(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda326" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda326, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.70 0 1)) ((close _V0loop_lambda327) (bruijn ##k.2744 0 0) (##inline ##sys.car (bruijn ##expr.70 0 1))) ((bruijn ##k.2744 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda327, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda325(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda325" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda325, env) {
  // ((close _V0loop_lambda326) (bruijn ##k.2742 0 0) (##inline ##sys.cdr (bruijn ##expr.69 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda326, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0loop_lambda324(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda324" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda324, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.69 0 1)) ((close _V0loop_lambda325) (bruijn ##k.2737 0 0) (##inline ##sys.car (bruijn ##expr.69 0 1))) ((bruijn ##k.2737 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda325, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k361(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k361" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k361, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.66 10 1) (bruijn ##k.2730 3 0) (bruijn ##expr.68 8 1) (bruijn ##x.2735 1 0) (bruijn ##x.2736 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 10, 1)),
      env->up->up->up->vars[0],
      VGetArg(env, 8, 1),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k361, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k360(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k360" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k360, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 25 5) (close _V0loop_k361) (bruijn ##body.65 7 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k361, env)}),
      VGetArg(env, 7, 3)
    );
 } else {
  VError("Not enough arguments to _V0loop_k360, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k359(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k359" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k359, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 24 5) (close _V0loop_k360) (bruijn ##args.64 6 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k360, env)}),
      VGetArg(env, 6, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k359, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda323(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda323" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda323, env) {
 if (env->num_vars == 2) {
  // ((close _V0loop_lambda324) (close _V0loop_k359) (##inline ##sys.car (bruijn ##expr.68 5 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda324, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k359, env)}),
      VInlineCar(
VGetArg(env, 5, 1)
    )

    );
 } else {
  VError("Not enough arguments to _V0loop_lambda323, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda322(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda322" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda322, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 22 1) (bruijn ##k.2728 0 0) (close _V0loop_lambda323))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 1)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda323, env)})
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda322, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k358(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k358" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k358, env) {
 if (env->num_vars == 1) {
  // ((bruijn call-with-values 21 4) (bruijn ##k.2723 3 0) (close _V0loop_lambda322) (bruijn loop 4 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 4)),
      env->up->up->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda322, env)}),
      VGetArg(env, 4, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k358, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k357(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k357" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k357, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.66 4 1) (close _V0loop_k358) (bruijn ##expr.68 2 1) (bruijn ##x.2771 1 0) (bruijn ##x.2772 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k358, env)}),
      env->up->up->vars[1],
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k357, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k356(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k356" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k356, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 19 5) (close _V0loop_k357) (bruijn ##body.65 1 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k357, env)}),
      env->up->vars[3]
    );
 } else {
  VError("Not enough arguments to _V0loop_k356, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda333(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda333" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda333, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.70 1 1))) ((bruijn ##k.67 4 1) (bruijn ##k.2749 0 0) (##inline ##sys.cdr (bruijn ##expr.68 6 1)) (##inline ##sys.cons (bruijn args 2 1) (bruijn ##args.64 6 2)) (##inline ##sys.cons (bruijn body 0 1) (bruijn ##body.65 6 3))) ((bruijn ##k.2749 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 1)),
      env->vars[0],
      VInlineCdr(
VGetArg(env, 6, 1)
    )
,
      VInlineCons(
env->up->up->vars[1],
      VGetArg(env, 6, 2)
    )
,
      VInlineCons(
env->vars[1],
      VGetArg(env, 6, 3)
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda332(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda332" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda332, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.70 0 1)) ((close _V0loop_lambda333) (bruijn ##k.2744 0 0) (##inline ##sys.car (bruijn ##expr.70 0 1))) ((bruijn ##k.2744 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda333, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda331(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda331" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda331, env) {
  // ((close _V0loop_lambda332) (bruijn ##k.2742 0 0) (##inline ##sys.cdr (bruijn ##expr.69 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda332, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0loop_lambda330(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda330" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda330, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.69 0 1)) ((close _V0loop_lambda331) (bruijn ##k.2737 0 0) (##inline ##sys.car (bruijn ##expr.69 0 1))) ((bruijn ##k.2737 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda331, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k364(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k364" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k364, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.66 7 1) (bruijn ##k.2730 3 0) (bruijn ##expr.68 5 1) (bruijn ##x.2735 1 0) (bruijn ##x.2736 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 1)),
      env->up->up->up->vars[0],
      VGetArg(env, 5, 1),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k364, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k363(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k363" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k363, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 22 5) (close _V0loop_k364) (bruijn ##body.65 4 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k364, env)}),
      VGetArg(env, 4, 3)
    );
 } else {
  VError("Not enough arguments to _V0loop_k363, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k362(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k362" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k362, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 21 5) (close _V0loop_k363) (bruijn ##args.64 3 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k363, env)}),
      env->up->up->up->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0loop_k362, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda329(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda329" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda329, env) {
 if (env->num_vars == 2) {
  // ((close _V0loop_lambda330) (close _V0loop_k362) (##inline ##sys.car (bruijn ##expr.68 2 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda330, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k362, env)}),
      VInlineCar(
env->up->up->vars[1]
    )

    );
 } else {
  VError("Not enough arguments to _V0loop_lambda329, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda328(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda328" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda328, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 19 1) (bruijn ##k.2728 0 0) (close _V0loop_lambda329))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 1)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda329, env)})
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda328, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda321(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda321" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda321, env) {
 if (env->num_vars == 4) {
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.68 0 1))) ((bruijn reverse 18 5) (close _V0loop_k356) (bruijn ##args.64 0 2)) ((bruijn call-with-values 18 4) (bruijn ##k.2723 0 0) (close _V0loop_lambda328) (bruijn loop 1 1)))
if(VDecodeBool(
VInlineNot(
VInlinePairP(
env->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k356, env)}),
      env->vars[2]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 4)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda328, env)}),
      env->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0loop_lambda321, got ~D~N"
  "-- expected 4~N"
  , env->num_vars);
 }
 }
}
static void _V0ref__count_lambda320(VEnv * env) {
 static VDebugInfo dbg = { "_V0ref__count_lambda320" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0ref__count_lambda320, env) {
  // (set! (close _V0ref__count_k355) (bruijn loop 0 1) (close _V0loop_lambda321))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0ref__count_k355, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda321, env)})
    );
 }
}
static void _V0ref__count_lambda319(VEnv * env) {
 static VDebugInfo dbg = { "_V0ref__count_lambda319" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0ref__count_lambda319, env) {
 if (env->num_vars == 2) {
  // ((close _V0ref__count_lambda320) (bruijn ##k.2716 0 0) #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0ref__count_lambda320, env)},
      env->vars[0],
      VEncodeBool(false)
    );
 } else {
  VError("Not enough arguments to _V0ref__count_lambda319, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0ref__count_lambda318(VEnv * env) {
 static VDebugInfo dbg = { "_V0ref__count_lambda318" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0ref__count_lambda318, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 15 1) (bruijn ##k.2714 0 0) (close _V0ref__count_lambda319))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 1)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0ref__count_lambda319, env)})
    );
 } else {
  VError("Not enough arguments to _V0ref__count_lambda318, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0ref__count_k366(VEnv * env) {
 static VDebugInfo dbg = { "_V0ref__count_k366" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0ref__count_k366, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.54 9 1) (bruijn ##k.2776 2 0) (bruijn ##x.2781 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 1)),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0ref__count_k366, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0ref__count_k365(VEnv * env) {
 static VDebugInfo dbg = { "_V0ref__count_k365" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0ref__count_k365, env) {
 if (env->num_vars == 1) {
  // ((bruijn apply 16 28) (close _V0ref__count_k366) (bruijn + 16 14) (bruijn ##x.2782 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0ref__count_k366, env)}),
      VGetArg(env, 16, 14),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0ref__count_k365, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0ref__count_lambda335(VEnv * env) {
 static VDebugInfo dbg = { "_V0ref__count_lambda335" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0ref__count_lambda335, env) {
 if (env->num_vars == 3) {
  // ((bruijn ref-count-lambda 15 5) (bruijn ##k.2783 0 0) (bruijn x 9 1) (bruijn args 0 1) (bruijn body 0 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 5)),
      env->vars[0],
      VGetArg(env, 9, 1),
      env->vars[1],
      env->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0ref__count_lambda335, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0ref__count_lambda334(VEnv * env) {
 static VDebugInfo dbg = { "_V0ref__count_lambda334" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0ref__count_lambda334, env) {
 if (env->num_vars == 4) {
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((bruijn map 15 3) (close _V0ref__count_k365) (close _V0ref__count_lambda335) (bruijn args 0 2) (bruijn body 0 3)) ((bruijn ##k.2776 0 0) #f))
if(VDecodeBool(
VInlineNullP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 3)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0ref__count_k365, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0ref__count_lambda335, env)}),
      env->vars[2],
      env->vars[3]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0ref__count_lambda334, got ~D~N"
  "-- expected 4~N"
  , env->num_vars);
 }
 }
}
static void _V0ref__count_lambda317(VEnv * env) {
 static VDebugInfo dbg = { "_V0ref__count_lambda317" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0ref__count_lambda317, env) {
  // ((bruijn call-with-values 14 4) (bruijn ##k.2712 0 0) (close _V0ref__count_lambda318) (close _V0ref__count_lambda334))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 4)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0ref__count_lambda318, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0ref__count_lambda334, env)})
    );
 }
}
static void _V0ref__count_k354(VEnv * env) {
 static VDebugInfo dbg = { "_V0ref__count_k354" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0ref__count_k354, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2709 0 0) ((close _V0ref__count_lambda317) (bruijn ##k.2704 1 0) (##inline ##sys.cdr (bruijn ##expr.62 1 1))) ((bruijn ##k.2704 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0ref__count_lambda317, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0ref__count_k354, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0ref__count_lambda316(VEnv * env) {
 static VDebugInfo dbg = { "_V0ref__count_lambda316" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0ref__count_lambda316, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.62 0 1)) ((bruijn equal? 12 2) (close _V0ref__count_k354) (quote case-lambda) (##inline ##sys.car (bruijn ##expr.62 0 1))) ((bruijn ##k.2704 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 12, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0ref__count_k354, env)}),
      VEncodePointer(&_V0case__lambda.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0ref__count_lambda338(VEnv * env) {
 static VDebugInfo dbg = { "_V0ref__count_lambda338" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0ref__count_lambda338, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.72 1 1))) ((bruijn ##k.54 8 1) (bruijn ##k.2687 0 0) 0) ((bruijn ##k.2687 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 1)),
      env->vars[0],
      VEncodeInt(0l)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0ref__count_lambda337(VEnv * env) {
 static VDebugInfo dbg = { "_V0ref__count_lambda337" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0ref__count_lambda337, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.72 0 1)) ((close _V0ref__count_lambda338) (bruijn ##k.2682 0 0) (##inline ##sys.car (bruijn ##expr.72 0 1))) ((bruijn ##k.2682 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0ref__count_lambda338, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0ref__count_k368(VEnv * env) {
 static VDebugInfo dbg = { "_V0ref__count_k368" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0ref__count_k368, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2679 0 0) ((close _V0ref__count_lambda337) (bruijn ##k.2674 1 0) (##inline ##sys.cdr (bruijn ##expr.71 1 1))) ((bruijn ##k.2674 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0ref__count_lambda337, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0ref__count_k368, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0ref__count_lambda336(VEnv * env) {
 static VDebugInfo dbg = { "_V0ref__count_lambda336" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0ref__count_lambda336, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.71 0 1)) ((bruijn equal? 13 2) (close _V0ref__count_k368) (quote quote) (##inline ##sys.car (bruijn ##expr.71 0 1))) ((bruijn ##k.2674 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0ref__count_k368, env)}),
      VEncodePointer(&_V0quote.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0ref__count_k372(VEnv * env) {
 static VDebugInfo dbg = { "_V0ref__count_k372" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0ref__count_k372, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.54 11 1) (bruijn ##k.2665 3 0) (bruijn ##x.2667 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 1)),
      env->up->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0ref__count_k372, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0ref__count_k371(VEnv * env) {
 static VDebugInfo dbg = { "_V0ref__count_k371" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0ref__count_k371, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 18 14) (close _V0ref__count_k372) (bruijn ##x.2668 1 0) (bruijn ##x.2669 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0ref__count_k372, env)}),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0ref__count_k371, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0ref__count_k370(VEnv * env) {
 static VDebugInfo dbg = { "_V0ref__count_k370" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0ref__count_k370, env) {
 if (env->num_vars == 1) {
  // ((bruijn ref-count 16 6) (close _V0ref__count_k371) (bruijn x 10 1) (bruijn xs 1 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 6)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0ref__count_k371, env)}),
      VGetArg(env, 10, 1),
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0ref__count_k370, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0ref__count_lambda341(VEnv * env) {
 static VDebugInfo dbg = { "_V0ref__count_lambda341" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0ref__count_lambda341, env) {
  // ((bruijn ref-count 15 6) (close _V0ref__count_k370) (bruijn x 9 1) (bruijn f 1 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 6)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0ref__count_k370, env)}),
      VGetArg(env, 9, 1),
      env->up->vars[1]
    );
 }
}
static void _V0ref__count_lambda340(VEnv * env) {
 static VDebugInfo dbg = { "_V0ref__count_lambda340" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0ref__count_lambda340, env) {
  // ((close _V0ref__count_lambda341) (bruijn ##k.2663 0 0) (##inline ##sys.cdr (bruijn ##expr.73 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0ref__count_lambda341, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0ref__count_lambda339(VEnv * env) {
 static VDebugInfo dbg = { "_V0ref__count_lambda339" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0ref__count_lambda339, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.73 0 1)) ((close _V0ref__count_lambda340) (bruijn ##k.2658 0 0) (##inline ##sys.car (bruijn ##expr.73 0 1))) ((bruijn ##k.2658 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0ref__count_lambda340, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0ref__count_k374(VEnv * env) {
 static VDebugInfo dbg = { "_V0ref__count_k374" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0ref__count_k374, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2653 0 0) ((bruijn ##k.54 8 1) (bruijn ##k.2650 1 0) 1) ((bruijn ##k.54 8 1) (bruijn ##k.2650 1 0) 0))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 1)),
      env->up->vars[0],
      VEncodeInt(1l)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 1)),
      env->up->vars[0],
      VEncodeInt(0l)
    );
}
 } else {
  VError("Not enough arguments to _V0ref__count_k374, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0ref__count_lambda342(VEnv * env) {
 static VDebugInfo dbg = { "_V0ref__count_lambda342" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0ref__count_lambda342, env) {
  // ((bruijn eqv? 15 19) (close _V0ref__count_k374) (bruijn x 8 1) (bruijn y 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0ref__count_k374, env)}),
      VGetArg(env, 8, 1),
      env->vars[1]
    );
 }
}
static void _V0ref__count_k375(VEnv * env) {
 static VDebugInfo dbg = { "_V0ref__count_k375" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0ref__count_k375, env) {
 if (env->num_vars == 1) {
  // ((bruijn error 15 11) (bruijn ##k.2630 6 0) (##string ##string.3662))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 11)),
      VGetArg(env, 6, 0),
      VEncodePointer(&_V10string_D3662.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0ref__count_k375, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0ref__count_k373(VEnv * env) {
 static VDebugInfo dbg = { "_V0ref__count_k373" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0ref__count_k373, env) {
 if (env->num_vars == 1) {
  // ((close _V0ref__count_lambda342) (close _V0ref__count_k375) (bruijn ##input.55 5 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0ref__count_lambda342, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0ref__count_k375, env)}),
      VGetArg(env, 5, 1)
    );
 } else {
  VError("Not enough arguments to _V0ref__count_k373, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0ref__count_k369(VEnv * env) {
 static VDebugInfo dbg = { "_V0ref__count_k369" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0ref__count_k369, env) {
 if (env->num_vars == 1) {
  // ((close _V0ref__count_lambda339) (close _V0ref__count_k373) (bruijn ##input.55 4 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0ref__count_lambda339, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0ref__count_k373, env)}),
      VGetArg(env, 4, 1)
    );
 } else {
  VError("Not enough arguments to _V0ref__count_k369, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0ref__count_k367(VEnv * env) {
 static VDebugInfo dbg = { "_V0ref__count_k367" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0ref__count_k367, env) {
 if (env->num_vars == 1) {
  // ((close _V0ref__count_lambda336) (close _V0ref__count_k369) (bruijn ##input.55 3 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0ref__count_lambda336, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0ref__count_k369, env)}),
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0ref__count_k367, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0ref__count_k353(VEnv * env) {
 static VDebugInfo dbg = { "_V0ref__count_k353" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0ref__count_k353, env) {
 if (env->num_vars == 1) {
  // ((close _V0ref__count_lambda316) (close _V0ref__count_k367) (bruijn ##input.55 2 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0ref__count_lambda316, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0ref__count_k367, env)}),
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0ref__count_k353, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0ref__count_k350(VEnv * env) {
 static VDebugInfo dbg = { "_V0ref__count_k350" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0ref__count_k350, env) {
 if (env->num_vars == 1) {
  // ((close _V0ref__count_lambda311) (close _V0ref__count_k353) (bruijn ##input.55 1 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0ref__count_lambda311, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0ref__count_k353, env)}),
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0ref__count_k350, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0ref__count_lambda305(VEnv * env) {
 static VDebugInfo dbg = { "_V0ref__count_lambda305" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0ref__count_lambda305, env) {
  // ((close _V0ref__count_lambda306) (close _V0ref__count_k350) (bruijn ##input.55 0 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0ref__count_lambda306, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0ref__count_k350, env)}),
      env->vars[1]
    );
 }
}
static void _V0ref__count_lambda304(VEnv * env) {
 static VDebugInfo dbg = { "_V0ref__count_lambda304" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0ref__count_lambda304, env) {
 if (env->num_vars == 2) {
  // ((close _V0ref__count_lambda305) (bruijn ##k.2628 0 0) (bruijn expr 1 2))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0ref__count_lambda305, env)},
      env->vars[0],
      env->up->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0ref__count_lambda304, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0ref__count_lambda303(VEnv * env) {
 static VDebugInfo dbg = { "_V0ref__count_lambda303" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0ref__count_lambda303, env) {
 if (env->num_vars == 3) {
  // ((bruijn call/cc 7 1) (bruijn ##k.2626 0 0) (close _V0ref__count_lambda304))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 1)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0ref__count_lambda304, env)})
    );
 } else {
  VError("Not enough arguments to _V0ref__count_lambda303, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void cps_k46(VEnv * env) {
 static VDebugInfo dbg = { "cps_k46" };
 VRecordCall(&dbg);
 V_GC_CHECK(cps_k46, env) {
 if (env->num_vars == 1) {
  // (set! (close cps_k47) (bruijn ref-count 5 6) (close _V0ref__count_lambda303))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(cps_k47, env)}),
      VEncodeInt(5l), VEncodeInt(6l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0ref__count_lambda303, env)})
    );
 } else {
  VError("Not enough arguments to cps_k46, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0ref__count__lambda_k376(VEnv * env) {
 static VDebugInfo dbg = { "_V0ref__count__lambda_k376" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0ref__count__lambda_k376, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2879 0 0) ((bruijn ##k.2877 1 0) 0) ((bruijn ref-count 6 6) (bruijn ##k.2877 1 0) (bruijn x 1 1) (bruijn body 1 3)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeInt(0l)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 6)),
      env->up->vars[0],
      env->up->vars[1],
      env->up->vars[3]
    );
}
 } else {
  VError("Not enough arguments to _V0ref__count__lambda_k376, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0ref__count__lambda_lambda343(VEnv * env) {
 static VDebugInfo dbg = { "_V0ref__count__lambda_lambda343" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0ref__count__lambda_lambda343, env) {
 if (env->num_vars == 4) {
  // ((bruijn memtail 5 2) (close _V0ref__count__lambda_k376) (bruijn x 0 1) (bruijn args 0 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 5, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0ref__count__lambda_k376, env)}),
      env->vars[1],
      env->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0ref__count__lambda_lambda343, got ~D~N"
  "-- expected 4~N"
  , env->num_vars);
 }
 }
}
static void cps_k45(VEnv * env) {
 static VDebugInfo dbg = { "cps_k45" };
 VRecordCall(&dbg);
 V_GC_CHECK(cps_k45, env) {
 if (env->num_vars == 1) {
  // (set! (close cps_k46) (bruijn ref-count-lambda 4 5) (close _V0ref__count__lambda_lambda343))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(cps_k46, env)}),
      VEncodeInt(4l), VEncodeInt(5l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0ref__count__lambda_lambda343, env)})
    );
 } else {
  VError("Not enough arguments to cps_k45, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0deannotate__lambdas_lambda344(VEnv * env) {
 static VDebugInfo dbg = { "_V0deannotate__lambdas_lambda344" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0deannotate__lambdas_lambda344, env) {
 if (env->num_vars == 2) {
  // ((bruijn ##k.2884 0 0) (bruijn expr 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0deannotate__lambdas_lambda344, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void cps_k44(VEnv * env) {
 static VDebugInfo dbg = { "cps_k44" };
 VRecordCall(&dbg);
 V_GC_CHECK(cps_k44, env) {
 if (env->num_vars == 1) {
  // (set! (close cps_k45) (bruijn deannotate-lambdas 3 4) (close _V0deannotate__lambdas_lambda344))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(cps_k45, env)}),
      VEncodeInt(3l), VEncodeInt(4l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0deannotate__lambdas_lambda344, env)})
    );
 } else {
  VError("Not enough arguments to cps_k44, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0annotate__lambdas_lambda345(VEnv * env) {
 static VDebugInfo dbg = { "_V0annotate__lambdas_lambda345" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0annotate__lambdas_lambda345, env) {
 if (env->num_vars == 2) {
  // ((bruijn ##k.2886 0 0) (bruijn expr 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0annotate__lambdas_lambda345, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void cps_k43(VEnv * env) {
 static VDebugInfo dbg = { "cps_k43" };
 VRecordCall(&dbg);
 V_GC_CHECK(cps_k43, env) {
 if (env->num_vars == 1) {
  // (set! (close cps_k44) (bruijn annotate-lambdas 2 3) (close _V0annotate__lambdas_lambda345))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(cps_k44, env)}),
      VEncodeInt(2l), VEncodeInt(3l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0annotate__lambdas_lambda345, env)})
    );
 } else {
  VError("Not enough arguments to cps_k43, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0memtail_k380(VEnv * env) {
 static VDebugInfo dbg = { "_V0memtail_k380" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0memtail_k380, env) {
 if (env->num_vars == 1) {
  // ((bruijn memtail 6 2) (bruijn ##k.2888 4 0) (bruijn x 4 1) (bruijn ##x.2898 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 2)),
      VGetArg(env, 4, 0),
      VGetArg(env, 4, 1),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0memtail_k380, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0memtail_k379(VEnv * env) {
 static VDebugInfo dbg = { "_V0memtail_k379" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0memtail_k379, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2893 0 0) ((bruijn ##k.2888 3 0) (bruijn lst 3 2)) ((bruijn cdr 6 15) (close _V0memtail_k380) (bruijn lst 3 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[0]),
      env->up->up->up->vars[2]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 15)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0memtail_k380, env)}),
      env->up->up->up->vars[2]
    );
}
 } else {
  VError("Not enough arguments to _V0memtail_k379, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0memtail_k378(VEnv * env) {
 static VDebugInfo dbg = { "_V0memtail_k378" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0memtail_k378, env) {
 if (env->num_vars == 1) {
  // ((bruijn equal? 5 2) (close _V0memtail_k379) (bruijn x 2 1) (bruijn ##x.2899 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 5, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0memtail_k379, env)}),
      env->up->up->vars[1],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0memtail_k378, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0memtail_k381(VEnv * env) {
 static VDebugInfo dbg = { "_V0memtail_k381" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0memtail_k381, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2902 0 0) ((bruijn ##k.2888 2 0) (bruijn lst 2 2)) ((bruijn ##k.2888 2 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->vars[0]),
      env->up->up->vars[2]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0memtail_k381, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0memtail_k377(VEnv * env) {
 static VDebugInfo dbg = { "_V0memtail_k377" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0memtail_k377, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2890 0 0) ((bruijn car 4 18) (close _V0memtail_k378) (bruijn lst 1 2)) ((bruijn equal? 4 2) (close _V0memtail_k381) (bruijn x 1 1) (bruijn lst 1 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 18)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0memtail_k378, env)}),
      env->up->vars[2]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0memtail_k381, env)}),
      env->up->vars[1],
      env->up->vars[2]
    );
}
 } else {
  VError("Not enough arguments to _V0memtail_k377, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0memtail_lambda346(VEnv * env) {
 static VDebugInfo dbg = { "_V0memtail_lambda346" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0memtail_lambda346, env) {
 if (env->num_vars == 3) {
  // ((bruijn pair? 3 16) (close _V0memtail_k377) (bruijn lst 0 2))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[16]),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0memtail_k377, env)}),
      env->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0memtail_lambda346, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void cps_k42(VEnv * env) {
 static VDebugInfo dbg = { "cps_k42" };
 VRecordCall(&dbg);
 V_GC_CHECK(cps_k42, env) {
 if (env->num_vars == 1) {
  // (set! (close cps_k43) (bruijn memtail 1 2) (close _V0memtail_lambda346))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(cps_k43, env)}),
      VEncodeInt(1l), VEncodeInt(2l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0memtail_lambda346, env)})
    );
 } else {
  VError("Not enough arguments to cps_k42, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0to__cps_k390(VEnv * env) {
 static VDebugInfo dbg = { "_V0to__cps_k390" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0to__cps_k390, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.49 9 1) (bruijn ##k.2957 2 0) (##inline ##sys.cons (quote ##vcore.declare) (##inline ##sys.cons (bruijn f 4 1) (##inline ##sys.cons (bruijn ##x.2965 0 0) (quote ())))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 1)),
      env->up->up->vars[0],
      VInlineCons(
VEncodePointer(&_V10vcore_Ddeclare.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(env, 4, 1),
      VInlineCons(
env->vars[0],
      VNULL
    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0to__cps_k390, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0to__cps_k389(VEnv * env) {
 static VDebugInfo dbg = { "_V0to__cps_k389" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0to__cps_k389, env) {
 if (env->num_vars == 1) {
  // ((bruijn cadr 18 31) (close _V0to__cps_k390) (bruijn ##x.2966 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 31)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0to__cps_k390, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0to__cps_k389, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0to__cps_lambda355(VEnv * env) {
 static VDebugInfo dbg = { "_V0to__cps_lambda355" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0to__cps_lambda355, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.53 1 1))) ((bruijn to-cps-impl 14 6) (close _V0to__cps_k389) (bruijn l 0 1)) ((bruijn ##k.2957 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 6)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0to__cps_k389, env)}),
      env->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0to__cps_lambda354(VEnv * env) {
 static VDebugInfo dbg = { "_V0to__cps_lambda354" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0to__cps_lambda354, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.53 0 1)) ((close _V0to__cps_lambda355) (bruijn ##k.2952 0 0) (##inline ##sys.car (bruijn ##expr.53 0 1))) ((bruijn ##k.2952 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0to__cps_lambda355, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0to__cps_lambda353(VEnv * env) {
 static VDebugInfo dbg = { "_V0to__cps_lambda353" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0to__cps_lambda353, env) {
  // ((close _V0to__cps_lambda354) (bruijn ##k.2950 0 0) (##inline ##sys.cdr (bruijn ##expr.52 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0to__cps_lambda354, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0to__cps_lambda352(VEnv * env) {
 static VDebugInfo dbg = { "_V0to__cps_lambda352" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0to__cps_lambda352, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.52 0 1)) ((close _V0to__cps_lambda353) (bruijn ##k.2945 0 0) (##inline ##sys.car (bruijn ##expr.52 0 1))) ((bruijn ##k.2945 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0to__cps_lambda353, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0to__cps_k388(VEnv * env) {
 static VDebugInfo dbg = { "_V0to__cps_k388" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0to__cps_k388, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2942 0 0) ((close _V0to__cps_lambda352) (bruijn ##k.2937 1 0) (##inline ##sys.cdr (bruijn ##expr.51 1 1))) ((bruijn ##k.2937 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0to__cps_lambda352, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0to__cps_k388, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0to__cps_lambda351(VEnv * env) {
 static VDebugInfo dbg = { "_V0to__cps_lambda351" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0to__cps_lambda351, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.51 0 1)) ((bruijn equal? 12 2) (close _V0to__cps_k388) (quote ##vcore.declare) (##inline ##sys.car (bruijn ##expr.51 0 1))) ((bruijn ##k.2937 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 12, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0to__cps_k388, env)}),
      VEncodePointer(&_V10vcore_Ddeclare.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0to__cps_k392(VEnv * env) {
 static VDebugInfo dbg = { "_V0to__cps_k392" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0to__cps_k392, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.49 3 1) (bruijn ##k.2931 2 0) (bruijn ##x.2936 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[1]),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0to__cps_k392, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0to__cps_k391(VEnv * env) {
 static VDebugInfo dbg = { "_V0to__cps_k391" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0to__cps_k391, env) {
 if (env->num_vars == 1) {
  // ((bruijn to-cps-impl 9 6) (close _V0to__cps_k392) (bruijn expr 10 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 6)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0to__cps_k392, env)}),
      VGetArg(env, 10, 1)
    );
 } else {
  VError("Not enough arguments to _V0to__cps_k391, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0to__cps_lambda350(VEnv * env) {
 static VDebugInfo dbg = { "_V0to__cps_lambda350" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0to__cps_lambda350, env) {
  // ((close _V0to__cps_lambda351) (close _V0to__cps_k391) (bruijn ##input.50 0 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0to__cps_lambda351, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0to__cps_k391, env)}),
      env->vars[1]
    );
 }
}
static void _V0to__cps_lambda349(VEnv * env) {
 static VDebugInfo dbg = { "_V0to__cps_lambda349" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0to__cps_lambda349, env) {
 if (env->num_vars == 2) {
  // ((close _V0to__cps_lambda350) (bruijn ##k.2929 0 0) (bruijn expr 8 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0to__cps_lambda350, env)},
      env->vars[0],
      VGetArg(env, 8, 1)
    );
 } else {
  VError("Not enough arguments to _V0to__cps_lambda349, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0to__cps_k387(VEnv * env) {
 static VDebugInfo dbg = { "_V0to__cps_k387" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0to__cps_k387, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 9 1) (bruijn ##k.2909 6 0) (close _V0to__cps_lambda349))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 1)),
      VGetArg(env, 6, 0),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0to__cps_lambda349, env)})
    );
 } else {
  VError("Not enough arguments to _V0to__cps_k387, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0to__cps__impl_k395(VEnv * env) {
 static VDebugInfo dbg = { "_V0to__cps__impl_k395" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0to__cps__impl_k395, env) {
 if (env->num_vars == 1) {
  // ((bruijn iter 10 5) (bruijn ##k.2985 2 0) (bruijn ##x.2987 0 0) (##inline ##sys.cons (quote ##sys.next) (##inline ##sys.cons (bruijn x 2 1) (quote ()))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 10, 5)),
      env->up->up->vars[0],
      env->vars[0],
      VInlineCons(
VEncodePointer(&_V10sys_Dnext.sym, VPOINTER_OTHER),
      VInlineCons(
env->up->up->vars[1],
      VNULL
    )

    )

    );
 } else {
  VError("Not enough arguments to _V0to__cps__impl_k395, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0to__cps__impl_k394(VEnv * env) {
 static VDebugInfo dbg = { "_V0to__cps__impl_k394" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0to__cps__impl_k394, env) {
 if (env->num_vars == 1) {
  // ((bruijn list 12 30) (close _V0to__cps__impl_k395) (bruijn ##x.2990 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 12, 30)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0to__cps__impl_k395, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0to__cps__impl_k394, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0to__cps__impl_lambda357(VEnv * env) {
 static VDebugInfo dbg = { "_V0to__cps__impl_lambda357" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0to__cps__impl_lambda357, env) {
  // ((bruijn cons 11 10) (close _V0to__cps__impl_k394) (bruijn x 0 1) (bruijn expr 2 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 10)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0to__cps__impl_k394, env)}),
      env->vars[1],
      env->up->up->vars[1]
    );
 }
}
static void _V0to__cps__impl_k393(VEnv * env) {
 static VDebugInfo dbg = { "_V0to__cps__impl_k393" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0to__cps__impl_k393, env) {
 if (env->num_vars == 1) {
  // ((close _V0to__cps__impl_lambda357) (bruijn ##k.2983 1 0) (bruijn ##x.2991 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0to__cps__impl_lambda357, env)},
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0to__cps__impl_k393, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0to__cps__impl_lambda356(VEnv * env) {
 static VDebugInfo dbg = { "_V0to__cps__impl_lambda356" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0to__cps__impl_lambda356, env) {
 if (env->num_vars == 2) {
  // ((bruijn gensym 9 26) (close _V0to__cps__impl_k393) (##string ##string.3665))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 26)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0to__cps__impl_k393, env)}),
      VEncodePointer(&_V10string_D3665.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0to__cps__impl_lambda356, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0to__cps_k386(VEnv * env) {
 static VDebugInfo dbg = { "_V0to__cps_k386" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0to__cps_k386, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0to__cps_k387) (bruijn to-cps-impl 5 6) (close _V0to__cps__impl_lambda356))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0to__cps_k387, env)}),
      VEncodeInt(5l), VEncodeInt(6l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0to__cps__impl_lambda356, env)})
    );
 } else {
  VError("Not enough arguments to _V0to__cps_k386, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k398(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k398" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k398, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.23 11 1) (bruijn ##k.3295 1 0) (bruijn ##x.3297 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 1)),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0iter_k398, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_lambda367(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda367" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda367, env) {
  // ((bruijn iter 16 5) (close _V0iter_k398) (bruijn rest 0 1) (##inline ##sys.cons (##inline ##sys.cons (quote continuation) (##inline ##sys.cons (##inline ##sys.cons (bruijn y 5 1) (quote ())) (##inline ##sys.cons (bruijn cont 11 2) (quote ())))) (##inline ##sys.cons (##inline ##sys.cons (quote quote) (##inline ##sys.cons (bruijn x 1 1) (quote ()))) (quote ()))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k398, env)}),
      env->vars[1],
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0continuation.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VGetArg(env, 5, 1),
      VNULL
    )
,
      VInlineCons(
VGetArg(env, 11, 2),
      VNULL
    )

    )

    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0quote.sym, VPOINTER_OTHER),
      VInlineCons(
env->up->vars[1],
      VNULL
    )

    )
,
      VNULL
    )

    )

    );
 }
}
static void _V0iter_lambda366(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda366" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda366, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.28 1 1))) ((close _V0iter_lambda367) (bruijn ##k.3290 0 0) (##inline ##sys.cdr (bruijn ##expr.25 6 1))) ((bruijn ##k.3290 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda367, env)},
      env->vars[0],
      VInlineCdr(
VGetArg(env, 6, 1)
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_lambda365(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda365" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda365, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.28 0 1)) ((close _V0iter_lambda366) (bruijn ##k.3285 0 0) (##inline ##sys.car (bruijn ##expr.28 0 1))) ((bruijn ##k.3285 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda366, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_k397(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k397" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k397, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.3282 0 0) ((close _V0iter_lambda365) (bruijn ##k.3277 1 0) (##inline ##sys.cdr (bruijn ##expr.27 1 1))) ((bruijn ##k.3277 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda365, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0iter_k397, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_lambda364(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda364" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda364, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.27 0 1)) ((bruijn equal? 15 2) (close _V0iter_k397) (quote quote) (##inline ##sys.car (bruijn ##expr.27 0 1))) ((bruijn ##k.3277 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k397, env)}),
      VEncodePointer(&_V0quote.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_lambda363(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda363" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda363, env) {
  // ((close _V0iter_lambda364) (bruijn ##k.3275 0 0) (##inline ##sys.cdr (bruijn ##expr.26 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda364, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0iter_lambda362(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda362" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda362, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.26 0 1)) ((close _V0iter_lambda363) (bruijn ##k.3270 0 0) (##inline ##sys.car (bruijn ##expr.26 0 1))) ((bruijn ##k.3270 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda363, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_lambda361(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda361" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda361, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.25 0 1)) ((close _V0iter_lambda362) (bruijn ##k.3265 0 0) (##inline ##sys.car (bruijn ##expr.25 0 1))) ((bruijn ##k.3265 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda362, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_k402(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k402" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k402, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.23 12 1) (bruijn ##k.3240 2 0) (bruijn ##x.3242 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 12, 1)),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0iter_k402, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k401(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k401" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k401, env) {
 if (env->num_vars == 1) {
  // ((bruijn iter 17 5) (close _V0iter_k402) (bruijn rest 1 1) (##inline ##sys.cons (##inline ##sys.cons (quote continuation) (##inline ##sys.cons (##inline ##sys.cons (bruijn y 5 1) (quote ())) (##inline ##sys.cons (bruijn cont 12 2) (quote ())))) (##inline ##sys.cons (##inline ##sys.cons (quote lambda) (bruijn ##x.3247 0 0)) (quote ()))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k402, env)}),
      env->up->vars[1],
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0continuation.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VGetArg(env, 5, 1),
      VNULL
    )
,
      VInlineCons(
VGetArg(env, 12, 2),
      VNULL
    )

    )

    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      env->vars[0]
    )
,
      VNULL
    )

    )

    );
 } else {
  VError("Not enough arguments to _V0iter_k401, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_lambda373(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda373" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda373, env) {
  // ((bruijn to-cps-lambda 16 2) (close _V0iter_k401) (bruijn lambda-body 1 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k401, env)}),
      env->up->vars[1]
    );
 }
}
static void _V0iter_lambda372(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda372" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda372, env) {
  // ((close _V0iter_lambda373) (bruijn ##k.3238 0 0) (##inline ##sys.cdr (bruijn ##expr.29 5 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda373, env)},
      env->vars[0],
      VInlineCdr(
VGetArg(env, 5, 1)
    )

    );
 }
}
static void _V0iter_k400(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k400" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k400, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.3235 0 0) ((close _V0iter_lambda372) (bruijn ##k.3230 1 0) (##inline ##sys.cdr (bruijn ##expr.31 1 1))) ((bruijn ##k.3230 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda372, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0iter_k400, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_lambda371(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda371" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda371, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.31 0 1)) ((bruijn equal? 16 2) (close _V0iter_k400) (quote lambda) (##inline ##sys.car (bruijn ##expr.31 0 1))) ((bruijn ##k.3230 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k400, env)}),
      VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_lambda370(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda370" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda370, env) {
  // ((close _V0iter_lambda371) (bruijn ##k.3228 0 0) (##inline ##sys.cdr (bruijn ##expr.30 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda371, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0iter_lambda369(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda369" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda369, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.30 0 1)) ((close _V0iter_lambda370) (bruijn ##k.3223 0 0) (##inline ##sys.car (bruijn ##expr.30 0 1))) ((bruijn ##k.3223 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda370, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_lambda368(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda368" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda368, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.29 0 1)) ((close _V0iter_lambda369) (bruijn ##k.3218 0 0) (##inline ##sys.car (bruijn ##expr.29 0 1))) ((bruijn ##k.3218 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda369, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_k405(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k405" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k405, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 1 1) (bruijn ##k.3156 1 0) (bruijn ##expr.35 4 1) (quote ()))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->up->vars[0],
      VGetArg(env, 4, 1),
      VNULL
    );
 } else {
  VError("Not enough arguments to _V0iter_k405, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda385(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda385" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda385, env) {
  // ((bruijn ##k.38 1 1) (bruijn ##k.3174 0 0) (##inline ##sys.cdr (bruijn ##expr.39 5 1)) (##inline ##sys.cons (bruijn lambda-body 0 1) (bruijn ##lambda-body.36 5 2)))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->vars[0],
      VInlineCdr(
VGetArg(env, 5, 1)
    )
,
      VInlineCons(
env->vars[1],
      VGetArg(env, 5, 2)
    )

    );
 }
}
static void _V0loop_k409(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k409" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k409, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.37 8 1) (bruijn ##k.3168 2 0) (bruijn ##expr.39 6 1) (bruijn ##x.3173 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 1)),
      env->up->up->vars[0],
      VGetArg(env, 6, 1),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k409, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k408(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k408" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k408, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 28 5) (close _V0loop_k409) (bruijn ##lambda-body.36 5 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 28, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k409, env)}),
      VGetArg(env, 5, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k408, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda384(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda384" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda384, env) {
 if (env->num_vars == 2) {
  // ((close _V0loop_lambda385) (close _V0loop_k408) (##inline ##sys.car (bruijn ##expr.39 4 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda385, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k408, env)}),
      VInlineCar(
VGetArg(env, 4, 1)
    )

    );
 } else {
  VError("Not enough arguments to _V0loop_lambda384, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda383(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda383" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda383, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 26 1) (bruijn ##k.3166 0 0) (close _V0loop_lambda384))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 1)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda384, env)})
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda383, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k407(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k407" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k407, env) {
 if (env->num_vars == 1) {
  // ((bruijn call-with-values 25 4) (bruijn ##k.3161 2 0) (close _V0loop_lambda383) (bruijn loop 3 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 4)),
      env->up->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda383, env)}),
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop_k407, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k406(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k406" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k406, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.37 3 1) (close _V0loop_k407) (bruijn ##expr.39 1 1) (bruijn ##x.3182 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[1]),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k407, env)}),
      env->up->vars[1],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k406, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda388(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda388" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda388, env) {
  // ((bruijn ##k.38 1 1) (bruijn ##k.3174 0 0) (##inline ##sys.cdr (bruijn ##expr.39 3 1)) (##inline ##sys.cons (bruijn lambda-body 0 1) (bruijn ##lambda-body.36 3 2)))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->vars[0],
      VInlineCdr(
env->up->up->up->vars[1]
    )
,
      VInlineCons(
env->vars[1],
      env->up->up->up->vars[2]
    )

    );
 }
}
static void _V0loop_k411(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k411" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k411, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.37 6 1) (bruijn ##k.3168 2 0) (bruijn ##expr.39 4 1) (bruijn ##x.3173 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 1)),
      env->up->up->vars[0],
      VGetArg(env, 4, 1),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k411, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k410(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k410" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k410, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 26 5) (close _V0loop_k411) (bruijn ##lambda-body.36 3 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k411, env)}),
      env->up->up->up->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0loop_k410, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda387(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda387" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda387, env) {
 if (env->num_vars == 2) {
  // ((close _V0loop_lambda388) (close _V0loop_k410) (##inline ##sys.car (bruijn ##expr.39 2 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda388, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k410, env)}),
      VInlineCar(
env->up->up->vars[1]
    )

    );
 } else {
  VError("Not enough arguments to _V0loop_lambda387, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda386(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda386" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda386, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 24 1) (bruijn ##k.3166 0 0) (close _V0loop_lambda387))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 1)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda387, env)})
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda386, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda382(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda382" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda382, env) {
 if (env->num_vars == 3) {
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.39 0 1))) ((bruijn reverse 23 5) (close _V0loop_k406) (bruijn ##lambda-body.36 0 2)) ((bruijn call-with-values 23 4) (bruijn ##k.3161 0 0) (close _V0loop_lambda386) (bruijn loop 1 1)))
if(VDecodeBool(
VInlineNot(
VInlinePairP(
env->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k406, env)}),
      env->vars[2]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 4)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda386, env)}),
      env->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0loop_lambda382, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_lambda381(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda381" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda381, env) {
  // (set! (close _V0iter_k405) (bruijn loop 0 1) (close _V0loop_lambda382))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k405, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda382, env)})
    );
 }
}
static void _V0iter_lambda380(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda380" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda380, env) {
 if (env->num_vars == 2) {
  // ((close _V0iter_lambda381) (bruijn ##k.3154 0 0) #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda381, env)},
      env->vars[0],
      VEncodeBool(false)
    );
 } else {
  VError("Not enough arguments to _V0iter_lambda380, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_lambda379(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda379" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda379, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 20 1) (bruijn ##k.3152 0 0) (close _V0iter_lambda380))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 1)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_lambda380, env)})
    );
 } else {
  VError("Not enough arguments to _V0iter_lambda379, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k413(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k413" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k413, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.23 14 1) (bruijn ##k.3191 2 0) (bruijn ##x.3193 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 1)),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0iter_k413, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k412(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k412" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k412, env) {
 if (env->num_vars == 1) {
  // ((bruijn iter 19 5) (close _V0iter_k413) (bruijn rest 1 1) (##inline ##sys.cons (##inline ##sys.cons (quote continuation) (##inline ##sys.cons (##inline ##sys.cons (bruijn y 6 1) (quote ())) (##inline ##sys.cons (bruijn cont 14 2) (quote ())))) (##inline ##sys.cons (##inline ##sys.cons (quote case-lambda) (bruijn ##x.3198 0 0)) (quote ()))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k413, env)}),
      env->up->vars[1],
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0continuation.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VGetArg(env, 6, 1),
      VNULL
    )
,
      VInlineCons(
VGetArg(env, 14, 2),
      VNULL
    )

    )

    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0case__lambda.sym, VPOINTER_OTHER),
      env->vars[0]
    )
,
      VNULL
    )

    )

    );
 } else {
  VError("Not enough arguments to _V0iter_k412, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_lambda390(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda390" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda390, env) {
  // ((bruijn map 21 3) (close _V0iter_k412) (bruijn to-cps-lambda 18 2) (bruijn lambda-body 1 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 3)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k412, env)}),
      VGetArg(env, 18, 2),
      env->up->vars[2]
    );
 }
}
static void _V0iter_lambda389(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda389" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda389, env) {
 if (env->num_vars == 3) {
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((close _V0iter_lambda390) (bruijn ##k.3186 0 0) (##inline ##sys.cdr (bruijn ##expr.32 6 1))) ((bruijn ##k.3186 0 0) #f))
if(VDecodeBool(
VInlineNullP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda390, env)},
      env->vars[0],
      VInlineCdr(
VGetArg(env, 6, 1)
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0iter_lambda389, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_lambda378(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda378" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda378, env) {
  // ((bruijn call-with-values 19 4) (bruijn ##k.3150 0 0) (close _V0iter_lambda379) (close _V0iter_lambda389))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 4)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_lambda379, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_lambda389, env)})
    );
 }
}
static void _V0iter_k404(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k404" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k404, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.3147 0 0) ((close _V0iter_lambda378) (bruijn ##k.3142 1 0) (##inline ##sys.cdr (bruijn ##expr.34 1 1))) ((bruijn ##k.3142 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda378, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0iter_k404, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_lambda377(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda377" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda377, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.34 0 1)) ((bruijn equal? 17 2) (close _V0iter_k404) (quote case-lambda) (##inline ##sys.car (bruijn ##expr.34 0 1))) ((bruijn ##k.3142 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k404, env)}),
      VEncodePointer(&_V0case__lambda.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_lambda376(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda376" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda376, env) {
  // ((close _V0iter_lambda377) (bruijn ##k.3140 0 0) (##inline ##sys.cdr (bruijn ##expr.33 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda377, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0iter_lambda375(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda375" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda375, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.33 0 1)) ((close _V0iter_lambda376) (bruijn ##k.3135 0 0) (##inline ##sys.car (bruijn ##expr.33 0 1))) ((bruijn ##k.3135 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda376, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_lambda374(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda374" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda374, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.32 0 1)) ((close _V0iter_lambda375) (bruijn ##k.3130 0 0) (##inline ##sys.car (bruijn ##expr.32 0 1))) ((bruijn ##k.3130 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda375, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_k415(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k415" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k415, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 1 1) (bruijn ##k.3066 1 0) (bruijn ##expr.42 4 1) (quote ()))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->up->vars[0],
      VGetArg(env, 4, 1),
      VNULL
    );
 } else {
  VError("Not enough arguments to _V0iter_k415, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda401(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda401" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda401, env) {
  // ((bruijn ##k.45 1 1) (bruijn ##k.3084 0 0) (##inline ##sys.cdr (bruijn ##expr.46 5 1)) (##inline ##sys.cons (bruijn xs 0 1) (bruijn ##xs.43 5 2)))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->vars[0],
      VInlineCdr(
VGetArg(env, 5, 1)
    )
,
      VInlineCons(
env->vars[1],
      VGetArg(env, 5, 2)
    )

    );
 }
}
static void _V0loop_k419(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k419" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k419, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.44 8 1) (bruijn ##k.3078 2 0) (bruijn ##expr.46 6 1) (bruijn ##x.3083 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 1)),
      env->up->up->vars[0],
      VGetArg(env, 6, 1),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k419, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k418(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k418" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k418, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 27 5) (close _V0loop_k419) (bruijn ##xs.43 5 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 27, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k419, env)}),
      VGetArg(env, 5, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k418, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda400(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda400" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda400, env) {
 if (env->num_vars == 2) {
  // ((close _V0loop_lambda401) (close _V0loop_k418) (##inline ##sys.car (bruijn ##expr.46 4 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda401, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k418, env)}),
      VInlineCar(
VGetArg(env, 4, 1)
    )

    );
 } else {
  VError("Not enough arguments to _V0loop_lambda400, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda399(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda399" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda399, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 25 1) (bruijn ##k.3076 0 0) (close _V0loop_lambda400))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 1)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda400, env)})
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda399, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k417(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k417" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k417, env) {
 if (env->num_vars == 1) {
  // ((bruijn call-with-values 24 4) (bruijn ##k.3071 2 0) (close _V0loop_lambda399) (bruijn loop 3 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 4)),
      env->up->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda399, env)}),
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop_k417, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k416(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k416" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k416, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.44 3 1) (close _V0loop_k417) (bruijn ##expr.46 1 1) (bruijn ##x.3092 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[1]),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k417, env)}),
      env->up->vars[1],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k416, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda404(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda404" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda404, env) {
  // ((bruijn ##k.45 1 1) (bruijn ##k.3084 0 0) (##inline ##sys.cdr (bruijn ##expr.46 3 1)) (##inline ##sys.cons (bruijn xs 0 1) (bruijn ##xs.43 3 2)))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->vars[0],
      VInlineCdr(
env->up->up->up->vars[1]
    )
,
      VInlineCons(
env->vars[1],
      env->up->up->up->vars[2]
    )

    );
 }
}
static void _V0loop_k421(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k421" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k421, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.44 6 1) (bruijn ##k.3078 2 0) (bruijn ##expr.46 4 1) (bruijn ##x.3083 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 1)),
      env->up->up->vars[0],
      VGetArg(env, 4, 1),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k421, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k420(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k420" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k420, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 25 5) (close _V0loop_k421) (bruijn ##xs.43 3 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k421, env)}),
      env->up->up->up->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0loop_k420, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda403(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda403" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda403, env) {
 if (env->num_vars == 2) {
  // ((close _V0loop_lambda404) (close _V0loop_k420) (##inline ##sys.car (bruijn ##expr.46 2 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda404, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k420, env)}),
      VInlineCar(
env->up->up->vars[1]
    )

    );
 } else {
  VError("Not enough arguments to _V0loop_lambda403, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda402(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda402" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda402, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 23 1) (bruijn ##k.3076 0 0) (close _V0loop_lambda403))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 1)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda403, env)})
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda402, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda398(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda398" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda398, env) {
 if (env->num_vars == 3) {
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.46 0 1))) ((bruijn reverse 22 5) (close _V0loop_k416) (bruijn ##xs.43 0 2)) ((bruijn call-with-values 22 4) (bruijn ##k.3071 0 0) (close _V0loop_lambda402) (bruijn loop 1 1)))
if(VDecodeBool(
VInlineNot(
VInlinePairP(
env->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k416, env)}),
      env->vars[2]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 4)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda402, env)}),
      env->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0loop_lambda398, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_lambda397(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda397" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda397, env) {
  // (set! (close _V0iter_k415) (bruijn loop 0 1) (close _V0loop_lambda398))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k415, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda398, env)})
    );
 }
}
static void _V0iter_lambda396(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda396" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda396, env) {
 if (env->num_vars == 2) {
  // ((close _V0iter_lambda397) (bruijn ##k.3064 0 0) #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda397, env)},
      env->vars[0],
      VEncodeBool(false)
    );
 } else {
  VError("Not enough arguments to _V0iter_lambda396, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_lambda395(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda395" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda395, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 19 1) (bruijn ##k.3062 0 0) (close _V0iter_lambda396))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 1)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_lambda396, env)})
    );
 } else {
  VError("Not enough arguments to _V0iter_lambda395, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k427(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k427" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k427, env) {
 if (env->num_vars == 1) {
  // ((bruijn iter 25 5) (bruijn ##k.3106 4 0) (bruijn ##x.3108 3 0) (##inline ##sys.cons (bruijn ##x.3110 2 0) (##inline ##sys.cons (##inline ##sys.cons (quote continuation) (##inline ##sys.cons (##inline ##sys.cons (bruijn y 11 1) (quote ())) (##inline ##sys.cons (bruijn cont 20 2) (quote ())))) (bruijn ##x.3113 0 0))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 5)),
      VGetArg(env, 4, 0),
      env->up->up->up->vars[0],
      VInlineCons(
env->up->up->vars[0],
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0continuation.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VGetArg(env, 11, 1),
      VNULL
    )
,
      VInlineCons(
VGetArg(env, 20, 2),
      VNULL
    )

    )

    )
,
      env->vars[0]
    )

    )

    );
 } else {
  VError("Not enough arguments to _V0iter_k427, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k426(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k426" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k426, env) {
 if (env->num_vars == 1) {
  // ((bruijn append 27 29) (close _V0iter_k427) (bruijn ##x.3114 0 0) (quote ()))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 27, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k427, env)}),
      env->vars[0],
      VNULL
    );
 } else {
  VError("Not enough arguments to _V0iter_k426, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k425(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k425" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k425, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 26 15) (close _V0iter_k426) (bruijn args 4 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 15)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k426, env)}),
      VGetArg(env, 4, 1)
    );
 } else {
  VError("Not enough arguments to _V0iter_k425, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k424(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k424" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k424, env) {
 if (env->num_vars == 1) {
  // ((bruijn car 25 18) (close _V0iter_k425) (bruijn args 3 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 18)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k425, env)}),
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0iter_k424, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_lambda408(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda408" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda408, env) {
  // ((bruijn append-reverse 21 1) (close _V0iter_k424) (bruijn newstack 0 1) (bruijn rest 4 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k424, env)}),
      env->vars[1],
      VGetArg(env, 4, 1)
    );
 }
}
static void _V0iter_k423(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k423" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k423, env) {
 if (env->num_vars == 1) {
  // ((close _V0iter_lambda408) (bruijn ##k.3104 1 0) (bruijn ##x.3118 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda408, env)},
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0iter_k423, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_lambda407(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda407" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda407, env) {
  // ((bruijn iter-subexprs 19 4) (close _V0iter_k423) (bruijn xs 3 2) (bruijn args 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 4)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k423, env)}),
      env->up->up->up->vars[2],
      env->vars[1]
    );
 }
}
static void _V0iter_k428(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k428" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k428, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.23 13 1) (bruijn ##k.3101 2 0) (bruijn ##x.3103 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 1)),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0iter_k428, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k422(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k422" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k422, env) {
 if (env->num_vars == 1) {
  // ((close _V0iter_lambda407) (close _V0iter_k428) (bruijn ##x.3119 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda407, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k428, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0iter_k422, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_lambda406(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda406" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda406, env) {
  // ((bruijn map 20 3) (close _V0iter_k422) (bruijn iter-arg 17 3) (bruijn xs 1 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 3)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k422, env)}),
      VGetArg(env, 17, 3),
      env->up->vars[2]
    );
 }
}
static void _V0iter_lambda405(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda405" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda405, env) {
 if (env->num_vars == 3) {
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((close _V0iter_lambda406) (bruijn ##k.3096 0 0) (##inline ##sys.cdr (bruijn ##expr.40 4 1))) ((bruijn ##k.3096 0 0) #f))
if(VDecodeBool(
VInlineNullP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda406, env)},
      env->vars[0],
      VInlineCdr(
VGetArg(env, 4, 1)
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0iter_lambda405, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_lambda394(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda394" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda394, env) {
  // ((bruijn call-with-values 18 4) (bruijn ##k.3060 0 0) (close _V0iter_lambda395) (close _V0iter_lambda405))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 4)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_lambda395, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_lambda405, env)})
    );
 }
}
static void _V0iter_lambda393(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda393" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda393, env) {
  // ((close _V0iter_lambda394) (bruijn ##k.3058 0 0) (##inline ##sys.cdr (bruijn ##expr.41 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda394, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0iter_lambda392(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda392" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda392, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.41 0 1)) ((close _V0iter_lambda393) (bruijn ##k.3053 0 0) (##inline ##sys.car (bruijn ##expr.41 0 1))) ((bruijn ##k.3053 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda393, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_lambda391(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda391" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda391, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.40 0 1)) ((close _V0iter_lambda392) (bruijn ##k.3048 0 0) (##inline ##sys.car (bruijn ##expr.40 0 1))) ((bruijn ##k.3048 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda392, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_k430(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k430" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k430, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.23 12 1) (bruijn ##k.3031 1 0) (bruijn ##x.3033 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 12, 1)),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0iter_k430, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_lambda413(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda413" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda413, env) {
  // ((bruijn iter 17 5) (close _V0iter_k430) (bruijn rest 0 1) (##inline ##sys.cons (##inline ##sys.cons (quote continuation) (##inline ##sys.cons (##inline ##sys.cons (bruijn y 2 1) (quote ())) (##inline ##sys.cons (bruijn cont 12 2) (quote ())))) (##inline ##sys.cons (bruijn x 1 1) (quote ()))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k430, env)}),
      env->vars[1],
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0continuation.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
env->up->up->vars[1],
      VNULL
    )
,
      VInlineCons(
VGetArg(env, 12, 2),
      VNULL
    )

    )

    )
,
      VInlineCons(
env->up->vars[1],
      VNULL
    )

    )

    );
 }
}
static void _V0iter_lambda412(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda412" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda412, env) {
  // ((close _V0iter_lambda413) (bruijn ##k.3029 0 0) (##inline ##sys.cdr (bruijn ##expr.47 3 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda413, env)},
      env->vars[0],
      VInlineCdr(
env->up->up->up->vars[1]
    )

    );
 }
}
static void _V0iter_lambda411(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda411" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda411, env) {
  // ((close _V0iter_lambda412) (bruijn ##k.3027 0 0) (##inline ##sys.cdr (bruijn ##expr.48 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda412, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0iter_lambda410(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda410" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda410, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.48 0 1)) ((close _V0iter_lambda411) (bruijn ##k.3022 0 0) (##inline ##sys.car (bruijn ##expr.48 0 1))) ((bruijn ##k.3022 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda411, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_lambda409(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda409" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda409, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.47 0 1)) ((close _V0iter_lambda410) (bruijn ##k.3017 0 0) (##inline ##sys.car (bruijn ##expr.47 0 1))) ((bruijn ##k.3017 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda410, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_k432(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k432" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k432, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.23 8 1) (bruijn ##k.2996 7 0) (bruijn ##x.3016 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 1)),
      VGetArg(env, 7, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0iter_k432, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k431(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k431" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k431, env) {
 if (env->num_vars == 1) {
  // ((bruijn error 16 11) (close _V0iter_k432) (##string ##string.3666) (bruijn stack 8 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 11)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k432, env)}),
      VEncodePointer(&_V10string_D3666.sym, VPOINTER_OTHER),
      VGetArg(env, 8, 1)
    );
 } else {
  VError("Not enough arguments to _V0iter_k431, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k429(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k429" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k429, env) {
 if (env->num_vars == 1) {
  // ((close _V0iter_lambda409) (close _V0iter_k431) (bruijn ##input.24 5 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda409, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k431, env)}),
      VGetArg(env, 5, 1)
    );
 } else {
  VError("Not enough arguments to _V0iter_k429, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k414(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k414" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k414, env) {
 if (env->num_vars == 1) {
  // ((close _V0iter_lambda391) (close _V0iter_k429) (bruijn ##input.24 4 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda391, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k429, env)}),
      VGetArg(env, 4, 1)
    );
 } else {
  VError("Not enough arguments to _V0iter_k414, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k403(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k403" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k403, env) {
 if (env->num_vars == 1) {
  // ((close _V0iter_lambda374) (close _V0iter_k414) (bruijn ##input.24 3 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda374, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k414, env)}),
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0iter_k403, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k399(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k399" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k399, env) {
 if (env->num_vars == 1) {
  // ((close _V0iter_lambda368) (close _V0iter_k403) (bruijn ##input.24 2 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda368, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k403, env)}),
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0iter_k399, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k396(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k396" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k396, env) {
 if (env->num_vars == 1) {
  // ((close _V0iter_lambda361) (close _V0iter_k399) (bruijn ##input.24 1 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda361, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k399, env)}),
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0iter_k396, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k434(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k434" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k434, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.23 10 1) (bruijn ##k.3295 1 0) (bruijn ##x.3297 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 10, 1)),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0iter_k434, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_lambda420(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda420" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda420, env) {
  // ((bruijn iter 15 5) (close _V0iter_k434) (bruijn rest 0 1) (##inline ##sys.cons (##inline ##sys.cons (quote continuation) (##inline ##sys.cons (##inline ##sys.cons (bruijn y 5 1) (quote ())) (##inline ##sys.cons (bruijn cont 10 2) (quote ())))) (##inline ##sys.cons (##inline ##sys.cons (quote quote) (##inline ##sys.cons (bruijn x 1 1) (quote ()))) (quote ()))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k434, env)}),
      env->vars[1],
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0continuation.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VGetArg(env, 5, 1),
      VNULL
    )
,
      VInlineCons(
VGetArg(env, 10, 2),
      VNULL
    )

    )

    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0quote.sym, VPOINTER_OTHER),
      VInlineCons(
env->up->vars[1],
      VNULL
    )

    )
,
      VNULL
    )

    )

    );
 }
}
static void _V0iter_lambda419(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda419" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda419, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.28 1 1))) ((close _V0iter_lambda420) (bruijn ##k.3290 0 0) (##inline ##sys.cdr (bruijn ##expr.25 6 1))) ((bruijn ##k.3290 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda420, env)},
      env->vars[0],
      VInlineCdr(
VGetArg(env, 6, 1)
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_lambda418(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda418" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda418, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.28 0 1)) ((close _V0iter_lambda419) (bruijn ##k.3285 0 0) (##inline ##sys.car (bruijn ##expr.28 0 1))) ((bruijn ##k.3285 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda419, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_k433(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k433" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k433, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.3282 0 0) ((close _V0iter_lambda418) (bruijn ##k.3277 1 0) (##inline ##sys.cdr (bruijn ##expr.27 1 1))) ((bruijn ##k.3277 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda418, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0iter_k433, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_lambda417(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda417" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda417, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.27 0 1)) ((bruijn equal? 14 2) (close _V0iter_k433) (quote quote) (##inline ##sys.car (bruijn ##expr.27 0 1))) ((bruijn ##k.3277 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k433, env)}),
      VEncodePointer(&_V0quote.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_lambda416(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda416" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda416, env) {
  // ((close _V0iter_lambda417) (bruijn ##k.3275 0 0) (##inline ##sys.cdr (bruijn ##expr.26 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda417, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0iter_lambda415(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda415" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda415, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.26 0 1)) ((close _V0iter_lambda416) (bruijn ##k.3270 0 0) (##inline ##sys.car (bruijn ##expr.26 0 1))) ((bruijn ##k.3270 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda416, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_lambda414(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda414" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda414, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.25 0 1)) ((close _V0iter_lambda415) (bruijn ##k.3265 0 0) (##inline ##sys.car (bruijn ##expr.25 0 1))) ((bruijn ##k.3265 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda415, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_k438(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k438" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k438, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.23 11 1) (bruijn ##k.3240 2 0) (bruijn ##x.3242 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 1)),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0iter_k438, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k437(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k437" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k437, env) {
 if (env->num_vars == 1) {
  // ((bruijn iter 16 5) (close _V0iter_k438) (bruijn rest 1 1) (##inline ##sys.cons (##inline ##sys.cons (quote continuation) (##inline ##sys.cons (##inline ##sys.cons (bruijn y 5 1) (quote ())) (##inline ##sys.cons (bruijn cont 11 2) (quote ())))) (##inline ##sys.cons (##inline ##sys.cons (quote lambda) (bruijn ##x.3247 0 0)) (quote ()))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k438, env)}),
      env->up->vars[1],
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0continuation.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VGetArg(env, 5, 1),
      VNULL
    )
,
      VInlineCons(
VGetArg(env, 11, 2),
      VNULL
    )

    )

    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      env->vars[0]
    )
,
      VNULL
    )

    )

    );
 } else {
  VError("Not enough arguments to _V0iter_k437, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_lambda426(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda426" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda426, env) {
  // ((bruijn to-cps-lambda 15 2) (close _V0iter_k437) (bruijn lambda-body 1 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k437, env)}),
      env->up->vars[1]
    );
 }
}
static void _V0iter_lambda425(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda425" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda425, env) {
  // ((close _V0iter_lambda426) (bruijn ##k.3238 0 0) (##inline ##sys.cdr (bruijn ##expr.29 5 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda426, env)},
      env->vars[0],
      VInlineCdr(
VGetArg(env, 5, 1)
    )

    );
 }
}
static void _V0iter_k436(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k436" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k436, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.3235 0 0) ((close _V0iter_lambda425) (bruijn ##k.3230 1 0) (##inline ##sys.cdr (bruijn ##expr.31 1 1))) ((bruijn ##k.3230 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda425, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0iter_k436, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_lambda424(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda424" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda424, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.31 0 1)) ((bruijn equal? 15 2) (close _V0iter_k436) (quote lambda) (##inline ##sys.car (bruijn ##expr.31 0 1))) ((bruijn ##k.3230 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k436, env)}),
      VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_lambda423(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda423" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda423, env) {
  // ((close _V0iter_lambda424) (bruijn ##k.3228 0 0) (##inline ##sys.cdr (bruijn ##expr.30 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda424, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0iter_lambda422(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda422" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda422, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.30 0 1)) ((close _V0iter_lambda423) (bruijn ##k.3223 0 0) (##inline ##sys.car (bruijn ##expr.30 0 1))) ((bruijn ##k.3223 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda423, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_lambda421(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda421" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda421, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.29 0 1)) ((close _V0iter_lambda422) (bruijn ##k.3218 0 0) (##inline ##sys.car (bruijn ##expr.29 0 1))) ((bruijn ##k.3218 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda422, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_k441(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k441" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k441, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 1 1) (bruijn ##k.3156 1 0) (bruijn ##expr.35 4 1) (quote ()))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->up->vars[0],
      VGetArg(env, 4, 1),
      VNULL
    );
 } else {
  VError("Not enough arguments to _V0iter_k441, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda438(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda438" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda438, env) {
  // ((bruijn ##k.38 1 1) (bruijn ##k.3174 0 0) (##inline ##sys.cdr (bruijn ##expr.39 5 1)) (##inline ##sys.cons (bruijn lambda-body 0 1) (bruijn ##lambda-body.36 5 2)))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->vars[0],
      VInlineCdr(
VGetArg(env, 5, 1)
    )
,
      VInlineCons(
env->vars[1],
      VGetArg(env, 5, 2)
    )

    );
 }
}
static void _V0loop_k445(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k445" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k445, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.37 8 1) (bruijn ##k.3168 2 0) (bruijn ##expr.39 6 1) (bruijn ##x.3173 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 1)),
      env->up->up->vars[0],
      VGetArg(env, 6, 1),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k445, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k444(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k444" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k444, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 27 5) (close _V0loop_k445) (bruijn ##lambda-body.36 5 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 27, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k445, env)}),
      VGetArg(env, 5, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k444, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda437(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda437" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda437, env) {
 if (env->num_vars == 2) {
  // ((close _V0loop_lambda438) (close _V0loop_k444) (##inline ##sys.car (bruijn ##expr.39 4 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda438, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k444, env)}),
      VInlineCar(
VGetArg(env, 4, 1)
    )

    );
 } else {
  VError("Not enough arguments to _V0loop_lambda437, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda436(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda436" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda436, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 25 1) (bruijn ##k.3166 0 0) (close _V0loop_lambda437))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 1)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda437, env)})
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda436, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k443(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k443" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k443, env) {
 if (env->num_vars == 1) {
  // ((bruijn call-with-values 24 4) (bruijn ##k.3161 2 0) (close _V0loop_lambda436) (bruijn loop 3 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 4)),
      env->up->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda436, env)}),
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop_k443, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k442(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k442" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k442, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.37 3 1) (close _V0loop_k443) (bruijn ##expr.39 1 1) (bruijn ##x.3182 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[1]),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k443, env)}),
      env->up->vars[1],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k442, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda441(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda441" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda441, env) {
  // ((bruijn ##k.38 1 1) (bruijn ##k.3174 0 0) (##inline ##sys.cdr (bruijn ##expr.39 3 1)) (##inline ##sys.cons (bruijn lambda-body 0 1) (bruijn ##lambda-body.36 3 2)))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->vars[0],
      VInlineCdr(
env->up->up->up->vars[1]
    )
,
      VInlineCons(
env->vars[1],
      env->up->up->up->vars[2]
    )

    );
 }
}
static void _V0loop_k447(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k447" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k447, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.37 6 1) (bruijn ##k.3168 2 0) (bruijn ##expr.39 4 1) (bruijn ##x.3173 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 1)),
      env->up->up->vars[0],
      VGetArg(env, 4, 1),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k447, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k446(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k446" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k446, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 25 5) (close _V0loop_k447) (bruijn ##lambda-body.36 3 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k447, env)}),
      env->up->up->up->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0loop_k446, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda440(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda440" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda440, env) {
 if (env->num_vars == 2) {
  // ((close _V0loop_lambda441) (close _V0loop_k446) (##inline ##sys.car (bruijn ##expr.39 2 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda441, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k446, env)}),
      VInlineCar(
env->up->up->vars[1]
    )

    );
 } else {
  VError("Not enough arguments to _V0loop_lambda440, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda439(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda439" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda439, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 23 1) (bruijn ##k.3166 0 0) (close _V0loop_lambda440))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 1)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda440, env)})
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda439, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda435(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda435" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda435, env) {
 if (env->num_vars == 3) {
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.39 0 1))) ((bruijn reverse 22 5) (close _V0loop_k442) (bruijn ##lambda-body.36 0 2)) ((bruijn call-with-values 22 4) (bruijn ##k.3161 0 0) (close _V0loop_lambda439) (bruijn loop 1 1)))
if(VDecodeBool(
VInlineNot(
VInlinePairP(
env->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k442, env)}),
      env->vars[2]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 4)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda439, env)}),
      env->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0loop_lambda435, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_lambda434(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda434" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda434, env) {
  // (set! (close _V0iter_k441) (bruijn loop 0 1) (close _V0loop_lambda435))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k441, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda435, env)})
    );
 }
}
static void _V0iter_lambda433(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda433" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda433, env) {
 if (env->num_vars == 2) {
  // ((close _V0iter_lambda434) (bruijn ##k.3154 0 0) #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda434, env)},
      env->vars[0],
      VEncodeBool(false)
    );
 } else {
  VError("Not enough arguments to _V0iter_lambda433, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_lambda432(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda432" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda432, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 19 1) (bruijn ##k.3152 0 0) (close _V0iter_lambda433))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 1)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_lambda433, env)})
    );
 } else {
  VError("Not enough arguments to _V0iter_lambda432, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k449(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k449" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k449, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.23 13 1) (bruijn ##k.3191 2 0) (bruijn ##x.3193 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 1)),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0iter_k449, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k448(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k448" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k448, env) {
 if (env->num_vars == 1) {
  // ((bruijn iter 18 5) (close _V0iter_k449) (bruijn rest 1 1) (##inline ##sys.cons (##inline ##sys.cons (quote continuation) (##inline ##sys.cons (##inline ##sys.cons (bruijn y 6 1) (quote ())) (##inline ##sys.cons (bruijn cont 13 2) (quote ())))) (##inline ##sys.cons (##inline ##sys.cons (quote case-lambda) (bruijn ##x.3198 0 0)) (quote ()))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k449, env)}),
      env->up->vars[1],
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0continuation.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VGetArg(env, 6, 1),
      VNULL
    )
,
      VInlineCons(
VGetArg(env, 13, 2),
      VNULL
    )

    )

    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0case__lambda.sym, VPOINTER_OTHER),
      env->vars[0]
    )
,
      VNULL
    )

    )

    );
 } else {
  VError("Not enough arguments to _V0iter_k448, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_lambda443(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda443" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda443, env) {
  // ((bruijn map 20 3) (close _V0iter_k448) (bruijn to-cps-lambda 17 2) (bruijn lambda-body 1 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 3)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k448, env)}),
      VGetArg(env, 17, 2),
      env->up->vars[2]
    );
 }
}
static void _V0iter_lambda442(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda442" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda442, env) {
 if (env->num_vars == 3) {
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((close _V0iter_lambda443) (bruijn ##k.3186 0 0) (##inline ##sys.cdr (bruijn ##expr.32 6 1))) ((bruijn ##k.3186 0 0) #f))
if(VDecodeBool(
VInlineNullP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda443, env)},
      env->vars[0],
      VInlineCdr(
VGetArg(env, 6, 1)
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0iter_lambda442, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_lambda431(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda431" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda431, env) {
  // ((bruijn call-with-values 18 4) (bruijn ##k.3150 0 0) (close _V0iter_lambda432) (close _V0iter_lambda442))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 4)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_lambda432, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_lambda442, env)})
    );
 }
}
static void _V0iter_k440(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k440" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k440, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.3147 0 0) ((close _V0iter_lambda431) (bruijn ##k.3142 1 0) (##inline ##sys.cdr (bruijn ##expr.34 1 1))) ((bruijn ##k.3142 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda431, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0iter_k440, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_lambda430(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda430" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda430, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.34 0 1)) ((bruijn equal? 16 2) (close _V0iter_k440) (quote case-lambda) (##inline ##sys.car (bruijn ##expr.34 0 1))) ((bruijn ##k.3142 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k440, env)}),
      VEncodePointer(&_V0case__lambda.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_lambda429(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda429" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda429, env) {
  // ((close _V0iter_lambda430) (bruijn ##k.3140 0 0) (##inline ##sys.cdr (bruijn ##expr.33 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda430, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0iter_lambda428(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda428" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda428, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.33 0 1)) ((close _V0iter_lambda429) (bruijn ##k.3135 0 0) (##inline ##sys.car (bruijn ##expr.33 0 1))) ((bruijn ##k.3135 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda429, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_lambda427(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda427" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda427, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.32 0 1)) ((close _V0iter_lambda428) (bruijn ##k.3130 0 0) (##inline ##sys.car (bruijn ##expr.32 0 1))) ((bruijn ##k.3130 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda428, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_k451(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k451" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k451, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 1 1) (bruijn ##k.3066 1 0) (bruijn ##expr.42 4 1) (quote ()))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->up->vars[0],
      VGetArg(env, 4, 1),
      VNULL
    );
 } else {
  VError("Not enough arguments to _V0iter_k451, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda454(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda454" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda454, env) {
  // ((bruijn ##k.45 1 1) (bruijn ##k.3084 0 0) (##inline ##sys.cdr (bruijn ##expr.46 5 1)) (##inline ##sys.cons (bruijn xs 0 1) (bruijn ##xs.43 5 2)))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->vars[0],
      VInlineCdr(
VGetArg(env, 5, 1)
    )
,
      VInlineCons(
env->vars[1],
      VGetArg(env, 5, 2)
    )

    );
 }
}
static void _V0loop_k455(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k455" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k455, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.44 8 1) (bruijn ##k.3078 2 0) (bruijn ##expr.46 6 1) (bruijn ##x.3083 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 1)),
      env->up->up->vars[0],
      VGetArg(env, 6, 1),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k455, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k454(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k454" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k454, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 26 5) (close _V0loop_k455) (bruijn ##xs.43 5 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k455, env)}),
      VGetArg(env, 5, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k454, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda453(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda453" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda453, env) {
 if (env->num_vars == 2) {
  // ((close _V0loop_lambda454) (close _V0loop_k454) (##inline ##sys.car (bruijn ##expr.46 4 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda454, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k454, env)}),
      VInlineCar(
VGetArg(env, 4, 1)
    )

    );
 } else {
  VError("Not enough arguments to _V0loop_lambda453, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda452(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda452" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda452, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 24 1) (bruijn ##k.3076 0 0) (close _V0loop_lambda453))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 1)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda453, env)})
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda452, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k453(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k453" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k453, env) {
 if (env->num_vars == 1) {
  // ((bruijn call-with-values 23 4) (bruijn ##k.3071 2 0) (close _V0loop_lambda452) (bruijn loop 3 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 4)),
      env->up->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda452, env)}),
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop_k453, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k452(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k452" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k452, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.44 3 1) (close _V0loop_k453) (bruijn ##expr.46 1 1) (bruijn ##x.3092 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[1]),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k453, env)}),
      env->up->vars[1],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k452, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda457(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda457" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda457, env) {
  // ((bruijn ##k.45 1 1) (bruijn ##k.3084 0 0) (##inline ##sys.cdr (bruijn ##expr.46 3 1)) (##inline ##sys.cons (bruijn xs 0 1) (bruijn ##xs.43 3 2)))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->vars[0],
      VInlineCdr(
env->up->up->up->vars[1]
    )
,
      VInlineCons(
env->vars[1],
      env->up->up->up->vars[2]
    )

    );
 }
}
static void _V0loop_k457(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k457" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k457, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.44 6 1) (bruijn ##k.3078 2 0) (bruijn ##expr.46 4 1) (bruijn ##x.3083 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 1)),
      env->up->up->vars[0],
      VGetArg(env, 4, 1),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k457, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k456(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k456" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k456, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 24 5) (close _V0loop_k457) (bruijn ##xs.43 3 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k457, env)}),
      env->up->up->up->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0loop_k456, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda456(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda456" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda456, env) {
 if (env->num_vars == 2) {
  // ((close _V0loop_lambda457) (close _V0loop_k456) (##inline ##sys.car (bruijn ##expr.46 2 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda457, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k456, env)}),
      VInlineCar(
env->up->up->vars[1]
    )

    );
 } else {
  VError("Not enough arguments to _V0loop_lambda456, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda455(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda455" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda455, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 22 1) (bruijn ##k.3076 0 0) (close _V0loop_lambda456))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 1)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda456, env)})
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda455, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda451(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda451" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda451, env) {
 if (env->num_vars == 3) {
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.46 0 1))) ((bruijn reverse 21 5) (close _V0loop_k452) (bruijn ##xs.43 0 2)) ((bruijn call-with-values 21 4) (bruijn ##k.3071 0 0) (close _V0loop_lambda455) (bruijn loop 1 1)))
if(VDecodeBool(
VInlineNot(
VInlinePairP(
env->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k452, env)}),
      env->vars[2]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 4)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda455, env)}),
      env->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0loop_lambda451, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_lambda450(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda450" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda450, env) {
  // (set! (close _V0iter_k451) (bruijn loop 0 1) (close _V0loop_lambda451))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k451, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda451, env)})
    );
 }
}
static void _V0iter_lambda449(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda449" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda449, env) {
 if (env->num_vars == 2) {
  // ((close _V0iter_lambda450) (bruijn ##k.3064 0 0) #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda450, env)},
      env->vars[0],
      VEncodeBool(false)
    );
 } else {
  VError("Not enough arguments to _V0iter_lambda449, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_lambda448(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda448" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda448, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 18 1) (bruijn ##k.3062 0 0) (close _V0iter_lambda449))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 1)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_lambda449, env)})
    );
 } else {
  VError("Not enough arguments to _V0iter_lambda448, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k463(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k463" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k463, env) {
 if (env->num_vars == 1) {
  // ((bruijn iter 24 5) (bruijn ##k.3106 4 0) (bruijn ##x.3108 3 0) (##inline ##sys.cons (bruijn ##x.3110 2 0) (##inline ##sys.cons (##inline ##sys.cons (quote continuation) (##inline ##sys.cons (##inline ##sys.cons (bruijn y 11 1) (quote ())) (##inline ##sys.cons (bruijn cont 19 2) (quote ())))) (bruijn ##x.3113 0 0))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 5)),
      VGetArg(env, 4, 0),
      env->up->up->up->vars[0],
      VInlineCons(
env->up->up->vars[0],
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0continuation.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VGetArg(env, 11, 1),
      VNULL
    )
,
      VInlineCons(
VGetArg(env, 19, 2),
      VNULL
    )

    )

    )
,
      env->vars[0]
    )

    )

    );
 } else {
  VError("Not enough arguments to _V0iter_k463, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k462(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k462" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k462, env) {
 if (env->num_vars == 1) {
  // ((bruijn append 26 29) (close _V0iter_k463) (bruijn ##x.3114 0 0) (quote ()))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k463, env)}),
      env->vars[0],
      VNULL
    );
 } else {
  VError("Not enough arguments to _V0iter_k462, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k461(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k461" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k461, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 25 15) (close _V0iter_k462) (bruijn args 4 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 15)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k462, env)}),
      VGetArg(env, 4, 1)
    );
 } else {
  VError("Not enough arguments to _V0iter_k461, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k460(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k460" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k460, env) {
 if (env->num_vars == 1) {
  // ((bruijn car 24 18) (close _V0iter_k461) (bruijn args 3 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 18)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k461, env)}),
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0iter_k460, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_lambda461(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda461" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda461, env) {
  // ((bruijn append-reverse 20 1) (close _V0iter_k460) (bruijn newstack 0 1) (bruijn rest 4 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k460, env)}),
      env->vars[1],
      VGetArg(env, 4, 1)
    );
 }
}
static void _V0iter_k459(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k459" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k459, env) {
 if (env->num_vars == 1) {
  // ((close _V0iter_lambda461) (bruijn ##k.3104 1 0) (bruijn ##x.3118 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda461, env)},
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0iter_k459, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_lambda460(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda460" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda460, env) {
  // ((bruijn iter-subexprs 18 4) (close _V0iter_k459) (bruijn xs 3 2) (bruijn args 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 4)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k459, env)}),
      env->up->up->up->vars[2],
      env->vars[1]
    );
 }
}
static void _V0iter_k464(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k464" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k464, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.23 12 1) (bruijn ##k.3101 2 0) (bruijn ##x.3103 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 12, 1)),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0iter_k464, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k458(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k458" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k458, env) {
 if (env->num_vars == 1) {
  // ((close _V0iter_lambda460) (close _V0iter_k464) (bruijn ##x.3119 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda460, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k464, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0iter_k458, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_lambda459(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda459" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda459, env) {
  // ((bruijn map 19 3) (close _V0iter_k458) (bruijn iter-arg 16 3) (bruijn xs 1 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 3)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k458, env)}),
      VGetArg(env, 16, 3),
      env->up->vars[2]
    );
 }
}
static void _V0iter_lambda458(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda458" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda458, env) {
 if (env->num_vars == 3) {
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((close _V0iter_lambda459) (bruijn ##k.3096 0 0) (##inline ##sys.cdr (bruijn ##expr.40 4 1))) ((bruijn ##k.3096 0 0) #f))
if(VDecodeBool(
VInlineNullP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda459, env)},
      env->vars[0],
      VInlineCdr(
VGetArg(env, 4, 1)
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0iter_lambda458, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_lambda447(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda447" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda447, env) {
  // ((bruijn call-with-values 17 4) (bruijn ##k.3060 0 0) (close _V0iter_lambda448) (close _V0iter_lambda458))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 4)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_lambda448, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_lambda458, env)})
    );
 }
}
static void _V0iter_lambda446(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda446" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda446, env) {
  // ((close _V0iter_lambda447) (bruijn ##k.3058 0 0) (##inline ##sys.cdr (bruijn ##expr.41 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda447, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0iter_lambda445(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda445" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda445, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.41 0 1)) ((close _V0iter_lambda446) (bruijn ##k.3053 0 0) (##inline ##sys.car (bruijn ##expr.41 0 1))) ((bruijn ##k.3053 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda446, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_lambda444(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda444" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda444, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.40 0 1)) ((close _V0iter_lambda445) (bruijn ##k.3048 0 0) (##inline ##sys.car (bruijn ##expr.40 0 1))) ((bruijn ##k.3048 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda445, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_k466(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k466" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k466, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.23 11 1) (bruijn ##k.3031 1 0) (bruijn ##x.3033 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 1)),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0iter_k466, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_lambda466(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda466" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda466, env) {
  // ((bruijn iter 16 5) (close _V0iter_k466) (bruijn rest 0 1) (##inline ##sys.cons (##inline ##sys.cons (quote continuation) (##inline ##sys.cons (##inline ##sys.cons (bruijn y 2 1) (quote ())) (##inline ##sys.cons (bruijn cont 11 2) (quote ())))) (##inline ##sys.cons (bruijn x 1 1) (quote ()))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k466, env)}),
      env->vars[1],
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0continuation.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
env->up->up->vars[1],
      VNULL
    )
,
      VInlineCons(
VGetArg(env, 11, 2),
      VNULL
    )

    )

    )
,
      VInlineCons(
env->up->vars[1],
      VNULL
    )

    )

    );
 }
}
static void _V0iter_lambda465(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda465" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda465, env) {
  // ((close _V0iter_lambda466) (bruijn ##k.3029 0 0) (##inline ##sys.cdr (bruijn ##expr.47 3 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda466, env)},
      env->vars[0],
      VInlineCdr(
env->up->up->up->vars[1]
    )

    );
 }
}
static void _V0iter_lambda464(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda464" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda464, env) {
  // ((close _V0iter_lambda465) (bruijn ##k.3027 0 0) (##inline ##sys.cdr (bruijn ##expr.48 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda465, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0iter_lambda463(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda463" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda463, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.48 0 1)) ((close _V0iter_lambda464) (bruijn ##k.3022 0 0) (##inline ##sys.car (bruijn ##expr.48 0 1))) ((bruijn ##k.3022 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda464, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_lambda462(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda462" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda462, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.47 0 1)) ((close _V0iter_lambda463) (bruijn ##k.3017 0 0) (##inline ##sys.car (bruijn ##expr.47 0 1))) ((bruijn ##k.3017 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda463, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_k468(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k468" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k468, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.23 7 1) (bruijn ##k.2996 6 0) (bruijn ##x.3016 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 1)),
      VGetArg(env, 6, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0iter_k468, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k467(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k467" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k467, env) {
 if (env->num_vars == 1) {
  // ((bruijn error 15 11) (close _V0iter_k468) (##string ##string.3666) (bruijn stack 7 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 11)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k468, env)}),
      VEncodePointer(&_V10string_D3666.sym, VPOINTER_OTHER),
      VGetArg(env, 7, 1)
    );
 } else {
  VError("Not enough arguments to _V0iter_k467, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k465(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k465" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k465, env) {
 if (env->num_vars == 1) {
  // ((close _V0iter_lambda462) (close _V0iter_k467) (bruijn ##input.24 4 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda462, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k467, env)}),
      VGetArg(env, 4, 1)
    );
 } else {
  VError("Not enough arguments to _V0iter_k465, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k450(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k450" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k450, env) {
 if (env->num_vars == 1) {
  // ((close _V0iter_lambda444) (close _V0iter_k465) (bruijn ##input.24 3 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda444, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k465, env)}),
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0iter_k450, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k439(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k439" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k439, env) {
 if (env->num_vars == 1) {
  // ((close _V0iter_lambda427) (close _V0iter_k450) (bruijn ##input.24 2 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda427, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k450, env)}),
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0iter_k439, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k435(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k435" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k435, env) {
 if (env->num_vars == 1) {
  // ((close _V0iter_lambda421) (close _V0iter_k439) (bruijn ##input.24 1 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda421, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k439, env)}),
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0iter_k435, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_lambda360(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda360" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda360, env) {
  // (if (##inline ##sys.null? (bruijn ##input.24 0 1)) ((bruijn ##k.23 1 1) (close _V0iter_k396) (bruijn cont 2 2)) ((close _V0iter_lambda414) (close _V0iter_k435) (bruijn ##input.24 0 1)))
if(VDecodeBool(
VInlineNullP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k396, env)}),
      env->up->up->vars[2]
    );
} else {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda414, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k435, env)}),
      env->vars[1]
    );
}
 }
}
static void _V0iter_lambda359(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda359" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda359, env) {
 if (env->num_vars == 2) {
  // ((close _V0iter_lambda360) (bruijn ##k.2994 0 0) (bruijn stack 1 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter_lambda360, env)},
      env->vars[0],
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0iter_lambda359, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_lambda358(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda358" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda358, env) {
 if (env->num_vars == 3) {
  // ((bruijn call/cc 8 1) (bruijn ##k.2992 0 0) (close _V0iter_lambda359))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 1)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_lambda359, env)})
    );
 } else {
  VError("Not enough arguments to _V0iter_lambda358, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0to__cps_k385(VEnv * env) {
 static VDebugInfo dbg = { "_V0to__cps_k385" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0to__cps_k385, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0to__cps_k386) (bruijn iter 4 5) (close _V0iter_lambda358))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0to__cps_k386, env)}),
      VEncodeInt(4l), VEncodeInt(5l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_lambda358, env)})
    );
 } else {
  VError("Not enough arguments to _V0to__cps_k385, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__subexprs_k469(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__subexprs_k469" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__subexprs_k469, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 1 1) (bruijn ##k.3333 1 0) (bruijn exprs 2 1) (bruijn args 2 2))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->up->vars[0],
      env->up->up->vars[1],
      env->up->up->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0iter__subexprs_k469, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k475(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k475" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k475, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.17 7 1) (bruijn ##k.3410 4 0) (bruijn ##x.3418 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 1)),
      VGetArg(env, 4, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k475, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k474(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k474" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k474, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 9 1) (close _V0loop_k475) (bruijn ##x.3419 1 0) (bruijn ##x.3420 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k475, env)}),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k474, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k473(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k473" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k473, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 16 15) (close _V0loop_k474) (bruijn args 7 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 15)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k474, env)}),
      VGetArg(env, 7, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k473, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k472(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k472" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k472, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.3415 0 0) ((bruijn cdr 15 15) (close _V0loop_k473) (bruijn exprs 6 1)) ((bruijn ##k.3410 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 15)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k473, env)}),
      VGetArg(env, 6, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k472, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda472(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda472" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda472, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.19 0 1)) ((bruijn equal? 14 2) (close _V0loop_k472) (quote quote) (##inline ##sys.car (bruijn ##expr.19 0 1))) ((bruijn ##k.3410 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k472, env)}),
      VEncodePointer(&_V0quote.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k480(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k480" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k480, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.17 8 1) (bruijn ##k.3394 4 0) (bruijn ##x.3402 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 1)),
      VGetArg(env, 4, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k480, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k479(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k479" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k479, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 10 1) (close _V0loop_k480) (bruijn ##x.3403 1 0) (bruijn ##x.3404 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 10, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k480, env)}),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k479, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k478(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k478" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k478, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 17 15) (close _V0loop_k479) (bruijn args 8 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 15)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k479, env)}),
      VGetArg(env, 8, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k478, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k477(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k477" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k477, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.3399 0 0) ((bruijn cdr 16 15) (close _V0loop_k478) (bruijn exprs 7 1)) ((bruijn ##k.3394 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 15)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k478, env)}),
      VGetArg(env, 7, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k477, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda473(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda473" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda473, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.20 0 1)) ((bruijn equal? 15 2) (close _V0loop_k477) (quote lambda) (##inline ##sys.car (bruijn ##expr.20 0 1))) ((bruijn ##k.3394 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k477, env)}),
      VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k485(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k485" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k485, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.17 9 1) (bruijn ##k.3378 4 0) (bruijn ##x.3386 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 1)),
      VGetArg(env, 4, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k485, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k484(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k484" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k484, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 11 1) (close _V0loop_k485) (bruijn ##x.3387 1 0) (bruijn ##x.3388 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k485, env)}),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k484, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k483(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k483" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k483, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 18 15) (close _V0loop_k484) (bruijn args 9 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 15)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k484, env)}),
      VGetArg(env, 9, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k483, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k482(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k482" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k482, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.3383 0 0) ((bruijn cdr 17 15) (close _V0loop_k483) (bruijn exprs 8 1)) ((bruijn ##k.3378 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 15)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k483, env)}),
      VGetArg(env, 8, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k482, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda474(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda474" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda474, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.21 0 1)) ((bruijn equal? 16 2) (close _V0loop_k482) (quote case-lambda) (##inline ##sys.car (bruijn ##expr.21 0 1))) ((bruijn ##k.3378 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k482, env)}),
      VEncodePointer(&_V0case__lambda.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k493(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k493" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k493, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.17 13 1) (bruijn ##k.3364 7 0) (bruijn ##x.3369 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 1)),
      VGetArg(env, 7, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k493, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k492(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k492" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k492, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 23 10) (close _V0loop_k493) (bruijn ##x.3370 3 0) (bruijn ##x.3371 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 10)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k493, env)}),
      env->up->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k492, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k491(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k491" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k491, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 14 1) (close _V0loop_k492) (bruijn ##x.3372 1 0) (bruijn ##x.3373 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k492, env)}),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k491, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k490(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k490" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k490, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 21 15) (close _V0loop_k491) (bruijn args 12 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 15)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k491, env)}),
      VGetArg(env, 12, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k490, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k489(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k489" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k489, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 20 15) (close _V0loop_k490) (bruijn exprs 11 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 15)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k490, env)}),
      VGetArg(env, 11, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k489, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k488(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k488" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k488, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 19 10) (close _V0loop_k489) (bruijn ##x.3374 1 0) (bruijn ##x.3375 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 10)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k489, env)}),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k488, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k487(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k487" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k487, env) {
 if (env->num_vars == 1) {
  // ((bruijn car 18 18) (close _V0loop_k488) (bruijn exprs 9 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 18)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k488, env)}),
      VGetArg(env, 9, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k487, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda475(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda475" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda475, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.22 0 1)) ((bruijn car 17 18) (close _V0loop_k487) (bruijn args 8 2)) ((bruijn ##k.3364 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 18)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k487, env)}),
      VGetArg(env, 8, 2)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k497(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k497" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k497, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.17 9 1) (bruijn ##k.3347 7 0) (bruijn ##x.3361 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 1)),
      VGetArg(env, 7, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k497, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k496(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k496" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k496, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 11 1) (close _V0loop_k497) (bruijn ##x.3362 1 0) (bruijn ##x.3363 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k497, env)}),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k496, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k495(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k495" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k495, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 18 15) (close _V0loop_k496) (bruijn args 9 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 15)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k496, env)}),
      VGetArg(env, 9, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k495, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k494(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k494" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k494, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 17 15) (close _V0loop_k495) (bruijn exprs 8 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 15)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k495, env)}),
      VGetArg(env, 8, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k494, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k486(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k486" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k486, env) {
 if (env->num_vars == 1) {
  // ((close _V0loop_lambda475) (close _V0loop_k494) (bruijn ##input.18 3 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda475, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k494, env)}),
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop_k486, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k481(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k481" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k481, env) {
 if (env->num_vars == 1) {
  // ((close _V0loop_lambda474) (close _V0loop_k486) (bruijn ##input.18 2 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda474, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k486, env)}),
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop_k481, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k476(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k476" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k476, env) {
 if (env->num_vars == 1) {
  // ((close _V0loop_lambda473) (close _V0loop_k481) (bruijn ##input.18 1 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda473, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k481, env)}),
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop_k476, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda471(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda471" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda471, env) {
  // ((close _V0loop_lambda472) (close _V0loop_k476) (bruijn ##input.18 0 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda472, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k476, env)}),
      env->vars[1]
    );
 }
}
static void _V0loop_k471(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k471" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k471, env) {
 if (env->num_vars == 1) {
  // ((close _V0loop_lambda471) (bruijn ##k.3345 1 0) (bruijn ##x.3426 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda471, env)},
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k471, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda470(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda470" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda470, env) {
 if (env->num_vars == 2) {
  // ((bruijn car 11 18) (close _V0loop_k471) (bruijn exprs 2 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 18)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k471, env)}),
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda470, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k470(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k470" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k470, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.3340 0 0) ((bruijn ##k.3338 1 0) (quote ())) ((bruijn call/cc 10 1) (bruijn ##k.3338 1 0) (close _V0loop_lambda470)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VNULL
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 10, 1)),
      env->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda470, env)})
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k470, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda469(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda469" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda469, env) {
 if (env->num_vars == 3) {
  // ((bruijn null? 9 27) (close _V0loop_k470) (bruijn args 0 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 27)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k470, env)}),
      env->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda469, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__subexprs_lambda468(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__subexprs_lambda468" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__subexprs_lambda468, env) {
  // (set! (close _V0iter__subexprs_k469) (bruijn loop 0 1) (close _V0loop_lambda469))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__subexprs_k469, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda469, env)})
    );
 }
}
static void _V0iter__subexprs_lambda467(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__subexprs_lambda467" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__subexprs_lambda467, env) {
 if (env->num_vars == 3) {
  // ((close _V0iter__subexprs_lambda468) (bruijn ##k.3331 0 0) #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__subexprs_lambda468, env)},
      env->vars[0],
      VEncodeBool(false)
    );
 } else {
  VError("Not enough arguments to _V0iter__subexprs_lambda467, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0to__cps_k384(VEnv * env) {
 static VDebugInfo dbg = { "_V0to__cps_k384" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0to__cps_k384, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0to__cps_k385) (bruijn iter-subexprs 3 4) (close _V0iter__subexprs_lambda467))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0to__cps_k385, env)}),
      VEncodeInt(3l), VEncodeInt(4l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__subexprs_lambda467, env)})
    );
 } else {
  VError("Not enough arguments to _V0to__cps_k384, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__arg_lambda480(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__arg_lambda480" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__arg_lambda480, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.8 0 1)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.8 0 1))) ((bruijn ##k.5 4 1) (bruijn ##k.3538 0 0) (bruijn arg 5 1)) ((bruijn ##k.3538 0 0) #f)) ((bruijn ##k.3538 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 1)),
      env->vars[0],
      VGetArg(env, 5, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__arg_k498(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__arg_k498" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__arg_k498, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.3535 0 0) ((close _V0iter__arg_lambda480) (bruijn ##k.3530 1 0) (##inline ##sys.cdr (bruijn ##expr.7 1 1))) ((bruijn ##k.3530 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__arg_lambda480, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0iter__arg_k498, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__arg_lambda479(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__arg_lambda479" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__arg_lambda479, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.7 0 1)) ((bruijn equal? 9 2) (close _V0iter__arg_k498) (quote quote) (##inline ##sys.car (bruijn ##expr.7 0 1))) ((bruijn ##k.3530 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__arg_k498, env)}),
      VEncodePointer(&_V0quote.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__arg_k501(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__arg_k501" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__arg_k501, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.5 6 1) (bruijn ##k.3520 1 0) (##inline ##sys.cons (quote lambda) (bruijn ##x.3523 0 0)))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 1)),
      env->up->vars[0],
      VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      env->vars[0]
    )

    );
 } else {
  VError("Not enough arguments to _V0iter__arg_k501, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__arg_lambda482(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__arg_lambda482" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__arg_lambda482, env) {
  // ((bruijn to-cps-lambda 9 2) (close _V0iter__arg_k501) (bruijn lambda-body 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__arg_k501, env)}),
      env->vars[1]
    );
 }
}
static void _V0iter__arg_k500(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__arg_k500" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__arg_k500, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.3517 0 0) ((close _V0iter__arg_lambda482) (bruijn ##k.3512 1 0) (##inline ##sys.cdr (bruijn ##expr.9 1 1))) ((bruijn ##k.3512 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__arg_lambda482, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0iter__arg_k500, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__arg_lambda481(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__arg_lambda481" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__arg_lambda481, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.9 0 1)) ((bruijn equal? 10 2) (close _V0iter__arg_k500) (quote lambda) (##inline ##sys.car (bruijn ##expr.9 0 1))) ((bruijn ##k.3512 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 10, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__arg_k500, env)}),
      VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__arg_k504(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__arg_k504" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__arg_k504, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 1 1) (bruijn ##k.3467 1 0) (bruijn ##expr.11 4 1) (quote ()))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->up->vars[0],
      VGetArg(env, 4, 1),
      VNULL
    );
 } else {
  VError("Not enough arguments to _V0iter__arg_k504, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda491(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda491" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda491, env) {
  // ((bruijn ##k.14 1 1) (bruijn ##k.3485 0 0) (##inline ##sys.cdr (bruijn ##expr.15 5 1)) (##inline ##sys.cons (bruijn lambda-body 0 1) (bruijn ##lambda-body.12 5 2)))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->vars[0],
      VInlineCdr(
VGetArg(env, 5, 1)
    )
,
      VInlineCons(
env->vars[1],
      VGetArg(env, 5, 2)
    )

    );
 }
}
static void _V0loop_k508(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k508" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k508, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.13 8 1) (bruijn ##k.3479 2 0) (bruijn ##expr.15 6 1) (bruijn ##x.3484 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 1)),
      env->up->up->vars[0],
      VGetArg(env, 6, 1),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k508, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k507(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k507" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k507, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 22 5) (close _V0loop_k508) (bruijn ##lambda-body.12 5 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k508, env)}),
      VGetArg(env, 5, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k507, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda490(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda490" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda490, env) {
 if (env->num_vars == 2) {
  // ((close _V0loop_lambda491) (close _V0loop_k507) (##inline ##sys.car (bruijn ##expr.15 4 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda491, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k507, env)}),
      VInlineCar(
VGetArg(env, 4, 1)
    )

    );
 } else {
  VError("Not enough arguments to _V0loop_lambda490, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda489(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda489" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda489, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 20 1) (bruijn ##k.3477 0 0) (close _V0loop_lambda490))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 1)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda490, env)})
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda489, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k506(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k506" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k506, env) {
 if (env->num_vars == 1) {
  // ((bruijn call-with-values 19 4) (bruijn ##k.3472 2 0) (close _V0loop_lambda489) (bruijn loop 3 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 4)),
      env->up->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda489, env)}),
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop_k506, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k505(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k505" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k505, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.13 3 1) (close _V0loop_k506) (bruijn ##expr.15 1 1) (bruijn ##x.3493 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[1]),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k506, env)}),
      env->up->vars[1],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k505, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda494(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda494" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda494, env) {
  // ((bruijn ##k.14 1 1) (bruijn ##k.3485 0 0) (##inline ##sys.cdr (bruijn ##expr.15 3 1)) (##inline ##sys.cons (bruijn lambda-body 0 1) (bruijn ##lambda-body.12 3 2)))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->vars[0],
      VInlineCdr(
env->up->up->up->vars[1]
    )
,
      VInlineCons(
env->vars[1],
      env->up->up->up->vars[2]
    )

    );
 }
}
static void _V0loop_k510(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k510" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k510, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.13 6 1) (bruijn ##k.3479 2 0) (bruijn ##expr.15 4 1) (bruijn ##x.3484 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 1)),
      env->up->up->vars[0],
      VGetArg(env, 4, 1),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k510, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k509(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k509" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k509, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 20 5) (close _V0loop_k510) (bruijn ##lambda-body.12 3 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k510, env)}),
      env->up->up->up->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0loop_k509, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda493(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda493" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda493, env) {
 if (env->num_vars == 2) {
  // ((close _V0loop_lambda494) (close _V0loop_k509) (##inline ##sys.car (bruijn ##expr.15 2 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda494, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k509, env)}),
      VInlineCar(
env->up->up->vars[1]
    )

    );
 } else {
  VError("Not enough arguments to _V0loop_lambda493, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda492(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda492" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda492, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 18 1) (bruijn ##k.3477 0 0) (close _V0loop_lambda493))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 1)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda493, env)})
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda492, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda488(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda488" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda488, env) {
 if (env->num_vars == 3) {
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.15 0 1))) ((bruijn reverse 17 5) (close _V0loop_k505) (bruijn ##lambda-body.12 0 2)) ((bruijn call-with-values 17 4) (bruijn ##k.3472 0 0) (close _V0loop_lambda492) (bruijn loop 1 1)))
if(VDecodeBool(
VInlineNot(
VInlinePairP(
env->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k505, env)}),
      env->vars[2]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 4)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda492, env)}),
      env->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0loop_lambda488, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__arg_lambda487(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__arg_lambda487" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__arg_lambda487, env) {
  // (set! (close _V0iter__arg_k504) (bruijn loop 0 1) (close _V0loop_lambda488))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__arg_k504, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda488, env)})
    );
 }
}
static void _V0iter__arg_lambda486(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__arg_lambda486" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__arg_lambda486, env) {
 if (env->num_vars == 2) {
  // ((close _V0iter__arg_lambda487) (bruijn ##k.3465 0 0) #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__arg_lambda487, env)},
      env->vars[0],
      VEncodeBool(false)
    );
 } else {
  VError("Not enough arguments to _V0iter__arg_lambda486, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__arg_lambda485(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__arg_lambda485" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__arg_lambda485, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 14 1) (bruijn ##k.3463 0 0) (close _V0iter__arg_lambda486))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 1)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__arg_lambda486, env)})
    );
 } else {
  VError("Not enough arguments to _V0iter__arg_lambda485, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__arg_k511(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__arg_k511" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__arg_k511, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.5 8 1) (bruijn ##k.3497 1 0) (##inline ##sys.cons (quote case-lambda) (bruijn ##x.3503 0 0)))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 1)),
      env->up->vars[0],
      VInlineCons(
VEncodePointer(&_V0case__lambda.sym, VPOINTER_OTHER),
      env->vars[0]
    )

    );
 } else {
  VError("Not enough arguments to _V0iter__arg_k511, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__arg_lambda495(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__arg_lambda495" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__arg_lambda495, env) {
 if (env->num_vars == 3) {
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((bruijn map 14 3) (close _V0iter__arg_k511) (bruijn to-cps-lambda 11 2) (bruijn lambda-body 0 2)) ((bruijn ##k.3497 0 0) #f))
if(VDecodeBool(
VInlineNullP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 3)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__arg_k511, env)}),
      VGetArg(env, 11, 2),
      env->vars[2]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0iter__arg_lambda495, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__arg_lambda484(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__arg_lambda484" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__arg_lambda484, env) {
  // ((bruijn call-with-values 13 4) (bruijn ##k.3461 0 0) (close _V0iter__arg_lambda485) (close _V0iter__arg_lambda495))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 4)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__arg_lambda485, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__arg_lambda495, env)})
    );
 }
}
static void _V0iter__arg_k503(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__arg_k503" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__arg_k503, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.3458 0 0) ((close _V0iter__arg_lambda484) (bruijn ##k.3453 1 0) (##inline ##sys.cdr (bruijn ##expr.10 1 1))) ((bruijn ##k.3453 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__arg_lambda484, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0iter__arg_k503, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__arg_lambda483(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__arg_lambda483" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__arg_lambda483, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.10 0 1)) ((bruijn equal? 11 2) (close _V0iter__arg_k503) (quote case-lambda) (##inline ##sys.car (bruijn ##expr.10 0 1))) ((bruijn ##k.3453 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__arg_k503, env)}),
      VEncodePointer(&_V0case__lambda.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__arg_k513(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__arg_k513" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__arg_k513, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.5 6 1) (bruijn ##k.3445 1 0) (bruijn ##x.3450 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 1)),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0iter__arg_k513, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__arg_lambda496(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__arg_lambda496" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__arg_lambda496, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.16 0 1)) ((bruijn gensym 12 26) (close _V0iter__arg_k513) (##string ##string.3665)) ((bruijn ##k.3445 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 12, 26)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__arg_k513, env)}),
      VEncodePointer(&_V10string_D3665.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__arg_k514(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__arg_k514" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__arg_k514, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.5 5 1) (bruijn ##k.3431 4 0) (bruijn arg 6 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 5, 1)),
      VGetArg(env, 4, 0),
      VGetArg(env, 6, 1)
    );
 } else {
  VError("Not enough arguments to _V0iter__arg_k514, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__arg_k512(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__arg_k512" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__arg_k512, env) {
 if (env->num_vars == 1) {
  // ((close _V0iter__arg_lambda496) (close _V0iter__arg_k514) (bruijn ##input.6 3 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__arg_lambda496, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__arg_k514, env)}),
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0iter__arg_k512, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__arg_k502(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__arg_k502" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__arg_k502, env) {
 if (env->num_vars == 1) {
  // ((close _V0iter__arg_lambda483) (close _V0iter__arg_k512) (bruijn ##input.6 2 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__arg_lambda483, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__arg_k512, env)}),
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0iter__arg_k502, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__arg_k499(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__arg_k499" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__arg_k499, env) {
 if (env->num_vars == 1) {
  // ((close _V0iter__arg_lambda481) (close _V0iter__arg_k502) (bruijn ##input.6 1 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__arg_lambda481, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__arg_k502, env)}),
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0iter__arg_k499, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__arg_lambda478(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__arg_lambda478" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__arg_lambda478, env) {
  // ((close _V0iter__arg_lambda479) (close _V0iter__arg_k499) (bruijn ##input.6 0 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__arg_lambda479, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__arg_k499, env)}),
      env->vars[1]
    );
 }
}
static void _V0iter__arg_lambda477(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__arg_lambda477" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__arg_lambda477, env) {
 if (env->num_vars == 2) {
  // ((close _V0iter__arg_lambda478) (bruijn ##k.3429 0 0) (bruijn arg 1 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0iter__arg_lambda478, env)},
      env->vars[0],
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0iter__arg_lambda477, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0iter__arg_lambda476(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter__arg_lambda476" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter__arg_lambda476, env) {
 if (env->num_vars == 2) {
  // ((bruijn call/cc 6 1) (bruijn ##k.3427 0 0) (close _V0iter__arg_lambda477))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 1)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__arg_lambda477, env)})
    );
 } else {
  VError("Not enough arguments to _V0iter__arg_lambda476, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0to__cps_k383(VEnv * env) {
 static VDebugInfo dbg = { "_V0to__cps_k383" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0to__cps_k383, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0to__cps_k384) (bruijn iter-arg 2 3) (close _V0iter__arg_lambda476))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0to__cps_k384, env)}),
      VEncodeInt(2l), VEncodeInt(3l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter__arg_lambda476, env)})
    );
 } else {
  VError("Not enough arguments to _V0to__cps_k383, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0to__cps__lambda_k519(VEnv * env) {
 static VDebugInfo dbg = { "_V0to__cps__lambda_k519" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0to__cps__lambda_k519, env) {
 if (env->num_vars == 1) {
  // ((bruijn iter 15 5) (bruijn ##k.3590 3 0) (bruijn ##x.3592 1 0) (bruijn ##x.3593 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 5)),
      env->up->up->up->vars[0],
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0to__cps__lambda_k519, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0to__cps__lambda_k518(VEnv * env) {
 static VDebugInfo dbg = { "_V0to__cps__lambda_k518" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0to__cps__lambda_k518, env) {
 if (env->num_vars == 1) {
  // ((bruijn list 17 30) (close _V0to__cps__lambda_k519) (bruijn k 4 1) (bruijn x 2 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 30)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0to__cps__lambda_k519, env)}),
      VGetArg(env, 4, 1),
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0to__cps__lambda_k518, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0to__cps__lambda_k517(VEnv * env) {
 static VDebugInfo dbg = { "_V0to__cps__lambda_k517" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0to__cps__lambda_k517, env) {
 if (env->num_vars == 1) {
  // ((bruijn list 16 30) (close _V0to__cps__lambda_k518) (bruijn ##x.3594 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 30)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0to__cps__lambda_k518, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0to__cps__lambda_k517, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0to__cps__lambda_lambda505(VEnv * env) {
 static VDebugInfo dbg = { "_V0to__cps__lambda_lambda505" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0to__cps__lambda_lambda505, env) {
  // ((bruijn cons 15 10) (close _V0to__cps__lambda_k517) (bruijn x 0 1) (bruijn body 4 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 10)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0to__cps__lambda_k517, env)}),
      env->vars[1],
      VGetArg(env, 4, 1)
    );
 }
}
static void _V0to__cps__lambda_k520(VEnv * env) {
 static VDebugInfo dbg = { "_V0to__cps__lambda_k520" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0to__cps__lambda_k520, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.3585 2 0) (##inline ##sys.cons (##inline ##sys.cons (bruijn k 2 1) (bruijn args 6 1)) (##inline ##sys.cons (bruijn ##x.3589 0 0) (quote ()))))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->vars[0]),
      VInlineCons(
VInlineCons(
env->up->up->vars[1],
      VGetArg(env, 6, 1)
    )
,
      VInlineCons(
env->vars[0],
      VNULL
    )

    )

    );
 } else {
  VError("Not enough arguments to _V0to__cps__lambda_k520, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0to__cps__lambda_k516(VEnv * env) {
 static VDebugInfo dbg = { "_V0to__cps__lambda_k516" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0to__cps__lambda_k516, env) {
 if (env->num_vars == 1) {
  // ((close _V0to__cps__lambda_lambda505) (close _V0to__cps__lambda_k520) (bruijn ##x.3595 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0to__cps__lambda_lambda505, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0to__cps__lambda_k520, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0to__cps__lambda_k516, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0to__cps__lambda_lambda504(VEnv * env) {
 static VDebugInfo dbg = { "_V0to__cps__lambda_lambda504" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0to__cps__lambda_lambda504, env) {
  // ((bruijn gensym 13 26) (close _V0to__cps__lambda_k516) (##string ##string.3665))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 26)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0to__cps__lambda_k516, env)}),
      VEncodePointer(&_V10string_D3665.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0to__cps__lambda_k521(VEnv * env) {
 static VDebugInfo dbg = { "_V0to__cps__lambda_k521" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0to__cps__lambda_k521, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.1 7 1) (bruijn ##k.3579 2 0) (bruijn ##x.3584 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 1)),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0to__cps__lambda_k521, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0to__cps__lambda_k515(VEnv * env) {
 static VDebugInfo dbg = { "_V0to__cps__lambda_k515" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0to__cps__lambda_k515, env) {
 if (env->num_vars == 1) {
  // ((close _V0to__cps__lambda_lambda504) (close _V0to__cps__lambda_k521) (bruijn ##x.3596 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0to__cps__lambda_lambda504, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0to__cps__lambda_k521, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0to__cps__lambda_k515, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0to__cps__lambda_lambda503(VEnv * env) {
 static VDebugInfo dbg = { "_V0to__cps__lambda_lambda503" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0to__cps__lambda_lambda503, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.4 1 1))) ((bruijn gensym 11 26) (close _V0to__cps__lambda_k515) (##string ##string.3667)) ((bruijn ##k.3579 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 26)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0to__cps__lambda_k515, env)}),
      VEncodePointer(&_V10string_D3667.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0to__cps__lambda_lambda502(VEnv * env) {
 static VDebugInfo dbg = { "_V0to__cps__lambda_lambda502" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0to__cps__lambda_lambda502, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.4 0 1)) ((close _V0to__cps__lambda_lambda503) (bruijn ##k.3574 0 0) (##inline ##sys.car (bruijn ##expr.4 0 1))) ((bruijn ##k.3574 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0to__cps__lambda_lambda503, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0to__cps__lambda_lambda501(VEnv * env) {
 static VDebugInfo dbg = { "_V0to__cps__lambda_lambda501" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0to__cps__lambda_lambda501, env) {
  // ((close _V0to__cps__lambda_lambda502) (bruijn ##k.3572 0 0) (##inline ##sys.cdr (bruijn ##expr.3 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0to__cps__lambda_lambda502, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0to__cps__lambda_lambda500(VEnv * env) {
 static VDebugInfo dbg = { "_V0to__cps__lambda_lambda500" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0to__cps__lambda_lambda500, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.3 0 1)) ((close _V0to__cps__lambda_lambda501) (bruijn ##k.3567 0 0) (##inline ##sys.car (bruijn ##expr.3 0 1))) ((bruijn ##k.3567 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0to__cps__lambda_lambda501, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0to__cps__lambda_k523(VEnv * env) {
 static VDebugInfo dbg = { "_V0to__cps__lambda_k523" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0to__cps__lambda_k523, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.1 3 1) (bruijn ##k.3561 2 0) (bruijn ##x.3566 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[1]),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0to__cps__lambda_k523, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0to__cps__lambda_k522(VEnv * env) {
 static VDebugInfo dbg = { "_V0to__cps__lambda_k522" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0to__cps__lambda_k522, env) {
 if (env->num_vars == 1) {
  // ((bruijn error 8 11) (close _V0to__cps__lambda_k523) (##string ##string.3668) (bruijn lamb 3 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 11)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0to__cps__lambda_k523, env)}),
      VEncodePointer(&_V10string_D3668.sym, VPOINTER_OTHER),
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0to__cps__lambda_k522, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0to__cps__lambda_lambda499(VEnv * env) {
 static VDebugInfo dbg = { "_V0to__cps__lambda_lambda499" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0to__cps__lambda_lambda499, env) {
  // ((close _V0to__cps__lambda_lambda500) (close _V0to__cps__lambda_k522) (bruijn ##input.2 0 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0to__cps__lambda_lambda500, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0to__cps__lambda_k522, env)}),
      env->vars[1]
    );
 }
}
static void _V0to__cps__lambda_lambda498(VEnv * env) {
 static VDebugInfo dbg = { "_V0to__cps__lambda_lambda498" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0to__cps__lambda_lambda498, env) {
 if (env->num_vars == 2) {
  // ((close _V0to__cps__lambda_lambda499) (bruijn ##k.3559 0 0) (bruijn lamb 1 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0to__cps__lambda_lambda499, env)},
      env->vars[0],
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0to__cps__lambda_lambda498, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0to__cps__lambda_lambda497(VEnv * env) {
 static VDebugInfo dbg = { "_V0to__cps__lambda_lambda497" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0to__cps__lambda_lambda497, env) {
 if (env->num_vars == 2) {
  // ((bruijn call/cc 5 1) (bruijn ##k.3557 0 0) (close _V0to__cps__lambda_lambda498))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 5, 1)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0to__cps__lambda_lambda498, env)})
    );
 } else {
  VError("Not enough arguments to _V0to__cps__lambda_lambda497, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0to__cps_k382(VEnv * env) {
 static VDebugInfo dbg = { "_V0to__cps_k382" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0to__cps_k382, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0to__cps_k383) (bruijn to-cps-lambda 1 2) (close _V0to__cps__lambda_lambda497))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0to__cps_k383, env)}),
      VEncodeInt(1l), VEncodeInt(2l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0to__cps__lambda_lambda497, env)})
    );
 } else {
  VError("Not enough arguments to _V0to__cps_k382, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0append__reverse_k527(VEnv * env) {
 static VDebugInfo dbg = { "_V0append__reverse_k527" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0append__reverse_k527, env) {
 if (env->num_vars == 1) {
  // ((bruijn append-reverse 5 1) (bruijn ##k.3607 4 0) (bruijn ##x.3614 2 0) (bruijn ##x.3615 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 5, 1)),
      VGetArg(env, 4, 0),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0append__reverse_k527, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0append__reverse_k526(VEnv * env) {
 static VDebugInfo dbg = { "_V0append__reverse_k526" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0append__reverse_k526, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 7 10) (close _V0append__reverse_k527) (bruijn ##x.3616 0 0) (bruijn ys 3 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 10)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0append__reverse_k527, env)}),
      env->vars[0],
      env->up->up->up->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0append__reverse_k526, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0append__reverse_k525(VEnv * env) {
 static VDebugInfo dbg = { "_V0append__reverse_k525" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0append__reverse_k525, env) {
 if (env->num_vars == 1) {
  // ((bruijn car 6 18) (close _V0append__reverse_k526) (bruijn xs 2 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 18)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0append__reverse_k526, env)}),
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0append__reverse_k525, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0append__reverse_k524(VEnv * env) {
 static VDebugInfo dbg = { "_V0append__reverse_k524" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0append__reverse_k524, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.3609 0 0) ((bruijn ##k.3607 1 0) (bruijn ys 1 2)) ((bruijn cdr 5 15) (close _V0append__reverse_k525) (bruijn xs 1 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      env->up->vars[2]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 5, 15)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0append__reverse_k525, env)}),
      env->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0append__reverse_k524, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0append__reverse_lambda506(VEnv * env) {
 static VDebugInfo dbg = { "_V0append__reverse_lambda506" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0append__reverse_lambda506, env) {
 if (env->num_vars == 3) {
  // ((bruijn null? 4 27) (close _V0append__reverse_k524) (bruijn xs 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 27)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0append__reverse_k524, env)}),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0append__reverse_lambda506, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0to__cps_lambda348(VEnv * env) {
 static VDebugInfo dbg = { "_V0to__cps_lambda348" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0to__cps_lambda348, env) {
  // (set! (close _V0to__cps_k382) (bruijn append-reverse 0 1) (close _V0append__reverse_lambda506))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0to__cps_k382, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0append__reverse_lambda506, env)})
    );
 }
}
static void _V0to__cps_lambda347(VEnv * env) {
 static VDebugInfo dbg = { "_V0to__cps_lambda347" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0to__cps_lambda347, env) {
 if (env->num_vars == 2) {
  // ((close _V0to__cps_lambda348) (bruijn ##k.2907 0 0) #f #f #f #f #f #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0to__cps_lambda348, env)},
      env->vars[0],
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false)
    );
 } else {
  VError("Not enough arguments to _V0to__cps_lambda347, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void cps_lambda4(VEnv * env) {
 static VDebugInfo dbg = { "cps_lambda4" };
 VRecordCall(&dbg);
 V_GC_CHECK(cps_lambda4, env) {
  // (set! (close cps_k42) (bruijn to-cps 0 1) (close _V0to__cps_lambda347))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(cps_k42, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0to__cps_lambda347, env)})
    );
 }
}
static void cps_lambda3(VEnv * env) {
 static VDebugInfo dbg = { "cps_lambda3" };
 VRecordCall(&dbg);
 V_GC_CHECK(cps_lambda3, env) {
  // ((close cps_lambda4) (bruijn ##k.246 0 0) #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(cps_lambda4, env)},
      env->vars[0],
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false)
    );
 }
}
static void cps_k41(VEnv * env) {
 static VDebugInfo dbg = { "cps_k41" };
 VRecordCall(&dbg);
 V_GC_CHECK(cps_k41, env) {
 if (env->num_vars == 1) {
  // ((close cps_lambda3) (bruijn ##k.244 31 0) (bruijn ##x.3617 30 0) (bruijn ##x.3618 29 0) (bruijn ##x.3619 28 0) (bruijn ##x.3620 27 0) (bruijn ##x.3621 26 0) (bruijn ##x.3622 25 0) (bruijn ##x.3623 24 0) (bruijn ##x.3624 23 0) (bruijn ##x.3625 22 0) (bruijn ##x.3626 21 0) (bruijn ##x.3627 20 0) (bruijn ##x.3628 19 0) (bruijn ##x.3629 18 0) (bruijn ##x.3630 17 0) (bruijn ##x.3631 16 0) (bruijn ##x.3632 15 0) (bruijn ##x.3633 14 0) (bruijn ##x.3634 13 0) (bruijn ##x.3635 12 0) (bruijn ##x.3636 11 0) (bruijn ##x.3637 10 0) (bruijn ##x.3638 9 0) (bruijn ##x.3639 8 0) (bruijn ##x.3640 7 0) (bruijn ##x.3641 6 0) (bruijn ##x.3642 5 0) (bruijn ##x.3643 4 0) (bruijn ##x.3644 3 0) (bruijn ##x.3645 2 0) (bruijn ##x.3646 1 0) (bruijn ##x.3647 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(cps_lambda3, env)},
      VGetArg(env, 31, 0),
      VGetArg(env, 30, 0),
      VGetArg(env, 29, 0),
      VGetArg(env, 28, 0),
      VGetArg(env, 27, 0),
      VGetArg(env, 26, 0),
      VGetArg(env, 25, 0),
      VGetArg(env, 24, 0),
      VGetArg(env, 23, 0),
      VGetArg(env, 22, 0),
      VGetArg(env, 21, 0),
      VGetArg(env, 20, 0),
      VGetArg(env, 19, 0),
      VGetArg(env, 18, 0),
      VGetArg(env, 17, 0),
      VGetArg(env, 16, 0),
      VGetArg(env, 15, 0),
      VGetArg(env, 14, 0),
      VGetArg(env, 13, 0),
      VGetArg(env, 12, 0),
      VGetArg(env, 11, 0),
      VGetArg(env, 10, 0),
      VGetArg(env, 9, 0),
      VGetArg(env, 8, 0),
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
  VError("Not enough arguments to cps_k41, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void cps_k40(VEnv * env) {
 static VDebugInfo dbg = { "cps_k40" };
 VRecordCall(&dbg);
 V_GC_CHECK(cps_k40, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 30 1) (close cps_k41) (quote cadr))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(cps_k41, env)}),
      VEncodePointer(&_V0cadr.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to cps_k40, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void cps_k39(VEnv * env) {
 static VDebugInfo dbg = { "cps_k39" };
 VRecordCall(&dbg);
 V_GC_CHECK(cps_k39, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 29 1) (close cps_k40) (quote list))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(cps_k40, env)}),
      VEncodePointer(&_V0list.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to cps_k39, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void cps_k38(VEnv * env) {
 static VDebugInfo dbg = { "cps_k38" };
 VRecordCall(&dbg);
 V_GC_CHECK(cps_k38, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 28 1) (close cps_k39) (quote append))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 28, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(cps_k39, env)}),
      VEncodePointer(&_V0append.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to cps_k38, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void cps_k37(VEnv * env) {
 static VDebugInfo dbg = { "cps_k37" };
 VRecordCall(&dbg);
 V_GC_CHECK(cps_k37, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 27 1) (close cps_k38) (quote apply))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 27, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(cps_k38, env)}),
      VEncodePointer(&_V0apply.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to cps_k37, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void cps_k36(VEnv * env) {
 static VDebugInfo dbg = { "cps_k36" };
 VRecordCall(&dbg);
 V_GC_CHECK(cps_k36, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 26 1) (close cps_k37) (quote null?))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(cps_k37, env)}),
      VEncodePointer(&_V0null_Q.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to cps_k36, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void cps_k35(VEnv * env) {
 static VDebugInfo dbg = { "cps_k35" };
 VRecordCall(&dbg);
 V_GC_CHECK(cps_k35, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 25 1) (close cps_k36) (quote gensym))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(cps_k36, env)}),
      VEncodePointer(&_V0gensym.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to cps_k35, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void cps_k34(VEnv * env) {
 static VDebugInfo dbg = { "cps_k34" };
 VRecordCall(&dbg);
 V_GC_CHECK(cps_k34, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 24 1) (close cps_k35) (quote substring))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(cps_k35, env)}),
      VEncodePointer(&_V0substring.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to cps_k34, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void cps_k33(VEnv * env) {
 static VDebugInfo dbg = { "cps_k33" };
 VRecordCall(&dbg);
 V_GC_CHECK(cps_k33, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 23 1) (close cps_k34) (quote string->symbol))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(cps_k34, env)}),
      VEncodePointer(&_V0string___Gsymbol.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to cps_k33, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void cps_k32(VEnv * env) {
 static VDebugInfo dbg = { "cps_k32" };
 VRecordCall(&dbg);
 V_GC_CHECK(cps_k32, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 22 1) (close cps_k33) (quote eq?))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(cps_k33, env)}),
      VEncodePointer(&_V0eq_Q.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to cps_k32, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void cps_k31(VEnv * env) {
 static VDebugInfo dbg = { "cps_k31" };
 VRecordCall(&dbg);
 V_GC_CHECK(cps_k31, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 21 1) (close cps_k32) (quote string-ref))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(cps_k32, env)}),
      VEncodePointer(&_V0string__ref.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to cps_k31, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void cps_k30(VEnv * env) {
 static VDebugInfo dbg = { "cps_k30" };
 VRecordCall(&dbg);
 V_GC_CHECK(cps_k30, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 20 1) (close cps_k31) (quote symbol->string))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(cps_k31, env)}),
      VEncodePointer(&_V0symbol___Gstring.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to cps_k30, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void cps_k29(VEnv * env) {
 static VDebugInfo dbg = { "cps_k29" };
 VRecordCall(&dbg);
 V_GC_CHECK(cps_k29, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 19 1) (close cps_k30) (quote fold))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(cps_k30, env)}),
      VEncodePointer(&_V0fold.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to cps_k29, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void cps_k28(VEnv * env) {
 static VDebugInfo dbg = { "cps_k28" };
 VRecordCall(&dbg);
 V_GC_CHECK(cps_k28, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 18 1) (close cps_k29) (quote eqv?))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(cps_k29, env)}),
      VEncodePointer(&_V0eqv_Q.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to cps_k28, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void cps_k27(VEnv * env) {
 static VDebugInfo dbg = { "cps_k27" };
 VRecordCall(&dbg);
 V_GC_CHECK(cps_k27, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 17 1) (close cps_k28) (quote car))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(cps_k28, env)}),
      VEncodePointer(&_V0car.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to cps_k27, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void cps_k26(VEnv * env) {
 static VDebugInfo dbg = { "cps_k26" };
 VRecordCall(&dbg);
 V_GC_CHECK(cps_k26, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 16 1) (close cps_k27) (quote atom?))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(cps_k27, env)}),
      VEncodePointer(&_V0atom_Q.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to cps_k26, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void cps_k25(VEnv * env) {
 static VDebugInfo dbg = { "cps_k25" };
 VRecordCall(&dbg);
 V_GC_CHECK(cps_k25, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 15 1) (close cps_k26) (quote pair?))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(cps_k26, env)}),
      VEncodePointer(&_V0pair_Q.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to cps_k25, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void cps_k24(VEnv * env) {
 static VDebugInfo dbg = { "cps_k24" };
 VRecordCall(&dbg);
 V_GC_CHECK(cps_k24, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 14 1) (close cps_k25) (quote cdr))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(cps_k25, env)}),
      VEncodePointer(&_V0cdr.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to cps_k24, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void cps_k23(VEnv * env) {
 static VDebugInfo dbg = { "cps_k23" };
 VRecordCall(&dbg);
 V_GC_CHECK(cps_k23, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 13 1) (close cps_k24) (quote +))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(cps_k24, env)}),
      VEncodePointer(&_V0_P.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to cps_k23, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void cps_k22(VEnv * env) {
 static VDebugInfo dbg = { "cps_k22" };
 VRecordCall(&dbg);
 V_GC_CHECK(cps_k22, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 12 1) (close cps_k23) (quote <=))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 12, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(cps_k23, env)}),
      VEncodePointer(&_V0_L_E.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to cps_k22, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void cps_k21(VEnv * env) {
 static VDebugInfo dbg = { "cps_k21" };
 VRecordCall(&dbg);
 V_GC_CHECK(cps_k21, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 11 1) (close cps_k22) (quote length))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(cps_k22, env)}),
      VEncodePointer(&_V0length.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to cps_k21, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void cps_k20(VEnv * env) {
 static VDebugInfo dbg = { "cps_k20" };
 VRecordCall(&dbg);
 V_GC_CHECK(cps_k20, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 10 1) (close cps_k21) (quote error))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 10, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(cps_k21, env)}),
      VEncodePointer(&_V0error.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to cps_k20, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void cps_k19(VEnv * env) {
 static VDebugInfo dbg = { "cps_k19" };
 VRecordCall(&dbg);
 V_GC_CHECK(cps_k19, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 9 1) (close cps_k20) (quote cons))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(cps_k20, env)}),
      VEncodePointer(&_V0cons.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to cps_k19, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void cps_k18(VEnv * env) {
 static VDebugInfo dbg = { "cps_k18" };
 VRecordCall(&dbg);
 V_GC_CHECK(cps_k18, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 8 1) (close cps_k19) (quote symbol?))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(cps_k19, env)}),
      VEncodePointer(&_V0symbol_Q.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to cps_k18, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void cps_k17(VEnv * env) {
 static VDebugInfo dbg = { "cps_k17" };
 VRecordCall(&dbg);
 V_GC_CHECK(cps_k17, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 7 1) (close cps_k18) (quote lookup-inline))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(cps_k18, env)}),
      VEncodePointer(&_V0lookup__inline.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to cps_k17, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void cps_k16(VEnv * env) {
 static VDebugInfo dbg = { "cps_k16" };
 VRecordCall(&dbg);
 V_GC_CHECK(cps_k16, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 6 1) (close cps_k17) (quote =))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(cps_k17, env)}),
      VEncodePointer(&_V0_E.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to cps_k16, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void cps_k15(VEnv * env) {
 static VDebugInfo dbg = { "cps_k15" };
 VRecordCall(&dbg);
 V_GC_CHECK(cps_k15, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 5 1) (close cps_k16) (quote not))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 5, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(cps_k16, env)}),
      VEncodePointer(&_V0not.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to cps_k15, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void cps_k14(VEnv * env) {
 static VDebugInfo dbg = { "cps_k14" };
 VRecordCall(&dbg);
 V_GC_CHECK(cps_k14, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 4 1) (close cps_k15) (quote reverse))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(cps_k15, env)}),
      VEncodePointer(&_V0reverse.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to cps_k14, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void cps_k13(VEnv * env) {
 static VDebugInfo dbg = { "cps_k13" };
 VRecordCall(&dbg);
 V_GC_CHECK(cps_k13, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 3 1) (close cps_k14) (quote call-with-values))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[1]),
      VEncodeClosure((VClosure[]){VMakeClosure(cps_k14, env)}),
      VEncodePointer(&_V0call__with__values.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to cps_k13, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void cps_k12(VEnv * env) {
 static VDebugInfo dbg = { "cps_k12" };
 VRecordCall(&dbg);
 V_GC_CHECK(cps_k12, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 2 1) (close cps_k13) (quote map))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->vars[1]),
      VEncodeClosure((VClosure[]){VMakeClosure(cps_k13, env)}),
      VEncodePointer(&_V0map.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to cps_k12, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void cps_k11(VEnv * env) {
 static VDebugInfo dbg = { "cps_k11" };
 VRecordCall(&dbg);
 V_GC_CHECK(cps_k11, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 1 1) (close cps_k12) (quote equal?))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      VEncodeClosure((VClosure[]){VMakeClosure(cps_k12, env)}),
      VEncodePointer(&_V0equal_Q.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to cps_k11, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void cps_lambda2(VEnv * env) {
 static VDebugInfo dbg = { "cps_lambda2" };
 VRecordCall(&dbg);
 V_GC_CHECK(cps_lambda2, env) {
  // ((bruijn ##vcore.import 0 1) (close cps_k11) (quote call/cc))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[1]),
      VEncodeClosure((VClosure[]){VMakeClosure(cps_k11, env)}),
      VEncodePointer(&_V0call_Wcc.sym, VPOINTER_OTHER)
    );
 }
}
static void cps_k10(VEnv * env) {
 static VDebugInfo dbg = { "cps_k10" };
 VRecordCall(&dbg);
 V_GC_CHECK(cps_k10, env) {
 if (env->num_vars == 1) {
  // ((close cps_lambda2) (bruijn ##k.242 10 0) (bruijn ##x.3648 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(cps_lambda2, env)},
      VGetArg(env, 10, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to cps_k10, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void cps_k9(VEnv * env) {
 static VDebugInfo dbg = { "cps_k9" };
 VRecordCall(&dbg);
 V_GC_CHECK(cps_k9, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##x.3649 8 0) (close cps_k10) (##string ##string.3669) (bruijn ##x.3650 6 0) (bruijn ##x.3651 4 0) (bruijn ##x.3652 2 0) (bruijn ##x.3653 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 0)),
      VEncodeClosure((VClosure[]){VMakeClosure(cps_k10, env)}),
      VEncodePointer(&_V10string_D3669.sym, VPOINTER_OTHER),
      VGetArg(env, 6, 0),
      VGetArg(env, 4, 0),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to cps_k9, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void cps_k8(VEnv * env) {
 static VDebugInfo dbg = { "cps_k8" };
 VRecordCall(&dbg);
 V_GC_CHECK(cps_k8, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##x.3654 0 0) (close cps_k9) (##string ##string.3670))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeClosure((VClosure[]){VMakeClosure(cps_k9, env)}),
      VEncodePointer(&_V10string_D3670.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to cps_k8, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void cps_k7(VEnv * env) {
 static VDebugInfo dbg = { "cps_k7" };
 VRecordCall(&dbg);
 V_GC_CHECK(cps_k7, env) {
 if (env->num_vars == 1) {
  // (##vcore.function (close cps_k8) (##string ##string.3671))
    V_CALL_FUNC(VFunction,
      VEncodeClosure((VClosure[]){VMakeClosure(cps_k8, env)}),
      VEncodePointer(&_V10string_D3671.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to cps_k7, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void cps_k6(VEnv * env) {
 static VDebugInfo dbg = { "cps_k6" };
 VRecordCall(&dbg);
 V_GC_CHECK(cps_k6, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##x.3655 0 0) (close cps_k7) (##string ##string.3672))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeClosure((VClosure[]){VMakeClosure(cps_k7, env)}),
      VEncodePointer(&_V10string_D3672.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to cps_k6, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void cps_k5(VEnv * env) {
 static VDebugInfo dbg = { "cps_k5" };
 VRecordCall(&dbg);
 V_GC_CHECK(cps_k5, env) {
 if (env->num_vars == 1) {
  // (##vcore.function (close cps_k6) (##string ##string.3671))
    V_CALL_FUNC(VFunction,
      VEncodeClosure((VClosure[]){VMakeClosure(cps_k6, env)}),
      VEncodePointer(&_V10string_D3671.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to cps_k5, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void cps_k4(VEnv * env) {
 static VDebugInfo dbg = { "cps_k4" };
 VRecordCall(&dbg);
 V_GC_CHECK(cps_k4, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##x.3656 0 0) (close cps_k5) (##string ##string.3673))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeClosure((VClosure[]){VMakeClosure(cps_k5, env)}),
      VEncodePointer(&_V10string_D3673.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to cps_k4, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void cps_k3(VEnv * env) {
 static VDebugInfo dbg = { "cps_k3" };
 VRecordCall(&dbg);
 V_GC_CHECK(cps_k3, env) {
 if (env->num_vars == 1) {
  // (##vcore.function (close cps_k4) (##string ##string.3671))
    V_CALL_FUNC(VFunction,
      VEncodeClosure((VClosure[]){VMakeClosure(cps_k4, env)}),
      VEncodePointer(&_V10string_D3671.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to cps_k3, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void cps_k2(VEnv * env) {
 static VDebugInfo dbg = { "cps_k2" };
 VRecordCall(&dbg);
 V_GC_CHECK(cps_k2, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##x.3657 0 0) (close cps_k3) (##string ##string.3674))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeClosure((VClosure[]){VMakeClosure(cps_k3, env)}),
      VEncodePointer(&_V10string_D3674.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to cps_k2, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void cps_k1(VEnv * env) {
 static VDebugInfo dbg = { "cps_k1" };
 VRecordCall(&dbg);
 V_GC_CHECK(cps_k1, env) {
 if (env->num_vars == 1) {
  // (##vcore.function (close cps_k2) (##string ##string.3671))
    V_CALL_FUNC(VFunction,
      VEncodeClosure((VClosure[]){VMakeClosure(cps_k2, env)}),
      VEncodePointer(&_V10string_D3671.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to cps_k1, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void cps_lambda1(VEnv * env) {
 static VDebugInfo dbg = { "cps_lambda1" };
 VRecordCall(&dbg);
 V_GC_CHECK(cps_lambda1, env) {
 if (env->num_vars == 1) {
  // (##vcore.function (close cps_k1) (##string ##string.3675))
    V_CALL_FUNC(VFunction,
      VEncodeClosure((VClosure[]){VMakeClosure(cps_k1, env)}),
      VEncodePointer(&_V10string_D3675.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to cps_lambda1, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
void (*cps)(VEnv*) = cps_lambda1;
