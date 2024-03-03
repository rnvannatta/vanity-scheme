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
static struct { VBlob sym; char bytes[21]; } _V10string_D1501 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10string_D1500 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[33]; } _V10string_D1499 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
static struct { VBlob sym; char bytes[33]; } _V10string_D1498 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0match_V20" };
static struct { VBlob sym; char bytes[37]; } _V10string_D1497 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "_V0vanity_V0compiler_V0variables_V20" };
static struct { VBlob sym; char bytes[31]; } _V10string_D1496 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "_V0vanity_V0compiler_V0cps_V20" };
VWEAK VWORD _V0eq_Q;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0eq_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "eq\?" };
VWEAK VWORD _V0gensym;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0gensym = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "gensym" };
VWEAK VWORD _V0cadr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cadr" };
VWEAK VWORD _V0apply;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0apply = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "apply" };
VWEAK VWORD _V0fold;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0fold = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "fold" };
VWEAK VWORD _V0_P;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_P = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "+" };
VWEAK VWORD _V0null_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0null_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "null\?" };
VWEAK VWORD _V0cdr;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0cdr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "cdr" };
VWEAK VWORD _V0car;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0car = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "car" };
VWEAK VWORD _V0memv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0memv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "memv" };
VWEAK VWORD _V0pair_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0pair_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "pair\?" };
VWEAK VWORD _V0atom_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0atom_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "atom\?" };
VWEAK VWORD _V0eqv_Q;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0eqv_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "eqv\?" };
VWEAK VWORD _V0_E;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_E = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "=" };
VWEAK VWORD _V0_L_E;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_L_E = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "<=" };
VWEAK VWORD _V0length;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "length" };
VWEAK VWORD _V0not;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0not = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "not" };
VWEAK VWORD _V0list;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "list" };
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "error" };
VWEAK VWORD _V0lookup__inline;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0lookup__inline = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "lookup-inline" };
VWEAK VWORD _V0symbol_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0symbol_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "symbol\?" };
VWEAK VWORD _V0cons;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cons = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cons" };
VWEAK VWORD _V0compiler__error;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0compiler__error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "compiler-error" };
VWEAK VWORD _V0map;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "map" };
VWEAK VWORD _V0call__with__values;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0call__with__values = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "call-with-values" };
VWEAK VWORD _V0reverse;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0reverse = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "reverse" };
VWEAK VWORD _V0call_Wcc;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0call_Wcc = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "call/cc" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
VWEAK VWORD _V0deannotate__lambdas;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0deannotate__lambdas = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "deannotate-lambdas" };
VWEAK VWORD _V0annotate__lambdas;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0annotate__lambdas = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "annotate-lambdas" };
VWEAK VWORD _V0alpha__convert;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0alpha__convert = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "alpha-convert" };
VWEAK VWORD _V0optimize;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0optimize = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "optimize" };
VWEAK VWORD _V0to__cps;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0to__cps = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "to-cps" };
static struct { VBlob sym; char bytes[38]; } _V10string_D1495 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 38 }, "optimize-apply: malformed application" };
VWEAK VWORD _V10inline;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V10inline = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "##inline" };
static struct { VBlob sym; char bytes[38]; } _V10string_D1494 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 38 }, "optimize-let: malformed let statement" };
static struct { VBlob sym; char bytes[51]; } _V10string_D1493 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 51 }, "Not enough arguments to continuation. Codegen bug." };
static struct { VBlob sym; char bytes[31]; } _V10string_D1492 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "Not enough arguments to lambda" };
static struct { VBlob sym; char bytes[34]; } _V10string_D1491 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "optimize-lambda: malformed lambda" };
VWEAK VWORD _V0set_B;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "set!" };
static struct { VBlob sym; char bytes[26]; } _V10string_D1490 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "match statement exhausted" };
VWEAK VWORD _V10vcore_Ddeclare;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Ddeclare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.declare" };
VWEAK VWORD _V10foreign_Ddeclare;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10foreign_Ddeclare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##foreign.declare" };
VWEAK VWORD _V10sys_Dnext;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V10sys_Dnext = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "##sys.next" };
static struct { VBlob sym; char bytes[2]; } _V10string_D1489 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "p" };
static struct { VBlob sym; char bytes[8]; } _V10string_D1488 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "ignored" };
static struct { VBlob sym; char bytes[2]; } _V10string_D1487 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "x" };
VWEAK VWORD _V0continuation;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0continuation = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "continuation" };
static struct { VBlob sym; char bytes[20]; } _V10string_D1486 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "stray () in program" };
static struct { VBlob sym; char bytes[2]; } _V10string_D1485 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "k" };
VWEAK VWORD _V0letrec;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0letrec = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "letrec" };
VWEAK VWORD _V0or;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0or = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "or" };
VWEAK VWORD _V0if;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0if = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "if" };
VWEAK VWORD _V0begin;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0begin = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "begin" };
VWEAK VWORD _V10foreign_Dfunction;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10foreign_Dfunction = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##foreign.function" };
VWEAK VWORD _V0case__lambda;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0case__lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "case-lambda" };
VWEAK VWORD _V0lambda;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "lambda" };
VWEAK VWORD _V0quote;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0quote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "quote" };
static __attribute__((constructor)) void VDllMain1() {
  _V0eq_Q = VEncodePointer(VLookupConstant("_V0eq_Q", &_VW_V0eq_Q), VPOINTER_OTHER);
  _V0gensym = VEncodePointer(VLookupConstant("_V0gensym", &_VW_V0gensym), VPOINTER_OTHER);
  _V0cadr = VEncodePointer(VLookupConstant("_V0cadr", &_VW_V0cadr), VPOINTER_OTHER);
  _V0apply = VEncodePointer(VLookupConstant("_V0apply", &_VW_V0apply), VPOINTER_OTHER);
  _V0fold = VEncodePointer(VLookupConstant("_V0fold", &_VW_V0fold), VPOINTER_OTHER);
  _V0_P = VEncodePointer(VLookupConstant("_V0_P", &_VW_V0_P), VPOINTER_OTHER);
  _V0null_Q = VEncodePointer(VLookupConstant("_V0null_Q", &_VW_V0null_Q), VPOINTER_OTHER);
  _V0cdr = VEncodePointer(VLookupConstant("_V0cdr", &_VW_V0cdr), VPOINTER_OTHER);
  _V0car = VEncodePointer(VLookupConstant("_V0car", &_VW_V0car), VPOINTER_OTHER);
  _V0memv = VEncodePointer(VLookupConstant("_V0memv", &_VW_V0memv), VPOINTER_OTHER);
  _V0pair_Q = VEncodePointer(VLookupConstant("_V0pair_Q", &_VW_V0pair_Q), VPOINTER_OTHER);
  _V0atom_Q = VEncodePointer(VLookupConstant("_V0atom_Q", &_VW_V0atom_Q), VPOINTER_OTHER);
  _V0eqv_Q = VEncodePointer(VLookupConstant("_V0eqv_Q", &_VW_V0eqv_Q), VPOINTER_OTHER);
  _V0_E = VEncodePointer(VLookupConstant("_V0_E", &_VW_V0_E), VPOINTER_OTHER);
  _V0_L_E = VEncodePointer(VLookupConstant("_V0_L_E", &_VW_V0_L_E), VPOINTER_OTHER);
  _V0length = VEncodePointer(VLookupConstant("_V0length", &_VW_V0length), VPOINTER_OTHER);
  _V0not = VEncodePointer(VLookupConstant("_V0not", &_VW_V0not), VPOINTER_OTHER);
  _V0list = VEncodePointer(VLookupConstant("_V0list", &_VW_V0list), VPOINTER_OTHER);
  _V0error = VEncodePointer(VLookupConstant("_V0error", &_VW_V0error), VPOINTER_OTHER);
  _V0lookup__inline = VEncodePointer(VLookupConstant("_V0lookup__inline", &_VW_V0lookup__inline), VPOINTER_OTHER);
  _V0symbol_Q = VEncodePointer(VLookupConstant("_V0symbol_Q", &_VW_V0symbol_Q), VPOINTER_OTHER);
  _V0cons = VEncodePointer(VLookupConstant("_V0cons", &_VW_V0cons), VPOINTER_OTHER);
  _V0compiler__error = VEncodePointer(VLookupConstant("_V0compiler__error", &_VW_V0compiler__error), VPOINTER_OTHER);
  _V0map = VEncodePointer(VLookupConstant("_V0map", &_VW_V0map), VPOINTER_OTHER);
  _V0call__with__values = VEncodePointer(VLookupConstant("_V0call__with__values", &_VW_V0call__with__values), VPOINTER_OTHER);
  _V0reverse = VEncodePointer(VLookupConstant("_V0reverse", &_VW_V0reverse), VPOINTER_OTHER);
  _V0call_Wcc = VEncodePointer(VLookupConstant("_V0call_Wcc", &_VW_V0call_Wcc), VPOINTER_OTHER);
  _V0equal_Q = VEncodePointer(VLookupConstant("_V0equal_Q", &_VW_V0equal_Q), VPOINTER_OTHER);
  _V0deannotate__lambdas = VEncodePointer(VLookupConstant("_V0deannotate__lambdas", &_VW_V0deannotate__lambdas), VPOINTER_OTHER);
  _V0annotate__lambdas = VEncodePointer(VLookupConstant("_V0annotate__lambdas", &_VW_V0annotate__lambdas), VPOINTER_OTHER);
  _V0alpha__convert = VEncodePointer(VLookupConstant("_V0alpha__convert", &_VW_V0alpha__convert), VPOINTER_OTHER);
  _V0optimize = VEncodePointer(VLookupConstant("_V0optimize", &_VW_V0optimize), VPOINTER_OTHER);
  _V0to__cps = VEncodePointer(VLookupConstant("_V0to__cps", &_VW_V0to__cps), VPOINTER_OTHER);
  _V10inline = VEncodePointer(VLookupConstant("_V10inline", &_VW_V10inline), VPOINTER_OTHER);
  _V0set_B = VEncodePointer(VLookupConstant("_V0set_B", &_VW_V0set_B), VPOINTER_OTHER);
  _V10vcore_Ddeclare = VEncodePointer(VLookupConstant("_V10vcore_Ddeclare", &_VW_V10vcore_Ddeclare), VPOINTER_OTHER);
  _V10foreign_Ddeclare = VEncodePointer(VLookupConstant("_V10foreign_Ddeclare", &_VW_V10foreign_Ddeclare), VPOINTER_OTHER);
  _V10sys_Dnext = VEncodePointer(VLookupConstant("_V10sys_Dnext", &_VW_V10sys_Dnext), VPOINTER_OTHER);
  _V0continuation = VEncodePointer(VLookupConstant("_V0continuation", &_VW_V0continuation), VPOINTER_OTHER);
  _V0letrec = VEncodePointer(VLookupConstant("_V0letrec", &_VW_V0letrec), VPOINTER_OTHER);
  _V0or = VEncodePointer(VLookupConstant("_V0or", &_VW_V0or), VPOINTER_OTHER);
  _V0if = VEncodePointer(VLookupConstant("_V0if", &_VW_V0if), VPOINTER_OTHER);
  _V0begin = VEncodePointer(VLookupConstant("_V0begin", &_VW_V0begin), VPOINTER_OTHER);
  _V10foreign_Dfunction = VEncodePointer(VLookupConstant("_V10foreign_Dfunction", &_VW_V10foreign_Dfunction), VPOINTER_OTHER);
  _V0case__lambda = VEncodePointer(VLookupConstant("_V0case__lambda", &_VW_V0case__lambda), VPOINTER_OTHER);
  _V0lambda = VEncodePointer(VLookupConstant("_V0lambda", &_VW_V0lambda), VPOINTER_OTHER);
  _V0quote = VEncodePointer(VLookupConstant("_V0quote", &_VW_V0quote), VPOINTER_OTHER);
}
static void _V0vanity_V0compiler_V0cps_V20_k37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k37" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k37, runtime, upenv, 1, argc, _var0) {
  // ((bruijn not 7 16) (bruijn ##k.294 3 0) (bruijn ##x.296 0 0))
V_CALL(VGetArg(upenv, 7-1, 16), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k36, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn memv 6 9) (close _V0vanity_V0compiler_V0cps_V20_k37) (bruijn ##x.297 0 0) (##inline ##sys.qcons 'quote (##inline ##sys.qcons 'lambda (##inline ##sys.qcons 'case-lambda (##inline ##sys.qcons '##foreign.function '())))))
V_CALL(VGetArg(upenv, 6-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k37, env)}),
      _var0,
      VInlineCons(
        _V0quote,
        VInlineCons(
        _V0lambda,
        VInlineCons(
        _V0case__lambda,
        VInlineCons(
        _V10foreign_Dfunction,
        VNULL)))));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k35, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.295 0 0) ((bruijn car 5 8) (close _V0vanity_V0compiler_V0cps_V20_k36) (bruijn x 1 1)) ((bruijn ##k.294 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 5-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k36, env)}),
      upenv->vars[1]);
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda4, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda4, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn pair? 4 10) (close _V0vanity_V0compiler_V0cps_V20_k35) (bruijn x 0 1))
V_CALL(upenv->up->up->up->vars[10], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k35, env)}),
      _var1);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k40, runtime, upenv, 1, argc, _var0) {
  // ((bruijn not 7 16) (bruijn ##k.302 3 0) (bruijn ##x.304 0 0))
V_CALL(VGetArg(upenv, 7-1, 16), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k39, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn memv 6 9) (close _V0vanity_V0compiler_V0cps_V20_k40) (bruijn ##x.305 0 0) (##inline ##sys.qcons 'quote (##inline ##sys.qcons 'lambda (##inline ##sys.qcons 'case-lambda (##inline ##sys.qcons '##foreign.function (##inline ##sys.qcons 'begin (##inline ##sys.qcons 'if (##inline ##sys.qcons 'or (##inline ##sys.qcons 'letrec '())))))))))
V_CALL(VGetArg(upenv, 6-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k40, env)}),
      _var0,
      VInlineCons(
        _V0quote,
        VInlineCons(
        _V0lambda,
        VInlineCons(
        _V0case__lambda,
        VInlineCons(
        _V10foreign_Dfunction,
        VInlineCons(
        _V0begin,
        VInlineCons(
        _V0if,
        VInlineCons(
        _V0or,
        VInlineCons(
        _V0letrec,
        VNULL)))))))));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k38, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.303 0 0) ((bruijn car 5 8) (close _V0vanity_V0compiler_V0cps_V20_k39) (bruijn x 1 1)) ((bruijn ##k.302 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 5-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k39, env)}),
      upenv->vars[1]);
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda5, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda5, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn pair? 4 10) (close _V0vanity_V0compiler_V0cps_V20_k38) (bruijn x 0 1))
V_CALL(upenv->up->up->up->vars[10], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k38, env)}),
      _var1);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k42" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k42, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.315 2 0) (##inline ##sys.cons (##inline ##sys.cons (bruijn k 1 0) (bruijn args 2 1)) (##inline ##sys.cons (bruijn ##x.318 0 0) '())))
V_CALL(upenv->up->vars[0], runtime,
      VInlineCons(
        VInlineCons(
        upenv->vars[0],
        upenv->up->vars[1]),
        VInlineCons(
        _var0,
        VNULL)));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k41, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn iter2 4 6) (close _V0vanity_V0compiler_V0cps_V20_k42) (bruijn body 1 2) (bruijn k 0 0))
V_CALL(upenv->up->up->up->vars[6], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k42, env)}),
      upenv->vars[2],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda7, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda7, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn gensym 6 1) (close _V0vanity_V0compiler_V0cps_V20_k41) (##string ##string.1485))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k41, env)}),
      VEncodePointer(&_V10string_D1485.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k48" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k48, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.7 8 1) (bruijn ##k.370 5 0) (bruijn ##x.375 0 0))
V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k47" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k47, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 13 21) (close _V0vanity_V0compiler_V0cps_V20_k48) 'lambda (bruijn ##x.376 0 0))
V_CALL(VGetArg(upenv, 13-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k48, env)}),
      _V0lambda,
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k46" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k46, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.11 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.11 0 0))) ((bruijn iter-lambda 7 0) (close _V0vanity_V0compiler_V0cps_V20_k47) (##inline ##sys.car (bruijn ##expr.10 1 0)) (##inline ##sys.car (bruijn ##expr.11 0 0))) ((bruijn ##k.370 3 0) #f)) ((bruijn ##k.370 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k47, env)}),
      VInlineCar(
        upenv->vars[0]),
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k45" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k45, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.10 0 0)) ((close _V0vanity_V0compiler_V0cps_V20_k46) (##inline ##sys.cdr (bruijn ##expr.10 0 0))) ((bruijn ##k.370 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k46, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k44" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k44, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.371 0 0) ((close _V0vanity_V0compiler_V0cps_V20_k45) (##inline ##sys.cdr (bruijn ##expr.9 2 0))) ((bruijn ##k.370 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k45, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k43, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.9 1 0)) ((bruijn equal? 9 27) (close _V0vanity_V0compiler_V0cps_V20_k44) 'lambda (##inline ##sys.car (bruijn ##expr.9 1 0))) ((bruijn ##k.370 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 9-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k44, env)}),
      _V0lambda,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k54" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k54, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.16 5 1) (bruijn ##k.360 2 0) (bruijn ##expr.18 3 1) (bruijn ##x.361 1 0) (bruijn ##x.362 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->vars[0],
      upenv->up->up->vars[1],
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k53" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k53, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 18 25) (close _V0vanity_V0compiler_V0cps_V20_k54) (bruijn ##body.15 2 3))
V_CALL(VGetArg(upenv, 18-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k54, env)}),
      upenv->up->vars[3]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k52" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k52, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.18 1 1))) ((bruijn reverse 17 25) (close _V0vanity_V0compiler_V0cps_V20_k53) (bruijn ##args.14 1 2)) ((bruijn ##k.360 0 0) #f))
if(VDecodeBool(
VInlineNot(
        VInlinePairP(
        upenv->vars[1])))) {
V_CALL(VGetArg(upenv, 17-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k53, env)}),
      upenv->vars[2]);
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k58" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k58, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.20 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.20 0 0))) ((bruijn ##kk.17 3 1) (bruijn ##k.352 1 0) (##inline ##sys.cdr (bruijn ##expr.18 6 1)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.19 2 0)) (bruijn ##args.14 6 2)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.20 0 0)) (bruijn ##body.15 6 3))) ((bruijn ##k.352 1 0) #f)) ((bruijn ##k.352 1 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(upenv->up->up->vars[1], runtime,
      upenv->vars[0],
      VInlineCdr(
        VGetArg(upenv, 6-1, 1)),
      VInlineCons(
        VInlineCar(
        upenv->up->vars[0]),
        VGetArg(upenv, 6-1, 2)),
      VInlineCons(
        VInlineCar(
        _var0),
        VGetArg(upenv, 6-1, 3)));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k57" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k57, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.19 1 0)) ((close _V0vanity_V0compiler_V0cps_V20_k58) (##inline ##sys.cdr (bruijn ##expr.19 1 0))) ((bruijn ##k.352 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k58, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k61" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k61, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.16 9 1) (bruijn ##k.347 4 0) (bruijn ##expr.18 7 1) (bruijn ##x.349 1 0) (bruijn ##x.350 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 7-1, 1),
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k60" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k60, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 22 25) (close _V0vanity_V0compiler_V0cps_V20_k61) (bruijn ##body.15 6 3))
V_CALL(VGetArg(upenv, 22-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k61, env)}),
      VGetArg(upenv, 6-1, 3));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k59" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k59, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 21 25) (close _V0vanity_V0compiler_V0cps_V20_k60) (bruijn ##args.14 5 2))
V_CALL(VGetArg(upenv, 21-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k60, env)}),
      VGetArg(upenv, 5-1, 2));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k56" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k56, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k57) (close _V0vanity_V0compiler_V0cps_V20_k59))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k57, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k59, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda16, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda16, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0vanity_V0compiler_V0cps_V20_k56) (##inline ##sys.car (bruijn ##expr.18 3 1)))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k56, env, runtime,
      VInlineCar(
        upenv->up->up->vars[1]));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda15, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 18 26) (bruijn ##k.346 0 0) (close _V0vanity_V0compiler_V0cps_V20_lambda16))
V_CALL(VGetArg(upenv, 18-1, 26), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda16, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k55" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k55, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call-with-values 17 24) (bruijn ##k.344 1 0) (close _V0vanity_V0compiler_V0cps_V20_lambda15) (bruijn loop 2 0))
V_CALL(VGetArg(upenv, 17-1, 24), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda15, env)}),
      upenv->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda14, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda14, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((close _V0vanity_V0compiler_V0cps_V20_k52) (close _V0vanity_V0compiler_V0cps_V20_k55))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k52, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k55, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda13, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda13, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V0vanity_V0compiler_V0cps_V20_lambda14)) ((bruijn loop 0 0) (bruijn ##k.343 1 0) (##inline ##sys.cdr (bruijn ##expr.12 5 0)) '() '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda14, env)});
V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VInlineCdr(
        VGetArg(upenv, 5-1, 0)),
      VNULL,
      VNULL);
    }
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda12, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 13 26) (bruijn ##k.342 0 0) (close _V0vanity_V0compiler_V0cps_V20_lambda13))
V_CALL(VGetArg(upenv, 13-1, 26), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda13, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k63" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k63, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.7 9 1) (bruijn ##k.364 2 0) (bruijn ##x.366 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k62" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k62, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 14 21) (close _V0vanity_V0compiler_V0cps_V20_k63) 'case-lambda (bruijn ##x.367 0 0))
V_CALL(VGetArg(upenv, 14-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k63, env)}),
      _V0case__lambda,
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda17, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda17, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((bruijn map 13 23) (close _V0vanity_V0compiler_V0cps_V20_k62) (bruijn iter-lambda 8 0) (bruijn args 0 2) (bruijn body 0 3)) ((bruijn ##k.364 0 0) #f))
if(VDecodeBool(
VInlineNullP(
        _var1))) {
V_CALL(VGetArg(upenv, 13-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k62, env)}),
      VGetArg(upenv, 8-1, 0),
      _var2,
      _var3);
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k51" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k51, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.341 0 0) ((bruijn call-with-values 12 24) (bruijn ##k.340 1 0) (close _V0vanity_V0compiler_V0cps_V20_lambda12) (close _V0vanity_V0compiler_V0cps_V20_lambda17)) ((bruijn ##k.340 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 12-1, 24), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda12, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda17, env)}));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k50" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k50, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.12 1 0)) ((bruijn equal? 11 27) (close _V0vanity_V0compiler_V0cps_V20_k51) 'case-lambda (##inline ##sys.car (bruijn ##expr.12 1 0))) ((bruijn ##k.340 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 11-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k51, env)}),
      _V0case__lambda,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k66" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k66, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.337 0 0) ((bruijn ##kk.7 8 1) (bruijn ##k.336 1 0) (bruijn x 10 1)) ((bruijn ##k.336 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      upenv->vars[0],
      VGetArg(upenv, 10-1, 1));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k65" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k65, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.21 1 0)) ((bruijn equal? 13 27) (close _V0vanity_V0compiler_V0cps_V20_k66) '##foreign.function (##inline ##sys.car (bruijn ##expr.21 1 0))) ((bruijn ##k.336 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 13-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k66, env)}),
      _V10foreign_Dfunction,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k70" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k70, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.23 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.23 0 0))) ((bruijn ##kk.7 11 1) (bruijn ##k.329 2 0) (bruijn x 13 1)) ((bruijn ##k.329 2 0) #f)) ((bruijn ##k.329 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 13-1, 1));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k69" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k69, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.330 0 0) ((close _V0vanity_V0compiler_V0cps_V20_k70) (##inline ##sys.cdr (bruijn ##expr.22 2 0))) ((bruijn ##k.329 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k70, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k68" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k68, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.22 1 0)) ((bruijn equal? 15 27) (close _V0vanity_V0compiler_V0cps_V20_k69) 'quote (##inline ##sys.car (bruijn ##expr.22 1 0))) ((bruijn ##k.329 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 15-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k69, env)}),
      _V0quote,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k73" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k73, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.7 11 1) (bruijn ##k.326 1 0) (bruijn ##x.327 0 0))
V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k72" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k72, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.null? (bruijn ##input.8 9 0)) ((bruijn compiler-error 16 22) (close _V0vanity_V0compiler_V0cps_V20_k73) (##string ##string.1486)) ((bruijn ##k.326 0 0) #f))
if(VDecodeBool(
VInlineNullP(
        VGetArg(upenv, 9-1, 0)))) {
V_CALL(VGetArg(upenv, 16-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k73, env)}),
      VEncodePointer(&_V10string_D1486.sym, VPOINTER_OTHER));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k74" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k74, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.7 10 1) (bruijn ##k.319 10 0) (bruijn x 12 1))
V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      VGetArg(upenv, 10-1, 0),
      VGetArg(upenv, 12-1, 1));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k71" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k71, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k72) (close _V0vanity_V0compiler_V0cps_V20_k74))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k72, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k74, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda19" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda19, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k68) (close _V0vanity_V0compiler_V0cps_V20_k71))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k68, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k71, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k67" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k67, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda19) (bruijn ##input.8 6 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda19, env, runtime,
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda18" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda18, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k65) (close _V0vanity_V0compiler_V0cps_V20_k67))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k65, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k67, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k64" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k64, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda18) (bruijn ##input.8 4 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda18, env, runtime,
      upenv->up->up->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda11" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda11, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k50) (close _V0vanity_V0compiler_V0cps_V20_k64))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k50, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k64, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k49" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k49, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda11) (bruijn ##input.8 2 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda11, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda10" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda10, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k43) (close _V0vanity_V0compiler_V0cps_V20_k49))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k43, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k49, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda9" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda9, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda10) (bruijn ##input.8 0 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda10, env, runtime,
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda8, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda8, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda9) (bruijn x 2 1))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda9, env, runtime,
      upenv->up->vars[1]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda6, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda6, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V0vanity_V0compiler_V0cps_V20_lambda7)) ((bruijn call/cc 5 26) (bruijn ##k.314 1 0) (close _V0vanity_V0compiler_V0cps_V20_lambda8)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda7, env)});
V_CALL(VGetArg(upenv, 5-1, 26), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda8, env)}));
    }
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k77" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k77, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.380 3 0) (##inline ##sys.cons (##inline ##sys.cons 'lambda (##inline ##sys.cons (bruijn args 5 1) (##inline ##sys.cons (bruijn ##x.385 0 0) '()))) (bruijn appl 1 0)))
V_CALL(upenv->up->up->vars[0], runtime,
      VInlineCons(
        VInlineCons(
        _V0lambda,
        VInlineCons(
        VGetArg(upenv, 5-1, 1),
        VInlineCons(
        _var0,
        VNULL))),
        upenv->vars[0]));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k76" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k76, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn iter2 5 6) (close _V0vanity_V0compiler_V0cps_V20_k77) (bruijn body 4 2) (bruijn k 4 4))
V_CALL(VGetArg(upenv, 5-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k77, env)}),
      upenv->up->up->up->vars[2],
      upenv->up->up->up->vars[4]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k84" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k84, runtime, upenv, 1, argc, _var0) {
  // ((bruijn iter2 11 6) (bruijn ##k.380 8 0) (bruijn ##x.387 3 0) (##inline ##sys.cons 'continuation (##inline ##sys.cons (##inline ##sys.cons (bruijn x 4 0) '()) (##inline ##sys.cons (bruijn ##x.392 0 0) '()))))
V_CALL(VGetArg(upenv, 11-1, 6), runtime,
      VGetArg(upenv, 8-1, 0),
      upenv->up->up->vars[0],
      VInlineCons(
        _V0continuation,
        VInlineCons(
        VInlineCons(
        upenv->up->up->up->vars[0],
        VNULL),
        VInlineCons(
        _var0,
        VNULL))));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k83" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k83, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn loop 8 0) (close _V0vanity_V0compiler_V0cps_V20_k84) (bruijn ##x.393 1 0) (bruijn ##x.394 0 0))
V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k84, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k82" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k82, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 12 7) (close _V0vanity_V0compiler_V0cps_V20_k83) (bruijn vals 6 2))
V_CALL(VGetArg(upenv, 12-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k83, env)}),
      VGetArg(upenv, 6-1, 2));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k81" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k81, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 11 21) (close _V0vanity_V0compiler_V0cps_V20_k82) (bruijn x 1 0) (bruijn appl 5 1))
V_CALL(VGetArg(upenv, 11-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k82, env)}),
      upenv->vars[0],
      VGetArg(upenv, 5-1, 1));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k80" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k80, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn car 10 8) (close _V0vanity_V0compiler_V0cps_V20_k81) (bruijn vals 4 2))
V_CALL(VGetArg(upenv, 10-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k81, env)}),
      upenv->up->up->up->vars[2]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k88" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k88, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 8 0) (bruijn ##k.380 7 0) (bruijn ##x.395 1 0) (bruijn ##x.396 0 0))
V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VGetArg(upenv, 7-1, 0),
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k87" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k87, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 12 7) (close _V0vanity_V0compiler_V0cps_V20_k88) (bruijn vals 6 2))
V_CALL(VGetArg(upenv, 12-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k88, env)}),
      VGetArg(upenv, 6-1, 2));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k86" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k86, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 11 21) (close _V0vanity_V0compiler_V0cps_V20_k87) (bruijn ##x.397 0 0) (bruijn appl 5 1))
V_CALL(VGetArg(upenv, 11-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k87, env)}),
      _var0,
      VGetArg(upenv, 5-1, 1));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k85" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k85, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn iter-atom 7 2) (close _V0vanity_V0compiler_V0cps_V20_k86) (bruijn ##x.398 0 0))
V_CALL(VGetArg(upenv, 7-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k86, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k79" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k79, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.386 0 0) ((bruijn gensym 9 1) (close _V0vanity_V0compiler_V0cps_V20_k80) (##string ##string.1487)) ((bruijn car 9 8) (close _V0vanity_V0compiler_V0cps_V20_k85) (bruijn vals 3 2)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k80, env)}),
      VEncodePointer(&_V10string_D1487.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 9-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k85, env)}),
      upenv->up->up->vars[2]);
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k78" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k78, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn application? 5 0) (close _V0vanity_V0compiler_V0cps_V20_k79) (bruijn ##x.399 0 0))
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k79, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k75" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k75, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.381 0 0) ((bruijn reverse 7 25) (close _V0vanity_V0compiler_V0cps_V20_k76) (bruijn appl 1 1)) ((bruijn car 7 8) (close _V0vanity_V0compiler_V0cps_V20_k78) (bruijn vals 1 2)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 7-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k76, env)}),
      upenv->vars[1]);
} else {
V_CALL(VGetArg(upenv, 7-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k78, env)}),
      upenv->vars[2]);
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda21, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda21, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 6 6) (close _V0vanity_V0compiler_V0cps_V20_k75) (bruijn vals 0 2))
V_CALL(VGetArg(upenv, 6-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k75, env)}),
      _var2);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 5) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda20, got ~D~N"
  "-- expected 5~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda20, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 5, 5, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // (letrec 1 ((close _V0vanity_V0compiler_V0cps_V20_lambda21)) ((bruijn loop 0 0) (bruijn ##k.379 1 0) '() (bruijn vals 1 3)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda21, env)});
V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VNULL,
      upenv->vars[3]);
    }
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k92" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k92, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.401 4 0) (##inline ##sys.cons 'letrec (##inline ##sys.cons (bruijn ##x.404 1 0) (##inline ##sys.cons (bruijn ##x.406 0 0) '()))))
V_CALL(upenv->up->up->up->vars[0], runtime,
      VInlineCons(
        _V0letrec,
        VInlineCons(
        upenv->vars[0],
        VInlineCons(
        _var0,
        VNULL))));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k91" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k91, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn iter2 6 6) (close _V0vanity_V0compiler_V0cps_V20_k92) (bruijn body 5 2) (bruijn k 5 4))
V_CALL(VGetArg(upenv, 6-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k92, env)}),
      VGetArg(upenv, 5-1, 2),
      VGetArg(upenv, 5-1, 4));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k90" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k90, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn map 8 23) (close _V0vanity_V0compiler_V0cps_V20_k91) (bruijn list 8 17) (bruijn args 4 1) (bruijn ##x.407 0 0))
V_CALL(VGetArg(upenv, 8-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k91, env)}),
      VGetArg(upenv, 8-1, 17),
      upenv->up->up->up->vars[1],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k99" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k99, runtime, upenv, 1, argc, _var0) {
  // ((bruijn iter2 11 6) (bruijn ##k.401 8 0) (bruijn ##x.409 3 0) (##inline ##sys.cons 'continuation (##inline ##sys.cons (##inline ##sys.cons (bruijn x 4 0) '()) (##inline ##sys.cons (bruijn ##x.414 0 0) '()))))
