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
static struct { VBlob sym; char bytes[21]; } _V10string_D1666 = { { VSTRING, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[6]; } _V10string_D1665 = { { VSTRING, 6 }, "utils" };
static struct { VBlob sym; char bytes[6]; } _V10string_D1664 = { { VSTRING, 6 }, "match" };
static struct { VBlob sym; char bytes[10]; } _V10string_D1663 = { { VSTRING, 10 }, "variables" };
static struct { VBlob sym; char bytes[4]; } _V10string_D1662 = { { VSTRING, 4 }, "cps" };
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
static struct { VBlob sym; char bytes[3]; } _V0_L_E = { { VSYMBOL, 3 }, "<=" };
static struct { VBlob sym; char bytes[7]; } _V0length = { { VSYMBOL, 7 }, "length" };
static struct { VBlob sym; char bytes[6]; } _V0pair_Q = { { VSYMBOL, 6 }, "pair\?" };
static struct { VBlob sym; char bytes[4]; } _V0cdr = { { VSYMBOL, 4 }, "cdr" };
static struct { VBlob sym; char bytes[2]; } _V0_P = { { VSYMBOL, 2 }, "+" };
static struct { VBlob sym; char bytes[6]; } _V0atom_Q = { { VSYMBOL, 6 }, "atom\?" };
static struct { VBlob sym; char bytes[4]; } _V0car = { { VSYMBOL, 4 }, "car" };
static struct { VBlob sym; char bytes[5]; } _V0eqv_Q = { { VSYMBOL, 5 }, "eqv\?" };
static struct { VBlob sym; char bytes[5]; } _V0fold = { { VSYMBOL, 5 }, "fold" };
static struct { VBlob sym; char bytes[15]; } _V0symbol___Gstring = { { VSYMBOL, 15 }, "symbol->string" };
static struct { VBlob sym; char bytes[10]; } _V0substring = { { VSYMBOL, 10 }, "substring" };
static struct { VBlob sym; char bytes[15]; } _V0string___Gsymbol = { { VSYMBOL, 15 }, "string->symbol" };
static struct { VBlob sym; char bytes[4]; } _V0eq_Q = { { VSYMBOL, 4 }, "eq\?" };
static struct { VBlob sym; char bytes[11]; } _V0string__ref = { { VSYMBOL, 11 }, "string-ref" };
static struct { VBlob sym; char bytes[7]; } _V0gensym = { { VSYMBOL, 7 }, "gensym" };
static struct { VBlob sym; char bytes[6]; } _V0null_Q = { { VSYMBOL, 6 }, "null\?" };
static struct { VBlob sym; char bytes[6]; } _V0apply = { { VSYMBOL, 6 }, "apply" };
static struct { VBlob sym; char bytes[5]; } _V0memv = { { VSYMBOL, 5 }, "memv" };
static struct { VBlob sym; char bytes[5]; } _V0cadr = { { VSYMBOL, 5 }, "cadr" };
static struct { VBlob sym; char bytes[2]; } _V10string_D1661 = { { VSTRING, 2 }, "k" };
static struct { VBlob sym; char bytes[20]; } _V10string_D1660 = { { VSTRING, 20 }, "stray () in program" };
static struct { VBlob sym; char bytes[2]; } _V10string_D1659 = { { VSTRING, 2 }, "x" };
static struct { VBlob sym; char bytes[3]; } _V0or = { { VSYMBOL, 3 }, "or" };
static struct { VBlob sym; char bytes[2]; } _V10string_D1658 = { { VSTRING, 2 }, "p" };
static struct { VBlob sym; char bytes[6]; } _V0begin = { { VSYMBOL, 6 }, "begin" };
static struct { VBlob sym; char bytes[8]; } _V10string_D1657 = { { VSTRING, 8 }, "ignored" };
static struct { VBlob sym; char bytes[11]; } _V10sys_Dnext = { { VSYMBOL, 11 }, "##sys.next" };
static struct { VBlob sym; char bytes[5]; } _V0set_B = { { VSYMBOL, 5 }, "set!" };
static struct { VBlob sym; char bytes[51]; } _V10string_D1656 = { { VSTRING, 51 }, "Not enough arguments to continuation. Codegen bug." };
static struct { VBlob sym; char bytes[31]; } _V10string_D1655 = { { VSTRING, 31 }, "Not enough arguments to lambda" };
static struct { VBlob sym; char bytes[17]; } _V10string_D1654 = { { VSTRING, 17 }, "no matching case" };
static struct { VBlob sym; char bytes[33]; } _V10string_D1653 = { { VSTRING, 33 }, "failed to inline begin statement" };
static struct { VBlob sym; char bytes[31]; } _V10string_D1652 = { { VSTRING, 31 }, "failed to inline and statement" };
static struct { VBlob sym; char bytes[30]; } _V10string_D1651 = { { VSTRING, 30 }, "failed to inline or statement" };
static struct { VBlob sym; char bytes[30]; } _V10string_D1650 = { { VSTRING, 30 }, "failed to inline if statement" };
static struct { VBlob sym; char bytes[9]; } _V10sys_Dor = { { VSYMBOL, 9 }, "##sys.or" };
static struct { VBlob sym; char bytes[51]; } _V10string_D1649 = { { VSTRING, 51 }, "failed to inline or statement because of refcounts" };
static struct { VBlob sym; char bytes[10]; } _V10sys_Dand = { { VSYMBOL, 10 }, "##sys.and" };
static struct { VBlob sym; char bytes[52]; } _V10string_D1648 = { { VSTRING, 52 }, "failed to inline and statement because of refcounts" };
static struct { VBlob sym; char bytes[12]; } _V10sys_Dbegin = { { VSYMBOL, 12 }, "##sys.begin" };
static struct { VBlob sym; char bytes[54]; } _V10string_D1647 = { { VSTRING, 54 }, "failed to inline begin statement because of refcounts" };
static struct { VBlob sym; char bytes[9]; } _V10sys_Dif = { { VSYMBOL, 9 }, "##sys.if" };
static struct { VBlob sym; char bytes[51]; } _V10string_D1646 = { { VSTRING, 51 }, "failed to inline if statement because of refcounts" };
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
static void cps_k55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "cps_k55" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to cps_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)cps_k55, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.224 20 0) (##inline ##sys.cons (##inline ##sys.cons (quote to-cps) (bruijn to-cps 20 1)) (##inline ##sys.cons (##inline ##sys.cons (quote optimize) (bruijn optimize 20 20)) (##inline ##sys.cons (##inline ##sys.cons (quote alpha-convert) (bruijn alpha-convert 20 11)) (##inline ##sys.cons (##inline ##sys.cons (quote annotate-lambdas) (bruijn annotate-lambdas 20 3)) (##inline ##sys.cons (##inline ##sys.cons (quote deannotate-lambdas) (bruijn deannotate-lambdas 20 4)) (quote ())))))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 20-1, 0)), runtime,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0to__cps.sym, VPOINTER_OTHER),
      VGetArg(upenv, 20-1, 1)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0optimize.sym, VPOINTER_OTHER),
      VGetArg(upenv, 20-1, 20)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0alpha__convert.sym, VPOINTER_OTHER),
      VGetArg(upenv, 20-1, 11)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0annotate__lambdas.sym, VPOINTER_OTHER),
      VGetArg(upenv, 20-1, 3)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0deannotate__lambdas.sym, VPOINTER_OTHER),
      VGetArg(upenv, 20-1, 4)
    )
,
      VNULL
    )

    )

    )

    )

    )

    );
 }
}
static void _V0optimize_k58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize_k58" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize_k58, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.216 8 1) (bruijn ##k.268 1 0) (##inline ##sys.cons (quote ##vcore.declare) (##inline ##sys.cons (bruijn f 3 1) (##inline ##sys.cons (bruijn ##x.273 0 0) (quote ())))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 8-1, 1)), runtime,
      upenv->vars[0],
      VInlineCons(
VEncodePointer(&_V10vcore_Ddeclare.sym, VPOINTER_OTHER),
      VInlineCons(
upenv->up->up->vars[1],
      VInlineCons(
_var0,
      VNULL
    )

    )

    )

    );
 }
}
static void _V0optimize_lambda13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize_lambda13" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize_lambda13, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.220 1 1))) ((bruijn optimize-impl 30 19) (close _V0optimize_k58) (bruijn l 0 1)) ((bruijn ##k.268 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 30-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize_k58, env)}),
      _var1
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize_lambda12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize_lambda12" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize_lambda12, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.220 0 1)) ((close _V0optimize_lambda13) (bruijn ##k.266 0 0) (##inline ##sys.car (bruijn ##expr.220 0 1))) ((bruijn ##k.266 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize_lambda13, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize_lambda11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize_lambda11" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize_lambda11, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0optimize_lambda12) (bruijn ##k.265 0 0) (##inline ##sys.cdr (bruijn ##expr.219 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize_lambda12, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0optimize_lambda10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize_lambda10" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize_lambda10, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.219 0 1)) ((close _V0optimize_lambda11) (bruijn ##k.263 0 0) (##inline ##sys.car (bruijn ##expr.219 0 1))) ((bruijn ##k.263 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize_lambda11, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize_k57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize_k57" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize_k57, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.262 0 0) ((close _V0optimize_lambda10) (bruijn ##k.260 1 0) (##inline ##sys.cdr (bruijn ##expr.218 1 1))) ((bruijn ##k.260 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize_lambda10, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize_lambda9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize_lambda9" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize_lambda9, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.218 0 1)) ((bruijn equal? 26 2) (close _V0optimize_k57) (quote ##vcore.declare) (##inline ##sys.car (bruijn ##expr.218 0 1))) ((bruijn ##k.260 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 26-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize_k57, env)}),
      VEncodePointer(&_V10vcore_Ddeclare.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize_k60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize_k60" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize_k60, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.216 3 1) (bruijn ##k.257 2 0) (bruijn ##x.259 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->vars[1]), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0optimize_k59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize_k59" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize_k59, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn optimize-impl 25 19) (close _V0optimize_k60) (bruijn expr 3 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 25-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize_k60, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0optimize_lambda8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize_lambda8" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize_lambda8, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0optimize_lambda9) (close _V0optimize_k59) (bruijn ##input.217 0 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize_lambda9, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize_k59, env)}),
      _var1
    );
 }
}
static void _V0optimize_lambda7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize_lambda7" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0optimize_lambda7, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize_lambda7, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0optimize_lambda8) (bruijn ##k.256 0 0) (bruijn expr 1 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize_lambda8, env)}, runtime,
      _var0,
      upenv->vars[1]
    );
 }
}
static void _V0optimize_lambda6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize_lambda6" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize_lambda6, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 23 1) (bruijn ##k.255 0 0) (close _V0optimize_lambda7))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 23-1, 1)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize_lambda7, env)})
    );
 }
}
static void _V0optimize_k56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize_k56" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize_k56, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0optimize_lambda6) (bruijn ##k.254 1 0) (bruijn ##x.280 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize_lambda6, env)}, runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0optimize_lambda5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize_lambda5" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0optimize_lambda5, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize_lambda5, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn alpha-convert 20 11) (close _V0optimize_k56) (bruijn expr 0 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 20-1, 11)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize_k56, env)}),
      _var1
    );
 }
}
static void cps_k54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "cps_k54" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to cps_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)cps_k54, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close cps_k55) (bruijn optimize 19 20) (close _V0optimize_lambda5))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)cps_k55, env)}),
      VEncodeInt(19l), VEncodeInt(20l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize_lambda5, env)})
    );
 }
}
static void _V0optimize__impl_k61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__impl_k61" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__impl_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__impl_k61, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.308 0 0) ((bruijn ##kk.209 3 1) (bruijn ##k.306 1 0) (bruijn expr 4 1)) ((bruijn ##k.306 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->vars[1]), runtime,
      upenv->vars[0],
      upenv->up->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__impl_lambda17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__impl_lambda17" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__impl_lambda17, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.211 0 1)) ((bruijn equal? 23 2) (close _V0optimize__impl_k61) (quote quote) (##inline ##sys.car (bruijn ##expr.211 0 1))) ((bruijn ##k.306 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 23-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__impl_k61, env)}),
      VEncodePointer(&_V0quote.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__impl_k63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__impl_k63" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__impl_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__impl_k63, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.304 0 0) ((bruijn ##kk.209 4 1) (bruijn ##k.302 1 0) (bruijn expr 5 1)) ((bruijn ##k.302 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->up->vars[1]), runtime,
      upenv->vars[0],
      VGetArg(upenv, 5-1, 1)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__impl_lambda18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__impl_lambda18" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__impl_lambda18, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.212 0 1)) ((bruijn equal? 24 2) (close _V0optimize__impl_k63) (quote ##inline) (##inline ##sys.car (bruijn ##expr.212 0 1))) ((bruijn ##k.302 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 24-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__impl_k63, env)}),
      VEncodePointer(&_V10inline.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__impl_k66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__impl_k66" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__impl_k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__impl_k66, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.209 6 1) (bruijn ##k.297 2 0) (bruijn ##x.300 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 6-1, 1)), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0optimize__impl_k65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__impl_k65" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__impl_k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__impl_k65, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.299 0 0) ((bruijn optimize-lambda 25 13) (close _V0optimize__impl_k66) (bruijn expr 6 1)) ((bruijn ##k.297 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 25-1, 13)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__impl_k66, env)}),
      VGetArg(upenv, 6-1, 1)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__impl_lambda19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__impl_lambda19" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__impl_lambda19, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.213 0 1)) ((bruijn equal? 25 2) (close _V0optimize__impl_k65) (quote lambda) (##inline ##sys.car (bruijn ##expr.213 0 1))) ((bruijn ##k.297 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 25-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__impl_k65, env)}),
      VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__impl_k69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__impl_k69" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__impl_k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__impl_k69, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.209 7 1) (bruijn ##k.292 2 0) (bruijn ##x.295 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 7-1, 1)), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0optimize__impl_k68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__impl_k68" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__impl_k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__impl_k68, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.294 0 0) ((bruijn optimize-lambda 26 13) (close _V0optimize__impl_k69) (bruijn expr 7 1)) ((bruijn ##k.292 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 26-1, 13)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__impl_k69, env)}),
      VGetArg(upenv, 7-1, 1)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__impl_lambda20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__impl_lambda20" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__impl_lambda20, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.214 0 1)) ((bruijn equal? 26 2) (close _V0optimize__impl_k68) (quote continuation) (##inline ##sys.car (bruijn ##expr.214 0 1))) ((bruijn ##k.292 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 26-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__impl_k68, env)}),
      VEncodePointer(&_V0continuation.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__impl_k71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__impl_k71" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__impl_k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__impl_k71, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.209 7 1) (bruijn ##k.289 1 0) (bruijn ##x.291 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 7-1, 1)), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0optimize__impl_lambda21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__impl_lambda21" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__impl_lambda21, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.215 0 1)) ((bruijn optimize-apply 26 17) (close _V0optimize__impl_k71) (bruijn expr 7 1)) ((bruijn ##k.289 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 26-1, 17)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__impl_k71, env)}),
      VGetArg(upenv, 7-1, 1)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__impl_k72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__impl_k72" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__impl_k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__impl_k72, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.209 6 1) (bruijn ##k.283 5 0) (bruijn expr 7 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 6-1, 1)), runtime,
      VGetArg(upenv, 5-1, 0),
      VGetArg(upenv, 7-1, 1)
    );
 }
}
static void _V0optimize__impl_k70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__impl_k70" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__impl_k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__impl_k70, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0optimize__impl_lambda21) (close _V0optimize__impl_k72) (bruijn ##input.210 4 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__impl_lambda21, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__impl_k72, env)}),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0optimize__impl_k67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__impl_k67" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__impl_k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__impl_k67, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0optimize__impl_lambda20) (close _V0optimize__impl_k70) (bruijn ##input.210 3 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__impl_lambda20, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__impl_k70, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0optimize__impl_k64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__impl_k64" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__impl_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__impl_k64, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0optimize__impl_lambda19) (close _V0optimize__impl_k67) (bruijn ##input.210 2 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__impl_lambda19, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__impl_k67, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0optimize__impl_k62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__impl_k62" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__impl_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__impl_k62, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0optimize__impl_lambda18) (close _V0optimize__impl_k64) (bruijn ##input.210 1 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__impl_lambda18, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__impl_k64, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0optimize__impl_lambda16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__impl_lambda16" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__impl_lambda16, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0optimize__impl_lambda17) (close _V0optimize__impl_k62) (bruijn ##input.210 0 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__impl_lambda17, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__impl_k62, env)}),
      _var1
    );
 }
}
static void _V0optimize__impl_lambda15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__impl_lambda15" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0optimize__impl_lambda15, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__impl_lambda15, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0optimize__impl_lambda16) (bruijn ##k.282 0 0) (bruijn expr 1 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__impl_lambda16, env)}, runtime,
      _var0,
      upenv->vars[1]
    );
 }
}
static void _V0optimize__impl_lambda14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__impl_lambda14" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0optimize__impl_lambda14, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__impl_lambda14, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 20 1) (bruijn ##k.281 0 0) (close _V0optimize__impl_lambda15))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 20-1, 1)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__impl_lambda15, env)})
    );
 }
}
static void cps_k53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "cps_k53" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to cps_k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)cps_k53, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close cps_k54) (bruijn optimize-impl 18 19) (close _V0optimize__impl_lambda14))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)cps_k54, env)}),
      VEncodeInt(18l), VEncodeInt(19l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__impl_lambda14, env)})
    );
 }
}
static void _V0optimize__atom_k73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__atom_k73" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__atom_k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__atom_k73, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.377 0 0) ((bruijn ##kk.194 3 1) (bruijn ##k.375 1 0) (bruijn expr 4 1)) ((bruijn ##k.375 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->vars[1]), runtime,
      upenv->vars[0],
      upenv->up->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__atom_lambda25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__atom_lambda25" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__atom_lambda25, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.196 0 1)) ((bruijn equal? 22 2) (close _V0optimize__atom_k73) (quote quote) (##inline ##sys.car (bruijn ##expr.196 0 1))) ((bruijn ##k.375 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 22-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__atom_k73, env)}),
      VEncodePointer(&_V0quote.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__atom_k75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__atom_k75" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__atom_k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__atom_k75, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.373 0 0) ((bruijn ##kk.194 4 1) (bruijn ##k.371 1 0) (bruijn expr 5 1)) ((bruijn ##k.371 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->up->vars[1]), runtime,
      upenv->vars[0],
      VGetArg(upenv, 5-1, 1)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__atom_lambda26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__atom_lambda26" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__atom_lambda26, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.197 0 1)) ((bruijn equal? 23 2) (close _V0optimize__atom_k75) (quote ##inline) (##inline ##sys.car (bruijn ##expr.197 0 1))) ((bruijn ##k.371 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 23-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__atom_k75, env)}),
      VEncodePointer(&_V10inline.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__atom_k78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__atom_k78" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__atom_k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__atom_k78, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.194 6 1) (bruijn ##k.366 2 0) (bruijn ##x.369 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 6-1, 1)), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0optimize__atom_k77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__atom_k77" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__atom_k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__atom_k77, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.368 0 0) ((bruijn optimize-lambda 24 13) (close _V0optimize__atom_k78) (bruijn expr 6 1)) ((bruijn ##k.366 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 24-1, 13)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__atom_k78, env)}),
      VGetArg(upenv, 6-1, 1)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__atom_lambda27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__atom_lambda27" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__atom_lambda27, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.198 0 1)) ((bruijn equal? 24 2) (close _V0optimize__atom_k77) (quote lambda) (##inline ##sys.car (bruijn ##expr.198 0 1))) ((bruijn ##k.366 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 24-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__atom_k77, env)}),
      VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__atom_k81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__atom_k81" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__atom_k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__atom_k81, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.194 7 1) (bruijn ##k.361 2 0) (bruijn ##x.364 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 7-1, 1)), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0optimize__atom_k80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__atom_k80" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__atom_k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__atom_k80, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.363 0 0) ((bruijn optimize-lambda 25 13) (close _V0optimize__atom_k81) (bruijn expr 7 1)) ((bruijn ##k.361 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 25-1, 13)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__atom_k81, env)}),
      VGetArg(upenv, 7-1, 1)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__atom_lambda28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__atom_lambda28" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__atom_lambda28, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.199 0 1)) ((bruijn equal? 25 2) (close _V0optimize__atom_k80) (quote continuation) (##inline ##sys.car (bruijn ##expr.199 0 1))) ((bruijn ##k.361 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 25-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__atom_k80, env)}),
      VEncodePointer(&_V0continuation.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__atom_k84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__atom_k84" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__atom_k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__atom_k84, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.324 1 0) (bruijn ##expr.201 4 1) (quote ()) (quote ()))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[1]), runtime,
      upenv->vars[0],
      upenv->up->up->up->vars[1],
      VNULL,
      VNULL
    );
 }
}
static void _V0loop_lambda40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda40" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda40, runtime, upenv, 2, argc, _var0, _var1) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.208 1 1))) ((bruijn ##kk.205 4 1) (bruijn ##k.338 0 0) (##inline ##sys.cdr (bruijn ##expr.206 9 1)) (##inline ##sys.cons (bruijn args 2 1) (bruijn ##args.202 9 2)) (##inline ##sys.cons (bruijn body 0 1) (bruijn ##body.203 9 3))) ((bruijn ##k.338 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->up->vars[1]), runtime,
      _var0,
      VInlineCdr(
VGetArg(upenv, 9-1, 1)
    )
,
      VInlineCons(
upenv->up->vars[1],
      VGetArg(upenv, 9-1, 2)
    )
,
      VInlineCons(
_var1,
      VGetArg(upenv, 9-1, 3)
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda39" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda39, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.208 0 1)) ((close _V0loop_lambda40) (bruijn ##k.336 0 0) (##inline ##sys.car (bruijn ##expr.208 0 1))) ((bruijn ##k.336 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda40, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda38" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda38, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_lambda39) (bruijn ##k.335 0 0) (##inline ##sys.cdr (bruijn ##expr.207 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda39, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0loop_lambda37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda37" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda37, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.207 0 1)) ((close _V0loop_lambda38) (bruijn ##k.333 0 0) (##inline ##sys.car (bruijn ##expr.207 0 1))) ((bruijn ##k.333 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda38, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k90" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k90, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.204 10 1) (bruijn ##k.329 3 0) (bruijn ##expr.206 8 1) (bruijn ##x.331 1 0) (bruijn ##x.332 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 10-1, 1)), runtime,
      upenv->up->up->vars[0],
      VGetArg(upenv, 8-1, 1),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k89" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k89, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 39 5) (close _V0loop_k90) (bruijn ##body.203 7 3))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 39-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k90, env)}),
      VGetArg(upenv, 7-1, 3)
    );
 }
}
static void _V0loop_k88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k88" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k88, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 38 5) (close _V0loop_k89) (bruijn ##args.202 6 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 38-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k89, env)}),
      VGetArg(upenv, 6-1, 2)
    );
 }
}
static void _V0loop_lambda36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda36" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda36, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda36, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_lambda37) (close _V0loop_k88) (##inline ##sys.car (bruijn ##expr.206 5 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda37, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k88, env)}),
      VInlineCar(
VGetArg(upenv, 5-1, 1)
    )

    );
 }
}
static void _V0loop_lambda35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda35" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda35, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 36 1) (bruijn ##k.328 0 0) (close _V0loop_lambda36))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 36-1, 1)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda36, env)})
    );
 }
}
static void _V0loop_k87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k87" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k87, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call-with-values 35 4) (bruijn ##k.326 3 0) (close _V0loop_lambda35) (bruijn loop 4 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 35-1, 4)), runtime,
      upenv->up->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda35, env)}),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0loop_k86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k86" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k86, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##kk.204 4 1) (close _V0loop_k87) (bruijn ##expr.206 2 1) (bruijn ##x.349 1 0) (bruijn ##x.350 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->up->vars[1]), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k87, env)}),
      upenv->up->vars[1],
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k85" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k85, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 33 5) (close _V0loop_k86) (bruijn ##body.203 1 3))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 33-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k86, env)}),
      upenv->vars[3]
    );
 }
}
static void _V0loop_lambda46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda46" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda46, runtime, upenv, 2, argc, _var0, _var1) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.208 1 1))) ((bruijn ##kk.205 4 1) (bruijn ##k.338 0 0) (##inline ##sys.cdr (bruijn ##expr.206 6 1)) (##inline ##sys.cons (bruijn args 2 1) (bruijn ##args.202 6 2)) (##inline ##sys.cons (bruijn body 0 1) (bruijn ##body.203 6 3))) ((bruijn ##k.338 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->up->vars[1]), runtime,
      _var0,
      VInlineCdr(
VGetArg(upenv, 6-1, 1)
    )
,
      VInlineCons(
upenv->up->vars[1],
      VGetArg(upenv, 6-1, 2)
    )
