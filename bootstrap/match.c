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
static struct { VBlob sym; char bytes[12]; } _V10string_D449 = { { VSTRING, 12 }, "VMakeImport" };
static struct { VBlob sym; char bytes[21]; } _V10string_D448 = { { VSTRING, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[13]; } _V10string_D447 = { { VSTRING, 13 }, "VLoadLibrary" };
static struct { VBlob sym; char bytes[6]; } _V10string_D446 = { { VSTRING, 6 }, "utils" };
static struct { VBlob sym; char bytes[6]; } _V10string_D445 = { { VSTRING, 6 }, "match" };
static struct { VBlob sym; char bytes[4]; } _V0map = { { VSYMBOL, 4 }, "map" };
static struct { VBlob sym; char bytes[4]; } _V0car = { { VSYMBOL, 4 }, "car" };
static struct { VBlob sym; char bytes[6]; } _V0pair_Q = { { VSYMBOL, 6 }, "pair\?" };
static struct { VBlob sym; char bytes[6]; } _V0cadar = { { VSYMBOL, 6 }, "cadar" };
static struct { VBlob sym; char bytes[6]; } _V0cddar = { { VSYMBOL, 6 }, "cddar" };
static struct { VBlob sym; char bytes[4]; } _V0not = { { VSYMBOL, 4 }, "not" };
static struct { VBlob sym; char bytes[6]; } _V0atom_Q = { { VSYMBOL, 6 }, "atom\?" };
static struct { VBlob sym; char bytes[8]; } _V0string_Q = { { VSYMBOL, 8 }, "string\?" };
static struct { VBlob sym; char bytes[8]; } _V0vector_Q = { { VSYMBOL, 8 }, "vector\?" };
static struct { VBlob sym; char bytes[8]; } _V0symbol_Q = { { VSYMBOL, 8 }, "symbol\?" };
static struct { VBlob sym; char bytes[5]; } _V0cadr = { { VSYMBOL, 5 }, "cadr" };
static struct { VBlob sym; char bytes[5]; } _V0cddr = { { VSYMBOL, 5 }, "cddr" };
static struct { VBlob sym; char bytes[6]; } _V0null_Q = { { VSYMBOL, 6 }, "null\?" };
static struct { VBlob sym; char bytes[5]; } _V0cons = { { VSYMBOL, 5 }, "cons" };
static struct { VBlob sym; char bytes[5]; } _V0cdar = { { VSYMBOL, 5 }, "cdar" };
static struct { VBlob sym; char bytes[5]; } _V0list = { { VSYMBOL, 5 }, "list" };
static struct { VBlob sym; char bytes[5]; } _V0caar = { { VSYMBOL, 5 }, "caar" };
static struct { VBlob sym; char bytes[4]; } _V0cdr = { { VSYMBOL, 4 }, "cdr" };
static struct { VBlob sym; char bytes[7]; } _V0gensym = { { VSYMBOL, 7 }, "gensym" };
static struct { VBlob sym; char bytes[11]; } _V10sys_Dcons = { { VSYMBOL, 11 }, "##sys.cons" };
static struct { VBlob sym; char bytes[8]; } _V0reverse = { { VSYMBOL, 8 }, "reverse" };
static struct { VBlob sym; char bytes[10]; } _V0tail__expr = { { VSYMBOL, 10 }, "tail-expr" };
static struct { VBlob sym; char bytes[10]; } _V10sys_Dnot = { { VSYMBOL, 10 }, "##sys.not" };
static struct { VBlob sym; char bytes[5]; } _V0loop = { { VSYMBOL, 5 }, "loop" };
static struct { VBlob sym; char bytes[17]; } _V0call__with__values = { { VSYMBOL, 17 }, "call-with-values" };
static struct { VBlob sym; char bytes[2]; } _V0_U = { { VSYMBOL, 2 }, "_" };
static struct { VBlob sym; char bytes[4]; } _V0_D_D_D = { { VSYMBOL, 4 }, "..." };
static struct { VBlob sym; char bytes[10]; } _V10sys_Dcdr = { { VSYMBOL, 10 }, "##sys.cdr" };
static struct { VBlob sym; char bytes[10]; } _V10sys_Dcar = { { VSYMBOL, 10 }, "##sys.car" };
static struct { VBlob sym; char bytes[12]; } _V10sys_Dpair_Q = { { VSYMBOL, 12 }, "##sys.pair\?" };
static struct { VBlob sym; char bytes[5]; } _V10string_D444 = { { VSTRING, 5 }, "expr" };
static struct { VBlob sym; char bytes[16]; } _V10string_D443 = { { VSTRING, 16 }, "malformed quote" };
static struct { VBlob sym; char bytes[6]; } _V0quote = { { VSYMBOL, 6 }, "quote" };
static struct { VBlob sym; char bytes[7]; } _V0equal_Q = { { VSYMBOL, 7 }, "equal\?" };
static struct { VBlob sym; char bytes[10]; } _V10sys_Deq_Q = { { VSYMBOL, 10 }, "##sys.eq\?" };
static struct { VBlob sym; char bytes[12]; } _V10sys_Dnull_Q = { { VSYMBOL, 12 }, "##sys.null\?" };
static struct { VBlob sym; char bytes[3]; } _V0if = { { VSYMBOL, 3 }, "if" };
static struct { VBlob sym; char bytes[20]; } _V10string_D442 = { { VSTRING, 20 }, "not implemented yet" };
static struct { VBlob sym; char bytes[2]; } _V10string_D441 = { { VSTRING, 2 }, "k" };
static struct { VBlob sym; char bytes[6]; } _V10string_D440 = { { VSTRING, 6 }, "input" };
static struct { VBlob sym; char bytes[4]; } _V0let = { { VSYMBOL, 4 }, "let" };
static struct { VBlob sym; char bytes[7]; } _V0lambda = { { VSYMBOL, 7 }, "lambda" };
static struct { VBlob sym; char bytes[8]; } _V0call_Wcc = { { VSYMBOL, 8 }, "call/cc" };
static struct { VBlob sym; char bytes[5]; } _V0else = { { VSYMBOL, 5 }, "else" };
static struct { VBlob sym; char bytes[6]; } _V0begin = { { VSYMBOL, 6 }, "begin" };
static struct { VBlob sym; char bytes[17]; } _V10string_D439 = { { VSTRING, 17 }, "no matching case" };
static struct { VBlob sym; char bytes[6]; } _V0error = { { VSYMBOL, 6 }, "error" };
static struct { VBlob sym; char bytes[16]; } _V0transform__match = { { VSYMBOL, 16 }, "transform-match" };
static void match_k28(VEnv * env) {
 V_GC_CHECK(match_k28, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.8 2 0) (##inline ##sys.cons (##inline ##sys.cons (quote transform-match) (bruijn transform-match 2 2)) (quote ())))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->vars[0]),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0transform__match.sym, VPOINTER_OTHER),
      env->up->up->vars[2]
    )
,
      VNULL
    )

    );
 } else {
  VError("Not enough arguments to match_k28, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0transform__match_k35(VEnv * env) {
 V_GC_CHECK(_V0transform__match_k35, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 2 1) (bruijn ##k.38 2 0) (bruijn ##x.43 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->vars[1]),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0transform__match_k35, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0transform__match_k34(VEnv * env) {
 V_GC_CHECK(_V0transform__match_k34, env) {
 if (env->num_vars == 1) {
  // ((bruijn cddr 12 13) (close _V0transform__match_k35) (bruijn expr 9 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 12, 13)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0transform__match_k35, env)}),
      VGetArg(env, 9, 1)
    );
 } else {
  VError("Not enough arguments to _V0transform__match_k34, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k39(VEnv * env) {
 V_GC_CHECK(_V0loop_k39, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.44 4 0) (##inline ##sys.cons (##inline ##sys.cons (bruijn k 7 1) (##inline ##sys.cons (##inline ##sys.cons (quote begin) (bruijn ##x.59 0 0)) (quote ()))) (quote ())))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 0)),
      VInlineCons(
VInlineCons(
VGetArg(env, 7, 1),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0begin.sym, VPOINTER_OTHER),
      env->vars[0]
    )
,
      VNULL
    )

    )
,
      VNULL
    )

    );
 } else {
  VError("Not enough arguments to _V0loop_k39, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k46(VEnv * env) {
 V_GC_CHECK(_V0loop_k46, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 22 15) (bruijn ##k.44 10 0) (bruijn ##x.62 2 0) (bruijn ##x.63 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 15)),
      VGetArg(env, 10, 0),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k46, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k45(VEnv * env) {
 V_GC_CHECK(_V0loop_k45, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 10 1) (close _V0loop_k46) (bruijn ##x.64 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 10, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k46, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k45, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k44(VEnv * env) {
 V_GC_CHECK(_V0loop_k44, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 20 19) (close _V0loop_k45) (bruijn patterns 8 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k45, env)}),
      VGetArg(env, 8, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k44, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k43(VEnv * env) {
 V_GC_CHECK(_V0loop_k43, env) {
 if (env->num_vars == 1) {
  // ((bruijn match-iter 15 2) (close _V0loop_k44) (bruijn ##x.65 3 0) (bruijn ##x.66 1 0) (##inline ##sys.cons (bruijn k 10 1) (##inline ##sys.cons (##inline ##sys.cons (quote begin) (bruijn ##x.70 0 0)) (quote ()))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k44, env)}),
      env->up->up->up->vars[0],
      env->up->vars[0],
      VInlineCons(
VGetArg(env, 10, 1),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0begin.sym, VPOINTER_OTHER),
      env->vars[0]
    )
,
      VNULL
    )

    )

    );
 } else {
  VError("Not enough arguments to _V0loop_k43, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k42(VEnv * env) {
 V_GC_CHECK(_V0loop_k42, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdar 18 16) (close _V0loop_k43) (bruijn patterns 6 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 16)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k43, env)}),
      VGetArg(env, 6, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k42, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k41(VEnv * env) {
 V_GC_CHECK(_V0loop_k41, env) {
 if (env->num_vars == 1) {
  // ((bruijn list 17 17) (close _V0loop_k42) (bruijn ##x.71 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 17)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k42, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k41, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k40(VEnv * env) {
 V_GC_CHECK(_V0loop_k40, env) {
 if (env->num_vars == 1) {
  // ((bruijn caar 16 18) (close _V0loop_k41) (bruijn patterns 4 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 18)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k41, env)}),
      VGetArg(env, 4, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k40, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k38(VEnv * env) {
 V_GC_CHECK(_V0loop_k38, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.53 0 0) ((bruijn cdar 15 16) (close _V0loop_k39) (bruijn patterns 3 1)) ((bruijn list 15 17) (close _V0loop_k40) (bruijn input 6 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 16)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k39, env)}),
      env->up->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 17)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k40, env)}),
      VGetArg(env, 6, 2)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k38, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k37(VEnv * env) {
 V_GC_CHECK(_V0loop_k37, env) {
 if (env->num_vars == 1) {
  // ((bruijn eqv? 11 2) (close _V0loop_k38) (bruijn ##x.72 0 0) (quote else))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k38, env)}),
      env->vars[0],
      VEncodePointer(&_V0else.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0loop_k37, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k36(VEnv * env) {
 V_GC_CHECK(_V0loop_k36, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.46 0 0) ((bruijn ##k.44 1 0) (##inline ##sys.qcons (##inline ##sys.qcons (quote error) (##inline ##sys.qcons (quote (##string ##string.439)) (quote ()))) (quote ()))) ((bruijn caar 13 18) (close _V0loop_k37) (bruijn patterns 1 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0error.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V10string_D439.sym, VPOINTER_OTHER),
      VNULL
    )

    )
,
      VNULL
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 18)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k37, env)}),
      env->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k36, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda9(VEnv * env) {
 V_GC_CHECK(_V0loop_lambda9, env) {
 if (env->num_vars == 2) {
  // ((bruijn null? 12 14) (close _V0loop_k36) (bruijn patterns 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 12, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k36, env)}),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda9, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0transform__match_lambda8(VEnv * env) {
 V_GC_CHECK(_V0transform__match_lambda8, env) {
  // (set! (close _V0transform__match_k34) (bruijn loop 0 1) (close _V0loop_lambda9))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0transform__match_k34, env)}),
      0, 1,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda9, env)})
    );
 }
}
static void _V0transform__match_k47(VEnv * env) {
 V_GC_CHECK(_V0transform__match_k47, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.27 2 0) (##inline ##sys.cons (quote call/cc) (##inline ##sys.cons (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (##inline ##sys.cons (bruijn k 2 1) (quote ())) (##inline ##sys.cons (##inline ##sys.cons (quote let) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.cons (bruijn input 2 2) (##inline ##sys.cons (bruijn ##x.75 1 0) (quote ()))) (quote ())) (bruijn ##x.37 0 0))) (quote ())))) (quote ()))))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->vars[0]),
      VInlineCons(
VEncodePointer(&_V0call_Wcc.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
env->up->up->vars[1],
      VNULL
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0let.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VInlineCons(
env->up->up->vars[2],
      VInlineCons(
env->up->vars[0],
      VNULL
    )

    )
,
      VNULL
    )
,
      env->vars[0]
    )

    )
,
      VNULL
    )

    )

    )
,
      VNULL
    )

    )

    );
 } else {
  VError("Not enough arguments to _V0transform__match_k47, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0transform__match_k33(VEnv * env) {
 V_GC_CHECK(_V0transform__match_k33, env) {
 if (env->num_vars == 1) {
  // ((close _V0transform__match_lambda8) (close _V0transform__match_k47) #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0transform__match_lambda8, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0transform__match_k47, env)}),
      VEncodeBool(false)
    );
 } else {
  VError("Not enough arguments to _V0transform__match_k33, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0transform__match_lambda7(VEnv * env) {
 V_GC_CHECK(_V0transform__match_lambda7, env) {
  // ((bruijn cadr 9 12) (close _V0transform__match_k33) (bruijn expr 6 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 12)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0transform__match_k33, env)}),
      VGetArg(env, 6, 1)
    );
 }
}
static void _V0transform__match_k32(VEnv * env) {
 V_GC_CHECK(_V0transform__match_k32, env) {
 if (env->num_vars == 1) {
  // ((close _V0transform__match_lambda7) (bruijn ##k.19 4 0) (bruijn ##x.76 1 0) (bruijn ##x.77 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0transform__match_lambda7, env)},
      VGetArg(env, 4, 0),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0transform__match_k32, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0transform__match_k31(VEnv * env) {
 V_GC_CHECK(_V0transform__match_k31, env) {
 if (env->num_vars == 1) {
  // ((bruijn gensym 7 20) (close _V0transform__match_k32) (##string ##string.440))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 20)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0transform__match_k32, env)}),
      VEncodePointer(&_V10string_D440.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0transform__match_k31, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0transform__match_k30(VEnv * env) {
 V_GC_CHECK(_V0transform__match_k30, env) {
 if (env->num_vars == 1) {
  // ((bruijn gensym 6 20) (close _V0transform__match_k31) (##string ##string.441))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 20)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0transform__match_k31, env)}),
      VEncodePointer(&_V10string_D441.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0transform__match_k30, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k52(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k52, env) {
 if (env->num_vars == 1) {
  // ((bruijn match-iter 7 2) (bruijn ##k.78 5 0) (bruijn ##x.88 1 0) (bruijn ##x.89 0 0) (bruijn success-expr 5 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 2)),
      VGetArg(env, 5, 0),
      env->up->vars[0],
      env->vars[0],
      VGetArg(env, 5, 3)
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k52, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k51(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k51, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 10 19) (close _V0match__iter_k52) (bruijn pattern-stack 4 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 10, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k52, env)}),
      VGetArg(env, 4, 2)
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k51, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k59(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k59, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.78 10 0) (##inline ##sys.cons (quote let) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.cons (bruijn ##x.102 4 0) (##inline ##sys.cons (bruijn ##x.104 3 0) (quote ()))) (quote ())) (##inline ##sys.cons (bruijn ##x.98 0 0) (quote ())))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 10, 0)),
      VInlineCons(
VEncodePointer(&_V0let.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VInlineCons(
VGetArg(env, 4, 0),
      VInlineCons(
env->up->up->up->vars[0],
      VNULL
    )

    )
,
      VNULL
    )
,
      VInlineCons(
env->vars[0],
      VNULL
    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0match__iter_k59, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k58(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k58, env) {
 if (env->num_vars == 1) {
  // ((bruijn match-iter 11 2) (close _V0match__iter_k59) (bruijn ##x.99 1 0) (bruijn ##x.100 0 0) (bruijn success-expr 9 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k59, env)}),
      env->up->vars[0],
      env->vars[0],
      VGetArg(env, 9, 3)
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k58, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k57(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k57, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 14 19) (close _V0match__iter_k58) (bruijn pattern-stack 8 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k58, env)}),
      VGetArg(env, 8, 2)
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k57, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k56(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k56, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 13 19) (close _V0match__iter_k57) (bruijn expr-stack 7 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k57, env)}),
      VGetArg(env, 7, 1)
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k56, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k55(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k55, env) {
 if (env->num_vars == 1) {
  // ((bruijn car 12 3) (close _V0match__iter_k56) (bruijn expr-stack 6 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 12, 3)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k56, env)}),
      VGetArg(env, 6, 1)
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k55, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k67(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k67, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.78 13 0) (##inline ##sys.cons (quote if) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.null?) (##inline ##sys.cons (bruijn ##x.122 3 0) (quote ()))) (##inline ##sys.cons (bruijn ##x.118 0 0) (quote ())))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 0)),
      VInlineCons(
VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10sys_Dnull_Q.sym, VPOINTER_OTHER),
      VInlineCons(
env->up->up->up->vars[0],
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

    );
 } else {
  VError("Not enough arguments to _V0match__iter_k67, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k66(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k66, env) {
 if (env->num_vars == 1) {
  // ((bruijn match-iter 14 2) (close _V0match__iter_k67) (bruijn ##x.119 1 0) (bruijn ##x.120 0 0) (bruijn success-expr 12 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k67, env)}),
      env->up->vars[0],
      env->vars[0],
      VGetArg(env, 12, 3)
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k66, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k65(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k65, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 17 19) (close _V0match__iter_k66) (bruijn pattern-stack 11 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k66, env)}),
      VGetArg(env, 11, 2)
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k65, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k64(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k64, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 16 19) (close _V0match__iter_k65) (bruijn expr-stack 10 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k65, env)}),
      VGetArg(env, 10, 1)
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k64, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k76(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k76, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.78 18 0) (##inline ##sys.cons (quote if) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.eq?) (##inline ##sys.cons (bruijn ##x.140 4 0) (##inline ##sys.cons (bruijn ##x.142 3 0) (quote ())))) (##inline ##sys.cons (bruijn ##x.136 0 0) (quote ())))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 0)),
      VInlineCons(
VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10sys_Deq_Q.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(env, 4, 0),
      VInlineCons(
env->up->up->up->vars[0],
      VNULL
    )

    )

    )
,
      VInlineCons(
env->vars[0],
      VNULL
    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0match__iter_k76, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k75(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k75, env) {
 if (env->num_vars == 1) {
  // ((bruijn match-iter 19 2) (close _V0match__iter_k76) (bruijn ##x.137 1 0) (bruijn ##x.138 0 0) (bruijn success-expr 17 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k76, env)}),
      env->up->vars[0],
      env->vars[0],
      VGetArg(env, 17, 3)
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k75, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k74(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k74, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 22 19) (close _V0match__iter_k75) (bruijn pattern-stack 16 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k75, env)}),
      VGetArg(env, 16, 2)
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k74, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k73(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k73, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 21 19) (close _V0match__iter_k74) (bruijn expr-stack 15 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k74, env)}),
      VGetArg(env, 15, 1)
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k73, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k72(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k72, env) {
 if (env->num_vars == 1) {
  // ((bruijn car 20 3) (close _V0match__iter_k73) (bruijn expr-stack 14 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 3)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k73, env)}),
      VGetArg(env, 14, 1)
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k72, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k89(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k89, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.78 26 0) (##inline ##sys.cons (quote if) (##inline ##sys.cons (##inline ##sys.cons (quote equal?) (##inline ##sys.cons (##inline ##sys.cons (quote quote) (##inline ##sys.cons (bruijn ##x.162 4 0) (quote ()))) (##inline ##sys.cons (bruijn ##x.160 3 0) (quote ())))) (##inline ##sys.cons (bruijn ##x.154 0 0) (quote ())))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 0)),
      VInlineCons(
VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0equal_Q.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0quote.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(env, 4, 0),
      VNULL
    )

    )
,
      VInlineCons(
env->up->up->up->vars[0],
      VNULL
    )

    )

    )
,
      VInlineCons(
env->vars[0],
      VNULL
    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0match__iter_k89, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k88(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k88, env) {
 if (env->num_vars == 1) {
  // ((bruijn match-iter 27 2) (close _V0match__iter_k89) (bruijn ##x.155 1 0) (bruijn ##x.156 0 0) (bruijn success-expr 25 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 27, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k89, env)}),
      env->up->vars[0],
      env->vars[0],
      VGetArg(env, 25, 3)
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k88, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k87(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k87, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 30 19) (close _V0match__iter_k88) (bruijn pattern-stack 24 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k88, env)}),
      VGetArg(env, 24, 2)
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k87, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k86(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k86, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 29 19) (close _V0match__iter_k87) (bruijn expr-stack 23 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k87, env)}),
      VGetArg(env, 23, 1)
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k86, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k85(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k85, env) {
 if (env->num_vars == 1) {
  // ((bruijn car 28 3) (close _V0match__iter_k86) (bruijn expr-stack 22 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 28, 3)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k86, env)}),
      VGetArg(env, 22, 1)
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k85, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k84(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k84, env) {
 if (env->num_vars == 1) {
  // ((bruijn cadar 27 5) (close _V0match__iter_k85) (bruijn pattern-stack 21 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 27, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k85, env)}),
      VGetArg(env, 21, 2)
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k84, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k94(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k94, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.78 25 0) (##inline ##sys.cons (quote if) (##inline ##sys.cons (##inline ##sys.cons (quote equal?) (##inline ##sys.cons (##inline ##sys.cons (quote quote) (##inline ##sys.cons (bruijn ##x.162 4 0) (quote ()))) (##inline ##sys.cons (bruijn ##x.160 3 0) (quote ())))) (##inline ##sys.cons (bruijn ##x.154 0 0) (quote ())))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 0)),
      VInlineCons(
VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0equal_Q.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0quote.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(env, 4, 0),
      VNULL
    )

    )
,
      VInlineCons(
env->up->up->up->vars[0],
      VNULL
    )

    )

    )
,
      VInlineCons(
env->vars[0],
      VNULL
    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0match__iter_k94, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k93(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k93, env) {
 if (env->num_vars == 1) {
  // ((bruijn match-iter 26 2) (close _V0match__iter_k94) (bruijn ##x.155 1 0) (bruijn ##x.156 0 0) (bruijn success-expr 24 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k94, env)}),
      env->up->vars[0],
      env->vars[0],
      VGetArg(env, 24, 3)
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k93, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k92(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k92, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 29 19) (close _V0match__iter_k93) (bruijn pattern-stack 23 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k93, env)}),
      VGetArg(env, 23, 2)
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k92, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k91(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k91, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 28 19) (close _V0match__iter_k92) (bruijn expr-stack 22 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 28, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k92, env)}),
      VGetArg(env, 22, 1)
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k91, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k90(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k90, env) {
 if (env->num_vars == 1) {
  // ((bruijn car 27 3) (close _V0match__iter_k91) (bruijn expr-stack 21 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 27, 3)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k91, env)}),
      VGetArg(env, 21, 1)
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k90, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k103(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k103, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.78 29 0) (##inline ##sys.cons (quote if) (##inline ##sys.cons (##inline ##sys.cons (quote equal?) (##inline ##sys.cons (##inline ##sys.cons (quote quote) (##inline ##sys.cons (bruijn ##x.162 4 0) (quote ()))) (##inline ##sys.cons (bruijn ##x.160 3 0) (quote ())))) (##inline ##sys.cons (bruijn ##x.154 0 0) (quote ())))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 0)),
      VInlineCons(
VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0equal_Q.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0quote.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(env, 4, 0),
      VNULL
    )

    )
,
      VInlineCons(
env->up->up->up->vars[0],
      VNULL
    )

    )

    )
,
      VInlineCons(
env->vars[0],
      VNULL
    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0match__iter_k103, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k102(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k102, env) {
 if (env->num_vars == 1) {
  // ((bruijn match-iter 30 2) (close _V0match__iter_k103) (bruijn ##x.155 1 0) (bruijn ##x.156 0 0) (bruijn success-expr 28 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k103, env)}),
      env->up->vars[0],
      env->vars[0],
      VGetArg(env, 28, 3)
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k102, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k101(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k101, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 33 19) (close _V0match__iter_k102) (bruijn pattern-stack 27 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 33, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k102, env)}),
      VGetArg(env, 27, 2)
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k101, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k100(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k100, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 32 19) (close _V0match__iter_k101) (bruijn expr-stack 26 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 32, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k101, env)}),
      VGetArg(env, 26, 1)
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k100, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k99(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k99, env) {
 if (env->num_vars == 1) {
  // ((bruijn car 31 3) (close _V0match__iter_k100) (bruijn expr-stack 25 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 31, 3)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k100, env)}),
      VGetArg(env, 25, 1)
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k99, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k98(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k98, env) {
 if (env->num_vars == 1) {
  // ((bruijn cadar 30 5) (close _V0match__iter_k99) (bruijn pattern-stack 24 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k99, env)}),
      VGetArg(env, 24, 2)
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k98, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k108(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k108, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.78 28 0) (##inline ##sys.cons (quote if) (##inline ##sys.cons (##inline ##sys.cons (quote equal?) (##inline ##sys.cons (##inline ##sys.cons (quote quote) (##inline ##sys.cons (bruijn ##x.162 4 0) (quote ()))) (##inline ##sys.cons (bruijn ##x.160 3 0) (quote ())))) (##inline ##sys.cons (bruijn ##x.154 0 0) (quote ())))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 28, 0)),
      VInlineCons(
VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0equal_Q.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0quote.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(env, 4, 0),
      VNULL
    )

    )
,
      VInlineCons(
env->up->up->up->vars[0],
      VNULL
    )

    )

    )
,
      VInlineCons(
env->vars[0],
      VNULL
    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0match__iter_k108, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k107(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k107, env) {
 if (env->num_vars == 1) {
  // ((bruijn match-iter 29 2) (close _V0match__iter_k108) (bruijn ##x.155 1 0) (bruijn ##x.156 0 0) (bruijn success-expr 27 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k108, env)}),
      env->up->vars[0],
      env->vars[0],
      VGetArg(env, 27, 3)
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k107, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k106(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k106, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 32 19) (close _V0match__iter_k107) (bruijn pattern-stack 26 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 32, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k107, env)}),
      VGetArg(env, 26, 2)
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k106, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k105(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k105, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 31 19) (close _V0match__iter_k106) (bruijn expr-stack 25 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 31, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k106, env)}),
      VGetArg(env, 25, 1)
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k105, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k104(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k104, env) {
 if (env->num_vars == 1) {
  // ((bruijn car 30 3) (close _V0match__iter_k105) (bruijn expr-stack 24 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 3)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k105, env)}),
      VGetArg(env, 24, 1)
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k104, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k97(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k97, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.170 0 0) ((bruijn error 29 2) (close _V0match__iter_k98) (##string ##string.443)) ((bruijn cadar 29 5) (close _V0match__iter_k104) (bruijn pattern-stack 23 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k98, env)}),
      VEncodePointer(&_V10string_D443.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k104, env)}),
      VGetArg(env, 23, 2)
    );
}
 } else {
  VError("Not enough arguments to _V0match__iter_k97, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k96(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k96, env) {
 if (env->num_vars == 1) {
  // ((bruijn not 28 7) (close _V0match__iter_k97) (bruijn ##x.171 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 28, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k97, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k96, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k95(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k95, env) {
 if (env->num_vars == 1) {
  // ((bruijn null? 27 14) (close _V0match__iter_k96) (bruijn ##x.172 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 27, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k96, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k95, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k83(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k83, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.168 0 0) (if (bruijn ##x.168 0 0) ((bruijn error 26 2) (close _V0match__iter_k84) (##string ##string.443)) ((bruijn cadar 26 5) (close _V0match__iter_k90) (bruijn pattern-stack 20 2))) ((bruijn cddar 26 6) (close _V0match__iter_k95) (bruijn pattern-stack 20 2)))
if(VDecodeBool(
env->vars[0])) {
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k84, env)}),
      VEncodePointer(&_V10string_D443.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k90, env)}),
      VGetArg(env, 20, 2)
    );
}
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 6)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k95, env)}),
      VGetArg(env, 20, 2)
    );
}
 } else {
  VError("Not enough arguments to _V0match__iter_k83, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k82(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k82, env) {
 if (env->num_vars == 1) {
  // ((bruijn not 25 7) (close _V0match__iter_k83) (bruijn ##x.173 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k83, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k82, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k81(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k81, env) {
 if (env->num_vars == 1) {
  // ((bruijn pair? 24 4) (close _V0match__iter_k82) (bruijn ##x.174 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 4)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k82, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k81, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k119(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k119, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.180 4 0) (##inline ##sys.cons (quote let) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.cons (bruijn sym 4 1) (##inline ##sys.cons (bruijn ##x.190 3 0) (quote ()))) (quote ())) (##inline ##sys.cons (bruijn ##x.185 0 0) (quote ())))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 0)),
      VInlineCons(
VEncodePointer(&_V0let.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VInlineCons(
VGetArg(env, 4, 1),
      VInlineCons(
env->up->up->up->vars[0],
      VNULL
    )

    )
,
      VNULL
    )
,
      VInlineCons(
env->vars[0],
      VNULL
    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0match__iter_k119, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k118(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k118, env) {
 if (env->num_vars == 1) {
  // ((bruijn match-ellipses 30 1) (close _V0match__iter_k119) (bruijn ##x.186 0 0) (bruijn pattern-stack 28 2) (bruijn success-expr 28 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k119, env)}),
      env->vars[0],
      VGetArg(env, 28, 2),
      VGetArg(env, 28, 3)
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k118, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k117(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k117, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 33 15) (close _V0match__iter_k118) (bruijn sym 2 1) (bruijn ##x.187 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 33, 15)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k118, env)}),
      env->up->up->vars[1],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k117, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k116(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k116, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 32 19) (close _V0match__iter_k117) (bruijn expr-stack 26 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 32, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k117, env)}),
      VGetArg(env, 26, 1)
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k116, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_lambda11(VEnv * env) {
 V_GC_CHECK(_V0match__iter_lambda11, env) {
  // ((bruijn car 31 3) (close _V0match__iter_k116) (bruijn expr-stack 25 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 31, 3)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k116, env)}),
      VGetArg(env, 25, 1)
    );
 }
}
static void _V0match__iter_k115(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k115, env) {
 if (env->num_vars == 1) {
  // ((close _V0match__iter_lambda11) (bruijn ##k.78 24 0) (bruijn ##x.191 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0match__iter_lambda11, env)},
      VGetArg(env, 24, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k115, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k128(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k128, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.197 6 0) (##inline ##sys.cons (quote let) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.cons (bruijn sym 6 1) (##inline ##sys.cons (bruijn ##x.222 5 0) (quote ()))) (quote ())) (##inline ##sys.cons (##inline ##sys.cons (quote if) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.pair?) (##inline ##sys.cons (bruijn sym 6 1) (quote ()))) (##inline ##sys.cons (bruijn ##x.206 0 0) (quote ())))) (quote ())))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 0)),
      VInlineCons(
VEncodePointer(&_V0let.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VInlineCons(
VGetArg(env, 6, 1),
      VInlineCons(
VGetArg(env, 5, 0),
      VNULL
    )

    )
,
      VNULL
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10sys_Dpair_Q.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(env, 6, 1),
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
,
      VNULL
    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0match__iter_k128, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k127(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k127, env) {
 if (env->num_vars == 1) {
  // ((bruijn match-iter 34 2) (close _V0match__iter_k128) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.car) (##inline ##sys.cons (bruijn sym 5 1) (quote ()))) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.cdr) (##inline ##sys.cons (bruijn sym 5 1) (quote ()))) (bruijn ##x.216 3 0))) (##inline ##sys.cons (bruijn ##x.209 2 0) (##inline ##sys.cons (bruijn ##x.211 1 0) (bruijn ##x.212 0 0))) (bruijn success-expr 32 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 34, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k128, env)}),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10sys_Dcar.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(env, 5, 1),
      VNULL
    )

    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10sys_Dcdr.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(env, 5, 1),
      VNULL
    )

    )
,
      env->up->up->up->vars[0]
    )

    )
,
      VInlineCons(
env->up->up->vars[0],
      VInlineCons(
env->up->vars[0],
      env->vars[0]
    )

    )
,
      VGetArg(env, 32, 3)
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k127, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k126(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k126, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 37 19) (close _V0match__iter_k127) (bruijn pattern-stack 31 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 37, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k127, env)}),
      VGetArg(env, 31, 2)
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k126, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k125(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k125, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdar 36 16) (close _V0match__iter_k126) (bruijn pattern-stack 30 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 36, 16)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k126, env)}),
      VGetArg(env, 30, 2)
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k125, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k124(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k124, env) {
 if (env->num_vars == 1) {
  // ((bruijn caar 35 18) (close _V0match__iter_k125) (bruijn pattern-stack 29 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 35, 18)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k125, env)}),
      VGetArg(env, 29, 2)
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k124, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k123(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k123, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 34 19) (close _V0match__iter_k124) (bruijn expr-stack 28 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 34, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k124, env)}),
      VGetArg(env, 28, 1)
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k123, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_lambda12(VEnv * env) {
 V_GC_CHECK(_V0match__iter_lambda12, env) {
  // ((bruijn car 33 3) (close _V0match__iter_k123) (bruijn expr-stack 27 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 33, 3)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k123, env)}),
      VGetArg(env, 27, 1)
    );
 }
}
static void _V0match__iter_k122(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k122, env) {
 if (env->num_vars == 1) {
  // ((close _V0match__iter_lambda12) (bruijn ##k.78 26 0) (bruijn ##x.223 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0match__iter_lambda12, env)},
      VGetArg(env, 26, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k122, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k121(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k121, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.194 0 0) ((bruijn gensym 31 20) (close _V0match__iter_k122) (##string ##string.444)) ((bruijn error 31 2) (bruijn ##k.78 25 0) (##string ##string.442)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 31, 20)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k122, env)}),
      VEncodePointer(&_V10string_D444.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 31, 2)),
      VGetArg(env, 25, 0),
      VEncodePointer(&_V10string_D442.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0match__iter_k121, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k120(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k120, env) {
 if (env->num_vars == 1) {
  // ((bruijn pair? 30 4) (close _V0match__iter_k121) (bruijn ##x.226 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 4)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k121, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k120, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k114(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k114, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.232 0 0) ((bruijn gensym 29 20) (close _V0match__iter_k115) (##string ##string.444)) ((bruijn car 29 3) (close _V0match__iter_k120) (bruijn pattern-stack 23 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 20)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k115, env)}),
      VEncodePointer(&_V10string_D444.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 3)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k120, env)}),
      VGetArg(env, 23, 2)
    );
}
 } else {
  VError("Not enough arguments to _V0match__iter_k114, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k113(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k113, env) {
 if (env->num_vars == 1) {
  // ((bruijn eqv? 25 2) (close _V0match__iter_k114) (bruijn ##x.233 0 0) (quote ...))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k114, env)}),
      env->vars[0],
      VEncodePointer(&_V0_D_D_D.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k113, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k137(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k137, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.197 6 0) (##inline ##sys.cons (quote let) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.cons (bruijn sym 6 1) (##inline ##sys.cons (bruijn ##x.222 5 0) (quote ()))) (quote ())) (##inline ##sys.cons (##inline ##sys.cons (quote if) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.pair?) (##inline ##sys.cons (bruijn sym 6 1) (quote ()))) (##inline ##sys.cons (bruijn ##x.206 0 0) (quote ())))) (quote ())))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 0)),
      VInlineCons(
VEncodePointer(&_V0let.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VInlineCons(
VGetArg(env, 6, 1),
      VInlineCons(
VGetArg(env, 5, 0),
      VNULL
    )

    )
,
      VNULL
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10sys_Dpair_Q.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(env, 6, 1),
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
,
      VNULL
    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0match__iter_k137, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k136(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k136, env) {
 if (env->num_vars == 1) {
  // ((bruijn match-iter 32 2) (close _V0match__iter_k137) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.car) (##inline ##sys.cons (bruijn sym 5 1) (quote ()))) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.cdr) (##inline ##sys.cons (bruijn sym 5 1) (quote ()))) (bruijn ##x.216 3 0))) (##inline ##sys.cons (bruijn ##x.209 2 0) (##inline ##sys.cons (bruijn ##x.211 1 0) (bruijn ##x.212 0 0))) (bruijn success-expr 30 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 32, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k137, env)}),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10sys_Dcar.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(env, 5, 1),
      VNULL
    )

    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10sys_Dcdr.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(env, 5, 1),
      VNULL
    )

    )
,
      env->up->up->up->vars[0]
    )

    )
,
      VInlineCons(
env->up->up->vars[0],
      VInlineCons(
env->up->vars[0],
      env->vars[0]
    )

    )
,
      VGetArg(env, 30, 3)
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k136, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k135(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k135, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 35 19) (close _V0match__iter_k136) (bruijn pattern-stack 29 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 35, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k136, env)}),
      VGetArg(env, 29, 2)
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k135, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k134(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k134, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdar 34 16) (close _V0match__iter_k135) (bruijn pattern-stack 28 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 34, 16)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k135, env)}),
      VGetArg(env, 28, 2)
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k134, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k133(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k133, env) {
 if (env->num_vars == 1) {
  // ((bruijn caar 33 18) (close _V0match__iter_k134) (bruijn pattern-stack 27 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 33, 18)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k134, env)}),
      VGetArg(env, 27, 2)
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k133, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k132(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k132, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 32 19) (close _V0match__iter_k133) (bruijn expr-stack 26 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 32, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k133, env)}),
      VGetArg(env, 26, 1)
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k132, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_lambda13(VEnv * env) {
 V_GC_CHECK(_V0match__iter_lambda13, env) {
  // ((bruijn car 31 3) (close _V0match__iter_k132) (bruijn expr-stack 25 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 31, 3)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k132, env)}),
      VGetArg(env, 25, 1)
    );
 }
}
static void _V0match__iter_k131(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k131, env) {
 if (env->num_vars == 1) {
  // ((close _V0match__iter_lambda13) (bruijn ##k.78 24 0) (bruijn ##x.223 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0match__iter_lambda13, env)},
      VGetArg(env, 24, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k131, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k130(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k130, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.194 0 0) ((bruijn gensym 29 20) (close _V0match__iter_k131) (##string ##string.444)) ((bruijn error 29 2) (bruijn ##k.78 23 0) (##string ##string.442)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 20)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k131, env)}),
      VEncodePointer(&_V10string_D444.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 2)),
      VGetArg(env, 23, 0),
      VEncodePointer(&_V10string_D442.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0match__iter_k130, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k129(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k129, env) {
 if (env->num_vars == 1) {
  // ((bruijn pair? 28 4) (close _V0match__iter_k130) (bruijn ##x.226 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 28, 4)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k130, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k129, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k112(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k112, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.230 0 0) ((bruijn cadar 27 5) (close _V0match__iter_k113) (bruijn pattern-stack 21 2)) ((bruijn car 27 3) (close _V0match__iter_k129) (bruijn pattern-stack 21 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 27, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k113, env)}),
      VGetArg(env, 21, 2)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 27, 3)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k129, env)}),
      VGetArg(env, 21, 2)
    );
}
 } else {
  VError("Not enough arguments to _V0match__iter_k112, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k111(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k111, env) {
 if (env->num_vars == 1) {
  // ((bruijn pair? 26 4) (close _V0match__iter_k112) (bruijn ##x.234 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 4)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k112, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k111, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k146(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k146, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.197 6 0) (##inline ##sys.cons (quote let) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.cons (bruijn sym 6 1) (##inline ##sys.cons (bruijn ##x.222 5 0) (quote ()))) (quote ())) (##inline ##sys.cons (##inline ##sys.cons (quote if) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.pair?) (##inline ##sys.cons (bruijn sym 6 1) (quote ()))) (##inline ##sys.cons (bruijn ##x.206 0 0) (quote ())))) (quote ())))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 0)),
      VInlineCons(
VEncodePointer(&_V0let.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VInlineCons(
VGetArg(env, 6, 1),
      VInlineCons(
VGetArg(env, 5, 0),
      VNULL
    )

    )
,
      VNULL
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10sys_Dpair_Q.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(env, 6, 1),
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
,
      VNULL
    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0match__iter_k146, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k145(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k145, env) {
 if (env->num_vars == 1) {
  // ((bruijn match-iter 30 2) (close _V0match__iter_k146) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.car) (##inline ##sys.cons (bruijn sym 5 1) (quote ()))) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.cdr) (##inline ##sys.cons (bruijn sym 5 1) (quote ()))) (bruijn ##x.216 3 0))) (##inline ##sys.cons (bruijn ##x.209 2 0) (##inline ##sys.cons (bruijn ##x.211 1 0) (bruijn ##x.212 0 0))) (bruijn success-expr 28 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k146, env)}),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10sys_Dcar.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(env, 5, 1),
      VNULL
    )

    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10sys_Dcdr.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(env, 5, 1),
      VNULL
    )

    )
,
      env->up->up->up->vars[0]
    )

    )
,
      VInlineCons(
env->up->up->vars[0],
      VInlineCons(
env->up->vars[0],
      env->vars[0]
    )

    )
,
      VGetArg(env, 28, 3)
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k145, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k144(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k144, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 33 19) (close _V0match__iter_k145) (bruijn pattern-stack 27 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 33, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k145, env)}),
      VGetArg(env, 27, 2)
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k144, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k143(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k143, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdar 32 16) (close _V0match__iter_k144) (bruijn pattern-stack 26 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 32, 16)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k144, env)}),
      VGetArg(env, 26, 2)
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k143, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k142(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k142, env) {
 if (env->num_vars == 1) {
  // ((bruijn caar 31 18) (close _V0match__iter_k143) (bruijn pattern-stack 25 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 31, 18)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k143, env)}),
      VGetArg(env, 25, 2)
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k142, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k141(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k141, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 30 19) (close _V0match__iter_k142) (bruijn expr-stack 24 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k142, env)}),
      VGetArg(env, 24, 1)
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k141, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_lambda14(VEnv * env) {
 V_GC_CHECK(_V0match__iter_lambda14, env) {
  // ((bruijn car 29 3) (close _V0match__iter_k141) (bruijn expr-stack 23 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 3)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k141, env)}),
      VGetArg(env, 23, 1)
    );
 }
}
static void _V0match__iter_k140(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k140, env) {
 if (env->num_vars == 1) {
  // ((close _V0match__iter_lambda14) (bruijn ##k.78 22 0) (bruijn ##x.223 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0match__iter_lambda14, env)},
      VGetArg(env, 22, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k140, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k139(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k139, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.194 0 0) ((bruijn gensym 27 20) (close _V0match__iter_k140) (##string ##string.444)) ((bruijn error 27 2) (bruijn ##k.78 21 0) (##string ##string.442)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 27, 20)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k140, env)}),
      VEncodePointer(&_V10string_D444.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 27, 2)),
      VGetArg(env, 21, 0),
      VEncodePointer(&_V10string_D442.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0match__iter_k139, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k138(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k138, env) {
 if (env->num_vars == 1) {
  // ((bruijn pair? 26 4) (close _V0match__iter_k139) (bruijn ##x.226 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 4)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k139, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k138, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k110(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k110, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.227 0 0) ((bruijn cdar 25 16) (close _V0match__iter_k111) (bruijn pattern-stack 19 2)) ((bruijn car 25 3) (close _V0match__iter_k138) (bruijn pattern-stack 19 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 16)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k111, env)}),
      VGetArg(env, 19, 2)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 3)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k138, env)}),
      VGetArg(env, 19, 2)
    );
}
 } else {
  VError("Not enough arguments to _V0match__iter_k110, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k109(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k109, env) {
 if (env->num_vars == 1) {
  // ((bruijn pair? 24 4) (close _V0match__iter_k110) (bruijn ##x.235 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 4)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k110, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k109, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k80(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k80, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.238 0 0) ((bruijn cdar 23 16) (close _V0match__iter_k81) (bruijn pattern-stack 17 2)) ((bruijn car 23 3) (close _V0match__iter_k109) (bruijn pattern-stack 17 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 16)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k81, env)}),
      VGetArg(env, 17, 2)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 3)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k109, env)}),
      VGetArg(env, 17, 2)
    );
}
 } else {
  VError("Not enough arguments to _V0match__iter_k80, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k79(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k79, env) {
 if (env->num_vars == 1) {
  // ((bruijn eqv? 19 2) (close _V0match__iter_k80) (bruijn ##x.239 0 0) (quote quote))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k80, env)}),
      env->vars[0],
      VEncodePointer(&_V0quote.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k79, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k157(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k157, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.180 4 0) (##inline ##sys.cons (quote let) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.cons (bruijn sym 4 1) (##inline ##sys.cons (bruijn ##x.190 3 0) (quote ()))) (quote ())) (##inline ##sys.cons (bruijn ##x.185 0 0) (quote ())))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 0)),
      VInlineCons(
VEncodePointer(&_V0let.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VInlineCons(
VGetArg(env, 4, 1),
      VInlineCons(
env->up->up->up->vars[0],
      VNULL
    )

    )
,
      VNULL
    )
,
      VInlineCons(
env->vars[0],
      VNULL
    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0match__iter_k157, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k156(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k156, env) {
 if (env->num_vars == 1) {
  // ((bruijn match-ellipses 28 1) (close _V0match__iter_k157) (bruijn ##x.186 0 0) (bruijn pattern-stack 26 2) (bruijn success-expr 26 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 28, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k157, env)}),
      env->vars[0],
      VGetArg(env, 26, 2),
      VGetArg(env, 26, 3)
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k156, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k155(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k155, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 31 15) (close _V0match__iter_k156) (bruijn sym 2 1) (bruijn ##x.187 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 31, 15)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k156, env)}),
      env->up->up->vars[1],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k155, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k154(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k154, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 30 19) (close _V0match__iter_k155) (bruijn expr-stack 24 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k155, env)}),
      VGetArg(env, 24, 1)
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k154, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_lambda15(VEnv * env) {
 V_GC_CHECK(_V0match__iter_lambda15, env) {
  // ((bruijn car 29 3) (close _V0match__iter_k154) (bruijn expr-stack 23 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 3)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k154, env)}),
      VGetArg(env, 23, 1)
    );
 }
}
static void _V0match__iter_k153(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k153, env) {
 if (env->num_vars == 1) {
  // ((close _V0match__iter_lambda15) (bruijn ##k.78 22 0) (bruijn ##x.191 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0match__iter_lambda15, env)},
      VGetArg(env, 22, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k153, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k166(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k166, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.197 6 0) (##inline ##sys.cons (quote let) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.cons (bruijn sym 6 1) (##inline ##sys.cons (bruijn ##x.222 5 0) (quote ()))) (quote ())) (##inline ##sys.cons (##inline ##sys.cons (quote if) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.pair?) (##inline ##sys.cons (bruijn sym 6 1) (quote ()))) (##inline ##sys.cons (bruijn ##x.206 0 0) (quote ())))) (quote ())))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 0)),
      VInlineCons(
VEncodePointer(&_V0let.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VInlineCons(
VGetArg(env, 6, 1),
      VInlineCons(
VGetArg(env, 5, 0),
      VNULL
    )

    )
,
      VNULL
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10sys_Dpair_Q.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(env, 6, 1),
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
,
      VNULL
    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0match__iter_k166, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k165(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k165, env) {
 if (env->num_vars == 1) {
  // ((bruijn match-iter 32 2) (close _V0match__iter_k166) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.car) (##inline ##sys.cons (bruijn sym 5 1) (quote ()))) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.cdr) (##inline ##sys.cons (bruijn sym 5 1) (quote ()))) (bruijn ##x.216 3 0))) (##inline ##sys.cons (bruijn ##x.209 2 0) (##inline ##sys.cons (bruijn ##x.211 1 0) (bruijn ##x.212 0 0))) (bruijn success-expr 30 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 32, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k166, env)}),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10sys_Dcar.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(env, 5, 1),
      VNULL
    )

    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10sys_Dcdr.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(env, 5, 1),
      VNULL
    )

    )
,
      env->up->up->up->vars[0]
    )

    )
,
      VInlineCons(
env->up->up->vars[0],
      VInlineCons(
env->up->vars[0],
      env->vars[0]
    )

    )
,
      VGetArg(env, 30, 3)
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k165, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k164(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k164, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 35 19) (close _V0match__iter_k165) (bruijn pattern-stack 29 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 35, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k165, env)}),
      VGetArg(env, 29, 2)
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k164, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k163(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k163, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdar 34 16) (close _V0match__iter_k164) (bruijn pattern-stack 28 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 34, 16)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k164, env)}),
      VGetArg(env, 28, 2)
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k163, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k162(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k162, env) {
 if (env->num_vars == 1) {
  // ((bruijn caar 33 18) (close _V0match__iter_k163) (bruijn pattern-stack 27 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 33, 18)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k163, env)}),
      VGetArg(env, 27, 2)
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k162, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k161(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k161, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 32 19) (close _V0match__iter_k162) (bruijn expr-stack 26 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 32, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k162, env)}),
      VGetArg(env, 26, 1)
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k161, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_lambda16(VEnv * env) {
 V_GC_CHECK(_V0match__iter_lambda16, env) {
  // ((bruijn car 31 3) (close _V0match__iter_k161) (bruijn expr-stack 25 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 31, 3)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k161, env)}),
      VGetArg(env, 25, 1)
    );
 }
}
static void _V0match__iter_k160(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k160, env) {
 if (env->num_vars == 1) {
  // ((close _V0match__iter_lambda16) (bruijn ##k.78 24 0) (bruijn ##x.223 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0match__iter_lambda16, env)},
      VGetArg(env, 24, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k160, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k159(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k159, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.194 0 0) ((bruijn gensym 29 20) (close _V0match__iter_k160) (##string ##string.444)) ((bruijn error 29 2) (bruijn ##k.78 23 0) (##string ##string.442)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 20)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k160, env)}),
      VEncodePointer(&_V10string_D444.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 2)),
      VGetArg(env, 23, 0),
      VEncodePointer(&_V10string_D442.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0match__iter_k159, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k158(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k158, env) {
 if (env->num_vars == 1) {
  // ((bruijn pair? 28 4) (close _V0match__iter_k159) (bruijn ##x.226 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 28, 4)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k159, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k158, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k152(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k152, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.232 0 0) ((bruijn gensym 27 20) (close _V0match__iter_k153) (##string ##string.444)) ((bruijn car 27 3) (close _V0match__iter_k158) (bruijn pattern-stack 21 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 27, 20)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k153, env)}),
      VEncodePointer(&_V10string_D444.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 27, 3)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k158, env)}),
      VGetArg(env, 21, 2)
    );
}
 } else {
  VError("Not enough arguments to _V0match__iter_k152, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k151(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k151, env) {
 if (env->num_vars == 1) {
  // ((bruijn eqv? 23 2) (close _V0match__iter_k152) (bruijn ##x.233 0 0) (quote ...))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k152, env)}),
      env->vars[0],
      VEncodePointer(&_V0_D_D_D.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k151, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k175(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k175, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.197 6 0) (##inline ##sys.cons (quote let) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.cons (bruijn sym 6 1) (##inline ##sys.cons (bruijn ##x.222 5 0) (quote ()))) (quote ())) (##inline ##sys.cons (##inline ##sys.cons (quote if) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.pair?) (##inline ##sys.cons (bruijn sym 6 1) (quote ()))) (##inline ##sys.cons (bruijn ##x.206 0 0) (quote ())))) (quote ())))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 0)),
      VInlineCons(
VEncodePointer(&_V0let.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VInlineCons(
VGetArg(env, 6, 1),
      VInlineCons(
VGetArg(env, 5, 0),
      VNULL
    )

    )
,
      VNULL
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10sys_Dpair_Q.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(env, 6, 1),
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
,
      VNULL
    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0match__iter_k175, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k174(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k174, env) {
 if (env->num_vars == 1) {
  // ((bruijn match-iter 30 2) (close _V0match__iter_k175) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.car) (##inline ##sys.cons (bruijn sym 5 1) (quote ()))) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.cdr) (##inline ##sys.cons (bruijn sym 5 1) (quote ()))) (bruijn ##x.216 3 0))) (##inline ##sys.cons (bruijn ##x.209 2 0) (##inline ##sys.cons (bruijn ##x.211 1 0) (bruijn ##x.212 0 0))) (bruijn success-expr 28 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k175, env)}),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10sys_Dcar.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(env, 5, 1),
      VNULL
    )

    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10sys_Dcdr.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(env, 5, 1),
      VNULL
    )

    )
,
      env->up->up->up->vars[0]
    )

    )
,
      VInlineCons(
env->up->up->vars[0],
      VInlineCons(
env->up->vars[0],
      env->vars[0]
    )

    )
,
      VGetArg(env, 28, 3)
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k174, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k173(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k173, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 33 19) (close _V0match__iter_k174) (bruijn pattern-stack 27 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 33, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k174, env)}),
      VGetArg(env, 27, 2)
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k173, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k172(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k172, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdar 32 16) (close _V0match__iter_k173) (bruijn pattern-stack 26 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 32, 16)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k173, env)}),
      VGetArg(env, 26, 2)
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k172, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k171(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k171, env) {
 if (env->num_vars == 1) {
  // ((bruijn caar 31 18) (close _V0match__iter_k172) (bruijn pattern-stack 25 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 31, 18)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k172, env)}),
      VGetArg(env, 25, 2)
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k171, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k170(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k170, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 30 19) (close _V0match__iter_k171) (bruijn expr-stack 24 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k171, env)}),
      VGetArg(env, 24, 1)
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k170, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_lambda17(VEnv * env) {
 V_GC_CHECK(_V0match__iter_lambda17, env) {
  // ((bruijn car 29 3) (close _V0match__iter_k170) (bruijn expr-stack 23 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 3)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k170, env)}),
      VGetArg(env, 23, 1)
    );
 }
}
static void _V0match__iter_k169(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k169, env) {
 if (env->num_vars == 1) {
  // ((close _V0match__iter_lambda17) (bruijn ##k.78 22 0) (bruijn ##x.223 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0match__iter_lambda17, env)},
      VGetArg(env, 22, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k169, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k168(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k168, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.194 0 0) ((bruijn gensym 27 20) (close _V0match__iter_k169) (##string ##string.444)) ((bruijn error 27 2) (bruijn ##k.78 21 0) (##string ##string.442)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 27, 20)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k169, env)}),
      VEncodePointer(&_V10string_D444.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 27, 2)),
      VGetArg(env, 21, 0),
      VEncodePointer(&_V10string_D442.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0match__iter_k168, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k167(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k167, env) {
 if (env->num_vars == 1) {
  // ((bruijn pair? 26 4) (close _V0match__iter_k168) (bruijn ##x.226 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 4)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k168, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k167, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k150(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k150, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.230 0 0) ((bruijn cadar 25 5) (close _V0match__iter_k151) (bruijn pattern-stack 19 2)) ((bruijn car 25 3) (close _V0match__iter_k167) (bruijn pattern-stack 19 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k151, env)}),
      VGetArg(env, 19, 2)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 3)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k167, env)}),
      VGetArg(env, 19, 2)
    );
}
 } else {
  VError("Not enough arguments to _V0match__iter_k150, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k149(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k149, env) {
 if (env->num_vars == 1) {
  // ((bruijn pair? 24 4) (close _V0match__iter_k150) (bruijn ##x.234 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 4)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k150, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k149, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k184(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k184, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.197 6 0) (##inline ##sys.cons (quote let) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.cons (bruijn sym 6 1) (##inline ##sys.cons (bruijn ##x.222 5 0) (quote ()))) (quote ())) (##inline ##sys.cons (##inline ##sys.cons (quote if) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.pair?) (##inline ##sys.cons (bruijn sym 6 1) (quote ()))) (##inline ##sys.cons (bruijn ##x.206 0 0) (quote ())))) (quote ())))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 0)),
      VInlineCons(
VEncodePointer(&_V0let.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VInlineCons(
VGetArg(env, 6, 1),
      VInlineCons(
VGetArg(env, 5, 0),
      VNULL
    )

    )
,
      VNULL
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10sys_Dpair_Q.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(env, 6, 1),
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
,
      VNULL
    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0match__iter_k184, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k183(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k183, env) {
 if (env->num_vars == 1) {
  // ((bruijn match-iter 28 2) (close _V0match__iter_k184) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.car) (##inline ##sys.cons (bruijn sym 5 1) (quote ()))) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.cdr) (##inline ##sys.cons (bruijn sym 5 1) (quote ()))) (bruijn ##x.216 3 0))) (##inline ##sys.cons (bruijn ##x.209 2 0) (##inline ##sys.cons (bruijn ##x.211 1 0) (bruijn ##x.212 0 0))) (bruijn success-expr 26 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 28, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k184, env)}),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10sys_Dcar.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(env, 5, 1),
      VNULL
    )

    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10sys_Dcdr.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(env, 5, 1),
      VNULL
    )

    )
,
      env->up->up->up->vars[0]
    )

    )
,
      VInlineCons(
env->up->up->vars[0],
      VInlineCons(
env->up->vars[0],
      env->vars[0]
    )

    )
,
      VGetArg(env, 26, 3)
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k183, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k182(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k182, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 31 19) (close _V0match__iter_k183) (bruijn pattern-stack 25 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 31, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k183, env)}),
      VGetArg(env, 25, 2)
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k182, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k181(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k181, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdar 30 16) (close _V0match__iter_k182) (bruijn pattern-stack 24 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 16)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k182, env)}),
      VGetArg(env, 24, 2)
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k181, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k180(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k180, env) {
 if (env->num_vars == 1) {
  // ((bruijn caar 29 18) (close _V0match__iter_k181) (bruijn pattern-stack 23 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 18)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k181, env)}),
      VGetArg(env, 23, 2)
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k180, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k179(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k179, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 28 19) (close _V0match__iter_k180) (bruijn expr-stack 22 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 28, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k180, env)}),
      VGetArg(env, 22, 1)
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k179, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_lambda18(VEnv * env) {
 V_GC_CHECK(_V0match__iter_lambda18, env) {
  // ((bruijn car 27 3) (close _V0match__iter_k179) (bruijn expr-stack 21 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 27, 3)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k179, env)}),
      VGetArg(env, 21, 1)
    );
 }
}
static void _V0match__iter_k178(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k178, env) {
 if (env->num_vars == 1) {
  // ((close _V0match__iter_lambda18) (bruijn ##k.78 20 0) (bruijn ##x.223 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0match__iter_lambda18, env)},
      VGetArg(env, 20, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k178, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k177(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k177, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.194 0 0) ((bruijn gensym 25 20) (close _V0match__iter_k178) (##string ##string.444)) ((bruijn error 25 2) (bruijn ##k.78 19 0) (##string ##string.442)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 20)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k178, env)}),
      VEncodePointer(&_V10string_D444.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 2)),
      VGetArg(env, 19, 0),
      VEncodePointer(&_V10string_D442.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0match__iter_k177, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k176(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k176, env) {
 if (env->num_vars == 1) {
  // ((bruijn pair? 24 4) (close _V0match__iter_k177) (bruijn ##x.226 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 4)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k177, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k176, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k148(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k148, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.227 0 0) ((bruijn cdar 23 16) (close _V0match__iter_k149) (bruijn pattern-stack 17 2)) ((bruijn car 23 3) (close _V0match__iter_k176) (bruijn pattern-stack 17 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 16)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k149, env)}),
      VGetArg(env, 17, 2)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 3)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k176, env)}),
      VGetArg(env, 17, 2)
    );
}
 } else {
  VError("Not enough arguments to _V0match__iter_k148, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k147(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k147, env) {
 if (env->num_vars == 1) {
  // ((bruijn pair? 22 4) (close _V0match__iter_k148) (bruijn ##x.235 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 4)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k148, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k147, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k78(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k78, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.236 0 0) ((bruijn caar 21 18) (close _V0match__iter_k79) (bruijn pattern-stack 15 2)) ((bruijn car 21 3) (close _V0match__iter_k147) (bruijn pattern-stack 15 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 18)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k79, env)}),
      VGetArg(env, 15, 2)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 3)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k147, env)}),
      VGetArg(env, 15, 2)
    );
}
 } else {
  VError("Not enough arguments to _V0match__iter_k78, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k77(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k77, env) {
 if (env->num_vars == 1) {
  // ((bruijn pair? 20 4) (close _V0match__iter_k78) (bruijn ##x.240 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 4)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k78, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k77, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k71(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k71, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.130 0 0) ((bruijn car 19 3) (close _V0match__iter_k72) (bruijn pattern-stack 13 2)) ((bruijn car 19 3) (close _V0match__iter_k77) (bruijn pattern-stack 13 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 3)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k72, env)}),
      VGetArg(env, 13, 2)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 3)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k77, env)}),
      VGetArg(env, 13, 2)
    );
}
 } else {
  VError("Not enough arguments to _V0match__iter_k71, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k70(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k70, env) {
 if (env->num_vars == 1) {
  // ((bruijn atom? 18 8) (close _V0match__iter_k71) (bruijn ##x.241 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 8)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k71, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k70, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k69(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k69, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.125 0 0) ((bruijn error 17 2) (bruijn ##k.78 11 0) (##string ##string.442)) ((bruijn car 17 3) (close _V0match__iter_k70) (bruijn pattern-stack 11 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 2)),
      VGetArg(env, 11, 0),
      VEncodePointer(&_V10string_D442.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 3)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k70, env)}),
      VGetArg(env, 11, 2)
    );
}
 } else {
  VError("Not enough arguments to _V0match__iter_k69, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k68(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k68, env) {
 if (env->num_vars == 1) {
  // ((bruijn string? 16 9) (close _V0match__iter_k69) (bruijn ##x.242 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k69, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k68, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k63(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k63, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.112 0 0) ((bruijn car 15 3) (close _V0match__iter_k64) (bruijn expr-stack 9 1)) ((bruijn car 15 3) (close _V0match__iter_k68) (bruijn pattern-stack 9 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 3)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k64, env)}),
      VGetArg(env, 9, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 3)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k68, env)}),
      VGetArg(env, 9, 2)
    );
}
 } else {
  VError("Not enough arguments to _V0match__iter_k63, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k62(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k62, env) {
 if (env->num_vars == 1) {
  // ((bruijn null? 14 14) (close _V0match__iter_k63) (bruijn ##x.243 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k63, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k62, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k61(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k61, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.107 0 0) ((bruijn error 13 2) (bruijn ##k.78 7 0) (##string ##string.442)) ((bruijn car 13 3) (close _V0match__iter_k62) (bruijn pattern-stack 7 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 2)),
      VGetArg(env, 7, 0),
      VEncodePointer(&_V10string_D442.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 3)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k62, env)}),
      VGetArg(env, 7, 2)
    );
}
 } else {
  VError("Not enough arguments to _V0match__iter_k61, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k60(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k60, env) {
 if (env->num_vars == 1) {
  // ((bruijn vector? 12 10) (close _V0match__iter_k61) (bruijn ##x.244 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 12, 10)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k61, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k60, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k54(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k54, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.92 0 0) ((bruijn car 11 3) (close _V0match__iter_k55) (bruijn pattern-stack 5 2)) ((bruijn car 11 3) (close _V0match__iter_k60) (bruijn pattern-stack 5 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 3)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k55, env)}),
      VGetArg(env, 5, 2)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 3)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k60, env)}),
      VGetArg(env, 5, 2)
    );
}
 } else {
  VError("Not enough arguments to _V0match__iter_k54, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k53(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k53, env) {
 if (env->num_vars == 1) {
  // ((bruijn symbol? 10 11) (close _V0match__iter_k54) (bruijn ##x.245 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 10, 11)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k54, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k53, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k50(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k50, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.85 0 0) ((bruijn cdr 9 19) (close _V0match__iter_k51) (bruijn expr-stack 3 1)) ((bruijn car 9 3) (close _V0match__iter_k53) (bruijn pattern-stack 3 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k51, env)}),
      env->up->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 3)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k53, env)}),
      env->up->up->up->vars[2]
    );
}
 } else {
  VError("Not enough arguments to _V0match__iter_k50, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k49(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k49, env) {
 if (env->num_vars == 1) {
  // ((bruijn eqv? 5 2) (close _V0match__iter_k50) (bruijn ##x.246 0 0) (quote _))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 5, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k50, env)}),
      env->vars[0],
      VEncodePointer(&_V0_U.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0match__iter_k49, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_k48(VEnv * env) {
 V_GC_CHECK(_V0match__iter_k48, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.80 0 0) ((bruijn ##k.78 1 0) (bruijn success-expr 1 3)) ((bruijn car 7 3) (close _V0match__iter_k49) (bruijn pattern-stack 1 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      env->up->vars[3]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 3)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k49, env)}),
      env->up->vars[2]
    );
}
 } else {
  VError("Not enough arguments to _V0match__iter_k48, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__iter_lambda10(VEnv * env) {
 V_GC_CHECK(_V0match__iter_lambda10, env) {
 if (env->num_vars == 4) {
  // ((bruijn null? 6 14) (close _V0match__iter_k48) (bruijn pattern-stack 0 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_k48, env)}),
      env->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0match__iter_lambda10, got ~D~N"
  "-- expected 4~N"
  , env->num_vars);
 }
 }
}
static void _V0transform__match_k29(VEnv * env) {
 V_GC_CHECK(_V0transform__match_k29, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0transform__match_k30) (bruijn match-iter 1 2) (close _V0match__iter_lambda10))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0transform__match_k30, env)}),
      1, 2,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__iter_lambda10, env)})
    );
 } else {
  VError("Not enough arguments to _V0transform__match_k29, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__ellipses_k205(VEnv * env) {
 V_GC_CHECK(_V0match__ellipses_k205, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.263 12 0) (##inline ##sys.cons (quote call-with-values) (##inline ##sys.cons (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (quote ()) (##inline ##sys.cons (##inline ##sys.cons (quote call/cc) (##inline ##sys.cons (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (##inline ##sys.cons (bruijn k 16 1) (quote ())) (##inline ##sys.cons (##inline ##sys.cons (quote let) (##inline ##sys.cons (quote loop) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.cons (bruijn expr 12 1) (##inline ##sys.cons (bruijn ##x.344 11 0) (quote ()))) (bruijn ##x.337 10 0)) (##inline ##sys.cons (##inline ##sys.cons (quote if) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.not) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.pair?) (##inline ##sys.cons (bruijn expr 12 1) (quote ()))) (quote ()))) (##inline ##sys.cons (##inline ##sys.cons (bruijn k 16 1) (##inline ##sys.cons (bruijn expr 12 1) (bruijn ##x.329 9 0))) (quote ())))) (##inline ##sys.cons (##inline ##sys.cons (quote call-with-values) (##inline ##sys.cons (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (quote ()) (##inline ##sys.cons (##inline ##sys.cons (quote call/cc) (##inline ##sys.cons (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (##inline ##sys.cons (bruijn k2 14 1) (quote ())) (##inline ##sys.cons (bruijn ##x.303 5 0) (##inline ##sys.cons (##inline ##sys.cons (bruijn k 16 1) (##inline ##sys.cons (bruijn expr 12 1) (bruijn ##x.307 4 0))) (quote ()))))) (quote ()))) (quote ())))) (##inline ##sys.cons (quote loop) (quote ())))) (quote ())))))) (quote ())))) (quote ()))) (quote ())))) (##inline ##sys.cons (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (##inline ##sys.cons (quote tail-expr) (bruijn variables 20 1)) (##inline ##sys.cons (bruijn ##x.272 0 0) (quote ())))) (quote ())))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 12, 0)),
      VInlineCons(
VEncodePointer(&_V0call__with__values.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCons(
VNULL,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0call_Wcc.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VGetArg(env, 16, 1),
      VNULL
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0let.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V0loop.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VInlineCons(
VGetArg(env, 12, 1),
      VInlineCons(
VGetArg(env, 11, 0),
      VNULL
    )

    )
,
      VGetArg(env, 10, 0)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10sys_Dnot.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10sys_Dpair_Q.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(env, 12, 1),
      VNULL
    )

    )
,
      VNULL
    )

    )
,
      VInlineCons(
VInlineCons(
VGetArg(env, 16, 1),
      VInlineCons(
VGetArg(env, 12, 1),
      VGetArg(env, 9, 0)
    )

    )
,
      VNULL
    )

    )

    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0call__with__values.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCons(
VNULL,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0call_Wcc.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VGetArg(env, 14, 1),
      VNULL
    )
,
      VInlineCons(
VGetArg(env, 5, 0),
      VInlineCons(
VInlineCons(
VGetArg(env, 16, 1),
      VInlineCons(
VGetArg(env, 12, 1),
      VGetArg(env, 4, 0)
    )

    )
,
      VNULL
    )

    )

    )

    )