V_CALL(VGetArg(upenv, 11-1, 6), runtime,
      VGetArg(upenv, 8-1, 0),
      upenv->up->up->vars[0],
      VInlineCons(
        _V0continuation,
        VInlineCons(
        VInlineCons(
        upenv->up->up->up->vars[0],
        VNULL),
        VInlineCons(
        _var0,
        VNULL))));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k98" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k98, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn loop 8 0) (close _V0vanity_V0compiler_V0cps_V20_k99) (bruijn ##x.415 1 0) (bruijn ##x.416 0 0))
V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k99, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k97" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k97, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 12 7) (close _V0vanity_V0compiler_V0cps_V20_k98) (bruijn vals 6 2))
V_CALL(VGetArg(upenv, 12-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k98, env)}),
      VGetArg(upenv, 6-1, 2));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k96" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k96, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 11 21) (close _V0vanity_V0compiler_V0cps_V20_k97) (bruijn x 1 0) (bruijn done-vals 5 1))
V_CALL(VGetArg(upenv, 11-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k97, env)}),
      upenv->vars[0],
      VGetArg(upenv, 5-1, 1));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k95" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k95, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn car 10 8) (close _V0vanity_V0compiler_V0cps_V20_k96) (bruijn vals 4 2))
V_CALL(VGetArg(upenv, 10-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k96, env)}),
      upenv->up->up->up->vars[2]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k103" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k103, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 8 0) (bruijn ##k.401 7 0) (bruijn ##x.417 1 0) (bruijn ##x.418 0 0))
V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VGetArg(upenv, 7-1, 0),
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k102" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k102, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 12 7) (close _V0vanity_V0compiler_V0cps_V20_k103) (bruijn vals 6 2))
V_CALL(VGetArg(upenv, 12-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k103, env)}),
      VGetArg(upenv, 6-1, 2));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k101" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k101, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 11 21) (close _V0vanity_V0compiler_V0cps_V20_k102) (bruijn ##x.419 0 0) (bruijn done-vals 5 1))
V_CALL(VGetArg(upenv, 11-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k102, env)}),
      _var0,
      VGetArg(upenv, 5-1, 1));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k100" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k100, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn iter-atom 7 2) (close _V0vanity_V0compiler_V0cps_V20_k101) (bruijn ##x.420 0 0))
V_CALL(VGetArg(upenv, 7-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k101, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k94" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k94, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.408 0 0) ((bruijn gensym 9 1) (close _V0vanity_V0compiler_V0cps_V20_k95) (##string ##string.1487)) ((bruijn car 9 8) (close _V0vanity_V0compiler_V0cps_V20_k100) (bruijn vals 3 2)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k95, env)}),
      VEncodePointer(&_V10string_D1487.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 9-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k100, env)}),
      upenv->up->up->vars[2]);
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k93" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k93, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn application? 5 0) (close _V0vanity_V0compiler_V0cps_V20_k94) (bruijn ##x.421 0 0))
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k94, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k89" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k89, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.402 0 0) ((bruijn reverse 7 25) (close _V0vanity_V0compiler_V0cps_V20_k90) (bruijn done-vals 1 1)) ((bruijn car 7 8) (close _V0vanity_V0compiler_V0cps_V20_k93) (bruijn vals 1 2)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 7-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k90, env)}),
      upenv->vars[1]);
} else {
V_CALL(VGetArg(upenv, 7-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k93, env)}),
      upenv->vars[2]);
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda23, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda23, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 6 6) (close _V0vanity_V0compiler_V0cps_V20_k89) (bruijn vals 0 2))
V_CALL(VGetArg(upenv, 6-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k89, env)}),
      _var2);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 5) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda22, got ~D~N"
  "-- expected 5~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda22, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 5, 5, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // (letrec 1 ((close _V0vanity_V0compiler_V0cps_V20_lambda23)) ((bruijn loop 0 0) (bruijn ##k.400 1 0) '() (bruijn vals 1 3)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda23, env)});
V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VNULL,
      upenv->vars[3]);
    }
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k107" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k107, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.423 4 0) (##inline ##sys.cons (bruijn ##x.425 1 0) (##inline ##sys.cons (bruijn cont 6 2) (bruijn ##x.427 0 0))))
V_CALL(upenv->up->up->up->vars[0], runtime,
      VInlineCons(
        upenv->vars[0],
        VInlineCons(
        VGetArg(upenv, 6-1, 2),
        _var0)));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k106" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k106, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 9 7) (close _V0vanity_V0compiler_V0cps_V20_k107) (bruijn appl 1 0))
V_CALL(VGetArg(upenv, 9-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k107, env)}),
      upenv->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k105" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k105, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn car 8 8) (close _V0vanity_V0compiler_V0cps_V20_k106) (bruijn appl 0 0))
V_CALL(VGetArg(upenv, 8-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k106, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k114" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k114, runtime, upenv, 1, argc, _var0) {
  // ((bruijn iter2 11 6) (bruijn ##k.423 8 0) (bruijn ##x.429 3 0) (##inline ##sys.cons 'continuation (##inline ##sys.cons (##inline ##sys.cons (bruijn x 4 0) '()) (##inline ##sys.cons (bruijn ##x.434 0 0) '()))))
V_CALL(VGetArg(upenv, 11-1, 6), runtime,
      VGetArg(upenv, 8-1, 0),
      upenv->up->up->vars[0],
      VInlineCons(
        _V0continuation,
        VInlineCons(
        VInlineCons(
        upenv->up->up->up->vars[0],
        VNULL),
        VInlineCons(
        _var0,
        VNULL))));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k113" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k113, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn loop 8 0) (close _V0vanity_V0compiler_V0cps_V20_k114) (bruijn ##x.435 1 0) (bruijn ##x.436 0 0))
V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k114, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k112" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k112, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 12 7) (close _V0vanity_V0compiler_V0cps_V20_k113) (bruijn args 6 2))
V_CALL(VGetArg(upenv, 12-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k113, env)}),
      VGetArg(upenv, 6-1, 2));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k111" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k111, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 11 21) (close _V0vanity_V0compiler_V0cps_V20_k112) (bruijn x 1 0) (bruijn appl 5 1))
V_CALL(VGetArg(upenv, 11-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k112, env)}),
      upenv->vars[0],
      VGetArg(upenv, 5-1, 1));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k110" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k110, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn car 10 8) (close _V0vanity_V0compiler_V0cps_V20_k111) (bruijn args 4 2))
V_CALL(VGetArg(upenv, 10-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k111, env)}),
      upenv->up->up->up->vars[2]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k118" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k118, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 8 0) (bruijn ##k.423 7 0) (bruijn ##x.437 1 0) (bruijn ##x.438 0 0))
V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VGetArg(upenv, 7-1, 0),
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k117" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k117, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 12 7) (close _V0vanity_V0compiler_V0cps_V20_k118) (bruijn args 6 2))
V_CALL(VGetArg(upenv, 12-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k118, env)}),
      VGetArg(upenv, 6-1, 2));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k116" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k116, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 11 21) (close _V0vanity_V0compiler_V0cps_V20_k117) (bruijn ##x.439 0 0) (bruijn appl 5 1))
V_CALL(VGetArg(upenv, 11-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k117, env)}),
      _var0,
      VGetArg(upenv, 5-1, 1));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k115" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k115, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn iter-atom 7 2) (close _V0vanity_V0compiler_V0cps_V20_k116) (bruijn ##x.440 0 0))
V_CALL(VGetArg(upenv, 7-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k116, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k109" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k109, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.428 0 0) ((bruijn gensym 9 1) (close _V0vanity_V0compiler_V0cps_V20_k110) (##string ##string.1487)) ((bruijn car 9 8) (close _V0vanity_V0compiler_V0cps_V20_k115) (bruijn args 3 2)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k110, env)}),
      VEncodePointer(&_V10string_D1487.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 9-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k115, env)}),
      upenv->up->up->vars[2]);
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k108" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k108, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn application? 5 0) (close _V0vanity_V0compiler_V0cps_V20_k109) (bruijn ##x.441 0 0))
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k109, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k104" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k104, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.424 0 0) ((bruijn reverse 7 25) (close _V0vanity_V0compiler_V0cps_V20_k105) (bruijn appl 1 1)) ((bruijn car 7 8) (close _V0vanity_V0compiler_V0cps_V20_k108) (bruijn args 1 2)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 7-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k105, env)}),
      upenv->vars[1]);
} else {
V_CALL(VGetArg(upenv, 7-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k108, env)}),
      upenv->vars[2]);
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda25, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda25, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 6 6) (close _V0vanity_V0compiler_V0cps_V20_k104) (bruijn args 0 2))
V_CALL(VGetArg(upenv, 6-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k104, env)}),
      _var2);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda24, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda24, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (letrec 1 ((close _V0vanity_V0compiler_V0cps_V20_lambda25)) ((bruijn loop 0 0) (bruijn ##k.422 1 0) '() (bruijn args 1 1)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda25, env)});
V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VNULL,
      upenv->vars[1]);
    }
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k129" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k129, runtime, upenv, 1, argc, _var0) {
  // ((bruijn iter2 15 6) (bruijn ##k.591 2 0) (bruijn x 6 0) (##inline ##sys.cons 'continuation (##inline ##sys.cons (##inline ##sys.cons (bruijn ##x.597 1 0) '()) (##inline ##sys.cons (bruijn ##x.596 0 0) '()))))
V_CALL(VGetArg(upenv, 15-1, 6), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 6-1, 0),
      VInlineCons(
        _V0continuation,
        VInlineCons(
        VInlineCons(
        upenv->vars[0],
        VNULL),
        VInlineCons(
        _var0,
        VNULL))));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k128" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k128, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn iter2 14 6) (close _V0vanity_V0compiler_V0cps_V20_k129) (bruijn y 3 0) (bruijn cont 13 2))
V_CALL(VGetArg(upenv, 14-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k129, env)}),
      upenv->up->up->vars[0],
      VGetArg(upenv, 13-1, 2));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k127" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k127, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.590 1 0) ((bruijn gensym 16 1) (close _V0vanity_V0compiler_V0cps_V20_k128) (##string ##string.1488)) ((bruijn iter2 13 6) (bruijn ##k.591 0 0) (bruijn y 2 0) (bruijn cont 12 2)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k128, env)}),
      VEncodePointer(&_V10string_D1488.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 13-1, 6), runtime,
      _var0,
      upenv->up->vars[0],
      VGetArg(upenv, 12-1, 2));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k130" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k130, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.24 10 1) (bruijn ##k.584 7 0) (bruijn ##x.589 0 0))
V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k126" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k126, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k127) (close _V0vanity_V0compiler_V0cps_V20_k130))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k127, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k130, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k125" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k125, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.28 1 0))) ((bruijn application? 11 0) (close _V0vanity_V0compiler_V0cps_V20_k126) (bruijn x 2 0)) ((bruijn ##k.584 5 0) #f))
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        upenv->vars[0])))) {
V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k126, env)}),
      upenv->up->vars[0]);
} else {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k124" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k124, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.28 0 0)) ((close _V0vanity_V0compiler_V0cps_V20_k125) (##inline ##sys.car (bruijn ##expr.28 0 0))) ((bruijn ##k.584 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k125, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k123" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k123, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k124) (##inline ##sys.cdr (bruijn ##expr.27 1 0)))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k124, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k122" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k122, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.27 0 0)) ((close _V0vanity_V0compiler_V0cps_V20_k123) (##inline ##sys.car (bruijn ##expr.27 0 0))) ((bruijn ##k.584 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k123, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k121" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k121, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.585 0 0) ((close _V0vanity_V0compiler_V0cps_V20_k122) (##inline ##sys.cdr (bruijn ##expr.26 2 0))) ((bruijn ##k.584 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k122, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k120" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k120, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.26 1 0)) ((bruijn equal? 9 27) (close _V0vanity_V0compiler_V0cps_V20_k121) 'begin (##inline ##sys.car (bruijn ##expr.26 1 0))) ((bruijn ##k.584 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 9-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k121, env)}),
      _V0begin,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k143" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k143, runtime, upenv, 1, argc, _var0) {
  // ((bruijn iter2 19 6) (bruijn ##k.552 2 0) (bruijn p 8 0) (##inline ##sys.cons 'continuation (##inline ##sys.cons (##inline ##sys.cons (bruijn sym 1 0) '()) (##inline ##sys.cons (bruijn ##x.557 0 0) '()))))
V_CALL(VGetArg(upenv, 19-1, 6), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 8-1, 0),
      VInlineCons(
        _V0continuation,
        VInlineCons(
        VInlineCons(
        upenv->vars[0],
        VNULL),
        VInlineCons(
        _var0,
        VNULL))));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k142" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k142, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn iter2 18 6) (close _V0vanity_V0compiler_V0cps_V20_k143) (##inline ##sys.cons 'if (##inline ##sys.cons (bruijn sym 0 0) (##inline ##sys.cons (bruijn x 5 0) (##inline ##sys.cons (bruijn y 3 0) '())))) (bruijn cont 17 2))
V_CALL(VGetArg(upenv, 18-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k143, env)}),
      VInlineCons(
        _V0if,
        VInlineCons(
        _var0,
        VInlineCons(
        VGetArg(upenv, 5-1, 0),
        VInlineCons(
        upenv->up->up->vars[0],
        VNULL)))),
      VGetArg(upenv, 17-1, 2));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k147" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k147, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.552 4 0) (##inline ##sys.cons 'if (##inline ##sys.cons (bruijn p 10 0) (##inline ##sys.cons (bruijn ##x.566 1 0) (##inline ##sys.cons (bruijn ##x.568 0 0) '())))))
V_CALL(upenv->up->up->up->vars[0], runtime,
      VInlineCons(
        _V0if,
        VInlineCons(
        VGetArg(upenv, 10-1, 0),
        VInlineCons(
        upenv->vars[0],
        VInlineCons(
        _var0,
        VNULL)))));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k146" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k146, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn iter2 20 6) (close _V0vanity_V0compiler_V0cps_V20_k147) (bruijn y 5 0) (bruijn cont 19 2))
V_CALL(VGetArg(upenv, 20-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k147, env)}),
      VGetArg(upenv, 5-1, 0),
      VGetArg(upenv, 19-1, 2));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k150(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k150" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k150, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.552 5 0) (##inline ##sys.cons (##inline ##sys.cons 'continuation (##inline ##sys.cons (##inline ##sys.cons (bruijn k 2 0) '()) (##inline ##sys.cons (##inline ##sys.cons 'if (##inline ##sys.cons (bruijn p 11 0) (##inline ##sys.cons (bruijn ##x.577 1 0) (##inline ##sys.cons (bruijn ##x.579 0 0) '())))) '()))) (##inline ##sys.cons (bruijn cont 21 2) '())))
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VInlineCons(
        VInlineCons(
        _V0continuation,
        VInlineCons(
        VInlineCons(
        upenv->up->vars[0],
        VNULL),
        VInlineCons(
        VInlineCons(
        _V0if,
        VInlineCons(
        VGetArg(upenv, 11-1, 0),
        VInlineCons(
        upenv->vars[0],
        VInlineCons(
        _var0,
        VNULL)))),
        VNULL))),
        VInlineCons(
        VGetArg(upenv, 21-1, 2),
        VNULL)));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k149" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k149, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn iter2 21 6) (close _V0vanity_V0compiler_V0cps_V20_k150) (bruijn y 6 0) (bruijn k 1 0))
V_CALL(VGetArg(upenv, 21-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k150, env)}),
      VGetArg(upenv, 6-1, 0),
      upenv->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k148" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k148, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn iter2 20 6) (close _V0vanity_V0compiler_V0cps_V20_k149) (bruijn x 7 0) (bruijn k 0 0))
V_CALL(VGetArg(upenv, 20-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k149, env)}),
      VGetArg(upenv, 7-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k145" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k145, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.563 0 0) ((bruijn iter2 19 6) (close _V0vanity_V0compiler_V0cps_V20_k146) (bruijn x 6 0) (bruijn cont 18 2)) ((bruijn gensym 22 1) (close _V0vanity_V0compiler_V0cps_V20_k148) (##string ##string.1485)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 19-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k146, env)}),
      VGetArg(upenv, 6-1, 0),
      VGetArg(upenv, 18-1, 2));
} else {
V_CALL(VGetArg(upenv, 22-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k148, env)}),
      VEncodePointer(&_V10string_D1485.sym, VPOINTER_OTHER));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k151" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k151, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.580 0 0) ((bruijn iter2 19 6) (bruijn ##k.552 2 0) (bruijn y 4 0) (bruijn cont 18 2)) ((bruijn iter2 19 6) (bruijn ##k.552 2 0) (bruijn x 6 0) (bruijn cont 18 2)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 19-1, 6), runtime,
      upenv->up->vars[0],
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 18-1, 2));
} else {
V_CALL(VGetArg(upenv, 19-1, 6), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 6-1, 0),
      VGetArg(upenv, 18-1, 2));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k144(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k144" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k144, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.562 0 0) ((bruijn symbol? 21 20) (close _V0vanity_V0compiler_V0cps_V20_k145) (bruijn cont 17 2)) ((bruijn eq? 21 0) (close _V0vanity_V0compiler_V0cps_V20_k151) (bruijn p 7 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 21-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k145, env)}),
      VGetArg(upenv, 17-1, 2));
} else {
V_CALL(VGetArg(upenv, 21-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k151, env)}),
      VGetArg(upenv, 7-1, 0),
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k141" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k141, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.551 1 0) ((bruijn gensym 20 1) (close _V0vanity_V0compiler_V0cps_V20_k142) (##string ##string.1489)) ((bruijn symbol? 20 20) (close _V0vanity_V0compiler_V0cps_V20_k144) (bruijn p 6 0)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 20-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k142, env)}),
      VEncodePointer(&_V10string_D1489.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 20-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k144, env)}),
      VGetArg(upenv, 6-1, 0));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k152" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k152, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.24 14 1) (bruijn ##k.544 9 0) (bruijn ##x.550 0 0))
V_CALL(VGetArg(upenv, 14-1, 1), runtime,
      VGetArg(upenv, 9-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k140(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k140" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k140, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k141) (close _V0vanity_V0compiler_V0cps_V20_k152))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k141, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k152, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k139" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k139, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.32 1 0))) ((bruijn application? 15 0) (close _V0vanity_V0compiler_V0cps_V20_k140) (bruijn p 4 0)) ((bruijn ##k.544 7 0) #f))
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        upenv->vars[0])))) {
V_CALL(VGetArg(upenv, 15-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k140, env)}),
      upenv->up->up->up->vars[0]);
} else {
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k138" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k138, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.32 0 0)) ((close _V0vanity_V0compiler_V0cps_V20_k139) (##inline ##sys.car (bruijn ##expr.32 0 0))) ((bruijn ##k.544 6 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k139, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k137" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k137, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k138) (##inline ##sys.cdr (bruijn ##expr.31 1 0)))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k138, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k136" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k136, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.31 0 0)) ((close _V0vanity_V0compiler_V0cps_V20_k137) (##inline ##sys.car (bruijn ##expr.31 0 0))) ((bruijn ##k.544 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k137, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k135" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k135, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k136) (##inline ##sys.cdr (bruijn ##expr.30 1 0)))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k136, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k134" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k134, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.30 0 0)) ((close _V0vanity_V0compiler_V0cps_V20_k135) (##inline ##sys.car (bruijn ##expr.30 0 0))) ((bruijn ##k.544 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k135, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k133" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k133, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.545 0 0) ((close _V0vanity_V0compiler_V0cps_V20_k134) (##inline ##sys.cdr (bruijn ##expr.29 2 0))) ((bruijn ##k.544 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k134, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k132" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k132, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.29 1 0)) ((bruijn equal? 11 27) (close _V0vanity_V0compiler_V0cps_V20_k133) 'if (##inline ##sys.car (bruijn ##expr.29 1 0))) ((bruijn ##k.544 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 11-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k133, env)}),
      _V0if,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k163(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k163" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k163, runtime, upenv, 1, argc, _var0) {
  // ((bruijn iter2 19 6) (bruijn ##k.528 2 0) (bruijn x 6 0) (##inline ##sys.cons 'continuation (##inline ##sys.cons (##inline ##sys.cons (bruijn sym 1 0) '()) (##inline ##sys.cons (bruijn ##x.533 0 0) '()))))
V_CALL(VGetArg(upenv, 19-1, 6), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 6-1, 0),
      VInlineCons(
        _V0continuation,
        VInlineCons(
        VInlineCons(
        upenv->vars[0],
        VNULL),
        VInlineCons(
        _var0,
        VNULL))));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k162(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k162" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k162, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn iter2 18 6) (close _V0vanity_V0compiler_V0cps_V20_k163) (##inline ##sys.cons 'or (##inline ##sys.cons (bruijn sym 0 0) (##inline ##sys.cons (bruijn y 3 0) '()))) (bruijn cont 17 2))
V_CALL(VGetArg(upenv, 18-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k163, env)}),
      VInlineCons(
        _V0or,
        VInlineCons(
        _var0,
        VInlineCons(
        upenv->up->up->vars[0],
        VNULL))),
      VGetArg(upenv, 17-1, 2));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k161(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k161" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k161, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.527 1 0) ((bruijn gensym 20 1) (close _V0vanity_V0compiler_V0cps_V20_k162) (##string ##string.1489)) ((bruijn iter2 17 6) (bruijn ##k.528 0 0) (##inline ##sys.cons 'if (##inline ##sys.cons (bruijn x 4 0) (##inline ##sys.cons (bruijn x 4 0) (##inline ##sys.cons (bruijn y 2 0) '())))) (bruijn cont 16 2)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 20-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k162, env)}),
      VEncodePointer(&_V10string_D1489.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 17-1, 6), runtime,
      _var0,
      VInlineCons(
        _V0if,
        VInlineCons(
        upenv->up->up->up->vars[0],
        VInlineCons(
        upenv->up->up->up->vars[0],
        VInlineCons(
        upenv->up->vars[0],
        VNULL)))),
      VGetArg(upenv, 16-1, 2));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k164" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k164, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.24 14 1) (bruijn ##k.521 7 0) (bruijn ##x.526 0 0))