,
      VInlineCons(
_var1,
      VGetArg(upenv, 6-1, 3)
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda45" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda45, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.208 0 1)) ((close _V0loop_lambda46) (bruijn ##k.336 0 0) (##inline ##sys.car (bruijn ##expr.208 0 1))) ((bruijn ##k.336 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda46, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda44" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda44, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_lambda45) (bruijn ##k.335 0 0) (##inline ##sys.cdr (bruijn ##expr.207 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda45, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0loop_lambda43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda43" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda43, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.207 0 1)) ((close _V0loop_lambda44) (bruijn ##k.333 0 0) (##inline ##sys.car (bruijn ##expr.207 0 1))) ((bruijn ##k.333 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda44, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k93" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k93, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.204 7 1) (bruijn ##k.329 3 0) (bruijn ##expr.206 5 1) (bruijn ##x.331 1 0) (bruijn ##x.332 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 7-1, 1)), runtime,
      upenv->up->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k92" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k92, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 36 5) (close _V0loop_k93) (bruijn ##body.203 4 3))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 36-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k93, env)}),
      upenv->up->up->up->vars[3]
    );
 }
}
static void _V0loop_k91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k91" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k91, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 35 5) (close _V0loop_k92) (bruijn ##args.202 3 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 35-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k92, env)}),
      upenv->up->up->vars[2]
    );
 }
}
static void _V0loop_lambda42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda42" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda42, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda42, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_lambda43) (close _V0loop_k91) (##inline ##sys.car (bruijn ##expr.206 2 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda43, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k91, env)}),
      VInlineCar(
upenv->up->vars[1]
    )

    );
 }
}
static void _V0loop_lambda41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda41" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda41, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 33 1) (bruijn ##k.328 0 0) (close _V0loop_lambda42))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 33-1, 1)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda42, env)})
    );
 }
}
static void _V0loop_lambda34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0loop_lambda34" };
 VRecordCall(&dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0loop_lambda34, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda34, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.206 0 1))) ((bruijn reverse 32 5) (close _V0loop_k85) (bruijn ##args.202 0 2)) ((bruijn call-with-values 32 4) (bruijn ##k.326 0 0) (close _V0loop_lambda41) (bruijn loop 1 1)))
if(VDecodeBool(
VInlineNot(
VInlinePairP(
_var1
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 32-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k85, env)}),
      _var2
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 32-1, 4)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda41, env)}),
      upenv->vars[1]
    );
}
 }
}
static void _V0optimize__atom_lambda33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__atom_lambda33" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__atom_lambda33, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0optimize__atom_k84) (bruijn loop 0 1) (close _V0loop_lambda34))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__atom_k84, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda34, env)})
    );
 }
}
static void _V0optimize__atom_lambda32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__atom_lambda32" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0optimize__atom_lambda32, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__atom_lambda32, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0optimize__atom_lambda33) (bruijn ##k.323 0 0) #f)
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__atom_lambda33, env)}, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0optimize__atom_lambda31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__atom_lambda31" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__atom_lambda31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__atom_lambda31, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 29 1) (bruijn ##k.322 0 0) (close _V0optimize__atom_lambda32))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 29-1, 1)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__atom_lambda32, env)})
    );
 }
}
static void _V0optimize__atom_k94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__atom_k94" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__atom_k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__atom_k94, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.194 10 1) (bruijn ##k.352 1 0) (##inline ##sys.cons (quote case-lambda) (bruijn ##x.355 0 0)))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 10-1, 1)), runtime,
      upenv->vars[0],
      VInlineCons(
VEncodePointer(&_V0case__lambda.sym, VPOINTER_OTHER),
      _var0
    )

    );
 }
}
static void _V0optimize__atom_k95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__atom_k95" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__atom_k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__atom_k95, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.356 1 0) (##inline ##sys.cons (bruijn args 1 1) (##inline ##sys.cons (bruijn ##x.358 0 0) (quote ()))))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VInlineCons(
upenv->vars[1],
      VInlineCons(
_var0,
      VNULL
    )

    )

    );
 }
}
static void _V0optimize__atom_lambda48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0optimize__atom_lambda48" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0optimize__atom_lambda48, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__atom_lambda48, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn optimize-apply 29 17) (close _V0optimize__atom_k95) (bruijn body 0 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 29-1, 17)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__atom_k95, env)}),
      _var2
    );
 }
}
static void _V0optimize__atom_lambda47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0optimize__atom_lambda47" };
 VRecordCall(&dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0optimize__atom_lambda47, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__atom_lambda47, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((bruijn map 29 3) (close _V0optimize__atom_k94) (close _V0optimize__atom_lambda48) (bruijn args 0 2) (bruijn body 0 3)) ((bruijn ##k.352 0 0) #f))
if(VDecodeBool(
VInlineNullP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 29-1, 3)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__atom_k94, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__atom_lambda48, env)}),
      _var2,
      _var3
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__atom_lambda30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__atom_lambda30" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__atom_lambda30, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call-with-values 28 4) (bruijn ##k.321 0 0) (close _V0optimize__atom_lambda31) (close _V0optimize__atom_lambda47))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 28-1, 4)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__atom_lambda31, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__atom_lambda47, env)})
    );
 }
}
static void _V0optimize__atom_k83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__atom_k83" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__atom_k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__atom_k83, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.320 0 0) ((close _V0optimize__atom_lambda30) (bruijn ##k.318 1 0) (##inline ##sys.cdr (bruijn ##expr.200 1 1))) ((bruijn ##k.318 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__atom_lambda30, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__atom_lambda29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__atom_lambda29" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__atom_lambda29, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.200 0 1)) ((bruijn equal? 26 2) (close _V0optimize__atom_k83) (quote case-lambda) (##inline ##sys.car (bruijn ##expr.200 0 1))) ((bruijn ##k.318 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 26-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__atom_k83, env)}),
      VEncodePointer(&_V0case__lambda.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__atom_k96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__atom_k96" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__atom_k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__atom_k96, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.194 6 1) (bruijn ##k.312 5 0) (bruijn expr 7 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 6-1, 1)), runtime,
      VGetArg(upenv, 5-1, 0),
      VGetArg(upenv, 7-1, 1)
    );
 }
}
static void _V0optimize__atom_k82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__atom_k82" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__atom_k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__atom_k82, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0optimize__atom_lambda29) (close _V0optimize__atom_k96) (bruijn ##input.195 4 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__atom_lambda29, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__atom_k96, env)}),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0optimize__atom_k79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__atom_k79" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__atom_k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__atom_k79, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0optimize__atom_lambda28) (close _V0optimize__atom_k82) (bruijn ##input.195 3 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__atom_lambda28, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__atom_k82, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0optimize__atom_k76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__atom_k76" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__atom_k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__atom_k76, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0optimize__atom_lambda27) (close _V0optimize__atom_k79) (bruijn ##input.195 2 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__atom_lambda27, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__atom_k79, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0optimize__atom_k74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__atom_k74" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__atom_k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__atom_k74, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0optimize__atom_lambda26) (close _V0optimize__atom_k76) (bruijn ##input.195 1 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__atom_lambda26, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__atom_k76, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0optimize__atom_lambda24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__atom_lambda24" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__atom_lambda24, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0optimize__atom_lambda25) (close _V0optimize__atom_k74) (bruijn ##input.195 0 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__atom_lambda25, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__atom_k74, env)}),
      _var1
    );
 }
}
static void _V0optimize__atom_lambda23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__atom_lambda23" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0optimize__atom_lambda23, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__atom_lambda23, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0optimize__atom_lambda24) (bruijn ##k.311 0 0) (bruijn expr 1 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__atom_lambda24, env)}, runtime,
      _var0,
      upenv->vars[1]
    );
 }
}
static void _V0optimize__atom_lambda22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__atom_lambda22" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0optimize__atom_lambda22, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__atom_lambda22, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 19 1) (bruijn ##k.310 0 0) (close _V0optimize__atom_lambda23))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 19-1, 1)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__atom_lambda23, env)})
    );
 }
}
static void cps_k52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "cps_k52" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to cps_k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)cps_k52, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close cps_k53) (bruijn optimize-atom 17 18) (close _V0optimize__atom_lambda22))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)cps_k53, env)}),
      VEncodeInt(17l), VEncodeInt(18l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__atom_lambda22, env)})
    );
 }
}
static void _V0optimize__apply_k98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k98" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k98, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.133 5 1) (bruijn ##k.754 2 0) (bruijn ##x.757 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 5-1, 1)), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0optimize__apply_k97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k97" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k97, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.756 0 0) ((bruijn optimize-let 22 16) (close _V0optimize__apply_k98) (bruijn expr 5 1)) ((bruijn ##k.754 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 22-1, 16)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k98, env)}),
      VGetArg(upenv, 5-1, 1)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda53" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda53, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.136 0 1)) ((bruijn equal? 22 2) (close _V0optimize__apply_k97) (quote continuation) (##inline ##sys.car (bruijn ##expr.136 0 1))) ((bruijn ##k.754 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 22-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k97, env)}),
      VEncodePointer(&_V0continuation.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda52" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda52, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.135 0 1)) ((close _V0optimize__apply_lambda53) (bruijn ##k.752 0 0) (##inline ##sys.car (bruijn ##expr.135 0 1))) ((bruijn ##k.752 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda53, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_k101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k101" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k101, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.133 6 1) (bruijn ##k.746 2 0) (bruijn ##x.749 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 6-1, 1)), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0optimize__apply_k100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k100" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k100, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.748 0 0) ((bruijn optimize-let 23 16) (close _V0optimize__apply_k101) (bruijn expr 6 1)) ((bruijn ##k.746 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 23-1, 16)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k101, env)}),
      VGetArg(upenv, 6-1, 1)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda55" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda55, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.138 0 1)) ((bruijn equal? 23 2) (close _V0optimize__apply_k100) (quote lambda) (##inline ##sys.car (bruijn ##expr.138 0 1))) ((bruijn ##k.746 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 23-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k100, env)}),
      VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda54" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda54, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.137 0 1)) ((close _V0optimize__apply_lambda55) (bruijn ##k.744 0 0) (##inline ##sys.car (bruijn ##expr.137 0 1))) ((bruijn ##k.744 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda55, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_k104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k104" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k104, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.133 11 1) (bruijn ##k.733 1 0) (bruijn ##x.735 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 11-1, 1)), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0optimize__apply_lambda61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda61" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda61, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.142 1 1))) ((bruijn optimize-apply 28 17) (close _V0optimize__apply_k104) (bruijn a 2 1)) ((bruijn ##k.733 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 28-1, 17)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k104, env)}),
      upenv->up->vars[1]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda60" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda60, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.142 0 1)) ((close _V0optimize__apply_lambda61) (bruijn ##k.731 0 0) (##inline ##sys.car (bruijn ##expr.142 0 1))) ((bruijn ##k.731 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda61, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda59" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda59, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0optimize__apply_lambda60) (bruijn ##k.730 0 0) (##inline ##sys.cdr (bruijn ##expr.141 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda60, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0optimize__apply_lambda58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda58" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda58, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.141 0 1)) ((close _V0optimize__apply_lambda59) (bruijn ##k.728 0 0) (##inline ##sys.car (bruijn ##expr.141 0 1))) ((bruijn ##k.728 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda59, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda57" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda57, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.140 0 1)) (if (##inline ##sys.eq? #t (##inline ##sys.car (bruijn ##expr.140 0 1))) ((close _V0optimize__apply_lambda58) (bruijn ##k.725 0 0) (##inline ##sys.cdr (bruijn ##expr.140 0 1))) ((bruijn ##k.725 0 0) #f)) ((bruijn ##k.725 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
if(VDecodeBool(
VInlineEq(
VEncodeBool(true),
      VInlineCar(
_var1
    )

    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda58, env)}, runtime,
      _var0,
      VInlineCdr(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_k103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k103" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k103, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.724 0 0) ((close _V0optimize__apply_lambda57) (bruijn ##k.722 1 0) (##inline ##sys.cdr (bruijn ##expr.139 1 1))) ((bruijn ##k.722 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda57, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda56" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda56, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.139 0 1)) ((bruijn equal? 23 2) (close _V0optimize__apply_k103) (quote if) (##inline ##sys.car (bruijn ##expr.139 0 1))) ((bruijn ##k.722 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 23-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k103, env)}),
      VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_k107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k107" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k107, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.133 12 1) (bruijn ##k.711 1 0) (bruijn ##x.713 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 12-1, 1)), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0optimize__apply_lambda67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda67" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda67, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.146 1 1))) ((bruijn optimize-apply 29 17) (close _V0optimize__apply_k107) (bruijn b 0 1)) ((bruijn ##k.711 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 29-1, 17)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k107, env)}),
      _var1
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda66" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda66, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.146 0 1)) ((close _V0optimize__apply_lambda67) (bruijn ##k.709 0 0) (##inline ##sys.car (bruijn ##expr.146 0 1))) ((bruijn ##k.709 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda67, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda65" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda65, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0optimize__apply_lambda66) (bruijn ##k.708 0 0) (##inline ##sys.cdr (bruijn ##expr.145 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda66, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0optimize__apply_lambda64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda64" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda64, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.145 0 1)) ((close _V0optimize__apply_lambda65) (bruijn ##k.706 0 0) (##inline ##sys.car (bruijn ##expr.145 0 1))) ((bruijn ##k.706 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda65, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda63" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda63, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.144 0 1)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.144 0 1))) ((close _V0optimize__apply_lambda64) (bruijn ##k.703 0 0) (##inline ##sys.cdr (bruijn ##expr.144 0 1))) ((bruijn ##k.703 0 0) #f)) ((bruijn ##k.703 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
if(VDecodeBool(
VInlineEq(
VEncodeBool(false),
      VInlineCar(
_var1
    )

    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda64, env)}, runtime,
      _var0,
      VInlineCdr(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_k106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k106" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k106, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.702 0 0) ((close _V0optimize__apply_lambda63) (bruijn ##k.700 1 0) (##inline ##sys.cdr (bruijn ##expr.143 1 1))) ((bruijn ##k.700 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda63, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda62" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda62, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.143 0 1)) ((bruijn equal? 24 2) (close _V0optimize__apply_k106) (quote if) (##inline ##sys.car (bruijn ##expr.143 0 1))) ((bruijn ##k.700 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 24-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k106, env)}),
      VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_k111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k111" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k111, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.133 15 1) (bruijn ##k.684 2 0) (##inline ##sys.cons (quote if) (##inline ##sys.cons (bruijn p 6 1) (##inline ##sys.cons (bruijn ##x.689 1 0) (##inline ##sys.cons (bruijn ##x.691 0 0) (quote ()))))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 15-1, 1)), runtime,
      upenv->up->vars[0],
      VInlineCons(
VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 6-1, 1),
      VInlineCons(
upenv->vars[0],
      VInlineCons(
_var0,
      VNULL
    )

    )

    )

    )

    );
 }
}
static void _V0optimize__apply_k110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k110" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k110, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn optimize-apply 32 17) (close _V0optimize__apply_k111) (bruijn b 1 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 32-1, 17)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k111, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0optimize__apply_lambda74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda74" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda74, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.150 1 1))) ((bruijn optimize-apply 31 17) (close _V0optimize__apply_k110) (bruijn a 2 1)) ((bruijn ##k.684 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 31-1, 17)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k110, env)}),
      upenv->up->vars[1]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda73" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda73, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.150 0 1)) ((close _V0optimize__apply_lambda74) (bruijn ##k.682 0 0) (##inline ##sys.car (bruijn ##expr.150 0 1))) ((bruijn ##k.682 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda74, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda72" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda72, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0optimize__apply_lambda73) (bruijn ##k.681 0 0) (##inline ##sys.cdr (bruijn ##expr.149 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda73, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0optimize__apply_lambda71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda71" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda71, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.149 0 1)) ((close _V0optimize__apply_lambda72) (bruijn ##k.679 0 0) (##inline ##sys.car (bruijn ##expr.149 0 1))) ((bruijn ##k.679 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda72, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda70" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda70, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0optimize__apply_lambda71) (bruijn ##k.678 0 0) (##inline ##sys.cdr (bruijn ##expr.148 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda71, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0optimize__apply_lambda69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda69" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda69, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.148 0 1)) ((close _V0optimize__apply_lambda70) (bruijn ##k.676 0 0) (##inline ##sys.car (bruijn ##expr.148 0 1))) ((bruijn ##k.676 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda70, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_k109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k109" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k109, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.675 0 0) ((close _V0optimize__apply_lambda69) (bruijn ##k.673 1 0) (##inline ##sys.cdr (bruijn ##expr.147 1 1))) ((bruijn ##k.673 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda69, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda68" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda68, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.147 0 1)) ((bruijn equal? 25 2) (close _V0optimize__apply_k109) (quote if) (##inline ##sys.car (bruijn ##expr.147 0 1))) ((bruijn ##k.673 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 25-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k109, env)}),
      VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_k122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k122" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k122, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.133 35 1) (bruijn ##k.630 7 0) (bruijn ##x.633 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 35-1, 1)), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0
    );
 }
}
static void _V0optimize__apply_k121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k121" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k121, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn optimize-apply 52 17) (close _V0optimize__apply_k122) (##inline ##sys.cons (quote if) (##inline ##sys.cons (bruijn p 22 1) (##inline ##sys.cons (bruijn ##x.638 1 0) (##inline ##sys.cons (bruijn ##x.640 0 0) (quote ()))))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 52-1, 17)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k122, env)}),
      VInlineCons(
VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 22-1, 1),
      VInlineCons(
upenv->vars[0],
      VInlineCons(
_var0,
      VNULL
    )

    )

    )

    )

    );
 }
}
static void _V0optimize__apply_k120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k120" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k120, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn substitute 51 10) (close _V0optimize__apply_k121) (bruijn k2 7 1) (bruijn k 23 1) (bruijn apply2 5 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 51-1, 10)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k121, env)}),
      VGetArg(upenv, 7-1, 1),
      VGetArg(upenv, 23-1, 1),
      VGetArg(upenv, 5-1, 1)
    );
 }
}
static void _V0optimize__apply_k119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k119" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k119, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn substitute 50 10) (close _V0optimize__apply_k120) (bruijn k1 14 1) (bruijn k 22 1) (bruijn apply1 12 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 50-1, 10)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k120, env)}),
      VGetArg(upenv, 14-1, 1),
      VGetArg(upenv, 22-1, 1),
      VGetArg(upenv, 12-1, 1)
    );
 }
}
static void _V0optimize__apply_k125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k125" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k125, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.133 34 1) (bruijn ##k.630 6 0) (bruijn ##x.633 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 34-1, 1)), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0
    );
 }
}
static void _V0optimize__apply_k124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k124" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k124, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn optimize-apply 51 17) (close _V0optimize__apply_k125) (##inline ##sys.cons (quote if) (##inline ##sys.cons (bruijn p 21 1) (##inline ##sys.cons (bruijn ##x.638 1 0) (##inline ##sys.cons (bruijn ##x.640 0 0) (quote ()))))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 51-1, 17)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k125, env)}),
      VInlineCons(
VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 21-1, 1),
      VInlineCons(
upenv->vars[0],
      VInlineCons(
_var0,
      VNULL
    )

    )

    )

    )

    );
 }
}
static void _V0optimize__apply_k123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k123" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k123, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn substitute 50 10) (close _V0optimize__apply_k124) (bruijn k2 6 1) (bruijn k 22 1) (bruijn apply2 4 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 50-1, 10)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k124, env)}),
      VGetArg(upenv, 6-1, 1),
      VGetArg(upenv, 22-1, 1),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0optimize__apply_k132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k132" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k132, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.133 38 1) (bruijn ##k.630 10 0) (bruijn ##x.633 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 38-1, 1)), runtime,
      VGetArg(upenv, 10-1, 0),
      _var0
    );
 }
}
static void _V0optimize__apply_k131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k131" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k131, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn optimize-apply 55 17) (close _V0optimize__apply_k132) (##inline ##sys.cons (quote if) (##inline ##sys.cons (bruijn p 25 1) (##inline ##sys.cons (bruijn ##x.638 1 0) (##inline ##sys.cons (bruijn ##x.640 0 0) (quote ()))))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 55-1, 17)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k132, env)}),
      VInlineCons(
VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 25-1, 1),
      VInlineCons(
upenv->vars[0],
      VInlineCons(
_var0,
      VNULL
    )

    )

    )

    )

    );
 }
}
static void _V0optimize__apply_k130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k130" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k130, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn substitute 54 10) (close _V0optimize__apply_k131) (bruijn k2 10 1) (bruijn k 26 1) (bruijn apply2 8 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 54-1, 10)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k131, env)}),
      VGetArg(upenv, 10-1, 1),
      VGetArg(upenv, 26-1, 1),
      VGetArg(upenv, 8-1, 1)
    );
 }
}
static void _V0optimize__apply_k129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k129" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k129, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn substitute 53 10) (close _V0optimize__apply_k130) (bruijn k1 17 1) (bruijn k 25 1) (bruijn apply1 15 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 53-1, 10)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k130, env)}),
      VGetArg(upenv, 17-1, 1),
      VGetArg(upenv, 25-1, 1),
      VGetArg(upenv, 15-1, 1)
    );
 }
}
static void _V0optimize__apply_k135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k135" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k135, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.133 37 1) (bruijn ##k.630 9 0) (bruijn ##x.633 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 37-1, 1)), runtime,
      VGetArg(upenv, 9-1, 0),
      _var0
    );
 }
}
static void _V0optimize__apply_k134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k134" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k134, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn optimize-apply 54 17) (close _V0optimize__apply_k135) (##inline ##sys.cons (quote if) (##inline ##sys.cons (bruijn p 24 1) (##inline ##sys.cons (bruijn ##x.638 1 0) (##inline ##sys.cons (bruijn ##x.640 0 0) (quote ()))))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 54-1, 17)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k135, env)}),
      VInlineCons(
VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 24-1, 1),
      VInlineCons(
upenv->vars[0],
      VInlineCons(
_var0,
      VNULL
    )

    )

    )

    )

    );
 }
}
static void _V0optimize__apply_k133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k133" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k133, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn substitute 53 10) (close _V0optimize__apply_k134) (bruijn k2 9 1) (bruijn k 25 1) (bruijn apply2 7 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 53-1, 10)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k134, env)}),
      VGetArg(upenv, 9-1, 1),
      VGetArg(upenv, 25-1, 1),
      VGetArg(upenv, 7-1, 1)
    );
 }
}
static void _V0optimize__apply_k128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k128" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k128, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.641 0 0) ((bruijn error 53 11) (close _V0optimize__apply_k129) (##string ##string.1646) (bruijn expr 35 1)) ((bruijn substitute 52 10) (close _V0optimize__apply_k133) (bruijn k1 16 1) (bruijn k 24 1) (bruijn apply1 14 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 53-1, 11)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k129, env)}),
      VEncodePointer(&_V10string_D1646.sym, VPOINTER_OTHER),
      VGetArg(upenv, 35-1, 1)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 52-1, 10)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k133, env)}),
      VGetArg(upenv, 16-1, 1),
      VGetArg(upenv, 24-1, 1),
      VGetArg(upenv, 14-1, 1)
    );
}
 }
}
static void _V0optimize__apply_k127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k127" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k127, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 52 6) (close _V0optimize__apply_k128) (bruijn ##x.643 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 52-1, 6)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k128, env)}),
      _var0
    );
 }
}
static void _V0optimize__apply_k126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k126" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k126, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn = 51 7) (close _V0optimize__apply_k127) 1 (bruijn ##x.644 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 51-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k127, env)}),
      VEncodeInt(1l),
      _var0
    );
 }
}
static void _V0optimize__apply_k118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k118" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k118, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.642 0 0) (if (bruijn ##p.642 0 0) ((bruijn error 50 11) (close _V0optimize__apply_k119) (##string ##string.1646) (bruijn expr 32 1)) ((bruijn substitute 49 10) (close _V0optimize__apply_k123) (bruijn k1 13 1) (bruijn k 21 1) (bruijn apply1 11 1))) ((bruijn ref-count 49 6) (close _V0optimize__apply_k126) (bruijn k2 5 1) (bruijn apply2 3 1)))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 50-1, 11)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k119, env)}),
      VEncodePointer(&_V10string_D1646.sym, VPOINTER_OTHER),
      VGetArg(upenv, 32-1, 1)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 49-1, 10)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k123, env)}),
      VGetArg(upenv, 13-1, 1),
      VGetArg(upenv, 21-1, 1),
      VGetArg(upenv, 11-1, 1)
    );
}
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 49-1, 6)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k126, env)}),
      VGetArg(upenv, 5-1, 1),
      upenv->up->up->vars[1]
    );
}
 }
}
static void _V0optimize__apply_k117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k117" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k117, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 49 6) (close _V0optimize__apply_k118) (bruijn ##x.645 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 49-1, 6)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k118, env)}),
      _var0
    );
 }
}
static void _V0optimize__apply_k116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k116" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k116, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn = 48 7) (close _V0optimize__apply_k117) 1 (bruijn ##x.646 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 48-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k117, env)}),
      VEncodeInt(1l),
      _var0
    );
 }
}
static void _V0optimize__apply_lambda93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda93" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda93, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.163 1 1))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.159 7 1))) ((bruijn ref-count 46 6) (close _V0optimize__apply_k116) (bruijn k1 10 1) (bruijn apply1 8 1)) ((bruijn ##k.630 0 0) #f)) ((bruijn ##k.630 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
VGetArg(upenv, 7-1, 1)
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 46-1, 6)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k116, env)}),
      VGetArg(upenv, 10-1, 1),
      VGetArg(upenv, 8-1, 1)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda92" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda92, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.163 0 1)) ((close _V0optimize__apply_lambda93) (bruijn ##k.628 0 0) (##inline ##sys.car (bruijn ##expr.163 0 1))) ((bruijn ##k.628 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda93, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda91" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda91, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.162 1 1))) ((close _V0optimize__apply_lambda92) (bruijn ##k.626 0 0) (##inline ##sys.cdr (bruijn ##expr.161 2 1))) ((bruijn ##k.626 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda92, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda90" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda90, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.162 0 1)) ((close _V0optimize__apply_lambda91) (bruijn ##k.624 0 0) (##inline ##sys.car (bruijn ##expr.162 0 1))) ((bruijn ##k.624 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda91, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda89" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda89, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.161 0 1)) ((close _V0optimize__apply_lambda90) (bruijn ##k.622 0 0) (##inline ##sys.car (bruijn ##expr.161 0 1))) ((bruijn ##k.622 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda90, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_k115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k115" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k115, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.621 0 0) ((close _V0optimize__apply_lambda89) (bruijn ##k.619 1 0) (##inline ##sys.cdr (bruijn ##expr.160 1 1))) ((bruijn ##k.619 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda89, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda88" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda88, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.160 0 1)) ((bruijn equal? 41 2) (close _V0optimize__apply_k115) (quote lambda) (##inline ##sys.car (bruijn ##expr.160 0 1))) ((bruijn ##k.619 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 41-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k115, env)}),
      VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda87" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda87, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.159 0 1)) ((close _V0optimize__apply_lambda88) (bruijn ##k.617 0 0) (##inline ##sys.car (bruijn ##expr.159 0 1))) ((bruijn ##k.617 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda88, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda86" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda86, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.158 1 1))) ((close _V0optimize__apply_lambda87) (bruijn ##k.615 0 0) (##inline ##sys.cdr (bruijn ##expr.154 7 1))) ((bruijn ##k.615 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda87, env)}, runtime,
      _var0,
      VInlineCdr(
VGetArg(upenv, 7-1, 1)
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda85" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda85, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.158 0 1)) ((close _V0optimize__apply_lambda86) (bruijn ##k.613 0 0) (##inline ##sys.car (bruijn ##expr.158 0 1))) ((bruijn ##k.613 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda86, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda84" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda84, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.157 1 1))) ((close _V0optimize__apply_lambda85) (bruijn ##k.611 0 0) (##inline ##sys.cdr (bruijn ##expr.156 2 1))) ((bruijn ##k.611 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda85, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda83" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda83, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.157 0 1)) ((close _V0optimize__apply_lambda84) (bruijn ##k.609 0 0) (##inline ##sys.car (bruijn ##expr.157 0 1))) ((bruijn ##k.609 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda84, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda82" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda82, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.156 0 1)) ((close _V0optimize__apply_lambda83) (bruijn ##k.607 0 0) (##inline ##sys.car (bruijn ##expr.156 0 1))) ((bruijn ##k.607 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda83, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_k114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k114" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k114, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.606 0 0) ((close _V0optimize__apply_lambda82) (bruijn ##k.604 1 0) (##inline ##sys.cdr (bruijn ##expr.155 1 1))) ((bruijn ##k.604 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda82, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda81" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda81, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.155 0 1)) ((bruijn equal? 33 2) (close _V0optimize__apply_k114) (quote lambda) (##inline ##sys.car (bruijn ##expr.155 0 1))) ((bruijn ##k.604 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 33-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k114, env)}),
      VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda80" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda80, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.154 0 1)) ((close _V0optimize__apply_lambda81) (bruijn ##k.602 0 0) (##inline ##sys.car (bruijn ##expr.154 0 1))) ((bruijn ##k.602 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda81, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda79" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda79, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0optimize__apply_lambda80) (bruijn ##k.601 0 0) (##inline ##sys.cdr (bruijn ##expr.153 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda80, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0optimize__apply_lambda78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda78" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda78, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.153 0 1)) ((close _V0optimize__apply_lambda79) (bruijn ##k.599 0 0) (##inline ##sys.car (bruijn ##expr.153 0 1))) ((bruijn ##k.599 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda79, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda77" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda77, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0optimize__apply_lambda78) (bruijn ##k.598 0 0) (##inline ##sys.cdr (bruijn ##expr.152 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda78, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0optimize__apply_lambda76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda76" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda76, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.152 0 1)) ((close _V0optimize__apply_lambda77) (bruijn ##k.596 0 0) (##inline ##sys.car (bruijn ##expr.152 0 1))) ((bruijn ##k.596 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda77, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_k113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k113" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k113, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.595 0 0) ((close _V0optimize__apply_lambda76) (bruijn ##k.593 1 0) (##inline ##sys.cdr (bruijn ##expr.151 1 1))) ((bruijn ##k.593 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda76, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda75" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda75, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.151 0 1)) ((bruijn equal? 26 2) (close _V0optimize__apply_k113) (quote ##sys.if) (##inline ##sys.car (bruijn ##expr.151 0 1))) ((bruijn ##k.593 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 26-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k113, env)}),
      VEncodePointer(&_V10sys_Dif.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_k144(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k144" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k144, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.133 27 1) (bruijn ##k.568 6 0) (bruijn ##x.571 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 27-1, 1)), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0
    );
 }
}
static void _V0optimize__apply_k143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k143" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k143, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn optimize-apply 44 17) (close _V0optimize__apply_k144) (bruijn ##x.573 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 44-1, 17)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k144, env)}),
      _var0
    );
 }
}
static void _V0optimize__apply_k142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k142" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k142, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn substitute 43 10) (close _V0optimize__apply_k143) (bruijn k1 6 1) (bruijn k 14 1) (bruijn apply 4 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 43-1, 10)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k143, env)}),
      VGetArg(upenv, 6-1, 1),
      VGetArg(upenv, 14-1, 1),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0optimize__apply_k146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k146" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k146, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.133 26 1) (bruijn ##k.568 5 0) (bruijn ##x.571 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 26-1, 1)), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0
    );
 }
}
static void _V0optimize__apply_k145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k145" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k145, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn optimize-apply 43 17) (close _V0optimize__apply_k146) (bruijn ##x.573 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 43-1, 17)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k146, env)}),
      _var0
    );
 }
}
static void _V0optimize__apply_k141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k141" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k141, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.574 0 0) ((bruijn error 43 11) (close _V0optimize__apply_k142) (##string ##string.1647) (bruijn expr 25 1)) ((bruijn substitute 42 10) (close _V0optimize__apply_k145) (bruijn k1 5 1) (bruijn k 13 1) (bruijn apply 3 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 43-1, 11)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k142, env)}),
      VEncodePointer(&_V10string_D1647.sym, VPOINTER_OTHER),
      VGetArg(upenv, 25-1, 1)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 42-1, 10)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k145, env)}),
      VGetArg(upenv, 5-1, 1),
      VGetArg(upenv, 13-1, 1),
      upenv->up->up->vars[1]
    );
}
 }
}
static void _V0optimize__apply_k140(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k140" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k140, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 42 6) (close _V0optimize__apply_k141) (bruijn ##x.575 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 42-1, 6)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k141, env)}),
      _var0
    );
 }
}
static void _V0optimize__apply_k139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k139" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k139, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn = 41 7) (close _V0optimize__apply_k140) 1 (bruijn ##x.576 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 41-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k140, env)}),
      VEncodeInt(1l),
      _var0
    );
 }
}
static void _V0optimize__apply_lambda105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda105" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda105, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.171 1 1))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.167 7 1))) ((bruijn ref-count 39 6) (close _V0optimize__apply_k139) (bruijn k1 2 1) (bruijn apply 0 1)) ((bruijn ##k.568 0 0) #f)) ((bruijn ##k.568 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
VGetArg(upenv, 7-1, 1)
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 39-1, 6)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k139, env)}),
      upenv->up->vars[1],
      _var1
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda104" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda104, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.171 0 1)) ((close _V0optimize__apply_lambda105) (bruijn ##k.566 0 0) (##inline ##sys.car (bruijn ##expr.171 0 1))) ((bruijn ##k.566 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda105, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda103" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda103, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.170 1 1))) ((close _V0optimize__apply_lambda104) (bruijn ##k.564 0 0) (##inline ##sys.cdr (bruijn ##expr.169 2 1))) ((bruijn ##k.564 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda104, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda102" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda102, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.170 0 1)) ((close _V0optimize__apply_lambda103) (bruijn ##k.562 0 0) (##inline ##sys.car (bruijn ##expr.170 0 1))) ((bruijn ##k.562 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda103, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda101" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda101, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.169 0 1)) ((close _V0optimize__apply_lambda102) (bruijn ##k.560 0 0) (##inline ##sys.car (bruijn ##expr.169 0 1))) ((bruijn ##k.560 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda102, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_k138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k138" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k138, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.559 0 0) ((close _V0optimize__apply_lambda101) (bruijn ##k.557 1 0) (##inline ##sys.cdr (bruijn ##expr.168 1 1))) ((bruijn ##k.557 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda101, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda100" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda100, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.168 0 1)) ((bruijn equal? 34 2) (close _V0optimize__apply_k138) (quote lambda) (##inline ##sys.car (bruijn ##expr.168 0 1))) ((bruijn ##k.557 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 34-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k138, env)}),
      VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda99" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda99, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.167 0 1)) ((close _V0optimize__apply_lambda100) (bruijn ##k.555 0 0) (##inline ##sys.car (bruijn ##expr.167 0 1))) ((bruijn ##k.555 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda100, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda98" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda98, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0optimize__apply_lambda99) (bruijn ##k.554 0 0) (##inline ##sys.cdr (bruijn ##expr.166 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda99, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0optimize__apply_lambda97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda97" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda97, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.166 0 1)) ((close _V0optimize__apply_lambda98) (bruijn ##k.552 0 0) (##inline ##sys.car (bruijn ##expr.166 0 1))) ((bruijn ##k.552 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda98, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda96" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda96, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0optimize__apply_lambda97) (bruijn ##k.551 0 0) (##inline ##sys.cdr (bruijn ##expr.165 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda97, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0optimize__apply_lambda95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda95" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda95, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.165 0 1)) ((close _V0optimize__apply_lambda96) (bruijn ##k.549 0 0) (##inline ##sys.car (bruijn ##expr.165 0 1))) ((bruijn ##k.549 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda96, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_k137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k137" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k137, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.548 0 0) ((close _V0optimize__apply_lambda95) (bruijn ##k.546 1 0) (##inline ##sys.cdr (bruijn ##expr.164 1 1))) ((bruijn ##k.546 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda95, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda94" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda94, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.164 0 1)) ((bruijn equal? 27 2) (close _V0optimize__apply_k137) (quote ##sys.begin) (##inline ##sys.car (bruijn ##expr.164 0 1))) ((bruijn ##k.546 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 27-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k137, env)}),
      VEncodePointer(&_V10sys_Dbegin.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_k155(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k155" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k155, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.133 28 1) (bruijn ##k.515 6 0) (bruijn ##x.518 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 28-1, 1)), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0
    );
 }
}
static void _V0optimize__apply_k154(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k154" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k154, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn optimize-apply 45 17) (close _V0optimize__apply_k155) (##inline ##sys.cons (quote if) (##inline ##sys.cons (bruijn x 13 1) (##inline ##sys.cons (bruijn ##x.523 0 0) (##inline ##sys.cons (##inline ##sys.cons (bruijn k 15 1) (##inline ##sys.cons (quote #f) (quote ()))) (quote ()))))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 45-1, 17)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k155, env)}),
      VInlineCons(
VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 13-1, 1),
      VInlineCons(
_var0,
      VInlineCons(
VInlineCons(
VGetArg(upenv, 15-1, 1),
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
 }
}
static void _V0optimize__apply_k153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k153" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k153, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn substitute 44 10) (close _V0optimize__apply_k154) (bruijn k1 6 1) (bruijn k 14 1) (bruijn apply 4 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 44-1, 10)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k154, env)}),
      VGetArg(upenv, 6-1, 1),
      VGetArg(upenv, 14-1, 1),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0optimize__apply_k157(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k157" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k157, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.133 27 1) (bruijn ##k.515 5 0) (bruijn ##x.518 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 27-1, 1)), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0
    );
 }
}
static void _V0optimize__apply_k156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k156" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k156, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn optimize-apply 44 17) (close _V0optimize__apply_k157) (##inline ##sys.cons (quote if) (##inline ##sys.cons (bruijn x 12 1) (##inline ##sys.cons (bruijn ##x.523 0 0) (##inline ##sys.cons (##inline ##sys.cons (bruijn k 14 1) (##inline ##sys.cons (quote #f) (quote ()))) (quote ()))))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 44-1, 17)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k157, env)}),
      VInlineCons(
VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 12-1, 1),
      VInlineCons(
_var0,
      VInlineCons(
VInlineCons(
VGetArg(upenv, 14-1, 1),
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
 }
}
static void _V0optimize__apply_k152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k152" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k152, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.527 0 0) ((bruijn error 44 11) (close _V0optimize__apply_k153) (##string ##string.1648) (bruijn expr 26 1)) ((bruijn substitute 43 10) (close _V0optimize__apply_k156) (bruijn k1 5 1) (bruijn k 13 1) (bruijn apply 3 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 44-1, 11)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k153, env)}),
      VEncodePointer(&_V10string_D1648.sym, VPOINTER_OTHER),
      VGetArg(upenv, 26-1, 1)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 43-1, 10)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k156, env)}),
      VGetArg(upenv, 5-1, 1),
      VGetArg(upenv, 13-1, 1),
      upenv->up->up->vars[1]
    );
}
 }
}
static void _V0optimize__apply_k151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k151" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k151, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 43 6) (close _V0optimize__apply_k152) (bruijn ##x.528 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 43-1, 6)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k152, env)}),
      _var0
    );
 }
}
static void _V0optimize__apply_k150(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k150" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k150, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn = 42 7) (close _V0optimize__apply_k151) 1 (bruijn ##x.529 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 42-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k151, env)}),
      VEncodeInt(1l),
      _var0
    );
 }
}
static void _V0optimize__apply_lambda117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda117" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda117, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.179 1 1))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.175 7 1))) ((bruijn ref-count 40 6) (close _V0optimize__apply_k150) (bruijn k1 2 1) (bruijn apply 0 1)) ((bruijn ##k.515 0 0) #f)) ((bruijn ##k.515 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
VGetArg(upenv, 7-1, 1)
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 40-1, 6)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k150, env)}),
      upenv->up->vars[1],
      _var1
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda116" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda116, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.179 0 1)) ((close _V0optimize__apply_lambda117) (bruijn ##k.513 0 0) (##inline ##sys.car (bruijn ##expr.179 0 1))) ((bruijn ##k.513 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda117, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda115" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda115, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.178 1 1))) ((close _V0optimize__apply_lambda116) (bruijn ##k.511 0 0) (##inline ##sys.cdr (bruijn ##expr.177 2 1))) ((bruijn ##k.511 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda116, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda114" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda114, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.178 0 1)) ((close _V0optimize__apply_lambda115) (bruijn ##k.509 0 0) (##inline ##sys.car (bruijn ##expr.178 0 1))) ((bruijn ##k.509 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda115, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda113" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda113, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.177 0 1)) ((close _V0optimize__apply_lambda114) (bruijn ##k.507 0 0) (##inline ##sys.car (bruijn ##expr.177 0 1))) ((bruijn ##k.507 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda114, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_k149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k149" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k149, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.506 0 0) ((close _V0optimize__apply_lambda113) (bruijn ##k.504 1 0) (##inline ##sys.cdr (bruijn ##expr.176 1 1))) ((bruijn ##k.504 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda113, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda112" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda112, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.176 0 1)) ((bruijn equal? 35 2) (close _V0optimize__apply_k149) (quote lambda) (##inline ##sys.car (bruijn ##expr.176 0 1))) ((bruijn ##k.504 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 35-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k149, env)}),
      VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda111" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda111, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.175 0 1)) ((close _V0optimize__apply_lambda112) (bruijn ##k.502 0 0) (##inline ##sys.car (bruijn ##expr.175 0 1))) ((bruijn ##k.502 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda112, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda110" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda110, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0optimize__apply_lambda111) (bruijn ##k.501 0 0) (##inline ##sys.cdr (bruijn ##expr.174 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda111, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0optimize__apply_lambda109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda109" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda109, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.174 0 1)) ((close _V0optimize__apply_lambda110) (bruijn ##k.499 0 0) (##inline ##sys.car (bruijn ##expr.174 0 1))) ((bruijn ##k.499 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda110, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda108" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda108, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0optimize__apply_lambda109) (bruijn ##k.498 0 0) (##inline ##sys.cdr (bruijn ##expr.173 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda109, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0optimize__apply_lambda107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda107" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda107, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.173 0 1)) ((close _V0optimize__apply_lambda108) (bruijn ##k.496 0 0) (##inline ##sys.car (bruijn ##expr.173 0 1))) ((bruijn ##k.496 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda108, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_k148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k148" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k148, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.495 0 0) ((close _V0optimize__apply_lambda107) (bruijn ##k.493 1 0) (##inline ##sys.cdr (bruijn ##expr.172 1 1))) ((bruijn ##k.493 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda107, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda106" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda106, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.172 0 1)) ((bruijn equal? 28 2) (close _V0optimize__apply_k148) (quote ##sys.and) (##inline ##sys.car (bruijn ##expr.172 0 1))) ((bruijn ##k.493 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 28-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k148, env)}),
      VEncodePointer(&_V10sys_Dand.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_k166(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k166" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k166, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.133 29 1) (bruijn ##k.462 6 0) (bruijn ##x.465 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 29-1, 1)), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0
    );
 }
}
static void _V0optimize__apply_k165(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k165" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k165, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn optimize-apply 46 17) (close _V0optimize__apply_k166) (##inline ##sys.cons (quote if) (##inline ##sys.cons (bruijn x 13 1) (##inline ##sys.cons (##inline ##sys.cons (bruijn k 15 1) (##inline ##sys.cons (bruijn x 13 1) (quote ()))) (##inline ##sys.cons (bruijn ##x.472 0 0) (quote ()))))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 46-1, 17)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k166, env)}),
      VInlineCons(
VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 13-1, 1),
      VInlineCons(
VInlineCons(
VGetArg(upenv, 15-1, 1),
      VInlineCons(
VGetArg(upenv, 13-1, 1),
      VNULL
    )

    )
,
      VInlineCons(
_var0,
      VNULL
    )

    )

    )

    )

    );
 }
}
static void _V0optimize__apply_k164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k164" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k164, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn substitute 45 10) (close _V0optimize__apply_k165) (bruijn k1 6 1) (bruijn k 14 1) (bruijn apply 4 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 45-1, 10)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k165, env)}),
      VGetArg(upenv, 6-1, 1),
      VGetArg(upenv, 14-1, 1),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0optimize__apply_k168(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k168" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k168, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.133 28 1) (bruijn ##k.462 5 0) (bruijn ##x.465 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 28-1, 1)), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0
    );
 }
}
static void _V0optimize__apply_k167(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k167" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k167, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn optimize-apply 45 17) (close _V0optimize__apply_k168) (##inline ##sys.cons (quote if) (##inline ##sys.cons (bruijn x 12 1) (##inline ##sys.cons (##inline ##sys.cons (bruijn k 14 1) (##inline ##sys.cons (bruijn x 12 1) (quote ()))) (##inline ##sys.cons (bruijn ##x.472 0 0) (quote ()))))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 45-1, 17)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k168, env)}),
      VInlineCons(
VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 12-1, 1),
      VInlineCons(
VInlineCons(
VGetArg(upenv, 14-1, 1),
      VInlineCons(
VGetArg(upenv, 12-1, 1),
      VNULL
    )

    )
,
      VInlineCons(
_var0,
      VNULL
    )

    )

    )

    )

    );
 }
}
static void _V0optimize__apply_k163(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k163" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k163, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.474 0 0) ((bruijn error 45 11) (close _V0optimize__apply_k164) (##string ##string.1649) (bruijn expr 27 1)) ((bruijn substitute 44 10) (close _V0optimize__apply_k167) (bruijn k1 5 1) (bruijn k 13 1) (bruijn apply 3 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 45-1, 11)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k164, env)}),
      VEncodePointer(&_V10string_D1649.sym, VPOINTER_OTHER),
      VGetArg(upenv, 27-1, 1)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 44-1, 10)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k167, env)}),
      VGetArg(upenv, 5-1, 1),
      VGetArg(upenv, 13-1, 1),
      upenv->up->up->vars[1]
    );
}
 }
}
static void _V0optimize__apply_k162(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k162" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k162, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 44 6) (close _V0optimize__apply_k163) (bruijn ##x.475 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 44-1, 6)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k163, env)}),
      _var0
    );
 }
}
static void _V0optimize__apply_k161(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k161" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k161, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn = 43 7) (close _V0optimize__apply_k162) 1 (bruijn ##x.476 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 43-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k162, env)}),
      VEncodeInt(1l),
      _var0
    );
 }
}
static void _V0optimize__apply_lambda129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda129" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda129, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.187 1 1))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.183 7 1))) ((bruijn ref-count 41 6) (close _V0optimize__apply_k161) (bruijn k1 2 1) (bruijn apply 0 1)) ((bruijn ##k.462 0 0) #f)) ((bruijn ##k.462 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
VGetArg(upenv, 7-1, 1)
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 41-1, 6)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k161, env)}),
      upenv->up->vars[1],
      _var1
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda128" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda128, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.187 0 1)) ((close _V0optimize__apply_lambda129) (bruijn ##k.460 0 0) (##inline ##sys.car (bruijn ##expr.187 0 1))) ((bruijn ##k.460 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda129, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda127" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda127, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.186 1 1))) ((close _V0optimize__apply_lambda128) (bruijn ##k.458 0 0) (##inline ##sys.cdr (bruijn ##expr.185 2 1))) ((bruijn ##k.458 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda128, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda126" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda126, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.186 0 1)) ((close _V0optimize__apply_lambda127) (bruijn ##k.456 0 0) (##inline ##sys.car (bruijn ##expr.186 0 1))) ((bruijn ##k.456 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda127, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda125" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda125, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.185 0 1)) ((close _V0optimize__apply_lambda126) (bruijn ##k.454 0 0) (##inline ##sys.car (bruijn ##expr.185 0 1))) ((bruijn ##k.454 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda126, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_k160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k160" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k160, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.453 0 0) ((close _V0optimize__apply_lambda125) (bruijn ##k.451 1 0) (##inline ##sys.cdr (bruijn ##expr.184 1 1))) ((bruijn ##k.451 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda125, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda124" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda124, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.184 0 1)) ((bruijn equal? 36 2) (close _V0optimize__apply_k160) (quote lambda) (##inline ##sys.car (bruijn ##expr.184 0 1))) ((bruijn ##k.451 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 36-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k160, env)}),
      VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda123" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda123, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.183 0 1)) ((close _V0optimize__apply_lambda124) (bruijn ##k.449 0 0) (##inline ##sys.car (bruijn ##expr.183 0 1))) ((bruijn ##k.449 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda124, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda122" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda122, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0optimize__apply_lambda123) (bruijn ##k.448 0 0) (##inline ##sys.cdr (bruijn ##expr.182 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda123, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0optimize__apply_lambda121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda121" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda121, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.182 0 1)) ((close _V0optimize__apply_lambda122) (bruijn ##k.446 0 0) (##inline ##sys.car (bruijn ##expr.182 0 1))) ((bruijn ##k.446 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda122, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda120" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda120, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0optimize__apply_lambda121) (bruijn ##k.445 0 0) (##inline ##sys.cdr (bruijn ##expr.181 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda121, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0optimize__apply_lambda119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda119" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda119, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.181 0 1)) ((close _V0optimize__apply_lambda120) (bruijn ##k.443 0 0) (##inline ##sys.car (bruijn ##expr.181 0 1))) ((bruijn ##k.443 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda120, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_k159(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k159" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k159, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.442 0 0) ((close _V0optimize__apply_lambda119) (bruijn ##k.440 1 0) (##inline ##sys.cdr (bruijn ##expr.180 1 1))) ((bruijn ##k.440 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda119, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda118" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda118, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.180 0 1)) ((bruijn equal? 29 2) (close _V0optimize__apply_k159) (quote ##sys.or) (##inline ##sys.car (bruijn ##expr.180 0 1))) ((bruijn ##k.440 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 29-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k159, env)}),
      VEncodePointer(&_V10sys_Dor.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_k171(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k171" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k171, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.133 13 1) (bruijn ##k.435 2 0) (bruijn ##x.438 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 13-1, 1)), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0optimize__apply_k170(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k170" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k170, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.437 0 0) ((bruijn error 31 11) (close _V0optimize__apply_k171) (##string ##string.1650) (bruijn expr 13 1)) ((bruijn ##k.435 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 31-1, 11)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k171, env)}),
      VEncodePointer(&_V10string_D1650.sym, VPOINTER_OTHER),
      VGetArg(upenv, 13-1, 1)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda130" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda130, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.188 0 1)) ((bruijn equal? 30 2) (close _V0optimize__apply_k170) (quote ##sys.if) (##inline ##sys.car (bruijn ##expr.188 0 1))) ((bruijn ##k.435 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 30-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k170, env)}),
      VEncodePointer(&_V10sys_Dif.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_k174(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k174" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k174, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.133 14 1) (bruijn ##k.430 2 0) (bruijn ##x.433 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 1)), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0optimize__apply_k173(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k173" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k173, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.432 0 0) ((bruijn error 32 11) (close _V0optimize__apply_k174) (##string ##string.1651) (bruijn expr 14 1)) ((bruijn ##k.430 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 32-1, 11)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k174, env)}),
      VEncodePointer(&_V10string_D1651.sym, VPOINTER_OTHER),
      VGetArg(upenv, 14-1, 1)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda131" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda131, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.189 0 1)) ((bruijn equal? 31 2) (close _V0optimize__apply_k173) (quote ##sys.or) (##inline ##sys.car (bruijn ##expr.189 0 1))) ((bruijn ##k.430 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 31-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k173, env)}),
      VEncodePointer(&_V10sys_Dor.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_k177(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k177" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k177, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.133 15 1) (bruijn ##k.425 2 0) (bruijn ##x.428 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 15-1, 1)), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0optimize__apply_k176(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k176" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k176, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.427 0 0) ((bruijn error 33 11) (close _V0optimize__apply_k177) (##string ##string.1652) (bruijn expr 15 1)) ((bruijn ##k.425 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 33-1, 11)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k177, env)}),
      VEncodePointer(&_V10string_D1652.sym, VPOINTER_OTHER),
      VGetArg(upenv, 15-1, 1)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda132" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda132, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.190 0 1)) ((bruijn equal? 32 2) (close _V0optimize__apply_k176) (quote ##sys.and) (##inline ##sys.car (bruijn ##expr.190 0 1))) ((bruijn ##k.425 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 32-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k176, env)}),
      VEncodePointer(&_V10sys_Dand.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_k180(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k180" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k180, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.133 16 1) (bruijn ##k.420 2 0) (bruijn ##x.423 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 16-1, 1)), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0optimize__apply_k179(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k179" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k179, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.422 0 0) ((bruijn error 34 11) (close _V0optimize__apply_k180) (##string ##string.1653) (bruijn expr 16 1)) ((bruijn ##k.420 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 34-1, 11)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k180, env)}),
      VEncodePointer(&_V10string_D1653.sym, VPOINTER_OTHER),
      VGetArg(upenv, 16-1, 1)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda133" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda133, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.191 0 1)) ((bruijn equal? 33 2) (close _V0optimize__apply_k179) (quote ##sys.begin) (##inline ##sys.car (bruijn ##expr.191 0 1))) ((bruijn ##k.420 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 33-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k179, env)}),
      VEncodePointer(&_V10sys_Dbegin.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_k186(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k186" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k186, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.133 24 1) (bruijn ##k.402 5 0) (bruijn ##x.403 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 24-1, 1)), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0
    );
 }
}
static void _V0optimize__apply_k185(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k185" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k185, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn optimize-apply 41 17) (close _V0optimize__apply_k186) (##inline ##sys.cons (bruijn ##x.406 1 0) (##inline ##sys.cons (##inline ##sys.cons (quote ##inline) (##inline ##sys.cons (bruijn f 7 1) (bruijn ##x.410 0 0))) (quote ()))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 41-1, 17)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k186, env)}),
      VInlineCons(
upenv->vars[0],
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10inline.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 7-1, 1),
      _var0
    )

    )
,
      VNULL
    )

    )

    );
 }
}
static void _V0optimize__apply_k184(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k184" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k184, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn map 41 3) (close _V0optimize__apply_k185) (bruijn optimize-atom 40 18) (bruijn xs 3 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 41-1, 3)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k185, env)}),
      VGetArg(upenv, 40-1, 18),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0optimize__apply_k191(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k191" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k191, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.133 26 1) (bruijn ##k.402 7 0) (bruijn ##x.403 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 26-1, 1)), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0
    );
 }
}
static void _V0optimize__apply_k190(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k190" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k190, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 44 10) (close _V0optimize__apply_k191) (bruijn ##x.411 3 0) (bruijn ##x.412 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 44-1, 10)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k191, env)}),
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0optimize__apply_k189(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k189" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k189, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 43 10) (close _V0optimize__apply_k190) (bruijn ##x.413 1 0) (bruijn ##x.414 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 43-1, 10)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k190, env)}),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0optimize__apply_k188(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k188" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k188, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn map 42 3) (close _V0optimize__apply_k189) (bruijn optimize-atom 41 18) (bruijn xs 4 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 42-1, 3)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k189, env)}),
      VGetArg(upenv, 41-1, 18),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0optimize__apply_k187(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k187" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k187, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn optimize-atom 40 18) (close _V0optimize__apply_k188) (bruijn k 4 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 40-1, 18)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k188, env)}),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0optimize__apply_k183(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k183" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k183, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.404 0 0) ((bruijn optimize-atom 39 18) (close _V0optimize__apply_k184) (bruijn k 3 1)) ((bruijn optimize-atom 39 18) (close _V0optimize__apply_k187) (bruijn f 5 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 39-1, 18)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k184, env)}),
      upenv->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 39-1, 18)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k187, env)}),
      VGetArg(upenv, 5-1, 1)
    );
}
 }
}
static void _V0optimize__apply_k196(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k196" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k196, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.133 25 1) (bruijn ##k.402 6 0) (bruijn ##x.403 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 25-1, 1)), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0
    );
 }
}
static void _V0optimize__apply_k195(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k195" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k195, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 43 10) (close _V0optimize__apply_k196) (bruijn ##x.411 3 0) (bruijn ##x.412 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 43-1, 10)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k196, env)}),
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0optimize__apply_k194(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k194" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k194, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 42 10) (close _V0optimize__apply_k195) (bruijn ##x.413 1 0) (bruijn ##x.414 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 42-1, 10)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k195, env)}),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0optimize__apply_k193(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k193" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k193, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn map 41 3) (close _V0optimize__apply_k194) (bruijn optimize-atom 40 18) (bruijn xs 3 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 41-1, 3)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k194, env)}),
      VGetArg(upenv, 40-1, 18),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0optimize__apply_k192(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k192" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k192, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn optimize-atom 39 18) (close _V0optimize__apply_k193) (bruijn k 3 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 39-1, 18)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k193, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0optimize__apply_k182(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k182" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k182, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.415 0 0) ((bruijn lookup-inline 39 8) (close _V0optimize__apply_k183) (bruijn f 4 1)) ((bruijn optimize-atom 38 18) (close _V0optimize__apply_k192) (bruijn f 4 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 39-1, 8)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k183, env)}),
      upenv->up->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 38-1, 18)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k192, env)}),
      upenv->up->up->up->vars[1]
    );
}
 }
}
static void _V0optimize__apply_lambda138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda138" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda138, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn symbol? 38 9) (close _V0optimize__apply_k182) (bruijn f 3 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 38-1, 9)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k182, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0optimize__apply_lambda137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda137" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda137, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0optimize__apply_lambda138) (bruijn ##k.401 0 0) (##inline ##sys.cdr (bruijn ##expr.193 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda138, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0optimize__apply_lambda136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda136" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda136, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.193 0 1)) ((close _V0optimize__apply_lambda137) (bruijn ##k.399 0 0) (##inline ##sys.car (bruijn ##expr.193 0 1))) ((bruijn ##k.399 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda137, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_lambda135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda135" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda135, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0optimize__apply_lambda136) (bruijn ##k.398 0 0) (##inline ##sys.cdr (bruijn ##expr.192 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda136, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0optimize__apply_lambda134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda134" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda134, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.192 0 1)) ((close _V0optimize__apply_lambda135) (bruijn ##k.396 0 0) (##inline ##sys.car (bruijn ##expr.192 0 1))) ((bruijn ##k.396 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda135, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_k197(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k197" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k197, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 34 11) (bruijn ##k.381 14 0) (##string ##string.1654))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 34-1, 11)), runtime,
      VGetArg(upenv, 14-1, 0),
      VEncodePointer(&_V10string_D1654.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0optimize__apply_k181(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k181" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k181, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0optimize__apply_lambda134) (close _V0optimize__apply_k197) (bruijn ##input.134 13 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda134, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k197, env)}),
      VGetArg(upenv, 13-1, 1)
    );
 }
}
static void _V0optimize__apply_k178(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k178" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k178, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0optimize__apply_lambda133) (close _V0optimize__apply_k181) (bruijn ##input.134 12 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda133, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k181, env)}),
      VGetArg(upenv, 12-1, 1)
    );
 }
}
static void _V0optimize__apply_k175(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k175" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k175, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0optimize__apply_lambda132) (close _V0optimize__apply_k178) (bruijn ##input.134 11 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda132, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k178, env)}),
      VGetArg(upenv, 11-1, 1)
    );
 }
}
static void _V0optimize__apply_k172(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k172" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k172, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0optimize__apply_lambda131) (close _V0optimize__apply_k175) (bruijn ##input.134 10 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda131, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k175, env)}),
      VGetArg(upenv, 10-1, 1)
    );
 }
}
static void _V0optimize__apply_k169(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k169" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k169, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0optimize__apply_lambda130) (close _V0optimize__apply_k172) (bruijn ##input.134 9 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda130, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k172, env)}),
      VGetArg(upenv, 9-1, 1)
    );
 }
}
static void _V0optimize__apply_k158(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k158" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k158, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0optimize__apply_lambda118) (close _V0optimize__apply_k169) (bruijn ##input.134 8 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda118, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k169, env)}),
      VGetArg(upenv, 8-1, 1)
    );
 }
}
static void _V0optimize__apply_k147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k147" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k147, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0optimize__apply_lambda106) (close _V0optimize__apply_k158) (bruijn ##input.134 7 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda106, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k158, env)}),
      VGetArg(upenv, 7-1, 1)
    );
 }
}
static void _V0optimize__apply_k136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k136" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k136, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0optimize__apply_lambda94) (close _V0optimize__apply_k147) (bruijn ##input.134 6 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda94, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k147, env)}),
      VGetArg(upenv, 6-1, 1)
    );
 }
}
static void _V0optimize__apply_k112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k112" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k112, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0optimize__apply_lambda75) (close _V0optimize__apply_k136) (bruijn ##input.134 5 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda75, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k136, env)}),
      VGetArg(upenv, 5-1, 1)
    );
 }
}
static void _V0optimize__apply_k108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k108" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k108, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0optimize__apply_lambda68) (close _V0optimize__apply_k112) (bruijn ##input.134 4 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda68, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k112, env)}),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0optimize__apply_k105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k105" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k105, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0optimize__apply_lambda62) (close _V0optimize__apply_k108) (bruijn ##input.134 3 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda62, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k108, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0optimize__apply_k102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k102" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k102, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0optimize__apply_lambda56) (close _V0optimize__apply_k105) (bruijn ##input.134 2 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda56, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k105, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0optimize__apply_k99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k99" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_k99, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0optimize__apply_lambda54) (close _V0optimize__apply_k102) (bruijn ##input.134 1 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda54, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k102, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0optimize__apply_lambda51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda51" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda51, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0optimize__apply_lambda52) (close _V0optimize__apply_k99) (bruijn ##input.134 0 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda52, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_k99, env)}),
      _var1
    );
 }
}
static void _V0optimize__apply_lambda50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda50" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0optimize__apply_lambda50, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda50, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0optimize__apply_lambda51) (bruijn ##k.380 0 0) (bruijn expr 1 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda51, env)}, runtime,
      _var0,
      upenv->vars[1]
    );
 }
}
static void _V0optimize__apply_lambda49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda49" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0optimize__apply_lambda49, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__apply_lambda49, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 18 1) (bruijn ##k.379 0 0) (close _V0optimize__apply_lambda50))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 18-1, 1)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda50, env)})
    );
 }
}
static void cps_k51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "cps_k51" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to cps_k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)cps_k51, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close cps_k52) (bruijn optimize-apply 16 17) (close _V0optimize__apply_lambda49))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)cps_k52, env)}),
      VEncodeInt(16l), VEncodeInt(17l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__apply_lambda49, env)})
    );
 }
}
static void _V0optimize__let_k201(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k201" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__let_k201, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.105 14 1) (bruijn ##k.894 3 0) (bruijn ##x.896 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 1)), runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0optimize__let_k200(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k200" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__let_k200, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn optimize-apply 30 17) (close _V0optimize__let_k201) (bruijn ##x.898 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 30-1, 17)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__let_k201, env)}),
      _var0
    );
 }
}
static void _V0optimize__let_k203(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k203" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__let_k203, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.105 14 1) (bruijn ##k.894 3 0) (##inline ##sys.cons (bruijn ##x.899 1 0) (##inline ##sys.cons (bruijn ##x.901 0 0) (quote ()))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 1)), runtime,
      upenv->up->up->vars[0],
      VInlineCons(
upenv->vars[0],
      VInlineCons(
_var0,
      VNULL
    )

    )

    );
 }
}
static void _V0optimize__let_k202(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k202" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__let_k202, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn optimize-atom 30 18) (close _V0optimize__let_k203) (bruijn x 2 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 30-1, 18)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__let_k203, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0optimize__let_k199(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k199" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__let_k199, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.897 0 0) ((bruijn substitute 29 10) (close _V0optimize__let_k200) (bruijn y 5 1) (bruijn x 1 1) (bruijn expr 3 1)) ((bruijn optimize-atom 29 18) (close _V0optimize__let_k202) (##inline ##sys.cons (quote continuation) (##inline ##sys.cons (##inline ##sys.cons (bruijn y 5 1) (quote ())) (##inline ##sys.cons (bruijn expr 3 1) (quote ()))))))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 29-1, 10)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__let_k200, env)}),
      VGetArg(upenv, 5-1, 1),
      upenv->vars[1],
      upenv->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 29-1, 18)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__let_k202, env)}),
      VInlineCons(
VEncodePointer(&_V0continuation.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VGetArg(upenv, 5-1, 1),
      VNULL
    )
,
      VInlineCons(
upenv->up->up->vars[1],
      VNULL
    )

    )

    )

    );
}
 }
}
static void _V0optimize__let_lambda150(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda150" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__let_lambda150, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.112 1 1))) ((bruijn reducible? 28 14) (close _V0optimize__let_k199) (bruijn x 0 1) (bruijn y 4 1) (bruijn expr 2 1)) ((bruijn ##k.894 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 28-1, 14)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__let_k199, env)}),
      _var1,
      upenv->up->up->up->vars[1],
      upenv->up->vars[1]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__let_lambda149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda149" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__let_lambda149, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.112 0 1)) ((close _V0optimize__let_lambda150) (bruijn ##k.892 0 0) (##inline ##sys.car (bruijn ##expr.112 0 1))) ((bruijn ##k.892 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__let_lambda150, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__let_lambda148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda148" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__let_lambda148, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.111 1 1))) ((close _V0optimize__let_lambda149) (bruijn ##k.890 0 0) (##inline ##sys.cdr (bruijn ##expr.107 7 1))) ((bruijn ##k.890 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__let_lambda149, env)}, runtime,
      _var0,
      VInlineCdr(
VGetArg(upenv, 7-1, 1)
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__let_lambda147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda147" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__let_lambda147, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.111 0 1)) ((close _V0optimize__let_lambda148) (bruijn ##k.888 0 0) (##inline ##sys.car (bruijn ##expr.111 0 1))) ((bruijn ##k.888 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__let_lambda148, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__let_lambda146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda146" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__let_lambda146, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.110 1 1))) ((close _V0optimize__let_lambda147) (bruijn ##k.886 0 0) (##inline ##sys.cdr (bruijn ##expr.109 2 1))) ((bruijn ##k.886 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__let_lambda147, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__let_lambda145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda145" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__let_lambda145, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.110 0 1)) ((close _V0optimize__let_lambda146) (bruijn ##k.884 0 0) (##inline ##sys.car (bruijn ##expr.110 0 1))) ((bruijn ##k.884 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__let_lambda146, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__let_lambda144(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda144" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__let_lambda144, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.109 0 1)) ((close _V0optimize__let_lambda145) (bruijn ##k.882 0 0) (##inline ##sys.car (bruijn ##expr.109 0 1))) ((bruijn ##k.882 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__let_lambda145, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__let_k198(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k198" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__let_k198, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.881 0 0) ((close _V0optimize__let_lambda144) (bruijn ##k.879 1 0) (##inline ##sys.cdr (bruijn ##expr.108 1 1))) ((bruijn ##k.879 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__let_lambda144, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__let_lambda143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda143" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__let_lambda143, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.108 0 1)) ((bruijn equal? 21 2) (close _V0optimize__let_k198) (quote continuation) (##inline ##sys.car (bruijn ##expr.108 0 1))) ((bruijn ##k.879 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 21-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__let_k198, env)}),
      VEncodePointer(&_V0continuation.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__let_lambda142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda142" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__let_lambda142, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.107 0 1)) ((close _V0optimize__let_lambda143) (bruijn ##k.877 0 0) (##inline ##sys.car (bruijn ##expr.107 0 1))) ((bruijn ##k.877 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__let_lambda143, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__let_k206(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k206" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__let_k206, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.817 1 0) (bruijn ##expr.116 4 1) (quote ()))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[1]), runtime,
      upenv->vars[0],
      upenv->up->up->up->vars[1],
      VNULL
    );
 }
}
static void _V0loop_lambda161(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda161" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda161, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##kk.119 1 1) (bruijn ##k.825 0 0) (##inline ##sys.cdr (bruijn ##expr.120 5 1)) (##inline ##sys.cons (bruijn ys 0 1) (bruijn ##ys.117 5 2)))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[1]), runtime,
      _var0,
      VInlineCdr(
VGetArg(upenv, 5-1, 1)
    )
,
      VInlineCons(
_var1,
      VGetArg(upenv, 5-1, 2)
    )

    );
 }
}
static void _V0loop_k210(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k210" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k210, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k210, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.118 8 1) (bruijn ##k.822 2 0) (bruijn ##expr.120 6 1) (bruijn ##x.824 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 8-1, 1)), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 6-1, 1),
      _var0
    );
 }
}
static void _V0loop_k209(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k209" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k209, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 34 5) (close _V0loop_k210) (bruijn ##ys.117 5 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 34-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k210, env)}),
      VGetArg(upenv, 5-1, 2)
    );
 }
}
static void _V0loop_lambda160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda160" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda160, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda160, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_lambda161) (close _V0loop_k209) (##inline ##sys.car (bruijn ##expr.120 4 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda161, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k209, env)}),
      VInlineCar(
upenv->up->up->up->vars[1]
    )

    );
 }
}
static void _V0loop_lambda159(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda159" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda159, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 32 1) (bruijn ##k.821 0 0) (close _V0loop_lambda160))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 32-1, 1)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda160, env)})
    );
 }
}
static void _V0loop_k208(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k208" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k208, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k208, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call-with-values 31 4) (bruijn ##k.819 2 0) (close _V0loop_lambda159) (bruijn loop 3 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 31-1, 4)), runtime,
      upenv->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda159, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0loop_k207(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k207" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k207, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##kk.118 3 1) (close _V0loop_k208) (bruijn ##expr.120 1 1) (bruijn ##x.830 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->vars[1]), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k208, env)}),
      upenv->vars[1],
      _var0
    );
 }
}
static void _V0loop_lambda164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda164" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda164, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##kk.119 1 1) (bruijn ##k.825 0 0) (##inline ##sys.cdr (bruijn ##expr.120 3 1)) (##inline ##sys.cons (bruijn ys 0 1) (bruijn ##ys.117 3 2)))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[1]), runtime,
      _var0,
      VInlineCdr(
upenv->up->up->vars[1]
    )