,
      VNULL
    )

    )
,
      VNULL
    )

    )

    )
,
      VInlineCons(
VEncodePointer(&_V0loop.sym, VPOINTER_OTHER),
      VNULL
    )

    )

    )
,
      VNULL
    )

    )

    )

    )

    )
,
      VNULL
    )

    )

    )
,
      VNULL
    )

    )
,
      VNULL
    )

    )

    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0tail__expr.sym, VPOINTER_OTHER),
      VGetArg(env, 20, 1)
    )
,
      VInlineCons(
env->vars[0],
      VNULL
    )

    )

    )
,
      VNULL
    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0match__ellipses_k205, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__ellipses_k204(VEnv * env) {
 V_GC_CHECK(_V0match__ellipses_k204, env) {
 if (env->num_vars == 1) {
  // ((bruijn match-iter 29 2) (close _V0match__ellipses_k205) (bruijn ##x.273 1 0) (bruijn ##x.274 0 0) (bruijn success-expr 28 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__ellipses_k205, env)}),
      env->up->vars[0],
      env->vars[0],
      VGetArg(env, 28, 3)
    );
 } else {
  VError("Not enough arguments to _V0match__ellipses_k204, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__ellipses_k203(VEnv * env) {
 V_GC_CHECK(_V0match__ellipses_k203, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 32 15) (close _V0match__ellipses_k204) (bruijn tail-pattern 23 1) (bruijn pattern-stack 21 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 32, 15)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__ellipses_k204, env)}),
      VGetArg(env, 23, 1),
      VGetArg(env, 21, 1)
    );
 } else {
  VError("Not enough arguments to _V0match__ellipses_k203, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__ellipses_k202(VEnv * env) {
 V_GC_CHECK(_V0match__ellipses_k202, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 31 15) (close _V0match__ellipses_k203) (quote tail-expr) (bruijn ##x.275 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 31, 15)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__ellipses_k203, env)}),
      VEncodePointer(&_V0tail__expr.sym, VPOINTER_OTHER),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0match__ellipses_k202, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__ellipses_k201(VEnv * env) {
 V_GC_CHECK(_V0match__ellipses_k201, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 30 19) (close _V0match__ellipses_k202) (bruijn expr-stack 25 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__ellipses_k202, env)}),
      VGetArg(env, 25, 1)
    );
 } else {
  VError("Not enough arguments to _V0match__ellipses_k201, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__ellipses_lambda28(VEnv * env) {
 V_GC_CHECK(_V0match__ellipses_lambda28, env) {
 if (env->num_vars == 2) {
  // ((bruijn ##k.308 0 0) (##inline ##sys.cons (quote reverse) (##inline ##sys.cons (bruijn sym 0 1) (quote ()))))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VInlineCons(
VEncodePointer(&_V0reverse.sym, VPOINTER_OTHER),
      VInlineCons(
env->vars[1],
      VNULL
    )

    )

    );
 } else {
  VError("Not enough arguments to _V0match__ellipses_lambda28, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0match__ellipses_k200(VEnv * env) {
 V_GC_CHECK(_V0match__ellipses_k200, env) {
 if (env->num_vars == 1) {
  // ((bruijn map 29 1) (close _V0match__ellipses_k201) (close _V0match__ellipses_lambda28) (bruijn syms 13 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__ellipses_k201, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__ellipses_lambda28, env)}),
      VGetArg(env, 13, 1)
    );
 } else {
  VError("Not enough arguments to _V0match__ellipses_k200, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__ellipses_k199(VEnv * env) {
 V_GC_CHECK(_V0match__ellipses_k199, env) {
 if (env->num_vars == 1) {
  // ((bruijn match-iter 24 2) (close _V0match__ellipses_k200) (bruijn ##x.311 2 0) (bruijn ##x.312 1 0) (##inline ##sys.cons (bruijn k2 8 1) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.cdr) (##inline ##sys.cons (bruijn expr 6 1) (quote ()))) (bruijn ##x.316 0 0))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__ellipses_k200, env)}),
      env->up->up->vars[0],
      env->up->vars[0],
      VInlineCons(
VGetArg(env, 8, 1),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10sys_Dcdr.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(env, 6, 1),
      VNULL
    )

    )
,
      env->vars[0]
    )

    )

    );
 } else {
  VError("Not enough arguments to _V0match__ellipses_k199, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__ellipses_lambda29(VEnv * env) {
 V_GC_CHECK(_V0match__ellipses_lambda29, env) {
 if (env->num_vars == 3) {
  // ((bruijn ##k.317 0 0) (##inline ##sys.cons (quote ##sys.cons) (##inline ##sys.cons (bruijn var 0 1) (##inline ##sys.cons (bruijn sym 0 2) (quote ())))))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VInlineCons(
VEncodePointer(&_V10sys_Dcons.sym, VPOINTER_OTHER),
      VInlineCons(
env->vars[1],
      VInlineCons(
env->vars[2],
      VNULL
    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0match__ellipses_lambda29, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0match__ellipses_k198(VEnv * env) {
 V_GC_CHECK(_V0match__ellipses_k198, env) {
 if (env->num_vars == 1) {
  // ((bruijn map 27 1) (close _V0match__ellipses_k199) (close _V0match__ellipses_lambda29) (bruijn variables 13 1) (bruijn syms 11 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 27, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__ellipses_k199, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__ellipses_lambda29, env)}),
      VGetArg(env, 13, 1),
      VGetArg(env, 11, 1)
    );
 } else {
  VError("Not enough arguments to _V0match__ellipses_k198, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__ellipses_k197(VEnv * env) {
 V_GC_CHECK(_V0match__ellipses_k197, env) {
 if (env->num_vars == 1) {
  // ((bruijn list 26 17) (close _V0match__ellipses_k198) (bruijn pattern 19 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 17)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__ellipses_k198, env)}),
      VGetArg(env, 19, 1)
    );
 } else {
  VError("Not enough arguments to _V0match__ellipses_k197, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__ellipses_k196(VEnv * env) {
 V_GC_CHECK(_V0match__ellipses_k196, env) {
 if (env->num_vars == 1) {
  // ((bruijn list 25 17) (close _V0match__ellipses_k197) (##inline ##sys.cons (quote ##sys.car) (##inline ##sys.cons (bruijn expr 3 1) (quote ()))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 17)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__ellipses_k197, env)}),
      VInlineCons(
VEncodePointer(&_V10sys_Dcar.sym, VPOINTER_OTHER),
      VInlineCons(
env->up->up->up->vars[1],
      VNULL
    )

    )

    );
 } else {
  VError("Not enough arguments to _V0match__ellipses_k196, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__ellipses_lambda30(VEnv * env) {
 V_GC_CHECK(_V0match__ellipses_lambda30, env) {
 if (env->num_vars == 2) {
  // ((bruijn ##k.330 0 0) (##inline ##sys.cons (quote reverse) (##inline ##sys.cons (bruijn sym 0 1) (quote ()))))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VInlineCons(
VEncodePointer(&_V0reverse.sym, VPOINTER_OTHER),
      VInlineCons(
env->vars[1],
      VNULL
    )

    )

    );
 } else {
  VError("Not enough arguments to _V0match__ellipses_lambda30, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0match__ellipses_k195(VEnv * env) {
 V_GC_CHECK(_V0match__ellipses_k195, env) {
 if (env->num_vars == 1) {
  // ((bruijn map 24 1) (close _V0match__ellipses_k196) (close _V0match__ellipses_lambda30) (bruijn syms 8 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__ellipses_k196, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__ellipses_lambda30, env)}),
      VGetArg(env, 8, 1)
    );
 } else {
  VError("Not enough arguments to _V0match__ellipses_k195, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__ellipses_lambda31(VEnv * env) {
 V_GC_CHECK(_V0match__ellipses_lambda31, env) {
 if (env->num_vars == 2) {
  // ((bruijn ##k.338 0 0) (##inline ##sys.cons (bruijn sym 0 1) (##inline ##sys.cons (##inline ##sys.cons (quote quote) (##inline ##sys.cons (quote ()) (quote ()))) (quote ()))))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VInlineCons(
env->vars[1],
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0quote.sym, VPOINTER_OTHER),
      VInlineCons(
VNULL,
      VNULL
    )

    )
,
      VNULL
    )

    )

    );
 } else {
  VError("Not enough arguments to _V0match__ellipses_lambda31, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0match__ellipses_k194(VEnv * env) {
 V_GC_CHECK(_V0match__ellipses_k194, env) {
 if (env->num_vars == 1) {
  // ((bruijn map 23 1) (close _V0match__ellipses_k195) (close _V0match__ellipses_lambda31) (bruijn syms 7 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__ellipses_k195, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__ellipses_lambda31, env)}),
      VGetArg(env, 7, 1)
    );
 } else {
  VError("Not enough arguments to _V0match__ellipses_k194, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__ellipses_lambda27(VEnv * env) {
 V_GC_CHECK(_V0match__ellipses_lambda27, env) {
  // ((bruijn car 22 3) (close _V0match__ellipses_k194) (bruijn expr-stack 17 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 3)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__ellipses_k194, env)}),
      VGetArg(env, 17, 1)
    );
 }
}
static void _V0match__ellipses_k193(VEnv * env) {
 V_GC_CHECK(_V0match__ellipses_k193, env) {
 if (env->num_vars == 1) {
  // ((close _V0match__ellipses_lambda27) (bruijn ##k.261 1 0) (bruijn ##x.345 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0match__ellipses_lambda27, env)},
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0match__ellipses_k193, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__ellipses_lambda26(VEnv * env) {
 V_GC_CHECK(_V0match__ellipses_lambda26, env) {
  // ((bruijn gensym 20 20) (close _V0match__ellipses_k193) (##string ##string.444))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 20)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__ellipses_k193, env)}),
      VEncodePointer(&_V10string_D444.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0match__ellipses_k192(VEnv * env) {
 V_GC_CHECK(_V0match__ellipses_k192, env) {
 if (env->num_vars == 1) {
  // ((close _V0match__ellipses_lambda26) (bruijn ##k.259 1 0) (bruijn ##x.346 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0match__ellipses_lambda26, env)},
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0match__ellipses_k192, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__ellipses_lambda25(VEnv * env) {
 V_GC_CHECK(_V0match__ellipses_lambda25, env) {
  // ((bruijn gensym 18 20) (close _V0match__ellipses_k192) (##string ##string.441))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 20)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__ellipses_k192, env)}),
      VEncodePointer(&_V10string_D441.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0match__ellipses_k191(VEnv * env) {
 V_GC_CHECK(_V0match__ellipses_k191, env) {
 if (env->num_vars == 1) {
  // ((close _V0match__ellipses_lambda25) (bruijn ##k.257 1 0) (bruijn ##x.347 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0match__ellipses_lambda25, env)},
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0match__ellipses_k191, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__ellipses_lambda24(VEnv * env) {
 V_GC_CHECK(_V0match__ellipses_lambda24, env) {
  // ((bruijn gensym 16 20) (close _V0match__ellipses_k191) (##string ##string.441))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 20)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__ellipses_k191, env)}),
      VEncodePointer(&_V10string_D441.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0match__ellipses_k190(VEnv * env) {
 V_GC_CHECK(_V0match__ellipses_k190, env) {
 if (env->num_vars == 1) {
  // ((close _V0match__ellipses_lambda24) (bruijn ##k.255 1 0) (bruijn ##x.348 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0match__ellipses_lambda24, env)},
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0match__ellipses_k190, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__ellipses_lambda23(VEnv * env) {
 V_GC_CHECK(_V0match__ellipses_lambda23, env) {
  // ((bruijn map 14 1) (close _V0match__ellipses_k190) (bruijn gensym 14 20) (bruijn variables 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__ellipses_k190, env)}),
      VGetArg(env, 14, 20),
      env->vars[1]
    );
 }
}
static void _V0match__ellipses_k189(VEnv * env) {
 V_GC_CHECK(_V0match__ellipses_k189, env) {
 if (env->num_vars == 1) {
  // ((close _V0match__ellipses_lambda23) (bruijn ##k.253 2 0) (bruijn ##x.349 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0match__ellipses_lambda23, env)},
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0match__ellipses_k189, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__ellipses_k188(VEnv * env) {
 V_GC_CHECK(_V0match__ellipses_k188, env) {
 if (env->num_vars == 1) {
  // ((bruijn gather-variables 11 1) (close _V0match__ellipses_k189) (bruijn ##x.350 0 0) (bruijn eqv? 9 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__ellipses_k189, env)}),
      env->vars[0],
      VGetArg(env, 9, 2)
    );
 } else {
  VError("Not enough arguments to _V0match__ellipses_k188, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__ellipses_lambda22(VEnv * env) {
 V_GC_CHECK(_V0match__ellipses_lambda22, env) {
  // ((bruijn list 11 17) (close _V0match__ellipses_k188) (bruijn pattern 4 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 17)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__ellipses_k188, env)}),
      VGetArg(env, 4, 1)
    );
 }
}
static void _V0match__ellipses_k187(VEnv * env) {
 V_GC_CHECK(_V0match__ellipses_k187, env) {
 if (env->num_vars == 1) {
  // ((close _V0match__ellipses_lambda22) (bruijn ##k.251 1 0) (bruijn ##x.351 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0match__ellipses_lambda22, env)},
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0match__ellipses_k187, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__ellipses_lambda21(VEnv * env) {
 V_GC_CHECK(_V0match__ellipses_lambda21, env) {
  // ((bruijn cdr 9 19) (close _V0match__ellipses_k187) (bruijn pattern-stack 4 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__ellipses_k187, env)}),
      VGetArg(env, 4, 2)
    );
 }
}
static void _V0match__ellipses_k186(VEnv * env) {
 V_GC_CHECK(_V0match__ellipses_k186, env) {
 if (env->num_vars == 1) {
  // ((close _V0match__ellipses_lambda21) (bruijn ##k.249 1 0) (bruijn ##x.352 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0match__ellipses_lambda21, env)},
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0match__ellipses_k186, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__ellipses_lambda20(VEnv * env) {
 V_GC_CHECK(_V0match__ellipses_lambda20, env) {
  // ((bruijn cddar 7 6) (close _V0match__ellipses_k186) (bruijn pattern-stack 2 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 6)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__ellipses_k186, env)}),
      env->up->up->vars[2]
    );
 }
}
static void _V0match__ellipses_k185(VEnv * env) {
 V_GC_CHECK(_V0match__ellipses_k185, env) {
 if (env->num_vars == 1) {
  // ((close _V0match__ellipses_lambda20) (bruijn ##k.247 1 0) (bruijn ##x.353 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0match__ellipses_lambda20, env)},
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0match__ellipses_k185, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0match__ellipses_lambda19(VEnv * env) {
 V_GC_CHECK(_V0match__ellipses_lambda19, env) {
 if (env->num_vars == 4) {
  // ((bruijn caar 5 18) (close _V0match__ellipses_k185) (bruijn pattern-stack 0 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 5, 18)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__ellipses_k185, env)}),
      env->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0match__ellipses_lambda19, got ~D~N"
  "-- expected 4~N"
  , env->num_vars);
 }
 }
}
static void _V0transform__match_lambda6(VEnv * env) {
 V_GC_CHECK(_V0transform__match_lambda6, env) {
  // (set! (close _V0transform__match_k29) (bruijn match-ellipses 0 1) (close _V0match__ellipses_lambda19))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0transform__match_k29, env)}),
      0, 1,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0match__ellipses_lambda19, env)})
    );
 }
}
static void _V0transform__match_lambda5(VEnv * env) {
 V_GC_CHECK(_V0transform__match_lambda5, env) {
 if (env->num_vars == 3) {
  // ((close _V0transform__match_lambda6) (bruijn ##k.17 0 0) #f #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0transform__match_lambda6, env)},
      env->vars[0],
      VEncodeBool(false),
      VEncodeBool(false)
    );
 } else {
  VError("Not enough arguments to _V0transform__match_lambda5, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void match_k27(VEnv * env) {
 V_GC_CHECK(match_k27, env) {
 if (env->num_vars == 1) {
  // (set! (close match_k28) (bruijn transform-match 1 2) (close _V0transform__match_lambda5))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(match_k28, env)}),
      1, 2,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0transform__match_lambda5, env)})
    );
 } else {
  VError("Not enough arguments to match_k27, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0gather__variables_k209(VEnv * env) {
 V_GC_CHECK(_V0gather__variables_k209, env) {
 if (env->num_vars == 1) {
  // ((bruijn gather-variables 5 1) (bruijn ##k.354 4 0) (bruijn ##x.364 0 0) (bruijn eqv? 4 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 5, 1)),
      VGetArg(env, 4, 0),
      env->vars[0],
      VGetArg(env, 4, 2)
    );
 } else {
  VError("Not enough arguments to _V0gather__variables_k209, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0gather__variables_k212(VEnv * env) {
 V_GC_CHECK(_V0gather__variables_k212, env) {
 if (env->num_vars == 1) {
  // ((bruijn gather-variables 7 1) (bruijn ##k.354 6 0) (bruijn ##x.370 0 0) (bruijn eqv? 6 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 1)),
      VGetArg(env, 6, 0),
      env->vars[0],
      VGetArg(env, 6, 2)
    );
 } else {
  VError("Not enough arguments to _V0gather__variables_k212, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0gather__variables_k217(VEnv * env) {
 V_GC_CHECK(_V0gather__variables_k217, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 12 15) (bruijn ##k.354 10 0) (bruijn ##x.376 2 0) (bruijn ##x.377 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 12, 15)),
      VGetArg(env, 10, 0),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0gather__variables_k217, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0gather__variables_k216(VEnv * env) {
 V_GC_CHECK(_V0gather__variables_k216, env) {
 if (env->num_vars == 1) {
  // ((bruijn gather-variables 10 1) (close _V0gather__variables_k217) (bruijn ##x.378 0 0) (bruijn eqv? 9 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 10, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0gather__variables_k217, env)}),
      env->vars[0],
      VGetArg(env, 9, 2)
    );
 } else {
  VError("Not enough arguments to _V0gather__variables_k216, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0gather__variables_k215(VEnv * env) {
 V_GC_CHECK(_V0gather__variables_k215, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 10 19) (close _V0gather__variables_k216) (bruijn pattern 8 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 10, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0gather__variables_k216, env)}),
      VGetArg(env, 8, 1)
    );
 } else {
  VError("Not enough arguments to _V0gather__variables_k215, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0gather__variables_k222(VEnv * env) {
 V_GC_CHECK(_V0gather__variables_k222, env) {
 if (env->num_vars == 1) {
  // ((bruijn gather-variables 13 1) (bruijn ##k.354 12 0) (bruijn ##x.389 0 0) (bruijn eqv? 12 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 1)),
      VGetArg(env, 12, 0),
      env->vars[0],
      VGetArg(env, 12, 2)
    );
 } else {
  VError("Not enough arguments to _V0gather__variables_k222, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0gather__variables_k227(VEnv * env) {
 V_GC_CHECK(_V0gather__variables_k227, env) {
 if (env->num_vars == 1) {
  // ((bruijn gather-variables 17 1) (bruijn ##k.354 16 0) (bruijn ##x.395 0 0) (bruijn eqv? 16 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 1)),
      VGetArg(env, 16, 0),
      env->vars[0],
      VGetArg(env, 16, 2)
    );
 } else {
  VError("Not enough arguments to _V0gather__variables_k227, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0gather__variables_k230(VEnv * env) {
 V_GC_CHECK(_V0gather__variables_k230, env) {
 if (env->num_vars == 1) {
  // ((bruijn gather-variables 19 1) (bruijn ##k.354 18 0) (##inline ##sys.cons (bruijn ##x.399 2 0) (##inline ##sys.cons (bruijn ##x.401 1 0) (bruijn ##x.402 0 0))) (bruijn eqv? 18 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 1)),
      VGetArg(env, 18, 0),
      VInlineCons(
env->up->up->vars[0],
      VInlineCons(
env->up->vars[0],
      env->vars[0]
    )

    )
,
      VGetArg(env, 18, 2)
    );
 } else {
  VError("Not enough arguments to _V0gather__variables_k230, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0gather__variables_k229(VEnv * env) {
 V_GC_CHECK(_V0gather__variables_k229, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 19 19) (close _V0gather__variables_k230) (bruijn pattern 17 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0gather__variables_k230, env)}),
      VGetArg(env, 17, 1)
    );
 } else {
  VError("Not enough arguments to _V0gather__variables_k229, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0gather__variables_k228(VEnv * env) {
 V_GC_CHECK(_V0gather__variables_k228, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdar 18 16) (close _V0gather__variables_k229) (bruijn pattern 16 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 16)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0gather__variables_k229, env)}),
      VGetArg(env, 16, 1)
    );
 } else {
  VError("Not enough arguments to _V0gather__variables_k228, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0gather__variables_k226(VEnv * env) {
 V_GC_CHECK(_V0gather__variables_k226, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.405 0 0) ((bruijn cdr 17 19) (close _V0gather__variables_k227) (bruijn pattern 15 1)) ((bruijn caar 17 18) (close _V0gather__variables_k228) (bruijn pattern 15 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0gather__variables_k227, env)}),
      VGetArg(env, 15, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 18)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0gather__variables_k228, env)}),
      VGetArg(env, 15, 1)
    );
}
 } else {
  VError("Not enough arguments to _V0gather__variables_k226, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0gather__variables_k225(VEnv * env) {
 V_GC_CHECK(_V0gather__variables_k225, env) {
 if (env->num_vars == 1) {
  // ((bruijn eqv? 14 2) (close _V0gather__variables_k226) (bruijn ##x.406 0 0) (quote quote))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0gather__variables_k226, env)}),
      env->vars[0],
      VEncodePointer(&_V0quote.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0gather__variables_k225, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0gather__variables_k233(VEnv * env) {
 V_GC_CHECK(_V0gather__variables_k233, env) {
 if (env->num_vars == 1) {
  // ((bruijn gather-variables 17 1) (bruijn ##k.354 16 0) (##inline ##sys.cons (bruijn ##x.399 2 0) (##inline ##sys.cons (bruijn ##x.401 1 0) (bruijn ##x.402 0 0))) (bruijn eqv? 16 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 1)),
      VGetArg(env, 16, 0),
      VInlineCons(
env->up->up->vars[0],
      VInlineCons(
env->up->vars[0],
      env->vars[0]
    )

    )
,
      VGetArg(env, 16, 2)
    );
 } else {
  VError("Not enough arguments to _V0gather__variables_k233, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0gather__variables_k232(VEnv * env) {
 V_GC_CHECK(_V0gather__variables_k232, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 17 19) (close _V0gather__variables_k233) (bruijn pattern 15 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0gather__variables_k233, env)}),
      VGetArg(env, 15, 1)
    );
 } else {
  VError("Not enough arguments to _V0gather__variables_k232, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0gather__variables_k231(VEnv * env) {
 V_GC_CHECK(_V0gather__variables_k231, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdar 16 16) (close _V0gather__variables_k232) (bruijn pattern 14 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 16)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0gather__variables_k232, env)}),
      VGetArg(env, 14, 1)
    );
 } else {
  VError("Not enough arguments to _V0gather__variables_k231, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0gather__variables_k224(VEnv * env) {
 V_GC_CHECK(_V0gather__variables_k224, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.403 0 0) ((bruijn caar 15 18) (close _V0gather__variables_k225) (bruijn pattern 13 1)) ((bruijn caar 15 18) (close _V0gather__variables_k231) (bruijn pattern 13 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 18)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0gather__variables_k225, env)}),
      VGetArg(env, 13, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 18)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0gather__variables_k231, env)}),
      VGetArg(env, 13, 1)
    );
}
 } else {
  VError("Not enough arguments to _V0gather__variables_k224, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0gather__variables_k223(VEnv * env) {
 V_GC_CHECK(_V0gather__variables_k223, env) {
 if (env->num_vars == 1) {
  // ((bruijn pair? 14 4) (close _V0gather__variables_k224) (bruijn ##x.407 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 4)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0gather__variables_k224, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0gather__variables_k223, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0gather__variables_k221(VEnv * env) {
 V_GC_CHECK(_V0gather__variables_k221, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.386 0 0) ((bruijn cdr 13 19) (close _V0gather__variables_k222) (bruijn pattern 11 1)) ((bruijn car 13 3) (close _V0gather__variables_k223) (bruijn pattern 11 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0gather__variables_k222, env)}),
      VGetArg(env, 11, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 3)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0gather__variables_k223, env)}),
      VGetArg(env, 11, 1)
    );
}
 } else {
  VError("Not enough arguments to _V0gather__variables_k221, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0gather__variables_k220(VEnv * env) {
 V_GC_CHECK(_V0gather__variables_k220, env) {
 if (env->num_vars == 1) {
  // ((bruijn atom? 12 8) (close _V0gather__variables_k221) (bruijn ##x.408 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 12, 8)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0gather__variables_k221, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0gather__variables_k220, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0gather__variables_k219(VEnv * env) {
 V_GC_CHECK(_V0gather__variables_k219, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.381 0 0) ((bruijn error 11 2) (bruijn ##k.354 9 0) (##string ##string.442)) ((bruijn car 11 3) (close _V0gather__variables_k220) (bruijn pattern 9 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 2)),
      VGetArg(env, 9, 0),
      VEncodePointer(&_V10string_D442.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 3)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0gather__variables_k220, env)}),
      VGetArg(env, 9, 1)
    );
}
 } else {
  VError("Not enough arguments to _V0gather__variables_k219, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0gather__variables_k218(VEnv * env) {
 V_GC_CHECK(_V0gather__variables_k218, env) {
 if (env->num_vars == 1) {
  // ((bruijn vector? 10 10) (close _V0gather__variables_k219) (bruijn ##x.409 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 10, 10)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0gather__variables_k219, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0gather__variables_k218, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0gather__variables_k214(VEnv * env) {
 V_GC_CHECK(_V0gather__variables_k214, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.373 0 0) ((bruijn car 9 3) (close _V0gather__variables_k215) (bruijn pattern 7 1)) ((bruijn car 9 3) (close _V0gather__variables_k218) (bruijn pattern 7 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 3)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0gather__variables_k215, env)}),
      VGetArg(env, 7, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 3)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0gather__variables_k218, env)}),
      VGetArg(env, 7, 1)
    );
}
 } else {
  VError("Not enough arguments to _V0gather__variables_k214, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0gather__variables_k213(VEnv * env) {
 V_GC_CHECK(_V0gather__variables_k213, env) {
 if (env->num_vars == 1) {
  // ((bruijn symbol? 8 11) (close _V0gather__variables_k214) (bruijn ##x.410 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 11)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0gather__variables_k214, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0gather__variables_k213, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0gather__variables_k211(VEnv * env) {
 V_GC_CHECK(_V0gather__variables_k211, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.367 0 0) ((bruijn cdr 7 19) (close _V0gather__variables_k212) (bruijn pattern 5 1)) ((bruijn car 7 3) (close _V0gather__variables_k213) (bruijn pattern 5 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0gather__variables_k212, env)}),
      VGetArg(env, 5, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 3)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0gather__variables_k213, env)}),
      VGetArg(env, 5, 1)
    );
}
 } else {
  VError("Not enough arguments to _V0gather__variables_k211, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0gather__variables_k210(VEnv * env) {
 V_GC_CHECK(_V0gather__variables_k210, env) {
 if (env->num_vars == 1) {
  // ((bruijn eqv? 4 2) (close _V0gather__variables_k211) (bruijn ##x.411 0 0) (quote ...))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0gather__variables_k211, env)}),
      env->vars[0],
      VEncodePointer(&_V0_D_D_D.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0gather__variables_k210, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0gather__variables_k208(VEnv * env) {
 V_GC_CHECK(_V0gather__variables_k208, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.361 0 0) ((bruijn cdr 5 19) (close _V0gather__variables_k209) (bruijn pattern 3 1)) ((bruijn car 5 3) (close _V0gather__variables_k210) (bruijn pattern 3 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 5, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0gather__variables_k209, env)}),
      env->up->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 5, 3)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0gather__variables_k210, env)}),
      env->up->up->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0gather__variables_k208, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0gather__variables_k207(VEnv * env) {
 V_GC_CHECK(_V0gather__variables_k207, env) {
 if (env->num_vars == 1) {
  // ((bruijn eqv? 2 2) (close _V0gather__variables_k208) (bruijn ##x.412 0 0) (quote _))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->vars[2]),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0gather__variables_k208, env)}),
      env->vars[0],
      VEncodePointer(&_V0_U.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0gather__variables_k207, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0gather__variables_k206(VEnv * env) {
 V_GC_CHECK(_V0gather__variables_k206, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.356 0 0) ((bruijn ##k.354 1 0) (quote ())) ((bruijn car 3 3) (close _V0gather__variables_k207) (bruijn pattern 1 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VNULL
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[3]),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0gather__variables_k207, env)}),
      env->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0gather__variables_k206, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0gather__variables_lambda32(VEnv * env) {
 V_GC_CHECK(_V0gather__variables_lambda32, env) {
 if (env->num_vars == 3) {
  // ((bruijn null? 2 14) (close _V0gather__variables_k206) (bruijn pattern 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->vars[14]),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0gather__variables_k206, env)}),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0gather__variables_lambda32, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void match_lambda4(VEnv * env) {
 V_GC_CHECK(match_lambda4, env) {
  // (set! (close match_k27) (bruijn gather-variables 0 1) (close _V0gather__variables_lambda32))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(match_k27, env)}),
      0, 1,
      VEncodeClosure((VClosure[]){VMakeClosure(_V0gather__variables_lambda32, env)})
    );
 }
}
static void match_lambda3(VEnv * env) {
 V_GC_CHECK(match_lambda3, env) {
  // ((close match_lambda4) (bruijn ##k.6 0 0) #f #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(match_lambda4, env)},
      env->vars[0],
      VEncodeBool(false),
      VEncodeBool(false)
    );
 }
}
static void match_k26(VEnv * env) {
 V_GC_CHECK(match_k26, env) {
 if (env->num_vars == 1) {
  // ((close match_lambda3) (bruijn ##k.4 20 0) (bruijn ##x.413 19 0) (bruijn ##x.414 18 0) (bruijn ##x.415 17 0) (bruijn ##x.416 16 0) (bruijn ##x.417 15 0) (bruijn ##x.418 14 0) (bruijn ##x.419 13 0) (bruijn ##x.420 12 0) (bruijn ##x.421 11 0) (bruijn ##x.422 10 0) (bruijn ##x.423 9 0) (bruijn ##x.424 8 0) (bruijn ##x.425 7 0) (bruijn ##x.426 6 0) (bruijn ##x.427 5 0) (bruijn ##x.428 4 0) (bruijn ##x.429 3 0) (bruijn ##x.430 2 0) (bruijn ##x.431 1 0) (bruijn ##x.432 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(match_lambda3, env)},
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
  VError("Not enough arguments to match_k26, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void match_k25(VEnv * env) {
 V_GC_CHECK(match_k25, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 19 1) (close match_k26) (quote gensym))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(match_k26, env)}),
      VEncodePointer(&_V0gensym.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to match_k25, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void match_k24(VEnv * env) {
 V_GC_CHECK(match_k24, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 18 1) (close match_k25) (quote cdr))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(match_k25, env)}),
      VEncodePointer(&_V0cdr.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to match_k24, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void match_k23(VEnv * env) {
 V_GC_CHECK(match_k23, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 17 1) (close match_k24) (quote caar))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(match_k24, env)}),
      VEncodePointer(&_V0caar.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to match_k23, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void match_k22(VEnv * env) {
 V_GC_CHECK(match_k22, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 16 1) (close match_k23) (quote list))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(match_k23, env)}),
      VEncodePointer(&_V0list.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to match_k22, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void match_k21(VEnv * env) {
 V_GC_CHECK(match_k21, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 15 1) (close match_k22) (quote cdar))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(match_k22, env)}),
      VEncodePointer(&_V0cdar.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to match_k21, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void match_k20(VEnv * env) {
 V_GC_CHECK(match_k20, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 14 1) (close match_k21) (quote cons))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(match_k21, env)}),
      VEncodePointer(&_V0cons.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to match_k20, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void match_k19(VEnv * env) {
 V_GC_CHECK(match_k19, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 13 1) (close match_k20) (quote null?))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(match_k20, env)}),
      VEncodePointer(&_V0null_Q.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to match_k19, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void match_k18(VEnv * env) {
 V_GC_CHECK(match_k18, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 12 1) (close match_k19) (quote cddr))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 12, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(match_k19, env)}),
      VEncodePointer(&_V0cddr.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to match_k18, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void match_k17(VEnv * env) {
 V_GC_CHECK(match_k17, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 11 1) (close match_k18) (quote cadr))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(match_k18, env)}),
      VEncodePointer(&_V0cadr.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to match_k17, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void match_k16(VEnv * env) {
 V_GC_CHECK(match_k16, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 10 1) (close match_k17) (quote symbol?))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 10, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(match_k17, env)}),
      VEncodePointer(&_V0symbol_Q.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to match_k16, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void match_k15(VEnv * env) {
 V_GC_CHECK(match_k15, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 9 1) (close match_k16) (quote vector?))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(match_k16, env)}),
      VEncodePointer(&_V0vector_Q.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to match_k15, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void match_k14(VEnv * env) {
 V_GC_CHECK(match_k14, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 8 1) (close match_k15) (quote string?))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(match_k15, env)}),
      VEncodePointer(&_V0string_Q.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to match_k14, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void match_k13(VEnv * env) {
 V_GC_CHECK(match_k13, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 7 1) (close match_k14) (quote atom?))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(match_k14, env)}),
      VEncodePointer(&_V0atom_Q.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to match_k13, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void match_k12(VEnv * env) {
 V_GC_CHECK(match_k12, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 6 1) (close match_k13) (quote not))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(match_k13, env)}),
      VEncodePointer(&_V0not.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to match_k12, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void match_k11(VEnv * env) {
 V_GC_CHECK(match_k11, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 5 1) (close match_k12) (quote cddar))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 5, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(match_k12, env)}),
      VEncodePointer(&_V0cddar.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to match_k11, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void match_k10(VEnv * env) {
 V_GC_CHECK(match_k10, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 4 1) (close match_k11) (quote cadar))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(match_k11, env)}),
      VEncodePointer(&_V0cadar.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to match_k10, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void match_k9(VEnv * env) {
 V_GC_CHECK(match_k9, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 3 1) (close match_k10) (quote pair?))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[1]),
      VEncodeClosure((VClosure[]){VMakeClosure(match_k10, env)}),
      VEncodePointer(&_V0pair_Q.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to match_k9, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void match_k8(VEnv * env) {
 V_GC_CHECK(match_k8, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 2 1) (close match_k9) (quote car))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->vars[1]),
      VEncodeClosure((VClosure[]){VMakeClosure(match_k9, env)}),
      VEncodePointer(&_V0car.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to match_k8, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void match_k7(VEnv * env) {
 V_GC_CHECK(match_k7, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 1 1) (close match_k8) (quote error))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      VEncodeClosure((VClosure[]){VMakeClosure(match_k8, env)}),
      VEncodePointer(&_V0error.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to match_k7, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void match_lambda2(VEnv * env) {
 V_GC_CHECK(match_lambda2, env) {
  // ((bruijn ##vcore.import 0 1) (close match_k7) (quote map))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[1]),
      VEncodeClosure((VClosure[]){VMakeClosure(match_k7, env)}),
      VEncodePointer(&_V0map.sym, VPOINTER_OTHER)
    );
 }
}
static void match_k6(VEnv * env) {
 V_GC_CHECK(match_k6, env) {
 if (env->num_vars == 1) {
  // ((close match_lambda2) (bruijn ##k.2 6 0) (bruijn ##x.433 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(match_lambda2, env)},
      VGetArg(env, 6, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to match_k6, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void match_k5(VEnv * env) {
 V_GC_CHECK(match_k5, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##x.434 4 0) (close match_k6) (##string ##string.445) (bruijn ##x.435 2 0) (bruijn ##x.436 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 0)),
      VEncodeClosure((VClosure[]){VMakeClosure(match_k6, env)}),
      VEncodePointer(&_V10string_D445.sym, VPOINTER_OTHER),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to match_k5, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void match_k4(VEnv * env) {
 V_GC_CHECK(match_k4, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##x.437 0 0) (close match_k5) (##string ##string.446))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeClosure((VClosure[]){VMakeClosure(match_k5, env)}),
      VEncodePointer(&_V10string_D446.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to match_k4, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void match_k3(VEnv * env) {
 V_GC_CHECK(match_k3, env) {
 if (env->num_vars == 1) {
  // (##vcore.function (close match_k4) (##string ##string.447))
    V_CALL_FUNC(VFunction,
      VEncodeClosure((VClosure[]){VMakeClosure(match_k4, env)}),
      VEncodePointer(&_V10string_D447.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to match_k3, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void match_k2(VEnv * env) {
 V_GC_CHECK(match_k2, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##x.438 0 0) (close match_k3) (##string ##string.448))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeClosure((VClosure[]){VMakeClosure(match_k3, env)}),
      VEncodePointer(&_V10string_D448.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to match_k2, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void match_k1(VEnv * env) {
 V_GC_CHECK(match_k1, env) {
 if (env->num_vars == 1) {
  // (##vcore.function (close match_k2) (##string ##string.447))
    V_CALL_FUNC(VFunction,
      VEncodeClosure((VClosure[]){VMakeClosure(match_k2, env)}),
      VEncodePointer(&_V10string_D447.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to match_k1, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void match_lambda1(VEnv * env) {
 V_GC_CHECK(match_lambda1, env) {
 if (env->num_vars == 1) {
  // (##vcore.function (close match_k1) (##string ##string.449))
    V_CALL_FUNC(VFunction,
      VEncodeClosure((VClosure[]){VMakeClosure(match_k1, env)}),
      VEncodePointer(&_V10string_D449.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to match_lambda1, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
void (*match)(VEnv*) = match_lambda1;