V_CALL(VGetArg(upenv, 14-1, 1), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k160" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k160, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k161) (close _V0vanity_V0compiler_V0cps_V20_k164))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k161, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k164, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k159(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k159" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k159, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.35 1 0))) ((bruijn application? 15 0) (close _V0vanity_V0compiler_V0cps_V20_k160) (bruijn x 2 0)) ((bruijn ##k.521 5 0) #f))
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        upenv->vars[0])))) {
V_CALL(VGetArg(upenv, 15-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k160, env)}),
      upenv->up->vars[0]);
} else {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k158(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k158" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k158, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.35 0 0)) ((close _V0vanity_V0compiler_V0cps_V20_k159) (##inline ##sys.car (bruijn ##expr.35 0 0))) ((bruijn ##k.521 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k159, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k157(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k157" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k157, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k158) (##inline ##sys.cdr (bruijn ##expr.34 1 0)))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k158, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k156" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k156, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.34 0 0)) ((close _V0vanity_V0compiler_V0cps_V20_k157) (##inline ##sys.car (bruijn ##expr.34 0 0))) ((bruijn ##k.521 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k157, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k155(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k155" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k155, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.522 0 0) ((close _V0vanity_V0compiler_V0cps_V20_k156) (##inline ##sys.cdr (bruijn ##expr.33 2 0))) ((bruijn ##k.521 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k156, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k154(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k154" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k154, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.33 1 0)) ((bruijn equal? 13 27) (close _V0vanity_V0compiler_V0cps_V20_k155) 'or (##inline ##sys.car (bruijn ##expr.33 1 0))) ((bruijn ##k.521 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 13-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k155, env)}),
      _V0or,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k178(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k178" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k178, runtime, upenv, 1, argc, _var0) {
  // ((bruijn iter2 24 6) (bruijn ##k.508 1 0) (bruijn val 3 0) (##inline ##sys.cons 'continuation (##inline ##sys.cons (##inline ##sys.cons (bruijn x 7 0) '()) (##inline ##sys.cons (bruijn ##x.513 0 0) '()))))
V_CALL(VGetArg(upenv, 24-1, 6), runtime,
      upenv->vars[0],
      upenv->up->up->vars[0],
      VInlineCons(
        _V0continuation,
        VInlineCons(
        VInlineCons(
        VGetArg(upenv, 7-1, 0),
        VNULL),
        VInlineCons(
        _var0,
        VNULL))));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k180(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k180" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k180, runtime, upenv, 1, argc, _var0) {
  // ((bruijn iter-let 25 3) (bruijn ##k.508 2 0) (bruijn ##x.514 1 0) (bruijn body 6 0) (bruijn ##x.515 0 0) (bruijn cont 24 2))
V_CALL(VGetArg(upenv, 25-1, 3), runtime,
      upenv->up->vars[0],
      upenv->vars[0],
      VGetArg(upenv, 6-1, 0),
      _var0,
      VGetArg(upenv, 24-1, 2));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k179(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k179" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k179, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn list 27 17) (close _V0vanity_V0compiler_V0cps_V20_k180) (bruijn val 3 0))
V_CALL(VGetArg(upenv, 27-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k180, env)}),
      upenv->up->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k177(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k177" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k177, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.507 1 0) ((bruijn iter2 23 6) (close _V0vanity_V0compiler_V0cps_V20_k178) (bruijn body 4 0) (bruijn cont 22 2)) ((bruijn list 26 17) (close _V0vanity_V0compiler_V0cps_V20_k179) (bruijn x 6 0)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 23-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k178, env)}),
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 22-1, 2));
} else {
V_CALL(VGetArg(upenv, 26-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k179, env)}),
      VGetArg(upenv, 6-1, 0));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k181(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k181" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k181, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.24 20 1) (bruijn ##k.496 11 0) (bruijn ##x.506 0 0))
V_CALL(VGetArg(upenv, 20-1, 1), runtime,
      VGetArg(upenv, 11-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k176(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k176" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k176, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k177) (close _V0vanity_V0compiler_V0cps_V20_k181))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k177, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k181, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k175(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k175" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k175, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.41 1 0))) ((bruijn application? 21 0) (close _V0vanity_V0compiler_V0cps_V20_k176) (bruijn val 0 0)) ((bruijn ##k.496 9 0) #f))
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        upenv->vars[0])))) {
V_CALL(VGetArg(upenv, 21-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k176, env)}),
      _var0);
} else {
V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k174(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k174" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k174, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.41 0 0)) ((close _V0vanity_V0compiler_V0cps_V20_k175) (##inline ##sys.car (bruijn ##expr.41 0 0))) ((bruijn ##k.496 8 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k175, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k173(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k173" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k173, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.40 1 0))) ((close _V0vanity_V0compiler_V0cps_V20_k174) (##inline ##sys.cdr (bruijn ##expr.36 8 0))) ((bruijn ##k.496 7 0) #f))
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        upenv->vars[0])))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k174, env, runtime,
      VInlineCdr(
        VGetArg(upenv, 8-1, 0)));
} else {
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k172(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k172" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k172, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.40 0 0)) ((close _V0vanity_V0compiler_V0cps_V20_k173) (##inline ##sys.car (bruijn ##expr.40 0 0))) ((bruijn ##k.496 6 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k173, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k171(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k171" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k171, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.39 1 0))) ((close _V0vanity_V0compiler_V0cps_V20_k172) (##inline ##sys.cdr (bruijn ##expr.38 2 0))) ((bruijn ##k.496 5 0) #f))
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        upenv->vars[0])))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k172, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k170(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k170" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k170, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.39 0 0)) ((close _V0vanity_V0compiler_V0cps_V20_k171) (##inline ##sys.car (bruijn ##expr.39 0 0))) ((bruijn ##k.496 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k171, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k169(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k169" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k169, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.38 0 0)) ((close _V0vanity_V0compiler_V0cps_V20_k170) (##inline ##sys.car (bruijn ##expr.38 0 0))) ((bruijn ##k.496 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k170, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k168(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k168" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k168, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.498 0 0) ((close _V0vanity_V0compiler_V0cps_V20_k169) (##inline ##sys.cdr (bruijn ##expr.37 1 0))) ((bruijn ##k.496 2 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k169, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k167(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k167" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k167, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.37 0 0)) ((bruijn equal? 16 27) (close _V0vanity_V0compiler_V0cps_V20_k168) 'lambda (##inline ##sys.car (bruijn ##expr.37 0 0))) ((bruijn ##k.496 1 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL(VGetArg(upenv, 16-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k168, env)}),
      _V0lambda,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k166(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k166" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k166, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.36 1 0)) ((close _V0vanity_V0compiler_V0cps_V20_k167) (##inline ##sys.car (bruijn ##expr.36 1 0))) ((bruijn ##k.496 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k167, env, runtime,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k188(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k188" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k188, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.24 16 1) (bruijn ##k.486 5 0) (bruijn ##x.492 0 0))
V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k187(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k187" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k187, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.45 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.45 0 0))) ((bruijn iter-let 18 3) (close _V0vanity_V0compiler_V0cps_V20_k188) (##inline ##sys.car (bruijn ##expr.44 1 0)) (##inline ##sys.car (bruijn ##expr.45 0 0)) (##inline ##sys.cdr (bruijn ##expr.42 5 0)) (bruijn cont 17 2)) ((bruijn ##k.486 4 0) #f)) ((bruijn ##k.486 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 18-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k188, env)}),
      VInlineCar(
        upenv->vars[0]),
      VInlineCar(
        _var0),
      VInlineCdr(
        VGetArg(upenv, 5-1, 0)),
      VGetArg(upenv, 17-1, 2));
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k186(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k186" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k186, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.44 0 0)) ((close _V0vanity_V0compiler_V0cps_V20_k187) (##inline ##sys.cdr (bruijn ##expr.44 0 0))) ((bruijn ##k.486 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k187, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k185(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k185" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k185, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.488 0 0) ((close _V0vanity_V0compiler_V0cps_V20_k186) (##inline ##sys.cdr (bruijn ##expr.43 1 0))) ((bruijn ##k.486 2 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k186, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k184(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k184" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k184, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.43 0 0)) ((bruijn equal? 18 27) (close _V0vanity_V0compiler_V0cps_V20_k185) 'lambda (##inline ##sys.car (bruijn ##expr.43 0 0))) ((bruijn ##k.486 1 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL(VGetArg(upenv, 18-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k185, env)}),
      _V0lambda,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k183(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k183" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k183, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.42 1 0)) ((close _V0vanity_V0compiler_V0cps_V20_k184) (##inline ##sys.car (bruijn ##expr.42 1 0))) ((bruijn ##k.486 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k184, env, runtime,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k195(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k195" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k195, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.51 5 1) (bruijn ##k.474 2 0) (bruijn ##expr.53 3 1) (bruijn ##x.475 1 0) (bruijn ##x.476 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->vars[0],
      upenv->up->up->vars[1],
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k194(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k194" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k194, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 27 25) (close _V0vanity_V0compiler_V0cps_V20_k195) (bruijn ##vals.50 2 3))
V_CALL(VGetArg(upenv, 27-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k195, env)}),
      upenv->up->vars[3]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k193(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k193" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k193, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.53 1 1))) ((bruijn reverse 26 25) (close _V0vanity_V0compiler_V0cps_V20_k194) (bruijn ##xs.49 1 2)) ((bruijn ##k.474 0 0) #f))
if(VDecodeBool(
VInlineNot(
        VInlinePairP(
        upenv->vars[1])))) {
V_CALL(VGetArg(upenv, 26-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k194, env)}),
      upenv->vars[2]);
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k199(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k199" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k199, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.55 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.55 0 0))) ((bruijn ##kk.52 3 1) (bruijn ##k.466 1 0) (##inline ##sys.cdr (bruijn ##expr.53 6 1)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.54 2 0)) (bruijn ##xs.49 6 2)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.55 0 0)) (bruijn ##vals.50 6 3))) ((bruijn ##k.466 1 0) #f)) ((bruijn ##k.466 1 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(upenv->up->up->vars[1], runtime,
      upenv->vars[0],
      VInlineCdr(
        VGetArg(upenv, 6-1, 1)),
      VInlineCons(
        VInlineCar(
        upenv->up->vars[0]),
        VGetArg(upenv, 6-1, 2)),
      VInlineCons(
        VInlineCar(
        _var0),
        VGetArg(upenv, 6-1, 3)));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k198(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k198" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k198, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.54 1 0)) ((close _V0vanity_V0compiler_V0cps_V20_k199) (##inline ##sys.cdr (bruijn ##expr.54 1 0))) ((bruijn ##k.466 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k199, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k202(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k202" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k202, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.51 9 1) (bruijn ##k.461 4 0) (bruijn ##expr.53 7 1) (bruijn ##x.463 1 0) (bruijn ##x.464 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 7-1, 1),
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k201(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k201" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k201, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 31 25) (close _V0vanity_V0compiler_V0cps_V20_k202) (bruijn ##vals.50 6 3))
V_CALL(VGetArg(upenv, 31-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k202, env)}),
      VGetArg(upenv, 6-1, 3));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k200(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k200" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k200, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 30 25) (close _V0vanity_V0compiler_V0cps_V20_k201) (bruijn ##xs.49 5 2))
V_CALL(VGetArg(upenv, 30-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k201, env)}),
      VGetArg(upenv, 5-1, 2));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k197(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k197" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k197, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k198) (close _V0vanity_V0compiler_V0cps_V20_k200))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k198, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k200, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda39, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda39, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0vanity_V0compiler_V0cps_V20_k197) (##inline ##sys.car (bruijn ##expr.53 3 1)))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k197, env, runtime,
      VInlineCar(
        upenv->up->up->vars[1]));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda38, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 27 26) (bruijn ##k.460 0 0) (close _V0vanity_V0compiler_V0cps_V20_lambda39))
V_CALL(VGetArg(upenv, 27-1, 26), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda39, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k196(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k196" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k196, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call-with-values 26 24) (bruijn ##k.458 1 0) (close _V0vanity_V0compiler_V0cps_V20_lambda38) (bruijn loop 2 0))
V_CALL(VGetArg(upenv, 26-1, 24), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda38, env)}),
      upenv->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda37" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda37, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda37, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((close _V0vanity_V0compiler_V0cps_V20_k193) (close _V0vanity_V0compiler_V0cps_V20_k196))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k193, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k196, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda36, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda36, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V0vanity_V0compiler_V0cps_V20_lambda37)) ((bruijn loop 0 0) (bruijn ##k.457 1 0) (##inline ##sys.car (bruijn ##expr.47 3 0)) '() '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda37, env)});
V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VInlineCar(
        upenv->up->up->vars[0]),
      VNULL,
      VNULL);
    }
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda35, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 22 26) (bruijn ##k.456 0 0) (close _V0vanity_V0compiler_V0cps_V20_lambda36))
V_CALL(VGetArg(upenv, 22-1, 26), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda36, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k204(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k204" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k204, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.24 18 1) (bruijn ##k.478 2 0) (bruijn ##x.482 0 0))
V_CALL(VGetArg(upenv, 18-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k203(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k203" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k203, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.56 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.56 0 0))) ((bruijn iter-letrec 20 4) (close _V0vanity_V0compiler_V0cps_V20_k204) (bruijn xs 1 2) (##inline ##sys.car (bruijn ##expr.56 0 0)) (bruijn vals 1 3) (bruijn cont 19 2)) ((bruijn ##k.478 1 0) #f)) ((bruijn ##k.478 1 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 20-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k204, env)}),
      upenv->vars[2],
      VInlineCar(
        _var0),
      upenv->vars[3],
      VGetArg(upenv, 19-1, 2));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda40, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda40, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((close _V0vanity_V0compiler_V0cps_V20_k203) (##inline ##sys.cdr (bruijn ##expr.47 1 0))) ((bruijn ##k.478 0 0) #f))
if(VDecodeBool(
VInlineNullP(
        _var1))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k203, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k192(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k192" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k192, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.47 0 0)) ((bruijn call-with-values 21 24) (bruijn ##k.453 2 0) (close _V0vanity_V0compiler_V0cps_V20_lambda35) (close _V0vanity_V0compiler_V0cps_V20_lambda40)) ((bruijn ##k.453 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL(VGetArg(upenv, 21-1, 24), runtime,
      upenv->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda35, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda40, env)}));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k191(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k191" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k191, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.454 0 0) ((close _V0vanity_V0compiler_V0cps_V20_k192) (##inline ##sys.cdr (bruijn ##expr.46 2 0))) ((bruijn ##k.453 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k192, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k190(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k190" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k190, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.46 1 0)) ((bruijn equal? 19 27) (close _V0vanity_V0compiler_V0cps_V20_k191) 'letrec (##inline ##sys.car (bruijn ##expr.46 1 0))) ((bruijn ##k.453 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 19-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k191, env)}),
      _V0letrec,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k206(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k206" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k206, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.24 14 1) (bruijn ##k.444 14 0) (bruijn ##x.451 0 0))
V_CALL(VGetArg(upenv, 14-1, 1), runtime,
      VGetArg(upenv, 14-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k205(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k205" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k205, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn iter-combination 16 5) (close _V0vanity_V0compiler_V0cps_V20_k206) (bruijn expr 15 1) (bruijn cont 15 2))
V_CALL(VGetArg(upenv, 16-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k206, env)}),
      VGetArg(upenv, 15-1, 1),
      VGetArg(upenv, 15-1, 2));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda34" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda34, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k190) (close _V0vanity_V0compiler_V0cps_V20_k205))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k190, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k205, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k189(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k189" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k189, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda34) (bruijn ##input.25 10 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda34, env, runtime,
      VGetArg(upenv, 10-1, 0));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda33" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda33, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k183) (close _V0vanity_V0compiler_V0cps_V20_k189))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k183, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k189, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k182(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k182" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k182, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda33) (bruijn ##input.25 8 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda33, env, runtime,
      VGetArg(upenv, 8-1, 0));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda32" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda32, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k166) (close _V0vanity_V0compiler_V0cps_V20_k182))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k166, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k182, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k165(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k165" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k165, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda32) (bruijn ##input.25 6 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda32, env, runtime,
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda31" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda31, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k154) (close _V0vanity_V0compiler_V0cps_V20_k165))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k154, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k165, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k153" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k153, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda31) (bruijn ##input.25 4 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda31, env, runtime,
      upenv->up->up->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda30" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda30, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k132) (close _V0vanity_V0compiler_V0cps_V20_k153))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k132, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k153, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k131" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k131, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda30) (bruijn ##input.25 2 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda30, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda29" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda29, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k120) (close _V0vanity_V0compiler_V0cps_V20_k131))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k120, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k131, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda28" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda28, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda29) (bruijn ##input.25 0 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda29, env, runtime,
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda27, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda27, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda28) (bruijn expr 2 1))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda28, env, runtime,
      upenv->up->vars[1]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k207(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k207" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k207, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.442 2 0) (##inline ##sys.cons (bruijn cont 2 2) (##inline ##sys.cons (bruijn ##x.601 0 0) '())))
V_CALL(upenv->up->vars[0], runtime,
      VInlineCons(
        upenv->up->vars[2],
        VInlineCons(
        _var0,
        VNULL)));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k119" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k119, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.443 0 0) ((bruijn call/cc 5 26) (bruijn ##k.442 1 0) (close _V0vanity_V0compiler_V0cps_V20_lambda27)) ((bruijn iter-atom 2 2) (close _V0vanity_V0compiler_V0cps_V20_k207) (bruijn expr 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 5-1, 26), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda27, env)}));
} else {
V_CALL(upenv->up->vars[2], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k207, env)}),
      upenv->vars[1]);
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda26, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda26, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn application? 1 0) (close _V0vanity_V0compiler_V0cps_V20_k119) (bruijn expr 0 1))
V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k119, env)}),
      _var1);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda41, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda41, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn iter2 1 6) (bruijn ##k.602 0 0) (bruijn expr 0 1) '##sys.next)
V_CALL(upenv->vars[6], runtime,
      _var0,
      _var1,
      _V10sys_Dnext);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k209(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k209" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k209, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.622 0 0) ((bruijn ##kk.1 4 1) (bruijn ##k.621 1 0) (bruijn expr 6 1)) ((bruijn ##k.621 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      VGetArg(upenv, 6-1, 1));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k208(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k208" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k208, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k208, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.3 1 0)) ((bruijn equal? 7 27) (close _V0vanity_V0compiler_V0cps_V20_k209) '##foreign.declare (##inline ##sys.car (bruijn ##expr.3 1 0))) ((bruijn ##k.621 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 7-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k209, env)}),
      _V10foreign_Ddeclare,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k216(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k216" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k216, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k216, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.1 10 1) (bruijn ##k.608 5 0) (##inline ##sys.cons '##vcore.declare (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.5 3 0)) (##inline ##sys.cons (bruijn ##x.616 0 0) '()))))
V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      VInlineCons(
        _V10vcore_Ddeclare,
        VInlineCons(
        VInlineCar(
        upenv->up->up->vars[0]),
        VInlineCons(
        _var0,
        VNULL))));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k215(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k215" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k215, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cadr 13 2) (close _V0vanity_V0compiler_V0cps_V20_k216) (bruijn ##x.617 0 0))
V_CALL(VGetArg(upenv, 13-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k216, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k214(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k214" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k214, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k214, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.6 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.6 0 0))) ((bruijn to-cps-impl 9 7) (close _V0vanity_V0compiler_V0cps_V20_k215) (##inline ##sys.car (bruijn ##expr.6 0 0))) ((bruijn ##k.608 3 0) #f)) ((bruijn ##k.608 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 9-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k215, env)}),
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k213(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k213" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k213, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k213, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.5 0 0)) ((close _V0vanity_V0compiler_V0cps_V20_k214) (##inline ##sys.cdr (bruijn ##expr.5 0 0))) ((bruijn ##k.608 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k214, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k212(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k212" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k212, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k212, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.609 0 0) ((close _V0vanity_V0compiler_V0cps_V20_k213) (##inline ##sys.cdr (bruijn ##expr.4 2 0))) ((bruijn ##k.608 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k213, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k211(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k211" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k211, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.4 1 0)) ((bruijn equal? 9 27) (close _V0vanity_V0compiler_V0cps_V20_k212) '##vcore.declare (##inline ##sys.car (bruijn ##expr.4 1 0))) ((bruijn ##k.608 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 9-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k212, env)}),
      _V10vcore_Ddeclare,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k218(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k218" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k218, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k218, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.1 6 1) (bruijn ##k.603 6 0) (bruijn ##x.606 0 0))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k217(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k217" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k217, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k217, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn to-cps-impl 6 7) (close _V0vanity_V0compiler_V0cps_V20_k218) (bruijn expr 7 1))
V_CALL(VGetArg(upenv, 6-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k218, env)}),
      VGetArg(upenv, 7-1, 1));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda45" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda45, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k211) (close _V0vanity_V0compiler_V0cps_V20_k217))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k211, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k217, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k210(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k210" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k210, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k210, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda45) (bruijn ##input.2 2 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda45, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda44" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda44, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k208) (close _V0vanity_V0compiler_V0cps_V20_k210))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k208, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k210, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda43" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda43, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda44) (bruijn ##input.2 0 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda44, env, runtime,
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda42" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda42, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda42, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda43) (bruijn expr 2 1))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda43, env, runtime,
      upenv->up->vars[1]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda3, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda3, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 8 ((close _V0vanity_V0compiler_V0cps_V20_lambda4) (close _V0vanity_V0compiler_V0cps_V20_lambda5) (close _V0vanity_V0compiler_V0cps_V20_lambda6) (close _V0vanity_V0compiler_V0cps_V20_lambda20) (close _V0vanity_V0compiler_V0cps_V20_lambda22) (close _V0vanity_V0compiler_V0cps_V20_lambda24) (close _V0vanity_V0compiler_V0cps_V20_lambda26) (close _V0vanity_V0compiler_V0cps_V20_lambda41)) ((bruijn call/cc 3 26) (bruijn ##k.293 1 0) (close _V0vanity_V0compiler_V0cps_V20_lambda42)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[8]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 8, 8, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda4, env)});
    env->vars[1] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda5, env)});
    env->vars[2] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda6, env)});
    env->vars[3] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda20, env)});
    env->vars[4] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda22, env)});
    env->vars[5] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda24, env)});
    env->vars[6] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda26, env)});
    env->vars[7] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda41, env)});
V_CALL(upenv->up->up->vars[26], runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda42, env)}));
    }
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k222(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k222" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k222, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k222, runtime, upenv, 1, argc, _var0) {
  // ((bruijn memtail 5 1) (bruijn ##k.624 4 0) (bruijn x 4 1) (bruijn ##x.627 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->up->up->vars[1],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k221(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k221" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k221, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k221, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.626 0 0) ((bruijn ##k.624 3 0) (bruijn lst 3 2)) ((bruijn cdr 5 7) (close _V0vanity_V0compiler_V0cps_V20_k222) (bruijn lst 3 2)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->vars[0], runtime,
      upenv->up->up->vars[2]);
} else {
V_CALL(VGetArg(upenv, 5-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k222, env)}),
      upenv->up->up->vars[2]);
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k220(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k220" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k220, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k220, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn equal? 4 27) (close _V0vanity_V0compiler_V0cps_V20_k221) (bruijn x 2 1) (bruijn ##x.628 0 0))
V_CALL(upenv->up->up->up->vars[27], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k221, env)}),
      upenv->up->vars[1],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k223(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k223" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k223, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k223, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.629 0 0) ((bruijn ##k.624 2 0) (bruijn lst 2 2)) ((bruijn ##k.624 2 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->vars[0], runtime,
      upenv->up->vars[2]);
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k219(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k219" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k219, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k219, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.625 0 0) ((bruijn car 3 8) (close _V0vanity_V0compiler_V0cps_V20_k220) (bruijn lst 1 2)) ((bruijn equal? 3 27) (close _V0vanity_V0compiler_V0cps_V20_k223) (bruijn x 1 1) (bruijn lst 1 2)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->vars[8], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k220, env)}),
      upenv->vars[2]);
} else {
V_CALL(upenv->up->up->vars[27], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k223, env)}),
      upenv->vars[1],
      upenv->vars[2]);
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda46" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda46, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda46, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn pair? 2 10) (close _V0vanity_V0compiler_V0cps_V20_k219) (bruijn lst 0 2))
V_CALL(upenv->up->vars[10], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k219, env)}),
      _var2);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda47" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda47, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda47, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.630 0 0) (bruijn expr 0 1))
V_CALL(_var0, runtime,
      _var1);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda48" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda48, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda48, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.631 0 0) (bruijn expr 0 1))
