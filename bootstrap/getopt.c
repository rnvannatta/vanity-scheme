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
static struct { VBlob sym; char bytes[12]; } _V10string_D310 = { { VSTRING, 12 }, "VMakeImport" };
static struct { VBlob sym; char bytes[13]; } _V10string_D309 = { { VSTRING, 13 }, "VLoadLibrary" };
static struct { VBlob sym; char bytes[21]; } _V10string_D308 = { { VSTRING, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[7]; } _V10string_D307 = { { VSTRING, 7 }, "getopt" };
static struct { VBlob sym; char bytes[15]; } _V0string___Gsymbol = { { VSYMBOL, 15 }, "string->symbol" };
static struct { VBlob sym; char bytes[8]; } _V0string_Q = { { VSYMBOL, 8 }, "string\?" };
static struct { VBlob sym; char bytes[15]; } _V0symbol___Gstring = { { VSYMBOL, 15 }, "symbol->string" };
static struct { VBlob sym; char bytes[8]; } _V0symbol_Q = { { VSYMBOL, 8 }, "symbol\?" };
static struct { VBlob sym; char bytes[13]; } _V0string___Glist = { { VSYMBOL, 13 }, "string->list" };
static struct { VBlob sym; char bytes[2]; } _V0_L = { { VSYMBOL, 2 }, "<" };
static struct { VBlob sym; char bytes[5]; } _V0memq = { { VSYMBOL, 5 }, "memq" };
static struct { VBlob sym; char bytes[6]; } _V0assoc = { { VSYMBOL, 6 }, "assoc" };
static struct { VBlob sym; char bytes[6]; } _V0caddr = { { VSYMBOL, 6 }, "caddr" };
static struct { VBlob sym; char bytes[5]; } _V0list = { { VSYMBOL, 5 }, "list" };
static struct { VBlob sym; char bytes[5]; } _V0cddr = { { VSYMBOL, 5 }, "cddr" };
static struct { VBlob sym; char bytes[5]; } _V0cadr = { { VSYMBOL, 5 }, "cadr" };
static struct { VBlob sym; char bytes[6]; } _V0pair_Q = { { VSYMBOL, 6 }, "pair\?" };
static struct { VBlob sym; char bytes[4]; } _V0not = { { VSYMBOL, 4 }, "not" };
static struct { VBlob sym; char bytes[4]; } _V0eq_Q = { { VSYMBOL, 4 }, "eq\?" };
static struct { VBlob sym; char bytes[7]; } _V0values = { { VSYMBOL, 7 }, "values" };
static struct { VBlob sym; char bytes[2]; } _V0_P = { { VSYMBOL, 2 }, "+" };
static struct { VBlob sym; char bytes[17]; } _V0call__with__values = { { VSYMBOL, 17 }, "call-with-values" };
static struct { VBlob sym; char bytes[5]; } _V0cons = { { VSYMBOL, 5 }, "cons" };
static struct { VBlob sym; char bytes[4]; } _V0car = { { VSYMBOL, 4 }, "car" };
static struct { VBlob sym; char bytes[7]; } _V0equal_Q = { { VSYMBOL, 7 }, "equal\?" };
static struct { VBlob sym; char bytes[11]; } _V0string__ref = { { VSYMBOL, 11 }, "string-ref" };
static struct { VBlob sym; char bytes[4]; } _V0map = { { VSYMBOL, 4 }, "map" };
static struct { VBlob sym; char bytes[2]; } _V0_E = { { VSYMBOL, 2 }, "=" };
static struct { VBlob sym; char bytes[14]; } _V0string__length = { { VSYMBOL, 14 }, "string-length" };
static struct { VBlob sym; char bytes[10]; } _V0substring = { { VSYMBOL, 10 }, "substring" };
static struct { VBlob sym; char bytes[6]; } _V0null_Q = { { VSYMBOL, 6 }, "null\?" };
static struct { VBlob sym; char bytes[4]; } _V0cdr = { { VSYMBOL, 4 }, "cdr" };
static struct { VBlob sym; char bytes[1]; } _V10string_D306 = { { VSTRING, 1 }, "" };
static struct { VBlob sym; char bytes[3]; } _V10string_D305 = { { VSTRING, 3 }, "--" };
static struct { VBlob sym; char bytes[7]; } _V0getopt = { { VSYMBOL, 7 }, "getopt" };
static void getopt_k33(VEnv * env) {
 static VDebugInfo dbg = { "getopt_k33" };
 VRecordCall(&dbg);
 V_GC_CHECK(getopt_k33, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.8 1 0) (##inline ##sys.cons (##inline ##sys.cons (quote getopt) (bruijn getopt 1 1)) (quote ())))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0getopt.sym, VPOINTER_OTHER),
      env->up->vars[1]
    )
,
      VNULL
    )

    );
 } else {
  VError("Not enough arguments to getopt_k33, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0getopt_k42(VEnv * env) {
 static VDebugInfo dbg = { "_V0getopt_k42" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0getopt_k42, env) {
 if (env->num_vars == 1) {
  // ((bruijn iter 9 6) (bruijn ##k.16 9 0) (bruijn ##x.36 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 6)),
      VGetArg(env, 9, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0getopt_k42, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0getopt_k41(VEnv * env) {
 static VDebugInfo dbg = { "_V0getopt_k41" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0getopt_k41, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 11 28) (close _V0getopt_k42) (bruijn args 9 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0getopt_k42, env)}),
      VGetArg(env, 9, 2)
    );
 } else {
  VError("Not enough arguments to _V0getopt_k41, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_lambda8(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda8" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda8, env) {
 if (env->num_vars == 2) {
  // ((bruijn cons 20 19) (bruijn ##k.50 0 0) #f (bruijn e 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 19)),
      env->vars[0],
      VEncodeBool(false),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0iter_lambda8, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k50(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k50" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k50, env) {
 if (env->num_vars == 1) {
  // ((bruijn map 19 23) (bruijn ##k.37 8 0) (close _V0iter_lambda8) (bruijn ##x.52 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 23)),
      VGetArg(env, 8, 0),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_lambda8, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0iter_k50, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k49(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k49" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k49, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.47 0 0) ((bruijn cdr 18 28) (close _V0iter_k50) (bruijn args 7 1)) ((bruijn getopt-long 15 5) (bruijn ##k.37 7 0) (bruijn args 7 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k50, env)}),
      VGetArg(env, 7, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 5)),
      VGetArg(env, 7, 0),
      VGetArg(env, 7, 1)
    );
}
 } else {
  VError("Not enough arguments to _V0iter_k49, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k48(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k48" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k48, env) {
 if (env->num_vars == 1) {
  // ((bruijn = 17 24) (close _V0iter_k49) (bruijn ##x.55 0 0) 2)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 24)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k49, env)}),
      env->vars[0],
      VEncodeInt(2l)
    );
 } else {
  VError("Not enough arguments to _V0iter_k48, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k47(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k47" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k47, env) {
 if (env->num_vars == 1) {
  // ((bruijn string-length 16 25) (close _V0iter_k48) (bruijn ##x.56 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 25)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k48, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0iter_k47, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k57(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k57" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k57, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 22 19) (bruijn ##k.37 11 0) (bruijn ##x.64 2 0) (bruijn ##x.65 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 19)),
      VGetArg(env, 11, 0),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0iter_k57, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k56(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k56" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k56, env) {
 if (env->num_vars == 1) {
  // ((bruijn iter 18 6) (close _V0iter_k57) (bruijn ##x.66 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 6)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k57, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0iter_k56, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k55(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k55" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k55, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 20 28) (close _V0iter_k56) (bruijn args 9 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k56, env)}),
      VGetArg(env, 9, 1)
    );
 } else {
  VError("Not enough arguments to _V0iter_k55, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k54(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k54" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k54, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 19 19) (close _V0iter_k55) #t (bruijn ##x.67 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k55, env)}),
      VEncodeBool(true),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0iter_k54, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k53(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k53" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k53, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.59 0 0) ((bruijn getopt-short 15 4) (bruijn ##k.37 7 0) (bruijn args 7 1) (bruijn opts 15 3)) ((bruijn car 18 20) (close _V0iter_k54) (bruijn args 7 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 4)),
      VGetArg(env, 7, 0),
      VGetArg(env, 7, 1),
      VGetArg(env, 15, 3)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 20)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k54, env)}),
      VGetArg(env, 7, 1)
    );
}
 } else {
  VError("Not enough arguments to _V0iter_k53, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k52(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k52" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k52, env) {
 if (env->num_vars == 1) {
  // ((bruijn equal? 17 21) (close _V0iter_k53) (bruijn ##x.68 0 0) #\-)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 21)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k53, env)}),
      env->vars[0],
      VEncodeChar('-')
    );
 } else {
  VError("Not enough arguments to _V0iter_k52, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k51(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k51" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k51, env) {
 if (env->num_vars == 1) {
  // ((bruijn string-ref 16 22) (close _V0iter_k52) (bruijn ##x.69 0 0) 0)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 22)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k52, env)}),
      env->vars[0],
      VEncodeInt(0l)
    );
 } else {
  VError("Not enough arguments to _V0iter_k51, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k46(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k46" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k46, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.44 0 0) ((bruijn car 15 20) (close _V0iter_k47) (bruijn args 4 1)) ((bruijn car 15 20) (close _V0iter_k51) (bruijn args 4 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 20)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k47, env)}),
      VGetArg(env, 4, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 20)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k51, env)}),
      VGetArg(env, 4, 1)
    );
}
 } else {
  VError("Not enough arguments to _V0iter_k46, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k45(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k45" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k45, env) {
 if (env->num_vars == 1) {
  // ((bruijn equal? 14 21) (close _V0iter_k46) (bruijn ##x.70 0 0) (##string ##string.305))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 21)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k46, env)}),
      env->vars[0],
      VEncodePointer(&_V10string_D305.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0iter_k45, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k44(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k44" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k44, env) {
 if (env->num_vars == 1) {
  // ((bruijn substring 13 26) (close _V0iter_k45) (bruijn ##x.71 0 0) 0 2)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 26)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k45, env)}),
      env->vars[0],
      VEncodeInt(0l),
      VEncodeInt(2l)
    );
 } else {
  VError("Not enough arguments to _V0iter_k44, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_k43(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_k43" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_k43, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.39 0 0) ((bruijn ##k.37 1 0) (quote ())) ((bruijn car 12 20) (close _V0iter_k44) (bruijn args 1 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VNULL
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 12, 20)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k44, env)}),
      env->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0iter_k43, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0iter_lambda7(VEnv * env) {
 static VDebugInfo dbg = { "_V0iter_lambda7" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0iter_lambda7, env) {
 if (env->num_vars == 2) {
  // ((bruijn null? 11 27) (close _V0iter_k43) (bruijn args 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 27)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_k43, env)}),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0iter_lambda7, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0getopt_k40(VEnv * env) {
 static VDebugInfo dbg = { "_V0getopt_k40" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0getopt_k40, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0getopt_k41) (bruijn iter 7 6) (close _V0iter_lambda7))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0getopt_k41, env)}),
      VEncodeInt(7l), VEncodeInt(6l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0iter_lambda7, env)})
    );
 } else {
  VError("Not enough arguments to _V0getopt_k40, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0getopt__long_k60(VEnv * env) {
 static VDebugInfo dbg = { "_V0getopt__long_k60" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0getopt__long_k60, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 1 1) (bruijn ##k.80 1 0) 2)
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->up->vars[0],
      VEncodeInt(2l)
    );
 } else {
  VError("Not enough arguments to _V0getopt__long_k60, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k62(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k62" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k62, env) {
 if (env->num_vars == 1) {
  // ((bruijn values 19 16) (bruijn ##k.85 2 0) (bruijn ##x.90 0 0) (##string ##string.306))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 16)),
      env->up->up->vars[0],
      env->vars[0],
      VEncodePointer(&_V10string_D306.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0loop_k62, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k67(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k67" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k67, env) {
 if (env->num_vars == 1) {
  // ((bruijn values 23 16) (bruijn ##k.85 6 0) (bruijn ##x.96 2 0) (bruijn ##x.97 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 16)),
      VGetArg(env, 6, 0),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k67, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k66(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k66" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k66, env) {
 if (env->num_vars == 1) {
  // ((bruijn substring 22 26) (close _V0loop_k67) (bruijn arg 9 1) (bruijn ##x.98 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 26)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k67, env)}),
      VGetArg(env, 9, 1),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k66, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k65(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k65" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k65, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 21 17) (close _V0loop_k66) (bruijn i 4 1) 1)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 17)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k66, env)}),
      VGetArg(env, 4, 1),
      VEncodeInt(1l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k65, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k68(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k68" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k68, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 5 1) (bruijn ##k.85 4 0) (bruijn ##x.101 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 5, 1)),
      VGetArg(env, 4, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k68, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k64(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k64" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k64, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.93 0 0) ((bruijn substring 20 26) (close _V0loop_k65) (bruijn arg 7 1) 0 (bruijn i 3 1)) ((bruijn + 20 17) (close _V0loop_k68) (bruijn i 3 1) 1))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 26)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k65, env)}),
      VGetArg(env, 7, 1),
      VEncodeInt(0l),
      env->up->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 17)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k68, env)}),
      env->up->up->up->vars[1],
      VEncodeInt(1l)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k64, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k63(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k63" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k63, env) {
 if (env->num_vars == 1) {
  // ((bruijn eq? 19 15) (close _V0loop_k64) (bruijn ##x.102 0 0) #\=)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 15)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k64, env)}),
      env->vars[0],
      VEncodeChar('=')
    );
 } else {
  VError("Not enough arguments to _V0loop_k63, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k61(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k61" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k61, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.87 0 0) ((bruijn substring 18 26) (close _V0loop_k62) (bruijn arg 5 1) 0 (bruijn i 1 1)) ((bruijn string-ref 18 22) (close _V0loop_k63) (bruijn arg 5 1) (bruijn i 1 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 26)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k62, env)}),
      VGetArg(env, 5, 1),
      VEncodeInt(0l),
      env->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 22)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k63, env)}),
      VGetArg(env, 5, 1),
      env->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k61, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda14(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda14" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda14, env) {
 if (env->num_vars == 2) {
  // ((bruijn = 17 24) (close _V0loop_k61) (bruijn i 0 1) (bruijn len 2 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 24)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k61, env)}),
      env->vars[1],
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda14, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0getopt__long_lambda13(VEnv * env) {
 static VDebugInfo dbg = { "_V0getopt__long_lambda13" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0getopt__long_lambda13, env) {
  // (set! (close _V0getopt__long_k60) (bruijn loop 0 1) (close _V0loop_lambda14))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0getopt__long_k60, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda14, env)})
    );
 }
}
static void _V0getopt__long_lambda12(VEnv * env) {
 static VDebugInfo dbg = { "_V0getopt__long_lambda12" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0getopt__long_lambda12, env) {
  // ((close _V0getopt__long_lambda13) (bruijn ##k.78 0 0) #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0getopt__long_lambda13, env)},
      env->vars[0],
      VEncodeBool(false)
    );
 }
}
static void _V0getopt__long_k59(VEnv * env) {
 static VDebugInfo dbg = { "_V0getopt__long_k59" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0getopt__long_k59, env) {
 if (env->num_vars == 1) {
  // ((close _V0getopt__long_lambda12) (bruijn ##k.76 1 0) (bruijn ##x.103 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0getopt__long_lambda12, env)},
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0getopt__long_k59, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0getopt__long_lambda11(VEnv * env) {
 static VDebugInfo dbg = { "_V0getopt__long_lambda11" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0getopt__long_lambda11, env) {
  // ((bruijn string-length 13 25) (close _V0getopt__long_k59) (bruijn arg 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 25)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0getopt__long_k59, env)}),
      env->vars[1]
    );
 }
}
static void _V0getopt__long_k58(VEnv * env) {
 static VDebugInfo dbg = { "_V0getopt__long_k58" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0getopt__long_k58, env) {
 if (env->num_vars == 1) {
  // ((close _V0getopt__long_lambda11) (bruijn ##k.74 1 0) (bruijn ##x.104 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0getopt__long_lambda11, env)},
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0getopt__long_k58, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0getopt__long_lambda10(VEnv * env) {
 static VDebugInfo dbg = { "_V0getopt__long_lambda10" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0getopt__long_lambda10, env) {
 if (env->num_vars == 1) {
  // ((bruijn car 11 20) (close _V0getopt__long_k58) (bruijn args 1 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 20)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0getopt__long_k58, env)}),
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0getopt__long_lambda10, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0getopt__long_k75(VEnv * env) {
 static VDebugInfo dbg = { "_V0getopt__long_k75" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0getopt__long_k75, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 19 19) (bruijn ##k.107 5 0) (bruijn ##x.112 2 0) (bruijn ##x.113 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 19)),
      VGetArg(env, 5, 0),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0getopt__long_k75, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0getopt__long_k74(VEnv * env) {
 static VDebugInfo dbg = { "_V0getopt__long_k74" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0getopt__long_k74, env) {
 if (env->num_vars == 1) {
  // ((bruijn iter 15 6) (close _V0getopt__long_k75) (bruijn ##x.114 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 6)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0getopt__long_k75, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0getopt__long_k74, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0getopt__long_k73(VEnv * env) {
 static VDebugInfo dbg = { "_V0getopt__long_k73" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0getopt__long_k73, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 17 28) (close _V0getopt__long_k74) (bruijn args 7 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0getopt__long_k74, env)}),
      VGetArg(env, 7, 1)
    );
 } else {
  VError("Not enough arguments to _V0getopt__long_k73, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0getopt__long_k72(VEnv * env) {
 static VDebugInfo dbg = { "_V0getopt__long_k72" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0getopt__long_k72, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 16 19) (close _V0getopt__long_k73) #\? (bruijn ##x.115 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0getopt__long_k73, env)}),
      VEncodeChar('?'),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0getopt__long_k72, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0getopt__long_k81(VEnv * env) {
 static VDebugInfo dbg = { "_V0getopt__long_k81" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0getopt__long_k81, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 21 19) (bruijn ##k.107 7 0) (bruijn ##x.121 2 0) (bruijn ##x.122 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 19)),
      VGetArg(env, 7, 0),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0getopt__long_k81, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0getopt__long_k80(VEnv * env) {
 static VDebugInfo dbg = { "_V0getopt__long_k80" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0getopt__long_k80, env) {
 if (env->num_vars == 1) {
  // ((bruijn iter 17 6) (close _V0getopt__long_k81) (bruijn ##x.123 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 6)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0getopt__long_k81, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0getopt__long_k80, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0getopt__long_k79(VEnv * env) {
 static VDebugInfo dbg = { "_V0getopt__long_k79" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0getopt__long_k79, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 19 28) (close _V0getopt__long_k80) (bruijn args 9 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0getopt__long_k80, env)}),
      VGetArg(env, 9, 1)
    );
 } else {
  VError("Not enough arguments to _V0getopt__long_k79, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0getopt__long_k78(VEnv * env) {
 static VDebugInfo dbg = { "_V0getopt__long_k78" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0getopt__long_k78, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 18 19) (close _V0getopt__long_k79) (bruijn ##x.124 0 0) #f)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0getopt__long_k79, env)}),
      env->vars[0],
      VEncodeBool(false)
    );
 } else {
  VError("Not enough arguments to _V0getopt__long_k78, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0getopt__long_k87(VEnv * env) {
 static VDebugInfo dbg = { "_V0getopt__long_k87" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0getopt__long_k87, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 23 19) (bruijn ##k.107 9 0) (bruijn ##x.130 2 0) (bruijn ##x.131 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 19)),
      VGetArg(env, 9, 0),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0getopt__long_k87, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0getopt__long_k86(VEnv * env) {
 static VDebugInfo dbg = { "_V0getopt__long_k86" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0getopt__long_k86, env) {
 if (env->num_vars == 1) {
  // ((bruijn iter 19 6) (close _V0getopt__long_k87) (bruijn ##x.132 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 6)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0getopt__long_k87, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0getopt__long_k86, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0getopt__long_k85(VEnv * env) {
 static VDebugInfo dbg = { "_V0getopt__long_k85" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0getopt__long_k85, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 21 28) (close _V0getopt__long_k86) (bruijn args 11 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0getopt__long_k86, env)}),
      VGetArg(env, 11, 1)
    );
 } else {
  VError("Not enough arguments to _V0getopt__long_k85, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0getopt__long_k84(VEnv * env) {
 static VDebugInfo dbg = { "_V0getopt__long_k84" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0getopt__long_k84, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 20 19) (close _V0getopt__long_k85) (bruijn ##x.133 0 0) (bruijn val 9 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0getopt__long_k85, env)}),
      env->vars[0],
      VGetArg(env, 9, 2)
    );
 } else {
  VError("Not enough arguments to _V0getopt__long_k84, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0getopt__long_k94(VEnv * env) {
 static VDebugInfo dbg = { "_V0getopt__long_k94" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0getopt__long_k94, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 26 19) (bruijn ##k.107 12 0) (bruijn ##x.139 2 0) (bruijn ##x.140 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 19)),
      VGetArg(env, 12, 0),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0getopt__long_k94, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0getopt__long_k93(VEnv * env) {
 static VDebugInfo dbg = { "_V0getopt__long_k93" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0getopt__long_k93, env) {
 if (env->num_vars == 1) {
  // ((bruijn iter 22 6) (close _V0getopt__long_k94) (bruijn ##x.141 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 6)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0getopt__long_k94, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0getopt__long_k93, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0getopt__long_k92(VEnv * env) {
 static VDebugInfo dbg = { "_V0getopt__long_k92" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0getopt__long_k92, env) {
 if (env->num_vars == 1) {
  // ((bruijn cddr 24 11) (close _V0getopt__long_k93) (bruijn args 14 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 11)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0getopt__long_k93, env)}),
      VGetArg(env, 14, 1)
    );
 } else {
  VError("Not enough arguments to _V0getopt__long_k92, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0getopt__long_k91(VEnv * env) {
 static VDebugInfo dbg = { "_V0getopt__long_k91" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0getopt__long_k91, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 23 19) (close _V0getopt__long_k92) (bruijn ##x.142 1 0) (bruijn ##x.143 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0getopt__long_k92, env)}),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0getopt__long_k91, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0getopt__long_k90(VEnv * env) {
 static VDebugInfo dbg = { "_V0getopt__long_k90" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0getopt__long_k90, env) {
 if (env->num_vars == 1) {
  // ((bruijn cadr 22 12) (close _V0getopt__long_k91) (bruijn args 12 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 12)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0getopt__long_k91, env)}),
      VGetArg(env, 12, 1)
    );
 } else {
  VError("Not enough arguments to _V0getopt__long_k90, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0getopt__long_k96(VEnv * env) {
 static VDebugInfo dbg = { "_V0getopt__long_k96" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0getopt__long_k96, env) {
 if (env->num_vars == 1) {
  // ((bruijn list 23 10) (bruijn ##k.107 9 0) (bruijn ##x.146 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 10)),
      VGetArg(env, 9, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0getopt__long_k96, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0getopt__long_k95(VEnv * env) {
 static VDebugInfo dbg = { "_V0getopt__long_k95" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0getopt__long_k95, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 22 19) (close _V0getopt__long_k96) #\: (bruijn ##x.147 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0getopt__long_k96, env)}),
      VEncodeChar(':'),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0getopt__long_k95, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0getopt__long_k89(VEnv * env) {
 static VDebugInfo dbg = { "_V0getopt__long_k89" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0getopt__long_k89, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.136 0 0) ((bruijn caddr 21 9) (close _V0getopt__long_k90) (bruijn ass 7 1)) ((bruijn caddr 21 9) (close _V0getopt__long_k95) (bruijn ass 7 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0getopt__long_k90, env)}),
      VGetArg(env, 7, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0getopt__long_k95, env)}),
      VGetArg(env, 7, 1)
    );
}
 } else {
  VError("Not enough arguments to _V0getopt__long_k89, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0getopt__long_k88(VEnv * env) {
 static VDebugInfo dbg = { "_V0getopt__long_k88" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0getopt__long_k88, env) {
 if (env->num_vars == 1) {
  // ((bruijn pair? 20 13) (close _V0getopt__long_k89) (bruijn ##x.148 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 13)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0getopt__long_k89, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0getopt__long_k88, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0getopt__long_k83(VEnv * env) {
 static VDebugInfo dbg = { "_V0getopt__long_k83" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0getopt__long_k83, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.127 0 0) ((bruijn caddr 19 9) (close _V0getopt__long_k84) (bruijn ass 5 1)) ((bruijn cdr 19 28) (close _V0getopt__long_k88) (bruijn args 9 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0getopt__long_k84, env)}),
      VGetArg(env, 5, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0getopt__long_k88, env)}),
      VGetArg(env, 9, 1)
    );
}
 } else {
  VError("Not enough arguments to _V0getopt__long_k83, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0getopt__long_k82(VEnv * env) {
 static VDebugInfo dbg = { "_V0getopt__long_k82" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0getopt__long_k82, env) {
 if (env->num_vars == 1) {
  // ((bruijn not 18 14) (close _V0getopt__long_k83) (bruijn ##x.149 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0getopt__long_k83, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0getopt__long_k82, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0getopt__long_k77(VEnv * env) {
 static VDebugInfo dbg = { "_V0getopt__long_k77" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0getopt__long_k77, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.118 0 0) ((bruijn caddr 17 9) (close _V0getopt__long_k78) (bruijn ass 3 1)) ((bruijn equal? 17 21) (close _V0getopt__long_k82) (bruijn val 6 2) (##string ##string.306)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0getopt__long_k78, env)}),
      env->up->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 21)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0getopt__long_k82, env)}),
      VGetArg(env, 6, 2),
      VEncodePointer(&_V10string_D306.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0getopt__long_k77, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0getopt__long_k76(VEnv * env) {
 static VDebugInfo dbg = { "_V0getopt__long_k76" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0getopt__long_k76, env) {
 if (env->num_vars == 1) {
  // ((bruijn not 16 14) (close _V0getopt__long_k77) (bruijn ##x.150 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0getopt__long_k77, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0getopt__long_k76, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0getopt__long_k71(VEnv * env) {
 static VDebugInfo dbg = { "_V0getopt__long_k71" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0getopt__long_k71, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.109 0 0) ((bruijn substring 15 26) (close _V0getopt__long_k72) (bruijn arg 4 1) 2) ((bruijn cadr 15 12) (close _V0getopt__long_k76) (bruijn ass 1 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 26)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0getopt__long_k72, env)}),
      VGetArg(env, 4, 1),
      VEncodeInt(2l)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 12)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0getopt__long_k76, env)}),
      env->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0getopt__long_k71, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0getopt__long_lambda16(VEnv * env) {
 static VDebugInfo dbg = { "_V0getopt__long_lambda16" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0getopt__long_lambda16, env) {
  // ((bruijn not 14 14) (close _V0getopt__long_k71) (bruijn ass 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0getopt__long_k71, env)}),
      env->vars[1]
    );
 }
}
static void _V0getopt__long_k70(VEnv * env) {
 static VDebugInfo dbg = { "_V0getopt__long_k70" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0getopt__long_k70, env) {
 if (env->num_vars == 1) {
  // ((close _V0getopt__long_lambda16) (bruijn ##k.105 2 0) (bruijn ##x.151 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0getopt__long_lambda16, env)},
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0getopt__long_k70, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0getopt__long_k69(VEnv * env) {
 static VDebugInfo dbg = { "_V0getopt__long_k69" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0getopt__long_k69, env) {
 if (env->num_vars == 1) {
  // ((bruijn assoc 12 8) (close _V0getopt__long_k70) (bruijn ##x.152 0 0) (bruijn longs 9 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 12, 8)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0getopt__long_k70, env)}),
      env->vars[0],
      VGetArg(env, 9, 2)
    );
 } else {
  VError("Not enough arguments to _V0getopt__long_k69, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0getopt__long_lambda15(VEnv * env) {
 static VDebugInfo dbg = { "_V0getopt__long_lambda15" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0getopt__long_lambda15, env) {
 if (env->num_vars == 3) {
  // ((bruijn substring 11 26) (close _V0getopt__long_k69) (bruijn arg 0 1) 2)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 26)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0getopt__long_k69, env)}),
      env->vars[1],
      VEncodeInt(2l)
    );
 } else {
  VError("Not enough arguments to _V0getopt__long_lambda15, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0getopt__long_lambda9(VEnv * env) {
 static VDebugInfo dbg = { "_V0getopt__long_lambda9" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0getopt__long_lambda9, env) {
 if (env->num_vars == 2) {
  // ((bruijn call-with-values 10 18) (bruijn ##k.72 0 0) (close _V0getopt__long_lambda10) (close _V0getopt__long_lambda15))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 10, 18)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0getopt__long_lambda10, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0getopt__long_lambda15, env)})
    );
 } else {
  VError("Not enough arguments to _V0getopt__long_lambda9, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0getopt_k39(VEnv * env) {
 static VDebugInfo dbg = { "_V0getopt_k39" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0getopt_k39, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0getopt_k40) (bruijn getopt-long 6 5) (close _V0getopt__long_lambda9))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0getopt_k40, env)}),
      VEncodeInt(6l), VEncodeInt(5l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0getopt__long_lambda9, env)})
    );
 } else {
  VError("Not enough arguments to _V0getopt_k39, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0getopt__short_k99(VEnv * env) {
 static VDebugInfo dbg = { "_V0getopt__short_k99" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0getopt__short_k99, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 1 1) (bruijn ##k.159 1 0) 1)
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->up->vars[0],
      VEncodeInt(1l)
    );
 } else {
  VError("Not enough arguments to _V0getopt__short_k99, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k107(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k107" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k107, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 24 19) (bruijn ##k.169 5 0) (bruijn ##x.174 2 0) (bruijn ##x.175 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 19)),
      VGetArg(env, 5, 0),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k107, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k106(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k106" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k106, env) {
 if (env->num_vars == 1) {
  // ((bruijn iter 20 6) (close _V0loop_k107) (bruijn ##x.176 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 6)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k107, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k106, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k105(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k105" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k105, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 22 28) (close _V0loop_k106) (bruijn args 13 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k106, env)}),
      VGetArg(env, 13, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k105, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k104(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k104" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k104, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 21 19) (close _V0loop_k105) #\? (bruijn ##x.177 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k105, env)}),
      VEncodeChar('?'),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k104, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k116(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k116" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k116, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 29 19) (bruijn ##k.169 10 0) (bruijn ##x.183 2 0) (bruijn ##x.184 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 19)),
      VGetArg(env, 10, 0),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k116, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k115(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k115" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k115, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 14 1) (close _V0loop_k116) (bruijn ##x.185 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k116, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k115, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k114(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k114" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k114, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 27 17) (close _V0loop_k115) (bruijn i 12 1) 1)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 27, 17)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k115, env)}),
      VGetArg(env, 12, 1),
      VEncodeInt(1l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k114, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k113(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k113" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k113, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 26 19) (close _V0loop_k114) (bruijn ##x.186 0 0) #f)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k114, env)}),
      env->vars[0],
      VEncodeBool(false)
    );
 } else {
  VError("Not enough arguments to _V0loop_k113, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k125(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k125" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k125, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 34 19) (bruijn ##k.169 15 0) (bruijn ##x.192 2 0) (bruijn ##x.193 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 34, 19)),
      VGetArg(env, 15, 0),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k125, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k124(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k124" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k124, env) {
 if (env->num_vars == 1) {
  // ((bruijn iter 30 6) (close _V0loop_k125) (bruijn ##x.194 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 6)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k125, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k124, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k123(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k123" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k123, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 32 28) (close _V0loop_k124) (bruijn args 23 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 32, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k124, env)}),
      VGetArg(env, 23, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k123, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k122(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k122" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k122, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 31 19) (close _V0loop_k123) (bruijn ##x.195 2 0) (bruijn ##x.196 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 31, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k123, env)}),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k122, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k121(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k121" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k121, env) {
 if (env->num_vars == 1) {
  // ((bruijn substring 30 26) (close _V0loop_k122) (bruijn arg 19 1) (bruijn ##x.197 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 26)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k122, env)}),
      VGetArg(env, 19, 1),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k121, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k120(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k120" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k120, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 29 17) (close _V0loop_k121) (bruijn i 14 1) 1)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 17)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k121, env)}),
      VGetArg(env, 14, 1),
      VEncodeInt(1l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k120, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k130(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k130" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k130, env) {
 if (env->num_vars == 1) {
  // ((bruijn list 33 10) (bruijn ##k.169 14 0) (bruijn ##x.203 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 33, 10)),
      VGetArg(env, 14, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k130, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k129(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k129" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k129, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 32 19) (close _V0loop_k130) #\: (bruijn ##x.204 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 32, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k130, env)}),
      VEncodeChar(':'),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k129, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k135(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k135" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k135, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 36 19) (bruijn ##k.169 17 0) (bruijn ##x.207 2 0) (bruijn ##x.208 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 36, 19)),
      VGetArg(env, 17, 0),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k135, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k134(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k134" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k134, env) {
 if (env->num_vars == 1) {
  // ((bruijn iter 32 6) (close _V0loop_k135) (bruijn ##x.209 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 32, 6)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k135, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k134, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k133(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k133" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k133, env) {
 if (env->num_vars == 1) {
  // ((bruijn cddr 34 11) (close _V0loop_k134) (bruijn args 25 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 34, 11)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k134, env)}),
      VGetArg(env, 25, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k133, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k132(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k132" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k132, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 33 19) (close _V0loop_k133) (bruijn ##x.210 1 0) (bruijn ##x.211 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 33, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k133, env)}),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k132, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k131(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k131" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k131, env) {
 if (env->num_vars == 1) {
  // ((bruijn cadr 32 12) (close _V0loop_k132) (bruijn args 23 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 32, 12)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k132, env)}),
      VGetArg(env, 23, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k131, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k128(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k128" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k128, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.200 0 0) ((bruijn car 31 20) (close _V0loop_k129) (bruijn mem 12 1)) ((bruijn car 31 20) (close _V0loop_k131) (bruijn mem 12 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 31, 20)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k129, env)}),
      VGetArg(env, 12, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 31, 20)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k131, env)}),
      VGetArg(env, 12, 1)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k128, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k127(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k127" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k127, env) {
 if (env->num_vars == 1) {
  // ((bruijn not 30 14) (close _V0loop_k128) (bruijn ##x.212 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k128, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k127, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k126(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k126" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k126, env) {
 if (env->num_vars == 1) {
  // ((bruijn pair? 29 13) (close _V0loop_k127) (bruijn ##x.213 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 13)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k127, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k126, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k119(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k119" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k119, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.189 0 0) ((bruijn car 28 20) (close _V0loop_k120) (bruijn mem 9 1)) ((bruijn cdr 28 28) (close _V0loop_k126) (bruijn args 19 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 28, 20)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k120, env)}),
      VGetArg(env, 9, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 28, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k126, env)}),
      VGetArg(env, 19, 1)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k119, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k118(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k118" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k118, env) {
 if (env->num_vars == 1) {
  // ((bruijn not 27 14) (close _V0loop_k119) (bruijn ##x.214 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 27, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k119, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k118, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k117(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k117" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k117, env) {
 if (env->num_vars == 1) {
  // ((bruijn = 26 24) (close _V0loop_k118) (bruijn len 13 1) (bruijn ##x.215 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 24)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k118, env)}),
      VGetArg(env, 13, 1),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k117, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k112(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k112" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k112, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.180 0 0) ((bruijn car 25 20) (close _V0loop_k113) (bruijn mem 6 1)) ((bruijn + 25 17) (close _V0loop_k117) (bruijn i 10 1) 1))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 20)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k113, env)}),
      VGetArg(env, 6, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 17)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k117, env)}),
      VGetArg(env, 10, 1),
      VEncodeInt(1l)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k112, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k111(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k111" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k111, env) {
 if (env->num_vars == 1) {
  // ((bruijn not 24 14) (close _V0loop_k112) (bruijn ##x.219 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k112, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k111, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k110(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k110" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k110, env) {
 if (env->num_vars == 1) {
  // ((bruijn eq? 23 15) (close _V0loop_k111) (bruijn ##x.220 0 0) #\:)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 15)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k111, env)}),
      env->vars[0],
      VEncodeChar(':')
    );
 } else {
  VError("Not enough arguments to _V0loop_k110, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k140(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k140" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k140, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 27 19) (bruijn ##k.169 8 0) (bruijn ##x.183 2 0) (bruijn ##x.184 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 27, 19)),
      VGetArg(env, 8, 0),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k140, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k139(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k139" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k139, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 12 1) (close _V0loop_k140) (bruijn ##x.185 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 12, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k140, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k139, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k138(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k138" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k138, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 25 17) (close _V0loop_k139) (bruijn i 10 1) 1)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 17)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k139, env)}),
      VGetArg(env, 10, 1),
      VEncodeInt(1l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k138, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k137(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k137" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k137, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 24 19) (close _V0loop_k138) (bruijn ##x.186 0 0) #f)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k138, env)}),
      env->vars[0],
      VEncodeBool(false)
    );
 } else {
  VError("Not enough arguments to _V0loop_k137, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k149(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k149" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k149, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 32 19) (bruijn ##k.169 13 0) (bruijn ##x.192 2 0) (bruijn ##x.193 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 32, 19)),
      VGetArg(env, 13, 0),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k149, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k148(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k148" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k148, env) {
 if (env->num_vars == 1) {
  // ((bruijn iter 28 6) (close _V0loop_k149) (bruijn ##x.194 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 28, 6)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k149, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k148, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k147(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k147" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k147, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 30 28) (close _V0loop_k148) (bruijn args 21 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k148, env)}),
      VGetArg(env, 21, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k147, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k146(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k146" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k146, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 29 19) (close _V0loop_k147) (bruijn ##x.195 2 0) (bruijn ##x.196 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k147, env)}),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k146, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k145(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k145" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k145, env) {
 if (env->num_vars == 1) {
  // ((bruijn substring 28 26) (close _V0loop_k146) (bruijn arg 17 1) (bruijn ##x.197 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 28, 26)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k146, env)}),
      VGetArg(env, 17, 1),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k145, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k144(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k144" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k144, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 27 17) (close _V0loop_k145) (bruijn i 12 1) 1)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 27, 17)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k145, env)}),
      VGetArg(env, 12, 1),
      VEncodeInt(1l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k144, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k154(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k154" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k154, env) {
 if (env->num_vars == 1) {
  // ((bruijn list 31 10) (bruijn ##k.169 12 0) (bruijn ##x.203 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 31, 10)),
      VGetArg(env, 12, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k154, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k153(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k153" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k153, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 30 19) (close _V0loop_k154) #\: (bruijn ##x.204 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k154, env)}),
      VEncodeChar(':'),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k153, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k159(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k159" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k159, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 34 19) (bruijn ##k.169 15 0) (bruijn ##x.207 2 0) (bruijn ##x.208 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 34, 19)),
      VGetArg(env, 15, 0),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k159, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k158(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k158" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k158, env) {
 if (env->num_vars == 1) {
  // ((bruijn iter 30 6) (close _V0loop_k159) (bruijn ##x.209 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 6)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k159, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k158, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k157(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k157" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k157, env) {
 if (env->num_vars == 1) {
  // ((bruijn cddr 32 11) (close _V0loop_k158) (bruijn args 23 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 32, 11)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k158, env)}),
      VGetArg(env, 23, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k157, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k156(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k156" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k156, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 31 19) (close _V0loop_k157) (bruijn ##x.210 1 0) (bruijn ##x.211 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 31, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k157, env)}),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k156, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k155(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k155" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k155, env) {
 if (env->num_vars == 1) {
  // ((bruijn cadr 30 12) (close _V0loop_k156) (bruijn args 21 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 12)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k156, env)}),
      VGetArg(env, 21, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k155, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k152(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k152" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k152, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.200 0 0) ((bruijn car 29 20) (close _V0loop_k153) (bruijn mem 10 1)) ((bruijn car 29 20) (close _V0loop_k155) (bruijn mem 10 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 20)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k153, env)}),
      VGetArg(env, 10, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 20)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k155, env)}),
      VGetArg(env, 10, 1)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k152, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k151(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k151" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k151, env) {
 if (env->num_vars == 1) {
  // ((bruijn not 28 14) (close _V0loop_k152) (bruijn ##x.212 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 28, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k152, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k151, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k150(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k150" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k150, env) {
 if (env->num_vars == 1) {
  // ((bruijn pair? 27 13) (close _V0loop_k151) (bruijn ##x.213 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 27, 13)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k151, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k150, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k143(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k143" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k143, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.189 0 0) ((bruijn car 26 20) (close _V0loop_k144) (bruijn mem 7 1)) ((bruijn cdr 26 28) (close _V0loop_k150) (bruijn args 17 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 20)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k144, env)}),
      VGetArg(env, 7, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k150, env)}),
      VGetArg(env, 17, 1)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k143, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k142(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k142" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k142, env) {
 if (env->num_vars == 1) {
  // ((bruijn not 25 14) (close _V0loop_k143) (bruijn ##x.214 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k143, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k142, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k141(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k141" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k141, env) {
 if (env->num_vars == 1) {
  // ((bruijn = 24 24) (close _V0loop_k142) (bruijn len 11 1) (bruijn ##x.215 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 24)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k142, env)}),
      VGetArg(env, 11, 1),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k141, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k136(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k136" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k136, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.180 0 0) ((bruijn car 23 20) (close _V0loop_k137) (bruijn mem 4 1)) ((bruijn + 23 17) (close _V0loop_k141) (bruijn i 8 1) 1))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 20)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k137, env)}),
      VGetArg(env, 4, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 17)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k141, env)}),
      VGetArg(env, 8, 1),
      VEncodeInt(1l)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k136, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k109(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k109" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k109, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.217 0 0) ((bruijn cadr 22 12) (close _V0loop_k110) (bruijn mem 3 1)) ((bruijn not 22 14) (close _V0loop_k136) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 12)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k110, env)}),
      env->up->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k136, env)}),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k109, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k108(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k108" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k108, env) {
 if (env->num_vars == 1) {
  // ((bruijn pair? 21 13) (close _V0loop_k109) (bruijn ##x.221 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 13)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k109, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k108, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k103(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k103" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k103, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.171 0 0) ((bruijn substring 20 26) (close _V0loop_k104) (bruijn arg 9 1) (bruijn i 5 1)) ((bruijn cdr 20 28) (close _V0loop_k108) (bruijn mem 1 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 26)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k104, env)}),
      VGetArg(env, 9, 1),
      VGetArg(env, 5, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k108, env)}),
      env->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k103, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda22(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda22" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda22, env) {
  // ((bruijn not 19 14) (close _V0loop_k103) (bruijn mem 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k103, env)}),
      env->vars[1]
    );
 }
}
static void _V0loop_k102(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k102" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k102, env) {
 if (env->num_vars == 1) {
  // ((close _V0loop_lambda22) (bruijn ##k.164 3 0) (bruijn ##x.222 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda22, env)},
      env->up->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k102, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k101(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k101" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k101, env) {
 if (env->num_vars == 1) {
  // ((bruijn memq 17 7) (close _V0loop_k102) (bruijn ##x.223 0 0) (bruijn opts 8 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k102, env)}),
      env->vars[0],
      VGetArg(env, 8, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k101, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k160(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k160" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k160, env) {
 if (env->num_vars == 1) {
  // ((bruijn iter 14 6) (bruijn ##k.164 2 0) (bruijn ##x.226 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 6)),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k160, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k100(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k100" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k100, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.166 0 0) ((bruijn string-ref 16 22) (close _V0loop_k101) (bruijn arg 5 1) (bruijn i 1 1)) ((bruijn cdr 16 28) (close _V0loop_k160) (bruijn args 7 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 22)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k101, env)}),
      VGetArg(env, 5, 1),
      env->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k160, env)}),
      VGetArg(env, 7, 1)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k100, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda21(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda21" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda21, env) {
 if (env->num_vars == 2) {
  // ((bruijn < 15 6) (close _V0loop_k100) (bruijn i 0 1) (bruijn len 2 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 6)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k100, env)}),
      env->vars[1],
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda21, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0getopt__short_lambda20(VEnv * env) {
 static VDebugInfo dbg = { "_V0getopt__short_lambda20" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0getopt__short_lambda20, env) {
  // (set! (close _V0getopt__short_k99) (bruijn loop 0 1) (close _V0loop_lambda21))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0getopt__short_k99, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda21, env)})
    );
 }
}
static void _V0getopt__short_lambda19(VEnv * env) {
 static VDebugInfo dbg = { "_V0getopt__short_lambda19" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0getopt__short_lambda19, env) {
  // ((close _V0getopt__short_lambda20) (bruijn ##k.157 0 0) #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0getopt__short_lambda20, env)},
      env->vars[0],
      VEncodeBool(false)
    );
 }
}
static void _V0getopt__short_k98(VEnv * env) {
 static VDebugInfo dbg = { "_V0getopt__short_k98" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0getopt__short_k98, env) {
 if (env->num_vars == 1) {
  // ((close _V0getopt__short_lambda19) (bruijn ##k.155 1 0) (bruijn ##x.227 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0getopt__short_lambda19, env)},
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0getopt__short_k98, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0getopt__short_lambda18(VEnv * env) {
 static VDebugInfo dbg = { "_V0getopt__short_lambda18" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0getopt__short_lambda18, env) {
  // ((bruijn string-length 11 25) (close _V0getopt__short_k98) (bruijn arg 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 25)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0getopt__short_k98, env)}),
      env->vars[1]
    );
 }
}
static void _V0getopt__short_k97(VEnv * env) {
 static VDebugInfo dbg = { "_V0getopt__short_k97" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0getopt__short_k97, env) {
 if (env->num_vars == 1) {
  // ((close _V0getopt__short_lambda18) (bruijn ##k.153 1 0) (bruijn ##x.228 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0getopt__short_lambda18, env)},
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0getopt__short_k97, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0getopt__short_lambda17(VEnv * env) {
 static VDebugInfo dbg = { "_V0getopt__short_lambda17" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0getopt__short_lambda17, env) {
 if (env->num_vars == 3) {
  // ((bruijn car 9 20) (close _V0getopt__short_k97) (bruijn args 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 20)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0getopt__short_k97, env)}),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0getopt__short_lambda17, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0getopt_k38(VEnv * env) {
 static VDebugInfo dbg = { "_V0getopt_k38" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0getopt_k38, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0getopt_k39) (bruijn getopt-short 5 4) (close _V0getopt__short_lambda17))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0getopt_k39, env)}),
      VEncodeInt(5l), VEncodeInt(4l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0getopt__short_lambda17, env)})
    );
 } else {
  VError("Not enough arguments to _V0getopt_k38, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0getopt_k37(VEnv * env) {
 static VDebugInfo dbg = { "_V0getopt_k37" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0getopt_k37, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0getopt_k38) (bruijn opts 4 3) (bruijn ##x.229 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0getopt_k38, env)}),
      VEncodeInt(4l), VEncodeInt(3l),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0getopt_k37, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0getopt_k36(VEnv * env) {
 static VDebugInfo dbg = { "_V0getopt_k36" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0getopt_k36, env) {
 if (env->num_vars == 1) {
  // ((bruijn string->list 6 5) (close _V0getopt_k37) (bruijn optstring 4 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0getopt_k37, env)}),
      VGetArg(env, 4, 1)
    );
 } else {
  VError("Not enough arguments to _V0getopt_k36, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0getopt_k35(VEnv * env) {
 static VDebugInfo dbg = { "_V0getopt_k35" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0getopt_k35, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0getopt_k36) (bruijn longs 2 2) (bruijn ##x.230 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0getopt_k36, env)}),
      VEncodeInt(2l), VEncodeInt(2l),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0getopt_k35, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0getopt_k34(VEnv * env) {
 static VDebugInfo dbg = { "_V0getopt_k34" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0getopt_k34, env) {
 if (env->num_vars == 1) {
  // ((bruijn map 4 23) (close _V0getopt_k35) (bruijn decode-longopt 1 1) (bruijn longopts 2 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 23)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0getopt_k35, env)}),
      env->up->vars[1],
      env->up->up->vars[3]
    );
 } else {
  VError("Not enough arguments to _V0getopt_k34, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0decode__longopt_k162(VEnv * env) {
 static VDebugInfo dbg = { "_V0decode__longopt_k162" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0decode__longopt_k162, env) {
 if (env->num_vars == 1) {
  // ((bruijn decode-longopt 3 1) (bruijn ##k.231 2 0) (bruijn ##x.236 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[1]),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0decode__longopt_k162, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0decode__longopt_k168(VEnv * env) {
 static VDebugInfo dbg = { "_V0decode__longopt_k168" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0decode__longopt_k168, env) {
 if (env->num_vars == 1) {
  // ((bruijn decode-longopt 8 1) (bruijn ##k.231 7 0) (bruijn ##x.242 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 1)),
      VGetArg(env, 7, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0decode__longopt_k168, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0decode__longopt_k167(VEnv * env) {
 static VDebugInfo dbg = { "_V0decode__longopt_k167" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0decode__longopt_k167, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 10 19) (close _V0decode__longopt_k168) (bruijn ##x.243 1 0) (bruijn ##x.244 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 10, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0decode__longopt_k168, env)}),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0decode__longopt_k167, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0decode__longopt_k166(VEnv * env) {
 static VDebugInfo dbg = { "_V0decode__longopt_k166" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0decode__longopt_k166, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 9 28) (close _V0decode__longopt_k167) (bruijn longopt 5 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0decode__longopt_k167, env)}),
      VGetArg(env, 5, 1)
    );
 } else {
  VError("Not enough arguments to _V0decode__longopt_k166, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0decode__longopt_k165(VEnv * env) {
 static VDebugInfo dbg = { "_V0decode__longopt_k165" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0decode__longopt_k165, env) {
 if (env->num_vars == 1) {
  // ((bruijn symbol->string 8 3) (close _V0decode__longopt_k166) (bruijn ##x.245 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 3)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0decode__longopt_k166, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0decode__longopt_k165, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0decode__longopt_k174(VEnv * env) {
 static VDebugInfo dbg = { "_V0decode__longopt_k174" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0decode__longopt_k174, env) {
 if (env->num_vars == 1) {
  // ((bruijn list 13 10) (bruijn ##k.231 9 0) (bruijn ##x.256 2 0) #f (bruijn ##x.257 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 10)),
      VGetArg(env, 9, 0),
      env->up->up->vars[0],
      VEncodeBool(false),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0decode__longopt_k174, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0decode__longopt_k173(VEnv * env) {
 static VDebugInfo dbg = { "_V0decode__longopt_k173" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0decode__longopt_k173, env) {
 if (env->num_vars == 1) {
  // ((bruijn string->symbol 12 1) (close _V0decode__longopt_k174) (bruijn ##x.258 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 12, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0decode__longopt_k174, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0decode__longopt_k173, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0decode__longopt_k172(VEnv * env) {
 static VDebugInfo dbg = { "_V0decode__longopt_k172" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0decode__longopt_k172, env) {
 if (env->num_vars == 1) {
  // ((bruijn car 11 20) (close _V0decode__longopt_k173) (bruijn longopt 7 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 20)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0decode__longopt_k173, env)}),
      VGetArg(env, 7, 1)
    );
 } else {
  VError("Not enough arguments to _V0decode__longopt_k172, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0decode__longopt_k180(VEnv * env) {
 static VDebugInfo dbg = { "_V0decode__longopt_k180" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0decode__longopt_k180, env) {
 if (env->num_vars == 1) {
  // ((bruijn list 16 10) (bruijn ##k.231 12 0) (bruijn ##x.264 3 0) (bruijn ##x.265 2 0) (bruijn ##x.266 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 10)),
      VGetArg(env, 12, 0),
      env->up->up->up->vars[0],
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0decode__longopt_k180, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0decode__longopt_k179(VEnv * env) {
 static VDebugInfo dbg = { "_V0decode__longopt_k179" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0decode__longopt_k179, env) {
 if (env->num_vars == 1) {
  // ((bruijn string->symbol 15 1) (close _V0decode__longopt_k180) (bruijn ##x.267 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0decode__longopt_k180, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0decode__longopt_k179, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0decode__longopt_k178(VEnv * env) {
 static VDebugInfo dbg = { "_V0decode__longopt_k178" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0decode__longopt_k178, env) {
 if (env->num_vars == 1) {
  // ((bruijn car 14 20) (close _V0decode__longopt_k179) (bruijn longopt 10 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 20)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0decode__longopt_k179, env)}),
      VGetArg(env, 10, 1)
    );
 } else {
  VError("Not enough arguments to _V0decode__longopt_k178, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0decode__longopt_k177(VEnv * env) {
 static VDebugInfo dbg = { "_V0decode__longopt_k177" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0decode__longopt_k177, env) {
 if (env->num_vars == 1) {
  // ((bruijn cadr 13 12) (close _V0decode__longopt_k178) (bruijn longopt 9 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 12)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0decode__longopt_k178, env)}),
      VGetArg(env, 9, 1)
    );
 } else {
  VError("Not enough arguments to _V0decode__longopt_k177, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0decode__longopt_k176(VEnv * env) {
 static VDebugInfo dbg = { "_V0decode__longopt_k176" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0decode__longopt_k176, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.261 0 0) ((bruijn car 12 20) (close _V0decode__longopt_k177) (bruijn longopt 8 1)) ((bruijn ##k.231 8 0) (bruijn longopt 8 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 12, 20)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0decode__longopt_k177, env)}),
      VGetArg(env, 8, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 0)),
      VGetArg(env, 8, 1)
    );
}
 } else {
  VError("Not enough arguments to _V0decode__longopt_k176, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0decode__longopt_k175(VEnv * env) {
 static VDebugInfo dbg = { "_V0decode__longopt_k175" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0decode__longopt_k175, env) {
 if (env->num_vars == 1) {
  // ((bruijn null? 11 27) (close _V0decode__longopt_k176) (bruijn ##x.270 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 27)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0decode__longopt_k176, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0decode__longopt_k175, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0decode__longopt_k171(VEnv * env) {
 static VDebugInfo dbg = { "_V0decode__longopt_k171" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0decode__longopt_k171, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.253 0 0) ((bruijn car 10 20) (close _V0decode__longopt_k172) (bruijn longopt 6 1)) ((bruijn cddr 10 11) (close _V0decode__longopt_k175) (bruijn longopt 6 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 10, 20)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0decode__longopt_k172, env)}),
      VGetArg(env, 6, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 10, 11)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0decode__longopt_k175, env)}),
      VGetArg(env, 6, 1)
    );
}
 } else {
  VError("Not enough arguments to _V0decode__longopt_k171, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0decode__longopt_k170(VEnv * env) {
 static VDebugInfo dbg = { "_V0decode__longopt_k170" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0decode__longopt_k170, env) {
 if (env->num_vars == 1) {
  // ((bruijn null? 9 27) (close _V0decode__longopt_k171) (bruijn ##x.271 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 27)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0decode__longopt_k171, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0decode__longopt_k170, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0decode__longopt_k169(VEnv * env) {
 static VDebugInfo dbg = { "_V0decode__longopt_k169" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0decode__longopt_k169, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.248 0 0) ((bruijn list 8 10) (bruijn ##k.231 4 0) (bruijn longopt 4 1) #f (bruijn longopt 4 1)) ((bruijn cdr 8 28) (close _V0decode__longopt_k170) (bruijn longopt 4 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 10)),
      VGetArg(env, 4, 0),
      VGetArg(env, 4, 1),
      VEncodeBool(false),
      VGetArg(env, 4, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0decode__longopt_k170, env)}),
      VGetArg(env, 4, 1)
    );
}
 } else {
  VError("Not enough arguments to _V0decode__longopt_k169, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0decode__longopt_k164(VEnv * env) {
 static VDebugInfo dbg = { "_V0decode__longopt_k164" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0decode__longopt_k164, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.239 0 0) ((bruijn car 7 20) (close _V0decode__longopt_k165) (bruijn longopt 3 1)) ((bruijn string? 7 2) (close _V0decode__longopt_k169) (bruijn longopt 3 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 20)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0decode__longopt_k165, env)}),
      env->up->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0decode__longopt_k169, env)}),
      env->up->up->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0decode__longopt_k164, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0decode__longopt_k163(VEnv * env) {
 static VDebugInfo dbg = { "_V0decode__longopt_k163" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0decode__longopt_k163, env) {
 if (env->num_vars == 1) {
  // ((bruijn symbol? 6 4) (close _V0decode__longopt_k164) (bruijn ##x.272 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 4)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0decode__longopt_k164, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0decode__longopt_k163, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0decode__longopt_k161(VEnv * env) {
 static VDebugInfo dbg = { "_V0decode__longopt_k161" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0decode__longopt_k161, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.233 0 0) ((bruijn symbol->string 5 3) (close _V0decode__longopt_k162) (bruijn longopt 1 1)) ((bruijn car 5 20) (close _V0decode__longopt_k163) (bruijn longopt 1 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 5, 3)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0decode__longopt_k162, env)}),
      env->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 5, 20)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0decode__longopt_k163, env)}),
      env->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0decode__longopt_k161, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0decode__longopt_lambda23(VEnv * env) {
 static VDebugInfo dbg = { "_V0decode__longopt_lambda23" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0decode__longopt_lambda23, env) {
 if (env->num_vars == 2) {
  // ((bruijn symbol? 4 4) (close _V0decode__longopt_k161) (bruijn longopt 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 4)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0decode__longopt_k161, env)}),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0decode__longopt_lambda23, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0getopt_lambda6(VEnv * env) {
 static VDebugInfo dbg = { "_V0getopt_lambda6" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0getopt_lambda6, env) {
  // (set! (close _V0getopt_k34) (bruijn decode-longopt 0 1) (close _V0decode__longopt_lambda23))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0getopt_k34, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0decode__longopt_lambda23, env)})
    );
 }
}
static void _V0getopt_lambda5(VEnv * env) {
 static VDebugInfo dbg = { "_V0getopt_lambda5" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0getopt_lambda5, env) {
 if (env->num_vars == 4) {
  // ((close _V0getopt_lambda6) (bruijn ##k.14 0 0) #f #f #f #f #f #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0getopt_lambda6, env)},
      env->vars[0],
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false)
    );
 } else {
  VError("Not enough arguments to _V0getopt_lambda5, got ~D~N"
  "-- expected 4~N"
  , env->num_vars);
 }
 }
}
static void getopt_lambda4(VEnv * env) {
 static VDebugInfo dbg = { "getopt_lambda4" };
 VRecordCall(&dbg);
 V_GC_CHECK(getopt_lambda4, env) {
  // (set! (close getopt_k33) (bruijn getopt 0 1) (close _V0getopt_lambda5))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(getopt_k33, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0getopt_lambda5, env)})
    );
 }
}
static void getopt_lambda3(VEnv * env) {
 static VDebugInfo dbg = { "getopt_lambda3" };
 VRecordCall(&dbg);
 V_GC_CHECK(getopt_lambda3, env) {
  // ((close getopt_lambda4) (bruijn ##k.6 0 0) #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(getopt_lambda4, env)},
      env->vars[0],
      VEncodeBool(false)
    );
 }
}
static void getopt_k32(VEnv * env) {
 static VDebugInfo dbg = { "getopt_k32" };
 VRecordCall(&dbg);
 V_GC_CHECK(getopt_k32, env) {
 if (env->num_vars == 1) {
  // ((close getopt_lambda3) (bruijn ##k.4 28 0) (bruijn ##x.273 27 0) (bruijn ##x.274 26 0) (bruijn ##x.275 25 0) (bruijn ##x.276 24 0) (bruijn ##x.277 23 0) (bruijn ##x.278 22 0) (bruijn ##x.279 21 0) (bruijn ##x.280 20 0) (bruijn ##x.281 19 0) (bruijn ##x.282 18 0) (bruijn ##x.283 17 0) (bruijn ##x.284 16 0) (bruijn ##x.285 15 0) (bruijn ##x.286 14 0) (bruijn ##x.287 13 0) (bruijn ##x.288 12 0) (bruijn ##x.289 11 0) (bruijn ##x.290 10 0) (bruijn ##x.291 9 0) (bruijn ##x.292 8 0) (bruijn ##x.293 7 0) (bruijn ##x.294 6 0) (bruijn ##x.295 5 0) (bruijn ##x.296 4 0) (bruijn ##x.297 3 0) (bruijn ##x.298 2 0) (bruijn ##x.299 1 0) (bruijn ##x.300 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(getopt_lambda3, env)},
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
  VError("Not enough arguments to getopt_k32, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void getopt_k31(VEnv * env) {
 static VDebugInfo dbg = { "getopt_k31" };
 VRecordCall(&dbg);
 V_GC_CHECK(getopt_k31, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 27 1) (close getopt_k32) (quote cdr))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 27, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(getopt_k32, env)}),
      VEncodePointer(&_V0cdr.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to getopt_k31, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void getopt_k30(VEnv * env) {
 static VDebugInfo dbg = { "getopt_k30" };
 VRecordCall(&dbg);
 V_GC_CHECK(getopt_k30, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 26 1) (close getopt_k31) (quote null?))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(getopt_k31, env)}),
      VEncodePointer(&_V0null_Q.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to getopt_k30, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void getopt_k29(VEnv * env) {
 static VDebugInfo dbg = { "getopt_k29" };
 VRecordCall(&dbg);
 V_GC_CHECK(getopt_k29, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 25 1) (close getopt_k30) (quote substring))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(getopt_k30, env)}),
      VEncodePointer(&_V0substring.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to getopt_k29, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void getopt_k28(VEnv * env) {
 static VDebugInfo dbg = { "getopt_k28" };
 VRecordCall(&dbg);
 V_GC_CHECK(getopt_k28, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 24 1) (close getopt_k29) (quote string-length))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(getopt_k29, env)}),
      VEncodePointer(&_V0string__length.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to getopt_k28, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void getopt_k27(VEnv * env) {
 static VDebugInfo dbg = { "getopt_k27" };
 VRecordCall(&dbg);
 V_GC_CHECK(getopt_k27, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 23 1) (close getopt_k28) (quote =))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(getopt_k28, env)}),
      VEncodePointer(&_V0_E.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to getopt_k27, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void getopt_k26(VEnv * env) {
 static VDebugInfo dbg = { "getopt_k26" };
 VRecordCall(&dbg);
 V_GC_CHECK(getopt_k26, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 22 1) (close getopt_k27) (quote map))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(getopt_k27, env)}),
      VEncodePointer(&_V0map.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to getopt_k26, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void getopt_k25(VEnv * env) {
 static VDebugInfo dbg = { "getopt_k25" };
 VRecordCall(&dbg);
 V_GC_CHECK(getopt_k25, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 21 1) (close getopt_k26) (quote string-ref))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(getopt_k26, env)}),
      VEncodePointer(&_V0string__ref.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to getopt_k25, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void getopt_k24(VEnv * env) {
 static VDebugInfo dbg = { "getopt_k24" };
 VRecordCall(&dbg);
 V_GC_CHECK(getopt_k24, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 20 1) (close getopt_k25) (quote equal?))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(getopt_k25, env)}),
      VEncodePointer(&_V0equal_Q.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to getopt_k24, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void getopt_k23(VEnv * env) {
 static VDebugInfo dbg = { "getopt_k23" };
 VRecordCall(&dbg);
 V_GC_CHECK(getopt_k23, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 19 1) (close getopt_k24) (quote car))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(getopt_k24, env)}),
      VEncodePointer(&_V0car.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to getopt_k23, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void getopt_k22(VEnv * env) {
 static VDebugInfo dbg = { "getopt_k22" };
 VRecordCall(&dbg);
 V_GC_CHECK(getopt_k22, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 18 1) (close getopt_k23) (quote cons))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(getopt_k23, env)}),
      VEncodePointer(&_V0cons.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to getopt_k22, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void getopt_k21(VEnv * env) {
 static VDebugInfo dbg = { "getopt_k21" };
 VRecordCall(&dbg);
 V_GC_CHECK(getopt_k21, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 17 1) (close getopt_k22) (quote call-with-values))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(getopt_k22, env)}),
      VEncodePointer(&_V0call__with__values.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to getopt_k21, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void getopt_k20(VEnv * env) {
 static VDebugInfo dbg = { "getopt_k20" };
 VRecordCall(&dbg);
 V_GC_CHECK(getopt_k20, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 16 1) (close getopt_k21) (quote +))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(getopt_k21, env)}),
      VEncodePointer(&_V0_P.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to getopt_k20, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void getopt_k19(VEnv * env) {
 static VDebugInfo dbg = { "getopt_k19" };
 VRecordCall(&dbg);
 V_GC_CHECK(getopt_k19, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 15 1) (close getopt_k20) (quote values))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(getopt_k20, env)}),
      VEncodePointer(&_V0values.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to getopt_k19, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void getopt_k18(VEnv * env) {
 static VDebugInfo dbg = { "getopt_k18" };
 VRecordCall(&dbg);
 V_GC_CHECK(getopt_k18, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 14 1) (close getopt_k19) (quote eq?))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(getopt_k19, env)}),
      VEncodePointer(&_V0eq_Q.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to getopt_k18, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void getopt_k17(VEnv * env) {
 static VDebugInfo dbg = { "getopt_k17" };
 VRecordCall(&dbg);
 V_GC_CHECK(getopt_k17, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 13 1) (close getopt_k18) (quote not))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(getopt_k18, env)}),
      VEncodePointer(&_V0not.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to getopt_k17, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void getopt_k16(VEnv * env) {
 static VDebugInfo dbg = { "getopt_k16" };
 VRecordCall(&dbg);
 V_GC_CHECK(getopt_k16, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 12 1) (close getopt_k17) (quote pair?))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 12, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(getopt_k17, env)}),
      VEncodePointer(&_V0pair_Q.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to getopt_k16, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void getopt_k15(VEnv * env) {
 static VDebugInfo dbg = { "getopt_k15" };
 VRecordCall(&dbg);
 V_GC_CHECK(getopt_k15, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 11 1) (close getopt_k16) (quote cadr))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(getopt_k16, env)}),
      VEncodePointer(&_V0cadr.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to getopt_k15, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void getopt_k14(VEnv * env) {
 static VDebugInfo dbg = { "getopt_k14" };
 VRecordCall(&dbg);
 V_GC_CHECK(getopt_k14, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 10 1) (close getopt_k15) (quote cddr))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 10, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(getopt_k15, env)}),
      VEncodePointer(&_V0cddr.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to getopt_k14, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void getopt_k13(VEnv * env) {
 static VDebugInfo dbg = { "getopt_k13" };
 VRecordCall(&dbg);
 V_GC_CHECK(getopt_k13, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 9 1) (close getopt_k14) (quote list))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(getopt_k14, env)}),
      VEncodePointer(&_V0list.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to getopt_k13, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void getopt_k12(VEnv * env) {
 static VDebugInfo dbg = { "getopt_k12" };
 VRecordCall(&dbg);
 V_GC_CHECK(getopt_k12, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 8 1) (close getopt_k13) (quote caddr))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(getopt_k13, env)}),
      VEncodePointer(&_V0caddr.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to getopt_k12, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void getopt_k11(VEnv * env) {
 static VDebugInfo dbg = { "getopt_k11" };
 VRecordCall(&dbg);
 V_GC_CHECK(getopt_k11, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 7 1) (close getopt_k12) (quote assoc))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(getopt_k12, env)}),
      VEncodePointer(&_V0assoc.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to getopt_k11, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void getopt_k10(VEnv * env) {
 static VDebugInfo dbg = { "getopt_k10" };
 VRecordCall(&dbg);
 V_GC_CHECK(getopt_k10, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 6 1) (close getopt_k11) (quote memq))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(getopt_k11, env)}),
      VEncodePointer(&_V0memq.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to getopt_k10, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void getopt_k9(VEnv * env) {
 static VDebugInfo dbg = { "getopt_k9" };
 VRecordCall(&dbg);
 V_GC_CHECK(getopt_k9, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 5 1) (close getopt_k10) (quote <))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 5, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(getopt_k10, env)}),
      VEncodePointer(&_V0_L.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to getopt_k9, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void getopt_k8(VEnv * env) {
 static VDebugInfo dbg = { "getopt_k8" };
 VRecordCall(&dbg);
 V_GC_CHECK(getopt_k8, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 4 1) (close getopt_k9) (quote string->list))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(getopt_k9, env)}),
      VEncodePointer(&_V0string___Glist.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to getopt_k8, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void getopt_k7(VEnv * env) {
 static VDebugInfo dbg = { "getopt_k7" };
 VRecordCall(&dbg);
 V_GC_CHECK(getopt_k7, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 3 1) (close getopt_k8) (quote symbol?))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[1]),
      VEncodeClosure((VClosure[]){VMakeClosure(getopt_k8, env)}),
      VEncodePointer(&_V0symbol_Q.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to getopt_k7, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void getopt_k6(VEnv * env) {
 static VDebugInfo dbg = { "getopt_k6" };
 VRecordCall(&dbg);
 V_GC_CHECK(getopt_k6, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 2 1) (close getopt_k7) (quote symbol->string))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->vars[1]),
      VEncodeClosure((VClosure[]){VMakeClosure(getopt_k7, env)}),
      VEncodePointer(&_V0symbol___Gstring.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to getopt_k6, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void getopt_k5(VEnv * env) {
 static VDebugInfo dbg = { "getopt_k5" };
 VRecordCall(&dbg);
 V_GC_CHECK(getopt_k5, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 1 1) (close getopt_k6) (quote string?))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      VEncodeClosure((VClosure[]){VMakeClosure(getopt_k6, env)}),
      VEncodePointer(&_V0string_Q.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to getopt_k5, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void getopt_lambda2(VEnv * env) {
 static VDebugInfo dbg = { "getopt_lambda2" };
 VRecordCall(&dbg);
 V_GC_CHECK(getopt_lambda2, env) {
  // ((bruijn ##vcore.import 0 1) (close getopt_k5) (quote string->symbol))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[1]),
      VEncodeClosure((VClosure[]){VMakeClosure(getopt_k5, env)}),
      VEncodePointer(&_V0string___Gsymbol.sym, VPOINTER_OTHER)
    );
 }
}
static void getopt_k4(VEnv * env) {
 static VDebugInfo dbg = { "getopt_k4" };
 VRecordCall(&dbg);
 V_GC_CHECK(getopt_k4, env) {
 if (env->num_vars == 1) {
  // ((close getopt_lambda2) (bruijn ##k.2 4 0) (bruijn ##x.301 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(getopt_lambda2, env)},
      VGetArg(env, 4, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to getopt_k4, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void getopt_k3(VEnv * env) {
 static VDebugInfo dbg = { "getopt_k3" };
 VRecordCall(&dbg);
 V_GC_CHECK(getopt_k3, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##x.302 2 0) (close getopt_k4) (##string ##string.307) (bruijn ##x.303 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->vars[0]),
      VEncodeClosure((VClosure[]){VMakeClosure(getopt_k4, env)}),
      VEncodePointer(&_V10string_D307.sym, VPOINTER_OTHER),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to getopt_k3, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void getopt_k2(VEnv * env) {
 static VDebugInfo dbg = { "getopt_k2" };
 VRecordCall(&dbg);
 V_GC_CHECK(getopt_k2, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##x.304 0 0) (close getopt_k3) (##string ##string.308))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeClosure((VClosure[]){VMakeClosure(getopt_k3, env)}),
      VEncodePointer(&_V10string_D308.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to getopt_k2, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void getopt_k1(VEnv * env) {
 static VDebugInfo dbg = { "getopt_k1" };
 VRecordCall(&dbg);
 V_GC_CHECK(getopt_k1, env) {
 if (env->num_vars == 1) {
  // (##vcore.function (close getopt_k2) (##string ##string.309))
    V_CALL_FUNC(VFunction,
      VEncodeClosure((VClosure[]){VMakeClosure(getopt_k2, env)}),
      VEncodePointer(&_V10string_D309.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to getopt_k1, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void getopt_lambda1(VEnv * env) {
 static VDebugInfo dbg = { "getopt_lambda1" };
 VRecordCall(&dbg);
 V_GC_CHECK(getopt_lambda1, env) {
 if (env->num_vars == 1) {
  // (##vcore.function (close getopt_k1) (##string ##string.310))
    V_CALL_FUNC(VFunction,
      VEncodeClosure((VClosure[]){VMakeClosure(getopt_k1, env)}),
      VEncodePointer(&_V10string_D310.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to getopt_lambda1, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
void (*getopt)(VEnv*) = getopt_lambda1;