,
      VInlineCons(
_var1,
      upenv->up->up->vars[2]
    )

    );
 }
}
static void _V0loop_k212(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k212" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k212, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k212, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.118 6 1) (bruijn ##k.822 2 0) (bruijn ##expr.120 4 1) (bruijn ##x.824 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 6-1, 1)), runtime,
      upenv->up->vars[0],
      upenv->up->up->up->vars[1],
      _var0
    );
 }
}
static void _V0loop_k211(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k211" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k211, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 32 5) (close _V0loop_k212) (bruijn ##ys.117 3 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 32-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k212, env)}),
      upenv->up->up->vars[2]
    );
 }
}
static void _V0loop_lambda163(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda163" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda163, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda163, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_lambda164) (close _V0loop_k211) (##inline ##sys.car (bruijn ##expr.120 2 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda164, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k211, env)}),
      VInlineCar(
upenv->up->vars[1]
    )

    );
 }
}
static void _V0loop_lambda162(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda162" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda162, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 30 1) (bruijn ##k.821 0 0) (close _V0loop_lambda163))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 30-1, 1)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda163, env)})
    );
 }
}
static void _V0loop_lambda158(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0loop_lambda158" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda158, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda158, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.120 0 1))) ((bruijn reverse 29 5) (close _V0loop_k207) (bruijn ##ys.117 0 2)) ((bruijn call-with-values 29 4) (bruijn ##k.819 0 0) (close _V0loop_lambda162) (bruijn loop 1 1)))
if(VDecodeBool(
VInlineNot(
VInlinePairP(
_var1
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 29-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k207, env)}),
      _var2
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 29-1, 4)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda162, env)}),
      upenv->vars[1]
    );
}
 }
}
static void _V0optimize__let_lambda157(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda157" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__let_lambda157, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0optimize__let_k206) (bruijn loop 0 1) (close _V0loop_lambda158))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__let_k206, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda158, env)})
    );
 }
}
static void _V0optimize__let_lambda156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda156" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0optimize__let_lambda156, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__let_lambda156, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0optimize__let_lambda157) (bruijn ##k.816 0 0) #f)
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__let_lambda157, env)}, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0optimize__let_lambda155(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda155" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_lambda155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__let_lambda155, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 26 1) (bruijn ##k.815 0 0) (close _V0optimize__let_lambda156))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 26-1, 1)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__let_lambda156, env)})
    );
 }
}
static void _V0optimize__let_k213(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k213" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k213, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__let_k213, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.841 1 0) (bruijn ##expr.122 4 1) (quote ()))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[1]), runtime,
      upenv->vars[0],
      upenv->up->up->up->vars[1],
      VNULL
    );
 }
}
static void _V0loop_lambda175(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda175" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda175, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##kk.125 1 1) (bruijn ##k.849 0 0) (##inline ##sys.cdr (bruijn ##expr.126 5 1)) (##inline ##sys.cons (bruijn xs 0 1) (bruijn ##xs.123 5 2)))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[1]), runtime,
      _var0,
      VInlineCdr(
VGetArg(upenv, 5-1, 1)
    )
,
      VInlineCons(
_var1,
      VGetArg(upenv, 5-1, 2)
    )

    );
 }
}
static void _V0loop_k217(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k217" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k217, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k217, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.124 8 1) (bruijn ##k.846 2 0) (bruijn ##expr.126 6 1) (bruijn ##x.848 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 8-1, 1)), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 6-1, 1),
      _var0
    );
 }
}
static void _V0loop_k216(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k216" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k216, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k216, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 38 5) (close _V0loop_k217) (bruijn ##xs.123 5 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 38-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k217, env)}),
      VGetArg(upenv, 5-1, 2)
    );
 }
}
static void _V0loop_lambda174(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda174" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda174, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda174, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_lambda175) (close _V0loop_k216) (##inline ##sys.car (bruijn ##expr.126 4 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda175, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k216, env)}),
      VInlineCar(
upenv->up->up->up->vars[1]
    )

    );
 }
}
static void _V0loop_lambda173(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda173" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda173, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 36 1) (bruijn ##k.845 0 0) (close _V0loop_lambda174))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 36-1, 1)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda174, env)})
    );
 }
}
static void _V0loop_k215(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k215" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k215, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call-with-values 35 4) (bruijn ##k.843 2 0) (close _V0loop_lambda173) (bruijn loop 3 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 35-1, 4)), runtime,
      upenv->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda173, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0loop_k214(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k214" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k214, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k214, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##kk.124 3 1) (close _V0loop_k215) (bruijn ##expr.126 1 1) (bruijn ##x.854 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->vars[1]), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k215, env)}),
      upenv->vars[1],
      _var0
    );
 }
}
static void _V0loop_lambda178(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda178" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda178, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##kk.125 1 1) (bruijn ##k.849 0 0) (##inline ##sys.cdr (bruijn ##expr.126 3 1)) (##inline ##sys.cons (bruijn xs 0 1) (bruijn ##xs.123 3 2)))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[1]), runtime,
      _var0,
      VInlineCdr(
upenv->up->up->vars[1]
    )
,
      VInlineCons(
_var1,
      upenv->up->up->vars[2]
    )

    );
 }
}
static void _V0loop_k219(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k219" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k219, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k219, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.124 6 1) (bruijn ##k.846 2 0) (bruijn ##expr.126 4 1) (bruijn ##x.848 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 6-1, 1)), runtime,
      upenv->up->vars[0],
      upenv->up->up->up->vars[1],
      _var0
    );
 }
}
static void _V0loop_k218(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k218" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k218, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k218, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 36 5) (close _V0loop_k219) (bruijn ##xs.123 3 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 36-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k219, env)}),
      upenv->up->up->vars[2]
    );
 }
}
static void _V0loop_lambda177(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda177" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda177, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda177, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_lambda178) (close _V0loop_k218) (##inline ##sys.car (bruijn ##expr.126 2 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda178, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k218, env)}),
      VInlineCar(
upenv->up->vars[1]
    )

    );
 }
}
static void _V0loop_lambda176(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda176" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda176, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 34 1) (bruijn ##k.845 0 0) (close _V0loop_lambda177))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 34-1, 1)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda177, env)})
    );
 }
}
static void _V0loop_lambda172(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0loop_lambda172" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda172, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda172, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.126 0 1))) ((bruijn reverse 33 5) (close _V0loop_k214) (bruijn ##xs.123 0 2)) ((bruijn call-with-values 33 4) (bruijn ##k.843 0 0) (close _V0loop_lambda176) (bruijn loop 1 1)))
if(VDecodeBool(
VInlineNot(
VInlinePairP(
_var1
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 33-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k214, env)}),
      _var2
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 33-1, 4)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda176, env)}),
      upenv->vars[1]
    );
}
 }
}
static void _V0optimize__let_lambda171(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda171" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__let_lambda171, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0optimize__let_k213) (bruijn loop 0 1) (close _V0loop_lambda172))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__let_k213, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda172, env)})
    );
 }
}
static void _V0optimize__let_lambda170(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda170" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0optimize__let_lambda170, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__let_lambda170, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0optimize__let_lambda171) (bruijn ##k.840 0 0) #f)
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__let_lambda171, env)}, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0optimize__let_lambda169(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda169" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_lambda169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__let_lambda169, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 30 1) (bruijn ##k.839 0 0) (close _V0optimize__let_lambda170))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 30-1, 1)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__let_lambda170, env)})
    );
 }
}
static void _V0optimize__let_k226(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k226" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k226, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__let_k226, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.105 19 1) (bruijn ##k.856 7 0) (##inline ##sys.cons (bruijn ##x.860 1 0) (bruijn ##x.861 0 0)))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 19-1, 1)), runtime,
      VGetArg(upenv, 7-1, 0),
      VInlineCons(
upenv->vars[0],
      _var0
    )

    );
 }
}
static void _V0optimize__let_k225(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k225" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k225, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__let_k225, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn map 36 3) (close _V0optimize__let_k226) (bruijn optimize-atom 35 18) (bruijn xs 6 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 36-1, 3)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__let_k226, env)}),
      VGetArg(upenv, 35-1, 18),
      VGetArg(upenv, 6-1, 2)
    );
 }
}
static void _V0optimize__let_k224(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k224" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k224, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__let_k224, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn optimize-atom 34 18) (close _V0optimize__let_k225) (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (bruijn ys 9 2) (##inline ##sys.cons (bruijn expr 7 1) (quote ())))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 34-1, 18)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__let_k225, env)}),
      VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 9-1, 2),
      VInlineCons(
VGetArg(upenv, 7-1, 1),
      VNULL
    )

    )

    )

    );
 }
}
static void _V0optimize__let_k228(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k228" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k228, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__let_k228, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.105 18 1) (bruijn ##k.856 6 0) (##inline ##sys.cons (bruijn ##x.860 1 0) (bruijn ##x.861 0 0)))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 18-1, 1)), runtime,
      VGetArg(upenv, 6-1, 0),
      VInlineCons(
upenv->vars[0],
      _var0
    )

    );
 }
}
static void _V0optimize__let_k227(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k227" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k227, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__let_k227, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn map 35 3) (close _V0optimize__let_k228) (bruijn optimize-atom 34 18) (bruijn xs 5 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 35-1, 3)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__let_k228, env)}),
      VGetArg(upenv, 34-1, 18),
      VGetArg(upenv, 5-1, 2)
    );
 }
}
static void _V0optimize__let_k223(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k223" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k223, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__let_k223, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.865 0 0) ((bruijn error 34 11) (close _V0optimize__let_k224) (##string ##string.1655)) ((bruijn optimize-atom 33 18) (close _V0optimize__let_k227) (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (bruijn ys 8 2) (##inline ##sys.cons (bruijn expr 6 1) (quote ()))))))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 34-1, 11)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__let_k224, env)}),
      VEncodePointer(&_V10string_D1655.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 33-1, 18)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__let_k227, env)}),
      VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 8-1, 2),
      VInlineCons(
VGetArg(upenv, 6-1, 1),
      VNULL
    )

    )

    )

    );
}
 }
}
static void _V0optimize__let_k222(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k222" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k222, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__let_k222, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 33 6) (close _V0optimize__let_k223) (bruijn ##x.866 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 33-1, 6)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__let_k223, env)}),
      _var0
    );
 }
}
static void _V0optimize__let_k221(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k221" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k221, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__let_k221, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn = 32 7) (close _V0optimize__let_k222) (bruijn ##x.867 1 0) (bruijn ##x.868 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 32-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__let_k222, env)}),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0optimize__let_k220(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k220" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k220, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__let_k220, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn length 31 13) (close _V0optimize__let_k221) (bruijn xs 1 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 31-1, 13)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__let_k221, env)}),
      upenv->vars[2]
    );
 }
}
static void _V0optimize__let_lambda179(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda179" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0optimize__let_lambda179, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__let_lambda179, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((bruijn length 30 13) (close _V0optimize__let_k220) (bruijn ys 4 2)) ((bruijn ##k.856 0 0) #f))
if(VDecodeBool(
VInlineNullP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 30-1, 13)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__let_k220, env)}),
      upenv->up->up->up->vars[2]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__let_lambda168(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda168" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__let_lambda168, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call-with-values 29 4) (bruijn ##k.838 0 0) (close _V0optimize__let_lambda169) (close _V0optimize__let_lambda179))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 29-1, 4)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__let_lambda169, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__let_lambda179, env)})
    );
 }
}
static void _V0optimize__let_lambda167(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda167" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__let_lambda167, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.121 1 1))) ((close _V0optimize__let_lambda168) (bruijn ##k.836 0 0) (##inline ##sys.cdr (bruijn ##expr.113 7 1))) ((bruijn ##k.836 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__let_lambda168, env)}, runtime,
      _var0,
      VInlineCdr(
VGetArg(upenv, 7-1, 1)
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__let_lambda166(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda166" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__let_lambda166, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.121 0 1)) ((close _V0optimize__let_lambda167) (bruijn ##k.834 0 0) (##inline ##sys.car (bruijn ##expr.121 0 1))) ((bruijn ##k.834 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__let_lambda167, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__let_lambda165(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda165" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0optimize__let_lambda165, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__let_lambda165, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((close _V0optimize__let_lambda166) (bruijn ##k.832 0 0) (##inline ##sys.cdr (bruijn ##expr.115 2 1))) ((bruijn ##k.832 0 0) #f))
if(VDecodeBool(
VInlineNullP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__let_lambda166, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__let_lambda154(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda154" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__let_lambda154, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call-with-values 25 4) (bruijn ##k.814 0 0) (close _V0optimize__let_lambda155) (close _V0optimize__let_lambda165))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 25-1, 4)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__let_lambda155, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__let_lambda165, env)})
    );
 }
}
static void _V0optimize__let_lambda153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda153" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__let_lambda153, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.115 0 1)) ((close _V0optimize__let_lambda154) (bruijn ##k.812 0 0) (##inline ##sys.car (bruijn ##expr.115 0 1))) ((bruijn ##k.812 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__let_lambda154, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__let_k205(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k205" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__let_k205, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.811 0 0) ((close _V0optimize__let_lambda153) (bruijn ##k.809 1 0) (##inline ##sys.cdr (bruijn ##expr.114 1 1))) ((bruijn ##k.809 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__let_lambda153, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__let_lambda152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda152" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__let_lambda152, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.114 0 1)) ((bruijn equal? 22 2) (close _V0optimize__let_k205) (quote lambda) (##inline ##sys.car (bruijn ##expr.114 0 1))) ((bruijn ##k.809 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 22-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__let_k205, env)}),
      VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__let_lambda151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda151" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__let_lambda151, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.113 0 1)) ((close _V0optimize__let_lambda152) (bruijn ##k.807 0 0) (##inline ##sys.car (bruijn ##expr.113 0 1))) ((bruijn ##k.807 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__let_lambda152, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__let_k237(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k237" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k237, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__let_k237, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.105 18 1) (bruijn ##k.787 7 0) (##inline ##sys.cons (bruijn ##x.790 1 0) (bruijn ##x.791 0 0)))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 18-1, 1)), runtime,
      VGetArg(upenv, 7-1, 0),
      VInlineCons(
upenv->vars[0],
      _var0
    )

    );
 }
}
static void _V0optimize__let_k236(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k236" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k236, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__let_k236, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn map 35 3) (close _V0optimize__let_k237) (bruijn optimize-atom 34 18) (bruijn xs 6 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 35-1, 3)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__let_k237, env)}),
      VGetArg(upenv, 34-1, 18),
      VGetArg(upenv, 6-1, 1)
    );
 }
}
static void _V0optimize__let_k235(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k235" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k235, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__let_k235, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn optimize-atom 33 18) (close _V0optimize__let_k236) (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (bruijn ys 8 1) (##inline ##sys.cons (bruijn expr 6 1) (quote ())))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 33-1, 18)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__let_k236, env)}),
      VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 8-1, 1),
      VInlineCons(
VGetArg(upenv, 6-1, 1),
      VNULL
    )

    )

    )

    );
 }
}
static void _V0optimize__let_k239(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k239" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k239, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__let_k239, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.105 17 1) (bruijn ##k.787 6 0) (##inline ##sys.cons (bruijn ##x.790 1 0) (bruijn ##x.791 0 0)))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 17-1, 1)), runtime,
      VGetArg(upenv, 6-1, 0),
      VInlineCons(
upenv->vars[0],
      _var0
    )

    );
 }
}
static void _V0optimize__let_k238(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k238" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k238, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__let_k238, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn map 34 3) (close _V0optimize__let_k239) (bruijn optimize-atom 33 18) (bruijn xs 5 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 34-1, 3)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__let_k239, env)}),
      VGetArg(upenv, 33-1, 18),
      VGetArg(upenv, 5-1, 1)
    );
 }
}
static void _V0optimize__let_k234(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k234" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k234, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__let_k234, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.795 0 0) ((bruijn error 33 11) (close _V0optimize__let_k235) (##string ##string.1655)) ((bruijn optimize-atom 32 18) (close _V0optimize__let_k238) (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (bruijn ys 7 1) (##inline ##sys.cons (bruijn expr 5 1) (quote ()))))))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 33-1, 11)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__let_k235, env)}),
      VEncodePointer(&_V10string_D1655.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 32-1, 18)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__let_k238, env)}),
      VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 7-1, 1),
      VInlineCons(
VGetArg(upenv, 5-1, 1),
      VNULL
    )

    )

    )

    );
}
 }
}
static void _V0optimize__let_k233(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k233" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k233, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__let_k233, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 32 6) (close _V0optimize__let_k234) (bruijn ##x.796 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 32-1, 6)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__let_k234, env)}),
      _var0
    );
 }
}
static void _V0optimize__let_k232(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k232" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k232, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__let_k232, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn <= 31 12) (close _V0optimize__let_k233) (bruijn ##x.797 1 0) (bruijn ##x.798 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 31-1, 12)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__let_k233, env)}),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0optimize__let_k231(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k231" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k231, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__let_k231, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn length 30 13) (close _V0optimize__let_k232) (bruijn xs 1 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 30-1, 13)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__let_k232, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0optimize__let_lambda186(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda186" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__let_lambda186, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn taillength 28 15) (close _V0optimize__let_k231) (bruijn ys 3 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 28-1, 15)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__let_k231, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0optimize__let_lambda185(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda185" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__let_lambda185, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.130 1 1))) ((close _V0optimize__let_lambda186) (bruijn ##k.785 0 0) (##inline ##sys.cdr (bruijn ##expr.127 6 1))) ((bruijn ##k.785 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__let_lambda186, env)}, runtime,
      _var0,
      VInlineCdr(
VGetArg(upenv, 6-1, 1)
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__let_lambda184(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda184" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__let_lambda184, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.130 0 1)) ((close _V0optimize__let_lambda185) (bruijn ##k.783 0 0) (##inline ##sys.car (bruijn ##expr.130 0 1))) ((bruijn ##k.783 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__let_lambda185, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__let_lambda183(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda183" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__let_lambda183, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0optimize__let_lambda184) (bruijn ##k.782 0 0) (##inline ##sys.cdr (bruijn ##expr.129 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__let_lambda184, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0optimize__let_lambda182(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda182" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__let_lambda182, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.129 0 1)) ((close _V0optimize__let_lambda183) (bruijn ##k.780 0 0) (##inline ##sys.car (bruijn ##expr.129 0 1))) ((bruijn ##k.780 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__let_lambda183, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__let_k230(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k230" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k230, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__let_k230, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.779 0 0) ((close _V0optimize__let_lambda182) (bruijn ##k.777 1 0) (##inline ##sys.cdr (bruijn ##expr.128 1 1))) ((bruijn ##k.777 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__let_lambda182, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__let_lambda181(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda181" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__let_lambda181, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.128 0 1)) ((bruijn equal? 23 2) (close _V0optimize__let_k230) (quote lambda) (##inline ##sys.car (bruijn ##expr.128 0 1))) ((bruijn ##k.777 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 23-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__let_k230, env)}),
      VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__let_lambda180(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda180" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__let_lambda180, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.127 0 1)) ((close _V0optimize__let_lambda181) (bruijn ##k.775 0 0) (##inline ##sys.car (bruijn ##expr.127 0 1))) ((bruijn ##k.775 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__let_lambda181, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__let_k242(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k242" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k242, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__let_k242, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.105 8 1) (bruijn ##k.769 2 0) (bruijn ##x.772 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 8-1, 1)), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0optimize__let_k241(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k241" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k241, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__let_k241, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.771 0 0) ((bruijn error 25 11) (close _V0optimize__let_k242) (##string ##string.1656)) ((bruijn ##k.769 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 25-1, 11)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__let_k242, env)}),
      VEncodePointer(&_V10string_D1656.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__let_lambda188(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda188" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__let_lambda188, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.132 0 1)) ((bruijn equal? 24 2) (close _V0optimize__let_k241) (quote continuation) (##inline ##sys.car (bruijn ##expr.132 0 1))) ((bruijn ##k.769 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 24-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__let_k241, env)}),
      VEncodePointer(&_V0continuation.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__let_lambda187(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda187" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__let_lambda187, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.131 0 1)) ((close _V0optimize__let_lambda188) (bruijn ##k.767 0 0) (##inline ##sys.car (bruijn ##expr.131 0 1))) ((bruijn ##k.767 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__let_lambda188, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__let_k243(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k243" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k243, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__let_k243, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 23 11) (bruijn ##k.762 4 0) (##string ##string.1654))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 23-1, 11)), runtime,
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V10string_D1654.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0optimize__let_k240(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k240" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k240, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__let_k240, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0optimize__let_lambda187) (close _V0optimize__let_k243) (bruijn ##input.106 3 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__let_lambda187, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__let_k243, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0optimize__let_k229(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k229" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k229, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__let_k229, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0optimize__let_lambda180) (close _V0optimize__let_k240) (bruijn ##input.106 2 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__let_lambda180, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__let_k240, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0optimize__let_k204(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k204" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__let_k204, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0optimize__let_lambda151) (close _V0optimize__let_k229) (bruijn ##input.106 1 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__let_lambda151, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__let_k229, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0optimize__let_lambda141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda141" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__let_lambda141, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0optimize__let_lambda142) (close _V0optimize__let_k204) (bruijn ##input.106 0 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__let_lambda142, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__let_k204, env)}),
      _var1
    );
 }
}
static void _V0optimize__let_lambda140(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda140" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0optimize__let_lambda140, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__let_lambda140, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0optimize__let_lambda141) (bruijn ##k.761 0 0) (bruijn let-expr 1 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__let_lambda141, env)}, runtime,
      _var0,
      upenv->vars[1]
    );
 }
}
static void _V0optimize__let_lambda139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda139" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0optimize__let_lambda139, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__let_lambda139, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 17 1) (bruijn ##k.760 0 0) (close _V0optimize__let_lambda140))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 17-1, 1)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__let_lambda140, env)})
    );
 }
}
static void cps_k50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "cps_k50" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to cps_k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)cps_k50, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close cps_k51) (bruijn optimize-let 15 16) (close _V0optimize__let_lambda139))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)cps_k51, env)}),
      VEncodeInt(15l), VEncodeInt(16l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__let_lambda139, env)})
    );
 }
}
static void _V0taillength_k244(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0taillength_k244" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0taillength_k244, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0taillength_k244, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.919 1 0) (bruijn lst 2 1) 0)
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[1]), runtime,
      upenv->vars[0],
      upenv->up->vars[1],
      VEncodeInt(0l)
    );
 }
}
static void _V0loop_k247(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k247" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k247, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k247, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 4 1) (bruijn ##k.921 3 0) (bruijn ##x.923 1 0) (bruijn ##x.924 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->up->vars[1]), runtime,
      upenv->up->up->vars[0],
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k246(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k246" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k246, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k246, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn + 20 16) (close _V0loop_k247) (bruijn len 2 2) 1)
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 20-1, 16)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k247, env)}),
      upenv->up->vars[2],
      VEncodeInt(1l)
    );
 }
}
static void _V0loop_k245(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k245" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k245, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k245, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.922 0 0) ((bruijn cdr 19 15) (close _V0loop_k246) (bruijn lst 1 1)) ((bruijn ##k.921 1 0) (bruijn len 1 2)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 19-1, 15)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k246, env)}),
      upenv->vars[1]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      upenv->vars[2]
    );
}
 }
}
static void _V0loop_lambda191(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0loop_lambda191" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda191, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda191, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn pair? 18 14) (close _V0loop_k245) (bruijn lst 0 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 18-1, 14)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k245, env)}),
      _var1
    );
 }
}
static void _V0taillength_lambda190(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0taillength_lambda190" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0taillength_lambda190, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0taillength_k244) (bruijn loop 0 1) (close _V0loop_lambda191))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0taillength_k244, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda191, env)})
    );
 }
}
static void _V0taillength_lambda189(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0taillength_lambda189" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0taillength_lambda189, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0taillength_lambda189, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0taillength_lambda190) (bruijn ##k.918 0 0) #f)
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0taillength_lambda190, env)}, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void cps_k49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "cps_k49" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to cps_k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)cps_k49, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close cps_k50) (bruijn taillength 14 15) (close _V0taillength_lambda189))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)cps_k50, env)}),
      VEncodeInt(14l), VEncodeInt(15l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0taillength_lambda189, env)})
    );
 }
}
static void _V0reducible_Q_k251(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0reducible_Q_k251" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0reducible_Q_k251, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0reducible_Q_k251, runtime, upenv, 1, argc, _var0) {
  // ((bruijn = 19 7) (bruijn ##k.925 4 0) 1 (bruijn ##x.928 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 19-1, 7)), runtime,
      upenv->up->up->up->vars[0],
      VEncodeInt(1l),
      _var0
    );
 }
}
static void _V0reducible_Q_k250(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0reducible_Q_k250" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0reducible_Q_k250, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0reducible_Q_k250, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.927 0 0) ((bruijn ##k.925 3 0) (bruijn ##p.927 0 0)) ((bruijn ref-count 17 6) (close _V0reducible_Q_k251) (bruijn y 3 2) (bruijn expr 3 3)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->vars[0]), runtime,
      _var0
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 17-1, 6)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0reducible_Q_k251, env)}),
      upenv->up->up->vars[2],
      upenv->up->up->vars[3]
    );
}
 }
}
static void _V0reducible_Q_k249(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0reducible_Q_k249" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0reducible_Q_k249, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0reducible_Q_k249, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn eqv? 17 19) (close _V0reducible_Q_k250) (bruijn ##x.929 0 0) (quote quote))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 17-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0reducible_Q_k250, env)}),
      _var0,
      VEncodePointer(&_V0quote.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0reducible_Q_k248(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0reducible_Q_k248" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0reducible_Q_k248, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0reducible_Q_k248, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.926 0 0) ((bruijn ##k.925 1 0) (bruijn ##p.926 0 0)) ((bruijn car 16 18) (close _V0reducible_Q_k249) (bruijn x 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      _var0
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 16-1, 18)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0reducible_Q_k249, env)}),
      upenv->vars[1]
    );
}
 }
}
static void _V0reducible_Q_lambda192(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0reducible_Q_lambda192" };
 VRecordCall(&dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0reducible_Q_lambda192, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0reducible_Q_lambda192, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn atom? 15 17) (close _V0reducible_Q_k248) (bruijn x 0 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 15-1, 17)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0reducible_Q_k248, env)}),
      _var1
    );
 }
}
static void cps_k48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "cps_k48" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to cps_k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)cps_k48, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close cps_k49) (bruijn reducible? 13 14) (close _V0reducible_Q_lambda192))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)cps_k49, env)}),
      VEncodeInt(13l), VEncodeInt(14l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0reducible_Q_lambda192, env)})
    );
 }
}
static void _V0optimize__lambda_k252(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__lambda_k252" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__lambda_k252, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__lambda_k252, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.97 8 1) (bruijn ##k.942 1 0) (bruijn ##x.944 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 8-1, 1)), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0optimize__lambda_k259(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__lambda_k259" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__lambda_k259, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__lambda_k259, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.958 0 0) ((bruijn ##kk.102 11 1) (bruijn ##k.956 6 0) (bruijn f 7 1)) ((bruijn ##kk.102 11 1) (bruijn ##k.956 6 0) (##inline ##sys.cons (bruijn lamb 16 1) (##inline ##sys.cons (bruijn xs 14 1) (##inline ##sys.cons (##inline ##sys.cons (bruijn f 7 1) (bruijn ys 6 1)) (quote ()))))))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 11-1, 1)), runtime,
      VGetArg(upenv, 6-1, 0),
      VGetArg(upenv, 7-1, 1)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 11-1, 1)), runtime,
      VGetArg(upenv, 6-1, 0),
      VInlineCons(
VGetArg(upenv, 16-1, 1),
      VInlineCons(
VGetArg(upenv, 14-1, 1),
      VInlineCons(
VInlineCons(
VGetArg(upenv, 7-1, 1),
      VGetArg(upenv, 6-1, 1)
    )
,
      VNULL
    )

    )

    )

    );
}
 }
}
static void _V0optimize__lambda_k258(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__lambda_k258" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__lambda_k258, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__lambda_k258, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn = 33 7) (close _V0optimize__lambda_k259) 0 (bruijn ##x.964 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 33-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__lambda_k259, env)}),
      VEncodeInt(0l),
      _var0
    );
 }
}
static void _V0optimize__lambda_k257(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__lambda_k257" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__lambda_k257, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__lambda_k257, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn fold 32 20) (close _V0optimize__lambda_k258) (bruijn + 32 16) 0 (bruijn ##x.965 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 32-1, 20)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__lambda_k258, env)}),
      VGetArg(upenv, 32-1, 16),
      VEncodeInt(0l),
      _var0
    );
 }
}
static void _V0optimize__lambda_lambda207(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__lambda_lambda207" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0optimize__lambda_lambda207, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__lambda_lambda207, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ref-count 31 6) (bruijn ##k.966 0 0) (bruijn x 0 1) (bruijn f 5 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 31-1, 6)), runtime,
      _var0,
      _var1,
      VGetArg(upenv, 5-1, 1)
    );
 }
}
static void _V0optimize__lambda_k256(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__lambda_k256" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__lambda_k256, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__lambda_k256, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.963 0 0) ((bruijn map 31 3) (close _V0optimize__lambda_k257) (close _V0optimize__lambda_lambda207) (bruijn xs 11 1)) ((bruijn ##kk.102 8 1) (bruijn ##k.956 3 0) (##inline ##sys.cons (bruijn lamb 13 1) (##inline ##sys.cons (bruijn xs 11 1) (##inline ##sys.cons (##inline ##sys.cons (bruijn f 4 1) (bruijn ys 3 1)) (quote ()))))))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 31-1, 3)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__lambda_k257, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__lambda_lambda207, env)}),
      VGetArg(upenv, 11-1, 1)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 8-1, 1)), runtime,
      upenv->up->up->vars[0],
      VInlineCons(
VGetArg(upenv, 13-1, 1),
      VInlineCons(
VGetArg(upenv, 11-1, 1),
      VInlineCons(
VInlineCons(
upenv->up->up->up->vars[1],
      upenv->up->up->vars[1]
    )
,
      VNULL
    )

    )

    )

    );
}
 }
}
static void _V0optimize__lambda_k255(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__lambda_k255" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__lambda_k255, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__lambda_k255, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.962 0 0) ((bruijn equal? 30 2) (close _V0optimize__lambda_k256) (bruijn xs 10 1) (bruijn ys 2 1)) ((bruijn ##kk.102 7 1) (bruijn ##k.956 2 0) (##inline ##sys.cons (bruijn lamb 12 1) (##inline ##sys.cons (bruijn xs 10 1) (##inline ##sys.cons (##inline ##sys.cons (bruijn f 3 1) (bruijn ys 2 1)) (quote ()))))))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 30-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__lambda_k256, env)}),
      VGetArg(upenv, 10-1, 1),
      upenv->up->vars[1]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 7-1, 1)), runtime,
      upenv->up->vars[0],
      VInlineCons(
VGetArg(upenv, 12-1, 1),
      VInlineCons(
VGetArg(upenv, 10-1, 1),
      VInlineCons(
VInlineCons(
upenv->up->up->vars[1],
      upenv->up->vars[1]
    )
,
      VNULL
    )

    )

    )

    );
}
 }
}
static void _V0optimize__lambda_k254(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__lambda_k254" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__lambda_k254, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__lambda_k254, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 29 6) (close _V0optimize__lambda_k255) (bruijn ##x.967 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 29-1, 6)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__lambda_k255, env)}),
      _var0
    );
 }
}
static void _V0optimize__lambda_lambda206(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__lambda_lambda206" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__lambda_lambda206, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn special-apply? 27 12) (close _V0optimize__lambda_k254) (bruijn f 1 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 27-1, 12)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__lambda_k254, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0optimize__lambda_lambda205(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__lambda_lambda205" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__lambda_lambda205, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0optimize__lambda_lambda206) (bruijn ##k.955 0 0) (##inline ##sys.cdr (bruijn ##expr.104 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__lambda_lambda206, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0optimize__lambda_lambda204(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__lambda_lambda204" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__lambda_lambda204, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.104 0 1)) ((close _V0optimize__lambda_lambda205) (bruijn ##k.953 0 0) (##inline ##sys.car (bruijn ##expr.104 0 1))) ((bruijn ##k.953 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__lambda_lambda205, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__lambda_lambda208(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__lambda_lambda208" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__lambda_lambda208, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##kk.102 4 1) (bruijn ##k.949 0 0) (##inline ##sys.cons (bruijn lamb 9 1) (##inline ##sys.cons (bruijn xs 7 1) (##inline ##sys.cons (bruijn opt-body 0 1) (quote ())))))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->up->vars[1]), runtime,
      _var0,
      VInlineCons(
VGetArg(upenv, 9-1, 1),
      VInlineCons(
VGetArg(upenv, 7-1, 1),
      VInlineCons(
_var1,
      VNULL
    )

    )

    )

    );
 }
}
static void _V0optimize__lambda_k261(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__lambda_k261" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__lambda_k261, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__lambda_k261, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 27 11) (bruijn ##k.946 2 0) (##string ##string.1654))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 27-1, 11)), runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V10string_D1654.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0optimize__lambda_k260(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__lambda_k260" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__lambda_k260, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__lambda_k260, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0optimize__lambda_lambda208) (close _V0optimize__lambda_k261) (bruijn ##input.103 1 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__lambda_lambda208, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__lambda_k261, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0optimize__lambda_lambda203(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__lambda_lambda203" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__lambda_lambda203, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0optimize__lambda_lambda204) (close _V0optimize__lambda_k260) (bruijn ##input.103 0 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__lambda_lambda204, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__lambda_k260, env)}),
      _var1
    );
 }
}
static void _V0optimize__lambda_k253(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__lambda_k253" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__lambda_k253, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__lambda_k253, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0optimize__lambda_lambda203) (bruijn ##k.945 1 0) (bruijn ##x.970 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__lambda_lambda203, env)}, runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0optimize__lambda_lambda202(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__lambda_lambda202" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0optimize__lambda_lambda202, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__lambda_lambda202, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn optimize-apply 22 17) (close _V0optimize__lambda_k253) (bruijn body 1 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 22-1, 17)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__lambda_k253, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0optimize__lambda_lambda201(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__lambda_lambda201" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__lambda_lambda201, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.101 1 1))) ((bruijn call/cc 22 1) (close _V0optimize__lambda_k252) (close _V0optimize__lambda_lambda202)) ((bruijn ##k.942 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 22-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__lambda_k252, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__lambda_lambda202, env)})
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__lambda_lambda200(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__lambda_lambda200" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__lambda_lambda200, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.101 0 1)) ((close _V0optimize__lambda_lambda201) (bruijn ##k.940 0 0) (##inline ##sys.car (bruijn ##expr.101 0 1))) ((bruijn ##k.940 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__lambda_lambda201, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__lambda_lambda199(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__lambda_lambda199" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__lambda_lambda199, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0optimize__lambda_lambda200) (bruijn ##k.939 0 0) (##inline ##sys.cdr (bruijn ##expr.100 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__lambda_lambda200, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0optimize__lambda_lambda198(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__lambda_lambda198" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__lambda_lambda198, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.100 0 1)) ((close _V0optimize__lambda_lambda199) (bruijn ##k.937 0 0) (##inline ##sys.car (bruijn ##expr.100 0 1))) ((bruijn ##k.937 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__lambda_lambda199, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__lambda_lambda197(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__lambda_lambda197" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__lambda_lambda197, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0optimize__lambda_lambda198) (bruijn ##k.936 0 0) (##inline ##sys.cdr (bruijn ##expr.99 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__lambda_lambda198, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0optimize__lambda_lambda196(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__lambda_lambda196" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__lambda_lambda196, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.99 0 1)) ((close _V0optimize__lambda_lambda197) (bruijn ##k.934 0 0) (##inline ##sys.car (bruijn ##expr.99 0 1))) ((bruijn ##k.934 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__lambda_lambda197, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__lambda_k262(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__lambda_k262" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__lambda_k262, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__lambda_k262, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 17 11) (bruijn ##k.932 1 0) (##string ##string.1654))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 17-1, 11)), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10string_D1654.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0optimize__lambda_lambda195(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__lambda_lambda195" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__lambda_lambda195, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0optimize__lambda_lambda196) (close _V0optimize__lambda_k262) (bruijn ##input.98 0 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__lambda_lambda196, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__lambda_k262, env)}),
      _var1
    );
 }
}
static void _V0optimize__lambda_lambda194(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__lambda_lambda194" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0optimize__lambda_lambda194, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__lambda_lambda194, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0optimize__lambda_lambda195) (bruijn ##k.931 0 0) (bruijn expr 1 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__lambda_lambda195, env)}, runtime,
      _var0,
      upenv->vars[1]
    );
 }
}
static void _V0optimize__lambda_lambda193(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__lambda_lambda193" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0optimize__lambda_lambda193, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0optimize__lambda_lambda193, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 14 1) (bruijn ##k.930 0 0) (close _V0optimize__lambda_lambda194))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 1)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__lambda_lambda194, env)})
    );
 }
}
static void cps_k47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "cps_k47" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to cps_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)cps_k47, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close cps_k48) (bruijn optimize-lambda 12 13) (close _V0optimize__lambda_lambda193))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)cps_k48, env)}),
      VEncodeInt(12l), VEncodeInt(13l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0optimize__lambda_lambda193, env)})
    );
 }
}
static void _V0special__apply_Q_lambda209(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0special__apply_Q_lambda209" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0special__apply_Q_lambda209, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0special__apply_Q_lambda209, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn eqv? 13 19) (bruijn ##k.977 0 0) (bruijn tok 0 1) (quote if))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 13-1, 19)), runtime,
      _var0,
      _var1,
      VEncodePointer(&_V0if.sym, VPOINTER_OTHER)
    );
 }
}
static void cps_k46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "cps_k46" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to cps_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)cps_k46, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close cps_k47) (bruijn special-apply? 11 12) (close _V0special__apply_Q_lambda209))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)cps_k47, env)}),
      VEncodeInt(11l), VEncodeInt(12l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0special__apply_Q_lambda209, env)})
    );
 }
}
static void _V0alpha__convert_k264(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0alpha__convert_k264" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0alpha__convert_k264, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0alpha__convert_k264, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.979 2 0) (bruijn expr 3 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->vars[0]), runtime,
      upenv->up->up->vars[1]
    );
 }
}
static void _V0make__substitutes_k267(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0make__substitutes_k267" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0make__substitutes_k267, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0make__substitutes_k267, runtime, upenv, 1, argc, _var0) {
  // ((bruijn make-substitutes 5 2) (bruijn ##k.982 3 0) (bruijn ##x.985 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 5-1, 2)), runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0make__substitutes_k273(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0make__substitutes_k273" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0make__substitutes_k273, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0make__substitutes_k273, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 23 10) (bruijn ##k.982 8 0) (bruijn ##x.986 2 0) (bruijn ##x.987 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 23-1, 10)), runtime,
      VGetArg(upenv, 8-1, 0),
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0make__substitutes_k272(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0make__substitutes_k272" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0make__substitutes_k272, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0make__substitutes_k272, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn make-substitutes 9 2) (close _V0make__substitutes_k273) (bruijn ##x.988 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 9-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0make__substitutes_k273, env)}),
      _var0
    );
 }
}
static void _V0make__substitutes_k271(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0make__substitutes_k271" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0make__substitutes_k271, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0make__substitutes_k271, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 21 15) (close _V0make__substitutes_k272) (bruijn args 6 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 21-1, 15)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0make__substitutes_k272, env)}),
      VGetArg(upenv, 6-1, 1)
    );
 }
}
static void _V0make__substitutes_k270(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0make__substitutes_k270" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0make__substitutes_k270, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0make__substitutes_k270, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 20 10) (close _V0make__substitutes_k271) (bruijn ##x.989 2 0) (bruijn ##x.990 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 20-1, 10)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0make__substitutes_k271, env)}),
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0make__substitutes_k269(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0make__substitutes_k269" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0make__substitutes_k269, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0make__substitutes_k269, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn make-conversion 6 1) (close _V0make__substitutes_k270) (bruijn ##x.991 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 6-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0make__substitutes_k270, env)}),
      _var0
    );
 }
}
static void _V0make__substitutes_k268(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0make__substitutes_k268" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0make__substitutes_k268, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0make__substitutes_k268, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn car 18 18) (close _V0make__substitutes_k269) (bruijn args 3 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 18-1, 18)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0make__substitutes_k269, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0make__substitutes_k266(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0make__substitutes_k266" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0make__substitutes_k266, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0make__substitutes_k266, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.984 0 0) ((bruijn cons 17 10) (close _V0make__substitutes_k267) (bruijn args 2 1) (quote ())) ((bruijn car 17 18) (close _V0make__substitutes_k268) (bruijn args 2 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 17-1, 10)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0make__substitutes_k267, env)}),
      upenv->up->vars[1],
      VNULL
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 17-1, 18)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0make__substitutes_k268, env)}),
      upenv->up->vars[1]
    );
}
 }
}
static void _V0make__substitutes_k265(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0make__substitutes_k265" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0make__substitutes_k265, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0make__substitutes_k265, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.983 0 0) ((bruijn ##k.982 1 0) (quote ())) ((bruijn symbol? 16 9) (close _V0make__substitutes_k266) (bruijn args 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VNULL
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 16-1, 9)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0make__substitutes_k266, env)}),
      upenv->vars[1]
    );
}
 }
}
static void _V0make__substitutes_lambda212(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0make__substitutes_lambda212" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0make__substitutes_lambda212, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0make__substitutes_lambda212, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn null? 15 27) (close _V0make__substitutes_k265) (bruijn args 0 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 15-1, 27)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0make__substitutes_k265, env)}),
      _var1
    );
 }
}
static void _V0alpha__convert_k263(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0alpha__convert_k263" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0alpha__convert_k263, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0alpha__convert_k263, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0alpha__convert_k264) (bruijn make-substitutes 1 2) (close _V0make__substitutes_lambda212))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0alpha__convert_k264, env)}),
      VEncodeInt(1l), VEncodeInt(2l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0make__substitutes_lambda212, env)})
    );
 }
}
static void _V0make__conversion_k278(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0make__conversion_k278" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0make__conversion_k278, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0make__conversion_k278, runtime, upenv, 1, argc, _var0) {
  // ((bruijn gensym 20 26) (bruijn ##k.993 4 0) (bruijn ##x.994 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 20-1, 26)), runtime,
      upenv->up->up->up->vars[0],
      _var0
    );
 }
}
static void _V0make__conversion_k277(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0make__conversion_k277" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0make__conversion_k277, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0make__conversion_k277, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn string->symbol 19 23) (close _V0make__conversion_k278) (bruijn ##x.996 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 19-1, 23)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0make__conversion_k278, env)}),
      _var0
    );
 }
}
static void _V0make__conversion_k276(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0make__conversion_k276" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0make__conversion_k276, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0make__conversion_k276, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.995 0 0) ((bruijn substring 18 22) (close _V0make__conversion_k277) (bruijn str 2 1) 2) ((bruijn gensym 18 26) (bruijn ##k.993 2 0) (bruijn sym 4 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 18-1, 22)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0make__conversion_k277, env)}),
      upenv->up->vars[1],
      VEncodeInt(2l)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 18-1, 26)), runtime,
      upenv->up->vars[0],
      upenv->up->up->up->vars[1]
    );
}
 }
}
static void _V0make__conversion_k275(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0make__conversion_k275" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0make__conversion_k275, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0make__conversion_k275, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn eq? 17 24) (close _V0make__conversion_k276) #\# (bruijn ##x.997 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 17-1, 24)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0make__conversion_k276, env)}),
      VEncodeChar('#'),
      _var0
    );
 }
}
static void _V0make__conversion_lambda214(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0make__conversion_lambda214" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0make__conversion_lambda214, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn string-ref 16 25) (close _V0make__conversion_k275) (bruijn str 0 1) 0)
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 16-1, 25)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0make__conversion_k275, env)}),
      _var1,
      VEncodeInt(0l)
    );
 }
}
static void _V0make__conversion_k274(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0make__conversion_k274" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0make__conversion_k274, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0make__conversion_k274, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0make__conversion_lambda214) (bruijn ##k.992 1 0) (bruijn ##x.998 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0make__conversion_lambda214, env)}, runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0make__conversion_lambda213(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0make__conversion_lambda213" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0make__conversion_lambda213, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0make__conversion_lambda213, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn symbol->string 14 21) (close _V0make__conversion_k274) (bruijn sym 0 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 21)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0make__conversion_k274, env)}),
      _var1
    );
 }
}
static void _V0alpha__convert_lambda211(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0alpha__convert_lambda211" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0alpha__convert_lambda211, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (set! (close _V0alpha__convert_k263) (bruijn make-conversion 0 1) (close _V0make__conversion_lambda213))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0alpha__convert_k263, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0make__conversion_lambda213, env)})
    );
 }
}
static void _V0alpha__convert_lambda210(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0alpha__convert_lambda210" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0alpha__convert_lambda210, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0alpha__convert_lambda210, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0alpha__convert_lambda211) (bruijn ##k.978 0 0) #f #f)
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0alpha__convert_lambda211, env)}, runtime,
      _var0,
      VEncodeBool(false),
      VEncodeBool(false)
    );
 }
}
static void cps_k45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "cps_k45" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to cps_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)cps_k45, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close cps_k46) (bruijn alpha-convert 10 11) (close _V0alpha__convert_lambda210))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)cps_k46, env)}),
      VEncodeInt(10l), VEncodeInt(11l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0alpha__convert_lambda210, env)})
    );
 }
}
static void _V0substitute_k281(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_k281" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k281, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0substitute_k281, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.77 9 1) (bruijn ##k.1098 2 0) (bruijn ##x.1100 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 9-1, 1)), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0substitute_k280(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_k280" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k280, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0substitute_k280, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 20 10) (close _V0substitute_k281) (quote lambda) (bruijn ##x.1101 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 20-1, 10)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0substitute_k281, env)}),
      VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void _V0substitute_lambda222(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0substitute_lambda222" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0substitute_lambda222, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.81 1 1))) ((bruijn substitute-lambda 18 9) (close _V0substitute_k280) (bruijn x 8 1) (bruijn atom 8 2) (bruijn args 2 1) (bruijn body 0 1)) ((bruijn ##k.1098 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 18-1, 9)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0substitute_k280, env)}),
      VGetArg(upenv, 8-1, 1),
      VGetArg(upenv, 8-1, 2),
      upenv->up->vars[1],
      _var1
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0substitute_lambda221(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0substitute_lambda221" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0substitute_lambda221, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.81 0 1)) ((close _V0substitute_lambda222) (bruijn ##k.1096 0 0) (##inline ##sys.car (bruijn ##expr.81 0 1))) ((bruijn ##k.1096 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0substitute_lambda222, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0substitute_lambda220(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0substitute_lambda220" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0substitute_lambda220, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0substitute_lambda221) (bruijn ##k.1095 0 0) (##inline ##sys.cdr (bruijn ##expr.80 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0substitute_lambda221, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0substitute_lambda219(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0substitute_lambda219" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0substitute_lambda219, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.80 0 1)) ((close _V0substitute_lambda220) (bruijn ##k.1093 0 0) (##inline ##sys.car (bruijn ##expr.80 0 1))) ((bruijn ##k.1093 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0substitute_lambda220, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0substitute_k279(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_k279" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k279, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0substitute_k279, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1092 0 0) ((close _V0substitute_lambda219) (bruijn ##k.1090 1 0) (##inline ##sys.cdr (bruijn ##expr.79 1 1))) ((bruijn ##k.1090 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0substitute_lambda219, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0substitute_lambda218(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0substitute_lambda218" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0substitute_lambda218, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.79 0 1)) ((bruijn equal? 14 2) (close _V0substitute_k279) (quote lambda) (##inline ##sys.car (bruijn ##expr.79 0 1))) ((bruijn ##k.1090 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0substitute_k279, env)}),
      VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0substitute_k285(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_k285" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k285, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0substitute_k285, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.77 10 1) (bruijn ##k.1080 2 0) (bruijn ##x.1082 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 10-1, 1)), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0substitute_k284(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_k284" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k284, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0substitute_k284, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 21 10) (close _V0substitute_k285) (quote continuation) (bruijn ##x.1083 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 21-1, 10)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0substitute_k285, env)}),
      VEncodePointer(&_V0continuation.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void _V0substitute_lambda227(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0substitute_lambda227" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0substitute_lambda227, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.84 1 1))) ((bruijn substitute-lambda 19 9) (close _V0substitute_k284) (bruijn x 9 1) (bruijn atom 9 2) (bruijn args 2 1) (bruijn body 0 1)) ((bruijn ##k.1080 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 19-1, 9)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0substitute_k284, env)}),
      VGetArg(upenv, 9-1, 1),
      VGetArg(upenv, 9-1, 2),
      upenv->up->vars[1],
      _var1
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0substitute_lambda226(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0substitute_lambda226" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0substitute_lambda226, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.84 0 1)) ((close _V0substitute_lambda227) (bruijn ##k.1078 0 0) (##inline ##sys.car (bruijn ##expr.84 0 1))) ((bruijn ##k.1078 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0substitute_lambda227, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0substitute_lambda225(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0substitute_lambda225" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0substitute_lambda225, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0substitute_lambda226) (bruijn ##k.1077 0 0) (##inline ##sys.cdr (bruijn ##expr.83 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0substitute_lambda226, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0substitute_lambda224(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0substitute_lambda224" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0substitute_lambda224, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.83 0 1)) ((close _V0substitute_lambda225) (bruijn ##k.1075 0 0) (##inline ##sys.car (bruijn ##expr.83 0 1))) ((bruijn ##k.1075 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0substitute_lambda225, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0substitute_k283(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_k283" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k283, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0substitute_k283, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1074 0 0) ((close _V0substitute_lambda224) (bruijn ##k.1072 1 0) (##inline ##sys.cdr (bruijn ##expr.82 1 1))) ((bruijn ##k.1072 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0substitute_lambda224, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0substitute_lambda223(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0substitute_lambda223" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0substitute_lambda223, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.82 0 1)) ((bruijn equal? 15 2) (close _V0substitute_k283) (quote continuation) (##inline ##sys.car (bruijn ##expr.82 0 1))) ((bruijn ##k.1072 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 15-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0substitute_k283, env)}),
      VEncodePointer(&_V0continuation.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0substitute_k288(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_k288" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k288, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0substitute_k288, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.1037 1 0) (bruijn ##expr.86 4 1) (quote ()) (quote ()))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[1]), runtime,
      upenv->vars[0],
      upenv->up->up->up->vars[1],
      VNULL,
      VNULL
    );
 }
}
static void _V0loop_lambda239(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda239" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda239, runtime, upenv, 2, argc, _var0, _var1) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.93 1 1))) ((bruijn ##kk.90 4 1) (bruijn ##k.1051 0 0) (##inline ##sys.cdr (bruijn ##expr.91 9 1)) (##inline ##sys.cons (bruijn args 2 1) (bruijn ##args.87 9 2)) (##inline ##sys.cons (bruijn body 0 1) (bruijn ##body.88 9 3))) ((bruijn ##k.1051 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->up->vars[1]), runtime,
      _var0,
      VInlineCdr(
VGetArg(upenv, 9-1, 1)
    )
,
      VInlineCons(
upenv->up->vars[1],
      VGetArg(upenv, 9-1, 2)
    )
,
      VInlineCons(
_var1,
      VGetArg(upenv, 9-1, 3)
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda238(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda238" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda238, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.93 0 1)) ((close _V0loop_lambda239) (bruijn ##k.1049 0 0) (##inline ##sys.car (bruijn ##expr.93 0 1))) ((bruijn ##k.1049 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda239, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda237(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda237" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda237, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_lambda238) (bruijn ##k.1048 0 0) (##inline ##sys.cdr (bruijn ##expr.92 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda238, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0loop_lambda236(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda236" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda236, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.92 0 1)) ((close _V0loop_lambda237) (bruijn ##k.1046 0 0) (##inline ##sys.car (bruijn ##expr.92 0 1))) ((bruijn ##k.1046 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda237, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k294(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k294" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k294, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k294, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.89 10 1) (bruijn ##k.1042 3 0) (bruijn ##expr.91 8 1) (bruijn ##x.1044 1 0) (bruijn ##x.1045 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 10-1, 1)), runtime,
      upenv->up->up->vars[0],
      VGetArg(upenv, 8-1, 1),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k293(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k293" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k293, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k293, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 29 5) (close _V0loop_k294) (bruijn ##body.88 7 3))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 29-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k294, env)}),
      VGetArg(upenv, 7-1, 3)
    );
 }
}
static void _V0loop_k292(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k292" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k292, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k292, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 28 5) (close _V0loop_k293) (bruijn ##args.87 6 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 28-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k293, env)}),
      VGetArg(upenv, 6-1, 2)
    );
 }
}
static void _V0loop_lambda235(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda235" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda235, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda235, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_lambda236) (close _V0loop_k292) (##inline ##sys.car (bruijn ##expr.91 5 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda236, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k292, env)}),
      VInlineCar(
VGetArg(upenv, 5-1, 1)
    )

    );
 }
}
static void _V0loop_lambda234(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda234" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda234, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda234, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 26 1) (bruijn ##k.1041 0 0) (close _V0loop_lambda235))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 26-1, 1)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda235, env)})
    );
 }
}
static void _V0loop_k291(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k291" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k291, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k291, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call-with-values 25 4) (bruijn ##k.1039 3 0) (close _V0loop_lambda234) (bruijn loop 4 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 25-1, 4)), runtime,
      upenv->up->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda234, env)}),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0loop_k290(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k290" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k290, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k290, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##kk.89 4 1) (close _V0loop_k291) (bruijn ##expr.91 2 1) (bruijn ##x.1062 1 0) (bruijn ##x.1063 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->up->vars[1]), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k291, env)}),
      upenv->up->vars[1],
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k289(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k289" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k289, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k289, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 23 5) (close _V0loop_k290) (bruijn ##body.88 1 3))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 23-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k290, env)}),
      upenv->vars[3]
    );
 }
}
static void _V0loop_lambda245(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda245" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda245, runtime, upenv, 2, argc, _var0, _var1) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.93 1 1))) ((bruijn ##kk.90 4 1) (bruijn ##k.1051 0 0) (##inline ##sys.cdr (bruijn ##expr.91 6 1)) (##inline ##sys.cons (bruijn args 2 1) (bruijn ##args.87 6 2)) (##inline ##sys.cons (bruijn body 0 1) (bruijn ##body.88 6 3))) ((bruijn ##k.1051 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->up->vars[1]), runtime,
      _var0,
      VInlineCdr(
VGetArg(upenv, 6-1, 1)
    )
,
      VInlineCons(
upenv->up->vars[1],
      VGetArg(upenv, 6-1, 2)
    )
,
      VInlineCons(
_var1,
      VGetArg(upenv, 6-1, 3)
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda244(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda244" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda244, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.93 0 1)) ((close _V0loop_lambda245) (bruijn ##k.1049 0 0) (##inline ##sys.car (bruijn ##expr.93 0 1))) ((bruijn ##k.1049 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda245, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda243(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda243" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda243, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_lambda244) (bruijn ##k.1048 0 0) (##inline ##sys.cdr (bruijn ##expr.92 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda244, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0loop_lambda242(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda242" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda242, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.92 0 1)) ((close _V0loop_lambda243) (bruijn ##k.1046 0 0) (##inline ##sys.car (bruijn ##expr.92 0 1))) ((bruijn ##k.1046 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda243, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k297(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k297" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k297, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k297, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.89 7 1) (bruijn ##k.1042 3 0) (bruijn ##expr.91 5 1) (bruijn ##x.1044 1 0) (bruijn ##x.1045 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 7-1, 1)), runtime,
      upenv->up->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k296(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k296" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k296, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k296, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 26 5) (close _V0loop_k297) (bruijn ##body.88 4 3))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 26-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k297, env)}),
      upenv->up->up->up->vars[3]
    );
 }
}
static void _V0loop_k295(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k295" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k295, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k295, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 25 5) (close _V0loop_k296) (bruijn ##args.87 3 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 25-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k296, env)}),
      upenv->up->up->vars[2]
    );
 }
}
static void _V0loop_lambda241(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda241" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda241, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda241, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_lambda242) (close _V0loop_k295) (##inline ##sys.car (bruijn ##expr.91 2 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda242, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k295, env)}),
      VInlineCar(
upenv->up->vars[1]
    )

    );
 }
}
static void _V0loop_lambda240(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda240" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda240, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda240, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 23 1) (bruijn ##k.1041 0 0) (close _V0loop_lambda241))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 23-1, 1)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda241, env)})
    );
 }
}
static void _V0loop_lambda233(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0loop_lambda233" };
 VRecordCall(&dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0loop_lambda233, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda233, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.91 0 1))) ((bruijn reverse 22 5) (close _V0loop_k289) (bruijn ##args.87 0 2)) ((bruijn call-with-values 22 4) (bruijn ##k.1039 0 0) (close _V0loop_lambda240) (bruijn loop 1 1)))
if(VDecodeBool(
VInlineNot(
VInlinePairP(
_var1
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 22-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k289, env)}),
      _var2
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 22-1, 4)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda240, env)}),
      upenv->vars[1]
    );
}
 }
}
static void _V0substitute_lambda232(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0substitute_lambda232" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0substitute_lambda232, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0substitute_k288) (bruijn loop 0 1) (close _V0loop_lambda233))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0substitute_k288, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda233, env)})
    );
 }
}
static void _V0substitute_lambda231(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0substitute_lambda231" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0substitute_lambda231, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0substitute_lambda231, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0substitute_lambda232) (bruijn ##k.1036 0 0) #f)
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0substitute_lambda232, env)}, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0substitute_lambda230(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_lambda230" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_lambda230, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0substitute_lambda230, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 19 1) (bruijn ##k.1035 0 0) (close _V0substitute_lambda231))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 19-1, 1)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0substitute_lambda231, env)})
    );
 }
}
static void _V0substitute_k299(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_k299" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k299, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0substitute_k299, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.77 9 1) (bruijn ##k.1065 2 0) (bruijn ##x.1067 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 9-1, 1)), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0substitute_k298(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_k298" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k298, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0substitute_k298, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 20 10) (close _V0substitute_k299) (quote case-lambda) (bruijn ##x.1068 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 20-1, 10)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0substitute_k299, env)}),
      VEncodePointer(&_V0case__lambda.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void _V0substitute_lambda247(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0substitute_lambda247" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0substitute_lambda247, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0substitute_lambda247, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // ((bruijn substitute-lambda 19 9) (bruijn ##k.1069 0 0) (bruijn x 9 1) (bruijn atom 9 2) (bruijn args 0 1) (bruijn body 0 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 19-1, 9)), runtime,
      _var0,
      VGetArg(upenv, 9-1, 1),
      VGetArg(upenv, 9-1, 2),
      _var1,
      _var2
    );
 }
}
static void _V0substitute_lambda246(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0substitute_lambda246" };
 VRecordCall(&dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0substitute_lambda246, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0substitute_lambda246, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((bruijn map 19 3) (close _V0substitute_k298) (close _V0substitute_lambda247) (bruijn args 0 2) (bruijn body 0 3)) ((bruijn ##k.1065 0 0) #f))
if(VDecodeBool(
VInlineNullP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 19-1, 3)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0substitute_k298, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0substitute_lambda247, env)}),
      _var2,
      _var3
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0substitute_lambda229(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0substitute_lambda229" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0substitute_lambda229, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call-with-values 18 4) (bruijn ##k.1034 0 0) (close _V0substitute_lambda230) (close _V0substitute_lambda246))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 18-1, 4)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0substitute_lambda230, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0substitute_lambda246, env)})
    );
 }
}
static void _V0substitute_k287(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_k287" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k287, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0substitute_k287, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1033 0 0) ((close _V0substitute_lambda229) (bruijn ##k.1031 1 0) (##inline ##sys.cdr (bruijn ##expr.85 1 1))) ((bruijn ##k.1031 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0substitute_lambda229, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0substitute_lambda228(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0substitute_lambda228" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0substitute_lambda228, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.85 0 1)) ((bruijn equal? 16 2) (close _V0substitute_k287) (quote case-lambda) (##inline ##sys.car (bruijn ##expr.85 0 1))) ((bruijn ##k.1031 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 16-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0substitute_k287, env)}),
      VEncodePointer(&_V0case__lambda.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0substitute_lambda250(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0substitute_lambda250" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0substitute_lambda250, runtime, upenv, 2, argc, _var0, _var1) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.95 1 1))) ((bruijn ##kk.77 8 1) (bruijn ##k.1025 0 0) (bruijn expr 9 3)) ((bruijn ##k.1025 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 8-1, 1)), runtime,
      _var0,
      VGetArg(upenv, 9-1, 3)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0substitute_lambda249(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0substitute_lambda249" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0substitute_lambda249, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.95 0 1)) ((close _V0substitute_lambda250) (bruijn ##k.1023 0 0) (##inline ##sys.car (bruijn ##expr.95 0 1))) ((bruijn ##k.1023 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0substitute_lambda250, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0substitute_k301(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_k301" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k301, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0substitute_k301, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1022 0 0) ((close _V0substitute_lambda249) (bruijn ##k.1020 1 0) (##inline ##sys.cdr (bruijn ##expr.94 1 1))) ((bruijn ##k.1020 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0substitute_lambda249, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0substitute_lambda248(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0substitute_lambda248" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0substitute_lambda248, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.94 0 1)) ((bruijn equal? 17 2) (close _V0substitute_k301) (quote quote) (##inline ##sys.car (bruijn ##expr.94 0 1))) ((bruijn ##k.1020 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 17-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0substitute_k301, env)}),
      VEncodePointer(&_V0quote.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0substitute_k305(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_k305" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k305, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0substitute_k305, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.77 11 1) (bruijn ##k.1014 3 0) (bruijn ##x.1015 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 11-1, 1)), runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0substitute_k304(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_k304" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k304, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0substitute_k304, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 22 10) (close _V0substitute_k305) (bruijn ##x.1016 1 0) (bruijn ##x.1017 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 22-1, 10)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0substitute_k305, env)}),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0substitute_k303(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_k303" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k303, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0substitute_k303, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn substitute 20 10) (close _V0substitute_k304) (bruijn x 10 1) (bruijn atom 10 2) (bruijn xs 1 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 20-1, 10)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0substitute_k304, env)}),
      VGetArg(upenv, 10-1, 1),
      VGetArg(upenv, 10-1, 2),
      upenv->vars[1]
    );
 }
}
static void _V0substitute_lambda253(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0substitute_lambda253" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0substitute_lambda253, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn substitute 19 10) (close _V0substitute_k303) (bruijn x 9 1) (bruijn atom 9 2) (bruijn f 1 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 19-1, 10)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0substitute_k303, env)}),
      VGetArg(upenv, 9-1, 1),
      VGetArg(upenv, 9-1, 2),
      upenv->vars[1]
    );
 }
}
static void _V0substitute_lambda252(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0substitute_lambda252" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0substitute_lambda252, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0substitute_lambda253) (bruijn ##k.1013 0 0) (##inline ##sys.cdr (bruijn ##expr.96 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0substitute_lambda253, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0substitute_lambda251(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0substitute_lambda251" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0substitute_lambda251, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.96 0 1)) ((close _V0substitute_lambda252) (bruijn ##k.1011 0 0) (##inline ##sys.car (bruijn ##expr.96 0 1))) ((bruijn ##k.1011 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0substitute_lambda252, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0substitute_k307(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_k307" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k307, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0substitute_k307, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1010 0 0) ((bruijn ##kk.77 8 1) (bruijn ##k.1008 1 0) (bruijn atom 9 2)) ((bruijn ##kk.77 8 1) (bruijn ##k.1008 1 0) (bruijn y 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 8-1, 1)), runtime,
      upenv->vars[0],
      VGetArg(upenv, 9-1, 2)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 8-1, 1)), runtime,
      upenv->vars[0],
      upenv->vars[1]
    );
}
 }
}
static void _V0substitute_lambda254(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0substitute_lambda254" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0substitute_lambda254, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn eqv? 19 19) (close _V0substitute_k307) (bruijn x 8 1) (bruijn y 0 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 19-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0substitute_k307, env)}),
      VGetArg(upenv, 8-1, 1),
      _var1
    );
 }
}
static void _V0substitute_k308(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_k308" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k308, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0substitute_k308, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 19 11) (bruijn ##k.1001 6 0) (##string ##string.1654))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 19-1, 11)), runtime,
      VGetArg(upenv, 6-1, 0),
      VEncodePointer(&_V10string_D1654.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0substitute_k306(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_k306" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k306, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0substitute_k306, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0substitute_lambda254) (close _V0substitute_k308) (bruijn ##input.78 5 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0substitute_lambda254, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0substitute_k308, env)}),
      VGetArg(upenv, 5-1, 1)
    );
 }
}
static void _V0substitute_k302(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_k302" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k302, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0substitute_k302, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0substitute_lambda251) (close _V0substitute_k306) (bruijn ##input.78 4 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0substitute_lambda251, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0substitute_k306, env)}),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0substitute_k300(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_k300" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k300, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0substitute_k300, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0substitute_lambda248) (close _V0substitute_k302) (bruijn ##input.78 3 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0substitute_lambda248, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0substitute_k302, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0substitute_k286(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_k286" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k286, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0substitute_k286, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0substitute_lambda228) (close _V0substitute_k300) (bruijn ##input.78 2 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0substitute_lambda228, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0substitute_k300, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0substitute_k282(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_k282" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k282, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0substitute_k282, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0substitute_lambda223) (close _V0substitute_k286) (bruijn ##input.78 1 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0substitute_lambda223, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0substitute_k286, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0substitute_lambda217(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0substitute_lambda217" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0substitute_lambda217, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0substitute_lambda218) (close _V0substitute_k282) (bruijn ##input.78 0 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0substitute_lambda218, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0substitute_k282, env)}),
      _var1
    );
 }
}
static void _V0substitute_lambda216(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0substitute_lambda216" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0substitute_lambda216, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0substitute_lambda216, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0substitute_lambda217) (bruijn ##k.1000 0 0) (bruijn expr 1 3))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0substitute_lambda217, env)}, runtime,
      _var0,
      upenv->vars[3]
    );
 }
}
static void _V0substitute_lambda215(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0substitute_lambda215" };
 VRecordCall(&dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0substitute_lambda215, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0substitute_lambda215, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn call/cc 11 1) (bruijn ##k.999 0 0) (close _V0substitute_lambda216))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 11-1, 1)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0substitute_lambda216, env)})
    );
 }
}
static void cps_k44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "cps_k44" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to cps_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)cps_k44, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close cps_k45) (bruijn substitute 9 10) (close _V0substitute_lambda215))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)cps_k45, env)}),
      VEncodeInt(9l), VEncodeInt(10l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0substitute_lambda215, env)})
    );
 }
}
static void _V0substitute__lambda_k310(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute__lambda_k310" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute__lambda_k310, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0substitute__lambda_k310, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.1108 2 0) (##inline ##sys.cons (bruijn args 2 3) (##inline ##sys.cons (bruijn ##x.1111 0 0) (quote ()))))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->vars[0]), runtime,
      VInlineCons(
upenv->up->vars[3],
      VInlineCons(
_var0,
      VNULL
    )

    )

    );
 }
}
static void _V0substitute__lambda_k309(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute__lambda_k309" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute__lambda_k309, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0substitute__lambda_k309, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1109 0 0) ((bruijn ##k.1108 1 0) (bruijn body 1 4)) ((bruijn substitute 10 10) (close _V0substitute__lambda_k310) (bruijn x 1 1) (bruijn atom 1 2) (bruijn body 1 4)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      upenv->vars[4]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 10-1, 10)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0substitute__lambda_k310, env)}),
      upenv->vars[1],
      upenv->vars[2],
      upenv->vars[4]
    );
}
 }
}
static void _V0substitute__lambda_lambda255(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 static VDebugInfo dbg = { "_V0substitute__lambda_lambda255" };
 VRecordCall(&dbg);
 if(argc != 5) {
  VError("Not enough arguments to _V0substitute__lambda_lambda255, got ~D~N"
  "-- expected 5~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0substitute__lambda_lambda255, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 5; env->var_len = 5; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // ((bruijn memtail 9 2) (close _V0substitute__lambda_k309) (bruijn x 0 1) (bruijn args 0 3))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 9-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0substitute__lambda_k309, env)}),
      _var1,
      _var3
    );
 }
}
static void cps_k43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "cps_k43" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to cps_k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)cps_k43, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close cps_k44) (bruijn substitute-lambda 8 9) (close _V0substitute__lambda_lambda255))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)cps_k44, env)}),
      VEncodeInt(8l), VEncodeInt(9l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0substitute__lambda_lambda255, env)})
    );
 }
}
static void _V0pure__in_Q_k312(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k312" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k312, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0pure__in_Q_k312, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.54 8 1) (bruijn ##k.1226 1 0) (bruijn ##x.1228 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 8-1, 1)), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0pure__in_Q_lambda263(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda263" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0pure__in_Q_lambda263, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.58 1 1))) ((bruijn pure-in-lambda? 16 7) (close _V0pure__in_Q_k312) (bruijn x 8 1) (bruijn args 2 1) (bruijn body 0 1)) ((bruijn ##k.1226 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 16-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0pure__in_Q_k312, env)}),
      VGetArg(upenv, 8-1, 1),
      upenv->up->vars[1],
      _var1
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0pure__in_Q_lambda262(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda262" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0pure__in_Q_lambda262, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.58 0 1)) ((close _V0pure__in_Q_lambda263) (bruijn ##k.1224 0 0) (##inline ##sys.car (bruijn ##expr.58 0 1))) ((bruijn ##k.1224 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0pure__in_Q_lambda263, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0pure__in_Q_lambda261(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda261" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0pure__in_Q_lambda261, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0pure__in_Q_lambda262) (bruijn ##k.1223 0 0) (##inline ##sys.cdr (bruijn ##expr.57 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0pure__in_Q_lambda262, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0pure__in_Q_lambda260(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda260" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0pure__in_Q_lambda260, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.57 0 1)) ((close _V0pure__in_Q_lambda261) (bruijn ##k.1221 0 0) (##inline ##sys.car (bruijn ##expr.57 0 1))) ((bruijn ##k.1221 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0pure__in_Q_lambda261, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0pure__in_Q_k311(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k311" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k311, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0pure__in_Q_k311, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1220 0 0) ((close _V0pure__in_Q_lambda260) (bruijn ##k.1218 1 0) (##inline ##sys.cdr (bruijn ##expr.56 1 1))) ((bruijn ##k.1218 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0pure__in_Q_lambda260, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0pure__in_Q_lambda259(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda259" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0pure__in_Q_lambda259, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.56 0 1)) ((bruijn equal? 12 2) (close _V0pure__in_Q_k311) (quote lambda) (##inline ##sys.car (bruijn ##expr.56 0 1))) ((bruijn ##k.1218 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 12-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0pure__in_Q_k311, env)}),
      VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0pure__in_Q_k315(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k315" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k315, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0pure__in_Q_k315, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.54 9 1) (bruijn ##k.1209 1 0) (bruijn ##x.1211 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 9-1, 1)), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0pure__in_Q_lambda268(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda268" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0pure__in_Q_lambda268, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.61 1 1))) ((bruijn pure-in-lambda? 17 7) (close _V0pure__in_Q_k315) (bruijn x 9 1) (bruijn args 2 1) (bruijn body 0 1)) ((bruijn ##k.1209 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 17-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0pure__in_Q_k315, env)}),
      VGetArg(upenv, 9-1, 1),
      upenv->up->vars[1],
      _var1
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0pure__in_Q_lambda267(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda267" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0pure__in_Q_lambda267, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.61 0 1)) ((close _V0pure__in_Q_lambda268) (bruijn ##k.1207 0 0) (##inline ##sys.car (bruijn ##expr.61 0 1))) ((bruijn ##k.1207 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0pure__in_Q_lambda268, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0pure__in_Q_lambda266(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda266" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0pure__in_Q_lambda266, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0pure__in_Q_lambda267) (bruijn ##k.1206 0 0) (##inline ##sys.cdr (bruijn ##expr.60 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0pure__in_Q_lambda267, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0pure__in_Q_lambda265(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda265" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0pure__in_Q_lambda265, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.60 0 1)) ((close _V0pure__in_Q_lambda266) (bruijn ##k.1204 0 0) (##inline ##sys.car (bruijn ##expr.60 0 1))) ((bruijn ##k.1204 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0pure__in_Q_lambda266, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0pure__in_Q_k314(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k314" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k314, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0pure__in_Q_k314, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1203 0 0) ((close _V0pure__in_Q_lambda265) (bruijn ##k.1201 1 0) (##inline ##sys.cdr (bruijn ##expr.59 1 1))) ((bruijn ##k.1201 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0pure__in_Q_lambda265, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0pure__in_Q_lambda264(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda264" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0pure__in_Q_lambda264, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.59 0 1)) ((bruijn equal? 13 2) (close _V0pure__in_Q_k314) (quote continuation) (##inline ##sys.car (bruijn ##expr.59 0 1))) ((bruijn ##k.1201 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 13-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0pure__in_Q_k314, env)}),
      VEncodePointer(&_V0continuation.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0pure__in_Q_k318(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k318" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k318, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0pure__in_Q_k318, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.1165 1 0) (bruijn ##expr.63 4 1) (quote ()) (quote ()))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[1]), runtime,
      upenv->vars[0],
      upenv->up->up->up->vars[1],
      VNULL,
      VNULL
    );
 }
}
static void _V0loop_lambda280(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda280" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda280, runtime, upenv, 2, argc, _var0, _var1) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.70 1 1))) ((bruijn ##kk.67 4 1) (bruijn ##k.1179 0 0) (##inline ##sys.cdr (bruijn ##expr.68 9 1)) (##inline ##sys.cons (bruijn args 2 1) (bruijn ##args.64 9 2)) (##inline ##sys.cons (bruijn body 0 1) (bruijn ##body.65 9 3))) ((bruijn ##k.1179 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->up->vars[1]), runtime,
      _var0,
      VInlineCdr(
VGetArg(upenv, 9-1, 1)
    )
,
      VInlineCons(
upenv->up->vars[1],
      VGetArg(upenv, 9-1, 2)
    )
,
      VInlineCons(
_var1,
      VGetArg(upenv, 9-1, 3)
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda279(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda279" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda279, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.70 0 1)) ((close _V0loop_lambda280) (bruijn ##k.1177 0 0) (##inline ##sys.car (bruijn ##expr.70 0 1))) ((bruijn ##k.1177 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda280, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda278(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda278" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda278, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_lambda279) (bruijn ##k.1176 0 0) (##inline ##sys.cdr (bruijn ##expr.69 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda279, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0loop_lambda277(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda277" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda277, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.69 0 1)) ((close _V0loop_lambda278) (bruijn ##k.1174 0 0) (##inline ##sys.car (bruijn ##expr.69 0 1))) ((bruijn ##k.1174 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda278, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k324(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k324" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k324, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k324, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.66 10 1) (bruijn ##k.1170 3 0) (bruijn ##expr.68 8 1) (bruijn ##x.1172 1 0) (bruijn ##x.1173 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 10-1, 1)), runtime,
      upenv->up->up->vars[0],
      VGetArg(upenv, 8-1, 1),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k323(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k323" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k323, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k323, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 27 5) (close _V0loop_k324) (bruijn ##body.65 7 3))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 27-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k324, env)}),
      VGetArg(upenv, 7-1, 3)
    );
 }
}
static void _V0loop_k322(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k322" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k322, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k322, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 26 5) (close _V0loop_k323) (bruijn ##args.64 6 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 26-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k323, env)}),
      VGetArg(upenv, 6-1, 2)
    );
 }
}
static void _V0loop_lambda276(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda276" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda276, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda276, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_lambda277) (close _V0loop_k322) (##inline ##sys.car (bruijn ##expr.68 5 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda277, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k322, env)}),
      VInlineCar(
VGetArg(upenv, 5-1, 1)
    )

    );
 }
}
static void _V0loop_lambda275(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda275" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda275, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda275, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 24 1) (bruijn ##k.1169 0 0) (close _V0loop_lambda276))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 24-1, 1)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda276, env)})
    );
 }
}
static void _V0loop_k321(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k321" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k321, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k321, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call-with-values 23 4) (bruijn ##k.1167 3 0) (close _V0loop_lambda275) (bruijn loop 4 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 23-1, 4)), runtime,
      upenv->up->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda275, env)}),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0loop_k320(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k320" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k320, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k320, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##kk.66 4 1) (close _V0loop_k321) (bruijn ##expr.68 2 1) (bruijn ##x.1190 1 0) (bruijn ##x.1191 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->up->vars[1]), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k321, env)}),
      upenv->up->vars[1],
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k319(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k319" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k319, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k319, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 21 5) (close _V0loop_k320) (bruijn ##body.65 1 3))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 21-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k320, env)}),
      upenv->vars[3]
    );
 }
}
static void _V0loop_lambda286(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda286" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda286, runtime, upenv, 2, argc, _var0, _var1) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.70 1 1))) ((bruijn ##kk.67 4 1) (bruijn ##k.1179 0 0) (##inline ##sys.cdr (bruijn ##expr.68 6 1)) (##inline ##sys.cons (bruijn args 2 1) (bruijn ##args.64 6 2)) (##inline ##sys.cons (bruijn body 0 1) (bruijn ##body.65 6 3))) ((bruijn ##k.1179 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->up->vars[1]), runtime,
      _var0,
      VInlineCdr(
VGetArg(upenv, 6-1, 1)
    )
,
      VInlineCons(
upenv->up->vars[1],
      VGetArg(upenv, 6-1, 2)
    )
,
      VInlineCons(
_var1,
      VGetArg(upenv, 6-1, 3)
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda285(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda285" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda285, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.70 0 1)) ((close _V0loop_lambda286) (bruijn ##k.1177 0 0) (##inline ##sys.car (bruijn ##expr.70 0 1))) ((bruijn ##k.1177 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda286, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda284(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda284" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda284, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_lambda285) (bruijn ##k.1176 0 0) (##inline ##sys.cdr (bruijn ##expr.69 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda285, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0loop_lambda283(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda283" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda283, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.69 0 1)) ((close _V0loop_lambda284) (bruijn ##k.1174 0 0) (##inline ##sys.car (bruijn ##expr.69 0 1))) ((bruijn ##k.1174 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda284, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k327(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k327" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k327, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k327, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.66 7 1) (bruijn ##k.1170 3 0) (bruijn ##expr.68 5 1) (bruijn ##x.1172 1 0) (bruijn ##x.1173 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 7-1, 1)), runtime,
      upenv->up->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k326(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k326" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k326, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k326, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 24 5) (close _V0loop_k327) (bruijn ##body.65 4 3))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 24-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k327, env)}),
      upenv->up->up->up->vars[3]
    );
 }
}
static void _V0loop_k325(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k325" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k325, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k325, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 23 5) (close _V0loop_k326) (bruijn ##args.64 3 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 23-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k326, env)}),
      upenv->up->up->vars[2]
    );
 }
}
static void _V0loop_lambda282(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda282" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda282, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda282, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_lambda283) (close _V0loop_k325) (##inline ##sys.car (bruijn ##expr.68 2 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda283, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k325, env)}),
      VInlineCar(
upenv->up->vars[1]
    )

    );
 }
}
static void _V0loop_lambda281(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda281" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda281, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda281, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 21 1) (bruijn ##k.1169 0 0) (close _V0loop_lambda282))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 21-1, 1)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda282, env)})
    );
 }
}
static void _V0loop_lambda274(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0loop_lambda274" };
 VRecordCall(&dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0loop_lambda274, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda274, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.68 0 1))) ((bruijn reverse 20 5) (close _V0loop_k319) (bruijn ##args.64 0 2)) ((bruijn call-with-values 20 4) (bruijn ##k.1167 0 0) (close _V0loop_lambda281) (bruijn loop 1 1)))
if(VDecodeBool(
VInlineNot(
VInlinePairP(
_var1
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 20-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k319, env)}),
      _var2
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 20-1, 4)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda281, env)}),
      upenv->vars[1]
    );
}
 }
}
static void _V0pure__in_Q_lambda273(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda273" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0pure__in_Q_lambda273, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0pure__in_Q_k318) (bruijn loop 0 1) (close _V0loop_lambda274))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0pure__in_Q_k318, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda274, env)})
    );
 }
}
static void _V0pure__in_Q_lambda272(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda272" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0pure__in_Q_lambda272, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0pure__in_Q_lambda272, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0pure__in_Q_lambda273) (bruijn ##k.1164 0 0) #f)
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0pure__in_Q_lambda273, env)}, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0pure__in_Q_lambda271(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda271" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_lambda271, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0pure__in_Q_lambda271, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 17 1) (bruijn ##k.1163 0 0) (close _V0pure__in_Q_lambda272))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 17-1, 1)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0pure__in_Q_lambda272, env)})
    );
 }
}
static void _V0pure__in_Q_k329(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k329" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k329, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0pure__in_Q_k329, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.54 9 1) (bruijn ##k.1193 2 0) (bruijn ##x.1195 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 9-1, 1)), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0pure__in_Q_lambda288(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda288" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0pure__in_Q_lambda288, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0pure__in_Q_lambda288, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // (if (bruijn a 0 1) ((bruijn ##k.1196 0 0) (bruijn b 0 2)) ((bruijn ##k.1196 0 0) #f))
if(VDecodeBool(
_var1)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      _var2
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0pure__in_Q_k328(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k328" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k328, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0pure__in_Q_k328, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn fold 18 20) (close _V0pure__in_Q_k329) (close _V0pure__in_Q_lambda288) #t (bruijn ##x.1197 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 18-1, 20)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0pure__in_Q_k329, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0pure__in_Q_lambda288, env)}),
      VEncodeBool(true),
      _var0
    );
 }
}
static void _V0pure__in_Q_lambda289(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda289" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0pure__in_Q_lambda289, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0pure__in_Q_lambda289, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // ((bruijn pure-in-lambda? 17 7) (bruijn ##k.1198 0 0) (bruijn x 9 1) (bruijn args 0 1) (bruijn body 0 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 17-1, 7)), runtime,
      _var0,
      VGetArg(upenv, 9-1, 1),
      _var1,
      _var2
    );
 }
}
static void _V0pure__in_Q_lambda287(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda287" };
 VRecordCall(&dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0pure__in_Q_lambda287, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0pure__in_Q_lambda287, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((bruijn map 17 3) (close _V0pure__in_Q_k328) (close _V0pure__in_Q_lambda289) (bruijn args 0 2) (bruijn body 0 3)) ((bruijn ##k.1193 0 0) #f))
if(VDecodeBool(
VInlineNullP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 17-1, 3)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0pure__in_Q_k328, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0pure__in_Q_lambda289, env)}),
      _var2,
      _var3
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0pure__in_Q_lambda270(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda270" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0pure__in_Q_lambda270, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call-with-values 16 4) (bruijn ##k.1162 0 0) (close _V0pure__in_Q_lambda271) (close _V0pure__in_Q_lambda287))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 16-1, 4)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0pure__in_Q_lambda271, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0pure__in_Q_lambda287, env)})
    );
 }
}
static void _V0pure__in_Q_k317(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k317" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k317, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0pure__in_Q_k317, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1161 0 0) ((close _V0pure__in_Q_lambda270) (bruijn ##k.1159 1 0) (##inline ##sys.cdr (bruijn ##expr.62 1 1))) ((bruijn ##k.1159 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0pure__in_Q_lambda270, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0pure__in_Q_lambda269(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda269" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0pure__in_Q_lambda269, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.62 0 1)) ((bruijn equal? 14 2) (close _V0pure__in_Q_k317) (quote case-lambda) (##inline ##sys.car (bruijn ##expr.62 0 1))) ((bruijn ##k.1159 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0pure__in_Q_k317, env)}),
      VEncodePointer(&_V0case__lambda.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0pure__in_Q_lambda292(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda292" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0pure__in_Q_lambda292, runtime, upenv, 2, argc, _var0, _var1) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.72 1 1))) ((bruijn ##kk.54 8 1) (bruijn ##k.1153 0 0) #t) ((bruijn ##k.1153 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 8-1, 1)), runtime,
      _var0,
      VEncodeBool(true)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0pure__in_Q_lambda291(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda291" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0pure__in_Q_lambda291, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.72 0 1)) ((close _V0pure__in_Q_lambda292) (bruijn ##k.1151 0 0) (##inline ##sys.car (bruijn ##expr.72 0 1))) ((bruijn ##k.1151 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0pure__in_Q_lambda292, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0pure__in_Q_k331(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k331" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k331, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0pure__in_Q_k331, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1150 0 0) ((close _V0pure__in_Q_lambda291) (bruijn ##k.1148 1 0) (##inline ##sys.cdr (bruijn ##expr.71 1 1))) ((bruijn ##k.1148 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0pure__in_Q_lambda291, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0pure__in_Q_lambda290(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda290" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0pure__in_Q_lambda290, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.71 0 1)) ((bruijn equal? 15 2) (close _V0pure__in_Q_k331) (quote quote) (##inline ##sys.car (bruijn ##expr.71 0 1))) ((bruijn ##k.1148 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 15-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0pure__in_Q_k331, env)}),
      VEncodePointer(&_V0quote.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0pure__in_Q_k336(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k336" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k336, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0pure__in_Q_k336, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.54 15 1) (bruijn ##k.1138 3 0) (bruijn ##x.1139 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 15-1, 1)), runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0pure__in_Q_k335(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k335" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k335, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0pure__in_Q_k335, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1141 0 0) ((bruijn pure-in? 23 8) (close _V0pure__in_Q_k336) (bruijn x 15 1) (bruijn body 2 1)) ((bruijn ##kk.54 14 1) (bruijn ##k.1138 2 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 23-1, 8)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0pure__in_Q_k336, env)}),
      VGetArg(upenv, 15-1, 1),
      upenv->up->vars[1]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 1)), runtime,
      upenv->up->vars[0],
      VEncodeBool(false)
    );
}
 }
}
static void _V0pure__in_Q_k334(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k334" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k334, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0pure__in_Q_k334, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1140 0 0) ((bruijn ##kk.54 13 1) (bruijn ##k.1138 1 0) #f) ((bruijn pure-in? 22 8) (close _V0pure__in_Q_k335) (bruijn x 14 1) (bruijn k 4 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 13-1, 1)), runtime,
      upenv->vars[0],
      VEncodeBool(false)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 22-1, 8)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0pure__in_Q_k335, env)}),
      VGetArg(upenv, 14-1, 1),
      upenv->up->up->up->vars[1]
    );
}
 }
}
static void _V0pure__in_Q_lambda298(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda298" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0pure__in_Q_lambda298, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn eqv? 22 19) (close _V0pure__in_Q_k334) (bruijn x 13 1) (bruijn y 1 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 22-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0pure__in_Q_k334, env)}),
      VGetArg(upenv, 13-1, 1),
      upenv->vars[1]
    );
 }
}
static void _V0pure__in_Q_lambda297(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda297" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0pure__in_Q_lambda297, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0pure__in_Q_lambda298) (bruijn ##k.1137 0 0) (##inline ##sys.cdr (bruijn ##expr.75 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0pure__in_Q_lambda298, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0pure__in_Q_lambda296(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda296" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0pure__in_Q_lambda296, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.75 0 1)) ((close _V0pure__in_Q_lambda297) (bruijn ##k.1135 0 0) (##inline ##sys.car (bruijn ##expr.75 0 1))) ((bruijn ##k.1135 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0pure__in_Q_lambda297, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0pure__in_Q_lambda295(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda295" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0pure__in_Q_lambda295, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0pure__in_Q_lambda296) (bruijn ##k.1134 0 0) (##inline ##sys.cdr (bruijn ##expr.74 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0pure__in_Q_lambda296, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0pure__in_Q_lambda294(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda294" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0pure__in_Q_lambda294, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.74 0 1)) ((close _V0pure__in_Q_lambda295) (bruijn ##k.1132 0 0) (##inline ##sys.car (bruijn ##expr.74 0 1))) ((bruijn ##k.1132 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0pure__in_Q_lambda295, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0pure__in_Q_k333(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k333" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k333, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0pure__in_Q_k333, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1131 0 0) ((close _V0pure__in_Q_lambda294) (bruijn ##k.1129 1 0) (##inline ##sys.cdr (bruijn ##expr.73 1 1))) ((bruijn ##k.1129 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0pure__in_Q_lambda294, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0pure__in_Q_lambda293(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda293" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0pure__in_Q_lambda293, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.73 0 1)) ((bruijn equal? 16 2) (close _V0pure__in_Q_k333) (quote set!) (##inline ##sys.car (bruijn ##expr.73 0 1))) ((bruijn ##k.1129 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 16-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0pure__in_Q_k333, env)}),
      VEncodePointer(&_V0set_B.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0pure__in_Q_k339(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k339" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k339, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0pure__in_Q_k339, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.54 11 1) (bruijn ##k.1124 2 0) (bruijn ##x.1125 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 11-1, 1)), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0pure__in_Q_k338(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k338" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k338, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0pure__in_Q_k338, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1126 0 0) ((bruijn pure-in? 19 8) (close _V0pure__in_Q_k339) (bruijn x 11 1) (bruijn xs 1 1)) ((bruijn ##kk.54 10 1) (bruijn ##k.1124 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 19-1, 8)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0pure__in_Q_k339, env)}),
      VGetArg(upenv, 11-1, 1),
      upenv->vars[1]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 10-1, 1)), runtime,
      upenv->vars[0],
      VEncodeBool(false)
    );
}
 }
}
static void _V0pure__in_Q_lambda301(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda301" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0pure__in_Q_lambda301, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn pure-in? 18 8) (close _V0pure__in_Q_k338) (bruijn x 10 1) (bruijn f 1 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 18-1, 8)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0pure__in_Q_k338, env)}),
      VGetArg(upenv, 10-1, 1),
      upenv->vars[1]
    );
 }
}
static void _V0pure__in_Q_lambda300(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda300" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0pure__in_Q_lambda300, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0pure__in_Q_lambda301) (bruijn ##k.1123 0 0) (##inline ##sys.cdr (bruijn ##expr.76 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0pure__in_Q_lambda301, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0pure__in_Q_lambda299(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda299" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0pure__in_Q_lambda299, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.76 0 1)) ((close _V0pure__in_Q_lambda300) (bruijn ##k.1121 0 0) (##inline ##sys.car (bruijn ##expr.76 0 1))) ((bruijn ##k.1121 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0pure__in_Q_lambda300, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0pure__in_Q_k340(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k340" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k340, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0pure__in_Q_k340, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.54 7 1) (bruijn ##k.1114 6 0) #t)
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 7-1, 1)), runtime,
      VGetArg(upenv, 6-1, 0),
      VEncodeBool(true)
    );
 }
}
static void _V0pure__in_Q_k337(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k337" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k337, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0pure__in_Q_k337, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0pure__in_Q_lambda299) (close _V0pure__in_Q_k340) (bruijn ##input.55 5 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0pure__in_Q_lambda299, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0pure__in_Q_k340, env)}),
      VGetArg(upenv, 5-1, 1)
    );
 }
}
static void _V0pure__in_Q_k332(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k332" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k332, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0pure__in_Q_k332, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0pure__in_Q_lambda293) (close _V0pure__in_Q_k337) (bruijn ##input.55 4 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0pure__in_Q_lambda293, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0pure__in_Q_k337, env)}),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0pure__in_Q_k330(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k330" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k330, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0pure__in_Q_k330, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0pure__in_Q_lambda290) (close _V0pure__in_Q_k332) (bruijn ##input.55 3 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0pure__in_Q_lambda290, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0pure__in_Q_k332, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0pure__in_Q_k316(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k316" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k316, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0pure__in_Q_k316, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0pure__in_Q_lambda269) (close _V0pure__in_Q_k330) (bruijn ##input.55 2 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0pure__in_Q_lambda269, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0pure__in_Q_k330, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0pure__in_Q_k313(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k313" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k313, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0pure__in_Q_k313, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0pure__in_Q_lambda264) (close _V0pure__in_Q_k316) (bruijn ##input.55 1 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0pure__in_Q_lambda264, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0pure__in_Q_k316, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0pure__in_Q_lambda258(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda258" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0pure__in_Q_lambda258, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0pure__in_Q_lambda259) (close _V0pure__in_Q_k313) (bruijn ##input.55 0 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0pure__in_Q_lambda259, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0pure__in_Q_k313, env)}),
      _var1
    );
 }
}
static void _V0pure__in_Q_lambda257(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda257" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0pure__in_Q_lambda257, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0pure__in_Q_lambda257, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0pure__in_Q_lambda258) (bruijn ##k.1113 0 0) (bruijn expr 1 2))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0pure__in_Q_lambda258, env)}, runtime,
      _var0,
      upenv->vars[2]
    );
 }
}
static void _V0pure__in_Q_lambda256(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda256" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0pure__in_Q_lambda256, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0pure__in_Q_lambda256, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn call/cc 9 1) (bruijn ##k.1112 0 0) (close _V0pure__in_Q_lambda257))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 9-1, 1)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0pure__in_Q_lambda257, env)})
    );
 }
}
static void cps_k42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "cps_k42" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to cps_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)cps_k42, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close cps_k43) (bruijn pure-in? 7 8) (close _V0pure__in_Q_lambda256))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)cps_k43, env)}),
      VEncodeInt(7l), VEncodeInt(8l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0pure__in_Q_lambda256, env)})
    );
 }
}
static void _V0pure__in__lambda_Q_k341(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in__lambda_Q_k341" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in__lambda_Q_k341, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0pure__in__lambda_Q_k341, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1236 0 0) ((bruijn ##k.1235 1 0) #t) ((bruijn pure-in? 8 8) (bruijn ##k.1235 1 0) (bruijn x 1 1) (bruijn body 1 3)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(true)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 8-1, 8)), runtime,
      upenv->vars[0],
      upenv->vars[1],
      upenv->vars[3]
    );
}
 }
}
static void _V0pure__in__lambda_Q_lambda302(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0pure__in__lambda_Q_lambda302" };
 VRecordCall(&dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0pure__in__lambda_Q_lambda302, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0pure__in__lambda_Q_lambda302, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn memtail 7 2) (close _V0pure__in__lambda_Q_k341) (bruijn x 0 1) (bruijn args 0 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 7-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0pure__in__lambda_Q_k341, env)}),
      _var1,
      _var2
    );
 }
}
static void cps_k41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "cps_k41" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to cps_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)cps_k41, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close cps_k42) (bruijn pure-in-lambda? 6 7) (close _V0pure__in__lambda_Q_lambda302))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)cps_k42, env)}),
      VEncodeInt(6l), VEncodeInt(7l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0pure__in__lambda_Q_lambda302, env)})
    );
 }
}
static void _V0ref__count_k343(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count_k343" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k343, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0ref__count_k343, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.34 8 1) (bruijn ##k.1335 1 0) (bruijn ##x.1337 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 8-1, 1)), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0ref__count_lambda310(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0ref__count_lambda310" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0ref__count_lambda310, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.38 1 1))) ((bruijn ref-count-lambda 14 5) (close _V0ref__count_k343) (bruijn x 8 1) (bruijn args 2 1) (bruijn body 0 1)) ((bruijn ##k.1335 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0ref__count_k343, env)}),
      VGetArg(upenv, 8-1, 1),
      upenv->up->vars[1],
      _var1
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0ref__count_lambda309(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0ref__count_lambda309" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0ref__count_lambda309, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.38 0 1)) ((close _V0ref__count_lambda310) (bruijn ##k.1333 0 0) (##inline ##sys.car (bruijn ##expr.38 0 1))) ((bruijn ##k.1333 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0ref__count_lambda310, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0ref__count_lambda308(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0ref__count_lambda308" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0ref__count_lambda308, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0ref__count_lambda309) (bruijn ##k.1332 0 0) (##inline ##sys.cdr (bruijn ##expr.37 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0ref__count_lambda309, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0ref__count_lambda307(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0ref__count_lambda307" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0ref__count_lambda307, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.37 0 1)) ((close _V0ref__count_lambda308) (bruijn ##k.1330 0 0) (##inline ##sys.car (bruijn ##expr.37 0 1))) ((bruijn ##k.1330 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0ref__count_lambda308, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0ref__count_k342(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count_k342" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k342, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0ref__count_k342, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1329 0 0) ((close _V0ref__count_lambda307) (bruijn ##k.1327 1 0) (##inline ##sys.cdr (bruijn ##expr.36 1 1))) ((bruijn ##k.1327 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0ref__count_lambda307, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0ref__count_lambda306(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0ref__count_lambda306" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0ref__count_lambda306, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.36 0 1)) ((bruijn equal? 10 2) (close _V0ref__count_k342) (quote lambda) (##inline ##sys.car (bruijn ##expr.36 0 1))) ((bruijn ##k.1327 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 10-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0ref__count_k342, env)}),
      VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0ref__count_k346(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count_k346" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k346, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0ref__count_k346, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.34 9 1) (bruijn ##k.1318 1 0) (bruijn ##x.1320 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 9-1, 1)), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0ref__count_lambda315(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0ref__count_lambda315" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0ref__count_lambda315, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.41 1 1))) ((bruijn ref-count-lambda 15 5) (close _V0ref__count_k346) (bruijn x 9 1) (bruijn args 2 1) (bruijn body 0 1)) ((bruijn ##k.1318 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 15-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0ref__count_k346, env)}),
      VGetArg(upenv, 9-1, 1),
      upenv->up->vars[1],
      _var1
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0ref__count_lambda314(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0ref__count_lambda314" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0ref__count_lambda314, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.41 0 1)) ((close _V0ref__count_lambda315) (bruijn ##k.1316 0 0) (##inline ##sys.car (bruijn ##expr.41 0 1))) ((bruijn ##k.1316 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0ref__count_lambda315, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0ref__count_lambda313(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0ref__count_lambda313" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0ref__count_lambda313, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0ref__count_lambda314) (bruijn ##k.1315 0 0) (##inline ##sys.cdr (bruijn ##expr.40 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0ref__count_lambda314, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0ref__count_lambda312(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0ref__count_lambda312" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0ref__count_lambda312, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.40 0 1)) ((close _V0ref__count_lambda313) (bruijn ##k.1313 0 0) (##inline ##sys.car (bruijn ##expr.40 0 1))) ((bruijn ##k.1313 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0ref__count_lambda313, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0ref__count_k345(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count_k345" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k345, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0ref__count_k345, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1312 0 0) ((close _V0ref__count_lambda312) (bruijn ##k.1310 1 0) (##inline ##sys.cdr (bruijn ##expr.39 1 1))) ((bruijn ##k.1310 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0ref__count_lambda312, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0ref__count_lambda311(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0ref__count_lambda311" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0ref__count_lambda311, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.39 0 1)) ((bruijn equal? 11 2) (close _V0ref__count_k345) (quote continuation) (##inline ##sys.car (bruijn ##expr.39 0 1))) ((bruijn ##k.1310 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 11-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0ref__count_k345, env)}),
      VEncodePointer(&_V0continuation.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0ref__count_k349(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count_k349" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k349, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0ref__count_k349, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.1275 1 0) (bruijn ##expr.43 4 1) (quote ()) (quote ()))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[1]), runtime,
      upenv->vars[0],
      upenv->up->up->up->vars[1],
      VNULL,
      VNULL
    );
 }
}
static void _V0loop_lambda327(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda327" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda327, runtime, upenv, 2, argc, _var0, _var1) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.50 1 1))) ((bruijn ##kk.47 4 1) (bruijn ##k.1289 0 0) (##inline ##sys.cdr (bruijn ##expr.48 9 1)) (##inline ##sys.cons (bruijn args 2 1) (bruijn ##args.44 9 2)) (##inline ##sys.cons (bruijn body 0 1) (bruijn ##body.45 9 3))) ((bruijn ##k.1289 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->up->vars[1]), runtime,
      _var0,
      VInlineCdr(
VGetArg(upenv, 9-1, 1)
    )
,
      VInlineCons(
upenv->up->vars[1],
      VGetArg(upenv, 9-1, 2)
    )
,
      VInlineCons(
_var1,
      VGetArg(upenv, 9-1, 3)
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda326(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda326" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda326, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.50 0 1)) ((close _V0loop_lambda327) (bruijn ##k.1287 0 0) (##inline ##sys.car (bruijn ##expr.50 0 1))) ((bruijn ##k.1287 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda327, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda325(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda325" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda325, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_lambda326) (bruijn ##k.1286 0 0) (##inline ##sys.cdr (bruijn ##expr.49 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda326, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0loop_lambda324(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda324" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda324, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.49 0 1)) ((close _V0loop_lambda325) (bruijn ##k.1284 0 0) (##inline ##sys.car (bruijn ##expr.49 0 1))) ((bruijn ##k.1284 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda325, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k355(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k355" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k355, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k355, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.46 10 1) (bruijn ##k.1280 3 0) (bruijn ##expr.48 8 1) (bruijn ##x.1282 1 0) (bruijn ##x.1283 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 10-1, 1)), runtime,
      upenv->up->up->vars[0],
      VGetArg(upenv, 8-1, 1),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k354(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k354" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k354, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k354, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 25 5) (close _V0loop_k355) (bruijn ##body.45 7 3))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 25-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k355, env)}),
      VGetArg(upenv, 7-1, 3)
    );
 }
}
static void _V0loop_k353(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k353" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k353, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k353, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 24 5) (close _V0loop_k354) (bruijn ##args.44 6 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 24-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k354, env)}),
      VGetArg(upenv, 6-1, 2)
    );
 }
}
static void _V0loop_lambda323(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda323" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda323, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda323, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_lambda324) (close _V0loop_k353) (##inline ##sys.car (bruijn ##expr.48 5 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda324, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k353, env)}),
      VInlineCar(
VGetArg(upenv, 5-1, 1)
    )

    );
 }
}
static void _V0loop_lambda322(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda322" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda322, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda322, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 22 1) (bruijn ##k.1279 0 0) (close _V0loop_lambda323))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 22-1, 1)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda323, env)})
    );
 }
}
static void _V0loop_k352(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k352" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k352, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k352, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call-with-values 21 4) (bruijn ##k.1277 3 0) (close _V0loop_lambda322) (bruijn loop 4 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 21-1, 4)), runtime,
      upenv->up->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda322, env)}),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0loop_k351(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k351" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k351, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k351, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##kk.46 4 1) (close _V0loop_k352) (bruijn ##expr.48 2 1) (bruijn ##x.1300 1 0) (bruijn ##x.1301 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->up->vars[1]), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k352, env)}),
      upenv->up->vars[1],
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k350(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k350" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k350, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k350, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 19 5) (close _V0loop_k351) (bruijn ##body.45 1 3))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 19-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k351, env)}),
      upenv->vars[3]
    );
 }
}
static void _V0loop_lambda333(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda333" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda333, runtime, upenv, 2, argc, _var0, _var1) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.50 1 1))) ((bruijn ##kk.47 4 1) (bruijn ##k.1289 0 0) (##inline ##sys.cdr (bruijn ##expr.48 6 1)) (##inline ##sys.cons (bruijn args 2 1) (bruijn ##args.44 6 2)) (##inline ##sys.cons (bruijn body 0 1) (bruijn ##body.45 6 3))) ((bruijn ##k.1289 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->up->vars[1]), runtime,
      _var0,
      VInlineCdr(
VGetArg(upenv, 6-1, 1)
    )
,
      VInlineCons(
upenv->up->vars[1],
      VGetArg(upenv, 6-1, 2)
    )
,
      VInlineCons(
_var1,
      VGetArg(upenv, 6-1, 3)
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda332(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda332" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda332, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.50 0 1)) ((close _V0loop_lambda333) (bruijn ##k.1287 0 0) (##inline ##sys.car (bruijn ##expr.50 0 1))) ((bruijn ##k.1287 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda333, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda331(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda331" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda331, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_lambda332) (bruijn ##k.1286 0 0) (##inline ##sys.cdr (bruijn ##expr.49 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda332, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0loop_lambda330(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda330" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda330, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.49 0 1)) ((close _V0loop_lambda331) (bruijn ##k.1284 0 0) (##inline ##sys.car (bruijn ##expr.49 0 1))) ((bruijn ##k.1284 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda331, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k358(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k358" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k358, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k358, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.46 7 1) (bruijn ##k.1280 3 0) (bruijn ##expr.48 5 1) (bruijn ##x.1282 1 0) (bruijn ##x.1283 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 7-1, 1)), runtime,
      upenv->up->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k357(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k357" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k357, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k357, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 22 5) (close _V0loop_k358) (bruijn ##body.45 4 3))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 22-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k358, env)}),
      upenv->up->up->up->vars[3]
    );
 }
}
static void _V0loop_k356(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k356" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k356, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k356, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 21 5) (close _V0loop_k357) (bruijn ##args.44 3 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 21-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k357, env)}),
      upenv->up->up->vars[2]
    );
 }
}
static void _V0loop_lambda329(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda329" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda329, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda329, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_lambda330) (close _V0loop_k356) (##inline ##sys.car (bruijn ##expr.48 2 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda330, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k356, env)}),
      VInlineCar(
upenv->up->vars[1]
    )

    );
 }
}
static void _V0loop_lambda328(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda328" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda328, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda328, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 19 1) (bruijn ##k.1279 0 0) (close _V0loop_lambda329))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 19-1, 1)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda329, env)})
    );
 }
}
static void _V0loop_lambda321(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0loop_lambda321" };
 VRecordCall(&dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0loop_lambda321, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda321, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.48 0 1))) ((bruijn reverse 18 5) (close _V0loop_k350) (bruijn ##args.44 0 2)) ((bruijn call-with-values 18 4) (bruijn ##k.1277 0 0) (close _V0loop_lambda328) (bruijn loop 1 1)))
if(VDecodeBool(
VInlineNot(
VInlinePairP(
_var1
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 18-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k350, env)}),
      _var2
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 18-1, 4)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda328, env)}),
      upenv->vars[1]
    );
}
 }
}
static void _V0ref__count_lambda320(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0ref__count_lambda320" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0ref__count_lambda320, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0ref__count_k349) (bruijn loop 0 1) (close _V0loop_lambda321))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0ref__count_k349, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda321, env)})
    );
 }
}
static void _V0ref__count_lambda319(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0ref__count_lambda319" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0ref__count_lambda319, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0ref__count_lambda319, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0ref__count_lambda320) (bruijn ##k.1274 0 0) #f)
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0ref__count_lambda320, env)}, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0ref__count_lambda318(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count_lambda318" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_lambda318, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0ref__count_lambda318, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 15 1) (bruijn ##k.1273 0 0) (close _V0ref__count_lambda319))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 15-1, 1)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0ref__count_lambda319, env)})
    );
 }
}
static void _V0ref__count_k360(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count_k360" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k360, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0ref__count_k360, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.34 9 1) (bruijn ##k.1303 2 0) (bruijn ##x.1305 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 9-1, 1)), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0ref__count_k359(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count_k359" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k359, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0ref__count_k359, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn apply 16 28) (close _V0ref__count_k360) (bruijn + 16 16) (bruijn ##x.1306 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 16-1, 28)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0ref__count_k360, env)}),
      VGetArg(upenv, 16-1, 16),
      _var0
    );
 }
}
static void _V0ref__count_lambda335(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0ref__count_lambda335" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0ref__count_lambda335, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0ref__count_lambda335, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // ((bruijn ref-count-lambda 15 5) (bruijn ##k.1307 0 0) (bruijn x 9 1) (bruijn args 0 1) (bruijn body 0 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 15-1, 5)), runtime,
      _var0,
      VGetArg(upenv, 9-1, 1),
      _var1,
      _var2
    );
 }
}
static void _V0ref__count_lambda334(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0ref__count_lambda334" };
 VRecordCall(&dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0ref__count_lambda334, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0ref__count_lambda334, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((bruijn map 15 3) (close _V0ref__count_k359) (close _V0ref__count_lambda335) (bruijn args 0 2) (bruijn body 0 3)) ((bruijn ##k.1303 0 0) #f))
if(VDecodeBool(
VInlineNullP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 15-1, 3)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0ref__count_k359, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0ref__count_lambda335, env)}),
      _var2,
      _var3
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0ref__count_lambda317(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0ref__count_lambda317" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0ref__count_lambda317, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call-with-values 14 4) (bruijn ##k.1272 0 0) (close _V0ref__count_lambda318) (close _V0ref__count_lambda334))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 4)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0ref__count_lambda318, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0ref__count_lambda334, env)})
    );
 }
}
static void _V0ref__count_k348(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count_k348" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k348, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0ref__count_k348, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1271 0 0) ((close _V0ref__count_lambda317) (bruijn ##k.1269 1 0) (##inline ##sys.cdr (bruijn ##expr.42 1 1))) ((bruijn ##k.1269 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0ref__count_lambda317, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0ref__count_lambda316(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0ref__count_lambda316" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0ref__count_lambda316, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.42 0 1)) ((bruijn equal? 12 2) (close _V0ref__count_k348) (quote case-lambda) (##inline ##sys.car (bruijn ##expr.42 0 1))) ((bruijn ##k.1269 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 12-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0ref__count_k348, env)}),
      VEncodePointer(&_V0case__lambda.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0ref__count_lambda338(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0ref__count_lambda338" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0ref__count_lambda338, runtime, upenv, 2, argc, _var0, _var1) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.52 1 1))) ((bruijn ##kk.34 8 1) (bruijn ##k.1263 0 0) 0) ((bruijn ##k.1263 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 8-1, 1)), runtime,
      _var0,
      VEncodeInt(0l)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0ref__count_lambda337(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0ref__count_lambda337" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0ref__count_lambda337, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.52 0 1)) ((close _V0ref__count_lambda338) (bruijn ##k.1261 0 0) (##inline ##sys.car (bruijn ##expr.52 0 1))) ((bruijn ##k.1261 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0ref__count_lambda338, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0ref__count_k362(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count_k362" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k362, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0ref__count_k362, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1260 0 0) ((close _V0ref__count_lambda337) (bruijn ##k.1258 1 0) (##inline ##sys.cdr (bruijn ##expr.51 1 1))) ((bruijn ##k.1258 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0ref__count_lambda337, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0ref__count_lambda336(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0ref__count_lambda336" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0ref__count_lambda336, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.51 0 1)) ((bruijn equal? 13 2) (close _V0ref__count_k362) (quote quote) (##inline ##sys.car (bruijn ##expr.51 0 1))) ((bruijn ##k.1258 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 13-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0ref__count_k362, env)}),
      VEncodePointer(&_V0quote.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0ref__count_k366(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count_k366" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k366, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0ref__count_k366, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.34 11 1) (bruijn ##k.1252 3 0) (bruijn ##x.1253 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 11-1, 1)), runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0ref__count_k365(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count_k365" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k365, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0ref__count_k365, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn + 18 16) (close _V0ref__count_k366) (bruijn ##x.1254 1 0) (bruijn ##x.1255 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 18-1, 16)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0ref__count_k366, env)}),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0ref__count_k364(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count_k364" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k364, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0ref__count_k364, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ref-count 16 6) (close _V0ref__count_k365) (bruijn x 10 1) (bruijn xs 1 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 16-1, 6)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0ref__count_k365, env)}),
      VGetArg(upenv, 10-1, 1),
      upenv->vars[1]
    );
 }
}
static void _V0ref__count_lambda341(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0ref__count_lambda341" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0ref__count_lambda341, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ref-count 15 6) (close _V0ref__count_k364) (bruijn x 9 1) (bruijn f 1 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 15-1, 6)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0ref__count_k364, env)}),
      VGetArg(upenv, 9-1, 1),
      upenv->vars[1]
    );
 }
}
static void _V0ref__count_lambda340(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0ref__count_lambda340" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0ref__count_lambda340, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0ref__count_lambda341) (bruijn ##k.1251 0 0) (##inline ##sys.cdr (bruijn ##expr.53 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0ref__count_lambda341, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0ref__count_lambda339(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0ref__count_lambda339" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0ref__count_lambda339, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.53 0 1)) ((close _V0ref__count_lambda340) (bruijn ##k.1249 0 0) (##inline ##sys.car (bruijn ##expr.53 0 1))) ((bruijn ##k.1249 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0ref__count_lambda340, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0ref__count_k368(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count_k368" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k368, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0ref__count_k368, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1248 0 0) ((bruijn ##kk.34 8 1) (bruijn ##k.1246 1 0) 1) ((bruijn ##kk.34 8 1) (bruijn ##k.1246 1 0) 0))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 8-1, 1)), runtime,
      upenv->vars[0],
      VEncodeInt(1l)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 8-1, 1)), runtime,
      upenv->vars[0],
      VEncodeInt(0l)
    );
}
 }
}
static void _V0ref__count_lambda342(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0ref__count_lambda342" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0ref__count_lambda342, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn eqv? 15 19) (close _V0ref__count_k368) (bruijn x 8 1) (bruijn y 0 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 15-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0ref__count_k368, env)}),
      VGetArg(upenv, 8-1, 1),
      _var1
    );
 }
}
static void _V0ref__count_k369(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count_k369" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k369, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0ref__count_k369, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 15 11) (bruijn ##k.1239 6 0) (##string ##string.1654))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 15-1, 11)), runtime,
      VGetArg(upenv, 6-1, 0),
      VEncodePointer(&_V10string_D1654.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0ref__count_k367(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count_k367" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k367, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0ref__count_k367, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0ref__count_lambda342) (close _V0ref__count_k369) (bruijn ##input.35 5 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0ref__count_lambda342, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0ref__count_k369, env)}),
      VGetArg(upenv, 5-1, 1)
    );
 }
}
static void _V0ref__count_k363(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count_k363" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k363, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0ref__count_k363, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0ref__count_lambda339) (close _V0ref__count_k367) (bruijn ##input.35 4 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0ref__count_lambda339, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0ref__count_k367, env)}),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0ref__count_k361(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count_k361" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k361, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0ref__count_k361, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0ref__count_lambda336) (close _V0ref__count_k363) (bruijn ##input.35 3 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0ref__count_lambda336, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0ref__count_k363, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0ref__count_k347(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count_k347" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k347, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0ref__count_k347, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0ref__count_lambda316) (close _V0ref__count_k361) (bruijn ##input.35 2 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0ref__count_lambda316, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0ref__count_k361, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0ref__count_k344(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count_k344" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k344, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0ref__count_k344, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0ref__count_lambda311) (close _V0ref__count_k347) (bruijn ##input.35 1 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0ref__count_lambda311, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0ref__count_k347, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0ref__count_lambda305(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0ref__count_lambda305" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0ref__count_lambda305, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0ref__count_lambda306) (close _V0ref__count_k344) (bruijn ##input.35 0 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0ref__count_lambda306, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0ref__count_k344, env)}),
      _var1
    );
 }
}
static void _V0ref__count_lambda304(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0ref__count_lambda304" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0ref__count_lambda304, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0ref__count_lambda304, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0ref__count_lambda305) (bruijn ##k.1238 0 0) (bruijn expr 1 2))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0ref__count_lambda305, env)}, runtime,
      _var0,
      upenv->vars[2]
    );
 }
}
static void _V0ref__count_lambda303(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0ref__count_lambda303" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0ref__count_lambda303, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0ref__count_lambda303, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn call/cc 7 1) (bruijn ##k.1237 0 0) (close _V0ref__count_lambda304))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 7-1, 1)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0ref__count_lambda304, env)})
    );
 }
}
static void cps_k40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "cps_k40" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to cps_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)cps_k40, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close cps_k41) (bruijn ref-count 5 6) (close _V0ref__count_lambda303))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)cps_k41, env)}),
      VEncodeInt(5l), VEncodeInt(6l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0ref__count_lambda303, env)})
    );
 }
}
static void _V0ref__count__lambda_k370(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count__lambda_k370" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count__lambda_k370, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0ref__count__lambda_k370, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1345 0 0) ((bruijn ##k.1344 1 0) 0) ((bruijn ref-count 6 6) (bruijn ##k.1344 1 0) (bruijn x 1 1) (bruijn body 1 3)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeInt(0l)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 6-1, 6)), runtime,
      upenv->vars[0],
      upenv->vars[1],
      upenv->vars[3]
    );
}
 }
}
static void _V0ref__count__lambda_lambda343(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0ref__count__lambda_lambda343" };
 VRecordCall(&dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0ref__count__lambda_lambda343, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0ref__count__lambda_lambda343, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn memtail 5 2) (close _V0ref__count__lambda_k370) (bruijn x 0 1) (bruijn args 0 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 5-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0ref__count__lambda_k370, env)}),
      _var1,
      _var2
    );
 }
}
static void cps_k39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "cps_k39" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to cps_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)cps_k39, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close cps_k40) (bruijn ref-count-lambda 4 5) (close _V0ref__count__lambda_lambda343))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)cps_k40, env)}),
      VEncodeInt(4l), VEncodeInt(5l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0ref__count__lambda_lambda343, env)})
    );
 }
}
static void _V0deannotate__lambdas_lambda344(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0deannotate__lambdas_lambda344" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0deannotate__lambdas_lambda344, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0deannotate__lambdas_lambda344, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.1346 0 0) (bruijn expr 0 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      _var1
    );
 }
}
static void cps_k38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "cps_k38" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to cps_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)cps_k38, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close cps_k39) (bruijn deannotate-lambdas 3 4) (close _V0deannotate__lambdas_lambda344))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)cps_k39, env)}),
      VEncodeInt(3l), VEncodeInt(4l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0deannotate__lambdas_lambda344, env)})
    );
 }
}
static void _V0annotate__lambdas_lambda345(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0annotate__lambdas_lambda345" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0annotate__lambdas_lambda345, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0annotate__lambdas_lambda345, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.1347 0 0) (bruijn expr 0 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      _var1
    );
 }
}
static void cps_k37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "cps_k37" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to cps_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)cps_k37, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close cps_k38) (bruijn annotate-lambdas 2 3) (close _V0annotate__lambdas_lambda345))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)cps_k38, env)}),
      VEncodeInt(2l), VEncodeInt(3l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0annotate__lambdas_lambda345, env)})
    );
 }
}
static void _V0memtail_k374(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0memtail_k374" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0memtail_k374, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0memtail_k374, runtime, upenv, 1, argc, _var0) {
  // ((bruijn memtail 6 2) (bruijn ##k.1348 4 0) (bruijn x 4 1) (bruijn ##x.1351 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 6-1, 2)), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->up->up->vars[1],
      _var0
    );
 }
}
static void _V0memtail_k373(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0memtail_k373" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0memtail_k373, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0memtail_k373, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1350 0 0) ((bruijn ##k.1348 3 0) (bruijn lst 3 2)) ((bruijn cdr 6 15) (close _V0memtail_k374) (bruijn lst 3 2)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->vars[0]), runtime,
      upenv->up->up->vars[2]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 6-1, 15)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0memtail_k374, env)}),
      upenv->up->up->vars[2]
    );
}
 }
}
static void _V0memtail_k372(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0memtail_k372" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0memtail_k372, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0memtail_k372, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn equal? 5 2) (close _V0memtail_k373) (bruijn x 2 1) (bruijn ##x.1352 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 5-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0memtail_k373, env)}),
      upenv->up->vars[1],
      _var0
    );
 }
}
static void _V0memtail_k375(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0memtail_k375" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0memtail_k375, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0memtail_k375, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1353 0 0) ((bruijn ##k.1348 2 0) (bruijn lst 2 2)) ((bruijn ##k.1348 2 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->vars[0]), runtime,
      upenv->up->vars[2]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0memtail_k371(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0memtail_k371" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0memtail_k371, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0memtail_k371, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1349 0 0) ((bruijn car 4 18) (close _V0memtail_k372) (bruijn lst 1 2)) ((bruijn equal? 4 2) (close _V0memtail_k375) (bruijn x 1 1) (bruijn lst 1 2)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->up->vars[18]), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0memtail_k372, env)}),
      upenv->vars[2]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->up->vars[2]), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0memtail_k375, env)}),
      upenv->vars[1],
      upenv->vars[2]
    );
}
 }
}
static void _V0memtail_lambda346(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0memtail_lambda346" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0memtail_lambda346, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0memtail_lambda346, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn pair? 3 14) (close _V0memtail_k371) (bruijn lst 0 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->vars[14]), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0memtail_k371, env)}),
      _var2
    );
 }
}
static void cps_k36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "cps_k36" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to cps_k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)cps_k36, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close cps_k37) (bruijn memtail 1 2) (close _V0memtail_lambda346))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)cps_k37, env)}),
      VEncodeInt(1l), VEncodeInt(2l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0memtail_lambda346, env)})
    );
 }
}
static void _V0to__cps_k383(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0to__cps_k383" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0to__cps_k383, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0to__cps_k383, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.29 9 1) (bruijn ##k.1373 2 0) (##inline ##sys.cons (quote ##vcore.declare) (##inline ##sys.cons (bruijn f 4 1) (##inline ##sys.cons (bruijn ##x.1378 0 0) (quote ())))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 9-1, 1)), runtime,
      upenv->up->vars[0],
      VInlineCons(
VEncodePointer(&_V10vcore_Ddeclare.sym, VPOINTER_OTHER),
      VInlineCons(
upenv->up->up->up->vars[1],
      VInlineCons(
_var0,
      VNULL
    )

    )

    )

    );
 }
}
static void _V0to__cps_k382(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0to__cps_k382" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0to__cps_k382, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0to__cps_k382, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cadr 17 30) (close _V0to__cps_k383) (bruijn ##x.1379 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 17-1, 30)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0to__cps_k383, env)}),
      _var0
    );
 }
}
static void _V0to__cps_lambda355(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0to__cps_lambda355" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0to__cps_lambda355, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.33 1 1))) ((bruijn to-cps-impl 13 5) (close _V0to__cps_k382) (bruijn l 0 1)) ((bruijn ##k.1373 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 13-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0to__cps_k382, env)}),
      _var1
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0to__cps_lambda354(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0to__cps_lambda354" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0to__cps_lambda354, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.33 0 1)) ((close _V0to__cps_lambda355) (bruijn ##k.1371 0 0) (##inline ##sys.car (bruijn ##expr.33 0 1))) ((bruijn ##k.1371 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0to__cps_lambda355, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0to__cps_lambda353(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0to__cps_lambda353" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0to__cps_lambda353, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0to__cps_lambda354) (bruijn ##k.1370 0 0) (##inline ##sys.cdr (bruijn ##expr.32 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0to__cps_lambda354, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0to__cps_lambda352(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0to__cps_lambda352" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0to__cps_lambda352, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.32 0 1)) ((close _V0to__cps_lambda353) (bruijn ##k.1368 0 0) (##inline ##sys.car (bruijn ##expr.32 0 1))) ((bruijn ##k.1368 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0to__cps_lambda353, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0to__cps_k381(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0to__cps_k381" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0to__cps_k381, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0to__cps_k381, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1367 0 0) ((close _V0to__cps_lambda352) (bruijn ##k.1365 1 0) (##inline ##sys.cdr (bruijn ##expr.31 1 1))) ((bruijn ##k.1365 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0to__cps_lambda352, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0to__cps_lambda351(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0to__cps_lambda351" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0to__cps_lambda351, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.31 0 1)) ((bruijn equal? 11 2) (close _V0to__cps_k381) (quote ##vcore.declare) (##inline ##sys.car (bruijn ##expr.31 0 1))) ((bruijn ##k.1365 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 11-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0to__cps_k381, env)}),
      VEncodePointer(&_V10vcore_Ddeclare.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0to__cps_k385(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0to__cps_k385" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0to__cps_k385, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0to__cps_k385, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.29 3 1) (bruijn ##k.1362 2 0) (bruijn ##x.1364 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->vars[1]), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0to__cps_k384(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0to__cps_k384" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0to__cps_k384, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0to__cps_k384, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn to-cps-impl 8 5) (close _V0to__cps_k385) (bruijn expr 9 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 8-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0to__cps_k385, env)}),
      VGetArg(upenv, 9-1, 1)
    );
 }
}
static void _V0to__cps_lambda350(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0to__cps_lambda350" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0to__cps_lambda350, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0to__cps_lambda351) (close _V0to__cps_k384) (bruijn ##input.30 0 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0to__cps_lambda351, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0to__cps_k384, env)}),
      _var1
    );
 }
}
static void _V0to__cps_lambda349(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0to__cps_lambda349" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0to__cps_lambda349, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0to__cps_lambda349, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0to__cps_lambda350) (bruijn ##k.1361 0 0) (bruijn expr 7 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0to__cps_lambda350, env)}, runtime,
      _var0,
      VGetArg(upenv, 7-1, 1)
    );
 }
}
static void _V0to__cps_k380(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0to__cps_k380" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0to__cps_k380, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0to__cps_k380, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 8 1) (bruijn ##k.1355 5 0) (close _V0to__cps_lambda349))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 8-1, 1)), runtime,
      VGetArg(upenv, 5-1, 0),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0to__cps_lambda349, env)})
    );
 }
}
static void _V0to__cps__impl_lambda356(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0to__cps__impl_lambda356" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0to__cps__impl_lambda356, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0to__cps__impl_lambda356, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn iter2 5 4) (bruijn ##k.1386 0 0) (bruijn expr 0 1) (quote ##sys.next))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 5-1, 4)), runtime,
      _var0,
      _var1,
      VEncodePointer(&_V10sys_Dnext.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0to__cps_k379(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0to__cps_k379" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0to__cps_k379, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0to__cps_k379, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0to__cps_k380) (bruijn to-cps-impl 4 5) (close _V0to__cps__impl_lambda356))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0to__cps_k380, env)}),
      VEncodeInt(4l), VEncodeInt(5l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0to__cps__impl_lambda356, env)})
    );
 }
}
static void _V0iter2_k391(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k391" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k391, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter2_k391, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.17 11 1) (bruijn ##k.1476 4 0) (bruijn ##x.1478 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 11-1, 1)), runtime,
      upenv->up->up->up->vars[0],
      _var0
    );
 }
}
static void _V0iter2_k390(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k390" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k390, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter2_k390, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn iter2 16 4) (close _V0iter2_k391) (bruijn x 5 1) (##inline ##sys.cons (quote continuation) (##inline ##sys.cons (##inline ##sys.cons (bruijn ##x.1485 1 0) (quote ())) (##inline ##sys.cons (bruijn ##x.1484 0 0) (quote ())))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 16-1, 4)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0iter2_k391, env)}),
      VGetArg(upenv, 5-1, 1),
      VInlineCons(
VEncodePointer(&_V0continuation.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
upenv->vars[0],
      VNULL
    )
,
      VInlineCons(
_var0,
      VNULL
    )

    )

    )

    );
 }
}
static void _V0iter2_k389(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k389" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k389, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter2_k389, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn iter2 15 4) (close _V0iter2_k390) (bruijn y 2 1) (bruijn cont 11 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 15-1, 4)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0iter2_k390, env)}),
      upenv->up->vars[1],
      VGetArg(upenv, 11-1, 2)
    );
 }
}
static void _V0iter2_k392(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k392" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k392, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter2_k392, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.17 9 1) (bruijn ##k.1476 2 0) (bruijn ##x.1478 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 9-1, 1)), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0iter2_k388(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k388" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k388, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter2_k388, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1479 0 0) ((bruijn gensym 17 26) (close _V0iter2_k389) (##string ##string.1657)) ((bruijn iter2 14 4) (close _V0iter2_k392) (bruijn y 1 1) (bruijn cont 10 2)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 17-1, 26)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0iter2_k389, env)}),
      VEncodePointer(&_V10string_D1657.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 4)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0iter2_k392, env)}),
      upenv->vars[1],
      VGetArg(upenv, 10-1, 2)
    );
}
 }
}
static void _V0iter2_lambda364(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter2_lambda364" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter2_lambda364, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.21 1 1))) ((bruijn application? 13 1) (close _V0iter2_k388) (bruijn x 2 1)) ((bruijn ##k.1476 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 13-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0iter2_k388, env)}),
      upenv->up->vars[1]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter2_lambda363(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter2_lambda363" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter2_lambda363, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.21 0 1)) ((close _V0iter2_lambda364) (bruijn ##k.1474 0 0) (##inline ##sys.car (bruijn ##expr.21 0 1))) ((bruijn ##k.1474 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0iter2_lambda364, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter2_lambda362(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter2_lambda362" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter2_lambda362, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0iter2_lambda363) (bruijn ##k.1473 0 0) (##inline ##sys.cdr (bruijn ##expr.20 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0iter2_lambda363, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0iter2_lambda361(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter2_lambda361" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter2_lambda361, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.20 0 1)) ((close _V0iter2_lambda362) (bruijn ##k.1471 0 0) (##inline ##sys.car (bruijn ##expr.20 0 1))) ((bruijn ##k.1471 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0iter2_lambda362, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter2_k387(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k387" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k387, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter2_k387, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1470 0 0) ((close _V0iter2_lambda361) (bruijn ##k.1468 1 0) (##inline ##sys.cdr (bruijn ##expr.19 1 1))) ((bruijn ##k.1468 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0iter2_lambda361, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter2_lambda360(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter2_lambda360" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter2_lambda360, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.19 0 1)) ((bruijn equal? 11 2) (close _V0iter2_k387) (quote begin) (##inline ##sys.car (bruijn ##expr.19 0 1))) ((bruijn ##k.1468 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 11-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0iter2_k387, env)}),
      VEncodePointer(&_V0begin.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter2_k397(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k397" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k397, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter2_k397, runtime, upenv, 1, argc, _var0) {
  // ((bruijn iter2 20 4) (bruijn ##k.1442 1 0) (bruijn p 8 1) (##inline ##sys.cons (quote continuation) (##inline ##sys.cons (##inline ##sys.cons (bruijn sym 1 1) (quote ())) (##inline ##sys.cons (bruijn ##x.1447 0 0) (quote ())))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 20-1, 4)), runtime,
      upenv->vars[0],
      VGetArg(upenv, 8-1, 1),
      VInlineCons(
VEncodePointer(&_V0continuation.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
upenv->vars[1],
      VNULL
    )
,
      VInlineCons(
_var0,
      VNULL
    )

    )

    )

    );
 }
}
static void _V0iter2_lambda372(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter2_lambda372" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter2_lambda372, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn iter2 19 4) (close _V0iter2_k397) (##inline ##sys.cons (quote if) (##inline ##sys.cons (bruijn sym 0 1) (##inline ##sys.cons (bruijn x 5 1) (##inline ##sys.cons (bruijn y 3 1) (quote ()))))) (bruijn cont 15 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 19-1, 4)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0iter2_k397, env)}),
      VInlineCons(
VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCons(
_var1,
      VInlineCons(
VGetArg(upenv, 5-1, 1),
      VInlineCons(
upenv->up->up->vars[1],
      VNULL
    )

    )

    )

    )
,
      VGetArg(upenv, 15-1, 2)
    );
 }
}
static void _V0iter2_k398(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k398" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k398, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter2_k398, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.17 13 1) (bruijn ##k.1438 3 0) (bruijn ##x.1440 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 13-1, 1)), runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0iter2_k396(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k396" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k396, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter2_k396, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter2_lambda372) (close _V0iter2_k398) (bruijn ##x.1452 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0iter2_lambda372, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0iter2_k398, env)}),
      _var0
    );
 }
}
static void _V0iter2_k401(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k401" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k401, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter2_k401, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.17 14 1) (bruijn ##k.1438 4 0) (##inline ##sys.cons (quote if) (##inline ##sys.cons (bruijn p 8 1) (##inline ##sys.cons (bruijn ##x.1456 1 0) (##inline ##sys.cons (bruijn ##x.1458 0 0) (quote ()))))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 1)), runtime,
      upenv->up->up->up->vars[0],
      VInlineCons(
VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 8-1, 1),
      VInlineCons(
upenv->vars[0],
      VInlineCons(
_var0,
      VNULL
    )

    )

    )

    )

    );
 }
}
static void _V0iter2_k400(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k400" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k400, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter2_k400, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn iter2 19 4) (close _V0iter2_k401) (bruijn y 3 1) (bruijn cont 15 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 19-1, 4)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0iter2_k401, env)}),
      upenv->up->up->vars[1],
      VGetArg(upenv, 15-1, 2)
    );
 }
}
static void _V0iter2_k403(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k403" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k403, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter2_k403, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.17 14 1) (bruijn ##k.1438 4 0) (bruijn ##x.1440 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 1)), runtime,
      upenv->up->up->up->vars[0],
      _var0
    );
 }
}
static void _V0iter2_k404(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k404" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k404, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter2_k404, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.17 14 1) (bruijn ##k.1438 4 0) (bruijn ##x.1440 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 1)), runtime,
      upenv->up->up->up->vars[0],
      _var0
    );
 }
}
static void _V0iter2_k402(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k402" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k402, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter2_k402, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1459 0 0) ((bruijn iter2 19 4) (close _V0iter2_k403) (bruijn y 3 1) (bruijn cont 15 2)) ((bruijn iter2 19 4) (close _V0iter2_k404) (bruijn x 5 1) (bruijn cont 15 2)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 19-1, 4)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0iter2_k403, env)}),
      upenv->up->up->vars[1],
      VGetArg(upenv, 15-1, 2)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 19-1, 4)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0iter2_k404, env)}),
      VGetArg(upenv, 5-1, 1),
      VGetArg(upenv, 15-1, 2)
    );
}
 }
}
static void _V0iter2_k399(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k399" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k399, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter2_k399, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1453 0 0) ((bruijn iter2 18 4) (close _V0iter2_k400) (bruijn x 4 1) (bruijn cont 14 2)) ((bruijn eq? 21 24) (close _V0iter2_k402) (bruijn p 6 1) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 18-1, 4)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0iter2_k400, env)}),
      upenv->up->up->up->vars[1],
      VGetArg(upenv, 14-1, 2)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 21-1, 24)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0iter2_k402, env)}),
      VGetArg(upenv, 6-1, 1),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter2_k395(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k395" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k395, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter2_k395, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1441 0 0) ((bruijn gensym 20 26) (close _V0iter2_k396) (##string ##string.1658)) ((bruijn symbol? 20 9) (close _V0iter2_k399) (bruijn p 5 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 20-1, 26)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0iter2_k396, env)}),
      VEncodePointer(&_V10string_D1658.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 20-1, 9)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0iter2_k399, env)}),
      VGetArg(upenv, 5-1, 1)
    );
}
 }
}
static void _V0iter2_lambda371(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter2_lambda371" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter2_lambda371, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.25 1 1))) ((bruijn application? 16 1) (close _V0iter2_k395) (bruijn p 4 1)) ((bruijn ##k.1438 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 16-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0iter2_k395, env)}),
      upenv->up->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter2_lambda370(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter2_lambda370" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter2_lambda370, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.25 0 1)) ((close _V0iter2_lambda371) (bruijn ##k.1436 0 0) (##inline ##sys.car (bruijn ##expr.25 0 1))) ((bruijn ##k.1436 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0iter2_lambda371, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter2_lambda369(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter2_lambda369" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter2_lambda369, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0iter2_lambda370) (bruijn ##k.1435 0 0) (##inline ##sys.cdr (bruijn ##expr.24 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0iter2_lambda370, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0iter2_lambda368(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter2_lambda368" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter2_lambda368, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.24 0 1)) ((close _V0iter2_lambda369) (bruijn ##k.1433 0 0) (##inline ##sys.car (bruijn ##expr.24 0 1))) ((bruijn ##k.1433 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0iter2_lambda369, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter2_lambda367(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter2_lambda367" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter2_lambda367, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0iter2_lambda368) (bruijn ##k.1432 0 0) (##inline ##sys.cdr (bruijn ##expr.23 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0iter2_lambda368, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0iter2_lambda366(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter2_lambda366" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter2_lambda366, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.23 0 1)) ((close _V0iter2_lambda367) (bruijn ##k.1430 0 0) (##inline ##sys.car (bruijn ##expr.23 0 1))) ((bruijn ##k.1430 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0iter2_lambda367, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter2_k394(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k394" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k394, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter2_k394, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1429 0 0) ((close _V0iter2_lambda366) (bruijn ##k.1427 1 0) (##inline ##sys.cdr (bruijn ##expr.22 1 1))) ((bruijn ##k.1427 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0iter2_lambda366, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter2_lambda365(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter2_lambda365" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter2_lambda365, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.22 0 1)) ((bruijn equal? 12 2) (close _V0iter2_k394) (quote if) (##inline ##sys.car (bruijn ##expr.22 0 1))) ((bruijn ##k.1427 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 12-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0iter2_k394, env)}),
      VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter2_k409(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k409" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k409, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter2_k409, runtime, upenv, 1, argc, _var0) {
  // ((bruijn iter2 19 4) (bruijn ##k.1407 1 0) (bruijn x 6 1) (##inline ##sys.cons (quote continuation) (##inline ##sys.cons (##inline ##sys.cons (bruijn sym 1 1) (quote ())) (##inline ##sys.cons (bruijn ##x.1412 0 0) (quote ())))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 19-1, 4)), runtime,
      upenv->vars[0],
      VGetArg(upenv, 6-1, 1),
      VInlineCons(
VEncodePointer(&_V0continuation.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
upenv->vars[1],
      VNULL
    )
,
      VInlineCons(
_var0,
      VNULL
    )

    )

    )

    );
 }
}
static void _V0iter2_lambda378(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter2_lambda378" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter2_lambda378, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn iter2 18 4) (close _V0iter2_k409) (##inline ##sys.cons (quote or) (##inline ##sys.cons (bruijn sym 0 1) (##inline ##sys.cons (bruijn y 3 1) (quote ())))) (bruijn cont 14 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 18-1, 4)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0iter2_k409, env)}),
      VInlineCons(
VEncodePointer(&_V0or.sym, VPOINTER_OTHER),
      VInlineCons(
_var1,
      VInlineCons(
upenv->up->up->vars[1],
      VNULL
    )

    )

    )
,
      VGetArg(upenv, 14-1, 2)
    );
 }
}
static void _V0iter2_k410(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k410" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k410, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter2_k410, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.17 12 1) (bruijn ##k.1403 3 0) (bruijn ##x.1405 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 12-1, 1)), runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0iter2_k408(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k408" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k408, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter2_k408, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter2_lambda378) (close _V0iter2_k410) (bruijn ##x.1416 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0iter2_lambda378, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0iter2_k410, env)}),
      _var0
    );
 }
}
static void _V0iter2_k411(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k411" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k411, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter2_k411, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.17 11 1) (bruijn ##k.1403 2 0) (bruijn ##x.1405 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 11-1, 1)), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0iter2_k407(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k407" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k407, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter2_k407, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1406 0 0) ((bruijn gensym 19 26) (close _V0iter2_k408) (##string ##string.1658)) ((bruijn iter2 16 4) (close _V0iter2_k411) (##inline ##sys.cons (quote if) (##inline ##sys.cons (bruijn x 3 1) (##inline ##sys.cons (bruijn x 3 1) (##inline ##sys.cons (bruijn y 1 1) (quote ()))))) (bruijn cont 12 2)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 19-1, 26)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0iter2_k408, env)}),
      VEncodePointer(&_V10string_D1658.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 16-1, 4)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0iter2_k411, env)}),
      VInlineCons(
VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCons(
upenv->up->up->vars[1],
      VInlineCons(
upenv->up->up->vars[1],
      VInlineCons(
upenv->vars[1],
      VNULL
    )

    )

    )

    )