V_CALL(_var0, runtime,
      _var1);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k224(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k224" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k224, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k224, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.633 0 0) ((bruijn ##k.632 1 0) 0) ((bruijn ref-count 2 5) (bruijn ##k.632 1 0) (bruijn x 1 1) (bruijn body 1 3)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      VEncodeInt(0l));
} else {
V_CALL(upenv->up->vars[5], runtime,
      upenv->vars[0],
      upenv->vars[1],
      upenv->vars[3]);
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda49" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda49, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda49, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn memtail 1 1) (close _V0vanity_V0compiler_V0cps_V20_k224) (bruijn x 0 1) (bruijn args 0 2))
V_CALL(upenv->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k224, env)}),
      _var1,
      _var2);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k229(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k229" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k229, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k229, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.57 7 1) (bruijn ##k.742 4 0) (bruijn ##x.747 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->up->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k228(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k228" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k228, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k228, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.61 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.61 0 0))) ((bruijn ref-count-lambda 8 4) (close _V0vanity_V0compiler_V0cps_V20_k229) (bruijn x 7 1) (##inline ##sys.car (bruijn ##expr.60 1 0)) (##inline ##sys.car (bruijn ##expr.61 0 0))) ((bruijn ##k.742 3 0) #f)) ((bruijn ##k.742 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 8-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k229, env)}),
      VGetArg(upenv, 7-1, 1),
      VInlineCar(
        upenv->vars[0]),
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k227(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k227" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k227, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k227, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.60 0 0)) ((close _V0vanity_V0compiler_V0cps_V20_k228) (##inline ##sys.cdr (bruijn ##expr.60 0 0))) ((bruijn ##k.742 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k228, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k226(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k226" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k226, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k226, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.743 0 0) ((close _V0vanity_V0compiler_V0cps_V20_k227) (##inline ##sys.cdr (bruijn ##expr.59 2 0))) ((bruijn ##k.742 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k227, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k225(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k225" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k225, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k225, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.59 1 0)) ((bruijn equal? 6 27) (close _V0vanity_V0compiler_V0cps_V20_k226) 'lambda (##inline ##sys.car (bruijn ##expr.59 1 0))) ((bruijn ##k.742 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 6-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k226, env)}),
      _V0lambda,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k235(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k235" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k235, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k235, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.57 9 1) (bruijn ##k.733 4 0) (bruijn ##x.738 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->up->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k234(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k234" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k234, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k234, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.64 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.64 0 0))) ((bruijn ref-count-lambda 10 4) (close _V0vanity_V0compiler_V0cps_V20_k235) (bruijn x 9 1) (##inline ##sys.car (bruijn ##expr.63 1 0)) (##inline ##sys.car (bruijn ##expr.64 0 0))) ((bruijn ##k.733 3 0) #f)) ((bruijn ##k.733 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 10-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k235, env)}),
      VGetArg(upenv, 9-1, 1),
      VInlineCar(
        upenv->vars[0]),
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k233(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k233" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k233, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k233, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.63 0 0)) ((close _V0vanity_V0compiler_V0cps_V20_k234) (##inline ##sys.cdr (bruijn ##expr.63 0 0))) ((bruijn ##k.733 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k234, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k232(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k232" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k232, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k232, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.734 0 0) ((close _V0vanity_V0compiler_V0cps_V20_k233) (##inline ##sys.cdr (bruijn ##expr.62 2 0))) ((bruijn ##k.733 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k233, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k231(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k231" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k231, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k231, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.62 1 0)) ((bruijn equal? 8 27) (close _V0vanity_V0compiler_V0cps_V20_k232) 'continuation (##inline ##sys.car (bruijn ##expr.62 1 0))) ((bruijn ##k.733 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 8-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k232, env)}),
      _V0continuation,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k241(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k241" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k241, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k241, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.69 5 1) (bruijn ##k.722 2 0) (bruijn ##expr.71 3 1) (bruijn ##x.723 1 0) (bruijn ##x.724 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->vars[0],
      upenv->up->up->vars[1],
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k240(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k240" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k240, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k240, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 17 25) (close _V0vanity_V0compiler_V0cps_V20_k241) (bruijn ##body.68 2 3))
V_CALL(VGetArg(upenv, 17-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k241, env)}),
      upenv->up->vars[3]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k239(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k239" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k239, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k239, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.71 1 1))) ((bruijn reverse 16 25) (close _V0vanity_V0compiler_V0cps_V20_k240) (bruijn ##args.67 1 2)) ((bruijn ##k.722 0 0) #f))
if(VDecodeBool(
VInlineNot(
        VInlinePairP(
        upenv->vars[1])))) {
V_CALL(VGetArg(upenv, 16-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k240, env)}),
      upenv->vars[2]);
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k245(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k245" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k245, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k245, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.73 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.73 0 0))) ((bruijn ##kk.70 3 1) (bruijn ##k.714 1 0) (##inline ##sys.cdr (bruijn ##expr.71 6 1)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.72 2 0)) (bruijn ##args.67 6 2)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.73 0 0)) (bruijn ##body.68 6 3))) ((bruijn ##k.714 1 0) #f)) ((bruijn ##k.714 1 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(upenv->up->up->vars[1], runtime,
      upenv->vars[0],
      VInlineCdr(
        VGetArg(upenv, 6-1, 1)),
      VInlineCons(
        VInlineCar(
        upenv->up->vars[0]),
        VGetArg(upenv, 6-1, 2)),
      VInlineCons(
        VInlineCar(
        _var0),
        VGetArg(upenv, 6-1, 3)));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k244(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k244" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k244, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k244, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.72 1 0)) ((close _V0vanity_V0compiler_V0cps_V20_k245) (##inline ##sys.cdr (bruijn ##expr.72 1 0))) ((bruijn ##k.714 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k245, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k248(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k248" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k248, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k248, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.69 9 1) (bruijn ##k.709 4 0) (bruijn ##expr.71 7 1) (bruijn ##x.711 1 0) (bruijn ##x.712 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 7-1, 1),
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k247(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k247" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k247, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k247, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 21 25) (close _V0vanity_V0compiler_V0cps_V20_k248) (bruijn ##body.68 6 3))
V_CALL(VGetArg(upenv, 21-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k248, env)}),
      VGetArg(upenv, 6-1, 3));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k246(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k246" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k246, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k246, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 20 25) (close _V0vanity_V0compiler_V0cps_V20_k247) (bruijn ##args.67 5 2))
V_CALL(VGetArg(upenv, 20-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k247, env)}),
      VGetArg(upenv, 5-1, 2));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k243(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k243" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k243, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k243, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k244) (close _V0vanity_V0compiler_V0cps_V20_k246))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k244, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k246, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda60" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda60, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda60, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0vanity_V0compiler_V0cps_V20_k243) (##inline ##sys.car (bruijn ##expr.71 3 1)))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k243, env, runtime,
      VInlineCar(
        upenv->up->up->vars[1]));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda59" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda59, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 17 26) (bruijn ##k.708 0 0) (close _V0vanity_V0compiler_V0cps_V20_lambda60))
V_CALL(VGetArg(upenv, 17-1, 26), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda60, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k242(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k242" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k242, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k242, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call-with-values 16 24) (bruijn ##k.706 1 0) (close _V0vanity_V0compiler_V0cps_V20_lambda59) (bruijn loop 2 0))
V_CALL(VGetArg(upenv, 16-1, 24), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda59, env)}),
      upenv->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda58" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda58, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda58, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((close _V0vanity_V0compiler_V0cps_V20_k239) (close _V0vanity_V0compiler_V0cps_V20_k242))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k239, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k242, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda57" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda57, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda57, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V0vanity_V0compiler_V0cps_V20_lambda58)) ((bruijn loop 0 0) (bruijn ##k.705 1 0) (##inline ##sys.cdr (bruijn ##expr.65 5 0)) '() '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda58, env)});
V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VInlineCdr(
        VGetArg(upenv, 5-1, 0)),
      VNULL,
      VNULL);
    }
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda56" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda56, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 12 26) (bruijn ##k.704 0 0) (close _V0vanity_V0compiler_V0cps_V20_lambda57))
V_CALL(VGetArg(upenv, 12-1, 26), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda57, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k250(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k250" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k250, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k250, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.57 11 1) (bruijn ##k.726 2 0) (bruijn ##x.728 0 0))
V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k249(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k249" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k249, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k249, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn apply 13 3) (close _V0vanity_V0compiler_V0cps_V20_k250) (bruijn + 13 5) (bruijn ##x.729 0 0))
V_CALL(VGetArg(upenv, 13-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k250, env)}),
      VGetArg(upenv, 13-1, 5),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda62" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda62, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda62, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // ((bruijn ref-count-lambda 12 4) (bruijn ##k.730 0 0) (bruijn x 11 1) (bruijn args 0 1) (bruijn body 0 2))
V_CALL(VGetArg(upenv, 12-1, 4), runtime,
      _var0,
      VGetArg(upenv, 11-1, 1),
      _var1,
      _var2);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda61" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda61, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda61, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((bruijn map 12 23) (close _V0vanity_V0compiler_V0cps_V20_k249) (close _V0vanity_V0compiler_V0cps_V20_lambda62) (bruijn args 0 2) (bruijn body 0 3)) ((bruijn ##k.726 0 0) #f))
if(VDecodeBool(
VInlineNullP(
        _var1))) {
V_CALL(VGetArg(upenv, 12-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k249, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda62, env)}),
      _var2,
      _var3);
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k238(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k238" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k238, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k238, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.703 0 0) ((bruijn call-with-values 11 24) (bruijn ##k.702 1 0) (close _V0vanity_V0compiler_V0cps_V20_lambda56) (close _V0vanity_V0compiler_V0cps_V20_lambda61)) ((bruijn ##k.702 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 11-1, 24), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda56, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda61, env)}));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k237(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k237" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k237, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k237, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.65 1 0)) ((bruijn equal? 10 27) (close _V0vanity_V0compiler_V0cps_V20_k238) 'case-lambda (##inline ##sys.car (bruijn ##expr.65 1 0))) ((bruijn ##k.702 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 10-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k238, env)}),
      _V0case__lambda,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k253(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k253" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k253, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k253, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.699 0 0) ((bruijn ##kk.57 10 1) (bruijn ##k.698 1 0) 0) ((bruijn ##k.698 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      upenv->vars[0],
      VEncodeInt(0l));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k252(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k252" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k252, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k252, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.74 1 0)) ((bruijn equal? 12 27) (close _V0vanity_V0compiler_V0cps_V20_k253) '##foreign.function (##inline ##sys.car (bruijn ##expr.74 1 0))) ((bruijn ##k.698 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 12-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k253, env)}),
      _V10foreign_Dfunction,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k257(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k257" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k257, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k257, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.76 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.76 0 0))) ((bruijn ##kk.57 13 1) (bruijn ##k.691 2 0) 0) ((bruijn ##k.691 2 0) #f)) ((bruijn ##k.691 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 13-1, 1), runtime,
      upenv->up->vars[0],
      VEncodeInt(0l));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k256(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k256" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k256, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k256, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.692 0 0) ((close _V0vanity_V0compiler_V0cps_V20_k257) (##inline ##sys.cdr (bruijn ##expr.75 2 0))) ((bruijn ##k.691 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k257, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k255(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k255" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k255, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k255, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.75 1 0)) ((bruijn equal? 14 27) (close _V0vanity_V0compiler_V0cps_V20_k256) 'quote (##inline ##sys.car (bruijn ##expr.75 1 0))) ((bruijn ##k.691 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 14-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k256, env)}),
      _V0quote,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k264(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k264" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k264, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k264, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.82 5 1) (bruijn ##k.674 2 0) (bruijn ##expr.84 3 1) (bruijn ##x.675 1 0) (bruijn ##x.676 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->vars[0],
      upenv->up->up->vars[1],
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k263(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k263" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k263, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k263, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 24 25) (close _V0vanity_V0compiler_V0cps_V20_k264) (bruijn ##vals.81 2 3))
V_CALL(VGetArg(upenv, 24-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k264, env)}),
      upenv->up->vars[3]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k262(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k262" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k262, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k262, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.84 1 1))) ((bruijn reverse 23 25) (close _V0vanity_V0compiler_V0cps_V20_k263) (bruijn ##args.80 1 2)) ((bruijn ##k.674 0 0) #f))
if(VDecodeBool(
VInlineNot(
        VInlinePairP(
        upenv->vars[1])))) {
V_CALL(VGetArg(upenv, 23-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k263, env)}),
      upenv->vars[2]);
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k268(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k268" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k268, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k268, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.86 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.86 0 0))) ((bruijn ##kk.83 3 1) (bruijn ##k.666 1 0) (##inline ##sys.cdr (bruijn ##expr.84 6 1)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.85 2 0)) (bruijn ##args.80 6 2)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.86 0 0)) (bruijn ##vals.81 6 3))) ((bruijn ##k.666 1 0) #f)) ((bruijn ##k.666 1 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(upenv->up->up->vars[1], runtime,
      upenv->vars[0],
      VInlineCdr(
        VGetArg(upenv, 6-1, 1)),
      VInlineCons(
        VInlineCar(
        upenv->up->vars[0]),
        VGetArg(upenv, 6-1, 2)),
      VInlineCons(
        VInlineCar(
        _var0),
        VGetArg(upenv, 6-1, 3)));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k267(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k267" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k267, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k267, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.85 1 0)) ((close _V0vanity_V0compiler_V0cps_V20_k268) (##inline ##sys.cdr (bruijn ##expr.85 1 0))) ((bruijn ##k.666 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k268, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k271(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k271" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k271, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k271, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.82 9 1) (bruijn ##k.661 4 0) (bruijn ##expr.84 7 1) (bruijn ##x.663 1 0) (bruijn ##x.664 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 7-1, 1),
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k270(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k270" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k270, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k270, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 28 25) (close _V0vanity_V0compiler_V0cps_V20_k271) (bruijn ##vals.81 6 3))
V_CALL(VGetArg(upenv, 28-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k271, env)}),
      VGetArg(upenv, 6-1, 3));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k269(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k269" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k269, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k269, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 27 25) (close _V0vanity_V0compiler_V0cps_V20_k270) (bruijn ##args.80 5 2))
V_CALL(VGetArg(upenv, 27-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k270, env)}),
      VGetArg(upenv, 5-1, 2));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k266(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k266" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k266, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k266, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k267) (close _V0vanity_V0compiler_V0cps_V20_k269))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k267, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k269, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda70" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda70, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda70, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0vanity_V0compiler_V0cps_V20_k266) (##inline ##sys.car (bruijn ##expr.84 3 1)))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k266, env, runtime,
      VInlineCar(
        upenv->up->up->vars[1]));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda69" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda69, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 24 26) (bruijn ##k.660 0 0) (close _V0vanity_V0compiler_V0cps_V20_lambda70))
V_CALL(VGetArg(upenv, 24-1, 26), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda70, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k265(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k265" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k265, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k265, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call-with-values 23 24) (bruijn ##k.658 1 0) (close _V0vanity_V0compiler_V0cps_V20_lambda69) (bruijn loop 2 0))
V_CALL(VGetArg(upenv, 23-1, 24), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda69, env)}),
      upenv->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda68" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda68, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda68, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((close _V0vanity_V0compiler_V0cps_V20_k262) (close _V0vanity_V0compiler_V0cps_V20_k265))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k262, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k265, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda67" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda67, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda67, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V0vanity_V0compiler_V0cps_V20_lambda68)) ((bruijn loop 0 0) (bruijn ##k.657 1 0) (##inline ##sys.car (bruijn ##expr.78 3 0)) '() '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda68, env)});
V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VInlineCar(
        upenv->up->up->vars[0]),
      VNULL,
      VNULL);
    }
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda66" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda66, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 19 26) (bruijn ##k.656 0 0) (close _V0vanity_V0compiler_V0cps_V20_lambda67))
V_CALL(VGetArg(upenv, 19-1, 26), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda67, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k276(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k276" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k276, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k276, runtime, upenv, 1, argc, _var0) {
  // ((bruijn fold 24 4) (bruijn ##k.684 2 0) (bruijn + 24 5) (bruijn ##x.685 1 0) (bruijn ##x.686 0 0))
V_CALL(VGetArg(upenv, 24-1, 4), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 24-1, 5),
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda72" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda72, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda72, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ref-count 23 5) (bruijn ##k.687 0 0) (bruijn x 22 1) (bruijn val 0 1))
V_CALL(VGetArg(upenv, 23-1, 5), runtime,
      _var0,
      VGetArg(upenv, 22-1, 1),
      _var1);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k275(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k275" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k275, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k275, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn map 23 23) (close _V0vanity_V0compiler_V0cps_V20_k276) (close _V0vanity_V0compiler_V0cps_V20_lambda72) (bruijn vals 4 3))
V_CALL(VGetArg(upenv, 23-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k276, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda72, env)}),
      upenv->up->up->up->vars[3]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k274(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k274" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k274, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k274, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.683 1 0) ((bruijn ##k.684 0 0) 0) ((bruijn ref-count 21 5) (close _V0vanity_V0compiler_V0cps_V20_k275) (bruijn x 20 1) (##inline ##sys.car (bruijn ##expr.87 2 0))))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(_var0, runtime,
      VEncodeInt(0l));
} else {
V_CALL(VGetArg(upenv, 21-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k275, env)}),
      VGetArg(upenv, 20-1, 1),
      VInlineCar(
        upenv->up->vars[0]));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k277(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k277" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k277, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k277, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.57 19 1) (bruijn ##k.678 3 0) (bruijn ##x.682 0 0))
V_CALL(VGetArg(upenv, 19-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k273(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k273" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k273, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k273, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k274) (close _V0vanity_V0compiler_V0cps_V20_k277))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k274, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k277, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k272(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k272" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k272, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k272, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.87 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.87 0 0))) ((bruijn memtail 19 1) (close _V0vanity_V0compiler_V0cps_V20_k273) (bruijn x 18 1) (bruijn args 1 2)) ((bruijn ##k.678 1 0) #f)) ((bruijn ##k.678 1 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 19-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k273, env)}),
      VGetArg(upenv, 18-1, 1),
      upenv->vars[2]);
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda71" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda71, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda71, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((close _V0vanity_V0compiler_V0cps_V20_k272) (##inline ##sys.cdr (bruijn ##expr.78 1 0))) ((bruijn ##k.678 0 0) #f))
if(VDecodeBool(
VInlineNullP(
        _var1))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k272, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k261(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k261" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k261, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k261, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.78 0 0)) ((bruijn call-with-values 18 24) (bruijn ##k.653 2 0) (close _V0vanity_V0compiler_V0cps_V20_lambda66) (close _V0vanity_V0compiler_V0cps_V20_lambda71)) ((bruijn ##k.653 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL(VGetArg(upenv, 18-1, 24), runtime,
      upenv->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda66, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda71, env)}));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k260(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k260" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k260, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k260, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.654 0 0) ((close _V0vanity_V0compiler_V0cps_V20_k261) (##inline ##sys.cdr (bruijn ##expr.77 2 0))) ((bruijn ##k.653 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k261, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k259(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k259" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k259, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k259, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.77 1 0)) ((bruijn equal? 16 27) (close _V0vanity_V0compiler_V0cps_V20_k260) 'letrec (##inline ##sys.car (bruijn ##expr.77 1 0))) ((bruijn ##k.653 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 16-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k260, env)}),
      _V0letrec,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k282(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k282" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k282, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k282, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.57 18 1) (bruijn ##k.648 3 0) (bruijn ##x.649 0 0))
V_CALL(VGetArg(upenv, 18-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k281(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k281" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k281, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k281, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 20 5) (close _V0vanity_V0compiler_V0cps_V20_k282) (bruijn ##x.650 1 0) (bruijn ##x.651 0 0))
V_CALL(VGetArg(upenv, 20-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k282, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k280(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k280" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k280, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k280, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ref-count 18 5) (close _V0vanity_V0compiler_V0cps_V20_k281) (bruijn x 17 1) (##inline ##sys.cdr (bruijn ##expr.88 2 0)))
V_CALL(VGetArg(upenv, 18-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k281, env)}),
      VGetArg(upenv, 17-1, 1),
      VInlineCdr(
        upenv->up->vars[0]));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k279(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k279" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k279, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k279, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.88 1 0)) ((bruijn ref-count 17 5) (close _V0vanity_V0compiler_V0cps_V20_k280) (bruijn x 16 1) (##inline ##sys.car (bruijn ##expr.88 1 0))) ((bruijn ##k.648 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 17-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k280, env)}),
      VGetArg(upenv, 16-1, 1),
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k285(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k285" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k285, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k285, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.645 1 0) ((bruijn ##k.646 0 0) 1) ((bruijn ##k.646 0 0) 0))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(_var0, runtime,
      VEncodeInt(1l));
} else {
V_CALL(_var0, runtime,
      VEncodeInt(0l));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k287(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k287" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k287, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k287, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 22 18) (bruijn ##k.635 19 0) (##string ##string.1490))
V_CALL(VGetArg(upenv, 22-1, 18), runtime,
      VGetArg(upenv, 19-1, 0),
      VEncodePointer(&_V10string_D1490.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k286(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k286" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k286, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k286, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##kk.57 18 1) (close _V0vanity_V0compiler_V0cps_V20_k287) (bruijn ##x.644 0 0))
V_CALL(VGetArg(upenv, 18-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k287, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k284(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k284" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k284, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k284, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k285) (close _V0vanity_V0compiler_V0cps_V20_k286))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k285, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k286, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda74" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda74, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn eqv? 19 12) (close _V0vanity_V0compiler_V0cps_V20_k284) (bruijn x 17 1) (bruijn y 0 0))
V_CALL(VGetArg(upenv, 19-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k284, env)}),
      VGetArg(upenv, 17-1, 1),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k283(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k283" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k283, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k283, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda74) (bruijn ##input.58 14 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda74, env, runtime,
      VGetArg(upenv, 14-1, 0));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda73" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda73, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k279) (close _V0vanity_V0compiler_V0cps_V20_k283))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k279, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k283, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k278(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k278" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k278, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k278, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda73) (bruijn ##input.58 12 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda73, env, runtime,
      VGetArg(upenv, 12-1, 0));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda65" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda65, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k259) (close _V0vanity_V0compiler_V0cps_V20_k278))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k259, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k278, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k258(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k258" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k258, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k258, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda65) (bruijn ##input.58 10 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda65, env, runtime,
      VGetArg(upenv, 10-1, 0));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda64" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda64, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k255) (close _V0vanity_V0compiler_V0cps_V20_k258))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k255, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k258, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k254(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k254" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k254, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k254, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda64) (bruijn ##input.58 8 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda64, env, runtime,
      VGetArg(upenv, 8-1, 0));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda63" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda63, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k252) (close _V0vanity_V0compiler_V0cps_V20_k254))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k252, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k254, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k251(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k251" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k251, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k251, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda63) (bruijn ##input.58 6 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda63, env, runtime,
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda55" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda55, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k237) (close _V0vanity_V0compiler_V0cps_V20_k251))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k237, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k251, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k236(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k236" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k236, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k236, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda55) (bruijn ##input.58 4 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda55, env, runtime,
      upenv->up->up->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda54" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda54, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k231) (close _V0vanity_V0compiler_V0cps_V20_k236))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k231, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k236, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k230(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k230" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k230, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k230, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda54) (bruijn ##input.58 2 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda54, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda53" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda53, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k225) (close _V0vanity_V0compiler_V0cps_V20_k230))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k225, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k230, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda52" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda52, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda53) (bruijn ##input.58 0 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda53, env, runtime,
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda51" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda51, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda51, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda52) (bruijn expr 1 2))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda52, env, runtime,
      upenv->vars[2]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda50" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda50, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda50, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn call/cc 2 26) (bruijn ##k.634 0 0) (close _V0vanity_V0compiler_V0cps_V20_lambda51))
V_CALL(upenv->up->vars[26], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda51, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k288(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k288" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k288, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k288, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.751 0 0) ((bruijn ##k.750 1 0) #t) ((bruijn pure-in? 2 7) (bruijn ##k.750 1 0) (bruijn x 1 1) (bruijn body 1 3)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(true));
} else {
V_CALL(upenv->up->vars[7], runtime,
      upenv->vars[0],
      upenv->vars[1],
      upenv->vars[3]);
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda75" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda75, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda75, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn memtail 1 1) (close _V0vanity_V0compiler_V0cps_V20_k288) (bruijn x 0 1) (bruijn args 0 2))
V_CALL(upenv->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k288, env)}),
      _var1,
      _var2);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k293(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k293" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k293, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k293, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.89 7 1) (bruijn ##k.869 4 0) (bruijn ##x.874 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->up->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k292(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k292" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k292, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k292, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.93 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.93 0 0))) ((bruijn pure-in-lambda? 8 6) (close _V0vanity_V0compiler_V0cps_V20_k293) (bruijn x 7 1) (##inline ##sys.car (bruijn ##expr.92 1 0)) (##inline ##sys.car (bruijn ##expr.93 0 0))) ((bruijn ##k.869 3 0) #f)) ((bruijn ##k.869 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 8-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k293, env)}),
      VGetArg(upenv, 7-1, 1),
      VInlineCar(
        upenv->vars[0]),
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k291(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k291" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k291, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k291, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.92 0 0)) ((close _V0vanity_V0compiler_V0cps_V20_k292) (##inline ##sys.cdr (bruijn ##expr.92 0 0))) ((bruijn ##k.869 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k292, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k290(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k290" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k290, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k290, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.870 0 0) ((close _V0vanity_V0compiler_V0cps_V20_k291) (##inline ##sys.cdr (bruijn ##expr.91 2 0))) ((bruijn ##k.869 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k291, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k289(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k289" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k289, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k289, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.91 1 0)) ((bruijn equal? 6 27) (close _V0vanity_V0compiler_V0cps_V20_k290) 'lambda (##inline ##sys.car (bruijn ##expr.91 1 0))) ((bruijn ##k.869 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 6-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k290, env)}),
      _V0lambda,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k299(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k299" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k299, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k299, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.89 9 1) (bruijn ##k.860 4 0) (bruijn ##x.865 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->up->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k298(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k298" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k298, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k298, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.96 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.96 0 0))) ((bruijn pure-in-lambda? 10 6) (close _V0vanity_V0compiler_V0cps_V20_k299) (bruijn x 9 1) (##inline ##sys.car (bruijn ##expr.95 1 0)) (##inline ##sys.car (bruijn ##expr.96 0 0))) ((bruijn ##k.860 3 0) #f)) ((bruijn ##k.860 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 10-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k299, env)}),
      VGetArg(upenv, 9-1, 1),
      VInlineCar(
        upenv->vars[0]),
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k297(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k297" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k297, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k297, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.95 0 0)) ((close _V0vanity_V0compiler_V0cps_V20_k298) (##inline ##sys.cdr (bruijn ##expr.95 0 0))) ((bruijn ##k.860 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k298, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k296(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k296" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k296, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k296, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.861 0 0) ((close _V0vanity_V0compiler_V0cps_V20_k297) (##inline ##sys.cdr (bruijn ##expr.94 2 0))) ((bruijn ##k.860 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k297, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k295(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k295" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k295, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k295, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.94 1 0)) ((bruijn equal? 8 27) (close _V0vanity_V0compiler_V0cps_V20_k296) 'continuation (##inline ##sys.car (bruijn ##expr.94 1 0))) ((bruijn ##k.860 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 8-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k296, env)}),
      _V0continuation,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k305(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k305" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k305, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k305, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.101 5 1) (bruijn ##k.848 2 0) (bruijn ##expr.103 3 1) (bruijn ##x.849 1 0) (bruijn ##x.850 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->vars[0],
      upenv->up->up->vars[1],
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k304(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k304" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k304, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k304, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 17 25) (close _V0vanity_V0compiler_V0cps_V20_k305) (bruijn ##body.100 2 3))
V_CALL(VGetArg(upenv, 17-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k305, env)}),
      upenv->up->vars[3]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k303(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k303" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k303, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k303, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.103 1 1))) ((bruijn reverse 16 25) (close _V0vanity_V0compiler_V0cps_V20_k304) (bruijn ##args.99 1 2)) ((bruijn ##k.848 0 0) #f))
if(VDecodeBool(
VInlineNot(
        VInlinePairP(
        upenv->vars[1])))) {
V_CALL(VGetArg(upenv, 16-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k304, env)}),
      upenv->vars[2]);
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k309(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k309" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k309, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k309, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.105 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.105 0 0))) ((bruijn ##kk.102 3 1) (bruijn ##k.840 1 0) (##inline ##sys.cdr (bruijn ##expr.103 6 1)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.104 2 0)) (bruijn ##args.99 6 2)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.105 0 0)) (bruijn ##body.100 6 3))) ((bruijn ##k.840 1 0) #f)) ((bruijn ##k.840 1 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(upenv->up->up->vars[1], runtime,
      upenv->vars[0],
      VInlineCdr(
        VGetArg(upenv, 6-1, 1)),
      VInlineCons(
        VInlineCar(
        upenv->up->vars[0]),
        VGetArg(upenv, 6-1, 2)),
      VInlineCons(
        VInlineCar(
        _var0),
        VGetArg(upenv, 6-1, 3)));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k308(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k308" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k308, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k308, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.104 1 0)) ((close _V0vanity_V0compiler_V0cps_V20_k309) (##inline ##sys.cdr (bruijn ##expr.104 1 0))) ((bruijn ##k.840 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k309, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k312(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k312" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k312, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k312, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.101 9 1) (bruijn ##k.835 4 0) (bruijn ##expr.103 7 1) (bruijn ##x.837 1 0) (bruijn ##x.838 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 7-1, 1),
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k311(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k311" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k311, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k311, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 21 25) (close _V0vanity_V0compiler_V0cps_V20_k312) (bruijn ##body.100 6 3))
V_CALL(VGetArg(upenv, 21-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k312, env)}),
      VGetArg(upenv, 6-1, 3));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k310(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k310" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k310, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k310, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 20 25) (close _V0vanity_V0compiler_V0cps_V20_k311) (bruijn ##args.99 5 2))
V_CALL(VGetArg(upenv, 20-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k311, env)}),
      VGetArg(upenv, 5-1, 2));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k307(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k307" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k307, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k307, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k308) (close _V0vanity_V0compiler_V0cps_V20_k310))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k308, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k310, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda86" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda86, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda86, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0vanity_V0compiler_V0cps_V20_k307) (##inline ##sys.car (bruijn ##expr.103 3 1)))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k307, env, runtime,
      VInlineCar(
        upenv->up->up->vars[1]));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda85" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda85, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 17 26) (bruijn ##k.834 0 0) (close _V0vanity_V0compiler_V0cps_V20_lambda86))
V_CALL(VGetArg(upenv, 17-1, 26), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda86, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k306(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k306" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k306, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k306, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call-with-values 16 24) (bruijn ##k.832 1 0) (close _V0vanity_V0compiler_V0cps_V20_lambda85) (bruijn loop 2 0))
V_CALL(VGetArg(upenv, 16-1, 24), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda85, env)}),
      upenv->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda84" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda84, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda84, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((close _V0vanity_V0compiler_V0cps_V20_k303) (close _V0vanity_V0compiler_V0cps_V20_k306))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k303, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k306, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda83" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda83, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda83, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V0vanity_V0compiler_V0cps_V20_lambda84)) ((bruijn loop 0 0) (bruijn ##k.831 1 0) (##inline ##sys.cdr (bruijn ##expr.97 5 0)) '() '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda84, env)});
V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VInlineCdr(
        VGetArg(upenv, 5-1, 0)),
      VNULL,
      VNULL);
    }
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda82" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda82, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 12 26) (bruijn ##k.830 0 0) (close _V0vanity_V0compiler_V0cps_V20_lambda83))
V_CALL(VGetArg(upenv, 12-1, 26), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda83, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k314(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k314" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k314, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k314, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.89 11 1) (bruijn ##k.852 2 0) (bruijn ##x.854 0 0))
V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda88" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda88, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda88, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // (if (bruijn a 0 1) ((bruijn ##k.855 0 0) (bruijn b 0 2)) ((bruijn ##k.855 0 0) #f))
if(VDecodeBool(
_var1)) {
V_CALL(_var0, runtime,
      _var2);
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k313(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k313" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k313, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k313, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn fold 13 4) (close _V0vanity_V0compiler_V0cps_V20_k314) (close _V0vanity_V0compiler_V0cps_V20_lambda88) #t (bruijn ##x.856 0 0))
V_CALL(VGetArg(upenv, 13-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k314, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda88, env)}),
      VEncodeBool(true),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda89" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda89, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda89, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // ((bruijn pure-in-lambda? 12 6) (bruijn ##k.857 0 0) (bruijn x 11 1) (bruijn args 0 1) (bruijn body 0 2))
V_CALL(VGetArg(upenv, 12-1, 6), runtime,
      _var0,
      VGetArg(upenv, 11-1, 1),
      _var1,
      _var2);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda87" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda87, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda87, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((bruijn map 12 23) (close _V0vanity_V0compiler_V0cps_V20_k313) (close _V0vanity_V0compiler_V0cps_V20_lambda89) (bruijn args 0 2) (bruijn body 0 3)) ((bruijn ##k.852 0 0) #f))
if(VDecodeBool(
VInlineNullP(
        _var1))) {
V_CALL(VGetArg(upenv, 12-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k313, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda89, env)}),
      _var2,
      _var3);
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k302(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k302" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k302, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k302, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.829 0 0) ((bruijn call-with-values 11 24) (bruijn ##k.828 1 0) (close _V0vanity_V0compiler_V0cps_V20_lambda82) (close _V0vanity_V0compiler_V0cps_V20_lambda87)) ((bruijn ##k.828 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 11-1, 24), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda82, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda87, env)}));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k301(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k301" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k301, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k301, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.97 1 0)) ((bruijn equal? 10 27) (close _V0vanity_V0compiler_V0cps_V20_k302) 'case-lambda (##inline ##sys.car (bruijn ##expr.97 1 0))) ((bruijn ##k.828 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 10-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k302, env)}),
      _V0case__lambda,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k317(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k317" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k317, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k317, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.825 0 0) ((bruijn ##kk.89 10 1) (bruijn ##k.824 1 0) #t) ((bruijn ##k.824 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      upenv->vars[0],
      VEncodeBool(true));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k316(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k316" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k316, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k316, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.106 1 0)) ((bruijn equal? 12 27) (close _V0vanity_V0compiler_V0cps_V20_k317) '##foreign.function (##inline ##sys.car (bruijn ##expr.106 1 0))) ((bruijn ##k.824 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 12-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k317, env)}),
      _V10foreign_Dfunction,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k321(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k321" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k321, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k321, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.108 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.108 0 0))) ((bruijn ##kk.89 13 1) (bruijn ##k.817 2 0) #t) ((bruijn ##k.817 2 0) #f)) ((bruijn ##k.817 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 13-1, 1), runtime,
      upenv->up->vars[0],
      VEncodeBool(true));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k320(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k320" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k320, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k320, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.818 0 0) ((close _V0vanity_V0compiler_V0cps_V20_k321) (##inline ##sys.cdr (bruijn ##expr.107 2 0))) ((bruijn ##k.817 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k321, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k319(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k319" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k319, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k319, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.107 1 0)) ((bruijn equal? 14 27) (close _V0vanity_V0compiler_V0cps_V20_k320) 'quote (##inline ##sys.car (bruijn ##expr.107 1 0))) ((bruijn ##k.817 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 14-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k320, env)}),
      _V0quote,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k329(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k329" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k329, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k329, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.814 0 0) ((bruijn pure-in? 21 7) (bruijn ##k.813 1 0) (bruijn x 20 1) (##inline ##sys.cdr (bruijn ##expr.111 3 0))) ((bruijn ##k.813 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 21-1, 7), runtime,
      upenv->vars[0],
      VGetArg(upenv, 20-1, 1),
      VInlineCdr(
        upenv->up->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k328(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k328" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k328, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k328, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.812 1 0) ((bruijn ##k.813 0 0) #f) ((bruijn pure-in? 20 7) (close _V0vanity_V0compiler_V0cps_V20_k329) (bruijn x 19 1) (##inline ##sys.car (bruijn ##expr.110 3 0))))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(_var0, runtime,
      VEncodeBool(false));
} else {
V_CALL(VGetArg(upenv, 20-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k329, env)}),
      VGetArg(upenv, 19-1, 1),
      VInlineCar(
        upenv->up->up->vars[0]));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k330(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k330" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k330, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k330, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.89 18 1) (bruijn ##k.807 5 0) (bruijn ##x.811 0 0))
V_CALL(VGetArg(upenv, 18-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k327(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k327" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k327, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k327, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k328) (close _V0vanity_V0compiler_V0cps_V20_k330))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k328, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k330, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k326(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k326" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k326, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k326, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.111 0 0)) ((bruijn eqv? 19 12) (close _V0vanity_V0compiler_V0cps_V20_k327) (bruijn x 17 1) (##inline ##sys.car (bruijn ##expr.111 0 0))) ((bruijn ##k.807 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL(VGetArg(upenv, 19-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k327, env)}),
      VGetArg(upenv, 17-1, 1),
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k325(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k325" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k325, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k325, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.110 0 0)) ((close _V0vanity_V0compiler_V0cps_V20_k326) (##inline ##sys.cdr (bruijn ##expr.110 0 0))) ((bruijn ##k.807 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k326, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k324(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k324" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k324, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k324, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.808 0 0) ((close _V0vanity_V0compiler_V0cps_V20_k325) (##inline ##sys.cdr (bruijn ##expr.109 2 0))) ((bruijn ##k.807 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k325, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k323(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k323" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k323, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k323, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.109 1 0)) ((bruijn equal? 16 27) (close _V0vanity_V0compiler_V0cps_V20_k324) 'set! (##inline ##sys.car (bruijn ##expr.109 1 0))) ((bruijn ##k.807 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 16-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k324, env)}),
      _V0set_B,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k337(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k337" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k337, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k337, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.117 5 1) (bruijn ##k.789 2 0) (bruijn ##expr.119 3 1) (bruijn ##x.790 1 0) (bruijn ##x.791 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->vars[0],
      upenv->up->up->vars[1],
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k336(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k336" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k336, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k336, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 26 25) (close _V0vanity_V0compiler_V0cps_V20_k337) (bruijn ##vals.116 2 3))
V_CALL(VGetArg(upenv, 26-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k337, env)}),
      upenv->up->vars[3]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k335(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k335" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k335, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k335, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.119 1 1))) ((bruijn reverse 25 25) (close _V0vanity_V0compiler_V0cps_V20_k336) (bruijn ##args.115 1 2)) ((bruijn ##k.789 0 0) #f))
if(VDecodeBool(
VInlineNot(
        VInlinePairP(
        upenv->vars[1])))) {
V_CALL(VGetArg(upenv, 25-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k336, env)}),
      upenv->vars[2]);
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k341(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k341" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k341, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k341, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.121 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.121 0 0))) ((bruijn ##kk.118 3 1) (bruijn ##k.781 1 0) (##inline ##sys.cdr (bruijn ##expr.119 6 1)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.120 2 0)) (bruijn ##args.115 6 2)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.121 0 0)) (bruijn ##vals.116 6 3))) ((bruijn ##k.781 1 0) #f)) ((bruijn ##k.781 1 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(upenv->up->up->vars[1], runtime,
      upenv->vars[0],
      VInlineCdr(
        VGetArg(upenv, 6-1, 1)),
      VInlineCons(
        VInlineCar(
        upenv->up->vars[0]),
        VGetArg(upenv, 6-1, 2)),
      VInlineCons(
        VInlineCar(
        _var0),
        VGetArg(upenv, 6-1, 3)));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k340(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k340" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k340, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k340, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.120 1 0)) ((close _V0vanity_V0compiler_V0cps_V20_k341) (##inline ##sys.cdr (bruijn ##expr.120 1 0))) ((bruijn ##k.781 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k341, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k344(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k344" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k344, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k344, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.117 9 1) (bruijn ##k.776 4 0) (bruijn ##expr.119 7 1) (bruijn ##x.778 1 0) (bruijn ##x.779 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 7-1, 1),
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k343(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k343" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k343, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k343, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 30 25) (close _V0vanity_V0compiler_V0cps_V20_k344) (bruijn ##vals.116 6 3))
V_CALL(VGetArg(upenv, 30-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k344, env)}),
      VGetArg(upenv, 6-1, 3));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k342(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k342" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k342, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k342, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 29 25) (close _V0vanity_V0compiler_V0cps_V20_k343) (bruijn ##args.115 5 2))
V_CALL(VGetArg(upenv, 29-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k343, env)}),
      VGetArg(upenv, 5-1, 2));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k339(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k339" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k339, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k339, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k340) (close _V0vanity_V0compiler_V0cps_V20_k342))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k340, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k342, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda98" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda98, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda98, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0vanity_V0compiler_V0cps_V20_k339) (##inline ##sys.car (bruijn ##expr.119 3 1)))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k339, env, runtime,
      VInlineCar(
        upenv->up->up->vars[1]));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda97" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda97, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 26 26) (bruijn ##k.775 0 0) (close _V0vanity_V0compiler_V0cps_V20_lambda98))
V_CALL(VGetArg(upenv, 26-1, 26), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda98, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k338(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k338" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k338, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k338, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call-with-values 25 24) (bruijn ##k.773 1 0) (close _V0vanity_V0compiler_V0cps_V20_lambda97) (bruijn loop 2 0))
V_CALL(VGetArg(upenv, 25-1, 24), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda97, env)}),
      upenv->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda96" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda96, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda96, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((close _V0vanity_V0compiler_V0cps_V20_k335) (close _V0vanity_V0compiler_V0cps_V20_k338))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k335, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k338, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda95" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda95, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda95, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V0vanity_V0compiler_V0cps_V20_lambda96)) ((bruijn loop 0 0) (bruijn ##k.772 1 0) (##inline ##sys.car (bruijn ##expr.113 3 0)) '() '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda96, env)});
V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VInlineCar(
        upenv->up->up->vars[0]),
      VNULL,
      VNULL);
    }
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda94" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda94, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 21 26) (bruijn ##k.771 0 0) (close _V0vanity_V0compiler_V0cps_V20_lambda95))
V_CALL(VGetArg(upenv, 21-1, 26), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda95, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda100" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda100, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda100, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // (if (bruijn a 0 1) ((bruijn ##k.800 0 0) (bruijn b 0 2)) ((bruijn ##k.800 0 0) #f))
if(VDecodeBool(
_var1)) {
V_CALL(_var0, runtime,
      _var2);
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k349(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k349" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k349, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k349, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn fold 26 4) (bruijn ##k.799 2 0) (close _V0vanity_V0compiler_V0cps_V20_lambda100) (bruijn ##x.801 1 0) (bruijn ##x.802 0 0))
V_CALL(VGetArg(upenv, 26-1, 4), runtime,
      upenv->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda100, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda101" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda101, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda101, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn pure-in? 25 7) (bruijn ##k.803 0 0) (bruijn x 24 1) (bruijn val 0 1))
V_CALL(VGetArg(upenv, 25-1, 7), runtime,
      _var0,
      VGetArg(upenv, 24-1, 1),
      _var1);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k348(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k348" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k348, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k348, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn map 25 23) (close _V0vanity_V0compiler_V0cps_V20_k349) (close _V0vanity_V0compiler_V0cps_V20_lambda101) (bruijn vals 4 3))
V_CALL(VGetArg(upenv, 25-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k349, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda101, env)}),
      upenv->up->up->up->vars[3]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k347(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k347" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k347, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k347, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.798 1 0) ((bruijn ##k.799 0 0) #t) ((bruijn pure-in? 23 7) (close _V0vanity_V0compiler_V0cps_V20_k348) (bruijn x 22 1) (##inline ##sys.car (bruijn ##expr.122 2 0))))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(_var0, runtime,
      VEncodeBool(true));
} else {
V_CALL(VGetArg(upenv, 23-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k348, env)}),
      VGetArg(upenv, 22-1, 1),
      VInlineCar(
        upenv->up->vars[0]));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k350(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k350" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k350, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k350, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.89 21 1) (bruijn ##k.793 3 0) (bruijn ##x.797 0 0))
V_CALL(VGetArg(upenv, 21-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k346(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k346" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k346, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k346, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k347) (close _V0vanity_V0compiler_V0cps_V20_k350))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k347, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k350, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k345(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k345" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k345, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k345, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.122 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.122 0 0))) ((bruijn memtail 21 1) (close _V0vanity_V0compiler_V0cps_V20_k346) (bruijn x 20 1) (bruijn args 1 2)) ((bruijn ##k.793 1 0) #f)) ((bruijn ##k.793 1 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 21-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k346, env)}),
      VGetArg(upenv, 20-1, 1),
      upenv->vars[2]);
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda99" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda99, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda99, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((close _V0vanity_V0compiler_V0cps_V20_k345) (##inline ##sys.cdr (bruijn ##expr.113 1 0))) ((bruijn ##k.793 0 0) #f))
if(VDecodeBool(
VInlineNullP(
        _var1))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k345, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k334(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k334" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k334, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k334, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.113 0 0)) ((bruijn call-with-values 20 24) (bruijn ##k.768 2 0) (close _V0vanity_V0compiler_V0cps_V20_lambda94) (close _V0vanity_V0compiler_V0cps_V20_lambda99)) ((bruijn ##k.768 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL(VGetArg(upenv, 20-1, 24), runtime,
      upenv->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda94, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda99, env)}));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k333(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k333" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k333, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k333, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.769 0 0) ((close _V0vanity_V0compiler_V0cps_V20_k334) (##inline ##sys.cdr (bruijn ##expr.112 2 0))) ((bruijn ##k.768 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k334, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k332(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k332" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k332, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k332, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.112 1 0)) ((bruijn equal? 18 27) (close _V0vanity_V0compiler_V0cps_V20_k333) 'letrec (##inline ##sys.car (bruijn ##expr.112 1 0))) ((bruijn ##k.768 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 18-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k333, env)}),
      _V0letrec,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k354(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k354" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k354, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k354, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.765 1 0) ((bruijn pure-in? 21 7) (bruijn ##k.766 0 0) (bruijn x 20 1) (##inline ##sys.cdr (bruijn ##expr.123 3 0))) ((bruijn ##k.766 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 21-1, 7), runtime,
      _var0,
      VGetArg(upenv, 20-1, 1),
      VInlineCdr(
        upenv->up->up->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k355(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k355" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k355, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k355, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.89 19 1) (bruijn ##k.763 2 0) (bruijn ##x.764 0 0))
V_CALL(VGetArg(upenv, 19-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k353(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k353" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k353, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k353, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k354) (close _V0vanity_V0compiler_V0cps_V20_k355))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k354, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k355, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k352(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k352" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k352, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k352, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.123 1 0)) ((bruijn pure-in? 19 7) (close _V0vanity_V0compiler_V0cps_V20_k353) (bruijn x 18 1) (##inline ##sys.car (bruijn ##expr.123 1 0))) ((bruijn ##k.763 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 19-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k353, env)}),
      VGetArg(upenv, 18-1, 1),
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k356(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k356" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k356, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k356, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.89 17 1) (bruijn ##k.753 17 0) #t)
V_CALL(VGetArg(upenv, 17-1, 1), runtime,
      VGetArg(upenv, 17-1, 0),
      VEncodeBool(true));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda102" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda102, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k352) (close _V0vanity_V0compiler_V0cps_V20_k356))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k352, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k356, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k351(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k351" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k351, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k351, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda102) (bruijn ##input.90 14 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda102, env, runtime,
      VGetArg(upenv, 14-1, 0));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda93" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda93, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k332) (close _V0vanity_V0compiler_V0cps_V20_k351))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k332, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k351, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k331(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k331" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k331, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k331, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda93) (bruijn ##input.90 12 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda93, env, runtime,
      VGetArg(upenv, 12-1, 0));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda92" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda92, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k323) (close _V0vanity_V0compiler_V0cps_V20_k331))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k323, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k331, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k322(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k322" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k322, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k322, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda92) (bruijn ##input.90 10 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda92, env, runtime,
      VGetArg(upenv, 10-1, 0));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda91" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda91, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k319) (close _V0vanity_V0compiler_V0cps_V20_k322))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k319, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k322, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k318(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k318" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k318, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k318, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda91) (bruijn ##input.90 8 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda91, env, runtime,
      VGetArg(upenv, 8-1, 0));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda90" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda90, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k316) (close _V0vanity_V0compiler_V0cps_V20_k318))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k316, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k318, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k315(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k315" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k315, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k315, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda90) (bruijn ##input.90 6 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda90, env, runtime,
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda81" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda81, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k301) (close _V0vanity_V0compiler_V0cps_V20_k315))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k301, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k315, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k300(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k300" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k300, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k300, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda81) (bruijn ##input.90 4 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda81, env, runtime,
      upenv->up->up->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda80" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda80, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k295) (close _V0vanity_V0compiler_V0cps_V20_k300))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k295, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k300, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k294(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k294" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k294, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k294, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda80) (bruijn ##input.90 2 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda80, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda79" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda79, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k289) (close _V0vanity_V0compiler_V0cps_V20_k294))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k289, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k294, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda78" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda78, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda79) (bruijn ##input.90 0 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda79, env, runtime,
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda77" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda77, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda77, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda78) (bruijn expr 1 2))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda78, env, runtime,
      upenv->vars[2]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda76" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda76, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda76, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn call/cc 2 26) (bruijn ##k.752 0 0) (close _V0vanity_V0compiler_V0cps_V20_lambda77))
V_CALL(upenv->up->vars[26], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda77, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k358(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k358" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k358, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k358, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.877 2 0) (##inline ##sys.cons (bruijn args 2 3) (##inline ##sys.cons (bruijn ##x.881 0 0) '())))
V_CALL(upenv->up->vars[0], runtime,
      VInlineCons(
        upenv->up->vars[3],
        VInlineCons(
        _var0,
        VNULL)));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k357(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k357" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k357, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k357, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.878 0 0) ((bruijn ##k.877 1 0) (##inline ##sys.cons (bruijn args 1 3) (##inline ##sys.cons (bruijn body 1 4) '()))) ((bruijn substitute 2 9) (close _V0vanity_V0compiler_V0cps_V20_k358) (bruijn x 1 1) (bruijn atom 1 2) (bruijn body 1 4)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      VInlineCons(
        upenv->vars[3],
        VInlineCons(
        upenv->vars[4],
        VNULL)));
} else {
V_CALL(upenv->up->vars[9], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k358, env)}),
      upenv->vars[1],
      upenv->vars[2],
      upenv->vars[4]);
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda103" };
 VRecordCall2(runtime, &dbg);
 if(argc != 5) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda103, got ~D~N"
  "-- expected 5~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda103, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 5, 5, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // ((bruijn memtail 1 1) (close _V0vanity_V0compiler_V0cps_V20_k357) (bruijn x 0 1) (bruijn args 0 3))
V_CALL(upenv->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k357, env)}),
      _var1,
      _var3);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k364(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k364" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k364, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k364, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.124 8 1) (bruijn ##k.994 5 0) (bruijn ##x.999 0 0))
V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k363(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k363" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k363, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k363, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 10 21) (close _V0vanity_V0compiler_V0cps_V20_k364) 'lambda (bruijn ##x.1000 0 0))
V_CALL(VGetArg(upenv, 10-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k364, env)}),
      _V0lambda,
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k362(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k362" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k362, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k362, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.128 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.128 0 0))) ((bruijn substitute-lambda 8 8) (close _V0vanity_V0compiler_V0cps_V20_k363) (bruijn x 7 1) (bruijn atom 7 2) (##inline ##sys.car (bruijn ##expr.127 1 0)) (##inline ##sys.car (bruijn ##expr.128 0 0))) ((bruijn ##k.994 3 0) #f)) ((bruijn ##k.994 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 8-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k363, env)}),
      VGetArg(upenv, 7-1, 1),
      VGetArg(upenv, 7-1, 2),
      VInlineCar(
        upenv->vars[0]),
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k361(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k361" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k361, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k361, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.127 0 0)) ((close _V0vanity_V0compiler_V0cps_V20_k362) (##inline ##sys.cdr (bruijn ##expr.127 0 0))) ((bruijn ##k.994 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k362, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k360(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k360" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k360, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k360, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.995 0 0) ((close _V0vanity_V0compiler_V0cps_V20_k361) (##inline ##sys.cdr (bruijn ##expr.126 2 0))) ((bruijn ##k.994 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k361, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k359(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k359" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k359, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k359, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.126 1 0)) ((bruijn equal? 6 27) (close _V0vanity_V0compiler_V0cps_V20_k360) 'lambda (##inline ##sys.car (bruijn ##expr.126 1 0))) ((bruijn ##k.994 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 6-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k360, env)}),
      _V0lambda,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k371(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k371" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k371, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k371, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.124 10 1) (bruijn ##k.984 5 0) (bruijn ##x.989 0 0))
V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k370(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k370" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k370, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k370, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 12 21) (close _V0vanity_V0compiler_V0cps_V20_k371) 'continuation (bruijn ##x.990 0 0))
V_CALL(VGetArg(upenv, 12-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k371, env)}),
      _V0continuation,
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k369(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k369" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k369, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k369, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.131 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.131 0 0))) ((bruijn substitute-lambda 10 8) (close _V0vanity_V0compiler_V0cps_V20_k370) (bruijn x 9 1) (bruijn atom 9 2) (##inline ##sys.car (bruijn ##expr.130 1 0)) (##inline ##sys.car (bruijn ##expr.131 0 0))) ((bruijn ##k.984 3 0) #f)) ((bruijn ##k.984 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 10-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k370, env)}),
      VGetArg(upenv, 9-1, 1),
      VGetArg(upenv, 9-1, 2),
      VInlineCar(
        upenv->vars[0]),
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k368(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k368" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k368, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k368, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.130 0 0)) ((close _V0vanity_V0compiler_V0cps_V20_k369) (##inline ##sys.cdr (bruijn ##expr.130 0 0))) ((bruijn ##k.984 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k369, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k367(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k367" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k367, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k367, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.985 0 0) ((close _V0vanity_V0compiler_V0cps_V20_k368) (##inline ##sys.cdr (bruijn ##expr.129 2 0))) ((bruijn ##k.984 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k368, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k366(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k366" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k366, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k366, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.129 1 0)) ((bruijn equal? 8 27) (close _V0vanity_V0compiler_V0cps_V20_k367) 'continuation (##inline ##sys.car (bruijn ##expr.129 1 0))) ((bruijn ##k.984 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 8-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k367, env)}),
      _V0continuation,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k377(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k377" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k377, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k377, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.136 5 1) (bruijn ##k.973 2 0) (bruijn ##expr.138 3 1) (bruijn ##x.974 1 0) (bruijn ##x.975 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->vars[0],
      upenv->up->up->vars[1],
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k376(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k376" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k376, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k376, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 17 25) (close _V0vanity_V0compiler_V0cps_V20_k377) (bruijn ##body.135 2 3))
V_CALL(VGetArg(upenv, 17-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k377, env)}),
      upenv->up->vars[3]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k375(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k375" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k375, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k375, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.138 1 1))) ((bruijn reverse 16 25) (close _V0vanity_V0compiler_V0cps_V20_k376) (bruijn ##args.134 1 2)) ((bruijn ##k.973 0 0) #f))
if(VDecodeBool(
VInlineNot(
        VInlinePairP(
        upenv->vars[1])))) {
V_CALL(VGetArg(upenv, 16-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k376, env)}),
      upenv->vars[2]);
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k381(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k381" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k381, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k381, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.140 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.140 0 0))) ((bruijn ##kk.137 3 1) (bruijn ##k.965 1 0) (##inline ##sys.cdr (bruijn ##expr.138 6 1)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.139 2 0)) (bruijn ##args.134 6 2)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.140 0 0)) (bruijn ##body.135 6 3))) ((bruijn ##k.965 1 0) #f)) ((bruijn ##k.965 1 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(upenv->up->up->vars[1], runtime,
      upenv->vars[0],
      VInlineCdr(
        VGetArg(upenv, 6-1, 1)),
      VInlineCons(
        VInlineCar(
        upenv->up->vars[0]),
        VGetArg(upenv, 6-1, 2)),
      VInlineCons(
        VInlineCar(
        _var0),
        VGetArg(upenv, 6-1, 3)));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k380(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k380" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k380, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k380, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.139 1 0)) ((close _V0vanity_V0compiler_V0cps_V20_k381) (##inline ##sys.cdr (bruijn ##expr.139 1 0))) ((bruijn ##k.965 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k381, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k384(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k384" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k384, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k384, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.136 9 1) (bruijn ##k.960 4 0) (bruijn ##expr.138 7 1) (bruijn ##x.962 1 0) (bruijn ##x.963 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 7-1, 1),
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k383(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k383" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k383, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k383, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 21 25) (close _V0vanity_V0compiler_V0cps_V20_k384) (bruijn ##body.135 6 3))
V_CALL(VGetArg(upenv, 21-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k384, env)}),
      VGetArg(upenv, 6-1, 3));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k382(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k382" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k382, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k382, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 20 25) (close _V0vanity_V0compiler_V0cps_V20_k383) (bruijn ##args.134 5 2))
V_CALL(VGetArg(upenv, 20-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k383, env)}),
      VGetArg(upenv, 5-1, 2));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k379(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k379" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k379, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k379, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k380) (close _V0vanity_V0compiler_V0cps_V20_k382))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k380, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k382, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda114" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda114, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda114, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0vanity_V0compiler_V0cps_V20_k379) (##inline ##sys.car (bruijn ##expr.138 3 1)))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k379, env, runtime,
      VInlineCar(
        upenv->up->up->vars[1]));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda113" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda113, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 17 26) (bruijn ##k.959 0 0) (close _V0vanity_V0compiler_V0cps_V20_lambda114))
V_CALL(VGetArg(upenv, 17-1, 26), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda114, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k378(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k378" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k378, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k378, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call-with-values 16 24) (bruijn ##k.957 1 0) (close _V0vanity_V0compiler_V0cps_V20_lambda113) (bruijn loop 2 0))
V_CALL(VGetArg(upenv, 16-1, 24), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda113, env)}),
      upenv->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda112" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda112, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda112, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((close _V0vanity_V0compiler_V0cps_V20_k375) (close _V0vanity_V0compiler_V0cps_V20_k378))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k375, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k378, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda111" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda111, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda111, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V0vanity_V0compiler_V0cps_V20_lambda112)) ((bruijn loop 0 0) (bruijn ##k.956 1 0) (##inline ##sys.cdr (bruijn ##expr.132 5 0)) '() '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda112, env)});
V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VInlineCdr(
        VGetArg(upenv, 5-1, 0)),
      VNULL,
      VNULL);
    }
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda110" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda110, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 12 26) (bruijn ##k.955 0 0) (close _V0vanity_V0compiler_V0cps_V20_lambda111))
V_CALL(VGetArg(upenv, 12-1, 26), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda111, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k386(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k386" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k386, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k386, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.124 11 1) (bruijn ##k.977 2 0) (bruijn ##x.979 0 0))
V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k385(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k385" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k385, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k385, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 13 21) (close _V0vanity_V0compiler_V0cps_V20_k386) 'case-lambda (bruijn ##x.980 0 0))
V_CALL(VGetArg(upenv, 13-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k386, env)}),
      _V0case__lambda,
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda116" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda116, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda116, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // ((bruijn substitute-lambda 12 8) (bruijn ##k.981 0 0) (bruijn x 11 1) (bruijn atom 11 2) (bruijn args 0 1) (bruijn body 0 2))
V_CALL(VGetArg(upenv, 12-1, 8), runtime,
      _var0,
      VGetArg(upenv, 11-1, 1),
      VGetArg(upenv, 11-1, 2),
      _var1,
      _var2);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda115" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda115, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda115, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((bruijn map 12 23) (close _V0vanity_V0compiler_V0cps_V20_k385) (close _V0vanity_V0compiler_V0cps_V20_lambda116) (bruijn args 0 2) (bruijn body 0 3)) ((bruijn ##k.977 0 0) #f))
if(VDecodeBool(
VInlineNullP(
        _var1))) {
V_CALL(VGetArg(upenv, 12-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k385, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda116, env)}),
      _var2,
      _var3);
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k374(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k374" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k374, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k374, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.954 0 0) ((bruijn call-with-values 11 24) (bruijn ##k.953 1 0) (close _V0vanity_V0compiler_V0cps_V20_lambda110) (close _V0vanity_V0compiler_V0cps_V20_lambda115)) ((bruijn ##k.953 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 11-1, 24), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda110, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda115, env)}));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k373(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k373" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k373, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k373, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.132 1 0)) ((bruijn equal? 10 27) (close _V0vanity_V0compiler_V0cps_V20_k374) 'case-lambda (##inline ##sys.car (bruijn ##expr.132 1 0))) ((bruijn ##k.953 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 10-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k374, env)}),
      _V0case__lambda,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k389(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k389" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k389, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k389, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.950 0 0) ((bruijn ##kk.124 10 1) (bruijn ##k.949 1 0) (bruijn expr 11 3)) ((bruijn ##k.949 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      upenv->vars[0],
      VGetArg(upenv, 11-1, 3));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k388(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k388" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k388, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k388, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.141 1 0)) ((bruijn equal? 12 27) (close _V0vanity_V0compiler_V0cps_V20_k389) '##foreign.function (##inline ##sys.car (bruijn ##expr.141 1 0))) ((bruijn ##k.949 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 12-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k389, env)}),
      _V10foreign_Dfunction,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k393(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k393" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k393, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k393, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.143 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.143 0 0))) ((bruijn ##kk.124 13 1) (bruijn ##k.942 2 0) (bruijn expr 14 3)) ((bruijn ##k.942 2 0) #f)) ((bruijn ##k.942 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 13-1, 1), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 14-1, 3));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k392(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k392" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k392, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k392, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.943 0 0) ((close _V0vanity_V0compiler_V0cps_V20_k393) (##inline ##sys.cdr (bruijn ##expr.142 2 0))) ((bruijn ##k.942 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k393, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k391(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k391" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k391, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k391, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.142 1 0)) ((bruijn equal? 14 27) (close _V0vanity_V0compiler_V0cps_V20_k392) 'quote (##inline ##sys.car (bruijn ##expr.142 1 0))) ((bruijn ##k.942 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 14-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k392, env)}),
      _V0quote,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k400(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k400" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k400, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k400, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.149 5 1) (bruijn ##k.922 2 0) (bruijn ##expr.151 3 1) (bruijn ##x.923 1 0) (bruijn ##x.924 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->vars[0],
      upenv->up->up->vars[1],
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k399(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k399" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k399, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k399, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 24 25) (close _V0vanity_V0compiler_V0cps_V20_k400) (bruijn ##vals.148 2 3))
V_CALL(VGetArg(upenv, 24-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k400, env)}),
      upenv->up->vars[3]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k398(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k398" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k398, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k398, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.151 1 1))) ((bruijn reverse 23 25) (close _V0vanity_V0compiler_V0cps_V20_k399) (bruijn ##args.147 1 2)) ((bruijn ##k.922 0 0) #f))
if(VDecodeBool(
VInlineNot(
        VInlinePairP(
        upenv->vars[1])))) {
V_CALL(VGetArg(upenv, 23-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k399, env)}),
      upenv->vars[2]);
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k404(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k404" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k404, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k404, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.153 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.153 0 0))) ((bruijn ##kk.150 3 1) (bruijn ##k.914 1 0) (##inline ##sys.cdr (bruijn ##expr.151 6 1)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.152 2 0)) (bruijn ##args.147 6 2)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.153 0 0)) (bruijn ##vals.148 6 3))) ((bruijn ##k.914 1 0) #f)) ((bruijn ##k.914 1 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(upenv->up->up->vars[1], runtime,
      upenv->vars[0],
      VInlineCdr(
        VGetArg(upenv, 6-1, 1)),
      VInlineCons(
        VInlineCar(
        upenv->up->vars[0]),
        VGetArg(upenv, 6-1, 2)),
      VInlineCons(
        VInlineCar(
        _var0),
        VGetArg(upenv, 6-1, 3)));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k403(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k403" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k403, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k403, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.152 1 0)) ((close _V0vanity_V0compiler_V0cps_V20_k404) (##inline ##sys.cdr (bruijn ##expr.152 1 0))) ((bruijn ##k.914 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k404, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k407(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k407" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k407, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k407, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.149 9 1) (bruijn ##k.909 4 0) (bruijn ##expr.151 7 1) (bruijn ##x.911 1 0) (bruijn ##x.912 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 7-1, 1),
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k406(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k406" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k406, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k406, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 28 25) (close _V0vanity_V0compiler_V0cps_V20_k407) (bruijn ##vals.148 6 3))
V_CALL(VGetArg(upenv, 28-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k407, env)}),
      VGetArg(upenv, 6-1, 3));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k405(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k405" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k405, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k405, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 27 25) (close _V0vanity_V0compiler_V0cps_V20_k406) (bruijn ##args.147 5 2))
V_CALL(VGetArg(upenv, 27-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k406, env)}),
      VGetArg(upenv, 5-1, 2));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k402(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k402" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k402, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k402, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k403) (close _V0vanity_V0compiler_V0cps_V20_k405))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k403, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k405, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda124" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda124, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda124, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0vanity_V0compiler_V0cps_V20_k402) (##inline ##sys.car (bruijn ##expr.151 3 1)))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k402, env, runtime,
      VInlineCar(
        upenv->up->up->vars[1]));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda123" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda123, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 24 26) (bruijn ##k.908 0 0) (close _V0vanity_V0compiler_V0cps_V20_lambda124))
V_CALL(VGetArg(upenv, 24-1, 26), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda124, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k401(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k401" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k401, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k401, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call-with-values 23 24) (bruijn ##k.906 1 0) (close _V0vanity_V0compiler_V0cps_V20_lambda123) (bruijn loop 2 0))
V_CALL(VGetArg(upenv, 23-1, 24), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda123, env)}),
      upenv->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda122" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda122, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda122, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((close _V0vanity_V0compiler_V0cps_V20_k398) (close _V0vanity_V0compiler_V0cps_V20_k401))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k398, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k401, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda121" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda121, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda121, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V0vanity_V0compiler_V0cps_V20_lambda122)) ((bruijn loop 0 0) (bruijn ##k.905 1 0) (##inline ##sys.car (bruijn ##expr.145 3 0)) '() '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda122, env)});
V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VInlineCar(
        upenv->up->up->vars[0]),
      VNULL,
      VNULL);
    }
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda120" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda120, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 19 26) (bruijn ##k.904 0 0) (close _V0vanity_V0compiler_V0cps_V20_lambda121))
V_CALL(VGetArg(upenv, 19-1, 26), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda121, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k413(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k413" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k413, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k413, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.932 3 0) (##inline ##sys.cons 'letrec (##inline ##sys.cons (bruijn ##x.934 1 0) (##inline ##sys.cons (bruijn ##x.936 0 0) '()))))
V_CALL(upenv->up->up->vars[0], runtime,
      VInlineCons(
        _V0letrec,
        VInlineCons(
        upenv->vars[0],
        VInlineCons(
        _var0,
        VNULL))));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k412(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k412" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k412, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k412, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn substitute 23 9) (close _V0vanity_V0compiler_V0cps_V20_k413) (bruijn x 22 1) (bruijn atom 22 2) (##inline ##sys.car (bruijn ##expr.154 4 0)))
V_CALL(VGetArg(upenv, 23-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k413, env)}),
      VGetArg(upenv, 22-1, 1),
      VGetArg(upenv, 22-1, 2),
      VInlineCar(
        upenv->up->up->up->vars[0]));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k411(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k411" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k411, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k411, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn map 23 23) (close _V0vanity_V0compiler_V0cps_V20_k412) (bruijn list 23 17) (bruijn args 4 2) (bruijn ##x.937 0 0))
V_CALL(VGetArg(upenv, 23-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k412, env)}),
      VGetArg(upenv, 23-1, 17),
      upenv->up->up->up->vars[2],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda126" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda126, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda126, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn substitute 22 9) (bruijn ##k.938 0 0) (bruijn x 21 1) (bruijn atom 21 2) (bruijn val 0 1))
V_CALL(VGetArg(upenv, 22-1, 9), runtime,
      _var0,
      VGetArg(upenv, 21-1, 1),
      VGetArg(upenv, 21-1, 2),
      _var1);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k410(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k410" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k410, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k410, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.931 1 0) ((bruijn ##k.932 0 0) (bruijn expr 20 3)) ((bruijn map 22 23) (close _V0vanity_V0compiler_V0cps_V20_k411) (close _V0vanity_V0compiler_V0cps_V20_lambda126) (bruijn vals 3 3)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(_var0, runtime,
      VGetArg(upenv, 20-1, 3));
} else {
V_CALL(VGetArg(upenv, 22-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k411, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda126, env)}),
      upenv->up->up->vars[3]);
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k414(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k414" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k414, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k414, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.124 19 1) (bruijn ##k.926 3 0) (bruijn ##x.930 0 0))
V_CALL(VGetArg(upenv, 19-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k409(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k409" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k409, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k409, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k410) (close _V0vanity_V0compiler_V0cps_V20_k414))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k410, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k414, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k408(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k408" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k408, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k408, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.154 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.154 0 0))) ((bruijn memtail 19 1) (close _V0vanity_V0compiler_V0cps_V20_k409) (bruijn x 18 1) (bruijn args 1 2)) ((bruijn ##k.926 1 0) #f)) ((bruijn ##k.926 1 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 19-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k409, env)}),
      VGetArg(upenv, 18-1, 1),
      upenv->vars[2]);
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda125" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda125, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda125, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((close _V0vanity_V0compiler_V0cps_V20_k408) (##inline ##sys.cdr (bruijn ##expr.145 1 0))) ((bruijn ##k.926 0 0) #f))
if(VDecodeBool(
VInlineNullP(
        _var1))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k408, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k397(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k397" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k397, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k397, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.145 0 0)) ((bruijn call-with-values 18 24) (bruijn ##k.901 2 0) (close _V0vanity_V0compiler_V0cps_V20_lambda120) (close _V0vanity_V0compiler_V0cps_V20_lambda125)) ((bruijn ##k.901 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL(VGetArg(upenv, 18-1, 24), runtime,
      upenv->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda120, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda125, env)}));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k396(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k396" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k396, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k396, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.902 0 0) ((close _V0vanity_V0compiler_V0cps_V20_k397) (##inline ##sys.cdr (bruijn ##expr.144 2 0))) ((bruijn ##k.901 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k397, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k395(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k395" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k395, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k395, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.144 1 0)) ((bruijn equal? 16 27) (close _V0vanity_V0compiler_V0cps_V20_k396) 'letrec (##inline ##sys.car (bruijn ##expr.144 1 0))) ((bruijn ##k.901 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 16-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k396, env)}),
      _V0letrec,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k419(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k419" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k419, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k419, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.124 18 1) (bruijn ##k.896 3 0) (bruijn ##x.897 0 0))
V_CALL(VGetArg(upenv, 18-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k418(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k418" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k418, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k418, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 20 21) (close _V0vanity_V0compiler_V0cps_V20_k419) (bruijn ##x.898 1 0) (bruijn ##x.899 0 0))
V_CALL(VGetArg(upenv, 20-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k419, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k417(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k417" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k417, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k417, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn substitute 18 9) (close _V0vanity_V0compiler_V0cps_V20_k418) (bruijn x 17 1) (bruijn atom 17 2) (##inline ##sys.cdr (bruijn ##expr.155 2 0)))
V_CALL(VGetArg(upenv, 18-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k418, env)}),
      VGetArg(upenv, 17-1, 1),
      VGetArg(upenv, 17-1, 2),
      VInlineCdr(
        upenv->up->vars[0]));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k416(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k416" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k416, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k416, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.155 1 0)) ((bruijn substitute 17 9) (close _V0vanity_V0compiler_V0cps_V20_k417) (bruijn x 16 1) (bruijn atom 16 2) (##inline ##sys.car (bruijn ##expr.155 1 0))) ((bruijn ##k.896 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 17-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k417, env)}),
      VGetArg(upenv, 16-1, 1),
      VGetArg(upenv, 16-1, 2),
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k422(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k422" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k422, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k422, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.893 1 0) ((bruijn ##k.894 0 0) (bruijn atom 19 2)) ((bruijn ##k.894 0 0) (bruijn y 2 0)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(_var0, runtime,
      VGetArg(upenv, 19-1, 2));
} else {
V_CALL(_var0, runtime,
      upenv->up->vars[0]);
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k424(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k424" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k424, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k424, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 22 18) (bruijn ##k.883 19 0) (##string ##string.1490))
V_CALL(VGetArg(upenv, 22-1, 18), runtime,
      VGetArg(upenv, 19-1, 0),
      VEncodePointer(&_V10string_D1490.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k423(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k423" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k423, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k423, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##kk.124 18 1) (close _V0vanity_V0compiler_V0cps_V20_k424) (bruijn ##x.892 0 0))
V_CALL(VGetArg(upenv, 18-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k424, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k421(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k421" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k421, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k421, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k422) (close _V0vanity_V0compiler_V0cps_V20_k423))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k422, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k423, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda128" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda128, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn eqv? 19 12) (close _V0vanity_V0compiler_V0cps_V20_k421) (bruijn x 17 1) (bruijn y 0 0))
V_CALL(VGetArg(upenv, 19-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k421, env)}),
      VGetArg(upenv, 17-1, 1),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k420(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k420" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k420, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k420, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda128) (bruijn ##input.125 14 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda128, env, runtime,
      VGetArg(upenv, 14-1, 0));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda127" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda127, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k416) (close _V0vanity_V0compiler_V0cps_V20_k420))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k416, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k420, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k415(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k415" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k415, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k415, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda127) (bruijn ##input.125 12 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda127, env, runtime,
      VGetArg(upenv, 12-1, 0));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda119" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda119, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k395) (close _V0vanity_V0compiler_V0cps_V20_k415))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k395, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k415, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k394(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k394" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k394, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k394, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda119) (bruijn ##input.125 10 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda119, env, runtime,
      VGetArg(upenv, 10-1, 0));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda118" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda118, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k391) (close _V0vanity_V0compiler_V0cps_V20_k394))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k391, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k394, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k390(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k390" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k390, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k390, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda118) (bruijn ##input.125 8 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda118, env, runtime,
      VGetArg(upenv, 8-1, 0));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda117" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda117, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k388) (close _V0vanity_V0compiler_V0cps_V20_k390))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k388, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k390, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k387(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k387" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k387, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k387, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda117) (bruijn ##input.125 6 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda117, env, runtime,
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda109" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda109, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k373) (close _V0vanity_V0compiler_V0cps_V20_k387))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k373, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k387, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k372(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k372" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k372, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k372, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda109) (bruijn ##input.125 4 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda109, env, runtime,
      upenv->up->up->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda108" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda108, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k366) (close _V0vanity_V0compiler_V0cps_V20_k372))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k366, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k372, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k365(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k365" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k365, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k365, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda108) (bruijn ##input.125 2 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda108, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda107" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda107, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k359) (close _V0vanity_V0compiler_V0cps_V20_k365))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k359, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k365, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda106" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda106, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda107) (bruijn ##input.125 0 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda107, env, runtime,
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda105" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda105, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda105, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda106) (bruijn expr 1 3))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda106, env, runtime,
      upenv->vars[3]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda104" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda104, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda104, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn call/cc 2 26) (bruijn ##k.882 0 0) (close _V0vanity_V0compiler_V0cps_V20_lambda105))
V_CALL(upenv->up->vars[26], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda105, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda129" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda129, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda129, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.1003 0 0) (bruijn expr 0 1))
V_CALL(_var0, runtime,
      _var1);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda130" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda130, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda130, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn memv 2 9) (bruijn ##k.1004 0 0) (bruijn tok 0 1) (##inline ##sys.qcons 'if (##inline ##sys.qcons 'letrec '())))
V_CALL(upenv->up->vars[9], runtime,
      _var0,
      _var1,
      VInlineCons(
        _V0if,
        VInlineCons(
        _V0letrec,
        VNULL)));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k430(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k430" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k430, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k430, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.156 7 1) (bruijn ##k.1012 5 0) (bruijn ##x.1016 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k440(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k440" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k440, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k440, runtime, upenv, 1, argc, _var0) {
  // ((bruijn = 21 13) (bruijn ##k.1032 3 0) 0 (bruijn ##x.1034 0 0))
V_CALL(VGetArg(upenv, 21-1, 13), runtime,
      upenv->up->up->vars[0],
      VEncodeInt(0l),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k439(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k439" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k439, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k439, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn fold 20 4) (close _V0vanity_V0compiler_V0cps_V20_k440) (bruijn + 20 5) 0 (bruijn ##x.1035 0 0))
V_CALL(VGetArg(upenv, 20-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k440, env)}),
      VGetArg(upenv, 20-1, 5),
      VEncodeInt(0l),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda136" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda136, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda136, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ref-count 19 5) (bruijn ##k.1036 0 0) (bruijn x 0 1) (bruijn f 6 0))
V_CALL(VGetArg(upenv, 19-1, 5), runtime,
      _var0,
      _var1,
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k438(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k438" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k438, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k438, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1033 0 0) ((bruijn map 19 23) (close _V0vanity_V0compiler_V0cps_V20_k439) (close _V0vanity_V0compiler_V0cps_V20_lambda136) (bruijn xs 11 0)) ((bruijn ##k.1032 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 19-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k439, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda136, env)}),
      VGetArg(upenv, 11-1, 0));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k437(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k437" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k437, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k437, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1031 1 0) ((bruijn equal? 18 27) (close _V0vanity_V0compiler_V0cps_V20_k438) (bruijn xs 10 0) (bruijn ys 3 0)) ((bruijn ##k.1032 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 18-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k438, env)}),
      VGetArg(upenv, 10-1, 0),
      upenv->up->up->vars[0]);
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k442(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k442" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k442, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k442, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1026 1 0) ((bruijn ##k.1027 0 0) (bruijn f 5 0)) ((bruijn ##k.1027 0 0) (##inline ##sys.cons (bruijn lamb 13 0) (##inline ##sys.cons (bruijn xs 11 0) (##inline ##sys.cons (##inline ##sys.cons (bruijn f 5 0) (bruijn ys 4 0)) '())))))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(_var0, runtime,
      VGetArg(upenv, 5-1, 0));
} else {
V_CALL(_var0, runtime,
      VInlineCons(
        VGetArg(upenv, 13-1, 0),
        VInlineCons(
        VGetArg(upenv, 11-1, 0),
        VInlineCons(
        VInlineCons(
        VGetArg(upenv, 5-1, 0),
        upenv->up->up->up->vars[0]),
        VNULL))));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k443(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k443" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k443, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k443, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.161 9 1) (bruijn ##k.1024 6 0) (bruijn ##x.1025 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k441(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k441" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k441, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k441, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k442) (close _V0vanity_V0compiler_V0cps_V20_k443))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k442, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k443, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k436(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k436" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k436, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k436, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k437) (close _V0vanity_V0compiler_V0cps_V20_k441))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k437, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k441, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k435(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k435" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k435, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k435, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn not 16 16) (close _V0vanity_V0compiler_V0cps_V20_k436) (bruijn ##x.1037 0 0))
V_CALL(VGetArg(upenv, 16-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k436, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k434(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k434" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k434, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k434, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn special-apply? 14 11) (close _V0vanity_V0compiler_V0cps_V20_k435) (bruijn f 1 0))
V_CALL(VGetArg(upenv, 14-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k435, env)}),
      upenv->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k433(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k433" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k433, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k433, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k434) (##inline ##sys.cdr (bruijn ##expr.163 2 0)))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k434, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k432(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k432" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k432, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k432, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.163 1 0)) ((close _V0vanity_V0compiler_V0cps_V20_k433) (##inline ##sys.car (bruijn ##expr.163 1 0))) ((bruijn ##k.1024 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k433, env, runtime,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k445(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k445" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k445, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k445, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 15 18) (bruijn ##k.1017 5 0) (##string ##string.1490))
V_CALL(VGetArg(upenv, 15-1, 18), runtime,
      VGetArg(upenv, 5-1, 0),
      VEncodePointer(&_V10string_D1490.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda137" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda137, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##kk.161 4 1) (close _V0vanity_V0compiler_V0cps_V20_k445) (##inline ##sys.cons (bruijn lamb 8 0) (##inline ##sys.cons (bruijn xs 6 0) (##inline ##sys.cons (bruijn opt-body 0 0) '()))))
V_CALL(upenv->up->up->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k445, env)}),
      VInlineCons(
        VGetArg(upenv, 8-1, 0),
        VInlineCons(
        VGetArg(upenv, 6-1, 0),
        VInlineCons(
        _var0,
        VNULL))));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k444(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k444" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k444, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k444, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda137) (bruijn ##input.162 2 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda137, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda135" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda135, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k432) (close _V0vanity_V0compiler_V0cps_V20_k444))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k432, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k444, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k431(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k431" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k431, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k431, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda135) (bruijn ##input.162 0 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda135, env, runtime,
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda134" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda134, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda134, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn optimize-apply 9 17) (close _V0vanity_V0compiler_V0cps_V20_k431) (##inline ##sys.car (bruijn ##expr.160 1 0)))
V_CALL(VGetArg(upenv, 9-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k431, env)}),
      VInlineCar(
        upenv->vars[0]));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k429(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k429" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k429, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k429, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.160 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.160 0 0))) ((bruijn call/cc 9 26) (close _V0vanity_V0compiler_V0cps_V20_k430) (close _V0vanity_V0compiler_V0cps_V20_lambda134)) ((bruijn ##k.1012 4 0) #f)) ((bruijn ##k.1012 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 9-1, 26), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k430, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda134, env)}));
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k428(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k428" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k428, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k428, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k429) (##inline ##sys.cdr (bruijn ##expr.159 1 0)))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k429, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k427(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k427" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k427, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k427, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.159 0 0)) ((close _V0vanity_V0compiler_V0cps_V20_k428) (##inline ##sys.car (bruijn ##expr.159 0 0))) ((bruijn ##k.1012 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k428, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k426(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k426" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k426, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k426, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k427) (##inline ##sys.cdr (bruijn ##expr.158 2 0)))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k427, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k425(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k425" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k425, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k425, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.158 1 0)) ((close _V0vanity_V0compiler_V0cps_V20_k426) (##inline ##sys.car (bruijn ##expr.158 1 0))) ((bruijn ##k.1012 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k426, env, runtime,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k447(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k447" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k447, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k447, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.156 3 1) (bruijn ##k.1008 3 0) (bruijn ##x.1010 0 0))
V_CALL(upenv->up->up->vars[1], runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k446(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k446" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k446, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k446, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn compiler-error 5 22) (close _V0vanity_V0compiler_V0cps_V20_k447) (##string ##string.1491) (bruijn expr 3 1))
V_CALL(VGetArg(upenv, 5-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k447, env)}),
      VEncodePointer(&_V10string_D1491.sym, VPOINTER_OTHER),
      upenv->up->up->vars[1]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda133" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda133, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k425) (close _V0vanity_V0compiler_V0cps_V20_k446))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k425, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k446, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda132" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda132, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda132, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda133) (bruijn expr 1 1))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda133, env, runtime,
      upenv->vars[1]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda131" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda131, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda131, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 2 26) (bruijn ##k.1007 0 0) (close _V0vanity_V0compiler_V0cps_V20_lambda132))
V_CALL(upenv->up->vars[26], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda132, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k450(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k450" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k450, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k450, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 4 0) (bruijn ##k.1040 3 0) (bruijn ##x.1042 1 0) (bruijn ##x.1043 0 0))
V_CALL(upenv->up->up->up->vars[0], runtime,
      upenv->up->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k449(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k449" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k449, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k449, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 6 5) (close _V0vanity_V0compiler_V0cps_V20_k450) (bruijn len 2 2) 1)
V_CALL(VGetArg(upenv, 6-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k450, env)}),
      upenv->up->vars[2],
      VEncodeInt(1l));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k448(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k448" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k448, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k448, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1041 0 0) ((bruijn cdr 5 7) (close _V0vanity_V0compiler_V0cps_V20_k449) (bruijn lst 1 1)) ((bruijn ##k.1040 1 0) (bruijn len 1 2)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 5-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k449, env)}),
      upenv->vars[1]);
} else {
V_CALL(upenv->vars[0], runtime,
      upenv->vars[2]);
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda139" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda139, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda139, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn pair? 4 10) (close _V0vanity_V0compiler_V0cps_V20_k448) (bruijn lst 0 1))
V_CALL(upenv->up->up->up->vars[10], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k448, env)}),
      _var1);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda138" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda138, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda138, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V0vanity_V0compiler_V0cps_V20_lambda139)) ((bruijn loop 0 0) (bruijn ##k.1039 1 0) (bruijn lst 1 1) 0))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda139, env)});
V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      upenv->vars[1],
      VEncodeInt(0l));
    }
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k455(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k455" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k455, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k455, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.1044 5 0) (##inline ##sys.cons (bruijn ##x.1047 1 0) (bruijn ##x.1048 0 0)))
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VInlineCons(
        upenv->vars[0],
        _var0));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k454(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k454" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k454, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k454, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 6 25) (close _V0vanity_V0compiler_V0cps_V20_k455) (bruijn done-xs 4 3))
V_CALL(VGetArg(upenv, 6-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k455, env)}),
      upenv->up->up->up->vars[3]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k453(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k453" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k453, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k453, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn optimize-atom 4 18) (close _V0vanity_V0compiler_V0cps_V20_k454) (##inline ##sys.cons 'lambda (##inline ##sys.cons (bruijn ##x.1051 0 0) (##inline ##sys.cons (bruijn expr 3 1) '()))))
V_CALL(upenv->up->up->up->vars[18], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k454, env)}),
      VInlineCons(
        _V0lambda,
        VInlineCons(
        _var0,
        VInlineCons(
        upenv->up->up->vars[1],
        VNULL))));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k452(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k452" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k452, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k452, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1046 0 0) ((bruijn optimize-apply 3 17) (bruijn ##k.1044 2 0) (bruijn expr 2 1)) ((bruijn reverse 4 25) (close _V0vanity_V0compiler_V0cps_V20_k453) (bruijn done-ys 2 2)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->vars[17], runtime,
      upenv->up->vars[0],
      upenv->up->vars[1]);
} else {
V_CALL(upenv->up->up->up->vars[25], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k453, env)}),
      upenv->up->vars[2]);
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k467(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k467" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k467, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k467, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1071 0 0) ((bruijn ##k.1069 4 0) (bruijn ##p.1071 0 0)) ((bruijn = 15 13) (bruijn ##k.1069 4 0) (bruijn refs 7 0) 1))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->up->vars[0], runtime,
      _var0);
} else {
V_CALL(VGetArg(upenv, 15-1, 13), runtime,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 7-1, 0),
      VEncodeInt(1l));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k466(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k466" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k466, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k466, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn eqv? 14 12) (close _V0vanity_V0compiler_V0cps_V20_k467) (bruijn ##x.1072 0 0) '##foreign.function)
V_CALL(VGetArg(upenv, 14-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k467, env)}),
      _var0,
      _V10foreign_Dfunction);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k465(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k465" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k465, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k465, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1070 0 0) ((bruijn ##k.1069 2 0) (bruijn ##p.1070 0 0)) ((bruijn car 13 8) (close _V0vanity_V0compiler_V0cps_V20_k466) (bruijn x 8 0)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->vars[0], runtime,
      _var0);
} else {
V_CALL(VGetArg(upenv, 13-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k466, env)}),
      VGetArg(upenv, 8-1, 0));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k464(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k464" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k464, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k464, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn eqv? 12 12) (close _V0vanity_V0compiler_V0cps_V20_k465) (bruijn ##x.1073 0 0) 'quote)
V_CALL(VGetArg(upenv, 12-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k465, env)}),
      _var0,
      _V0quote);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k463(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k463" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k463, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k463, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1068 1 0) ((bruijn ##k.1069 0 0) (bruijn ##p.1068 1 0)) ((bruijn car 11 8) (close _V0vanity_V0compiler_V0cps_V20_k464) (bruijn x 6 0)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(_var0, runtime,
      upenv->vars[0]);
} else {
V_CALL(VGetArg(upenv, 11-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k464, env)}),
      VGetArg(upenv, 6-1, 0));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k472(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k472" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k472, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k472, runtime, upenv, 1, argc, _var0) {
  // ((bruijn memv 15 9) (bruijn ##k.1063 1 0) (bruijn ##x.1064 0 0) (##inline ##sys.qcons 'lambda (##inline ##sys.qcons 'continuation (##inline ##sys.qcons 'case-lambda '()))))
V_CALL(VGetArg(upenv, 15-1, 9), runtime,
      upenv->vars[0],
      _var0,
      VInlineCons(
        _V0lambda,
        VInlineCons(
        _V0continuation,
        VInlineCons(
        _V0case__lambda,
        VNULL))));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k471(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k471" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k471, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k471, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1062 1 0) ((bruijn car 14 8) (close _V0vanity_V0compiler_V0cps_V20_k472) (bruijn x 9 0)) ((bruijn ##k.1063 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 14-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k472, env)}),
      VGetArg(upenv, 9-1, 0));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k474(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k474" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k474, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k474, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1060 0 0) ((bruijn pure-in? 14 7) (bruijn ##k.1059 3 0) (bruijn y 11 0) (bruijn expr 13 1)) ((bruijn ##k.1059 3 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 14-1, 7), runtime,
      upenv->up->up->vars[0],
      VGetArg(upenv, 11-1, 0),
      VGetArg(upenv, 13-1, 1));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k473(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k473" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k473, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k473, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn not 14 16) (close _V0vanity_V0compiler_V0cps_V20_k474) (bruijn ##x.1061 0 0))
V_CALL(VGetArg(upenv, 14-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k474, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k470(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k470" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k470, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k470, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k471) (close _V0vanity_V0compiler_V0cps_V20_k473))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k471, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k473, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k469(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k469" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k469, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k469, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1058 1 0) ((bruijn pair? 12 10) (close _V0vanity_V0compiler_V0cps_V20_k470) (bruijn x 7 0)) ((bruijn ##k.1059 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 12-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k470, env)}),
      VGetArg(upenv, 7-1, 0));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k476(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k476" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k476, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k476, runtime, upenv, 1, argc, _var0) {
  // ((bruijn inline-let 12 14) (bruijn ##k.1044 11 0) (bruijn ##x.1055 0 0) (bruijn done-ys 11 2) (bruijn done-xs 11 3) (bruijn ys 7 0) (bruijn xs 6 0))
V_CALL(VGetArg(upenv, 12-1, 14), runtime,
      VGetArg(upenv, 11-1, 0),
      _var0,
      VGetArg(upenv, 11-1, 2),
      VGetArg(upenv, 11-1, 3),
      VGetArg(upenv, 7-1, 0),
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k478(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k478" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k478, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k478, runtime, upenv, 1, argc, _var0) {
  // ((bruijn inline-let 13 14) (bruijn ##k.1044 12 0) (bruijn expr 12 1) (bruijn ##x.1056 1 0) (bruijn ##x.1057 0 0) (bruijn ys 8 0) (bruijn xs 7 0))
V_CALL(VGetArg(upenv, 13-1, 14), runtime,
      VGetArg(upenv, 12-1, 0),
      VGetArg(upenv, 12-1, 1),
      upenv->vars[0],
      _var0,
      VGetArg(upenv, 8-1, 0),
      VGetArg(upenv, 7-1, 0));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k477(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k477" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k477, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k477, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 13 21) (close _V0vanity_V0compiler_V0cps_V20_k478) (bruijn x 8 0) (bruijn done-xs 11 3))
V_CALL(VGetArg(upenv, 13-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k478, env)}),
      VGetArg(upenv, 8-1, 0),
      VGetArg(upenv, 11-1, 3));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k475(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k475" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k475, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k475, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1054 0 0) ((bruijn substitute 11 9) (close _V0vanity_V0compiler_V0cps_V20_k476) (bruijn y 8 0) (bruijn x 7 0) (bruijn expr 10 1)) ((bruijn cons 12 21) (close _V0vanity_V0compiler_V0cps_V20_k477) (bruijn y 8 0) (bruijn done-ys 10 2)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 11-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k476, env)}),
      VGetArg(upenv, 8-1, 0),
      VGetArg(upenv, 7-1, 0),
      VGetArg(upenv, 10-1, 1));
} else {
V_CALL(VGetArg(upenv, 12-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k477, env)}),
      VGetArg(upenv, 8-1, 0),
      VGetArg(upenv, 10-1, 2));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k468(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k468" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k468, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k468, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k469) (close _V0vanity_V0compiler_V0cps_V20_k475))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k469, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k475, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k462(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k462" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k462, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k462, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k463) (close _V0vanity_V0compiler_V0cps_V20_k468))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k463, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k468, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k461(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k461" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k461, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k461, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1053 0 0) ((bruijn inline-let 8 14) (bruijn ##k.1044 7 0) (bruijn expr 7 1) (bruijn done-ys 7 2) (bruijn done-xs 7 3) (bruijn ys 3 0) (bruijn xs 2 0)) ((bruijn atom? 9 11) (close _V0vanity_V0compiler_V0cps_V20_k462) (bruijn x 4 0)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 8-1, 14), runtime,
      VGetArg(upenv, 7-1, 0),
      VGetArg(upenv, 7-1, 1),
      VGetArg(upenv, 7-1, 2),
      VGetArg(upenv, 7-1, 3),
      upenv->up->up->vars[0],
      upenv->up->vars[0]);
} else {
V_CALL(VGetArg(upenv, 9-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k462, env)}),
      upenv->up->up->up->vars[0]);
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k460(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k460" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k460, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k460, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn = 8 13) (close _V0vanity_V0compiler_V0cps_V20_k461) (bruijn refs 0 0) 0)
V_CALL(VGetArg(upenv, 8-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k461, env)}),
      _var0,
      VEncodeInt(0l));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k459(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k459" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k459, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k459, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ref-count 6 5) (close _V0vanity_V0compiler_V0cps_V20_k460) (bruijn y 3 0) (bruijn expr 5 1))
V_CALL(VGetArg(upenv, 6-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k460, env)}),
      upenv->up->up->vars[0],
      VGetArg(upenv, 5-1, 1));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k458(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k458" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k458, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k458, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 6 7) (close _V0vanity_V0compiler_V0cps_V20_k459) (bruijn xs 4 5))
V_CALL(VGetArg(upenv, 6-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k459, env)}),
      upenv->up->up->up->vars[5]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k457(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k457" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k457, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k457, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 5 7) (close _V0vanity_V0compiler_V0cps_V20_k458) (bruijn ys 3 4))
V_CALL(VGetArg(upenv, 5-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k458, env)}),
      upenv->up->up->vars[4]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k456(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k456" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k456, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k456, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn car 4 8) (close _V0vanity_V0compiler_V0cps_V20_k457) (bruijn xs 2 5))
V_CALL(upenv->up->up->up->vars[8], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k457, env)}),
      upenv->up->vars[5]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k451(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k451" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k451, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k451, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1045 0 0) ((bruijn null? 3 6) (close _V0vanity_V0compiler_V0cps_V20_k452) (bruijn done-ys 1 2)) ((bruijn car 3 8) (close _V0vanity_V0compiler_V0cps_V20_k456) (bruijn ys 1 4)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->vars[6], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k452, env)}),
      upenv->vars[2]);
} else {
V_CALL(upenv->up->up->vars[8], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k456, env)}),
      upenv->vars[4]);
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda140(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda140" };
 VRecordCall2(runtime, &dbg);
 if(argc != 6) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda140, got ~D~N"
  "-- expected 6~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda140, runtime, upenv, 6, argc, _var0, _var1, _var2, _var3, _var4, _var5) {
  struct { VEnv env; VWORD argv[6]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 6, 6, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  env->vars[5] = _var5;
  // ((bruijn null? 2 6) (close _V0vanity_V0compiler_V0cps_V20_k451) (bruijn ys 0 4))
V_CALL(upenv->up->vars[6], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k451, env)}),
      _var4);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k497(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k497" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k497, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k497, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1222 0 0) ((bruijn ##k.1220 4 0) (bruijn ##p.1222 0 0)) ((bruijn = 24 13) (bruijn ##k.1220 4 0) (bruijn refs 8 0) 1))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->up->vars[0], runtime,
      _var0);
} else {
V_CALL(VGetArg(upenv, 24-1, 13), runtime,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 8-1, 0),
      VEncodeInt(1l));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k496(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k496" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k496, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k496, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn eqv? 23 12) (close _V0vanity_V0compiler_V0cps_V20_k497) (bruijn ##x.1223 0 0) '##foreign.function)
V_CALL(VGetArg(upenv, 23-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k497, env)}),
      _var0,
      _V10foreign_Dfunction);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k495(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k495" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k495, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k495, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1221 0 0) ((bruijn ##k.1220 2 0) (bruijn ##p.1221 0 0)) ((bruijn car 22 8) (close _V0vanity_V0compiler_V0cps_V20_k496) (bruijn x 7 0)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->vars[0], runtime,
      _var0);
} else {
V_CALL(VGetArg(upenv, 22-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k496, env)}),
      VGetArg(upenv, 7-1, 0));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k494(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k494" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k494, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k494, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn eqv? 21 12) (close _V0vanity_V0compiler_V0cps_V20_k495) (bruijn ##x.1224 0 0) 'quote)
V_CALL(VGetArg(upenv, 21-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k495, env)}),
      _var0,
      _V0quote);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k493(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k493" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k493, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k493, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1219 1 0) ((bruijn ##k.1220 0 0) (bruijn ##p.1219 1 0)) ((bruijn car 20 8) (close _V0vanity_V0compiler_V0cps_V20_k494) (bruijn x 5 0)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(_var0, runtime,
      upenv->vars[0]);
} else {
V_CALL(VGetArg(upenv, 20-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k494, env)}),
      VGetArg(upenv, 5-1, 0));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k502(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k502" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k502, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k502, runtime, upenv, 1, argc, _var0) {
  // ((bruijn memv 24 9) (bruijn ##k.1214 1 0) (bruijn ##x.1215 0 0) (##inline ##sys.qcons 'lambda (##inline ##sys.qcons 'continuation (##inline ##sys.qcons 'case-lambda '()))))
V_CALL(VGetArg(upenv, 24-1, 9), runtime,
      upenv->vars[0],
      _var0,
      VInlineCons(
        _V0lambda,
        VInlineCons(
        _V0continuation,
        VInlineCons(
        _V0case__lambda,
        VNULL))));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k501(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k501" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k501, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k501, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1213 1 0) ((bruijn car 23 8) (close _V0vanity_V0compiler_V0cps_V20_k502) (bruijn x 8 0)) ((bruijn ##k.1214 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 23-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k502, env)}),
      VGetArg(upenv, 8-1, 0));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k504(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k504" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k504, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k504, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1211 0 0) ((bruijn pure-in? 23 7) (bruijn ##k.1210 3 0) (bruijn y 13 0) (bruijn expr 11 0)) ((bruijn ##k.1210 3 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 23-1, 7), runtime,
      upenv->up->up->vars[0],
      VGetArg(upenv, 13-1, 0),
      VGetArg(upenv, 11-1, 0));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k503(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k503" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k503, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k503, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn not 23 16) (close _V0vanity_V0compiler_V0cps_V20_k504) (bruijn ##x.1212 0 0))
V_CALL(VGetArg(upenv, 23-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k504, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k500(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k500" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k500, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k500, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k501) (close _V0vanity_V0compiler_V0cps_V20_k503))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k501, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k503, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k499(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k499" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k499, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k499, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1209 1 0) ((bruijn pair? 21 10) (close _V0vanity_V0compiler_V0cps_V20_k500) (bruijn x 6 0)) ((bruijn ##k.1210 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 21-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k500, env)}),
      VGetArg(upenv, 6-1, 0));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k506(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k506" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k506, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k506, runtime, upenv, 1, argc, _var0) {
  // ((bruijn optimize-apply 21 17) (bruijn ##k.1199 4 0) (bruijn ##x.1201 0 0))
V_CALL(VGetArg(upenv, 21-1, 17), runtime,
      upenv->up->up->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k508(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k508" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k508, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k508, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.1199 5 0) (##inline ##sys.cons (bruijn ##x.1202 1 0) (##inline ##sys.cons (bruijn ##x.1204 0 0) '())))
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VInlineCons(
        upenv->vars[0],
        VInlineCons(
        _var0,
        VNULL)));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k507(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k507" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k507, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k507, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn optimize-atom 21 18) (close _V0vanity_V0compiler_V0cps_V20_k508) (bruijn x 7 0))
V_CALL(VGetArg(upenv, 21-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k508, env)}),
      VGetArg(upenv, 7-1, 0));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k505(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k505" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k505, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k505, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1200 0 0) ((bruijn substitute 20 9) (close _V0vanity_V0compiler_V0cps_V20_k506) (bruijn y 10 0) (bruijn x 6 0) (bruijn expr 8 0)) ((bruijn optimize-atom 20 18) (close _V0vanity_V0compiler_V0cps_V20_k507) (##inline ##sys.cons 'continuation (##inline ##sys.cons (##inline ##sys.cons (bruijn y 10 0) '()) (##inline ##sys.cons (bruijn expr 8 0) '())))))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 20-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k506, env)}),
      VGetArg(upenv, 10-1, 0),
      VGetArg(upenv, 6-1, 0),
      VGetArg(upenv, 8-1, 0));
} else {
V_CALL(VGetArg(upenv, 20-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k507, env)}),
      VInlineCons(
        _V0continuation,
        VInlineCons(
        VInlineCons(
        VGetArg(upenv, 10-1, 0),
        VNULL),
        VInlineCons(
        VGetArg(upenv, 8-1, 0),
        VNULL))));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k498(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k498" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k498, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k498, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k499) (close _V0vanity_V0compiler_V0cps_V20_k505))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k499, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k505, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k492(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k492" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k492, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k492, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k493) (close _V0vanity_V0compiler_V0cps_V20_k498))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k493, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k498, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k491(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k491" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k491, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k491, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1198 1 0) ((bruijn optimize-apply 17 17) (bruijn ##k.1199 0 0) (bruijn expr 5 0)) ((bruijn atom? 18 11) (close _V0vanity_V0compiler_V0cps_V20_k492) (bruijn x 3 0)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 17-1, 17), runtime,
      _var0,
      VGetArg(upenv, 5-1, 0));
} else {
V_CALL(VGetArg(upenv, 18-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k492, env)}),
      upenv->up->up->vars[0]);
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k509(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k509" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k509, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k509, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.164 15 1) (bruijn ##k.1187 12 0) (bruijn ##x.1197 0 0))
V_CALL(VGetArg(upenv, 15-1, 1), runtime,
      VGetArg(upenv, 12-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k490(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k490" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k490, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k490, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k491) (close _V0vanity_V0compiler_V0cps_V20_k509))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k491, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k509, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k489(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k489" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k489, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k489, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn = 16 13) (close _V0vanity_V0compiler_V0cps_V20_k490) (bruijn refs 0 0) 0)
V_CALL(VGetArg(upenv, 16-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k490, env)}),
      _var0,
      VEncodeInt(0l));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k488(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k488" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k488, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k488, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.171 1 0))) ((bruijn ref-count 14 5) (close _V0vanity_V0compiler_V0cps_V20_k489) (bruijn y 4 0) (bruijn expr 2 0)) ((bruijn ##k.1187 9 0) #f))
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        upenv->vars[0])))) {
V_CALL(VGetArg(upenv, 14-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k489, env)}),
      upenv->up->up->up->vars[0],
      upenv->up->vars[0]);
} else {
V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k487(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k487" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k487, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k487, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.171 0 0)) ((close _V0vanity_V0compiler_V0cps_V20_k488) (##inline ##sys.car (bruijn ##expr.171 0 0))) ((bruijn ##k.1187 8 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k488, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k486(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k486" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k486, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k486, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.170 1 0))) ((close _V0vanity_V0compiler_V0cps_V20_k487) (##inline ##sys.cdr (bruijn ##expr.166 8 0))) ((bruijn ##k.1187 7 0) #f))
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        upenv->vars[0])))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k487, env, runtime,
      VInlineCdr(
        VGetArg(upenv, 8-1, 0)));
} else {
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k485(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k485" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k485, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k485, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.170 0 0)) ((close _V0vanity_V0compiler_V0cps_V20_k486) (##inline ##sys.car (bruijn ##expr.170 0 0))) ((bruijn ##k.1187 6 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k486, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k484(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k484" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k484, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k484, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.169 1 0))) ((close _V0vanity_V0compiler_V0cps_V20_k485) (##inline ##sys.cdr (bruijn ##expr.168 2 0))) ((bruijn ##k.1187 5 0) #f))
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        upenv->vars[0])))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k485, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k483(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k483" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k483, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k483, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.169 0 0)) ((close _V0vanity_V0compiler_V0cps_V20_k484) (##inline ##sys.car (bruijn ##expr.169 0 0))) ((bruijn ##k.1187 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k484, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k482(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k482" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k482, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k482, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.168 0 0)) ((close _V0vanity_V0compiler_V0cps_V20_k483) (##inline ##sys.car (bruijn ##expr.168 0 0))) ((bruijn ##k.1187 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k483, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k481(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k481" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k481, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k481, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1189 0 0) ((close _V0vanity_V0compiler_V0cps_V20_k482) (##inline ##sys.cdr (bruijn ##expr.167 1 0))) ((bruijn ##k.1187 2 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k482, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k480(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k480" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k480, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k480, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.167 0 0)) ((bruijn equal? 7 27) (close _V0vanity_V0compiler_V0cps_V20_k481) 'continuation (##inline ##sys.car (bruijn ##expr.167 0 0))) ((bruijn ##k.1187 1 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL(VGetArg(upenv, 7-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k481, env)}),
      _V0continuation,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k479(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k479" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k479, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k479, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.166 1 0)) ((close _V0vanity_V0compiler_V0cps_V20_k480) (##inline ##sys.car (bruijn ##expr.166 1 0))) ((bruijn ##k.1187 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k480, env, runtime,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k516(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k516" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k516, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k516, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.164 10 1) (bruijn ##k.1173 5 0) (bruijn ##x.1181 0 0))
V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k515(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k515" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k515, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k515, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.175 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.175 0 0))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.172 5 0))) ((bruijn optimize-apply 11 17) (close _V0vanity_V0compiler_V0cps_V20_k516) (##inline ##sys.car (bruijn ##expr.175 0 0))) ((bruijn ##k.1173 4 0) #f)) ((bruijn ##k.1173 4 0) #f)) ((bruijn ##k.1173 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        VGetArg(upenv, 5-1, 0))))) {
V_CALL(VGetArg(upenv, 11-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k516, env)}),
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k514(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k514" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k514, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k514, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.174 0 0)) (if (##inline ##sys.null? (##inline ##sys.car (bruijn ##expr.174 0 0))) ((close _V0vanity_V0compiler_V0cps_V20_k515) (##inline ##sys.cdr (bruijn ##expr.174 0 0))) ((bruijn ##k.1173 3 0) #f)) ((bruijn ##k.1173 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCar(
        _var0)))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k515, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k513(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k513" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k513, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k513, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1175 0 0) ((close _V0vanity_V0compiler_V0cps_V20_k514) (##inline ##sys.cdr (bruijn ##expr.173 1 0))) ((bruijn ##k.1173 2 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k514, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k512(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k512" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k512, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k512, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.173 0 0)) ((bruijn equal? 9 27) (close _V0vanity_V0compiler_V0cps_V20_k513) 'lambda (##inline ##sys.car (bruijn ##expr.173 0 0))) ((bruijn ##k.1173 1 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL(VGetArg(upenv, 9-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k513, env)}),
      _V0lambda,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k511(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k511" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k511, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k511, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.172 1 0)) ((close _V0vanity_V0compiler_V0cps_V20_k512) (##inline ##sys.car (bruijn ##expr.172 1 0))) ((bruijn ##k.1173 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k512, env, runtime,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k523(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k523" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k523, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k523, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.181 4 1) (bruijn ##k.1140 1 0) (bruijn ##expr.183 2 1) (bruijn ##x.1141 0 0))
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[1],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k522(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k522" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k522, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k522, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.183 1 1))) ((bruijn reverse 18 25) (close _V0vanity_V0compiler_V0cps_V20_k523) (bruijn ##ys.180 1 2)) ((bruijn ##k.1140 0 0) #f))
if(VDecodeBool(
VInlineNot(
        VInlinePairP(
        upenv->vars[1])))) {
V_CALL(VGetArg(upenv, 18-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k523, env)}),
      upenv->vars[2]);
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k526(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k526" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k526, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k526, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.181 7 1) (bruijn ##k.1134 2 0) (bruijn ##expr.183 5 1) (bruijn ##x.1136 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k525(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k525" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k525, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k525, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 21 25) (close _V0vanity_V0compiler_V0cps_V20_k526) (bruijn ##ys.180 4 2))
V_CALL(VGetArg(upenv, 21-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k526, env)}),
      upenv->up->up->up->vars[2]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda151" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda151, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda151, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##kk.182 0 1) (close _V0vanity_V0compiler_V0cps_V20_k525) (##inline ##sys.cdr (bruijn ##expr.183 3 1)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.183 3 1)) (bruijn ##ys.180 3 2)))
V_CALL(_var1, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k525, env)}),
      VInlineCdr(
        upenv->up->up->vars[1]),
      VInlineCons(
        VInlineCar(
        upenv->up->up->vars[1]),
        upenv->up->up->vars[2]));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda150(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda150" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda150, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 19 26) (bruijn ##k.1133 0 0) (close _V0vanity_V0compiler_V0cps_V20_lambda151))
V_CALL(VGetArg(upenv, 19-1, 26), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda151, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k524(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k524" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k524, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k524, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call-with-values 18 24) (bruijn ##k.1131 1 0) (close _V0vanity_V0compiler_V0cps_V20_lambda150) (bruijn loop 2 0))
V_CALL(VGetArg(upenv, 18-1, 24), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda150, env)}),
      upenv->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda149" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda149, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda149, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0vanity_V0compiler_V0cps_V20_k522) (close _V0vanity_V0compiler_V0cps_V20_k524))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k522, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k524, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda148" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda148, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda148, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V0vanity_V0compiler_V0cps_V20_lambda149)) ((bruijn loop 0 0) (bruijn ##k.1130 1 0) (##inline ##sys.car (bruijn ##expr.178 3 0)) '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda149, env)});
V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VInlineCar(
        upenv->up->up->vars[0]),
      VNULL);
    }
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda147" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda147, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 14 26) (bruijn ##k.1129 0 0) (close _V0vanity_V0compiler_V0cps_V20_lambda148))
V_CALL(VGetArg(upenv, 14-1, 26), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda148, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k529(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k529" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k529, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k529, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.187 4 1) (bruijn ##k.1158 1 0) (bruijn ##expr.189 2 1) (bruijn ##x.1159 0 0))
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[1],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k528(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k528" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k528, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k528, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.189 1 1))) ((bruijn reverse 20 25) (close _V0vanity_V0compiler_V0cps_V20_k529) (bruijn ##xs.186 1 2)) ((bruijn ##k.1158 0 0) #f))
if(VDecodeBool(
VInlineNot(
        VInlinePairP(
        upenv->vars[1])))) {
V_CALL(VGetArg(upenv, 20-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k529, env)}),
      upenv->vars[2]);
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k532(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k532" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k532, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k532, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.187 7 1) (bruijn ##k.1152 2 0) (bruijn ##expr.189 5 1) (bruijn ##x.1154 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k531(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k531" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k531, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k531, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 23 25) (close _V0vanity_V0compiler_V0cps_V20_k532) (bruijn ##xs.186 4 2))
V_CALL(VGetArg(upenv, 23-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k532, env)}),
      upenv->up->up->up->vars[2]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda157(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda157" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda157, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda157, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##kk.188 0 1) (close _V0vanity_V0compiler_V0cps_V20_k531) (##inline ##sys.cdr (bruijn ##expr.189 3 1)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.189 3 1)) (bruijn ##xs.186 3 2)))
V_CALL(_var1, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k531, env)}),
      VInlineCdr(
        upenv->up->up->vars[1]),
      VInlineCons(
        VInlineCar(
        upenv->up->up->vars[1]),
        upenv->up->up->vars[2]));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda156" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda156, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 21 26) (bruijn ##k.1151 0 0) (close _V0vanity_V0compiler_V0cps_V20_lambda157))
V_CALL(VGetArg(upenv, 21-1, 26), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda157, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k530(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k530" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k530, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k530, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call-with-values 20 24) (bruijn ##k.1149 1 0) (close _V0vanity_V0compiler_V0cps_V20_lambda156) (bruijn loop 2 0))
V_CALL(VGetArg(upenv, 20-1, 24), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda156, env)}),
      upenv->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda155(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda155" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda155, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda155, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0vanity_V0compiler_V0cps_V20_k528) (close _V0vanity_V0compiler_V0cps_V20_k530))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k528, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k530, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda154(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda154" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda154, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda154, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V0vanity_V0compiler_V0cps_V20_lambda155)) ((bruijn loop 0 0) (bruijn ##k.1148 1 0) (##inline ##sys.cdr (bruijn ##expr.176 9 0)) '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda155, env)});
V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VInlineCdr(
        VGetArg(upenv, 9-1, 0)),
      VNULL);
    }
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda153" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda153, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 16 26) (bruijn ##k.1147 0 0) (close _V0vanity_V0compiler_V0cps_V20_lambda154))
V_CALL(VGetArg(upenv, 16-1, 26), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda154, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k537(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k537" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k537, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k537, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1165 1 0) ((bruijn compiler-error 21 22) (bruijn ##k.1166 0 0) (##string ##string.1492)) ((bruijn ##k.1166 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 21-1, 22), runtime,
      _var0,
      VEncodePointer(&_V10string_D1492.sym, VPOINTER_OTHER));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k539(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k539" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k539, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k539, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.164 19 1) (bruijn ##k.1161 6 0) (bruijn ##x.1163 0 0))
V_CALL(VGetArg(upenv, 19-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k538(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k538" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k538, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k538, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn map 21 23) (close _V0vanity_V0compiler_V0cps_V20_k539) (bruijn optimize-atom 20 18) (bruijn let-expr 19 1))
V_CALL(VGetArg(upenv, 21-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k539, env)}),
      VGetArg(upenv, 20-1, 18),
      VGetArg(upenv, 19-1, 1));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k536(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k536" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k536, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k536, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k537) (close _V0vanity_V0compiler_V0cps_V20_k538))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k537, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k538, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k535(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k535" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k535, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k535, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn not 19 16) (close _V0vanity_V0compiler_V0cps_V20_k536) (bruijn ##x.1167 0 0))
V_CALL(VGetArg(upenv, 19-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k536, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k534(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k534" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k534, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k534, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn = 18 13) (close _V0vanity_V0compiler_V0cps_V20_k535) (bruijn ##x.1168 1 0) (bruijn ##x.1169 0 0))
V_CALL(VGetArg(upenv, 18-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k535, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k533(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k533" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k533, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k533, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn length 17 15) (close _V0vanity_V0compiler_V0cps_V20_k534) (bruijn xs 1 2))
V_CALL(VGetArg(upenv, 17-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k534, env)}),
      upenv->vars[2]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda158(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda158" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda158, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda158, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((bruijn length 16 15) (close _V0vanity_V0compiler_V0cps_V20_k533) (bruijn ys 2 2)) ((bruijn ##k.1161 0 0) #f))
if(VDecodeBool(
VInlineNullP(
        _var1))) {
V_CALL(VGetArg(upenv, 16-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k533, env)}),
      upenv->up->vars[2]);
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k527(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k527" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k527, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k527, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.184 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.184 0 0))) ((bruijn call-with-values 15 24) (bruijn ##k.1143 1 0) (close _V0vanity_V0compiler_V0cps_V20_lambda153) (close _V0vanity_V0compiler_V0cps_V20_lambda158)) ((bruijn ##k.1143 1 0) #f)) ((bruijn ##k.1143 1 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 15-1, 24), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda153, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda158, env)}));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda152" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda152, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda152, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((close _V0vanity_V0compiler_V0cps_V20_k527) (##inline ##sys.cdr (bruijn ##expr.178 1 0))) ((bruijn ##k.1143 0 0) #f))
if(VDecodeBool(
VInlineNullP(
        _var1))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k527, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k521(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k521" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k521, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k521, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.178 0 0)) ((bruijn call-with-values 13 24) (bruijn ##k.1125 3 0) (close _V0vanity_V0compiler_V0cps_V20_lambda147) (close _V0vanity_V0compiler_V0cps_V20_lambda152)) ((bruijn ##k.1125 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL(VGetArg(upenv, 13-1, 24), runtime,
      upenv->up->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda147, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda152, env)}));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k520(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k520" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k520, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k520, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1127 0 0) ((close _V0vanity_V0compiler_V0cps_V20_k521) (##inline ##sys.cdr (bruijn ##expr.177 1 0))) ((bruijn ##k.1125 2 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k521, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k519(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k519" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k519, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k519, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.177 0 0)) ((bruijn equal? 11 27) (close _V0vanity_V0compiler_V0cps_V20_k520) 'lambda (##inline ##sys.car (bruijn ##expr.177 0 0))) ((bruijn ##k.1125 1 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL(VGetArg(upenv, 11-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k520, env)}),
      _V0lambda,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k518(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k518" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k518, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k518, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.176 1 0)) ((close _V0vanity_V0compiler_V0cps_V20_k519) (##inline ##sys.car (bruijn ##expr.176 1 0))) ((bruijn ##k.1125 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k519, env, runtime,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k546(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k546" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k546, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k546, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.164 14 1) (bruijn ##k.1111 5 0) (bruijn ##x.1119 0 0))
V_CALL(VGetArg(upenv, 14-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k545(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k545" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k545, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k545, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.193 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.193 0 0))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.190 5 0))) ((bruijn optimize-apply 15 17) (close _V0vanity_V0compiler_V0cps_V20_k546) (##inline ##sys.car (bruijn ##expr.193 0 0))) ((bruijn ##k.1111 4 0) #f)) ((bruijn ##k.1111 4 0) #f)) ((bruijn ##k.1111 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        VGetArg(upenv, 5-1, 0))))) {
V_CALL(VGetArg(upenv, 15-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k546, env)}),
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k544(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k544" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k544, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k544, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.192 0 0)) (if (##inline ##sys.null? (##inline ##sys.car (bruijn ##expr.192 0 0))) ((close _V0vanity_V0compiler_V0cps_V20_k545) (##inline ##sys.cdr (bruijn ##expr.192 0 0))) ((bruijn ##k.1111 3 0) #f)) ((bruijn ##k.1111 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCar(
        _var0)))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k545, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k543(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k543" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k543, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k543, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1113 0 0) ((close _V0vanity_V0compiler_V0cps_V20_k544) (##inline ##sys.cdr (bruijn ##expr.191 1 0))) ((bruijn ##k.1111 2 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k544, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k542(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k542" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k542, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k542, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.191 0 0)) ((bruijn equal? 13 27) (close _V0vanity_V0compiler_V0cps_V20_k543) 'continuation (##inline ##sys.car (bruijn ##expr.191 0 0))) ((bruijn ##k.1111 1 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL(VGetArg(upenv, 13-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k543, env)}),
      _V0continuation,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k541(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k541" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k541, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k541, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.190 1 0)) ((close _V0vanity_V0compiler_V0cps_V20_k542) (##inline ##sys.car (bruijn ##expr.190 1 0))) ((bruijn ##k.1111 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k542, env, runtime,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k559(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k559" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k559, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k559, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1103 1 0) ((bruijn compiler-error 25 22) (bruijn ##k.1104 0 0) (##string ##string.1492)) ((bruijn ##k.1104 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 25-1, 22), runtime,
      _var0,
      VEncodePointer(&_V10string_D1492.sym, VPOINTER_OTHER));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k562(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k562" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k562, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k562, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.164 24 1) (bruijn ##k.1090 13 0) (##inline ##sys.cons (bruijn ##x.1098 1 0) (bruijn ##x.1099 0 0)))
V_CALL(VGetArg(upenv, 24-1, 1), runtime,
      VGetArg(upenv, 13-1, 0),
      VInlineCons(
        upenv->vars[0],
        _var0));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k561(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k561" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k561, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k561, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn map 26 23) (close _V0vanity_V0compiler_V0cps_V20_k562) (bruijn optimize-atom 25 18) (bruijn xs 6 0))
V_CALL(VGetArg(upenv, 26-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k562, env)}),
      VGetArg(upenv, 25-1, 18),
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k560(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k560" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k560, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k560, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn optimize-atom 24 18) (close _V0vanity_V0compiler_V0cps_V20_k561) (##inline ##sys.cons 'lambda (##inline ##sys.cons (bruijn ys 7 0) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.197 6 0)) '()))))
V_CALL(VGetArg(upenv, 24-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k561, env)}),
      VInlineCons(
        _V0lambda,
        VInlineCons(
        VGetArg(upenv, 7-1, 0),
        VInlineCons(
        VInlineCar(
        VGetArg(upenv, 6-1, 0)),
        VNULL))));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k558(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k558" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k558, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k558, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k559) (close _V0vanity_V0compiler_V0cps_V20_k560))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k559, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k560, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k557(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k557" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k557, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k557, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn not 23 16) (close _V0vanity_V0compiler_V0cps_V20_k558) (bruijn ##x.1105 0 0))
V_CALL(VGetArg(upenv, 23-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k558, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k556(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k556" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k556, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k556, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn <= 22 14) (close _V0vanity_V0compiler_V0cps_V20_k557) (bruijn ##x.1106 1 0) (bruijn ##x.1107 0 0))
V_CALL(VGetArg(upenv, 22-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k557, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k555(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k555" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k555, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k555, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn length 21 15) (close _V0vanity_V0compiler_V0cps_V20_k556) (bruijn xs 1 0))
V_CALL(VGetArg(upenv, 21-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k556, env)}),
      upenv->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k554(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k554" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k554, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k554, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn taillength 19 13) (close _V0vanity_V0compiler_V0cps_V20_k555) (bruijn ys 2 0))
V_CALL(VGetArg(upenv, 19-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k555, env)}),
      upenv->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k553(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k553" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k553, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k553, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.197 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.197 0 0))) ((close _V0vanity_V0compiler_V0cps_V20_k554) (##inline ##sys.cdr (bruijn ##expr.194 6 0))) ((bruijn ##k.1090 5 0) #f)) ((bruijn ##k.1090 5 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k554, env, runtime,
      VInlineCdr(
        VGetArg(upenv, 6-1, 0)));
} else {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
} else {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k552(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k552" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k552, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k552, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k553) (##inline ##sys.cdr (bruijn ##expr.196 1 0)))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k553, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k551(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k551" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k551, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k551, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.196 0 0)) ((close _V0vanity_V0compiler_V0cps_V20_k552) (##inline ##sys.car (bruijn ##expr.196 0 0))) ((bruijn ##k.1090 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k552, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k550(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k550" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k550, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k550, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1092 0 0) ((close _V0vanity_V0compiler_V0cps_V20_k551) (##inline ##sys.cdr (bruijn ##expr.195 1 0))) ((bruijn ##k.1090 2 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k551, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k549(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k549" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k549, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k549, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.195 0 0)) ((bruijn equal? 15 27) (close _V0vanity_V0compiler_V0cps_V20_k550) 'lambda (##inline ##sys.car (bruijn ##expr.195 0 0))) ((bruijn ##k.1090 1 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL(VGetArg(upenv, 15-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k550, env)}),
      _V0lambda,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k548(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k548" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k548, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k548, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.194 1 0)) ((close _V0vanity_V0compiler_V0cps_V20_k549) (##inline ##sys.car (bruijn ##expr.194 1 0))) ((bruijn ##k.1090 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k549, env, runtime,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k567(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k567" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k567, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k567, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.164 16 1) (bruijn ##k.1084 3 0) (bruijn ##x.1087 0 0))
V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k566(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k566" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k566, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k566, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1086 0 0) ((bruijn compiler-error 18 22) (close _V0vanity_V0compiler_V0cps_V20_k567) (##string ##string.1493)) ((bruijn ##k.1084 2 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 18-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k567, env)}),
      VEncodePointer(&_V10string_D1493.sym, VPOINTER_OTHER));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k565(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k565" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k565, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k565, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.199 0 0)) ((bruijn equal? 17 27) (close _V0vanity_V0compiler_V0cps_V20_k566) 'continuation (##inline ##sys.car (bruijn ##expr.199 0 0))) ((bruijn ##k.1084 1 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL(VGetArg(upenv, 17-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k566, env)}),
      _V0continuation,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k564(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k564" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k564, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k564, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.198 1 0)) ((close _V0vanity_V0compiler_V0cps_V20_k565) (##inline ##sys.car (bruijn ##expr.198 1 0))) ((bruijn ##k.1084 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k565, env, runtime,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k569(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k569" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k569, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k569, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.164 14 1) (bruijn ##k.1075 14 0) (bruijn ##x.1082 0 0))
V_CALL(VGetArg(upenv, 14-1, 1), runtime,
      VGetArg(upenv, 14-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k568(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k568" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k568, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k568, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn compiler-error 16 22) (close _V0vanity_V0compiler_V0cps_V20_k569) (##string ##string.1494))
V_CALL(VGetArg(upenv, 16-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k569, env)}),
      VEncodePointer(&_V10string_D1494.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda161(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda161" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda161, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k564) (close _V0vanity_V0compiler_V0cps_V20_k568))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k564, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k568, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k563(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k563" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k563, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k563, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda161) (bruijn ##input.165 10 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda161, env, runtime,
      VGetArg(upenv, 10-1, 0));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda160" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda160, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k548) (close _V0vanity_V0compiler_V0cps_V20_k563))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k548, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k563, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k547(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k547" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k547, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k547, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda160) (bruijn ##input.165 8 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda160, env, runtime,
      VGetArg(upenv, 8-1, 0));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda159(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda159" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda159, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k541) (close _V0vanity_V0compiler_V0cps_V20_k547))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k541, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k547, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k540(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k540" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k540, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k540, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda159) (bruijn ##input.165 6 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda159, env, runtime,
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda146" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda146, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k518) (close _V0vanity_V0compiler_V0cps_V20_k540))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k518, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k540, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k517(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k517" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k517, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k517, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda146) (bruijn ##input.165 4 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda146, env, runtime,
      upenv->up->up->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda145" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda145, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k511) (close _V0vanity_V0compiler_V0cps_V20_k517))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k511, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k517, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k510(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k510" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k510, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k510, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda145) (bruijn ##input.165 2 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda145, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda144(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda144" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda144, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k479) (close _V0vanity_V0compiler_V0cps_V20_k510))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k479, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k510, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda143" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda143, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda144) (bruijn ##input.165 0 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda144, env, runtime,
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda142" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda142, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda142, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda143) (bruijn let-expr 1 1))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda143, env, runtime,
      upenv->vars[1]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda141" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda141, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda141, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 2 26) (bruijn ##k.1074 0 0) (close _V0vanity_V0compiler_V0cps_V20_lambda142))
V_CALL(upenv->up->vars[26], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda142, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k575(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k575" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k575, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k575, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.207 5 1) (bruijn ##k.1254 2 0) (bruijn ##expr.209 3 1) (bruijn ##x.1255 1 0) (bruijn ##x.1256 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->vars[0],
      upenv->up->up->vars[1],
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k574(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k574" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k574, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k574, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 13 25) (close _V0vanity_V0compiler_V0cps_V20_k575) (bruijn ##vals.206 2 3))
V_CALL(VGetArg(upenv, 13-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k575, env)}),
      upenv->up->vars[3]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k573(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k573" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k573, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k573, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.209 1 1))) ((bruijn reverse 12 25) (close _V0vanity_V0compiler_V0cps_V20_k574) (bruijn ##args.205 1 2)) ((bruijn ##k.1254 0 0) #f))
if(VDecodeBool(
VInlineNot(
        VInlinePairP(
        upenv->vars[1])))) {
V_CALL(VGetArg(upenv, 12-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k574, env)}),
      upenv->vars[2]);
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k579(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k579" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k579, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k579, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.211 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.211 0 0))) ((bruijn ##kk.208 3 1) (bruijn ##k.1246 1 0) (##inline ##sys.cdr (bruijn ##expr.209 6 1)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.210 2 0)) (bruijn ##args.205 6 2)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.211 0 0)) (bruijn ##vals.206 6 3))) ((bruijn ##k.1246 1 0) #f)) ((bruijn ##k.1246 1 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(upenv->up->up->vars[1], runtime,
      upenv->vars[0],
      VInlineCdr(
        VGetArg(upenv, 6-1, 1)),
      VInlineCons(
        VInlineCar(
        upenv->up->vars[0]),
        VGetArg(upenv, 6-1, 2)),
      VInlineCons(
        VInlineCar(
        _var0),
        VGetArg(upenv, 6-1, 3)));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k578(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k578" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k578, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k578, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.210 1 0)) ((close _V0vanity_V0compiler_V0cps_V20_k579) (##inline ##sys.cdr (bruijn ##expr.210 1 0))) ((bruijn ##k.1246 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k579, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k582(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k582" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k582, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k582, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.207 9 1) (bruijn ##k.1241 4 0) (bruijn ##expr.209 7 1) (bruijn ##x.1243 1 0) (bruijn ##x.1244 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 7-1, 1),
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k581(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k581" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k581, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k581, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 17 25) (close _V0vanity_V0compiler_V0cps_V20_k582) (bruijn ##vals.206 6 3))
V_CALL(VGetArg(upenv, 17-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k582, env)}),
      VGetArg(upenv, 6-1, 3));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k580(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k580" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k580, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k580, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 16 25) (close _V0vanity_V0compiler_V0cps_V20_k581) (bruijn ##args.205 5 2))
V_CALL(VGetArg(upenv, 16-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k581, env)}),
      VGetArg(upenv, 5-1, 2));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k577(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k577" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k577, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k577, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k578) (close _V0vanity_V0compiler_V0cps_V20_k580))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k578, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k580, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda169(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda169" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda169, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda169, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0vanity_V0compiler_V0cps_V20_k577) (##inline ##sys.car (bruijn ##expr.209 3 1)))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k577, env, runtime,
      VInlineCar(
        upenv->up->up->vars[1]));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda168(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda168" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda168, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 13 26) (bruijn ##k.1240 0 0) (close _V0vanity_V0compiler_V0cps_V20_lambda169))
V_CALL(VGetArg(upenv, 13-1, 26), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda169, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k576(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k576" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k576, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k576, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call-with-values 12 24) (bruijn ##k.1238 1 0) (close _V0vanity_V0compiler_V0cps_V20_lambda168) (bruijn loop 2 0))
V_CALL(VGetArg(upenv, 12-1, 24), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda168, env)}),
      upenv->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda167(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda167" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda167, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda167, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((close _V0vanity_V0compiler_V0cps_V20_k573) (close _V0vanity_V0compiler_V0cps_V20_k576))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k573, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k576, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda166(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda166" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda166, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda166, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V0vanity_V0compiler_V0cps_V20_lambda167)) ((bruijn loop 0 0) (bruijn ##k.1237 1 0) (##inline ##sys.car (bruijn ##expr.203 3 0)) '() '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda167, env)});
V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VInlineCar(
        upenv->up->up->vars[0]),
      VNULL,
      VNULL);
    }
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda165(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda165" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda165, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 8 26) (bruijn ##k.1236 0 0) (close _V0vanity_V0compiler_V0cps_V20_lambda166))
V_CALL(VGetArg(upenv, 8-1, 26), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda166, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k586(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k586" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k586, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k586, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.200 9 1) (bruijn ##k.1258 4 0) (##inline ##sys.cons 'letrec (##inline ##sys.cons (bruijn ##x.1264 1 0) (##inline ##sys.cons (bruijn ##x.1266 0 0) '()))))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VInlineCons(
        _V0letrec,
        VInlineCons(
        upenv->vars[0],
        VInlineCons(
        _var0,
        VNULL))));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k585(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k585" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k585, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k585, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn optimize-apply 10 17) (close _V0vanity_V0compiler_V0cps_V20_k586) (##inline ##sys.car (bruijn ##expr.212 2 0)))
V_CALL(VGetArg(upenv, 10-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k586, env)}),
      VInlineCar(
        upenv->up->vars[0]));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k584(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k584" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k584, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k584, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn map 10 23) (close _V0vanity_V0compiler_V0cps_V20_k585) (bruijn list 10 17) (bruijn args 2 2) (bruijn ##x.1267 0 0))
V_CALL(VGetArg(upenv, 10-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k585, env)}),
      VGetArg(upenv, 10-1, 17),
      upenv->up->vars[2],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k583(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k583" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k583, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k583, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.212 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.212 0 0))) ((bruijn map 9 23) (close _V0vanity_V0compiler_V0cps_V20_k584) (bruijn optimize-atom 8 18) (bruijn vals 1 3)) ((bruijn ##k.1258 1 0) #f)) ((bruijn ##k.1258 1 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 9-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k584, env)}),
      VGetArg(upenv, 8-1, 18),
      upenv->vars[3]);
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda170(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda170" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda170, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda170, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((close _V0vanity_V0compiler_V0cps_V20_k583) (##inline ##sys.cdr (bruijn ##expr.203 1 0))) ((bruijn ##k.1258 0 0) #f))
if(VDecodeBool(
VInlineNullP(
        _var1))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k583, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k572(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k572" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k572, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k572, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.203 0 0)) ((bruijn call-with-values 7 24) (bruijn ##k.1233 2 0) (close _V0vanity_V0compiler_V0cps_V20_lambda165) (close _V0vanity_V0compiler_V0cps_V20_lambda170)) ((bruijn ##k.1233 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL(VGetArg(upenv, 7-1, 24), runtime,
      upenv->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda165, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda170, env)}));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k571(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k571" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k571, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k571, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1234 0 0) ((close _V0vanity_V0compiler_V0cps_V20_k572) (##inline ##sys.cdr (bruijn ##expr.202 2 0))) ((bruijn ##k.1233 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k572, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k570(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k570" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k570, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k570, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.202 1 0)) ((bruijn equal? 5 27) (close _V0vanity_V0compiler_V0cps_V20_k571) 'letrec (##inline ##sys.car (bruijn ##expr.202 1 0))) ((bruijn ##k.1233 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 5-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k571, env)}),
      _V0letrec,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k587(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k587" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k587, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k587, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 5 18) (bruijn ##k.1230 2 0) (##string ##string.1490))
V_CALL(VGetArg(upenv, 5-1, 18), runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V10string_D1490.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda164" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda164, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k570) (close _V0vanity_V0compiler_V0cps_V20_k587))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k570, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k587, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda163(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda163" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda163, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda163, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda164) (bruijn letrec-expr 1 1))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda164, env, runtime,
      upenv->vars[1]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda162(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda162" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda162, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda162, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 2 26) (bruijn ##k.1229 0 0) (close _V0vanity_V0compiler_V0cps_V20_lambda163))
V_CALL(upenv->up->vars[26], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda163, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k591(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k591" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k591, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k591, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.213 6 1) (bruijn ##k.1349 3 0) (bruijn ##x.1352 0 0))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k590(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k590" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k590, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k590, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1351 0 0) ((bruijn optimize-let 7 15) (close _V0vanity_V0compiler_V0cps_V20_k591) (bruijn expr 6 1)) ((bruijn ##k.1349 2 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 7-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k591, env)}),
      VGetArg(upenv, 6-1, 1));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k589(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k589" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k589, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k589, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.216 0 0)) ((bruijn equal? 7 27) (close _V0vanity_V0compiler_V0cps_V20_k590) 'continuation (##inline ##sys.car (bruijn ##expr.216 0 0))) ((bruijn ##k.1349 1 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL(VGetArg(upenv, 7-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k590, env)}),
      _V0continuation,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k588(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k588" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k588, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k588, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.215 1 0)) ((close _V0vanity_V0compiler_V0cps_V20_k589) (##inline ##sys.car (bruijn ##expr.215 1 0))) ((bruijn ##k.1349 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k589, env, runtime,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k596(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k596" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k596, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k596, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.213 8 1) (bruijn ##k.1343 3 0) (bruijn ##x.1346 0 0))
V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k595(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k595" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k595, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k595, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1345 0 0) ((bruijn optimize-let 9 15) (close _V0vanity_V0compiler_V0cps_V20_k596) (bruijn expr 8 1)) ((bruijn ##k.1343 2 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 9-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k596, env)}),
      VGetArg(upenv, 8-1, 1));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k594(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k594" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k594, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k594, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.218 0 0)) ((bruijn equal? 9 27) (close _V0vanity_V0compiler_V0cps_V20_k595) 'lambda (##inline ##sys.car (bruijn ##expr.218 0 0))) ((bruijn ##k.1343 1 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL(VGetArg(upenv, 9-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k595, env)}),
      _V0lambda,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k593(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k593" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k593, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k593, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.217 1 0)) ((close _V0vanity_V0compiler_V0cps_V20_k594) (##inline ##sys.car (bruijn ##expr.217 1 0))) ((bruijn ##k.1343 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k594, env, runtime,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k600(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k600" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k600, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k600, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.213 9 1) (bruijn ##k.1338 2 0) (bruijn ##x.1340 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k599(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k599" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k599, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k599, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1339 0 0) ((bruijn optimize-letrec 10 16) (close _V0vanity_V0compiler_V0cps_V20_k600) (bruijn expr 9 1)) ((bruijn ##k.1338 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 10-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k600, env)}),
      VGetArg(upenv, 9-1, 1));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k598(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k598" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k598, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k598, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.219 1 0)) ((bruijn equal? 10 27) (close _V0vanity_V0compiler_V0cps_V20_k599) 'letrec (##inline ##sys.car (bruijn ##expr.219 1 0))) ((bruijn ##k.1338 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 10-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k599, env)}),
      _V0letrec,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k607(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k607" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k607, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k607, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.213 14 1) (bruijn ##k.1326 5 0) (bruijn ##x.1333 0 0))
V_CALL(VGetArg(upenv, 14-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k606(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k606" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k606, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k606, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.223 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.223 0 0))) ((bruijn optimize-apply 15 17) (close _V0vanity_V0compiler_V0cps_V20_k607) (##inline ##sys.car (bruijn ##expr.222 1 0))) ((bruijn ##k.1326 4 0) #f)) ((bruijn ##k.1326 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 15-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k607, env)}),
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k605(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k605" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k605, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k605, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.222 0 0)) ((close _V0vanity_V0compiler_V0cps_V20_k606) (##inline ##sys.cdr (bruijn ##expr.222 0 0))) ((bruijn ##k.1326 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k606, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k604(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k604" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k604, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k604, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.221 0 0)) (if (##inline ##sys.eq? #t (##inline ##sys.car (bruijn ##expr.221 0 0))) ((close _V0vanity_V0compiler_V0cps_V20_k605) (##inline ##sys.cdr (bruijn ##expr.221 0 0))) ((bruijn ##k.1326 2 0) #f)) ((bruijn ##k.1326 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineEq(
        VEncodeBool(true),
        VInlineCar(
        _var0)))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k605, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k603(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k603" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k603, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k603, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1327 0 0) ((close _V0vanity_V0compiler_V0cps_V20_k604) (##inline ##sys.cdr (bruijn ##expr.220 2 0))) ((bruijn ##k.1326 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k604, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k602(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k602" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k602, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k602, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.220 1 0)) ((bruijn equal? 12 27) (close _V0vanity_V0compiler_V0cps_V20_k603) 'if (##inline ##sys.car (bruijn ##expr.220 1 0))) ((bruijn ##k.1326 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 12-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k603, env)}),
      _V0if,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k614(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k614" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k614, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k614, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.213 16 1) (bruijn ##k.1314 5 0) (bruijn ##x.1321 0 0))
V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k613(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k613" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k613, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k613, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.227 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.227 0 0))) ((bruijn optimize-apply 17 17) (close _V0vanity_V0compiler_V0cps_V20_k614) (##inline ##sys.car (bruijn ##expr.227 0 0))) ((bruijn ##k.1314 4 0) #f)) ((bruijn ##k.1314 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 17-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k614, env)}),
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k612(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k612" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k612, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k612, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.226 0 0)) ((close _V0vanity_V0compiler_V0cps_V20_k613) (##inline ##sys.cdr (bruijn ##expr.226 0 0))) ((bruijn ##k.1314 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k613, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k611(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k611" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k611, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k611, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.225 0 0)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.225 0 0))) ((close _V0vanity_V0compiler_V0cps_V20_k612) (##inline ##sys.cdr (bruijn ##expr.225 0 0))) ((bruijn ##k.1314 2 0) #f)) ((bruijn ##k.1314 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineEq(
        VEncodeBool(false),
        VInlineCar(
        _var0)))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k612, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k610(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k610" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k610, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k610, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1315 0 0) ((close _V0vanity_V0compiler_V0cps_V20_k611) (##inline ##sys.cdr (bruijn ##expr.224 2 0))) ((bruijn ##k.1314 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k611, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k609(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k609" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k609, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k609, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.224 1 0)) ((bruijn equal? 14 27) (close _V0vanity_V0compiler_V0cps_V20_k610) 'if (##inline ##sys.car (bruijn ##expr.224 1 0))) ((bruijn ##k.1314 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 14-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k610, env)}),
      _V0if,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k622(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k622" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k622, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k622, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.213 19 1) (bruijn ##k.1299 6 0) (##inline ##sys.cons 'if (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.229 4 0)) (##inline ##sys.cons (bruijn ##x.1308 1 0) (##inline ##sys.cons (bruijn ##x.1310 0 0) '())))))
V_CALL(VGetArg(upenv, 19-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      VInlineCons(
        _V0if,
        VInlineCons(
        VInlineCar(
        upenv->up->up->up->vars[0]),
        VInlineCons(
        upenv->vars[0],
        VInlineCons(
        _var0,
        VNULL)))));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k621(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k621" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k621, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k621, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn optimize-apply 20 17) (close _V0vanity_V0compiler_V0cps_V20_k622) (##inline ##sys.car (bruijn ##expr.231 1 0)))
V_CALL(VGetArg(upenv, 20-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k622, env)}),
      VInlineCar(
        upenv->vars[0]));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k620(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k620" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k620, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k620, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.231 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.231 0 0))) ((bruijn optimize-apply 19 17) (close _V0vanity_V0compiler_V0cps_V20_k621) (##inline ##sys.car (bruijn ##expr.230 1 0))) ((bruijn ##k.1299 4 0) #f)) ((bruijn ##k.1299 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 19-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k621, env)}),
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k619(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k619" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k619, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k619, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.230 0 0)) ((close _V0vanity_V0compiler_V0cps_V20_k620) (##inline ##sys.cdr (bruijn ##expr.230 0 0))) ((bruijn ##k.1299 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k620, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k618(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k618" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k618, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k618, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.229 0 0)) ((close _V0vanity_V0compiler_V0cps_V20_k619) (##inline ##sys.cdr (bruijn ##expr.229 0 0))) ((bruijn ##k.1299 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k619, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k617(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k617" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k617, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k617, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1300 0 0) ((close _V0vanity_V0compiler_V0cps_V20_k618) (##inline ##sys.cdr (bruijn ##expr.228 2 0))) ((bruijn ##k.1299 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k618, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k616(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k616" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k616, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k616, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.228 1 0)) ((bruijn equal? 16 27) (close _V0vanity_V0compiler_V0cps_V20_k617) 'if (##inline ##sys.car (bruijn ##expr.228 1 0))) ((bruijn ##k.1299 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 16-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k617, env)}),
      _V0if,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k630(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k630" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k630, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k630, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1296 1 0) ((bruijn lookup-inline 24 19) (bruijn ##k.1297 0 0) (bruijn f 5 0)) ((bruijn ##k.1297 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 24-1, 19), runtime,
      _var0,
      VGetArg(upenv, 5-1, 0));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k634(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k634" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k634, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k634, runtime, upenv, 1, argc, _var0) {
  // ((bruijn optimize-apply 26 17) (bruijn ##k.1285 2 0) (##inline ##sys.cons (bruijn ##x.1287 1 0) (##inline ##sys.cons (##inline ##sys.cons '##inline (##inline ##sys.cons (bruijn f 8 0) (bruijn ##x.1291 0 0))) '())))
V_CALL(VGetArg(upenv, 26-1, 17), runtime,
      upenv->up->vars[0],
      VInlineCons(
        upenv->vars[0],
        VInlineCons(
        VInlineCons(
        _V10inline,
        VInlineCons(
        VGetArg(upenv, 8-1, 0),
        _var0)),
        VNULL)));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k633(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k633" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k633, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k633, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn map 26 23) (close _V0vanity_V0compiler_V0cps_V20_k634) (bruijn optimize-atom 25 18) (bruijn xs 4 0))
V_CALL(VGetArg(upenv, 26-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k634, env)}),
      VGetArg(upenv, 25-1, 18),
      upenv->up->up->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k638(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k638" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k638, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k638, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 29 21) (bruijn ##k.1285 4 0) (bruijn ##x.1292 3 0) (bruijn ##x.1293 0 0))
V_CALL(VGetArg(upenv, 29-1, 21), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k637(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k637" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k637, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k637, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 28 21) (close _V0vanity_V0compiler_V0cps_V20_k638) (bruijn ##x.1294 1 0) (bruijn ##x.1295 0 0))
V_CALL(VGetArg(upenv, 28-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k638, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k636(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k636" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k636, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k636, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn map 27 23) (close _V0vanity_V0compiler_V0cps_V20_k637) (bruijn optimize-atom 26 18) (bruijn xs 5 0))
V_CALL(VGetArg(upenv, 27-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k637, env)}),
      VGetArg(upenv, 26-1, 18),
      VGetArg(upenv, 5-1, 0));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k635(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k635" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k635, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k635, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn optimize-atom 25 18) (close _V0vanity_V0compiler_V0cps_V20_k636) (bruijn k 5 0))
V_CALL(VGetArg(upenv, 25-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k636, env)}),
      VGetArg(upenv, 5-1, 0));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k632(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k632" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k632, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k632, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1284 1 0) ((bruijn optimize-atom 24 18) (close _V0vanity_V0compiler_V0cps_V20_k633) (bruijn k 4 0)) ((bruijn optimize-atom 24 18) (close _V0vanity_V0compiler_V0cps_V20_k635) (bruijn f 6 0)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 24-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k633, env)}),
      upenv->up->up->up->vars[0]);
} else {
V_CALL(VGetArg(upenv, 24-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k635, env)}),
      VGetArg(upenv, 6-1, 0));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k639(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k639" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k639, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k639, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.213 22 1) (bruijn ##k.1281 7 0) (bruijn ##x.1283 0 0))
V_CALL(VGetArg(upenv, 22-1, 1), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k631(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k631" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k631, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k631, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k632) (close _V0vanity_V0compiler_V0cps_V20_k639))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k632, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k639, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k629(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k629" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k629, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k629, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k630) (close _V0vanity_V0compiler_V0cps_V20_k631))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k630, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k631, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k628(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k628" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k628, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k628, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn symbol? 22 20) (close _V0vanity_V0compiler_V0cps_V20_k629) (bruijn f 3 0))
V_CALL(VGetArg(upenv, 22-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k629, env)}),
      upenv->up->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k627(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k627" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k627, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k627, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k628) (##inline ##sys.cdr (bruijn ##expr.233 1 0)))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k628, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k626(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k626" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k626, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k626, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.233 0 0)) ((close _V0vanity_V0compiler_V0cps_V20_k627) (##inline ##sys.car (bruijn ##expr.233 0 0))) ((bruijn ##k.1281 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k627, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k625(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k625" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k625, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k625, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k626) (##inline ##sys.cdr (bruijn ##expr.232 2 0)))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k626, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k624(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k624" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k624, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k624, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.232 1 0)) ((close _V0vanity_V0compiler_V0cps_V20_k625) (##inline ##sys.car (bruijn ##expr.232 1 0))) ((bruijn ##k.1281 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k625, env, runtime,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k641(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k641" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k641, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k641, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.213 16 1) (bruijn ##k.1271 16 0) (bruijn ##x.1279 0 0))
V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      VGetArg(upenv, 16-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k640(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k640" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k640, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k640, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn compiler-error 18 22) (close _V0vanity_V0compiler_V0cps_V20_k641) (##string ##string.1495) (bruijn expr 16 1))
V_CALL(VGetArg(upenv, 18-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k641, env)}),
      VEncodePointer(&_V10string_D1495.sym, VPOINTER_OTHER),
      VGetArg(upenv, 16-1, 1));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda180(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda180" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda180, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k624) (close _V0vanity_V0compiler_V0cps_V20_k640))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k624, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k640, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k623(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k623" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k623, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k623, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda180) (bruijn ##input.214 12 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda180, env, runtime,
      VGetArg(upenv, 12-1, 0));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda179(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda179" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda179, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k616) (close _V0vanity_V0compiler_V0cps_V20_k623))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k616, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k623, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k615(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k615" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k615, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k615, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda179) (bruijn ##input.214 10 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda179, env, runtime,
      VGetArg(upenv, 10-1, 0));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda178(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda178" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda178, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k609) (close _V0vanity_V0compiler_V0cps_V20_k615))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k609, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k615, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k608(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k608" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k608, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k608, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda178) (bruijn ##input.214 8 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda178, env, runtime,
      VGetArg(upenv, 8-1, 0));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda177(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda177" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda177, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k602) (close _V0vanity_V0compiler_V0cps_V20_k608))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k602, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k608, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k601(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k601" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k601, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k601, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda177) (bruijn ##input.214 6 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda177, env, runtime,
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda176(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda176" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda176, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k598) (close _V0vanity_V0compiler_V0cps_V20_k601))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k598, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k601, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k597(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k597" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k597, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k597, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda176) (bruijn ##input.214 4 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda176, env, runtime,
      upenv->up->up->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda175(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda175" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda175, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k593) (close _V0vanity_V0compiler_V0cps_V20_k597))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k593, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k597, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k592(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k592" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k592, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k592, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda175) (bruijn ##input.214 2 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda175, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda174(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda174" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda174, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k588) (close _V0vanity_V0compiler_V0cps_V20_k592))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k588, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k592, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda173(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda173" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda173, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda174) (bruijn ##input.214 0 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda174, env, runtime,
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda172(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda172" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda172, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda172, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda173) (bruijn expr 1 1))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda173, env, runtime,
      upenv->vars[1]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda171(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda171" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda171, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda171, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 2 26) (bruijn ##k.1270 0 0) (close _V0vanity_V0compiler_V0cps_V20_lambda172))
V_CALL(upenv->up->vars[26], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda172, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k643(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k643" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k643, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k643, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1415 0 0) ((bruijn ##kk.234 4 1) (bruijn ##k.1414 1 0) (bruijn expr 5 1)) ((bruijn ##k.1414 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      VGetArg(upenv, 5-1, 1));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k642(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k642" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k642, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k642, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.236 1 0)) ((bruijn equal? 6 27) (close _V0vanity_V0compiler_V0cps_V20_k643) 'quote (##inline ##sys.car (bruijn ##expr.236 1 0))) ((bruijn ##k.1414 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 6-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k643, env)}),
      _V0quote,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k646(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k646" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k646, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k646, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1411 0 0) ((bruijn ##kk.234 6 1) (bruijn ##k.1410 1 0) (bruijn expr 7 1)) ((bruijn ##k.1410 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      upenv->vars[0],
      VGetArg(upenv, 7-1, 1));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k645(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k645" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k645, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k645, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.237 1 0)) ((bruijn equal? 8 27) (close _V0vanity_V0compiler_V0cps_V20_k646) '##foreign.function (##inline ##sys.car (bruijn ##expr.237 1 0))) ((bruijn ##k.1410 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 8-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k646, env)}),
      _V10foreign_Dfunction,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k649(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k649" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k649, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k649, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1407 0 0) ((bruijn ##kk.234 8 1) (bruijn ##k.1406 1 0) (bruijn expr 9 1)) ((bruijn ##k.1406 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      upenv->vars[0],
      VGetArg(upenv, 9-1, 1));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k648(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k648" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k648, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k648, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.238 1 0)) ((bruijn equal? 10 27) (close _V0vanity_V0compiler_V0cps_V20_k649) '##inline (##inline ##sys.car (bruijn ##expr.238 1 0))) ((bruijn ##k.1406 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 10-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k649, env)}),
      _V10inline,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k653(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k653" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k653, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k653, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.234 11 1) (bruijn ##k.1401 2 0) (bruijn ##x.1403 0 0))
V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k652(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k652" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k652, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k652, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1402 0 0) ((bruijn optimize-lambda 12 12) (close _V0vanity_V0compiler_V0cps_V20_k653) (bruijn expr 11 1)) ((bruijn ##k.1401 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 12-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k653, env)}),
      VGetArg(upenv, 11-1, 1));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k651(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k651" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k651, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k651, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.239 1 0)) ((bruijn equal? 12 27) (close _V0vanity_V0compiler_V0cps_V20_k652) 'lambda (##inline ##sys.car (bruijn ##expr.239 1 0))) ((bruijn ##k.1401 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 12-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k652, env)}),
      _V0lambda,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k657(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k657" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k657, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k657, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.234 13 1) (bruijn ##k.1396 2 0) (bruijn ##x.1398 0 0))
V_CALL(VGetArg(upenv, 13-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k656(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k656" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k656, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k656, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1397 0 0) ((bruijn optimize-lambda 14 12) (close _V0vanity_V0compiler_V0cps_V20_k657) (bruijn expr 13 1)) ((bruijn ##k.1396 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 14-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k657, env)}),
      VGetArg(upenv, 13-1, 1));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k655(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k655" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k655, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k655, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.240 1 0)) ((bruijn equal? 14 27) (close _V0vanity_V0compiler_V0cps_V20_k656) 'continuation (##inline ##sys.car (bruijn ##expr.240 1 0))) ((bruijn ##k.1396 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 14-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k656, env)}),
      _V0continuation,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k663(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k663" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k663, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k663, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.245 5 1) (bruijn ##k.1383 2 0) (bruijn ##expr.247 3 1) (bruijn ##x.1384 1 0) (bruijn ##x.1385 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->vars[0],
      upenv->up->up->vars[1],
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k662(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k662" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k662, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k662, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 23 25) (close _V0vanity_V0compiler_V0cps_V20_k663) (bruijn ##body.244 2 3))
V_CALL(VGetArg(upenv, 23-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k663, env)}),
      upenv->up->vars[3]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k661(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k661" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k661, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k661, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.247 1 1))) ((bruijn reverse 22 25) (close _V0vanity_V0compiler_V0cps_V20_k662) (bruijn ##args.243 1 2)) ((bruijn ##k.1383 0 0) #f))
if(VDecodeBool(
VInlineNot(
        VInlinePairP(
        upenv->vars[1])))) {
V_CALL(VGetArg(upenv, 22-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k662, env)}),
      upenv->vars[2]);
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k667(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k667" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k667, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k667, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.249 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.249 0 0))) ((bruijn ##kk.246 3 1) (bruijn ##k.1375 1 0) (##inline ##sys.cdr (bruijn ##expr.247 6 1)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.248 2 0)) (bruijn ##args.243 6 2)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.249 0 0)) (bruijn ##body.244 6 3))) ((bruijn ##k.1375 1 0) #f)) ((bruijn ##k.1375 1 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(upenv->up->up->vars[1], runtime,
      upenv->vars[0],
      VInlineCdr(
        VGetArg(upenv, 6-1, 1)),
      VInlineCons(
        VInlineCar(
        upenv->up->vars[0]),
        VGetArg(upenv, 6-1, 2)),
      VInlineCons(
        VInlineCar(
        _var0),
        VGetArg(upenv, 6-1, 3)));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k666(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k666" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k666, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k666, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.248 1 0)) ((close _V0vanity_V0compiler_V0cps_V20_k667) (##inline ##sys.cdr (bruijn ##expr.248 1 0))) ((bruijn ##k.1375 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k667, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k670(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k670" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k670, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k670, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.245 9 1) (bruijn ##k.1370 4 0) (bruijn ##expr.247 7 1) (bruijn ##x.1372 1 0) (bruijn ##x.1373 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 7-1, 1),
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k669(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k669" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k669, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k669, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 27 25) (close _V0vanity_V0compiler_V0cps_V20_k670) (bruijn ##body.244 6 3))
V_CALL(VGetArg(upenv, 27-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k670, env)}),
      VGetArg(upenv, 6-1, 3));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k668(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k668" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k668, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k668, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 26 25) (close _V0vanity_V0compiler_V0cps_V20_k669) (bruijn ##args.243 5 2))
V_CALL(VGetArg(upenv, 26-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k669, env)}),
      VGetArg(upenv, 5-1, 2));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k665(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k665" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k665, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k665, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k666) (close _V0vanity_V0compiler_V0cps_V20_k668))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k666, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k668, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda194(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda194" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda194, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda194, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0vanity_V0compiler_V0cps_V20_k665) (##inline ##sys.car (bruijn ##expr.247 3 1)))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k665, env, runtime,
      VInlineCar(
        upenv->up->up->vars[1]));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda193(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda193" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda193, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 23 26) (bruijn ##k.1369 0 0) (close _V0vanity_V0compiler_V0cps_V20_lambda194))
V_CALL(VGetArg(upenv, 23-1, 26), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda194, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k664(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k664" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k664, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k664, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call-with-values 22 24) (bruijn ##k.1367 1 0) (close _V0vanity_V0compiler_V0cps_V20_lambda193) (bruijn loop 2 0))
V_CALL(VGetArg(upenv, 22-1, 24), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda193, env)}),
      upenv->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda192(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda192" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda192, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda192, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((close _V0vanity_V0compiler_V0cps_V20_k661) (close _V0vanity_V0compiler_V0cps_V20_k664))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k661, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k664, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda191(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda191" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda191, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda191, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V0vanity_V0compiler_V0cps_V20_lambda192)) ((bruijn loop 0 0) (bruijn ##k.1366 1 0) (##inline ##sys.cdr (bruijn ##expr.241 5 0)) '() '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda192, env)});
V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VInlineCdr(
        VGetArg(upenv, 5-1, 0)),
      VNULL,
      VNULL);
    }
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda190(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda190" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda190, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 18 26) (bruijn ##k.1365 0 0) (close _V0vanity_V0compiler_V0cps_V20_lambda191))
V_CALL(VGetArg(upenv, 18-1, 26), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda191, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k671(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k671" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k671, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k671, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.234 16 1) (bruijn ##k.1387 1 0) (##inline ##sys.cons 'case-lambda (bruijn ##x.1390 0 0)))
V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      upenv->vars[0],
      VInlineCons(
        _V0case__lambda,
        _var0));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k672(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k672" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k672, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k672, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.1391 1 0) (##inline ##sys.cons (bruijn args 1 1) (##inline ##sys.cons (bruijn ##x.1393 0 0) '())))
V_CALL(upenv->vars[0], runtime,
      VInlineCons(
        upenv->vars[1],
        VInlineCons(
        _var0,
        VNULL)));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda196(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda196" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda196, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda196, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn optimize-apply 18 17) (close _V0vanity_V0compiler_V0cps_V20_k672) (bruijn body 0 2))
V_CALL(VGetArg(upenv, 18-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k672, env)}),
      _var2);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda195(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda195" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda195, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda195, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((bruijn map 18 23) (close _V0vanity_V0compiler_V0cps_V20_k671) (close _V0vanity_V0compiler_V0cps_V20_lambda196) (bruijn args 0 2) (bruijn body 0 3)) ((bruijn ##k.1387 0 0) #f))
if(VDecodeBool(
VInlineNullP(
        _var1))) {
V_CALL(VGetArg(upenv, 18-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k671, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda196, env)}),
      _var2,
      _var3);
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k660(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k660" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k660, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k660, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1364 0 0) ((bruijn call-with-values 17 24) (bruijn ##k.1363 1 0) (close _V0vanity_V0compiler_V0cps_V20_lambda190) (close _V0vanity_V0compiler_V0cps_V20_lambda195)) ((bruijn ##k.1363 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 17-1, 24), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda190, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda195, env)}));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k659(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k659" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k659, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k659, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.241 1 0)) ((bruijn equal? 16 27) (close _V0vanity_V0compiler_V0cps_V20_k660) 'case-lambda (##inline ##sys.car (bruijn ##expr.241 1 0))) ((bruijn ##k.1363 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 16-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k660, env)}),
      _V0case__lambda,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k673(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k673" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k673, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k673, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.234 13 1) (bruijn ##k.1355 13 0) (bruijn expr 14 1))
V_CALL(VGetArg(upenv, 13-1, 1), runtime,
      VGetArg(upenv, 13-1, 0),
      VGetArg(upenv, 14-1, 1));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda189(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda189" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda189, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k659) (close _V0vanity_V0compiler_V0cps_V20_k673))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k659, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k673, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k658(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k658" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k658, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k658, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda189) (bruijn ##input.235 10 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda189, env, runtime,
      VGetArg(upenv, 10-1, 0));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda188(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda188" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda188, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k655) (close _V0vanity_V0compiler_V0cps_V20_k658))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k655, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k658, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k654(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k654" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k654, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k654, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda188) (bruijn ##input.235 8 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda188, env, runtime,
      VGetArg(upenv, 8-1, 0));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda187(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda187" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda187, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k651) (close _V0vanity_V0compiler_V0cps_V20_k654))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k651, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k654, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k650(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k650" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k650, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k650, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda187) (bruijn ##input.235 6 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda187, env, runtime,
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda186(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda186" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda186, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k648) (close _V0vanity_V0compiler_V0cps_V20_k650))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k648, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k650, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k647(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k647" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k647, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k647, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda186) (bruijn ##input.235 4 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda186, env, runtime,
      upenv->up->up->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda185(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda185" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda185, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k645) (close _V0vanity_V0compiler_V0cps_V20_k647))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k645, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k647, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k644(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k644" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k644, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k644, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda185) (bruijn ##input.235 2 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda185, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda184(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda184" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda184, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k642) (close _V0vanity_V0compiler_V0cps_V20_k644))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k642, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k644, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda183(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda183" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda183, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda184) (bruijn ##input.235 0 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda184, env, runtime,
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda182(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda182" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda182, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda182, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda183) (bruijn expr 1 1))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda183, env, runtime,
      upenv->vars[1]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda181(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda181" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda181, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda181, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 2 26) (bruijn ##k.1354 0 0) (close _V0vanity_V0compiler_V0cps_V20_lambda182))
V_CALL(upenv->up->vars[26], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda182, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k675(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k675" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k675, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k675, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1448 0 0) ((bruijn ##kk.250 4 1) (bruijn ##k.1447 1 0) (bruijn expr 5 1)) ((bruijn ##k.1447 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      VGetArg(upenv, 5-1, 1));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k674(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k674" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k674, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k674, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.252 1 0)) ((bruijn equal? 6 27) (close _V0vanity_V0compiler_V0cps_V20_k675) 'quote (##inline ##sys.car (bruijn ##expr.252 1 0))) ((bruijn ##k.1447 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 6-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k675, env)}),
      _V0quote,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k678(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k678" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k678, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k678, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1444 0 0) ((bruijn ##kk.250 6 1) (bruijn ##k.1443 1 0) (bruijn expr 7 1)) ((bruijn ##k.1443 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      upenv->vars[0],
      VGetArg(upenv, 7-1, 1));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k677(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k677" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k677, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k677, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.253 1 0)) ((bruijn equal? 8 27) (close _V0vanity_V0compiler_V0cps_V20_k678) '##foreign.function (##inline ##sys.car (bruijn ##expr.253 1 0))) ((bruijn ##k.1443 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 8-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k678, env)}),
      _V10foreign_Dfunction,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k681(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k681" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k681, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k681, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1440 0 0) ((bruijn ##kk.250 8 1) (bruijn ##k.1439 1 0) (bruijn expr 9 1)) ((bruijn ##k.1439 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      upenv->vars[0],
      VGetArg(upenv, 9-1, 1));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k680(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k680" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k680, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k680, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.254 1 0)) ((bruijn equal? 10 27) (close _V0vanity_V0compiler_V0cps_V20_k681) '##inline (##inline ##sys.car (bruijn ##expr.254 1 0))) ((bruijn ##k.1439 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 10-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k681, env)}),
      _V10inline,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k685(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k685" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k685, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k685, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.250 11 1) (bruijn ##k.1434 2 0) (bruijn ##x.1436 0 0))
V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k684(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k684" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k684, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k684, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1435 0 0) ((bruijn optimize-lambda 12 12) (close _V0vanity_V0compiler_V0cps_V20_k685) (bruijn expr 11 1)) ((bruijn ##k.1434 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 12-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k685, env)}),
      VGetArg(upenv, 11-1, 1));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k683(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k683" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k683, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k683, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.255 1 0)) ((bruijn equal? 12 27) (close _V0vanity_V0compiler_V0cps_V20_k684) 'lambda (##inline ##sys.car (bruijn ##expr.255 1 0))) ((bruijn ##k.1434 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 12-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k684, env)}),
      _V0lambda,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k689(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k689" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k689, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k689, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.250 13 1) (bruijn ##k.1429 2 0) (bruijn ##x.1431 0 0))
V_CALL(VGetArg(upenv, 13-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k688(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k688" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k688, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k688, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1430 0 0) ((bruijn optimize-lambda 14 12) (close _V0vanity_V0compiler_V0cps_V20_k689) (bruijn expr 13 1)) ((bruijn ##k.1429 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 14-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k689, env)}),
      VGetArg(upenv, 13-1, 1));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k687(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k687" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k687, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k687, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.256 1 0)) ((bruijn equal? 14 27) (close _V0vanity_V0compiler_V0cps_V20_k688) 'continuation (##inline ##sys.car (bruijn ##expr.256 1 0))) ((bruijn ##k.1429 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 14-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k688, env)}),
      _V0continuation,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k692(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k692" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k692, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k692, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.250 14 1) (bruijn ##k.1426 1 0) (bruijn ##x.1427 0 0))
V_CALL(VGetArg(upenv, 14-1, 1), runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k691(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k691" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k691, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k691, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.257 1 0)) ((bruijn optimize-apply 15 17) (close _V0vanity_V0compiler_V0cps_V20_k692) (bruijn expr 14 1)) ((bruijn ##k.1426 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 15-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k692, env)}),
      VGetArg(upenv, 14-1, 1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k693(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k693" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k693, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k693, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.250 13 1) (bruijn ##k.1418 13 0) (bruijn expr 14 1))
V_CALL(VGetArg(upenv, 13-1, 1), runtime,
      VGetArg(upenv, 13-1, 0),
      VGetArg(upenv, 14-1, 1));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda205(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda205" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda205, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k691) (close _V0vanity_V0compiler_V0cps_V20_k693))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k691, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k693, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k690(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k690" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k690, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k690, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda205) (bruijn ##input.251 10 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda205, env, runtime,
      VGetArg(upenv, 10-1, 0));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda204(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda204" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda204, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k687) (close _V0vanity_V0compiler_V0cps_V20_k690))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k687, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k690, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k686(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k686" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k686, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k686, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda204) (bruijn ##input.251 8 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda204, env, runtime,
      VGetArg(upenv, 8-1, 0));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda203(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda203" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda203, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k683) (close _V0vanity_V0compiler_V0cps_V20_k686))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k683, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k686, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k682(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k682" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k682, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k682, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda203) (bruijn ##input.251 6 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda203, env, runtime,
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda202(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda202" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda202, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k680) (close _V0vanity_V0compiler_V0cps_V20_k682))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k680, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k682, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k679(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k679" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k679, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k679, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda202) (bruijn ##input.251 4 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda202, env, runtime,
      upenv->up->up->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda201(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda201" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda201, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k677) (close _V0vanity_V0compiler_V0cps_V20_k679))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k677, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k679, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k676(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k676" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k676, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k676, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda201) (bruijn ##input.251 2 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda201, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda200(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda200" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda200, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k674) (close _V0vanity_V0compiler_V0cps_V20_k676))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k674, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k676, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda199(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda199" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda199, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda200) (bruijn ##input.251 0 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda200, env, runtime,
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda198(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda198" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda198, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda198, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda199) (bruijn expr 1 1))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda199, env, runtime,
      upenv->vars[1]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda197(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda197" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda197, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda197, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 2 26) (bruijn ##k.1417 0 0) (close _V0vanity_V0compiler_V0cps_V20_lambda198))
V_CALL(upenv->up->vars[26], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda198, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k695(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k695" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k695, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k695, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1469 0 0) ((bruijn ##kk.258 4 1) (bruijn ##k.1468 1 0) (bruijn expr 5 0)) ((bruijn ##k.1468 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      VGetArg(upenv, 5-1, 0));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k694(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k694" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k694, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k694, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.260 1 0)) ((bruijn equal? 7 27) (close _V0vanity_V0compiler_V0cps_V20_k695) '##foreign.declare (##inline ##sys.car (bruijn ##expr.260 1 0))) ((bruijn ##k.1468 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 7-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k695, env)}),
      _V10foreign_Ddeclare,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k701(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k701" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k701, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k701, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.258 9 1) (bruijn ##k.1456 4 0) (##inline ##sys.cons '##vcore.declare (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.262 2 0)) (##inline ##sys.cons (bruijn ##x.1464 0 0) '()))))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VInlineCons(
        _V10vcore_Ddeclare,
        VInlineCons(
        VInlineCar(
        upenv->up->vars[0]),
        VInlineCons(
        _var0,
        VNULL))));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k700(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k700" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k700, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k700, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.263 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.263 0 0))) ((bruijn optimize-impl 11 19) (close _V0vanity_V0compiler_V0cps_V20_k701) (##inline ##sys.car (bruijn ##expr.263 0 0))) ((bruijn ##k.1456 3 0) #f)) ((bruijn ##k.1456 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 11-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k701, env)}),
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k699(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k699" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k699, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k699, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.262 0 0)) ((close _V0vanity_V0compiler_V0cps_V20_k700) (##inline ##sys.cdr (bruijn ##expr.262 0 0))) ((bruijn ##k.1456 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k700, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k698(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k698" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k698, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k698, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1457 0 0) ((close _V0vanity_V0compiler_V0cps_V20_k699) (##inline ##sys.cdr (bruijn ##expr.261 2 0))) ((bruijn ##k.1456 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k699, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k697(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k697" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k697, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k697, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.261 1 0)) ((bruijn equal? 9 27) (close _V0vanity_V0compiler_V0cps_V20_k698) '##vcore.declare (##inline ##sys.car (bruijn ##expr.261 1 0))) ((bruijn ##k.1456 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 9-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k698, env)}),
      _V10vcore_Ddeclare,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k703(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k703" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k703, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k703, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.258 6 1) (bruijn ##k.1451 6 0) (bruijn ##x.1454 0 0))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k702(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k702" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k702, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k702, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn optimize-impl 8 19) (close _V0vanity_V0compiler_V0cps_V20_k703) (bruijn expr 6 0))
V_CALL(VGetArg(upenv, 8-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k703, env)}),
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda211(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda211" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda211, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k697) (close _V0vanity_V0compiler_V0cps_V20_k702))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k697, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k702, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k696(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k696" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k696, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k696, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda211) (bruijn ##input.259 2 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda211, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda210(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda210" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda210, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_k694) (close _V0vanity_V0compiler_V0cps_V20_k696))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_k694, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k696, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda209(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda209" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda209, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda210) (bruijn ##input.259 0 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda210, env, runtime,
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda208(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda208" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda208, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda208, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda209) (bruijn expr 1 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda209, env, runtime,
      upenv->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda207(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda207" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda207, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 3 26) (bruijn ##k.1450 1 0) (close _V0vanity_V0compiler_V0cps_V20_lambda208))
V_CALL(upenv->up->up->vars[26], runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda208, env)}));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda206(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda206" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda206, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda206, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda207) (bruijn expr 0 1))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda207, env, runtime,
      _var1);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17, VWORD _var18, VWORD _var19, VWORD _var20, VWORD _var21, VWORD _var22, VWORD _var23, VWORD _var24, VWORD _var25, VWORD _var26, VWORD _var27) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda2" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda2, runtime, upenv, 28, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7, _var8, _var9, _var10, _var11, _var12, _var13, _var14, _var15, _var16, _var17, _var18, _var19, _var20, _var21, _var22, _var23, _var24, _var25, _var26, _var27) {
  struct { VEnv env; VWORD argv[28]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 28, 28, upenv);
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
  // (letrec 21 ((close _V0vanity_V0compiler_V0cps_V20_lambda3) (close _V0vanity_V0compiler_V0cps_V20_lambda46) (close _V0vanity_V0compiler_V0cps_V20_lambda47) (close _V0vanity_V0compiler_V0cps_V20_lambda48) (close _V0vanity_V0compiler_V0cps_V20_lambda49) (close _V0vanity_V0compiler_V0cps_V20_lambda50) (close _V0vanity_V0compiler_V0cps_V20_lambda75) (close _V0vanity_V0compiler_V0cps_V20_lambda76) (close _V0vanity_V0compiler_V0cps_V20_lambda103) (close _V0vanity_V0compiler_V0cps_V20_lambda104) (close _V0vanity_V0compiler_V0cps_V20_lambda129) (close _V0vanity_V0compiler_V0cps_V20_lambda130) (close _V0vanity_V0compiler_V0cps_V20_lambda131) (close _V0vanity_V0compiler_V0cps_V20_lambda138) (close _V0vanity_V0compiler_V0cps_V20_lambda140) (close _V0vanity_V0compiler_V0cps_V20_lambda141) (close _V0vanity_V0compiler_V0cps_V20_lambda162) (close _V0vanity_V0compiler_V0cps_V20_lambda171) (close _V0vanity_V0compiler_V0cps_V20_lambda181) (close _V0vanity_V0compiler_V0cps_V20_lambda197) (close _V0vanity_V0compiler_V0cps_V20_lambda206)) ((bruijn ##k.264 36 0) (##inline ##sys.cons (##inline ##sys.cons 'to-cps (bruijn to-cps 0 0)) (##inline ##sys.cons (##inline ##sys.cons 'optimize (bruijn optimize 0 20)) (##inline ##sys.cons (##inline ##sys.cons 'alpha-convert (bruijn alpha-convert 0 10)) (##inline ##sys.cons (##inline ##sys.cons 'annotate-lambdas (bruijn annotate-lambdas 0 2)) (##inline ##sys.cons (##inline ##sys.cons 'deannotate-lambdas (bruijn deannotate-lambdas 0 3)) '())))))))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[21]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 21, 21, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda3, env)});
    env->vars[1] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda46, env)});
    env->vars[2] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda47, env)});
    env->vars[3] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda48, env)});
    env->vars[4] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda49, env)});
    env->vars[5] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda50, env)});
    env->vars[6] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda75, env)});
    env->vars[7] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda76, env)});
    env->vars[8] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda103, env)});
    env->vars[9] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda104, env)});
    env->vars[10] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda129, env)});
    env->vars[11] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda130, env)});
    env->vars[12] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda131, env)});
    env->vars[13] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda138, env)});
    env->vars[14] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda140, env)});
    env->vars[15] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda141, env)});
    env->vars[16] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda162, env)});
    env->vars[17] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda171, env)});
    env->vars[18] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda181, env)});
    env->vars[19] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda197, env)});
    env->vars[20] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda206, env)});
V_CALL(VGetArg(upenv, 36-1, 0), runtime,
      VInlineCons(
        VInlineCons(
        _V0to__cps,
        env->vars[0]),
        VInlineCons(
        VInlineCons(
        _V0optimize,
        env->vars[20]),
        VInlineCons(
        VInlineCons(
        _V0alpha__convert,
        env->vars[10]),
        VInlineCons(
        VInlineCons(
        _V0annotate__lambdas,
        env->vars[2]),
        VInlineCons(
        VInlineCons(
        _V0deannotate__lambdas,
        env->vars[3]),
        VNULL))))));
    }
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k34, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda2) (bruijn ##x.265 27 0) (bruijn ##x.266 26 0) (bruijn ##x.267 25 0) (bruijn ##x.268 24 0) (bruijn ##x.269 23 0) (bruijn ##x.270 22 0) (bruijn ##x.271 21 0) (bruijn ##x.272 20 0) (bruijn ##x.273 19 0) (bruijn ##x.274 18 0) (bruijn ##x.275 17 0) (bruijn ##x.276 16 0) (bruijn ##x.277 15 0) (bruijn ##x.278 14 0) (bruijn ##x.279 13 0) (bruijn ##x.280 12 0) (bruijn ##x.281 11 0) (bruijn ##x.282 10 0) (bruijn ##x.283 9 0) (bruijn ##x.284 8 0) (bruijn ##x.285 7 0) (bruijn ##x.286 6 0) (bruijn ##x.287 5 0) (bruijn ##x.288 4 0) (bruijn ##x.289 3 0) (bruijn ##x.290 2 0) (bruijn ##x.291 1 0) (bruijn ##x.292 0 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda2, env, runtime,
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
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k33, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 27 0) (close _V0vanity_V0compiler_V0cps_V20_k34) 'equal?)
V_CALL(VGetArg(upenv, 27-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k34, env)}),
      _V0equal_Q);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k32" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k32, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 26 0) (close _V0vanity_V0compiler_V0cps_V20_k33) 'call/cc)
V_CALL(VGetArg(upenv, 26-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k33, env)}),
      _V0call_Wcc);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k31" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k31, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 25 0) (close _V0vanity_V0compiler_V0cps_V20_k32) 'reverse)
V_CALL(VGetArg(upenv, 25-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k32, env)}),
      _V0reverse);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k30" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k30, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 24 0) (close _V0vanity_V0compiler_V0cps_V20_k31) 'call-with-values)
V_CALL(VGetArg(upenv, 24-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k31, env)}),
      _V0call__with__values);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k29, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 23 0) (close _V0vanity_V0compiler_V0cps_V20_k30) 'map)
V_CALL(VGetArg(upenv, 23-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k30, env)}),
      _V0map);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k28, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 22 0) (close _V0vanity_V0compiler_V0cps_V20_k29) 'compiler-error)
V_CALL(VGetArg(upenv, 22-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k29, env)}),
      _V0compiler__error);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k27, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 21 0) (close _V0vanity_V0compiler_V0cps_V20_k28) 'cons)
V_CALL(VGetArg(upenv, 21-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k28, env)}),
      _V0cons);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k26, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 20 0) (close _V0vanity_V0compiler_V0cps_V20_k27) 'symbol?)
V_CALL(VGetArg(upenv, 20-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k27, env)}),
      _V0symbol_Q);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k25, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 19 0) (close _V0vanity_V0compiler_V0cps_V20_k26) 'lookup-inline)