,
      VGetArg(upenv, 12-1, 2)
    );
}
 }
}
static void _V0iter2_lambda377(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter2_lambda377" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter2_lambda377, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.28 1 1))) ((bruijn application? 15 1) (close _V0iter2_k407) (bruijn x 2 1)) ((bruijn ##k.1403 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 15-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0iter2_k407, env)}),
      upenv->up->vars[1]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter2_lambda376(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter2_lambda376" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter2_lambda376, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.28 0 1)) ((close _V0iter2_lambda377) (bruijn ##k.1401 0 0) (##inline ##sys.car (bruijn ##expr.28 0 1))) ((bruijn ##k.1401 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0iter2_lambda377, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter2_lambda375(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter2_lambda375" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter2_lambda375, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0iter2_lambda376) (bruijn ##k.1400 0 0) (##inline ##sys.cdr (bruijn ##expr.27 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0iter2_lambda376, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0iter2_lambda374(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter2_lambda374" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter2_lambda374, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.27 0 1)) ((close _V0iter2_lambda375) (bruijn ##k.1398 0 0) (##inline ##sys.car (bruijn ##expr.27 0 1))) ((bruijn ##k.1398 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0iter2_lambda375, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter2_k406(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k406" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k406, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter2_k406, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1397 0 0) ((close _V0iter2_lambda374) (bruijn ##k.1395 1 0) (##inline ##sys.cdr (bruijn ##expr.26 1 1))) ((bruijn ##k.1395 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0iter2_lambda374, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter2_lambda373(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter2_lambda373" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter2_lambda373, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.26 0 1)) ((bruijn equal? 13 2) (close _V0iter2_k406) (quote or) (##inline ##sys.car (bruijn ##expr.26 0 1))) ((bruijn ##k.1395 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 13-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0iter2_k406, env)}),
      VEncodePointer(&_V0or.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter2_k413(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k413" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k413, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter2_k413, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.17 5 1) (bruijn ##k.1390 4 0) (bruijn ##x.1394 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 5-1, 1)), runtime,
      upenv->up->up->up->vars[0],
      _var0
    );
 }
}
static void _V0iter2_k412(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k412" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k412, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter2_k412, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn iter-combination 10 3) (close _V0iter2_k413) (bruijn expr 6 1) (bruijn cont 6 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 10-1, 3)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0iter2_k413, env)}),
      VGetArg(upenv, 6-1, 1),
      VGetArg(upenv, 6-1, 2)
    );
 }
}
static void _V0iter2_k405(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k405" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k405, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter2_k405, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter2_lambda373) (close _V0iter2_k412) (bruijn ##input.18 2 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0iter2_lambda373, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0iter2_k412, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0iter2_k393(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k393" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k393, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter2_k393, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter2_lambda365) (close _V0iter2_k405) (bruijn ##input.18 1 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0iter2_lambda365, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0iter2_k405, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0iter2_lambda359(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter2_lambda359" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter2_lambda359, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0iter2_lambda360) (close _V0iter2_k393) (bruijn ##input.18 0 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0iter2_lambda360, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0iter2_k393, env)}),
      _var1
    );
 }
}
static void _V0iter2_lambda358(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter2_lambda358" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0iter2_lambda358, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter2_lambda358, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0iter2_lambda359) (bruijn ##k.1389 0 0) (bruijn expr 2 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0iter2_lambda359, env)}, runtime,
      _var0,
      upenv->up->vars[1]
    );
 }
}
static void _V0iter2_k414(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k414" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k414, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter2_k414, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.1387 2 0) (##inline ##sys.cons (bruijn cont 2 2) (##inline ##sys.cons (bruijn ##x.1493 0 0) (quote ()))))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->vars[0]), runtime,
      VInlineCons(
upenv->up->vars[2],
      VInlineCons(
_var0,
      VNULL
    )

    )

    );
 }
}
static void _V0iter2_k386(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k386" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k386, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter2_k386, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1388 0 0) ((bruijn call/cc 8 1) (bruijn ##k.1387 1 0) (close _V0iter2_lambda358)) ((bruijn iter-atom 5 2) (close _V0iter2_k414) (bruijn expr 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 8-1, 1)), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0iter2_lambda358, env)})
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 5-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0iter2_k414, env)}),
      upenv->vars[1]
    );
}
 }
}
static void _V0iter2_lambda357(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0iter2_lambda357" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0iter2_lambda357, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter2_lambda357, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn application? 4 1) (close _V0iter2_k386) (bruijn expr 0 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->up->vars[1]), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0iter2_k386, env)}),
      _var1
    );
 }
}
static void _V0to__cps_k378(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0to__cps_k378" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0to__cps_k378, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0to__cps_k378, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0to__cps_k379) (bruijn iter2 3 4) (close _V0iter2_lambda357))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0to__cps_k379, env)}),
      VEncodeInt(3l), VEncodeInt(4l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0iter2_lambda357, env)})
    );
 }
}
static void _V0iter__combination_k415(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__combination_k415" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__combination_k415, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter__combination_k415, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.1495 1 0) (quote ()) (bruijn args 2 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[1]), runtime,
      upenv->vars[0],
      VNULL,
      upenv->up->vars[1]
    );
 }
}
static void _V0loop_k419(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k419" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k419, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k419, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.1499 2 0) (##inline ##sys.cons (bruijn ##x.1500 1 0) (##inline ##sys.cons (bruijn cont 7 2) (bruijn ##x.1502 0 0))))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->vars[0]), runtime,
      VInlineCons(
upenv->vars[0],
      VInlineCons(
VGetArg(upenv, 7-1, 2),
      _var0
    )

    )

    );
 }
}
static void _V0loop_k418(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k418" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k418, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k418, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 12 15) (close _V0loop_k419) (bruijn appl 1 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 12-1, 15)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k419, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0loop_lambda382(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda382" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda382, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn car 11 18) (close _V0loop_k418) (bruijn appl 0 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 11-1, 18)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k418, env)}),
      _var1
    );
 }
}
static void _V0loop_k417(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k417" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k417, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k417, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0loop_lambda382) (bruijn ##k.1497 2 0) (bruijn ##x.1503 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda382, env)}, runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0loop_k426(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k426" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k426, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k426, runtime, upenv, 1, argc, _var0) {
  // ((bruijn iter2 14 4) (bruijn ##k.1505 4 0) (bruijn ##x.1506 3 0) (##inline ##sys.cons (quote continuation) (##inline ##sys.cons (##inline ##sys.cons (bruijn x 4 1) (quote ())) (##inline ##sys.cons (bruijn ##x.1511 0 0) (quote ())))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 4)), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->up->vars[0],
      VInlineCons(
VEncodePointer(&_V0continuation.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
upenv->up->up->up->vars[1],
      VNULL
    )
,
      VInlineCons(
_var0,
      VNULL
    )

    )

    )

    );
 }
}
static void _V0loop_k425(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k425" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k425, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k425, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn loop 9 1) (close _V0loop_k426) (bruijn ##x.1512 1 0) (bruijn ##x.1513 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 9-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k426, env)}),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k424(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k424" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k424, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k424, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 15 15) (close _V0loop_k425) (bruijn args 7 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 15-1, 15)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k425, env)}),
      VGetArg(upenv, 7-1, 2)
    );
 }
}
static void _V0loop_k423(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k423" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k423, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k423, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 14 10) (close _V0loop_k424) (bruijn x 1 1) (bruijn appl 6 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 10)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k424, env)}),
      upenv->vars[1],
      VGetArg(upenv, 6-1, 1)
    );
 }
}
static void _V0loop_lambda383(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda383" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda383, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn car 13 18) (close _V0loop_k423) (bruijn args 5 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 13-1, 18)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k423, env)}),
      VGetArg(upenv, 5-1, 2)
    );
 }
}
static void _V0loop_k422(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k422" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k422, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k422, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0loop_lambda383) (bruijn ##k.1497 4 0) (bruijn ##x.1514 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda383, env)}, runtime,
      upenv->up->up->up->vars[0],
      _var0
    );
 }
}
static void _V0loop_k430(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k430" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k430, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k430, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 8 1) (bruijn ##k.1497 7 0) (bruijn ##x.1515 1 0) (bruijn ##x.1516 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 8-1, 1)), runtime,
      VGetArg(upenv, 7-1, 0),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k429(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k429" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k429, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k429, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 14 15) (close _V0loop_k430) (bruijn args 6 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 15)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k430, env)}),
      VGetArg(upenv, 6-1, 2)
    );
 }
}
static void _V0loop_k428(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k428" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k428, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k428, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 13 10) (close _V0loop_k429) (bruijn ##x.1517 0 0) (bruijn appl 5 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 13-1, 10)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k429, env)}),
      _var0,
      VGetArg(upenv, 5-1, 1)
    );
 }
}
static void _V0loop_k427(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k427" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k427, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k427, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn iter-atom 9 2) (close _V0loop_k428) (bruijn ##x.1518 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 9-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k428, env)}),
      _var0
    );
 }
}
static void _V0loop_k421(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k421" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k421, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k421, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1504 0 0) ((bruijn gensym 11 26) (close _V0loop_k422) (##string ##string.1659)) ((bruijn car 11 18) (close _V0loop_k427) (bruijn args 3 2)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 11-1, 26)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k422, env)}),
      VEncodePointer(&_V10string_D1659.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 11-1, 18)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k427, env)}),
      upenv->up->up->vars[2]
    );
}
 }
}
static void _V0loop_k420(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k420" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k420, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k420, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn application? 7 1) (close _V0loop_k421) (bruijn ##x.1519 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 7-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k421, env)}),
      _var0
    );
 }
}
static void _V0loop_k416(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k416" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k416, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k416, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1498 0 0) ((bruijn reverse 9 5) (close _V0loop_k417) (bruijn appl 1 1)) ((bruijn car 9 18) (close _V0loop_k420) (bruijn args 1 2)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 9-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k417, env)}),
      upenv->vars[1]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 9-1, 18)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k420, env)}),
      upenv->vars[2]
    );
}
 }
}
static void _V0loop_lambda381(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0loop_lambda381" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda381, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda381, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 8 27) (close _V0loop_k416) (bruijn args 0 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 8-1, 27)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k416, env)}),
      _var2
    );
 }
}
static void _V0iter__combination_lambda380(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter__combination_lambda380" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter__combination_lambda380, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0iter__combination_k415) (bruijn loop 0 1) (close _V0loop_lambda381))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0iter__combination_k415, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda381, env)})
    );
 }
}
static void _V0iter__combination_lambda379(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0iter__combination_lambda379" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0iter__combination_lambda379, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter__combination_lambda379, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0iter__combination_lambda380) (bruijn ##k.1494 0 0) #f)
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0iter__combination_lambda380, env)}, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0to__cps_k377(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0to__cps_k377" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0to__cps_k377, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0to__cps_k377, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0to__cps_k378) (bruijn iter-combination 2 3) (close _V0iter__combination_lambda379))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0to__cps_k378, env)}),
      VEncodeInt(2l), VEncodeInt(3l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0iter__combination_lambda379, env)})
    );
 }
}
static void _V0iter__atom_k434(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k434" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k434, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter__atom_k434, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.1 9 1) (bruijn ##k.1588 2 0) (bruijn ##x.1590 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 9-1, 1)), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0iter__atom_k433(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k433" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k433, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter__atom_k433, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 16 10) (close _V0iter__atom_k434) (quote lambda) (bruijn ##x.1591 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 16-1, 10)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0iter__atom_k434, env)}),
      VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void _V0iter__atom_lambda392(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda392" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter__atom_lambda392, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.5 1 1))) ((bruijn iter-lambda 9 1) (close _V0iter__atom_k433) (bruijn args 2 1) (bruijn body 0 1)) ((bruijn ##k.1588 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 9-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0iter__atom_k433, env)}),
      upenv->up->vars[1],
      _var1
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__atom_lambda391(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda391" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter__atom_lambda391, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.5 0 1)) ((close _V0iter__atom_lambda392) (bruijn ##k.1586 0 0) (##inline ##sys.car (bruijn ##expr.5 0 1))) ((bruijn ##k.1586 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0iter__atom_lambda392, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__atom_lambda390(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda390" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter__atom_lambda390, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0iter__atom_lambda391) (bruijn ##k.1585 0 0) (##inline ##sys.cdr (bruijn ##expr.4 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0iter__atom_lambda391, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0iter__atom_lambda389(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda389" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter__atom_lambda389, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.4 0 1)) ((close _V0iter__atom_lambda390) (bruijn ##k.1583 0 0) (##inline ##sys.car (bruijn ##expr.4 0 1))) ((bruijn ##k.1583 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0iter__atom_lambda390, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__atom_k432(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k432" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k432, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter__atom_k432, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1582 0 0) ((close _V0iter__atom_lambda389) (bruijn ##k.1580 1 0) (##inline ##sys.cdr (bruijn ##expr.3 1 1))) ((bruijn ##k.1580 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0iter__atom_lambda389, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__atom_lambda388(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda388" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter__atom_lambda388, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.3 0 1)) ((bruijn equal? 10 2) (close _V0iter__atom_k432) (quote lambda) (##inline ##sys.car (bruijn ##expr.3 0 1))) ((bruijn ##k.1580 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 10-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0iter__atom_k432, env)}),
      VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__atom_k437(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k437" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k437, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter__atom_k437, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.1546 1 0) (bruijn ##expr.7 4 1) (quote ()) (quote ()))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[1]), runtime,
      upenv->vars[0],
      upenv->up->up->up->vars[1],
      VNULL,
      VNULL
    );
 }
}
static void _V0loop_lambda404(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda404" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda404, runtime, upenv, 2, argc, _var0, _var1) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.14 1 1))) ((bruijn ##kk.11 4 1) (bruijn ##k.1560 0 0) (##inline ##sys.cdr (bruijn ##expr.12 9 1)) (##inline ##sys.cons (bruijn args 2 1) (bruijn ##args.8 9 2)) (##inline ##sys.cons (bruijn body 0 1) (bruijn ##body.9 9 3))) ((bruijn ##k.1560 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->up->vars[1]), runtime,
      _var0,
      VInlineCdr(
VGetArg(upenv, 9-1, 1)
    )
,
      VInlineCons(
upenv->up->vars[1],
      VGetArg(upenv, 9-1, 2)
    )
,
      VInlineCons(
_var1,
      VGetArg(upenv, 9-1, 3)
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda403(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda403" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda403, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.14 0 1)) ((close _V0loop_lambda404) (bruijn ##k.1558 0 0) (##inline ##sys.car (bruijn ##expr.14 0 1))) ((bruijn ##k.1558 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda404, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda402(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda402" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda402, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_lambda403) (bruijn ##k.1557 0 0) (##inline ##sys.cdr (bruijn ##expr.13 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda403, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0loop_lambda401(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda401" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda401, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.13 0 1)) ((close _V0loop_lambda402) (bruijn ##k.1555 0 0) (##inline ##sys.car (bruijn ##expr.13 0 1))) ((bruijn ##k.1555 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda402, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k443(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k443" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k443, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k443, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.10 10 1) (bruijn ##k.1551 3 0) (bruijn ##expr.12 8 1) (bruijn ##x.1553 1 0) (bruijn ##x.1554 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 10-1, 1)), runtime,
      upenv->up->up->vars[0],
      VGetArg(upenv, 8-1, 1),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k442(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k442" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k442, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k442, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 24 5) (close _V0loop_k443) (bruijn ##body.9 7 3))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 24-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k443, env)}),
      VGetArg(upenv, 7-1, 3)
    );
 }
}
static void _V0loop_k441(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k441" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k441, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k441, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 23 5) (close _V0loop_k442) (bruijn ##args.8 6 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 23-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k442, env)}),
      VGetArg(upenv, 6-1, 2)
    );
 }
}
static void _V0loop_lambda400(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda400" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda400, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda400, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_lambda401) (close _V0loop_k441) (##inline ##sys.car (bruijn ##expr.12 5 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda401, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k441, env)}),
      VInlineCar(
VGetArg(upenv, 5-1, 1)
    )

    );
 }
}
static void _V0loop_lambda399(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda399" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda399, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda399, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 21 1) (bruijn ##k.1550 0 0) (close _V0loop_lambda400))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 21-1, 1)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda400, env)})
    );
 }
}
static void _V0loop_k440(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k440" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k440, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k440, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call-with-values 20 4) (bruijn ##k.1548 3 0) (close _V0loop_lambda399) (bruijn loop 4 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 20-1, 4)), runtime,
      upenv->up->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda399, env)}),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0loop_k439(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k439" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k439, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k439, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##kk.10 4 1) (close _V0loop_k440) (bruijn ##expr.12 2 1) (bruijn ##x.1571 1 0) (bruijn ##x.1572 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->up->vars[1]), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k440, env)}),
      upenv->up->vars[1],
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k438(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k438" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k438, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k438, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 18 5) (close _V0loop_k439) (bruijn ##body.9 1 3))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 18-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k439, env)}),
      upenv->vars[3]
    );
 }
}
static void _V0loop_lambda410(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda410" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda410, runtime, upenv, 2, argc, _var0, _var1) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.14 1 1))) ((bruijn ##kk.11 4 1) (bruijn ##k.1560 0 0) (##inline ##sys.cdr (bruijn ##expr.12 6 1)) (##inline ##sys.cons (bruijn args 2 1) (bruijn ##args.8 6 2)) (##inline ##sys.cons (bruijn body 0 1) (bruijn ##body.9 6 3))) ((bruijn ##k.1560 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->up->vars[1]), runtime,
      _var0,
      VInlineCdr(
VGetArg(upenv, 6-1, 1)
    )
,
      VInlineCons(
upenv->up->vars[1],
      VGetArg(upenv, 6-1, 2)
    )
,
      VInlineCons(
_var1,
      VGetArg(upenv, 6-1, 3)
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda409(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda409" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda409, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.14 0 1)) ((close _V0loop_lambda410) (bruijn ##k.1558 0 0) (##inline ##sys.car (bruijn ##expr.14 0 1))) ((bruijn ##k.1558 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda410, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda408(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda408" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda408, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_lambda409) (bruijn ##k.1557 0 0) (##inline ##sys.cdr (bruijn ##expr.13 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda409, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0loop_lambda407(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda407" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda407, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.13 0 1)) ((close _V0loop_lambda408) (bruijn ##k.1555 0 0) (##inline ##sys.car (bruijn ##expr.13 0 1))) ((bruijn ##k.1555 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda408, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k446(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k446" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k446, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k446, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.10 7 1) (bruijn ##k.1551 3 0) (bruijn ##expr.12 5 1) (bruijn ##x.1553 1 0) (bruijn ##x.1554 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 7-1, 1)), runtime,
      upenv->up->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k445(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k445" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k445, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k445, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 21 5) (close _V0loop_k446) (bruijn ##body.9 4 3))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 21-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k446, env)}),
      upenv->up->up->up->vars[3]
    );
 }
}
static void _V0loop_k444(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k444" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k444, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k444, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 20 5) (close _V0loop_k445) (bruijn ##args.8 3 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 20-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k445, env)}),
      upenv->up->up->vars[2]
    );
 }
}
static void _V0loop_lambda406(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda406" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda406, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda406, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_lambda407) (close _V0loop_k444) (##inline ##sys.car (bruijn ##expr.12 2 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda407, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k444, env)}),
      VInlineCar(
upenv->up->vars[1]
    )

    );
 }
}
static void _V0loop_lambda405(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda405" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda405, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda405, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 18 1) (bruijn ##k.1550 0 0) (close _V0loop_lambda406))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 18-1, 1)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda406, env)})
    );
 }
}
static void _V0loop_lambda398(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0loop_lambda398" };
 VRecordCall(&dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0loop_lambda398, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda398, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.12 0 1))) ((bruijn reverse 17 5) (close _V0loop_k438) (bruijn ##args.8 0 2)) ((bruijn call-with-values 17 4) (bruijn ##k.1548 0 0) (close _V0loop_lambda405) (bruijn loop 1 1)))
if(VDecodeBool(
VInlineNot(
VInlinePairP(
_var1
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 17-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k438, env)}),
      _var2
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 17-1, 4)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda405, env)}),
      upenv->vars[1]
    );
}
 }
}
static void _V0iter__atom_lambda397(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda397" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter__atom_lambda397, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0iter__atom_k437) (bruijn loop 0 1) (close _V0loop_lambda398))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0iter__atom_k437, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda398, env)})
    );
 }
}
static void _V0iter__atom_lambda396(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda396" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0iter__atom_lambda396, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter__atom_lambda396, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0iter__atom_lambda397) (bruijn ##k.1545 0 0) #f)
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0iter__atom_lambda397, env)}, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0iter__atom_lambda395(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda395" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_lambda395, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter__atom_lambda395, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 14 1) (bruijn ##k.1544 0 0) (close _V0iter__atom_lambda396))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 1)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0iter__atom_lambda396, env)})
    );
 }
}
static void _V0iter__atom_k448(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k448" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k448, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter__atom_k448, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.1 8 1) (bruijn ##k.1574 2 0) (bruijn ##x.1576 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 8-1, 1)), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0iter__atom_k447(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k447" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k447, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter__atom_k447, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 15 10) (close _V0iter__atom_k448) (quote case-lambda) (bruijn ##x.1577 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 15-1, 10)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0iter__atom_k448, env)}),
      VEncodePointer(&_V0case__lambda.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void _V0iter__atom_lambda411(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda411" };
 VRecordCall(&dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0iter__atom_lambda411, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter__atom_lambda411, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((bruijn map 14 3) (close _V0iter__atom_k447) (bruijn iter-lambda 8 1) (bruijn args 0 2) (bruijn body 0 3)) ((bruijn ##k.1574 0 0) #f))
if(VDecodeBool(
VInlineNullP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 3)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0iter__atom_k447, env)}),
      VGetArg(upenv, 8-1, 1),
      _var2,
      _var3
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__atom_lambda394(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda394" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter__atom_lambda394, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call-with-values 13 4) (bruijn ##k.1543 0 0) (close _V0iter__atom_lambda395) (close _V0iter__atom_lambda411))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 13-1, 4)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0iter__atom_lambda395, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0iter__atom_lambda411, env)})
    );
 }
}
static void _V0iter__atom_k436(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k436" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k436, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter__atom_k436, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1542 0 0) ((close _V0iter__atom_lambda394) (bruijn ##k.1540 1 0) (##inline ##sys.cdr (bruijn ##expr.6 1 1))) ((bruijn ##k.1540 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0iter__atom_lambda394, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__atom_lambda393(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda393" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter__atom_lambda393, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.6 0 1)) ((bruijn equal? 11 2) (close _V0iter__atom_k436) (quote case-lambda) (##inline ##sys.car (bruijn ##expr.6 0 1))) ((bruijn ##k.1540 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 11-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0iter__atom_k436, env)}),
      VEncodePointer(&_V0case__lambda.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__atom_lambda413(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda413" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter__atom_lambda413, runtime, upenv, 2, argc, _var0, _var1) {
  // (if (##inline ##sys.pair? (bruijn ##expr.16 0 1)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.16 0 1))) ((bruijn ##kk.1 6 1) (bruijn ##k.1534 0 0) (bruijn x 9 1)) ((bruijn ##k.1534 0 0) #f)) ((bruijn ##k.1534 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
_var1
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 6-1, 1)), runtime,
      _var0,
      VGetArg(upenv, 9-1, 1)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__atom_k450(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k450" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k450, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter__atom_k450, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1533 0 0) ((close _V0iter__atom_lambda413) (bruijn ##k.1531 1 0) (##inline ##sys.cdr (bruijn ##expr.15 1 1))) ((bruijn ##k.1531 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0iter__atom_lambda413, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__atom_lambda412(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda412" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter__atom_lambda412, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.15 0 1)) ((bruijn equal? 12 2) (close _V0iter__atom_k450) (quote quote) (##inline ##sys.car (bruijn ##expr.15 0 1))) ((bruijn ##k.1531 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 12-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0iter__atom_k450, env)}),
      VEncodePointer(&_V0quote.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__atom_k453(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k453" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k453, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter__atom_k453, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.1 6 1) (bruijn ##k.1524 5 0) (bruijn x 9 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 6-1, 1)), runtime,
      VGetArg(upenv, 5-1, 0),
      VGetArg(upenv, 9-1, 1)
    );
 }
}
static void _V0iter__atom_k452(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k452" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k452, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter__atom_k452, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##kk.1 5 1) (close _V0iter__atom_k453) (bruijn ##x.1530 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 5-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0iter__atom_k453, env)}),
      _var0
    );
 }
}
static void _V0iter__atom_k451(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k451" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k451, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter__atom_k451, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.null? (bruijn ##input.2 3 1)) ((bruijn error 12 11) (close _V0iter__atom_k452) (##string ##string.1660)) ((bruijn ##kk.1 4 1) (bruijn ##k.1524 3 0) (bruijn x 7 1)))
if(VDecodeBool(
VInlineNullP(
upenv->up->up->vars[1]
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 12-1, 11)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0iter__atom_k452, env)}),
      VEncodePointer(&_V10string_D1660.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->up->vars[1]), runtime,
      upenv->up->up->vars[0],
      VGetArg(upenv, 7-1, 1)
    );
}
 }
}
static void _V0iter__atom_k449(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k449" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k449, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter__atom_k449, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter__atom_lambda412) (close _V0iter__atom_k451) (bruijn ##input.2 2 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0iter__atom_lambda412, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0iter__atom_k451, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0iter__atom_k435(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k435" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k435, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter__atom_k435, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter__atom_lambda393) (close _V0iter__atom_k449) (bruijn ##input.2 1 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0iter__atom_lambda393, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0iter__atom_k449, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0iter__atom_lambda387(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda387" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter__atom_lambda387, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0iter__atom_lambda388) (close _V0iter__atom_k435) (bruijn ##input.2 0 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0iter__atom_lambda388, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0iter__atom_k435, env)}),
      _var1
    );
 }
}
static void _V0iter__atom_lambda386(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda386" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0iter__atom_lambda386, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter__atom_lambda386, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0iter__atom_lambda387) (bruijn ##k.1523 0 0) (bruijn x 3 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0iter__atom_lambda387, env)}, runtime,
      _var0,
      upenv->up->up->vars[1]
    );
 }
}
static void _V0iter__atom_k431(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k431" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k431, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter__atom_k431, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 7 1) (bruijn ##k.1521 1 0) (close _V0iter__atom_lambda386))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 7-1, 1)), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0iter__atom_lambda386, env)})
    );
 }
}
static void _V0iter__lambda_k455(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__lambda_k455" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__lambda_k455, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter__lambda_k455, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.1599 1 0) (##inline ##sys.cons (##inline ##sys.cons (bruijn k 1 1) (bruijn args 3 1)) (##inline ##sys.cons (bruijn ##x.1602 0 0) (quote ()))))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VInlineCons(
VInlineCons(
upenv->vars[1],
      upenv->up->up->vars[1]
    )
,
      VInlineCons(
_var0,
      VNULL
    )

    )

    );
 }
}
static void _V0iter__lambda_lambda415(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter__lambda_lambda415" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter__lambda_lambda415, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn iter2 6 4) (close _V0iter__lambda_k455) (bruijn body 2 2) (bruijn k 0 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 6-1, 4)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0iter__lambda_k455, env)}),
      upenv->up->vars[2],
      _var1
    );
 }
}
static void _V0iter__lambda_k454(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__lambda_k454" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__lambda_k454, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter__lambda_k454, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter__lambda_lambda415) (bruijn ##k.1598 1 0) (bruijn ##x.1603 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0iter__lambda_lambda415, env)}, runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0iter__lambda_lambda414(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0iter__lambda_lambda414" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0iter__lambda_lambda414, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter__lambda_lambda414, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn gensym 7 26) (close _V0iter__lambda_k454) (##string ##string.1661))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 7-1, 26)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0iter__lambda_k454, env)}),
      VEncodePointer(&_V10string_D1661.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0iter__atom_lambda385(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda385" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter__atom_lambda385, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0iter__atom_k431) (bruijn iter-lambda 0 1) (close _V0iter__lambda_lambda414))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0iter__atom_k431, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0iter__lambda_lambda414, env)})
    );
 }
}
static void _V0iter__atom_lambda384(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda384" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0iter__atom_lambda384, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter__atom_lambda384, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0iter__atom_lambda385) (bruijn ##k.1520 0 0) #f)
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0iter__atom_lambda385, env)}, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0to__cps_k376(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0to__cps_k376" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0to__cps_k376, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0to__cps_k376, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0to__cps_k377) (bruijn iter-atom 1 2) (close _V0iter__atom_lambda384))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0to__cps_k377, env)}),
      VEncodeInt(1l), VEncodeInt(2l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0iter__atom_lambda384, env)})
    );
 }
}
static void _V0application_Q_k458(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0application_Q_k458" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0application_Q_k458, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0application_Q_k458, runtime, upenv, 1, argc, _var0) {
  // ((bruijn not 7 6) (bruijn ##k.1604 3 0) (bruijn ##x.1606 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 7-1, 6)), runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0application_Q_k457(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0application_Q_k457" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0application_Q_k457, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0application_Q_k457, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn memv 6 29) (close _V0application_Q_k458) (bruijn ##x.1607 0 0) (##inline ##sys.qcons (quote quote) (##inline ##sys.qcons (quote lambda) (##inline ##sys.qcons (quote case-lambda) (quote ())))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 6-1, 29)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0application_Q_k458, env)}),
      _var0,
      VInlineCons(
VEncodePointer(&_V0quote.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V0case__lambda.sym, VPOINTER_OTHER),
      VNULL
    )

    )

    )

    );
 }
}
static void _V0application_Q_k456(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0application_Q_k456" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0application_Q_k456, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0application_Q_k456, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1605 0 0) ((bruijn car 5 18) (close _V0application_Q_k457) (bruijn x 1 1)) ((bruijn ##k.1604 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 5-1, 18)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0application_Q_k457, env)}),
      upenv->vars[1]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0application_Q_lambda416(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0application_Q_lambda416" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0application_Q_lambda416, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0application_Q_lambda416, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn pair? 4 14) (close _V0application_Q_k456) (bruijn x 0 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->up->vars[14]), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0application_Q_k456, env)}),
      _var1
    );
 }
}
static void _V0to__cps_lambda348(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5) {
 static VDebugInfo dbg = { "_V0to__cps_lambda348" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0to__cps_lambda348, runtime, upenv, 6, argc, _var0, _var1, _var2, _var3, _var4, _var5) {
  struct { VEnv env; VWORD argv[6]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 6; env->var_len = 6; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  env->vars[5] = _var5;
  // (set! (close _V0to__cps_k376) (bruijn application? 0 1) (close _V0application_Q_lambda416))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0to__cps_k376, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0application_Q_lambda416, env)})
    );
 }
}
static void _V0to__cps_lambda347(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0to__cps_lambda347" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0to__cps_lambda347, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0to__cps_lambda347, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0to__cps_lambda348) (bruijn ##k.1354 0 0) #f #f #f #f #f)
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0to__cps_lambda348, env)}, runtime,
      _var0,
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false)
    );
 }
}
static void cps_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17, VWORD _var18, VWORD _var19, VWORD _var20) {
 static VDebugInfo dbg = { "cps_lambda4" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)cps_lambda4, runtime, upenv, 21, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7, _var8, _var9, _var10, _var11, _var12, _var13, _var14, _var15, _var16, _var17, _var18, _var19, _var20) {
  struct { VEnv env; VWORD argv[21]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 21; env->var_len = 21; env->up = upenv;
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
  env->vars[19] = _var19;
  env->vars[20] = _var20;
  // (set! (close cps_k36) (bruijn to-cps 0 1) (close _V0to__cps_lambda347))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)cps_k36, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0to__cps_lambda347, env)})
    );
 }
}
static void cps_lambda3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17, VWORD _var18, VWORD _var19, VWORD _var20, VWORD _var21, VWORD _var22, VWORD _var23, VWORD _var24, VWORD _var25, VWORD _var26, VWORD _var27, VWORD _var28, VWORD _var29, VWORD _var30) {
 static VDebugInfo dbg = { "cps_lambda3" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)cps_lambda3, runtime, upenv, 31, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7, _var8, _var9, _var10, _var11, _var12, _var13, _var14, _var15, _var16, _var17, _var18, _var19, _var20, _var21, _var22, _var23, _var24, _var25, _var26, _var27, _var28, _var29, _var30) {
  struct { VEnv env; VWORD argv[31]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 31; env->var_len = 31; env->up = upenv;
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
  env->vars[19] = _var19;
  env->vars[20] = _var20;
  env->vars[21] = _var21;
  env->vars[22] = _var22;
  env->vars[23] = _var23;
  env->vars[24] = _var24;
  env->vars[25] = _var25;
  env->vars[26] = _var26;
  env->vars[27] = _var27;
  env->vars[28] = _var28;
  env->vars[29] = _var29;
  env->vars[30] = _var30;
  // ((close cps_lambda4) (bruijn ##k.223 0 0) #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f)
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)cps_lambda4, env)}, runtime,
      _var0,
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
static void cps_k35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "cps_k35" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to cps_k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)cps_k35, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close cps_lambda3) (bruijn ##k.222 30 0) (bruijn ##x.1611 29 0) (bruijn ##x.1612 28 0) (bruijn ##x.1613 27 0) (bruijn ##x.1614 26 0) (bruijn ##x.1615 25 0) (bruijn ##x.1616 24 0) (bruijn ##x.1617 23 0) (bruijn ##x.1618 22 0) (bruijn ##x.1619 21 0) (bruijn ##x.1620 20 0) (bruijn ##x.1621 19 0) (bruijn ##x.1622 18 0) (bruijn ##x.1623 17 0) (bruijn ##x.1624 16 0) (bruijn ##x.1625 15 0) (bruijn ##x.1626 14 0) (bruijn ##x.1627 13 0) (bruijn ##x.1628 12 0) (bruijn ##x.1629 11 0) (bruijn ##x.1630 10 0) (bruijn ##x.1631 9 0) (bruijn ##x.1632 8 0) (bruijn ##x.1633 7 0) (bruijn ##x.1634 6 0) (bruijn ##x.1635 5 0) (bruijn ##x.1636 4 0) (bruijn ##x.1637 3 0) (bruijn ##x.1638 2 0) (bruijn ##x.1639 1 0) (bruijn ##x.1640 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)cps_lambda3, env)}, runtime,
      VGetArg(upenv, 30-1, 0),
      VGetArg(upenv, 29-1, 0),
      VGetArg(upenv, 28-1, 0),
      VGetArg(upenv, 27-1, 0),
      VGetArg(upenv, 26-1, 0),
      VGetArg(upenv, 25-1, 0),
      VGetArg(upenv, 24-1, 0),
      VGetArg(upenv, 23-1, 0),
      VGetArg(upenv, 22-1, 0),
      VGetArg(upenv, 21-1, 0),
      VGetArg(upenv, 20-1, 0),
      VGetArg(upenv, 19-1, 0),
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
      _var0
    );
 }
}
static void cps_k34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "cps_k34" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to cps_k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)cps_k34, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 29 1) (close cps_k35) (quote cadr))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 29-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)cps_k35, env)}),
      VEncodePointer(&_V0cadr.sym, VPOINTER_OTHER)
    );
 }
}
static void cps_k33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "cps_k33" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to cps_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)cps_k33, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 28 1) (close cps_k34) (quote memv))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 28-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)cps_k34, env)}),
      VEncodePointer(&_V0memv.sym, VPOINTER_OTHER)
    );
 }
}
static void cps_k32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "cps_k32" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to cps_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)cps_k32, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 27 1) (close cps_k33) (quote apply))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 27-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)cps_k33, env)}),
      VEncodePointer(&_V0apply.sym, VPOINTER_OTHER)
    );
 }
}
static void cps_k31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "cps_k31" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to cps_k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)cps_k31, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 26 1) (close cps_k32) (quote null?))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 26-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)cps_k32, env)}),
      VEncodePointer(&_V0null_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void cps_k30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "cps_k30" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to cps_k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)cps_k30, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 25 1) (close cps_k31) (quote gensym))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 25-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)cps_k31, env)}),
      VEncodePointer(&_V0gensym.sym, VPOINTER_OTHER)
    );
 }
}
static void cps_k29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "cps_k29" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to cps_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)cps_k29, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 24 1) (close cps_k30) (quote string-ref))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 24-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)cps_k30, env)}),
      VEncodePointer(&_V0string__ref.sym, VPOINTER_OTHER)
    );
 }
}
static void cps_k28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "cps_k28" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to cps_k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)cps_k28, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 23 1) (close cps_k29) (quote eq?))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 23-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)cps_k29, env)}),
      VEncodePointer(&_V0eq_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void cps_k27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "cps_k27" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to cps_k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)cps_k27, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 22 1) (close cps_k28) (quote string->symbol))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 22-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)cps_k28, env)}),
      VEncodePointer(&_V0string___Gsymbol.sym, VPOINTER_OTHER)
    );
 }
}
static void cps_k26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "cps_k26" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to cps_k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)cps_k26, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 21 1) (close cps_k27) (quote substring))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 21-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)cps_k27, env)}),
      VEncodePointer(&_V0substring.sym, VPOINTER_OTHER)
    );
 }
}
static void cps_k25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "cps_k25" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to cps_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)cps_k25, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 20 1) (close cps_k26) (quote symbol->string))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 20-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)cps_k26, env)}),
      VEncodePointer(&_V0symbol___Gstring.sym, VPOINTER_OTHER)
    );
 }
}
static void cps_k24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "cps_k24" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to cps_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)cps_k24, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 19 1) (close cps_k25) (quote fold))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 19-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)cps_k25, env)}),
      VEncodePointer(&_V0fold.sym, VPOINTER_OTHER)
    );
 }
}
static void cps_k23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "cps_k23" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to cps_k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)cps_k23, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 18 1) (close cps_k24) (quote eqv?))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 18-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)cps_k24, env)}),
      VEncodePointer(&_V0eqv_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void cps_k22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "cps_k22" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to cps_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)cps_k22, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 17 1) (close cps_k23) (quote car))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 17-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)cps_k23, env)}),
      VEncodePointer(&_V0car.sym, VPOINTER_OTHER)
    );
 }
}
static void cps_k21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "cps_k21" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to cps_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)cps_k21, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 16 1) (close cps_k22) (quote atom?))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 16-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)cps_k22, env)}),
      VEncodePointer(&_V0atom_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void cps_k20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "cps_k20" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to cps_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)cps_k20, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 15 1) (close cps_k21) (quote +))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 15-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)cps_k21, env)}),
      VEncodePointer(&_V0_P.sym, VPOINTER_OTHER)
    );
 }
}
static void cps_k19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "cps_k19" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to cps_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)cps_k19, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 14 1) (close cps_k20) (quote cdr))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)cps_k20, env)}),
      VEncodePointer(&_V0cdr.sym, VPOINTER_OTHER)
    );
 }
}
static void cps_k18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "cps_k18" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to cps_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)cps_k18, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 13 1) (close cps_k19) (quote pair?))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 13-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)cps_k19, env)}),
      VEncodePointer(&_V0pair_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void cps_k17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "cps_k17" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to cps_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)cps_k17, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 12 1) (close cps_k18) (quote length))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 12-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)cps_k18, env)}),
      VEncodePointer(&_V0length.sym, VPOINTER_OTHER)
    );
 }
}
static void cps_k16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "cps_k16" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to cps_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)cps_k16, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 11 1) (close cps_k17) (quote <=))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 11-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)cps_k17, env)}),
      VEncodePointer(&_V0_L_E.sym, VPOINTER_OTHER)
    );
 }
}
static void cps_k15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "cps_k15" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to cps_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)cps_k15, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 10 1) (close cps_k16) (quote error))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 10-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)cps_k16, env)}),
      VEncodePointer(&_V0error.sym, VPOINTER_OTHER)
    );
 }
}
static void cps_k14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "cps_k14" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to cps_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)cps_k14, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 9 1) (close cps_k15) (quote cons))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 9-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)cps_k15, env)}),
      VEncodePointer(&_V0cons.sym, VPOINTER_OTHER)
    );
 }
}
static void cps_k13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "cps_k13" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to cps_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)cps_k13, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 8 1) (close cps_k14) (quote symbol?))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 8-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)cps_k14, env)}),
      VEncodePointer(&_V0symbol_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void cps_k12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "cps_k12" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to cps_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)cps_k12, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 7 1) (close cps_k13) (quote lookup-inline))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 7-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)cps_k13, env)}),
      VEncodePointer(&_V0lookup__inline.sym, VPOINTER_OTHER)
    );
 }
}
static void cps_k11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "cps_k11" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to cps_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)cps_k11, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 6 1) (close cps_k12) (quote =))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 6-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)cps_k12, env)}),
      VEncodePointer(&_V0_E.sym, VPOINTER_OTHER)
    );
 }
}
static void cps_k10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "cps_k10" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to cps_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)cps_k10, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 5 1) (close cps_k11) (quote not))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 5-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)cps_k11, env)}),
      VEncodePointer(&_V0not.sym, VPOINTER_OTHER)
    );
 }
}
static void cps_k9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "cps_k9" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to cps_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)cps_k9, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 4 1) (close cps_k10) (quote reverse))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->up->vars[1]), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)cps_k10, env)}),
      VEncodePointer(&_V0reverse.sym, VPOINTER_OTHER)
    );
 }
}
static void cps_k8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "cps_k8" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to cps_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)cps_k8, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 3 1) (close cps_k9) (quote call-with-values))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->vars[1]), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)cps_k9, env)}),
      VEncodePointer(&_V0call__with__values.sym, VPOINTER_OTHER)
    );
 }
}
static void cps_k7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "cps_k7" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to cps_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)cps_k7, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 2 1) (close cps_k8) (quote map))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->vars[1]), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)cps_k8, env)}),
      VEncodePointer(&_V0map.sym, VPOINTER_OTHER)
    );
 }
}
static void cps_k6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "cps_k6" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to cps_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)cps_k6, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 1 1) (close cps_k7) (quote equal?))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[1]), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)cps_k7, env)}),
      VEncodePointer(&_V0equal_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void cps_lambda2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "cps_lambda2" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)cps_lambda2, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##vcore.import 0 1) (close cps_k6) (quote call/cc))
    V_CALL_CLOSURE2(VDecodeClosureApply(_var1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)cps_k6, env)}),
      VEncodePointer(&_V0call_Wcc.sym, VPOINTER_OTHER)
    );
 }
}
static void cps_k5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "cps_k5" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to cps_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)cps_k5, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close cps_lambda2) (bruijn ##k.221 5 0) (bruijn ##x.1641 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)cps_lambda2, env)}, runtime,
      VGetArg(upenv, 5-1, 0),
      _var0
    );
 }
}
static void cps_k4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "cps_k4" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to cps_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)cps_k4, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.make-import (close cps_k5) (##string ##string.1662) (bruijn ##x.1642 3 0) (bruijn ##x.1643 2 0) (bruijn ##x.1644 1 0) (bruijn ##x.1645 0 0))
    V_CALL_FUNC2(VMakeImport2, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)cps_k5, env)}),
      VEncodePointer(&_V10string_D1662.sym, VPOINTER_OTHER),
      upenv->up->up->vars[0],
      upenv->up->vars[0],
      upenv->vars[0],
      _var0
    );
 }
}
static void cps_k3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "cps_k3" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to cps_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)cps_k3, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.load-library (close cps_k4) (##string ##string.1663))
    V_CALL_FUNC2(VLoadLibrary2, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)cps_k4, env)}),
      VEncodePointer(&_V10string_D1663.sym, VPOINTER_OTHER)
    );
 }
}
static void cps_k2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "cps_k2" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to cps_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)cps_k2, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.load-library (close cps_k3) (##string ##string.1664))
    V_CALL_FUNC2(VLoadLibrary2, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)cps_k3, env)}),
      VEncodePointer(&_V10string_D1664.sym, VPOINTER_OTHER)
    );
 }
}
static void cps_k1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "cps_k1" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to cps_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)cps_k1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.load-library (close cps_k2) (##string ##string.1665))
    V_CALL_FUNC2(VLoadLibrary2, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)cps_k2, env)}),
      VEncodePointer(&_V10string_D1665.sym, VPOINTER_OTHER)
    );
 }
}
static void cps_lambda1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "cps_lambda1" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to cps_lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)cps_lambda1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.load-library (close cps_k1) (##string ##string.1666))
    V_CALL_FUNC2(VLoadLibrary2, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)cps_k1, env)}),
      VEncodePointer(&_V10string_D1666.sym, VPOINTER_OTHER)
    );
 }
}
VFunc2 cps = (VFunc2)cps_lambda1;