V_CALL(VGetArg(upenv, 19-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k26, env)}),
      _V0lookup__inline);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k24, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 18 0) (close _V0vanity_V0compiler_V0cps_V20_k25) 'error)
V_CALL(VGetArg(upenv, 18-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k25, env)}),
      _V0error);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k23, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 17 0) (close _V0vanity_V0compiler_V0cps_V20_k24) 'list)
V_CALL(VGetArg(upenv, 17-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k24, env)}),
      _V0list);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k22, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 16 0) (close _V0vanity_V0compiler_V0cps_V20_k23) 'not)
V_CALL(VGetArg(upenv, 16-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k23, env)}),
      _V0not);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k21, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 15 0) (close _V0vanity_V0compiler_V0cps_V20_k22) 'length)
V_CALL(VGetArg(upenv, 15-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k22, env)}),
      _V0length);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k20, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 14 0) (close _V0vanity_V0compiler_V0cps_V20_k21) '<=)
V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k21, env)}),
      _V0_L_E);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k19, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 13 0) (close _V0vanity_V0compiler_V0cps_V20_k20) '=)
V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k20, env)}),
      _V0_E);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k18, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 12 0) (close _V0vanity_V0compiler_V0cps_V20_k19) 'eqv?)
V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k19, env)}),
      _V0eqv_Q);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k17, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 11 0) (close _V0vanity_V0compiler_V0cps_V20_k18) 'atom?)
V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k18, env)}),
      _V0atom_Q);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k16, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 10 0) (close _V0vanity_V0compiler_V0cps_V20_k17) 'pair?)
V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k17, env)}),
      _V0pair_Q);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k15, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 9 0) (close _V0vanity_V0compiler_V0cps_V20_k16) 'memv)
V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k16, env)}),
      _V0memv);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k14, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 8 0) (close _V0vanity_V0compiler_V0cps_V20_k15) 'car)
V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k15, env)}),
      _V0car);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k13, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 7 0) (close _V0vanity_V0compiler_V0cps_V20_k14) 'cdr)
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k14, env)}),
      _V0cdr);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k12, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 6 0) (close _V0vanity_V0compiler_V0cps_V20_k13) 'null?)
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k13, env)}),
      _V0null_Q);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k11, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 5 0) (close _V0vanity_V0compiler_V0cps_V20_k12) '+)
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k12, env)}),
      _V0_P);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k10, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 4 0) (close _V0vanity_V0compiler_V0cps_V20_k11) 'fold)
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k11, env)}),
      _V0fold);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k9, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 3 0) (close _V0vanity_V0compiler_V0cps_V20_k10) 'apply)
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k10, env)}),
      _V0apply);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k8, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 2 0) (close _V0vanity_V0compiler_V0cps_V20_k9) 'cadr)
V_CALL(upenv->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k9, env)}),
      _V0cadr);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k7, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 1 0) (close _V0vanity_V0compiler_V0cps_V20_k8) 'gensym)
V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k8, env)}),
      _V0gensym);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k6, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 0 0) (close _V0vanity_V0compiler_V0cps_V20_k7) 'eq?)
V_CALL(_var0, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k7, env)}),
      _V0eq_Q);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k5, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.make-import (close _V0vanity_V0compiler_V0cps_V20_k6) (##string ##string.1496) (bruijn ##x.1480 4 0) (bruijn ##x.1481 3 0) (bruijn ##x.1482 2 0) (bruijn ##x.1483 1 0) (bruijn ##x.1484 0 0))
    V_CALL_FUNC(VMakeImport2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k6, env)}),
      VEncodePointer(&_V10string_D1496.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[0],
      upenv->up->up->vars[0],
      upenv->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k4, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0cps_V20_k5) (##string ##string.1497))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k5, env)}),
      VEncodePointer(&_V10string_D1497.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k3, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0cps_V20_k4) (##string ##string.1498))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k4, env)}),
      VEncodePointer(&_V10string_D1498.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k2, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0cps_V20_k3) (##string ##string.1499))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k3, env)}),
      VEncodePointer(&_V10string_D1499.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_k1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0cps_V20_k2) (##string ##string.1500))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k2, env)}),
      VEncodePointer(&_V10string_D1500.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0cps_V20_k1) (##string ##string.1501))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k1, env)}),
      VEncodePointer(&_V10string_D1501.sym, VPOINTER_OTHER));
 }
}
VFunc _V0vanity_V0compiler_V0cps_V20 = (VFunc)_V0vanity_V0compiler_V0cps_V20_lambda1;
