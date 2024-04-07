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
static struct { VBlob sym; char bytes[21]; } _V10string_D1511 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10string_D1510 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[33]; } _V10string_D1509 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
static struct { VBlob sym; char bytes[33]; } _V10string_D1508 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0match_V20" };
static struct { VBlob sym; char bytes[37]; } _V10string_D1507 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "_V0vanity_V0compiler_V0variables_V20" };
static struct { VBlob sym; char bytes[27]; } _V10string_D1506 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "_V0vanity_V0intrinsics_V20" };
static struct { VBlob sym; char bytes[31]; } _V10string_D1505 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "_V0vanity_V0compiler_V0cps_V20" };
VWEAK VWORD _V0gensym;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0gensym = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "gensym" };
VWEAK VWORD _V0eq_Q;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0eq_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "eq\?" };
VWEAK VWORD _V0cadr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cadr" };
VWEAK VWORD _V0caddr;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0caddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "caddr" };
VWEAK VWORD _V0apply;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0apply = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "apply" };
VWEAK VWORD _V0reverse;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0reverse = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "reverse" };
VWEAK VWORD _V0call__with__values;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0call__with__values = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "call-with-values" };
VWEAK VWORD _V0map;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "map" };
VWEAK VWORD _V0compiler__error;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0compiler__error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "compiler-error" };
VWEAK VWORD _V0cons;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cons = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cons" };
VWEAK VWORD _V0lookup__inline__name;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0lookup__inline__name = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "lookup-inline-name" };
VWEAK VWORD _V0symbol_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0symbol_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "symbol\?" };
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "error" };
VWEAK VWORD _V0list;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "list" };
VWEAK VWORD _V0not;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0not = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "not" };
VWEAK VWORD _V0length;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "length" };
VWEAK VWORD _V0_L_E;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_L_E = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "<=" };
VWEAK VWORD _V0_E;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_E = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "=" };
VWEAK VWORD _V0eqv_Q;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0eqv_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "eqv\?" };
VWEAK VWORD _V0atom_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0atom_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "atom\?" };
VWEAK VWORD _V0pair_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0pair_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "pair\?" };
VWEAK VWORD _V0memv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0memv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "memv" };
VWEAK VWORD _V0car;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0car = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "car" };
VWEAK VWORD _V0cdr;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0cdr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "cdr" };
VWEAK VWORD _V0null_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0null_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "null\?" };
VWEAK VWORD _V0_P;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_P = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "+" };
VWEAK VWORD _V0fold;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0fold = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "fold" };
VWEAK VWORD _V0call_Wcc;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0call_Wcc = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "call/cc" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
VWEAK VWORD _V0deannotate__lambdas;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0deannotate__lambdas = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "deannotate-lambdas" };
VWEAK VWORD _V0annotate__lambdas;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0annotate__lambdas = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "annotate-lambdas" };
VWEAK VWORD _V0alpha__convert;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0alpha__convert = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "alpha-convert" };
VWEAK VWORD _V0optimize;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0optimize = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "optimize" };
VWEAK VWORD _V0to__cps;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0to__cps = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "to-cps" };
static struct { VBlob sym; char bytes[38]; } _V10string_D1504 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 38 }, "optimize-apply: malformed application" };
VWEAK VWORD _V10inline;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V10inline = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "##inline" };
static struct { VBlob sym; char bytes[38]; } _V10string_D1503 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 38 }, "optimize-let: malformed let statement" };
static struct { VBlob sym; char bytes[51]; } _V10string_D1502 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 51 }, "Not enough arguments to continuation. Codegen bug." };
static struct { VBlob sym; char bytes[31]; } _V10string_D1501 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "Not enough arguments to lambda" };
static struct { VBlob sym; char bytes[34]; } _V10string_D1500 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "optimize-lambda: malformed lambda" };
VWEAK VWORD _V0set_B;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "set!" };
static struct { VBlob sym; char bytes[26]; } _V10string_D1499 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "match statement exhausted" };
VWEAK VWORD _V10vcore_Ddeclare;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Ddeclare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.declare" };
VWEAK VWORD _V10foreign_Ddeclare;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10foreign_Ddeclare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##foreign.declare" };
static struct { VBlob sym; char bytes[5]; } _V10string_D1498 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "next" };
static struct { VBlob sym; char bytes[2]; } _V10string_D1497 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "p" };
static struct { VBlob sym; char bytes[8]; } _V10string_D1496 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "ignored" };
static struct { VBlob sym; char bytes[2]; } _V10string_D1495 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "x" };
VWEAK VWORD _V0continuation;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0continuation = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "continuation" };
static struct { VBlob sym; char bytes[20]; } _V10string_D1494 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "stray () in program" };
static struct { VBlob sym; char bytes[2]; } _V10string_D1493 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "k" };
VWEAK VWORD _V0letrec;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0letrec = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "letrec" };
VWEAK VWORD _V0or;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0or = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "or" };
VWEAK VWORD _V0if;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0if = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "if" };
VWEAK VWORD _V0begin;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0begin = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "begin" };
VWEAK VWORD _V10foreign_Dfunction;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10foreign_Dfunction = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##foreign.function" };
VWEAK VWORD _V0case__lambda;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0case__lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "case-lambda" };
VWEAK VWORD _V0lambda;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "lambda" };
VWEAK VWORD _V0quote;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0quote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "quote" };
static __attribute__((constructor)) void VDllMain1() {
  _V0gensym = VEncodePointer(VLookupConstant("_V0gensym", &_VW_V0gensym), VPOINTER_OTHER);
  _V0eq_Q = VEncodePointer(VLookupConstant("_V0eq_Q", &_VW_V0eq_Q), VPOINTER_OTHER);
  _V0cadr = VEncodePointer(VLookupConstant("_V0cadr", &_VW_V0cadr), VPOINTER_OTHER);
  _V0caddr = VEncodePointer(VLookupConstant("_V0caddr", &_VW_V0caddr), VPOINTER_OTHER);
  _V0apply = VEncodePointer(VLookupConstant("_V0apply", &_VW_V0apply), VPOINTER_OTHER);
  _V0reverse = VEncodePointer(VLookupConstant("_V0reverse", &_VW_V0reverse), VPOINTER_OTHER);
  _V0call__with__values = VEncodePointer(VLookupConstant("_V0call__with__values", &_VW_V0call__with__values), VPOINTER_OTHER);
  _V0map = VEncodePointer(VLookupConstant("_V0map", &_VW_V0map), VPOINTER_OTHER);
  _V0compiler__error = VEncodePointer(VLookupConstant("_V0compiler__error", &_VW_V0compiler__error), VPOINTER_OTHER);
  _V0cons = VEncodePointer(VLookupConstant("_V0cons", &_VW_V0cons), VPOINTER_OTHER);
  _V0lookup__inline__name = VEncodePointer(VLookupConstant("_V0lookup__inline__name", &_VW_V0lookup__inline__name), VPOINTER_OTHER);
  _V0symbol_Q = VEncodePointer(VLookupConstant("_V0symbol_Q", &_VW_V0symbol_Q), VPOINTER_OTHER);
  _V0error = VEncodePointer(VLookupConstant("_V0error", &_VW_V0error), VPOINTER_OTHER);
  _V0list = VEncodePointer(VLookupConstant("_V0list", &_VW_V0list), VPOINTER_OTHER);
  _V0not = VEncodePointer(VLookupConstant("_V0not", &_VW_V0not), VPOINTER_OTHER);
  _V0length = VEncodePointer(VLookupConstant("_V0length", &_VW_V0length), VPOINTER_OTHER);
  _V0_L_E = VEncodePointer(VLookupConstant("_V0_L_E", &_VW_V0_L_E), VPOINTER_OTHER);
  _V0_E = VEncodePointer(VLookupConstant("_V0_E", &_VW_V0_E), VPOINTER_OTHER);
  _V0eqv_Q = VEncodePointer(VLookupConstant("_V0eqv_Q", &_VW_V0eqv_Q), VPOINTER_OTHER);
  _V0atom_Q = VEncodePointer(VLookupConstant("_V0atom_Q", &_VW_V0atom_Q), VPOINTER_OTHER);
  _V0pair_Q = VEncodePointer(VLookupConstant("_V0pair_Q", &_VW_V0pair_Q), VPOINTER_OTHER);
  _V0memv = VEncodePointer(VLookupConstant("_V0memv", &_VW_V0memv), VPOINTER_OTHER);
  _V0car = VEncodePointer(VLookupConstant("_V0car", &_VW_V0car), VPOINTER_OTHER);
  _V0cdr = VEncodePointer(VLookupConstant("_V0cdr", &_VW_V0cdr), VPOINTER_OTHER);
  _V0null_Q = VEncodePointer(VLookupConstant("_V0null_Q", &_VW_V0null_Q), VPOINTER_OTHER);
  _V0_P = VEncodePointer(VLookupConstant("_V0_P", &_VW_V0_P), VPOINTER_OTHER);
  _V0fold = VEncodePointer(VLookupConstant("_V0fold", &_VW_V0fold), VPOINTER_OTHER);
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
static void _V0application_Q_k39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0application_Q_k39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0application_Q_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0application_Q_k39, runtime, upenv, 1, argc, _var0) {
  // ((bruijn not 7 14) (bruijn ##k.296 3 0) (bruijn ##x.298 0 0))
    V_CALL(VGetArg(upenv, 7-1, 14), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0application_Q_k38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0application_Q_k38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0application_Q_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0application_Q_k38, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn memv 6 21) (close _V0application_Q_k39) (bruijn ##x.299 0 0) (##inline ##vcore.qcons 'quote (##inline ##vcore.qcons 'lambda (##inline ##vcore.qcons 'case-lambda (##inline ##vcore.qcons '##foreign.function '())))))
    V_CALL(VGetArg(upenv, 6-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0application_Q_k39, env)}),
      _var0,
      VInlineCons2(runtime,
        _V0quote,
        VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        _V0case__lambda,
        VInlineCons2(runtime,
        _V10foreign_Dfunction,
        VNULL)))));
 }
}
static void _V0application_Q_k37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0application_Q_k37" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0application_Q_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0application_Q_k37, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.297 0 0) ((bruijn car 5 22) (close _V0application_Q_k38) (bruijn x 1 1)) ((bruijn ##k.296 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 5-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0application_Q_k38, env)}),
      upenv->vars[1]);
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0application_Q_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0application_Q_lambda4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0application_Q_lambda4, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0application_Q_lambda4, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn pair? 4 20) (close _V0application_Q_k37) (bruijn x 0 1))
    V_CALL(upenv->up->up->up->vars[20], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0application_Q_k37, env)}),
      _var1);
 }
}
static void _V0combination_Q_k42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0combination_Q_k42" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0combination_Q_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0combination_Q_k42, runtime, upenv, 1, argc, _var0) {
  // ((bruijn not 7 14) (bruijn ##k.304 3 0) (bruijn ##x.306 0 0))
    V_CALL(VGetArg(upenv, 7-1, 14), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0combination_Q_k41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0combination_Q_k41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0combination_Q_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0combination_Q_k41, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn memv 6 21) (close _V0combination_Q_k42) (bruijn ##x.307 0 0) (##inline ##vcore.qcons 'quote (##inline ##vcore.qcons 'lambda (##inline ##vcore.qcons 'case-lambda (##inline ##vcore.qcons '##foreign.function (##inline ##vcore.qcons 'begin (##inline ##vcore.qcons 'if (##inline ##vcore.qcons 'or (##inline ##vcore.qcons 'letrec '())))))))))
    V_CALL(VGetArg(upenv, 6-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0combination_Q_k42, env)}),
      _var0,
      VInlineCons2(runtime,
        _V0quote,
        VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        _V0case__lambda,
        VInlineCons2(runtime,
        _V10foreign_Dfunction,
        VInlineCons2(runtime,
        _V0begin,
        VInlineCons2(runtime,
        _V0if,
        VInlineCons2(runtime,
        _V0or,
        VInlineCons2(runtime,
        _V0letrec,
        VNULL)))))))));
 }
}
static void _V0combination_Q_k40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0combination_Q_k40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0combination_Q_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0combination_Q_k40, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.305 0 0) ((bruijn car 5 22) (close _V0combination_Q_k41) (bruijn x 1 1)) ((bruijn ##k.304 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 5-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0combination_Q_k41, env)}),
      upenv->vars[1]);
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0combination_Q_lambda5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0combination_Q_lambda5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0combination_Q_lambda5, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0combination_Q_lambda5, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn pair? 4 20) (close _V0combination_Q_k40) (bruijn x 0 1))
    V_CALL(upenv->up->up->up->vars[20], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0combination_Q_k40, env)}),
      _var1);
 }
}
static void _V0iter__lambda_k44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__lambda_k44" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__lambda_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__lambda_k44, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.317 2 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn k 1 0) (bruijn args 2 1)) (##inline ##vcore.cons (bruijn ##x.320 0 0) '())))
    V_CALL(upenv->up->vars[0], runtime,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        upenv->vars[0],
        upenv->up->vars[1]),
        VInlineCons2(runtime,
        _var0,
        VNULL)));
 }
}
static void _V0iter__lambda_k43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__lambda_k43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__lambda_k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__lambda_k43, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn iter2 4 6) (close _V0iter__lambda_k44) (bruijn body 1 2) (bruijn k 0 0))
    V_CALL(upenv->up->up->up->vars[6], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__lambda_k44, env)}),
      upenv->vars[2],
      _var0);
 }
}
static void _V0iter__lambda_lambda7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0iter__lambda_lambda7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0iter__lambda_lambda7, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__lambda_lambda7, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn gensym 6 0) (close _V0iter__lambda_k43) (##string ##string.1493))
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__lambda_k43, env)}),
      VEncodePointer(&_V10string_D1493.sym, VPOINTER_OTHER));
 }
}
static void _V0iter__atom_k50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k50" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k50, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.7 8 1) (bruijn ##k.372 5 0) (bruijn ##x.377 0 0))
    V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V0iter__atom_k49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k49" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k49, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 13 9) (close _V0iter__atom_k50) 'lambda (bruijn ##x.378 0 0))
    V_CALL(VGetArg(upenv, 13-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k50, env)}),
      _V0lambda,
      _var0);
 }
}
static void _V0iter__atom_k48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k48" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k48, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.11 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.11 0 0))) ((bruijn iter-lambda 7 0) (close _V0iter__atom_k49) (##inline ##vcore.car (bruijn ##expr.10 1 0)) (##inline ##vcore.car (bruijn ##expr.11 0 0))) ((bruijn ##k.372 3 0) #f)) ((bruijn ##k.372 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k49, env)}),
      VInlineCar2(runtime,
        upenv->vars[0]),
      VInlineCar2(runtime,
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
static void _V0iter__atom_k47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k47" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k47, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.10 0 0)) ((close _V0iter__atom_k48) (##inline ##vcore.cdr (bruijn ##expr.10 0 0))) ((bruijn ##k.372 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V0iter__atom_k48, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__atom_k46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k46" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k46, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.373 0 0) ((close _V0iter__atom_k47) (##inline ##vcore.cdr (bruijn ##expr.9 2 0))) ((bruijn ##k.372 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0iter__atom_k47, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__atom_k45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k45" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k45, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.9 1 0)) ((bruijn equal? 9 28) (close _V0iter__atom_k46) 'lambda (##inline ##vcore.car (bruijn ##expr.9 1 0))) ((bruijn ##k.372 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 9-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k46, env)}),
      _V0lambda,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k56" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k56, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.16 5 1) (bruijn ##k.362 2 0) (bruijn ##expr.18 3 1) (bruijn ##x.363 1 0) (bruijn ##x.364 0 0))
    V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->vars[0],
      upenv->up->up->vars[1],
      upenv->vars[0],
      _var0);
 }
}
static void _V0loop_k55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k55" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k55, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 18 5) (close _V0loop_k56) (bruijn ##body.15 2 3))
    V_CALL(VGetArg(upenv, 18-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k56, env)}),
      upenv->up->vars[3]);
 }
}
static void _V0loop_k54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k54" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k54, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##expr.18 1 1))) ((bruijn reverse 17 5) (close _V0loop_k55) (bruijn ##args.14 1 2)) ((bruijn ##k.362 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        upenv->vars[1])))) {
    V_CALL(VGetArg(upenv, 17-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k55, env)}),
      upenv->vars[2]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k60" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k60, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##vcore.pair? (bruijn ##expr.20 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.20 0 0))) ((bruijn ##kk.17 3 1) (bruijn ##k.354 1 0) (##inline ##vcore.cdr (bruijn ##expr.18 6 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##expr.19 2 0)) (bruijn ##args.14 6 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##expr.20 0 0)) (bruijn ##body.15 6 3))) ((bruijn ##k.354 1 0) #f)) ((bruijn ##k.354 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(upenv->up->up->vars[1], runtime,
      upenv->vars[0],
      VInlineCdr2(runtime,
        VGetArg(upenv, 6-1, 1)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->up->vars[0]),
        VGetArg(upenv, 6-1, 2)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
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
static void _V0loop_k59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k59" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k59, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.19 1 0)) ((close _V0loop_k60) (##inline ##vcore.cdr (bruijn ##expr.19 1 0))) ((bruijn ##k.354 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(_V0loop_k60, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k63" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k63, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.16 9 1) (bruijn ##k.349 4 0) (bruijn ##expr.18 7 1) (bruijn ##x.351 1 0) (bruijn ##x.352 0 0))
    V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 7-1, 1),
      upenv->vars[0],
      _var0);
 }
}
static void _V0loop_k62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k62" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k62, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 22 5) (close _V0loop_k63) (bruijn ##body.15 6 3))
    V_CALL(VGetArg(upenv, 22-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k63, env)}),
      VGetArg(upenv, 6-1, 3));
 }
}
static void _V0loop_k61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k61" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k61, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 21 5) (close _V0loop_k62) (bruijn ##args.14 5 2))
    V_CALL(VGetArg(upenv, 21-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k62, env)}),
      VGetArg(upenv, 5-1, 2));
 }
}
static void _V0loop_k58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k58" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k58, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0loop_k59) (close _V0loop_k61))
    V_CALL_FUNC(_V0loop_k59, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k61, env)}));
 }
}
static void _V0loop_lambda16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda16, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda16, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_k58) (##inline ##vcore.car (bruijn ##expr.18 3 1)))
    V_CALL_FUNC(_V0loop_k58, env, runtime,
      VInlineCar2(runtime,
        upenv->up->up->vars[1]));
 }
}
static void _V0loop_lambda15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda15, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 18 27) (bruijn ##k.348 0 0) (close _V0loop_lambda16))
    V_CALL(VGetArg(upenv, 18-1, 27), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda16, env)}));
 }
}
static void _V0loop_k57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k57" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k57, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call-with-values 17 6) (bruijn ##k.346 1 0) (close _V0loop_lambda15) (bruijn loop 2 0))
    V_CALL(VGetArg(upenv, 17-1, 6), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda15, env)}),
      upenv->up->vars[0]);
 }
}
static void _V0loop_lambda14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0loop_lambda14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0loop_lambda14, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda14, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((close _V0loop_k54) (close _V0loop_k57))
    V_CALL_FUNC(_V0loop_k54, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k57, env)}));
 }
}
static void _V0iter__atom_lambda13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0iter__atom_lambda13, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda13, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V0loop_lambda14)) ((bruijn loop 0 0) (bruijn ##k.345 1 0) (##inline ##vcore.cdr (bruijn ##expr.12 5 0)) '() '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda14, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VInlineCdr2(runtime,
        VGetArg(upenv, 5-1, 0)),
      VNULL,
      VNULL);
    }
 }
}
static void _V0iter__atom_lambda12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_lambda12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda12, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 13 27) (bruijn ##k.344 0 0) (close _V0iter__atom_lambda13))
    V_CALL(VGetArg(upenv, 13-1, 27), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_lambda13, env)}));
 }
}
static void _V0iter__atom_k65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k65" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k65, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.7 9 1) (bruijn ##k.366 2 0) (bruijn ##x.368 0 0))
    V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0iter__atom_k64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k64" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k64, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 14 9) (close _V0iter__atom_k65) 'case-lambda (bruijn ##x.369 0 0))
    V_CALL(VGetArg(upenv, 14-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k65, env)}),
      _V0case__lambda,
      _var0);
 }
}
static void _V0iter__atom_lambda17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0iter__atom_lambda17, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda17, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##vcore.null? (bruijn tail-expr 0 1)) ((bruijn map 13 7) (close _V0iter__atom_k64) (bruijn iter-lambda 8 0) (bruijn args 0 2) (bruijn body 0 3)) ((bruijn ##k.366 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    V_CALL(VGetArg(upenv, 13-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k64, env)}),
      VGetArg(upenv, 8-1, 0),
      _var2,
      _var3);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__atom_k53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k53" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k53, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.343 0 0) ((bruijn call-with-values 12 6) (bruijn ##k.342 1 0) (close _V0iter__atom_lambda12) (close _V0iter__atom_lambda17)) ((bruijn ##k.342 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 12-1, 6), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_lambda12, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_lambda17, env)}));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__atom_k52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k52" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k52, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.12 1 0)) ((bruijn equal? 11 28) (close _V0iter__atom_k53) 'case-lambda (##inline ##vcore.car (bruijn ##expr.12 1 0))) ((bruijn ##k.342 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 11-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k53, env)}),
      _V0case__lambda,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__atom_k68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k68" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k68, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.339 0 0) ((bruijn ##kk.7 8 1) (bruijn ##k.338 1 0) (bruijn x 10 1)) ((bruijn ##k.338 1 0) #f))
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
static void _V0iter__atom_k67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k67" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k67, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.21 1 0)) ((bruijn equal? 13 28) (close _V0iter__atom_k68) '##foreign.function (##inline ##vcore.car (bruijn ##expr.21 1 0))) ((bruijn ##k.338 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 13-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k68, env)}),
      _V10foreign_Dfunction,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__atom_k72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k72" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k72, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##vcore.pair? (bruijn ##expr.23 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.23 0 0))) ((bruijn ##kk.7 11 1) (bruijn ##k.331 2 0) (bruijn x 13 1)) ((bruijn ##k.331 2 0) #f)) ((bruijn ##k.331 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
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
static void _V0iter__atom_k71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k71" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k71, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.332 0 0) ((close _V0iter__atom_k72) (##inline ##vcore.cdr (bruijn ##expr.22 2 0))) ((bruijn ##k.331 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0iter__atom_k72, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__atom_k70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k70" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k70, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.22 1 0)) ((bruijn equal? 15 28) (close _V0iter__atom_k71) 'quote (##inline ##vcore.car (bruijn ##expr.22 1 0))) ((bruijn ##k.331 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 15-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k71, env)}),
      _V0quote,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__atom_k75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k75" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k75, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.7 11 1) (bruijn ##k.328 1 0) (bruijn ##x.329 0 0))
    V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V0iter__atom_k74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k74" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k74, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.null? (bruijn ##input.8 9 0)) ((bruijn compiler-error 16 8) (close _V0iter__atom_k75) (##string ##string.1494)) ((bruijn ##k.328 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VGetArg(upenv, 9-1, 0)))) {
    V_CALL(VGetArg(upenv, 16-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k75, env)}),
      VEncodePointer(&_V10string_D1494.sym, VPOINTER_OTHER));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__atom_k76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k76" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k76, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.7 10 1) (bruijn ##k.321 10 0) (bruijn x 12 1))
    V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      VGetArg(upenv, 10-1, 0),
      VGetArg(upenv, 12-1, 1));
 }
}
static void _V0iter__atom_k73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k73" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k73, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter__atom_k74) (close _V0iter__atom_k76))
    V_CALL_FUNC(_V0iter__atom_k74, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k76, env)}));
 }
}
static void _V0iter__atom_lambda19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda19" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda19, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter__atom_k70) (close _V0iter__atom_k73))
    V_CALL_FUNC(_V0iter__atom_k70, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k73, env)}));
 }
}
static void _V0iter__atom_k69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k69" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k69, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter__atom_lambda19) (bruijn ##input.8 6 0))
    V_CALL_FUNC(_V0iter__atom_lambda19, env, runtime,
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V0iter__atom_lambda18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda18" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda18, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter__atom_k67) (close _V0iter__atom_k69))
    V_CALL_FUNC(_V0iter__atom_k67, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k69, env)}));
 }
}
static void _V0iter__atom_k66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k66" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k66, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter__atom_lambda18) (bruijn ##input.8 4 0))
    V_CALL_FUNC(_V0iter__atom_lambda18, env, runtime,
      upenv->up->up->up->vars[0]);
 }
}
static void _V0iter__atom_lambda11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda11" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda11, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter__atom_k52) (close _V0iter__atom_k66))
    V_CALL_FUNC(_V0iter__atom_k52, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k66, env)}));
 }
}
static void _V0iter__atom_k51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k51" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k51, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter__atom_lambda11) (bruijn ##input.8 2 0))
    V_CALL_FUNC(_V0iter__atom_lambda11, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V0iter__atom_lambda10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda10" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda10, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter__atom_k45) (close _V0iter__atom_k51))
    V_CALL_FUNC(_V0iter__atom_k45, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k51, env)}));
 }
}
static void _V0iter__atom_lambda9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda9" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda9, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter__atom_lambda10) (bruijn ##input.8 0 0))
    V_CALL_FUNC(_V0iter__atom_lambda10, env, runtime,
      _var0);
 }
}
static void _V0iter__atom_lambda8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0iter__atom_lambda8, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda8, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0iter__atom_lambda9) (bruijn x 2 1))
    V_CALL_FUNC(_V0iter__atom_lambda9, env, runtime,
      upenv->up->vars[1]);
 }
}
static void _V0iter__atom_lambda6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0iter__atom_lambda6, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda6, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V0iter__lambda_lambda7)) ((bruijn call/cc 5 27) (bruijn ##k.316 1 0) (close _V0iter__atom_lambda8)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__lambda_lambda7, env)});
    V_CALL(VGetArg(upenv, 5-1, 27), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_lambda8, env)}));
    }
 }
}
static void _V0loop_k79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k79" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k79, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.382 3 0) (##inline ##vcore.cons (##inline ##vcore.cons 'lambda (##inline ##vcore.cons (bruijn args 5 1) (##inline ##vcore.cons (bruijn ##x.387 0 0) '()))) (bruijn appl 1 0)))
    V_CALL(upenv->up->up->vars[0], runtime,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        VGetArg(upenv, 5-1, 1),
        VInlineCons2(runtime,
        _var0,
        VNULL))),
        upenv->vars[0]));
 }
}
static void _V0loop_k78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k78" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k78, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn iter2 5 6) (close _V0loop_k79) (bruijn body 4 2) (bruijn k 4 4))
    V_CALL(VGetArg(upenv, 5-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k79, env)}),
      upenv->up->up->up->vars[2],
      upenv->up->up->up->vars[4]);
 }
}
static void _V0loop_k86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k86" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k86, runtime, upenv, 1, argc, _var0) {
  // ((bruijn iter2 11 6) (bruijn ##k.382 8 0) (bruijn ##x.389 3 0) (##inline ##vcore.cons 'continuation (##inline ##vcore.cons (##inline ##vcore.cons (bruijn x 4 0) '()) (##inline ##vcore.cons (bruijn ##x.394 0 0) '()))))
    V_CALL(VGetArg(upenv, 11-1, 6), runtime,
      VGetArg(upenv, 8-1, 0),
      upenv->up->up->vars[0],
      VInlineCons2(runtime,
        _V0continuation,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        upenv->up->up->up->vars[0],
        VNULL),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
 }
}
static void _V0loop_k85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k85" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k85, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn loop 8 0) (close _V0loop_k86) (bruijn ##x.395 1 0) (bruijn ##x.396 0 0))
    V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k86, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V0loop_k84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k84" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k84, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 12 23) (close _V0loop_k85) (bruijn vals 6 2))
    V_CALL(VGetArg(upenv, 12-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k85, env)}),
      VGetArg(upenv, 6-1, 2));
 }
}
static void _V0loop_k83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k83" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k83, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 11 9) (close _V0loop_k84) (bruijn x 1 0) (bruijn appl 5 1))
    V_CALL(VGetArg(upenv, 11-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k84, env)}),
      upenv->vars[0],
      VGetArg(upenv, 5-1, 1));
 }
}
static void _V0loop_k82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k82" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k82, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn car 10 22) (close _V0loop_k83) (bruijn vals 4 2))
    V_CALL(VGetArg(upenv, 10-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k83, env)}),
      upenv->up->up->up->vars[2]);
 }
}
static void _V0loop_k90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k90" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k90, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 8 0) (bruijn ##k.382 7 0) (bruijn ##x.397 1 0) (bruijn ##x.398 0 0))
    V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VGetArg(upenv, 7-1, 0),
      upenv->vars[0],
      _var0);
 }
}
static void _V0loop_k89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k89" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k89, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 12 23) (close _V0loop_k90) (bruijn vals 6 2))
    V_CALL(VGetArg(upenv, 12-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k90, env)}),
      VGetArg(upenv, 6-1, 2));
 }
}
static void _V0loop_k88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k88" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k88, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 11 9) (close _V0loop_k89) (bruijn ##x.399 0 0) (bruijn appl 5 1))
    V_CALL(VGetArg(upenv, 11-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k89, env)}),
      _var0,
      VGetArg(upenv, 5-1, 1));
 }
}
static void _V0loop_k87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k87" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k87, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn iter-atom 7 2) (close _V0loop_k88) (bruijn ##x.400 0 0))
    V_CALL(VGetArg(upenv, 7-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k88, env)}),
      _var0);
 }
}
static void _V0loop_k81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k81" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k81, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.388 0 0) ((bruijn gensym 9 0) (close _V0loop_k82) (##string ##string.1495)) ((bruijn car 9 22) (close _V0loop_k87) (bruijn vals 3 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k82, env)}),
      VEncodePointer(&_V10string_D1495.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 9-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k87, env)}),
      upenv->up->up->vars[2]);
}
 }
}
static void _V0loop_k80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k80" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k80, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn application? 5 0) (close _V0loop_k81) (bruijn ##x.401 0 0))
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k81, env)}),
      _var0);
 }
}
static void _V0loop_k77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k77" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k77, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.383 0 0) ((bruijn reverse 7 5) (close _V0loop_k78) (bruijn appl 1 1)) ((bruijn car 7 22) (close _V0loop_k80) (bruijn vals 1 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 7-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k78, env)}),
      upenv->vars[1]);
} else {
    V_CALL(VGetArg(upenv, 7-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k80, env)}),
      upenv->vars[2]);
}
 }
}
static void _V0loop_lambda21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0loop_lambda21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda21, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda21, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 6 24) (close _V0loop_k77) (bruijn vals 0 2))
    V_CALL(VGetArg(upenv, 6-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k77, env)}),
      _var2);
 }
}
static void _V0iter__let_lambda20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 static VDebugInfo dbg = { "_V0iter__let_lambda20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 5) {
  VError("Not enough arguments to _V0iter__let_lambda20, got ~D~N"
  "-- expected 5~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__let_lambda20, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 5, 5, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // (letrec 1 ((close _V0loop_lambda21)) ((bruijn loop 0 0) (bruijn ##k.381 1 0) '() (bruijn vals 1 3)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda21, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VNULL,
      upenv->vars[3]);
    }
 }
}
static void _V0loop_k94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k94" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k94, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.403 4 0) (##inline ##vcore.cons 'letrec (##inline ##vcore.cons (bruijn ##x.406 1 0) (##inline ##vcore.cons (bruijn ##x.408 0 0) '()))))
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VInlineCons2(runtime,
        _V0letrec,
        VInlineCons2(runtime,
        upenv->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL))));
 }
}
static void _V0loop_k93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k93" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k93, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn iter2 6 6) (close _V0loop_k94) (bruijn body 5 2) (bruijn k 5 4))
    V_CALL(VGetArg(upenv, 6-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k94, env)}),
      VGetArg(upenv, 5-1, 2),
      VGetArg(upenv, 5-1, 4));
 }
}
static void _V0loop_k92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k92" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k92, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn map 8 7) (close _V0loop_k93) (bruijn list 8 13) (bruijn args 4 1) (bruijn ##x.409 0 0))
    V_CALL(VGetArg(upenv, 8-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k93, env)}),
      VGetArg(upenv, 8-1, 13),
      upenv->up->up->up->vars[1],
      _var0);
 }
}
static void _V0loop_k101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k101" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k101, runtime, upenv, 1, argc, _var0) {
  // ((bruijn iter2 11 6) (bruijn ##k.403 8 0) (bruijn ##x.411 3 0) (##inline ##vcore.cons 'continuation (##inline ##vcore.cons (##inline ##vcore.cons (bruijn x 4 0) '()) (##inline ##vcore.cons (bruijn ##x.416 0 0) '()))))
    V_CALL(VGetArg(upenv, 11-1, 6), runtime,
      VGetArg(upenv, 8-1, 0),
      upenv->up->up->vars[0],
      VInlineCons2(runtime,
        _V0continuation,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        upenv->up->up->up->vars[0],
        VNULL),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
 }
}
static void _V0loop_k100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k100" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k100, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn loop 8 0) (close _V0loop_k101) (bruijn ##x.417 1 0) (bruijn ##x.418 0 0))
    V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k101, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V0loop_k99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k99" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k99, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 12 23) (close _V0loop_k100) (bruijn vals 6 2))
    V_CALL(VGetArg(upenv, 12-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k100, env)}),
      VGetArg(upenv, 6-1, 2));
 }
}
static void _V0loop_k98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k98" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k98, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 11 9) (close _V0loop_k99) (bruijn x 1 0) (bruijn done-vals 5 1))
    V_CALL(VGetArg(upenv, 11-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k99, env)}),
      upenv->vars[0],
      VGetArg(upenv, 5-1, 1));
 }
}
static void _V0loop_k97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k97" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k97, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn car 10 22) (close _V0loop_k98) (bruijn vals 4 2))
    V_CALL(VGetArg(upenv, 10-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k98, env)}),
      upenv->up->up->up->vars[2]);
 }
}
static void _V0loop_k105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k105" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k105, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 8 0) (bruijn ##k.403 7 0) (bruijn ##x.419 1 0) (bruijn ##x.420 0 0))
    V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VGetArg(upenv, 7-1, 0),
      upenv->vars[0],
      _var0);
 }
}
static void _V0loop_k104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k104" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k104, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 12 23) (close _V0loop_k105) (bruijn vals 6 2))
    V_CALL(VGetArg(upenv, 12-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k105, env)}),
      VGetArg(upenv, 6-1, 2));
 }
}
static void _V0loop_k103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k103" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k103, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 11 9) (close _V0loop_k104) (bruijn ##x.421 0 0) (bruijn done-vals 5 1))
    V_CALL(VGetArg(upenv, 11-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k104, env)}),
      _var0,
      VGetArg(upenv, 5-1, 1));
 }
}
static void _V0loop_k102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k102" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k102, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn iter-atom 7 2) (close _V0loop_k103) (bruijn ##x.422 0 0))
    V_CALL(VGetArg(upenv, 7-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k103, env)}),
      _var0);
 }
}
static void _V0loop_k96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k96" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k96, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.410 0 0) ((bruijn gensym 9 0) (close _V0loop_k97) (##string ##string.1495)) ((bruijn car 9 22) (close _V0loop_k102) (bruijn vals 3 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k97, env)}),
      VEncodePointer(&_V10string_D1495.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 9-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k102, env)}),
      upenv->up->up->vars[2]);
}
 }
}
static void _V0loop_k95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k95" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k95, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn application? 5 0) (close _V0loop_k96) (bruijn ##x.423 0 0))
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k96, env)}),
      _var0);
 }
}
static void _V0loop_k91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k91" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k91, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.404 0 0) ((bruijn reverse 7 5) (close _V0loop_k92) (bruijn done-vals 1 1)) ((bruijn car 7 22) (close _V0loop_k95) (bruijn vals 1 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 7-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k92, env)}),
      upenv->vars[1]);
} else {
    V_CALL(VGetArg(upenv, 7-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k95, env)}),
      upenv->vars[2]);
}
 }
}
static void _V0loop_lambda23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0loop_lambda23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda23, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda23, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 6 24) (close _V0loop_k91) (bruijn vals 0 2))
    V_CALL(VGetArg(upenv, 6-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k91, env)}),
      _var2);
 }
}
static void _V0iter__letrec_lambda22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 static VDebugInfo dbg = { "_V0iter__letrec_lambda22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 5) {
  VError("Not enough arguments to _V0iter__letrec_lambda22, got ~D~N"
  "-- expected 5~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__letrec_lambda22, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 5, 5, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // (letrec 1 ((close _V0loop_lambda23)) ((bruijn loop 0 0) (bruijn ##k.402 1 0) '() (bruijn vals 1 3)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda23, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VNULL,
      upenv->vars[3]);
    }
 }
}
static void _V0loop_k109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k109" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k109, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.425 4 0) (##inline ##vcore.cons (bruijn ##x.427 1 0) (##inline ##vcore.cons (bruijn cont 6 2) (bruijn ##x.429 0 0))))
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VInlineCons2(runtime,
        upenv->vars[0],
        VInlineCons2(runtime,
        VGetArg(upenv, 6-1, 2),
        _var0)));
 }
}
static void _V0loop_k108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k108" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k108, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 9 23) (close _V0loop_k109) (bruijn appl 1 0))
    V_CALL(VGetArg(upenv, 9-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k109, env)}),
      upenv->vars[0]);
 }
}
static void _V0loop_k107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k107" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k107, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn car 8 22) (close _V0loop_k108) (bruijn appl 0 0))
    V_CALL(VGetArg(upenv, 8-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k108, env)}),
      _var0);
 }
}
static void _V0loop_k116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k116" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k116, runtime, upenv, 1, argc, _var0) {
  // ((bruijn iter2 11 6) (bruijn ##k.425 8 0) (bruijn ##x.431 3 0) (##inline ##vcore.cons 'continuation (##inline ##vcore.cons (##inline ##vcore.cons (bruijn x 4 0) '()) (##inline ##vcore.cons (bruijn ##x.436 0 0) '()))))
    V_CALL(VGetArg(upenv, 11-1, 6), runtime,
      VGetArg(upenv, 8-1, 0),
      upenv->up->up->vars[0],
      VInlineCons2(runtime,
        _V0continuation,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        upenv->up->up->up->vars[0],
        VNULL),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
 }
}
static void _V0loop_k115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k115" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k115, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn loop 8 0) (close _V0loop_k116) (bruijn ##x.437 1 0) (bruijn ##x.438 0 0))
    V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k116, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V0loop_k114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k114" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k114, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 12 23) (close _V0loop_k115) (bruijn args 6 2))
    V_CALL(VGetArg(upenv, 12-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k115, env)}),
      VGetArg(upenv, 6-1, 2));
 }
}
static void _V0loop_k113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k113" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k113, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 11 9) (close _V0loop_k114) (bruijn x 1 0) (bruijn appl 5 1))
    V_CALL(VGetArg(upenv, 11-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k114, env)}),
      upenv->vars[0],
      VGetArg(upenv, 5-1, 1));
 }
}
static void _V0loop_k112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k112" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k112, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn car 10 22) (close _V0loop_k113) (bruijn args 4 2))
    V_CALL(VGetArg(upenv, 10-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k113, env)}),
      upenv->up->up->up->vars[2]);
 }
}
static void _V0loop_k120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k120" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k120, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 8 0) (bruijn ##k.425 7 0) (bruijn ##x.439 1 0) (bruijn ##x.440 0 0))
    V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VGetArg(upenv, 7-1, 0),
      upenv->vars[0],
      _var0);
 }
}
static void _V0loop_k119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k119" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k119, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 12 23) (close _V0loop_k120) (bruijn args 6 2))
    V_CALL(VGetArg(upenv, 12-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k120, env)}),
      VGetArg(upenv, 6-1, 2));
 }
}
static void _V0loop_k118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k118" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k118, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 11 9) (close _V0loop_k119) (bruijn ##x.441 0 0) (bruijn appl 5 1))
    V_CALL(VGetArg(upenv, 11-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k119, env)}),
      _var0,
      VGetArg(upenv, 5-1, 1));
 }
}
static void _V0loop_k117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k117" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k117, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn iter-atom 7 2) (close _V0loop_k118) (bruijn ##x.442 0 0))
    V_CALL(VGetArg(upenv, 7-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k118, env)}),
      _var0);
 }
}
static void _V0loop_k111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k111" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k111, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.430 0 0) ((bruijn gensym 9 0) (close _V0loop_k112) (##string ##string.1495)) ((bruijn car 9 22) (close _V0loop_k117) (bruijn args 3 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k112, env)}),
      VEncodePointer(&_V10string_D1495.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 9-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k117, env)}),
      upenv->up->up->vars[2]);
}
 }
}
static void _V0loop_k110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k110" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k110, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn application? 5 0) (close _V0loop_k111) (bruijn ##x.443 0 0))
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k111, env)}),
      _var0);
 }
}
static void _V0loop_k106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k106" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k106, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.426 0 0) ((bruijn reverse 7 5) (close _V0loop_k107) (bruijn appl 1 1)) ((bruijn car 7 22) (close _V0loop_k110) (bruijn args 1 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 7-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k107, env)}),
      upenv->vars[1]);
} else {
    V_CALL(VGetArg(upenv, 7-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k110, env)}),
      upenv->vars[2]);
}
 }
}
static void _V0loop_lambda25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0loop_lambda25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda25, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda25, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 6 24) (close _V0loop_k106) (bruijn args 0 2))
    V_CALL(VGetArg(upenv, 6-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k106, env)}),
      _var2);
 }
}
static void _V0iter__combination_lambda24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0iter__combination_lambda24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0iter__combination_lambda24, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__combination_lambda24, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (letrec 1 ((close _V0loop_lambda25)) ((bruijn loop 0 0) (bruijn ##k.424 1 0) '() (bruijn args 1 1)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda25, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VNULL,
      upenv->vars[1]);
    }
 }
}
static void _V0iter2_k131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k131" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k131, runtime, upenv, 1, argc, _var0) {
  // ((bruijn iter2 15 6) (bruijn ##k.593 2 0) (bruijn x 6 0) (##inline ##vcore.cons 'continuation (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##x.599 1 0) '()) (##inline ##vcore.cons (bruijn ##x.598 0 0) '()))))
    V_CALL(VGetArg(upenv, 15-1, 6), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 6-1, 0),
      VInlineCons2(runtime,
        _V0continuation,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        upenv->vars[0],
        VNULL),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
 }
}
static void _V0iter2_k130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k130" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k130, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn iter2 14 6) (close _V0iter2_k131) (bruijn y 3 0) (bruijn cont 13 2))
    V_CALL(VGetArg(upenv, 14-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_k131, env)}),
      upenv->up->up->vars[0],
      VGetArg(upenv, 13-1, 2));
 }
}
static void _V0iter2_k129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k129" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k129, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.592 1 0) ((bruijn gensym 16 0) (close _V0iter2_k130) (##string ##string.1496)) ((bruijn iter2 13 6) (bruijn ##k.593 0 0) (bruijn y 2 0) (bruijn cont 12 2)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 16-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_k130, env)}),
      VEncodePointer(&_V10string_D1496.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 13-1, 6), runtime,
      _var0,
      upenv->up->vars[0],
      VGetArg(upenv, 12-1, 2));
}
 }
}
static void _V0iter2_k132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k132" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k132, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.24 10 1) (bruijn ##k.586 7 0) (bruijn ##x.591 0 0))
    V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0);
 }
}
static void _V0iter2_k128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k128" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k128, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter2_k129) (close _V0iter2_k132))
    V_CALL_FUNC(_V0iter2_k129, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_k132, env)}));
 }
}
static void _V0iter2_k127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k127" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k127, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.28 1 0))) ((bruijn application? 11 0) (close _V0iter2_k128) (bruijn x 2 0)) ((bruijn ##k.586 5 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_k128, env)}),
      upenv->up->vars[0]);
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter2_k126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k126" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k126, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.28 0 0)) ((close _V0iter2_k127) (##inline ##vcore.car (bruijn ##expr.28 0 0))) ((bruijn ##k.586 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V0iter2_k127, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter2_k125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k125" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k125, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter2_k126) (##inline ##vcore.cdr (bruijn ##expr.27 1 0)))
    V_CALL_FUNC(_V0iter2_k126, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
 }
}
static void _V0iter2_k124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k124" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k124, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.27 0 0)) ((close _V0iter2_k125) (##inline ##vcore.car (bruijn ##expr.27 0 0))) ((bruijn ##k.586 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V0iter2_k125, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter2_k123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k123" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k123, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.587 0 0) ((close _V0iter2_k124) (##inline ##vcore.cdr (bruijn ##expr.26 2 0))) ((bruijn ##k.586 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0iter2_k124, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter2_k122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k122" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k122, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.26 1 0)) ((bruijn equal? 9 28) (close _V0iter2_k123) 'begin (##inline ##vcore.car (bruijn ##expr.26 1 0))) ((bruijn ##k.586 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 9-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_k123, env)}),
      _V0begin,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter2_k145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k145" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k145, runtime, upenv, 1, argc, _var0) {
  // ((bruijn iter2 19 6) (bruijn ##k.554 2 0) (bruijn p 8 0) (##inline ##vcore.cons 'continuation (##inline ##vcore.cons (##inline ##vcore.cons (bruijn sym 1 0) '()) (##inline ##vcore.cons (bruijn ##x.559 0 0) '()))))
    V_CALL(VGetArg(upenv, 19-1, 6), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 8-1, 0),
      VInlineCons2(runtime,
        _V0continuation,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        upenv->vars[0],
        VNULL),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
 }
}
static void _V0iter2_k144(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k144" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k144, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn iter2 18 6) (close _V0iter2_k145) (##inline ##vcore.cons 'if (##inline ##vcore.cons (bruijn sym 0 0) (##inline ##vcore.cons (bruijn x 5 0) (##inline ##vcore.cons (bruijn y 3 0) '())))) (bruijn cont 17 2))
    V_CALL(VGetArg(upenv, 18-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_k145, env)}),
      VInlineCons2(runtime,
        _V0if,
        VInlineCons2(runtime,
        _var0,
        VInlineCons2(runtime,
        VGetArg(upenv, 5-1, 0),
        VInlineCons2(runtime,
        upenv->up->up->vars[0],
        VNULL)))),
      VGetArg(upenv, 17-1, 2));
 }
}
static void _V0iter2_k149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k149" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k149, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.554 4 0) (##inline ##vcore.cons 'if (##inline ##vcore.cons (bruijn p 10 0) (##inline ##vcore.cons (bruijn ##x.568 1 0) (##inline ##vcore.cons (bruijn ##x.570 0 0) '())))))
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VInlineCons2(runtime,
        _V0if,
        VInlineCons2(runtime,
        VGetArg(upenv, 10-1, 0),
        VInlineCons2(runtime,
        upenv->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL)))));
 }
}
static void _V0iter2_k148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k148" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k148, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn iter2 20 6) (close _V0iter2_k149) (bruijn y 5 0) (bruijn cont 19 2))
    V_CALL(VGetArg(upenv, 20-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_k149, env)}),
      VGetArg(upenv, 5-1, 0),
      VGetArg(upenv, 19-1, 2));
 }
}
static void _V0iter2_k152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k152" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k152, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.554 5 0) (##inline ##vcore.cons (##inline ##vcore.cons 'continuation (##inline ##vcore.cons (##inline ##vcore.cons (bruijn k 2 0) '()) (##inline ##vcore.cons (##inline ##vcore.cons 'if (##inline ##vcore.cons (bruijn p 11 0) (##inline ##vcore.cons (bruijn ##x.579 1 0) (##inline ##vcore.cons (bruijn ##x.581 0 0) '())))) '()))) (##inline ##vcore.cons (bruijn cont 21 2) '())))
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0continuation,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        upenv->up->vars[0],
        VNULL),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0if,
        VInlineCons2(runtime,
        VGetArg(upenv, 11-1, 0),
        VInlineCons2(runtime,
        upenv->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL)))),
        VNULL))),
        VInlineCons2(runtime,
        VGetArg(upenv, 21-1, 2),
        VNULL)));
 }
}
static void _V0iter2_k151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k151" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k151, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn iter2 21 6) (close _V0iter2_k152) (bruijn y 6 0) (bruijn k 1 0))
    V_CALL(VGetArg(upenv, 21-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_k152, env)}),
      VGetArg(upenv, 6-1, 0),
      upenv->vars[0]);
 }
}
static void _V0iter2_k150(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k150" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k150, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn iter2 20 6) (close _V0iter2_k151) (bruijn x 7 0) (bruijn k 0 0))
    V_CALL(VGetArg(upenv, 20-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_k151, env)}),
      VGetArg(upenv, 7-1, 0),
      _var0);
 }
}
static void _V0iter2_k147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k147" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k147, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.565 0 0) ((bruijn iter2 19 6) (close _V0iter2_k148) (bruijn x 6 0) (bruijn cont 18 2)) ((bruijn gensym 22 0) (close _V0iter2_k150) (##string ##string.1493)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 19-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_k148, env)}),
      VGetArg(upenv, 6-1, 0),
      VGetArg(upenv, 18-1, 2));
} else {
    V_CALL(VGetArg(upenv, 22-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_k150, env)}),
      VEncodePointer(&_V10string_D1493.sym, VPOINTER_OTHER));
}
 }
}
static void _V0iter2_k153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k153" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k153, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.582 0 0) ((bruijn iter2 19 6) (bruijn ##k.554 2 0) (bruijn y 4 0) (bruijn cont 18 2)) ((bruijn iter2 19 6) (bruijn ##k.554 2 0) (bruijn x 6 0) (bruijn cont 18 2)))
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
static void _V0iter2_k146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k146" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k146, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.564 0 0) ((bruijn symbol? 21 11) (close _V0iter2_k147) (bruijn cont 17 2)) ((bruijn eq? 21 1) (close _V0iter2_k153) (bruijn p 7 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 21-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_k147, env)}),
      VGetArg(upenv, 17-1, 2));
} else {
    V_CALL(VGetArg(upenv, 21-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_k153, env)}),
      VGetArg(upenv, 7-1, 0),
      VEncodeBool(false));
}
 }
}
static void _V0iter2_k143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k143" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k143, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.553 1 0) ((bruijn gensym 20 0) (close _V0iter2_k144) (##string ##string.1497)) ((bruijn symbol? 20 11) (close _V0iter2_k146) (bruijn p 6 0)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 20-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_k144, env)}),
      VEncodePointer(&_V10string_D1497.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 20-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_k146, env)}),
      VGetArg(upenv, 6-1, 0));
}
 }
}
static void _V0iter2_k154(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k154" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k154, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.24 14 1) (bruijn ##k.546 9 0) (bruijn ##x.552 0 0))
    V_CALL(VGetArg(upenv, 14-1, 1), runtime,
      VGetArg(upenv, 9-1, 0),
      _var0);
 }
}
static void _V0iter2_k142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k142" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k142, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter2_k143) (close _V0iter2_k154))
    V_CALL_FUNC(_V0iter2_k143, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_k154, env)}));
 }
}
static void _V0iter2_k141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k141" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k141, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.32 1 0))) ((bruijn application? 15 0) (close _V0iter2_k142) (bruijn p 4 0)) ((bruijn ##k.546 7 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    V_CALL(VGetArg(upenv, 15-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_k142, env)}),
      upenv->up->up->up->vars[0]);
} else {
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter2_k140(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k140" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k140, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.32 0 0)) ((close _V0iter2_k141) (##inline ##vcore.car (bruijn ##expr.32 0 0))) ((bruijn ##k.546 6 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V0iter2_k141, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter2_k139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k139" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k139, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter2_k140) (##inline ##vcore.cdr (bruijn ##expr.31 1 0)))
    V_CALL_FUNC(_V0iter2_k140, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
 }
}
static void _V0iter2_k138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k138" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k138, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.31 0 0)) ((close _V0iter2_k139) (##inline ##vcore.car (bruijn ##expr.31 0 0))) ((bruijn ##k.546 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V0iter2_k139, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter2_k137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k137" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k137, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter2_k138) (##inline ##vcore.cdr (bruijn ##expr.30 1 0)))
    V_CALL_FUNC(_V0iter2_k138, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
 }
}
static void _V0iter2_k136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k136" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k136, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.30 0 0)) ((close _V0iter2_k137) (##inline ##vcore.car (bruijn ##expr.30 0 0))) ((bruijn ##k.546 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V0iter2_k137, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter2_k135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k135" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k135, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.547 0 0) ((close _V0iter2_k136) (##inline ##vcore.cdr (bruijn ##expr.29 2 0))) ((bruijn ##k.546 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0iter2_k136, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter2_k134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k134" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k134, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.29 1 0)) ((bruijn equal? 11 28) (close _V0iter2_k135) 'if (##inline ##vcore.car (bruijn ##expr.29 1 0))) ((bruijn ##k.546 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 11-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_k135, env)}),
      _V0if,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter2_k165(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k165" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k165, runtime, upenv, 1, argc, _var0) {
  // ((bruijn iter2 19 6) (bruijn ##k.530 2 0) (bruijn x 6 0) (##inline ##vcore.cons 'continuation (##inline ##vcore.cons (##inline ##vcore.cons (bruijn sym 1 0) '()) (##inline ##vcore.cons (bruijn ##x.535 0 0) '()))))
    V_CALL(VGetArg(upenv, 19-1, 6), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 6-1, 0),
      VInlineCons2(runtime,
        _V0continuation,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        upenv->vars[0],
        VNULL),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
 }
}
static void _V0iter2_k164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k164" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k164, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn iter2 18 6) (close _V0iter2_k165) (##inline ##vcore.cons 'or (##inline ##vcore.cons (bruijn sym 0 0) (##inline ##vcore.cons (bruijn y 3 0) '()))) (bruijn cont 17 2))
    V_CALL(VGetArg(upenv, 18-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_k165, env)}),
      VInlineCons2(runtime,
        _V0or,
        VInlineCons2(runtime,
        _var0,
        VInlineCons2(runtime,
        upenv->up->up->vars[0],
        VNULL))),
      VGetArg(upenv, 17-1, 2));
 }
}
static void _V0iter2_k163(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k163" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k163, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.529 1 0) ((bruijn gensym 20 0) (close _V0iter2_k164) (##string ##string.1497)) ((bruijn iter2 17 6) (bruijn ##k.530 0 0) (##inline ##vcore.cons 'if (##inline ##vcore.cons (bruijn x 4 0) (##inline ##vcore.cons (bruijn x 4 0) (##inline ##vcore.cons (bruijn y 2 0) '())))) (bruijn cont 16 2)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 20-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_k164, env)}),
      VEncodePointer(&_V10string_D1497.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 17-1, 6), runtime,
      _var0,
      VInlineCons2(runtime,
        _V0if,
        VInlineCons2(runtime,
        upenv->up->up->up->vars[0],
        VInlineCons2(runtime,
        upenv->up->up->up->vars[0],
        VInlineCons2(runtime,
        upenv->up->vars[0],
        VNULL)))),
      VGetArg(upenv, 16-1, 2));
}
 }
}
static void _V0iter2_k166(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k166" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k166, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.24 14 1) (bruijn ##k.523 7 0) (bruijn ##x.528 0 0))
    V_CALL(VGetArg(upenv, 14-1, 1), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0);
 }
}
static void _V0iter2_k162(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k162" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k162, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter2_k163) (close _V0iter2_k166))
    V_CALL_FUNC(_V0iter2_k163, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_k166, env)}));
 }
}
static void _V0iter2_k161(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k161" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k161, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.35 1 0))) ((bruijn application? 15 0) (close _V0iter2_k162) (bruijn x 2 0)) ((bruijn ##k.523 5 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    V_CALL(VGetArg(upenv, 15-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_k162, env)}),
      upenv->up->vars[0]);
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter2_k160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k160" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k160, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.35 0 0)) ((close _V0iter2_k161) (##inline ##vcore.car (bruijn ##expr.35 0 0))) ((bruijn ##k.523 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V0iter2_k161, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter2_k159(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k159" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k159, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter2_k160) (##inline ##vcore.cdr (bruijn ##expr.34 1 0)))
    V_CALL_FUNC(_V0iter2_k160, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
 }
}
static void _V0iter2_k158(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k158" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k158, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.34 0 0)) ((close _V0iter2_k159) (##inline ##vcore.car (bruijn ##expr.34 0 0))) ((bruijn ##k.523 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V0iter2_k159, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter2_k157(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k157" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k157, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.524 0 0) ((close _V0iter2_k158) (##inline ##vcore.cdr (bruijn ##expr.33 2 0))) ((bruijn ##k.523 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0iter2_k158, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter2_k156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k156" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k156, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.33 1 0)) ((bruijn equal? 13 28) (close _V0iter2_k157) 'or (##inline ##vcore.car (bruijn ##expr.33 1 0))) ((bruijn ##k.523 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 13-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_k157, env)}),
      _V0or,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter2_k180(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k180" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k180, runtime, upenv, 1, argc, _var0) {
  // ((bruijn iter2 24 6) (bruijn ##k.510 1 0) (bruijn val 3 0) (##inline ##vcore.cons 'continuation (##inline ##vcore.cons (##inline ##vcore.cons (bruijn x 7 0) '()) (##inline ##vcore.cons (bruijn ##x.515 0 0) '()))))
    V_CALL(VGetArg(upenv, 24-1, 6), runtime,
      upenv->vars[0],
      upenv->up->up->vars[0],
      VInlineCons2(runtime,
        _V0continuation,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(upenv, 7-1, 0),
        VNULL),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
 }
}
static void _V0iter2_k182(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k182" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k182, runtime, upenv, 1, argc, _var0) {
  // ((bruijn iter-let 25 3) (bruijn ##k.510 2 0) (bruijn ##x.516 1 0) (bruijn body 6 0) (bruijn ##x.517 0 0) (bruijn cont 24 2))
    V_CALL(VGetArg(upenv, 25-1, 3), runtime,
      upenv->up->vars[0],
      upenv->vars[0],
      VGetArg(upenv, 6-1, 0),
      _var0,
      VGetArg(upenv, 24-1, 2));
 }
}
static void _V0iter2_k181(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k181" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k181, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn list 27 13) (close _V0iter2_k182) (bruijn val 3 0))
    V_CALL(VGetArg(upenv, 27-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_k182, env)}),
      upenv->up->up->vars[0]);
 }
}
static void _V0iter2_k179(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k179" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k179, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.509 1 0) ((bruijn iter2 23 6) (close _V0iter2_k180) (bruijn body 4 0) (bruijn cont 22 2)) ((bruijn list 26 13) (close _V0iter2_k181) (bruijn x 6 0)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 23-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_k180, env)}),
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 22-1, 2));
} else {
    V_CALL(VGetArg(upenv, 26-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_k181, env)}),
      VGetArg(upenv, 6-1, 0));
}
 }
}
static void _V0iter2_k183(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k183" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k183, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.24 20 1) (bruijn ##k.498 11 0) (bruijn ##x.508 0 0))
    V_CALL(VGetArg(upenv, 20-1, 1), runtime,
      VGetArg(upenv, 11-1, 0),
      _var0);
 }
}
static void _V0iter2_k178(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k178" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k178, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter2_k179) (close _V0iter2_k183))
    V_CALL_FUNC(_V0iter2_k179, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_k183, env)}));
 }
}
static void _V0iter2_k177(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k177" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k177, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.41 1 0))) ((bruijn application? 21 0) (close _V0iter2_k178) (bruijn val 0 0)) ((bruijn ##k.498 9 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    V_CALL(VGetArg(upenv, 21-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_k178, env)}),
      _var0);
} else {
    V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter2_k176(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k176" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k176, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.41 0 0)) ((close _V0iter2_k177) (##inline ##vcore.car (bruijn ##expr.41 0 0))) ((bruijn ##k.498 8 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V0iter2_k177, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter2_k175(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k175" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k175, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.40 1 0))) ((close _V0iter2_k176) (##inline ##vcore.cdr (bruijn ##expr.36 8 0))) ((bruijn ##k.498 7 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    V_CALL_FUNC(_V0iter2_k176, env, runtime,
      VInlineCdr2(runtime,
        VGetArg(upenv, 8-1, 0)));
} else {
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter2_k174(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k174" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k174, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.40 0 0)) ((close _V0iter2_k175) (##inline ##vcore.car (bruijn ##expr.40 0 0))) ((bruijn ##k.498 6 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V0iter2_k175, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter2_k173(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k173" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k173, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.39 1 0))) ((close _V0iter2_k174) (##inline ##vcore.cdr (bruijn ##expr.38 2 0))) ((bruijn ##k.498 5 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    V_CALL_FUNC(_V0iter2_k174, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter2_k172(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k172" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k172, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.39 0 0)) ((close _V0iter2_k173) (##inline ##vcore.car (bruijn ##expr.39 0 0))) ((bruijn ##k.498 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V0iter2_k173, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter2_k171(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k171" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k171, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.38 0 0)) ((close _V0iter2_k172) (##inline ##vcore.car (bruijn ##expr.38 0 0))) ((bruijn ##k.498 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V0iter2_k172, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter2_k170(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k170" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k170, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.500 0 0) ((close _V0iter2_k171) (##inline ##vcore.cdr (bruijn ##expr.37 1 0))) ((bruijn ##k.498 2 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0iter2_k171, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter2_k169(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k169" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k169, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.37 0 0)) ((bruijn equal? 16 28) (close _V0iter2_k170) 'lambda (##inline ##vcore.car (bruijn ##expr.37 0 0))) ((bruijn ##k.498 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL(VGetArg(upenv, 16-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_k170, env)}),
      _V0lambda,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter2_k168(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k168" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k168, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.36 1 0)) ((close _V0iter2_k169) (##inline ##vcore.car (bruijn ##expr.36 1 0))) ((bruijn ##k.498 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(_V0iter2_k169, env, runtime,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter2_k190(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k190" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k190, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.24 16 1) (bruijn ##k.488 5 0) (bruijn ##x.494 0 0))
    V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V0iter2_k189(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k189" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k189, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.45 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.45 0 0))) ((bruijn iter-let 18 3) (close _V0iter2_k190) (##inline ##vcore.car (bruijn ##expr.44 1 0)) (##inline ##vcore.car (bruijn ##expr.45 0 0)) (##inline ##vcore.cdr (bruijn ##expr.42 5 0)) (bruijn cont 17 2)) ((bruijn ##k.488 4 0) #f)) ((bruijn ##k.488 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 18-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_k190, env)}),
      VInlineCar2(runtime,
        upenv->vars[0]),
      VInlineCar2(runtime,
        _var0),
      VInlineCdr2(runtime,
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
static void _V0iter2_k188(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k188" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k188, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.44 0 0)) ((close _V0iter2_k189) (##inline ##vcore.cdr (bruijn ##expr.44 0 0))) ((bruijn ##k.488 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V0iter2_k189, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter2_k187(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k187" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k187, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.490 0 0) ((close _V0iter2_k188) (##inline ##vcore.cdr (bruijn ##expr.43 1 0))) ((bruijn ##k.488 2 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0iter2_k188, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter2_k186(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k186" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k186, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.43 0 0)) ((bruijn equal? 18 28) (close _V0iter2_k187) 'lambda (##inline ##vcore.car (bruijn ##expr.43 0 0))) ((bruijn ##k.488 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL(VGetArg(upenv, 18-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_k187, env)}),
      _V0lambda,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter2_k185(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k185" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k185, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.42 1 0)) ((close _V0iter2_k186) (##inline ##vcore.car (bruijn ##expr.42 1 0))) ((bruijn ##k.488 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(_V0iter2_k186, env, runtime,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k197(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k197" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k197, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.51 5 1) (bruijn ##k.476 2 0) (bruijn ##expr.53 3 1) (bruijn ##x.477 1 0) (bruijn ##x.478 0 0))
    V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->vars[0],
      upenv->up->up->vars[1],
      upenv->vars[0],
      _var0);
 }
}
static void _V0loop_k196(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k196" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k196, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 27 5) (close _V0loop_k197) (bruijn ##vals.50 2 3))
    V_CALL(VGetArg(upenv, 27-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k197, env)}),
      upenv->up->vars[3]);
 }
}
static void _V0loop_k195(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k195" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k195, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##expr.53 1 1))) ((bruijn reverse 26 5) (close _V0loop_k196) (bruijn ##xs.49 1 2)) ((bruijn ##k.476 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        upenv->vars[1])))) {
    V_CALL(VGetArg(upenv, 26-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k196, env)}),
      upenv->vars[2]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k201(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k201" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k201, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##vcore.pair? (bruijn ##expr.55 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.55 0 0))) ((bruijn ##kk.52 3 1) (bruijn ##k.468 1 0) (##inline ##vcore.cdr (bruijn ##expr.53 6 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##expr.54 2 0)) (bruijn ##xs.49 6 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##expr.55 0 0)) (bruijn ##vals.50 6 3))) ((bruijn ##k.468 1 0) #f)) ((bruijn ##k.468 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(upenv->up->up->vars[1], runtime,
      upenv->vars[0],
      VInlineCdr2(runtime,
        VGetArg(upenv, 6-1, 1)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->up->vars[0]),
        VGetArg(upenv, 6-1, 2)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
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
static void _V0loop_k200(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k200" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k200, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.54 1 0)) ((close _V0loop_k201) (##inline ##vcore.cdr (bruijn ##expr.54 1 0))) ((bruijn ##k.468 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(_V0loop_k201, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k204(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k204" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k204, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.51 9 1) (bruijn ##k.463 4 0) (bruijn ##expr.53 7 1) (bruijn ##x.465 1 0) (bruijn ##x.466 0 0))
    V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 7-1, 1),
      upenv->vars[0],
      _var0);
 }
}
static void _V0loop_k203(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k203" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k203, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 31 5) (close _V0loop_k204) (bruijn ##vals.50 6 3))
    V_CALL(VGetArg(upenv, 31-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k204, env)}),
      VGetArg(upenv, 6-1, 3));
 }
}
static void _V0loop_k202(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k202" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k202, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 30 5) (close _V0loop_k203) (bruijn ##xs.49 5 2))
    V_CALL(VGetArg(upenv, 30-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k203, env)}),
      VGetArg(upenv, 5-1, 2));
 }
}
static void _V0loop_k199(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k199" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k199, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0loop_k200) (close _V0loop_k202))
    V_CALL_FUNC(_V0loop_k200, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k202, env)}));
 }
}
static void _V0loop_lambda39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda39, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda39, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_k199) (##inline ##vcore.car (bruijn ##expr.53 3 1)))
    V_CALL_FUNC(_V0loop_k199, env, runtime,
      VInlineCar2(runtime,
        upenv->up->up->vars[1]));
 }
}
static void _V0loop_lambda38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda38, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 27 27) (bruijn ##k.462 0 0) (close _V0loop_lambda39))
    V_CALL(VGetArg(upenv, 27-1, 27), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda39, env)}));
 }
}
static void _V0loop_k198(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k198" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k198, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call-with-values 26 6) (bruijn ##k.460 1 0) (close _V0loop_lambda38) (bruijn loop 2 0))
    V_CALL(VGetArg(upenv, 26-1, 6), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda38, env)}),
      upenv->up->vars[0]);
 }
}
static void _V0loop_lambda37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0loop_lambda37" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0loop_lambda37, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda37, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((close _V0loop_k195) (close _V0loop_k198))
    V_CALL_FUNC(_V0loop_k195, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k198, env)}));
 }
}
static void _V0iter2_lambda36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter2_lambda36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0iter2_lambda36, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_lambda36, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V0loop_lambda37)) ((bruijn loop 0 0) (bruijn ##k.459 1 0) (##inline ##vcore.car (bruijn ##expr.47 3 0)) '() '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda37, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VInlineCar2(runtime,
        upenv->up->up->vars[0]),
      VNULL,
      VNULL);
    }
 }
}
static void _V0iter2_lambda35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_lambda35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_lambda35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_lambda35, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 22 27) (bruijn ##k.458 0 0) (close _V0iter2_lambda36))
    V_CALL(VGetArg(upenv, 22-1, 27), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_lambda36, env)}));
 }
}
static void _V0iter2_k206(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k206" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k206, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.24 18 1) (bruijn ##k.480 2 0) (bruijn ##x.484 0 0))
    V_CALL(VGetArg(upenv, 18-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0iter2_k205(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k205" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k205, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.56 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.56 0 0))) ((bruijn iter-letrec 20 4) (close _V0iter2_k206) (bruijn xs 1 2) (##inline ##vcore.car (bruijn ##expr.56 0 0)) (bruijn vals 1 3) (bruijn cont 19 2)) ((bruijn ##k.480 1 0) #f)) ((bruijn ##k.480 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 20-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_k206, env)}),
      upenv->vars[2],
      VInlineCar2(runtime,
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
static void _V0iter2_lambda40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0iter2_lambda40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0iter2_lambda40, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_lambda40, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##vcore.null? (bruijn tail-expr 0 1)) ((close _V0iter2_k205) (##inline ##vcore.cdr (bruijn ##expr.47 1 0))) ((bruijn ##k.480 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    V_CALL_FUNC(_V0iter2_k205, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter2_k194(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k194" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k194, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.47 0 0)) ((bruijn call-with-values 21 6) (bruijn ##k.455 2 0) (close _V0iter2_lambda35) (close _V0iter2_lambda40)) ((bruijn ##k.455 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL(VGetArg(upenv, 21-1, 6), runtime,
      upenv->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_lambda35, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_lambda40, env)}));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter2_k193(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k193" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k193, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.456 0 0) ((close _V0iter2_k194) (##inline ##vcore.cdr (bruijn ##expr.46 2 0))) ((bruijn ##k.455 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0iter2_k194, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter2_k192(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k192" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k192, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.46 1 0)) ((bruijn equal? 19 28) (close _V0iter2_k193) 'letrec (##inline ##vcore.car (bruijn ##expr.46 1 0))) ((bruijn ##k.455 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 19-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_k193, env)}),
      _V0letrec,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter2_k208(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k208" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k208, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k208, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.24 14 1) (bruijn ##k.446 14 0) (bruijn ##x.453 0 0))
    V_CALL(VGetArg(upenv, 14-1, 1), runtime,
      VGetArg(upenv, 14-1, 0),
      _var0);
 }
}
static void _V0iter2_k207(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k207" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k207, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn iter-combination 16 5) (close _V0iter2_k208) (bruijn expr 15 1) (bruijn cont 15 2))
    V_CALL(VGetArg(upenv, 16-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_k208, env)}),
      VGetArg(upenv, 15-1, 1),
      VGetArg(upenv, 15-1, 2));
 }
}
static void _V0iter2_lambda34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_lambda34" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_lambda34, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter2_k192) (close _V0iter2_k207))
    V_CALL_FUNC(_V0iter2_k192, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_k207, env)}));
 }
}
static void _V0iter2_k191(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k191" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k191, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter2_lambda34) (bruijn ##input.25 10 0))
    V_CALL_FUNC(_V0iter2_lambda34, env, runtime,
      VGetArg(upenv, 10-1, 0));
 }
}
static void _V0iter2_lambda33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_lambda33" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_lambda33, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter2_k185) (close _V0iter2_k191))
    V_CALL_FUNC(_V0iter2_k185, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_k191, env)}));
 }
}
static void _V0iter2_k184(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k184" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k184, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter2_lambda33) (bruijn ##input.25 8 0))
    V_CALL_FUNC(_V0iter2_lambda33, env, runtime,
      VGetArg(upenv, 8-1, 0));
 }
}
static void _V0iter2_lambda32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_lambda32" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_lambda32, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter2_k168) (close _V0iter2_k184))
    V_CALL_FUNC(_V0iter2_k168, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_k184, env)}));
 }
}
static void _V0iter2_k167(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k167" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k167, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter2_lambda32) (bruijn ##input.25 6 0))
    V_CALL_FUNC(_V0iter2_lambda32, env, runtime,
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V0iter2_lambda31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_lambda31" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_lambda31, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter2_k156) (close _V0iter2_k167))
    V_CALL_FUNC(_V0iter2_k156, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_k167, env)}));
 }
}
static void _V0iter2_k155(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k155" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k155, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter2_lambda31) (bruijn ##input.25 4 0))
    V_CALL_FUNC(_V0iter2_lambda31, env, runtime,
      upenv->up->up->up->vars[0]);
 }
}
static void _V0iter2_lambda30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_lambda30" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_lambda30, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter2_k134) (close _V0iter2_k155))
    V_CALL_FUNC(_V0iter2_k134, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_k155, env)}));
 }
}
static void _V0iter2_k133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k133" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k133, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter2_lambda30) (bruijn ##input.25 2 0))
    V_CALL_FUNC(_V0iter2_lambda30, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V0iter2_lambda29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_lambda29" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_lambda29, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter2_k122) (close _V0iter2_k133))
    V_CALL_FUNC(_V0iter2_k122, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_k133, env)}));
 }
}
static void _V0iter2_lambda28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_lambda28" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_lambda28, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter2_lambda29) (bruijn ##input.25 0 0))
    V_CALL_FUNC(_V0iter2_lambda29, env, runtime,
      _var0);
 }
}
static void _V0iter2_lambda27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter2_lambda27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0iter2_lambda27, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_lambda27, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0iter2_lambda28) (bruijn expr 2 1))
    V_CALL_FUNC(_V0iter2_lambda28, env, runtime,
      upenv->up->vars[1]);
 }
}
static void _V0iter2_k209(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k209" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k209, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.444 2 0) (##inline ##vcore.cons (bruijn cont 2 2) (##inline ##vcore.cons (bruijn ##x.603 0 0) '())))
    V_CALL(upenv->up->vars[0], runtime,
      VInlineCons2(runtime,
        upenv->up->vars[2],
        VInlineCons2(runtime,
        _var0,
        VNULL)));
 }
}
static void _V0iter2_k121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter2_k121" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k121, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.445 0 0) ((bruijn call/cc 5 27) (bruijn ##k.444 1 0) (close _V0iter2_lambda27)) ((bruijn iter-atom 2 2) (close _V0iter2_k209) (bruijn expr 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 5-1, 27), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_lambda27, env)}));
} else {
    V_CALL(upenv->up->vars[2], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_k209, env)}),
      upenv->vars[1]);
}
 }
}
static void _V0iter2_lambda26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0iter2_lambda26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0iter2_lambda26, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_lambda26, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn application? 1 0) (close _V0iter2_k121) (bruijn expr 0 1))
    V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_k121, env)}),
      _var1);
 }
}
static void _V0to__cps__impl_k211(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0to__cps__impl_k211" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0to__cps__impl_k211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__cps__impl_k211, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.604 2 0) (##inline ##vcore.cons 'lambda (##inline ##vcore.cons (##inline ##vcore.cons (bruijn next 1 0) '()) (##inline ##vcore.cons (bruijn ##x.608 0 0) '()))))
    V_CALL(upenv->up->vars[0], runtime,
      VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        upenv->vars[0],
        VNULL),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
 }
}
static void _V0to__cps__impl_k210(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0to__cps__impl_k210" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0to__cps__impl_k210, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__cps__impl_k210, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn iter2 2 6) (close _V0to__cps__impl_k211) (bruijn expr 1 1) (bruijn next 0 0))
    V_CALL(upenv->up->vars[6], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__cps__impl_k211, env)}),
      upenv->vars[1],
      _var0);
 }
}
static void _V0to__cps__impl_lambda41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0to__cps__impl_lambda41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0to__cps__impl_lambda41, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__cps__impl_lambda41, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn gensym 4 0) (close _V0to__cps__impl_k210) (##string ##string.1498))
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__cps__impl_k210, env)}),
      VEncodePointer(&_V10string_D1498.sym, VPOINTER_OTHER));
 }
}
static void _V0to__cps_k213(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0to__cps_k213" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0to__cps_k213, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__cps_k213, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.629 0 0) ((bruijn ##kk.1 4 1) (bruijn ##k.628 1 0) (bruijn expr 6 1)) ((bruijn ##k.628 1 0) #f))
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
static void _V0to__cps_k212(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0to__cps_k212" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0to__cps_k212, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__cps_k212, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.3 1 0)) ((bruijn equal? 7 28) (close _V0to__cps_k213) '##foreign.declare (##inline ##vcore.car (bruijn ##expr.3 1 0))) ((bruijn ##k.628 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 7-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__cps_k213, env)}),
      _V10foreign_Ddeclare,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0to__cps_k221(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0to__cps_k221" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0to__cps_k221, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__cps_k221, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.1 11 1) (bruijn ##k.614 6 0) (##inline ##vcore.cons '##vcore.declare (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##expr.5 4 0)) (##inline ##vcore.cons (bruijn ##x.622 0 0) '()))))
    V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      VInlineCons2(runtime,
        _V10vcore_Ddeclare,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->up->up->up->vars[0]),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
 }
}
static void _V0to__cps_k220(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0to__cps_k220" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0to__cps_k220, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__cps_k220, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cadr 14 2) (close _V0to__cps_k221) (bruijn ##x.623 0 0))
    V_CALL(VGetArg(upenv, 14-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__cps_k221, env)}),
      _var0);
 }
}
static void _V0to__cps_k219(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0to__cps_k219" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0to__cps_k219, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__cps_k219, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn caddr 13 3) (close _V0to__cps_k220) (bruijn ##x.624 0 0))
    V_CALL(VGetArg(upenv, 13-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__cps_k220, env)}),
      _var0);
 }
}
static void _V0to__cps_k218(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0to__cps_k218" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0to__cps_k218, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__cps_k218, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.6 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.6 0 0))) ((bruijn to-cps-impl 9 7) (close _V0to__cps_k219) (##inline ##vcore.car (bruijn ##expr.6 0 0))) ((bruijn ##k.614 3 0) #f)) ((bruijn ##k.614 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 9-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__cps_k219, env)}),
      VInlineCar2(runtime,
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
static void _V0to__cps_k217(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0to__cps_k217" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0to__cps_k217, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__cps_k217, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.5 0 0)) ((close _V0to__cps_k218) (##inline ##vcore.cdr (bruijn ##expr.5 0 0))) ((bruijn ##k.614 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V0to__cps_k218, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0to__cps_k216(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0to__cps_k216" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0to__cps_k216, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__cps_k216, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.615 0 0) ((close _V0to__cps_k217) (##inline ##vcore.cdr (bruijn ##expr.4 2 0))) ((bruijn ##k.614 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0to__cps_k217, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0to__cps_k215(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0to__cps_k215" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0to__cps_k215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__cps_k215, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.4 1 0)) ((bruijn equal? 9 28) (close _V0to__cps_k216) '##vcore.declare (##inline ##vcore.car (bruijn ##expr.4 1 0))) ((bruijn ##k.614 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 9-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__cps_k216, env)}),
      _V10vcore_Ddeclare,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0to__cps_k223(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0to__cps_k223" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0to__cps_k223, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__cps_k223, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.1 6 1) (bruijn ##k.609 6 0) (bruijn ##x.612 0 0))
    V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0);
 }
}
static void _V0to__cps_k222(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0to__cps_k222" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0to__cps_k222, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__cps_k222, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn to-cps-impl 6 7) (close _V0to__cps_k223) (bruijn expr 7 1))
    V_CALL(VGetArg(upenv, 6-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__cps_k223, env)}),
      VGetArg(upenv, 7-1, 1));
 }
}
static void _V0to__cps_lambda45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0to__cps_lambda45" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0to__cps_lambda45, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0to__cps_k215) (close _V0to__cps_k222))
    V_CALL_FUNC(_V0to__cps_k215, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__cps_k222, env)}));
 }
}
static void _V0to__cps_k214(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0to__cps_k214" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0to__cps_k214, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__cps_k214, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0to__cps_lambda45) (bruijn ##input.2 2 0))
    V_CALL_FUNC(_V0to__cps_lambda45, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V0to__cps_lambda44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0to__cps_lambda44" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0to__cps_lambda44, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0to__cps_k212) (close _V0to__cps_k214))
    V_CALL_FUNC(_V0to__cps_k212, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__cps_k214, env)}));
 }
}
static void _V0to__cps_lambda43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0to__cps_lambda43" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0to__cps_lambda43, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0to__cps_lambda44) (bruijn ##input.2 0 0))
    V_CALL_FUNC(_V0to__cps_lambda44, env, runtime,
      _var0);
 }
}
static void _V0to__cps_lambda42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0to__cps_lambda42" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0to__cps_lambda42, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__cps_lambda42, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0to__cps_lambda43) (bruijn expr 2 1))
    V_CALL_FUNC(_V0to__cps_lambda43, env, runtime,
      upenv->up->vars[1]);
 }
}
static void _V0to__cps_lambda3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0to__cps_lambda3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0to__cps_lambda3, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__cps_lambda3, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 8 ((close _V0application_Q_lambda4) (close _V0combination_Q_lambda5) (close _V0iter__atom_lambda6) (close _V0iter__let_lambda20) (close _V0iter__letrec_lambda22) (close _V0iter__combination_lambda24) (close _V0iter2_lambda26) (close _V0to__cps__impl_lambda41)) ((bruijn call/cc 3 27) (bruijn ##k.295 1 0) (close _V0to__cps_lambda42)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[8]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 8, 8, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0application_Q_lambda4, env)});
    env->vars[1] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0combination_Q_lambda5, env)});
    env->vars[2] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_lambda6, env)});
    env->vars[3] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__let_lambda20, env)});
    env->vars[4] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__letrec_lambda22, env)});
    env->vars[5] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__combination_lambda24, env)});
    env->vars[6] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_lambda26, env)});
    env->vars[7] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__cps__impl_lambda41, env)});
    V_CALL(upenv->up->up->vars[27], runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__cps_lambda42, env)}));
    }
 }
}
static void _V0memtail_k227(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0memtail_k227" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0memtail_k227, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0memtail_k227, runtime, upenv, 1, argc, _var0) {
  // ((bruijn memtail 5 1) (bruijn ##k.631 4 0) (bruijn x 4 1) (bruijn ##x.634 0 0))
    V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->up->up->vars[1],
      _var0);
 }
}
static void _V0memtail_k226(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0memtail_k226" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0memtail_k226, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0memtail_k226, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.633 0 0) ((bruijn ##k.631 3 0) (bruijn lst 3 2)) ((bruijn cdr 5 23) (close _V0memtail_k227) (bruijn lst 3 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->vars[0], runtime,
      upenv->up->up->vars[2]);
} else {
    V_CALL(VGetArg(upenv, 5-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0memtail_k227, env)}),
      upenv->up->up->vars[2]);
}
 }
}
static void _V0memtail_k225(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0memtail_k225" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0memtail_k225, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0memtail_k225, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn equal? 4 28) (close _V0memtail_k226) (bruijn x 2 1) (bruijn ##x.635 0 0))
    V_CALL(upenv->up->up->up->vars[28], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0memtail_k226, env)}),
      upenv->up->vars[1],
      _var0);
 }
}
static void _V0memtail_k228(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0memtail_k228" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0memtail_k228, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0memtail_k228, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.636 0 0) ((bruijn ##k.631 2 0) (bruijn lst 2 2)) ((bruijn ##k.631 2 0) #f))
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
static void _V0memtail_k224(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0memtail_k224" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0memtail_k224, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0memtail_k224, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.632 0 0) ((bruijn car 3 22) (close _V0memtail_k225) (bruijn lst 1 2)) ((bruijn equal? 3 28) (close _V0memtail_k228) (bruijn x 1 1) (bruijn lst 1 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->vars[22], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0memtail_k225, env)}),
      upenv->vars[2]);
} else {
    V_CALL(upenv->up->up->vars[28], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0memtail_k228, env)}),
      upenv->vars[1],
      upenv->vars[2]);
}
 }
}
static void _V0memtail_lambda46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0memtail_lambda46" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0memtail_lambda46, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0memtail_lambda46, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn pair? 2 20) (close _V0memtail_k224) (bruijn lst 0 2))
    V_CALL(upenv->up->vars[20], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0memtail_k224, env)}),
      _var2);
 }
}
static void _V0annotate__lambdas_lambda47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0annotate__lambdas_lambda47" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0annotate__lambdas_lambda47, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0annotate__lambdas_lambda47, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.637 0 0) (bruijn expr 0 1))
    V_CALL(_var0, runtime,
      _var1);
 }
}
static void _V0alpha__convert_lambda48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0alpha__convert_lambda48" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0alpha__convert_lambda48, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0alpha__convert_lambda48, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.638 0 0) (bruijn expr 0 1))
    V_CALL(_var0, runtime,
      _var1);
 }
}
static void _V0deannotate__lambdas_lambda49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0deannotate__lambdas_lambda49" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0deannotate__lambdas_lambda49, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0deannotate__lambdas_lambda49, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.639 0 0) (bruijn expr 0 1))
    V_CALL(_var0, runtime,
      _var1);
 }
}
static void _V0ref__count__lambda_k229(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count__lambda_k229" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count__lambda_k229, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count__lambda_k229, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.641 0 0) ((bruijn ##k.640 1 0) 0) ((bruijn ref-count 2 6) (bruijn ##k.640 1 0) (bruijn x 1 1) (bruijn body 1 3)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VEncodeInt(0l));
} else {
    V_CALL(upenv->up->vars[6], runtime,
      upenv->vars[0],
      upenv->vars[1],
      upenv->vars[3]);
}
 }
}
static void _V0ref__count__lambda_lambda50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0ref__count__lambda_lambda50" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0ref__count__lambda_lambda50, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count__lambda_lambda50, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn memtail 1 1) (close _V0ref__count__lambda_k229) (bruijn x 0 1) (bruijn args 0 2))
    V_CALL(upenv->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0ref__count__lambda_k229, env)}),
      _var1,
      _var2);
 }
}
static void _V0ref__count_k234(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count_k234" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k234, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_k234, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.57 7 1) (bruijn ##k.750 4 0) (bruijn ##x.755 0 0))
    V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->up->up->vars[0],
      _var0);
 }
}
static void _V0ref__count_k233(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count_k233" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k233, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_k233, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.61 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.61 0 0))) ((bruijn ref-count-lambda 8 5) (close _V0ref__count_k234) (bruijn x 7 1) (##inline ##vcore.car (bruijn ##expr.60 1 0)) (##inline ##vcore.car (bruijn ##expr.61 0 0))) ((bruijn ##k.750 3 0) #f)) ((bruijn ##k.750 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 8-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0ref__count_k234, env)}),
      VGetArg(upenv, 7-1, 1),
      VInlineCar2(runtime,
        upenv->vars[0]),
      VInlineCar2(runtime,
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
static void _V0ref__count_k232(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count_k232" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k232, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_k232, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.60 0 0)) ((close _V0ref__count_k233) (##inline ##vcore.cdr (bruijn ##expr.60 0 0))) ((bruijn ##k.750 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V0ref__count_k233, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0ref__count_k231(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count_k231" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k231, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_k231, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.751 0 0) ((close _V0ref__count_k232) (##inline ##vcore.cdr (bruijn ##expr.59 2 0))) ((bruijn ##k.750 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0ref__count_k232, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0ref__count_k230(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count_k230" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k230, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_k230, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.59 1 0)) ((bruijn equal? 6 28) (close _V0ref__count_k231) 'lambda (##inline ##vcore.car (bruijn ##expr.59 1 0))) ((bruijn ##k.750 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 6-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0ref__count_k231, env)}),
      _V0lambda,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0ref__count_k240(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count_k240" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k240, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_k240, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.57 9 1) (bruijn ##k.741 4 0) (bruijn ##x.746 0 0))
    V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->up->up->vars[0],
      _var0);
 }
}
static void _V0ref__count_k239(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count_k239" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k239, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_k239, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.64 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.64 0 0))) ((bruijn ref-count-lambda 10 5) (close _V0ref__count_k240) (bruijn x 9 1) (##inline ##vcore.car (bruijn ##expr.63 1 0)) (##inline ##vcore.car (bruijn ##expr.64 0 0))) ((bruijn ##k.741 3 0) #f)) ((bruijn ##k.741 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 10-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0ref__count_k240, env)}),
      VGetArg(upenv, 9-1, 1),
      VInlineCar2(runtime,
        upenv->vars[0]),
      VInlineCar2(runtime,
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
static void _V0ref__count_k238(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count_k238" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k238, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_k238, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.63 0 0)) ((close _V0ref__count_k239) (##inline ##vcore.cdr (bruijn ##expr.63 0 0))) ((bruijn ##k.741 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V0ref__count_k239, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0ref__count_k237(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count_k237" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k237, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_k237, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.742 0 0) ((close _V0ref__count_k238) (##inline ##vcore.cdr (bruijn ##expr.62 2 0))) ((bruijn ##k.741 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0ref__count_k238, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0ref__count_k236(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count_k236" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k236, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_k236, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.62 1 0)) ((bruijn equal? 8 28) (close _V0ref__count_k237) 'continuation (##inline ##vcore.car (bruijn ##expr.62 1 0))) ((bruijn ##k.741 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 8-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0ref__count_k237, env)}),
      _V0continuation,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k246(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k246" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k246, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k246, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.69 5 1) (bruijn ##k.730 2 0) (bruijn ##expr.71 3 1) (bruijn ##x.731 1 0) (bruijn ##x.732 0 0))
    V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->vars[0],
      upenv->up->up->vars[1],
      upenv->vars[0],
      _var0);
 }
}
static void _V0loop_k245(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k245" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k245, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k245, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 17 5) (close _V0loop_k246) (bruijn ##body.68 2 3))
    V_CALL(VGetArg(upenv, 17-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k246, env)}),
      upenv->up->vars[3]);
 }
}
static void _V0loop_k244(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k244" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k244, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k244, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##expr.71 1 1))) ((bruijn reverse 16 5) (close _V0loop_k245) (bruijn ##args.67 1 2)) ((bruijn ##k.730 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        upenv->vars[1])))) {
    V_CALL(VGetArg(upenv, 16-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k245, env)}),
      upenv->vars[2]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k250(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k250" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k250, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k250, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##vcore.pair? (bruijn ##expr.73 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.73 0 0))) ((bruijn ##kk.70 3 1) (bruijn ##k.722 1 0) (##inline ##vcore.cdr (bruijn ##expr.71 6 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##expr.72 2 0)) (bruijn ##args.67 6 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##expr.73 0 0)) (bruijn ##body.68 6 3))) ((bruijn ##k.722 1 0) #f)) ((bruijn ##k.722 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(upenv->up->up->vars[1], runtime,
      upenv->vars[0],
      VInlineCdr2(runtime,
        VGetArg(upenv, 6-1, 1)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->up->vars[0]),
        VGetArg(upenv, 6-1, 2)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
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
static void _V0loop_k249(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k249" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k249, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k249, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.72 1 0)) ((close _V0loop_k250) (##inline ##vcore.cdr (bruijn ##expr.72 1 0))) ((bruijn ##k.722 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(_V0loop_k250, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k253(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k253" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k253, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k253, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.69 9 1) (bruijn ##k.717 4 0) (bruijn ##expr.71 7 1) (bruijn ##x.719 1 0) (bruijn ##x.720 0 0))
    V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 7-1, 1),
      upenv->vars[0],
      _var0);
 }
}
static void _V0loop_k252(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k252" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k252, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k252, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 21 5) (close _V0loop_k253) (bruijn ##body.68 6 3))
    V_CALL(VGetArg(upenv, 21-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k253, env)}),
      VGetArg(upenv, 6-1, 3));
 }
}
static void _V0loop_k251(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k251" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k251, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k251, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 20 5) (close _V0loop_k252) (bruijn ##args.67 5 2))
    V_CALL(VGetArg(upenv, 20-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k252, env)}),
      VGetArg(upenv, 5-1, 2));
 }
}
static void _V0loop_k248(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k248" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k248, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k248, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0loop_k249) (close _V0loop_k251))
    V_CALL_FUNC(_V0loop_k249, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k251, env)}));
 }
}
static void _V0loop_lambda61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda61" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda61, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda61, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_k248) (##inline ##vcore.car (bruijn ##expr.71 3 1)))
    V_CALL_FUNC(_V0loop_k248, env, runtime,
      VInlineCar2(runtime,
        upenv->up->up->vars[1]));
 }
}
static void _V0loop_lambda60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda60" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda60, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 17 27) (bruijn ##k.716 0 0) (close _V0loop_lambda61))
    V_CALL(VGetArg(upenv, 17-1, 27), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda61, env)}));
 }
}
static void _V0loop_k247(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k247" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k247, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k247, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call-with-values 16 6) (bruijn ##k.714 1 0) (close _V0loop_lambda60) (bruijn loop 2 0))
    V_CALL(VGetArg(upenv, 16-1, 6), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda60, env)}),
      upenv->up->vars[0]);
 }
}
static void _V0loop_lambda59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0loop_lambda59" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0loop_lambda59, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda59, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((close _V0loop_k244) (close _V0loop_k247))
    V_CALL_FUNC(_V0loop_k244, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k247, env)}));
 }
}
static void _V0ref__count_lambda58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0ref__count_lambda58" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0ref__count_lambda58, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_lambda58, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V0loop_lambda59)) ((bruijn loop 0 0) (bruijn ##k.713 1 0) (##inline ##vcore.cdr (bruijn ##expr.65 5 0)) '() '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda59, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VInlineCdr2(runtime,
        VGetArg(upenv, 5-1, 0)),
      VNULL,
      VNULL);
    }
 }
}
static void _V0ref__count_lambda57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count_lambda57" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_lambda57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_lambda57, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 12 27) (bruijn ##k.712 0 0) (close _V0ref__count_lambda58))
    V_CALL(VGetArg(upenv, 12-1, 27), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0ref__count_lambda58, env)}));
 }
}
static void _V0ref__count_k255(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count_k255" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k255, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_k255, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.57 11 1) (bruijn ##k.734 2 0) (bruijn ##x.736 0 0))
    V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0ref__count_k254(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count_k254" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k254, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_k254, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn apply 13 4) (close _V0ref__count_k255) (bruijn + 13 25) (bruijn ##x.737 0 0))
    V_CALL(VGetArg(upenv, 13-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0ref__count_k255, env)}),
      VGetArg(upenv, 13-1, 25),
      _var0);
 }
}
static void _V0ref__count_lambda63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0ref__count_lambda63" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0ref__count_lambda63, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_lambda63, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // ((bruijn ref-count-lambda 12 5) (bruijn ##k.738 0 0) (bruijn x 11 1) (bruijn args 0 1) (bruijn body 0 2))
    V_CALL(VGetArg(upenv, 12-1, 5), runtime,
      _var0,
      VGetArg(upenv, 11-1, 1),
      _var1,
      _var2);
 }
}
static void _V0ref__count_lambda62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0ref__count_lambda62" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0ref__count_lambda62, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_lambda62, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##vcore.null? (bruijn tail-expr 0 1)) ((bruijn map 12 7) (close _V0ref__count_k254) (close _V0ref__count_lambda63) (bruijn args 0 2) (bruijn body 0 3)) ((bruijn ##k.734 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    V_CALL(VGetArg(upenv, 12-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0ref__count_k254, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0ref__count_lambda63, env)}),
      _var2,
      _var3);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0ref__count_k243(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count_k243" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k243, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_k243, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.711 0 0) ((bruijn call-with-values 11 6) (bruijn ##k.710 1 0) (close _V0ref__count_lambda57) (close _V0ref__count_lambda62)) ((bruijn ##k.710 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 11-1, 6), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0ref__count_lambda57, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0ref__count_lambda62, env)}));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0ref__count_k242(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count_k242" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k242, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_k242, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.65 1 0)) ((bruijn equal? 10 28) (close _V0ref__count_k243) 'case-lambda (##inline ##vcore.car (bruijn ##expr.65 1 0))) ((bruijn ##k.710 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 10-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0ref__count_k243, env)}),
      _V0case__lambda,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0ref__count_k258(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count_k258" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k258, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_k258, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.707 0 0) ((bruijn ##kk.57 10 1) (bruijn ##k.706 1 0) 0) ((bruijn ##k.706 1 0) #f))
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
static void _V0ref__count_k257(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count_k257" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k257, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_k257, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.74 1 0)) ((bruijn equal? 12 28) (close _V0ref__count_k258) '##foreign.function (##inline ##vcore.car (bruijn ##expr.74 1 0))) ((bruijn ##k.706 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 12-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0ref__count_k258, env)}),
      _V10foreign_Dfunction,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0ref__count_k262(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count_k262" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k262, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_k262, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##vcore.pair? (bruijn ##expr.76 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.76 0 0))) ((bruijn ##kk.57 13 1) (bruijn ##k.699 2 0) 0) ((bruijn ##k.699 2 0) #f)) ((bruijn ##k.699 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
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
static void _V0ref__count_k261(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count_k261" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k261, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_k261, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.700 0 0) ((close _V0ref__count_k262) (##inline ##vcore.cdr (bruijn ##expr.75 2 0))) ((bruijn ##k.699 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0ref__count_k262, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0ref__count_k260(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count_k260" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k260, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_k260, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.75 1 0)) ((bruijn equal? 14 28) (close _V0ref__count_k261) 'quote (##inline ##vcore.car (bruijn ##expr.75 1 0))) ((bruijn ##k.699 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 14-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0ref__count_k261, env)}),
      _V0quote,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k269(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k269" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k269, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k269, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.82 5 1) (bruijn ##k.682 2 0) (bruijn ##expr.84 3 1) (bruijn ##x.683 1 0) (bruijn ##x.684 0 0))
    V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->vars[0],
      upenv->up->up->vars[1],
      upenv->vars[0],
      _var0);
 }
}
static void _V0loop_k268(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k268" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k268, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k268, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 24 5) (close _V0loop_k269) (bruijn ##vals.81 2 3))
    V_CALL(VGetArg(upenv, 24-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k269, env)}),
      upenv->up->vars[3]);
 }
}
static void _V0loop_k267(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k267" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k267, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k267, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##expr.84 1 1))) ((bruijn reverse 23 5) (close _V0loop_k268) (bruijn ##args.80 1 2)) ((bruijn ##k.682 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        upenv->vars[1])))) {
    V_CALL(VGetArg(upenv, 23-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k268, env)}),
      upenv->vars[2]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k273(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k273" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k273, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k273, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##vcore.pair? (bruijn ##expr.86 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.86 0 0))) ((bruijn ##kk.83 3 1) (bruijn ##k.674 1 0) (##inline ##vcore.cdr (bruijn ##expr.84 6 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##expr.85 2 0)) (bruijn ##args.80 6 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##expr.86 0 0)) (bruijn ##vals.81 6 3))) ((bruijn ##k.674 1 0) #f)) ((bruijn ##k.674 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(upenv->up->up->vars[1], runtime,
      upenv->vars[0],
      VInlineCdr2(runtime,
        VGetArg(upenv, 6-1, 1)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->up->vars[0]),
        VGetArg(upenv, 6-1, 2)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
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
static void _V0loop_k272(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k272" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k272, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k272, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.85 1 0)) ((close _V0loop_k273) (##inline ##vcore.cdr (bruijn ##expr.85 1 0))) ((bruijn ##k.674 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(_V0loop_k273, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k276(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k276" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k276, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k276, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.82 9 1) (bruijn ##k.669 4 0) (bruijn ##expr.84 7 1) (bruijn ##x.671 1 0) (bruijn ##x.672 0 0))
    V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 7-1, 1),
      upenv->vars[0],
      _var0);
 }
}
static void _V0loop_k275(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k275" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k275, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k275, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 28 5) (close _V0loop_k276) (bruijn ##vals.81 6 3))
    V_CALL(VGetArg(upenv, 28-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k276, env)}),
      VGetArg(upenv, 6-1, 3));
 }
}
static void _V0loop_k274(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k274" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k274, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k274, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 27 5) (close _V0loop_k275) (bruijn ##args.80 5 2))
    V_CALL(VGetArg(upenv, 27-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k275, env)}),
      VGetArg(upenv, 5-1, 2));
 }
}
static void _V0loop_k271(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k271" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k271, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k271, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0loop_k272) (close _V0loop_k274))
    V_CALL_FUNC(_V0loop_k272, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k274, env)}));
 }
}
static void _V0loop_lambda71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda71" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda71, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda71, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_k271) (##inline ##vcore.car (bruijn ##expr.84 3 1)))
    V_CALL_FUNC(_V0loop_k271, env, runtime,
      VInlineCar2(runtime,
        upenv->up->up->vars[1]));
 }
}
static void _V0loop_lambda70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda70" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda70, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 24 27) (bruijn ##k.668 0 0) (close _V0loop_lambda71))
    V_CALL(VGetArg(upenv, 24-1, 27), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda71, env)}));
 }
}
static void _V0loop_k270(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k270" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k270, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k270, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call-with-values 23 6) (bruijn ##k.666 1 0) (close _V0loop_lambda70) (bruijn loop 2 0))
    V_CALL(VGetArg(upenv, 23-1, 6), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda70, env)}),
      upenv->up->vars[0]);
 }
}
static void _V0loop_lambda69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0loop_lambda69" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0loop_lambda69, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda69, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((close _V0loop_k267) (close _V0loop_k270))
    V_CALL_FUNC(_V0loop_k267, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k270, env)}));
 }
}
static void _V0ref__count_lambda68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0ref__count_lambda68" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0ref__count_lambda68, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_lambda68, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V0loop_lambda69)) ((bruijn loop 0 0) (bruijn ##k.665 1 0) (##inline ##vcore.car (bruijn ##expr.78 3 0)) '() '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda69, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VInlineCar2(runtime,
        upenv->up->up->vars[0]),
      VNULL,
      VNULL);
    }
 }
}
static void _V0ref__count_lambda67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count_lambda67" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_lambda67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_lambda67, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 19 27) (bruijn ##k.664 0 0) (close _V0ref__count_lambda68))
    V_CALL(VGetArg(upenv, 19-1, 27), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0ref__count_lambda68, env)}));
 }
}
static void _V0ref__count_k281(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count_k281" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k281, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_k281, runtime, upenv, 1, argc, _var0) {
  // ((bruijn fold 24 26) (bruijn ##k.692 2 0) (bruijn + 24 25) (bruijn ##x.693 1 0) (bruijn ##x.694 0 0))
    V_CALL(VGetArg(upenv, 24-1, 26), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 24-1, 25),
      upenv->vars[0],
      _var0);
 }
}
static void _V0ref__count_lambda73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0ref__count_lambda73" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0ref__count_lambda73, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_lambda73, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ref-count 23 6) (bruijn ##k.695 0 0) (bruijn x 22 1) (bruijn val 0 1))
    V_CALL(VGetArg(upenv, 23-1, 6), runtime,
      _var0,
      VGetArg(upenv, 22-1, 1),
      _var1);
 }
}
static void _V0ref__count_k280(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count_k280" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k280, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_k280, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn map 23 7) (close _V0ref__count_k281) (close _V0ref__count_lambda73) (bruijn vals 4 3))
    V_CALL(VGetArg(upenv, 23-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0ref__count_k281, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0ref__count_lambda73, env)}),
      upenv->up->up->up->vars[3]);
 }
}
static void _V0ref__count_k279(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count_k279" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k279, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_k279, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.691 1 0) ((bruijn ##k.692 0 0) 0) ((bruijn ref-count 21 6) (close _V0ref__count_k280) (bruijn x 20 1) (##inline ##vcore.car (bruijn ##expr.87 2 0))))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(_var0, runtime,
      VEncodeInt(0l));
} else {
    V_CALL(VGetArg(upenv, 21-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0ref__count_k280, env)}),
      VGetArg(upenv, 20-1, 1),
      VInlineCar2(runtime,
        upenv->up->vars[0]));
}
 }
}
static void _V0ref__count_k282(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count_k282" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k282, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_k282, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.57 19 1) (bruijn ##k.686 3 0) (bruijn ##x.690 0 0))
    V_CALL(VGetArg(upenv, 19-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0ref__count_k278(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count_k278" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k278, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_k278, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0ref__count_k279) (close _V0ref__count_k282))
    V_CALL_FUNC(_V0ref__count_k279, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0ref__count_k282, env)}));
 }
}
static void _V0ref__count_k277(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count_k277" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k277, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_k277, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.87 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.87 0 0))) ((bruijn memtail 19 1) (close _V0ref__count_k278) (bruijn x 18 1) (bruijn args 1 2)) ((bruijn ##k.686 1 0) #f)) ((bruijn ##k.686 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 19-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0ref__count_k278, env)}),
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
static void _V0ref__count_lambda72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0ref__count_lambda72" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0ref__count_lambda72, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_lambda72, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##vcore.null? (bruijn tail-expr 0 1)) ((close _V0ref__count_k277) (##inline ##vcore.cdr (bruijn ##expr.78 1 0))) ((bruijn ##k.686 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    V_CALL_FUNC(_V0ref__count_k277, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0ref__count_k266(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count_k266" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k266, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_k266, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.78 0 0)) ((bruijn call-with-values 18 6) (bruijn ##k.661 2 0) (close _V0ref__count_lambda67) (close _V0ref__count_lambda72)) ((bruijn ##k.661 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL(VGetArg(upenv, 18-1, 6), runtime,
      upenv->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0ref__count_lambda67, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0ref__count_lambda72, env)}));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0ref__count_k265(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count_k265" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k265, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_k265, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.662 0 0) ((close _V0ref__count_k266) (##inline ##vcore.cdr (bruijn ##expr.77 2 0))) ((bruijn ##k.661 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0ref__count_k266, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0ref__count_k264(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count_k264" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k264, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_k264, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.77 1 0)) ((bruijn equal? 16 28) (close _V0ref__count_k265) 'letrec (##inline ##vcore.car (bruijn ##expr.77 1 0))) ((bruijn ##k.661 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 16-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0ref__count_k265, env)}),
      _V0letrec,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0ref__count_k287(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count_k287" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k287, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_k287, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.57 18 1) (bruijn ##k.656 3 0) (bruijn ##x.657 0 0))
    V_CALL(VGetArg(upenv, 18-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0ref__count_k286(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count_k286" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k286, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_k286, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 20 25) (close _V0ref__count_k287) (bruijn ##x.658 1 0) (bruijn ##x.659 0 0))
    V_CALL(VGetArg(upenv, 20-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0ref__count_k287, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V0ref__count_k285(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count_k285" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k285, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_k285, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ref-count 18 6) (close _V0ref__count_k286) (bruijn x 17 1) (##inline ##vcore.cdr (bruijn ##expr.88 2 0)))
    V_CALL(VGetArg(upenv, 18-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0ref__count_k286, env)}),
      VGetArg(upenv, 17-1, 1),
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
 }
}
static void _V0ref__count_k284(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count_k284" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k284, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_k284, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.88 1 0)) ((bruijn ref-count 17 6) (close _V0ref__count_k285) (bruijn x 16 1) (##inline ##vcore.car (bruijn ##expr.88 1 0))) ((bruijn ##k.656 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 17-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0ref__count_k285, env)}),
      VGetArg(upenv, 16-1, 1),
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0ref__count_k290(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count_k290" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k290, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_k290, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.653 1 0) ((bruijn ##k.654 0 0) 1) ((bruijn ##k.654 0 0) 0))
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
static void _V0ref__count_k292(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count_k292" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k292, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_k292, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 22 12) (bruijn ##k.643 19 0) (##string ##string.1499))
    V_CALL(VGetArg(upenv, 22-1, 12), runtime,
      VGetArg(upenv, 19-1, 0),
      VEncodePointer(&_V10string_D1499.sym, VPOINTER_OTHER));
 }
}
static void _V0ref__count_k291(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count_k291" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k291, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_k291, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##kk.57 18 1) (close _V0ref__count_k292) (bruijn ##x.652 0 0))
    V_CALL(VGetArg(upenv, 18-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0ref__count_k292, env)}),
      _var0);
 }
}
static void _V0ref__count_k289(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count_k289" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k289, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_k289, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0ref__count_k290) (close _V0ref__count_k291))
    V_CALL_FUNC(_V0ref__count_k290, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0ref__count_k291, env)}));
 }
}
static void _V0ref__count_lambda75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count_lambda75" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_lambda75, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn eqv? 19 18) (close _V0ref__count_k289) (bruijn x 17 1) (bruijn y 0 0))
    V_CALL(VGetArg(upenv, 19-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0ref__count_k289, env)}),
      VGetArg(upenv, 17-1, 1),
      _var0);
 }
}
static void _V0ref__count_k288(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count_k288" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k288, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_k288, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0ref__count_lambda75) (bruijn ##input.58 14 0))
    V_CALL_FUNC(_V0ref__count_lambda75, env, runtime,
      VGetArg(upenv, 14-1, 0));
 }
}
static void _V0ref__count_lambda74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count_lambda74" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_lambda74, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0ref__count_k284) (close _V0ref__count_k288))
    V_CALL_FUNC(_V0ref__count_k284, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0ref__count_k288, env)}));
 }
}
static void _V0ref__count_k283(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count_k283" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k283, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_k283, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0ref__count_lambda74) (bruijn ##input.58 12 0))
    V_CALL_FUNC(_V0ref__count_lambda74, env, runtime,
      VGetArg(upenv, 12-1, 0));
 }
}
static void _V0ref__count_lambda66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count_lambda66" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_lambda66, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0ref__count_k264) (close _V0ref__count_k283))
    V_CALL_FUNC(_V0ref__count_k264, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0ref__count_k283, env)}));
 }
}
static void _V0ref__count_k263(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count_k263" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k263, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_k263, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0ref__count_lambda66) (bruijn ##input.58 10 0))
    V_CALL_FUNC(_V0ref__count_lambda66, env, runtime,
      VGetArg(upenv, 10-1, 0));
 }
}
static void _V0ref__count_lambda65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count_lambda65" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_lambda65, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0ref__count_k260) (close _V0ref__count_k263))
    V_CALL_FUNC(_V0ref__count_k260, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0ref__count_k263, env)}));
 }
}
static void _V0ref__count_k259(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count_k259" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k259, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_k259, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0ref__count_lambda65) (bruijn ##input.58 8 0))
    V_CALL_FUNC(_V0ref__count_lambda65, env, runtime,
      VGetArg(upenv, 8-1, 0));
 }
}
static void _V0ref__count_lambda64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count_lambda64" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_lambda64, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0ref__count_k257) (close _V0ref__count_k259))
    V_CALL_FUNC(_V0ref__count_k257, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0ref__count_k259, env)}));
 }
}
static void _V0ref__count_k256(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count_k256" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k256, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_k256, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0ref__count_lambda64) (bruijn ##input.58 6 0))
    V_CALL_FUNC(_V0ref__count_lambda64, env, runtime,
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V0ref__count_lambda56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count_lambda56" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_lambda56, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0ref__count_k242) (close _V0ref__count_k256))
    V_CALL_FUNC(_V0ref__count_k242, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0ref__count_k256, env)}));
 }
}
static void _V0ref__count_k241(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count_k241" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k241, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_k241, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0ref__count_lambda56) (bruijn ##input.58 4 0))
    V_CALL_FUNC(_V0ref__count_lambda56, env, runtime,
      upenv->up->up->up->vars[0]);
 }
}
static void _V0ref__count_lambda55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count_lambda55" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_lambda55, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0ref__count_k236) (close _V0ref__count_k241))
    V_CALL_FUNC(_V0ref__count_k236, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0ref__count_k241, env)}));
 }
}
static void _V0ref__count_k235(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count_k235" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k235, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_k235, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0ref__count_lambda55) (bruijn ##input.58 2 0))
    V_CALL_FUNC(_V0ref__count_lambda55, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V0ref__count_lambda54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count_lambda54" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_lambda54, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0ref__count_k230) (close _V0ref__count_k235))
    V_CALL_FUNC(_V0ref__count_k230, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0ref__count_k235, env)}));
 }
}
static void _V0ref__count_lambda53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0ref__count_lambda53" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_lambda53, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0ref__count_lambda54) (bruijn ##input.58 0 0))
    V_CALL_FUNC(_V0ref__count_lambda54, env, runtime,
      _var0);
 }
}
static void _V0ref__count_lambda52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0ref__count_lambda52" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0ref__count_lambda52, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_lambda52, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0ref__count_lambda53) (bruijn expr 1 2))
    V_CALL_FUNC(_V0ref__count_lambda53, env, runtime,
      upenv->vars[2]);
 }
}
static void _V0ref__count_lambda51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0ref__count_lambda51" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0ref__count_lambda51, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_lambda51, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn call/cc 2 27) (bruijn ##k.642 0 0) (close _V0ref__count_lambda52))
    V_CALL(upenv->up->vars[27], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0ref__count_lambda52, env)}));
 }
}
static void _V0pure__in__lambda_Q_k293(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in__lambda_Q_k293" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in__lambda_Q_k293, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in__lambda_Q_k293, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.759 0 0) ((bruijn ##k.758 1 0) #t) ((bruijn pure-in? 2 8) (bruijn ##k.758 1 0) (bruijn x 1 1) (bruijn body 1 3)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(true));
} else {
    V_CALL(upenv->up->vars[8], runtime,
      upenv->vars[0],
      upenv->vars[1],
      upenv->vars[3]);
}
 }
}
static void _V0pure__in__lambda_Q_lambda76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0pure__in__lambda_Q_lambda76" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0pure__in__lambda_Q_lambda76, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in__lambda_Q_lambda76, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn memtail 1 1) (close _V0pure__in__lambda_Q_k293) (bruijn x 0 1) (bruijn args 0 2))
    V_CALL(upenv->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0pure__in__lambda_Q_k293, env)}),
      _var1,
      _var2);
 }
}
static void _V0pure__in_Q_k298(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k298" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k298, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k298, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.89 7 1) (bruijn ##k.877 4 0) (bruijn ##x.882 0 0))
    V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->up->up->vars[0],
      _var0);
 }
}
static void _V0pure__in_Q_k297(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k297" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k297, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k297, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.93 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.93 0 0))) ((bruijn pure-in-lambda? 8 7) (close _V0pure__in_Q_k298) (bruijn x 7 1) (##inline ##vcore.car (bruijn ##expr.92 1 0)) (##inline ##vcore.car (bruijn ##expr.93 0 0))) ((bruijn ##k.877 3 0) #f)) ((bruijn ##k.877 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 8-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0pure__in_Q_k298, env)}),
      VGetArg(upenv, 7-1, 1),
      VInlineCar2(runtime,
        upenv->vars[0]),
      VInlineCar2(runtime,
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
static void _V0pure__in_Q_k296(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k296" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k296, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k296, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.92 0 0)) ((close _V0pure__in_Q_k297) (##inline ##vcore.cdr (bruijn ##expr.92 0 0))) ((bruijn ##k.877 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V0pure__in_Q_k297, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0pure__in_Q_k295(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k295" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k295, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k295, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.878 0 0) ((close _V0pure__in_Q_k296) (##inline ##vcore.cdr (bruijn ##expr.91 2 0))) ((bruijn ##k.877 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0pure__in_Q_k296, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0pure__in_Q_k294(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k294" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k294, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k294, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.91 1 0)) ((bruijn equal? 6 28) (close _V0pure__in_Q_k295) 'lambda (##inline ##vcore.car (bruijn ##expr.91 1 0))) ((bruijn ##k.877 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 6-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0pure__in_Q_k295, env)}),
      _V0lambda,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0pure__in_Q_k304(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k304" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k304, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k304, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.89 9 1) (bruijn ##k.868 4 0) (bruijn ##x.873 0 0))
    V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->up->up->vars[0],
      _var0);
 }
}
static void _V0pure__in_Q_k303(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k303" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k303, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k303, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.96 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.96 0 0))) ((bruijn pure-in-lambda? 10 7) (close _V0pure__in_Q_k304) (bruijn x 9 1) (##inline ##vcore.car (bruijn ##expr.95 1 0)) (##inline ##vcore.car (bruijn ##expr.96 0 0))) ((bruijn ##k.868 3 0) #f)) ((bruijn ##k.868 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 10-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0pure__in_Q_k304, env)}),
      VGetArg(upenv, 9-1, 1),
      VInlineCar2(runtime,
        upenv->vars[0]),
      VInlineCar2(runtime,
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
static void _V0pure__in_Q_k302(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k302" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k302, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k302, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.95 0 0)) ((close _V0pure__in_Q_k303) (##inline ##vcore.cdr (bruijn ##expr.95 0 0))) ((bruijn ##k.868 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V0pure__in_Q_k303, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0pure__in_Q_k301(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k301" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k301, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k301, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.869 0 0) ((close _V0pure__in_Q_k302) (##inline ##vcore.cdr (bruijn ##expr.94 2 0))) ((bruijn ##k.868 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0pure__in_Q_k302, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0pure__in_Q_k300(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k300" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k300, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k300, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.94 1 0)) ((bruijn equal? 8 28) (close _V0pure__in_Q_k301) 'continuation (##inline ##vcore.car (bruijn ##expr.94 1 0))) ((bruijn ##k.868 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 8-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0pure__in_Q_k301, env)}),
      _V0continuation,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k310(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k310" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k310, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k310, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.101 5 1) (bruijn ##k.856 2 0) (bruijn ##expr.103 3 1) (bruijn ##x.857 1 0) (bruijn ##x.858 0 0))
    V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->vars[0],
      upenv->up->up->vars[1],
      upenv->vars[0],
      _var0);
 }
}
static void _V0loop_k309(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k309" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k309, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k309, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 17 5) (close _V0loop_k310) (bruijn ##body.100 2 3))
    V_CALL(VGetArg(upenv, 17-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k310, env)}),
      upenv->up->vars[3]);
 }
}
static void _V0loop_k308(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k308" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k308, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k308, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##expr.103 1 1))) ((bruijn reverse 16 5) (close _V0loop_k309) (bruijn ##args.99 1 2)) ((bruijn ##k.856 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        upenv->vars[1])))) {
    V_CALL(VGetArg(upenv, 16-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k309, env)}),
      upenv->vars[2]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k314(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k314" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k314, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k314, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##vcore.pair? (bruijn ##expr.105 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.105 0 0))) ((bruijn ##kk.102 3 1) (bruijn ##k.848 1 0) (##inline ##vcore.cdr (bruijn ##expr.103 6 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##expr.104 2 0)) (bruijn ##args.99 6 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##expr.105 0 0)) (bruijn ##body.100 6 3))) ((bruijn ##k.848 1 0) #f)) ((bruijn ##k.848 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(upenv->up->up->vars[1], runtime,
      upenv->vars[0],
      VInlineCdr2(runtime,
        VGetArg(upenv, 6-1, 1)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->up->vars[0]),
        VGetArg(upenv, 6-1, 2)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
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
static void _V0loop_k313(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k313" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k313, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k313, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.104 1 0)) ((close _V0loop_k314) (##inline ##vcore.cdr (bruijn ##expr.104 1 0))) ((bruijn ##k.848 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(_V0loop_k314, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k317(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k317" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k317, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k317, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.101 9 1) (bruijn ##k.843 4 0) (bruijn ##expr.103 7 1) (bruijn ##x.845 1 0) (bruijn ##x.846 0 0))
    V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 7-1, 1),
      upenv->vars[0],
      _var0);
 }
}
static void _V0loop_k316(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k316" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k316, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k316, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 21 5) (close _V0loop_k317) (bruijn ##body.100 6 3))
    V_CALL(VGetArg(upenv, 21-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k317, env)}),
      VGetArg(upenv, 6-1, 3));
 }
}
static void _V0loop_k315(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k315" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k315, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k315, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 20 5) (close _V0loop_k316) (bruijn ##args.99 5 2))
    V_CALL(VGetArg(upenv, 20-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k316, env)}),
      VGetArg(upenv, 5-1, 2));
 }
}
static void _V0loop_k312(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k312" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k312, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k312, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0loop_k313) (close _V0loop_k315))
    V_CALL_FUNC(_V0loop_k313, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k315, env)}));
 }
}
static void _V0loop_lambda87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda87" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda87, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda87, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_k312) (##inline ##vcore.car (bruijn ##expr.103 3 1)))
    V_CALL_FUNC(_V0loop_k312, env, runtime,
      VInlineCar2(runtime,
        upenv->up->up->vars[1]));
 }
}
static void _V0loop_lambda86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda86" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda86, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 17 27) (bruijn ##k.842 0 0) (close _V0loop_lambda87))
    V_CALL(VGetArg(upenv, 17-1, 27), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda87, env)}));
 }
}
static void _V0loop_k311(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k311" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k311, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k311, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call-with-values 16 6) (bruijn ##k.840 1 0) (close _V0loop_lambda86) (bruijn loop 2 0))
    V_CALL(VGetArg(upenv, 16-1, 6), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda86, env)}),
      upenv->up->vars[0]);
 }
}
static void _V0loop_lambda85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0loop_lambda85" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0loop_lambda85, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda85, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((close _V0loop_k308) (close _V0loop_k311))
    V_CALL_FUNC(_V0loop_k308, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k311, env)}));
 }
}
static void _V0pure__in_Q_lambda84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda84" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0pure__in_Q_lambda84, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_lambda84, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V0loop_lambda85)) ((bruijn loop 0 0) (bruijn ##k.839 1 0) (##inline ##vcore.cdr (bruijn ##expr.97 5 0)) '() '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda85, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VInlineCdr2(runtime,
        VGetArg(upenv, 5-1, 0)),
      VNULL,
      VNULL);
    }
 }
}
static void _V0pure__in_Q_lambda83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda83" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_lambda83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_lambda83, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 12 27) (bruijn ##k.838 0 0) (close _V0pure__in_Q_lambda84))
    V_CALL(VGetArg(upenv, 12-1, 27), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0pure__in_Q_lambda84, env)}));
 }
}
static void _V0pure__in_Q_k319(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k319" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k319, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k319, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.89 11 1) (bruijn ##k.860 2 0) (bruijn ##x.862 0 0))
    V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0pure__in_Q_lambda89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda89" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0pure__in_Q_lambda89, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_lambda89, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // (if (bruijn a 0 1) ((bruijn ##k.863 0 0) (bruijn b 0 2)) ((bruijn ##k.863 0 0) #f))
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
static void _V0pure__in_Q_k318(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k318" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k318, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k318, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn fold 13 26) (close _V0pure__in_Q_k319) (close _V0pure__in_Q_lambda89) #t (bruijn ##x.864 0 0))
    V_CALL(VGetArg(upenv, 13-1, 26), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0pure__in_Q_k319, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0pure__in_Q_lambda89, env)}),
      VEncodeBool(true),
      _var0);
 }
}
static void _V0pure__in_Q_lambda90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda90" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0pure__in_Q_lambda90, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_lambda90, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // ((bruijn pure-in-lambda? 12 7) (bruijn ##k.865 0 0) (bruijn x 11 1) (bruijn args 0 1) (bruijn body 0 2))
    V_CALL(VGetArg(upenv, 12-1, 7), runtime,
      _var0,
      VGetArg(upenv, 11-1, 1),
      _var1,
      _var2);
 }
}
static void _V0pure__in_Q_lambda88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda88" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0pure__in_Q_lambda88, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_lambda88, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##vcore.null? (bruijn tail-expr 0 1)) ((bruijn map 12 7) (close _V0pure__in_Q_k318) (close _V0pure__in_Q_lambda90) (bruijn args 0 2) (bruijn body 0 3)) ((bruijn ##k.860 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    V_CALL(VGetArg(upenv, 12-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0pure__in_Q_k318, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0pure__in_Q_lambda90, env)}),
      _var2,
      _var3);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0pure__in_Q_k307(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k307" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k307, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k307, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.837 0 0) ((bruijn call-with-values 11 6) (bruijn ##k.836 1 0) (close _V0pure__in_Q_lambda83) (close _V0pure__in_Q_lambda88)) ((bruijn ##k.836 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 11-1, 6), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0pure__in_Q_lambda83, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0pure__in_Q_lambda88, env)}));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0pure__in_Q_k306(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k306" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k306, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k306, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.97 1 0)) ((bruijn equal? 10 28) (close _V0pure__in_Q_k307) 'case-lambda (##inline ##vcore.car (bruijn ##expr.97 1 0))) ((bruijn ##k.836 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 10-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0pure__in_Q_k307, env)}),
      _V0case__lambda,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0pure__in_Q_k322(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k322" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k322, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k322, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.833 0 0) ((bruijn ##kk.89 10 1) (bruijn ##k.832 1 0) #t) ((bruijn ##k.832 1 0) #f))
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
static void _V0pure__in_Q_k321(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k321" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k321, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k321, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.106 1 0)) ((bruijn equal? 12 28) (close _V0pure__in_Q_k322) '##foreign.function (##inline ##vcore.car (bruijn ##expr.106 1 0))) ((bruijn ##k.832 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 12-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0pure__in_Q_k322, env)}),
      _V10foreign_Dfunction,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0pure__in_Q_k326(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k326" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k326, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k326, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##vcore.pair? (bruijn ##expr.108 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.108 0 0))) ((bruijn ##kk.89 13 1) (bruijn ##k.825 2 0) #t) ((bruijn ##k.825 2 0) #f)) ((bruijn ##k.825 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
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
static void _V0pure__in_Q_k325(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k325" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k325, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k325, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.826 0 0) ((close _V0pure__in_Q_k326) (##inline ##vcore.cdr (bruijn ##expr.107 2 0))) ((bruijn ##k.825 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0pure__in_Q_k326, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0pure__in_Q_k324(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k324" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k324, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k324, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.107 1 0)) ((bruijn equal? 14 28) (close _V0pure__in_Q_k325) 'quote (##inline ##vcore.car (bruijn ##expr.107 1 0))) ((bruijn ##k.825 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 14-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0pure__in_Q_k325, env)}),
      _V0quote,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0pure__in_Q_k334(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k334" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k334, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k334, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.822 0 0) ((bruijn pure-in? 21 8) (bruijn ##k.821 1 0) (bruijn x 20 1) (##inline ##vcore.cdr (bruijn ##expr.111 3 0))) ((bruijn ##k.821 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 21-1, 8), runtime,
      upenv->vars[0],
      VGetArg(upenv, 20-1, 1),
      VInlineCdr2(runtime,
        upenv->up->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0pure__in_Q_k333(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k333" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k333, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k333, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.820 1 0) ((bruijn ##k.821 0 0) #f) ((bruijn pure-in? 20 8) (close _V0pure__in_Q_k334) (bruijn x 19 1) (##inline ##vcore.car (bruijn ##expr.110 3 0))))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
} else {
    V_CALL(VGetArg(upenv, 20-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0pure__in_Q_k334, env)}),
      VGetArg(upenv, 19-1, 1),
      VInlineCar2(runtime,
        upenv->up->up->vars[0]));
}
 }
}
static void _V0pure__in_Q_k335(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k335" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k335, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k335, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.89 18 1) (bruijn ##k.815 5 0) (bruijn ##x.819 0 0))
    V_CALL(VGetArg(upenv, 18-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V0pure__in_Q_k332(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k332" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k332, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k332, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0pure__in_Q_k333) (close _V0pure__in_Q_k335))
    V_CALL_FUNC(_V0pure__in_Q_k333, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0pure__in_Q_k335, env)}));
 }
}
static void _V0pure__in_Q_k331(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k331" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k331, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k331, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.111 0 0)) ((bruijn eqv? 19 18) (close _V0pure__in_Q_k332) (bruijn x 17 1) (##inline ##vcore.car (bruijn ##expr.111 0 0))) ((bruijn ##k.815 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL(VGetArg(upenv, 19-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0pure__in_Q_k332, env)}),
      VGetArg(upenv, 17-1, 1),
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0pure__in_Q_k330(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k330" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k330, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k330, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.110 0 0)) ((close _V0pure__in_Q_k331) (##inline ##vcore.cdr (bruijn ##expr.110 0 0))) ((bruijn ##k.815 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V0pure__in_Q_k331, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0pure__in_Q_k329(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k329" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k329, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k329, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.816 0 0) ((close _V0pure__in_Q_k330) (##inline ##vcore.cdr (bruijn ##expr.109 2 0))) ((bruijn ##k.815 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0pure__in_Q_k330, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0pure__in_Q_k328(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k328" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k328, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k328, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.109 1 0)) ((bruijn equal? 16 28) (close _V0pure__in_Q_k329) 'set! (##inline ##vcore.car (bruijn ##expr.109 1 0))) ((bruijn ##k.815 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 16-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0pure__in_Q_k329, env)}),
      _V0set_B,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k342(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k342" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k342, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k342, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.117 5 1) (bruijn ##k.797 2 0) (bruijn ##expr.119 3 1) (bruijn ##x.798 1 0) (bruijn ##x.799 0 0))
    V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->vars[0],
      upenv->up->up->vars[1],
      upenv->vars[0],
      _var0);
 }
}
static void _V0loop_k341(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k341" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k341, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k341, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 26 5) (close _V0loop_k342) (bruijn ##vals.116 2 3))
    V_CALL(VGetArg(upenv, 26-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k342, env)}),
      upenv->up->vars[3]);
 }
}
static void _V0loop_k340(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k340" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k340, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k340, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##expr.119 1 1))) ((bruijn reverse 25 5) (close _V0loop_k341) (bruijn ##args.115 1 2)) ((bruijn ##k.797 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        upenv->vars[1])))) {
    V_CALL(VGetArg(upenv, 25-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k341, env)}),
      upenv->vars[2]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k346(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k346" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k346, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k346, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##vcore.pair? (bruijn ##expr.121 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.121 0 0))) ((bruijn ##kk.118 3 1) (bruijn ##k.789 1 0) (##inline ##vcore.cdr (bruijn ##expr.119 6 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##expr.120 2 0)) (bruijn ##args.115 6 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##expr.121 0 0)) (bruijn ##vals.116 6 3))) ((bruijn ##k.789 1 0) #f)) ((bruijn ##k.789 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(upenv->up->up->vars[1], runtime,
      upenv->vars[0],
      VInlineCdr2(runtime,
        VGetArg(upenv, 6-1, 1)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->up->vars[0]),
        VGetArg(upenv, 6-1, 2)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
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
static void _V0loop_k345(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k345" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k345, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k345, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.120 1 0)) ((close _V0loop_k346) (##inline ##vcore.cdr (bruijn ##expr.120 1 0))) ((bruijn ##k.789 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(_V0loop_k346, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k349(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k349" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k349, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k349, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.117 9 1) (bruijn ##k.784 4 0) (bruijn ##expr.119 7 1) (bruijn ##x.786 1 0) (bruijn ##x.787 0 0))
    V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 7-1, 1),
      upenv->vars[0],
      _var0);
 }
}
static void _V0loop_k348(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k348" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k348, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k348, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 30 5) (close _V0loop_k349) (bruijn ##vals.116 6 3))
    V_CALL(VGetArg(upenv, 30-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k349, env)}),
      VGetArg(upenv, 6-1, 3));
 }
}
static void _V0loop_k347(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k347" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k347, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k347, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 29 5) (close _V0loop_k348) (bruijn ##args.115 5 2))
    V_CALL(VGetArg(upenv, 29-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k348, env)}),
      VGetArg(upenv, 5-1, 2));
 }
}
static void _V0loop_k344(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k344" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k344, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k344, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0loop_k345) (close _V0loop_k347))
    V_CALL_FUNC(_V0loop_k345, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k347, env)}));
 }
}
static void _V0loop_lambda99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda99" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda99, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda99, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_k344) (##inline ##vcore.car (bruijn ##expr.119 3 1)))
    V_CALL_FUNC(_V0loop_k344, env, runtime,
      VInlineCar2(runtime,
        upenv->up->up->vars[1]));
 }
}
static void _V0loop_lambda98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda98" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda98, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 26 27) (bruijn ##k.783 0 0) (close _V0loop_lambda99))
    V_CALL(VGetArg(upenv, 26-1, 27), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda99, env)}));
 }
}
static void _V0loop_k343(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k343" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k343, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k343, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call-with-values 25 6) (bruijn ##k.781 1 0) (close _V0loop_lambda98) (bruijn loop 2 0))
    V_CALL(VGetArg(upenv, 25-1, 6), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda98, env)}),
      upenv->up->vars[0]);
 }
}
static void _V0loop_lambda97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0loop_lambda97" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0loop_lambda97, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda97, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((close _V0loop_k340) (close _V0loop_k343))
    V_CALL_FUNC(_V0loop_k340, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k343, env)}));
 }
}
static void _V0pure__in_Q_lambda96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda96" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0pure__in_Q_lambda96, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_lambda96, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V0loop_lambda97)) ((bruijn loop 0 0) (bruijn ##k.780 1 0) (##inline ##vcore.car (bruijn ##expr.113 3 0)) '() '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda97, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VInlineCar2(runtime,
        upenv->up->up->vars[0]),
      VNULL,
      VNULL);
    }
 }
}
static void _V0pure__in_Q_lambda95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda95" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_lambda95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_lambda95, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 21 27) (bruijn ##k.779 0 0) (close _V0pure__in_Q_lambda96))
    V_CALL(VGetArg(upenv, 21-1, 27), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0pure__in_Q_lambda96, env)}));
 }
}
static void _V0pure__in_Q_lambda101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda101" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0pure__in_Q_lambda101, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_lambda101, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // (if (bruijn a 0 1) ((bruijn ##k.808 0 0) (bruijn b 0 2)) ((bruijn ##k.808 0 0) #f))
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
static void _V0pure__in_Q_k354(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k354" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k354, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k354, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn fold 26 26) (bruijn ##k.807 2 0) (close _V0pure__in_Q_lambda101) (bruijn ##x.809 1 0) (bruijn ##x.810 0 0))
    V_CALL(VGetArg(upenv, 26-1, 26), runtime,
      upenv->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0pure__in_Q_lambda101, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V0pure__in_Q_lambda102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda102" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0pure__in_Q_lambda102, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_lambda102, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn pure-in? 25 8) (bruijn ##k.811 0 0) (bruijn x 24 1) (bruijn val 0 1))
    V_CALL(VGetArg(upenv, 25-1, 8), runtime,
      _var0,
      VGetArg(upenv, 24-1, 1),
      _var1);
 }
}
static void _V0pure__in_Q_k353(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k353" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k353, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k353, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn map 25 7) (close _V0pure__in_Q_k354) (close _V0pure__in_Q_lambda102) (bruijn vals 4 3))
    V_CALL(VGetArg(upenv, 25-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0pure__in_Q_k354, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0pure__in_Q_lambda102, env)}),
      upenv->up->up->up->vars[3]);
 }
}
static void _V0pure__in_Q_k352(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k352" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k352, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k352, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.806 1 0) ((bruijn ##k.807 0 0) #t) ((bruijn pure-in? 23 8) (close _V0pure__in_Q_k353) (bruijn x 22 1) (##inline ##vcore.car (bruijn ##expr.122 2 0))))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(_var0, runtime,
      VEncodeBool(true));
} else {
    V_CALL(VGetArg(upenv, 23-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0pure__in_Q_k353, env)}),
      VGetArg(upenv, 22-1, 1),
      VInlineCar2(runtime,
        upenv->up->vars[0]));
}
 }
}
static void _V0pure__in_Q_k355(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k355" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k355, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k355, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.89 21 1) (bruijn ##k.801 3 0) (bruijn ##x.805 0 0))
    V_CALL(VGetArg(upenv, 21-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0pure__in_Q_k351(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k351" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k351, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k351, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0pure__in_Q_k352) (close _V0pure__in_Q_k355))
    V_CALL_FUNC(_V0pure__in_Q_k352, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0pure__in_Q_k355, env)}));
 }
}
static void _V0pure__in_Q_k350(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k350" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k350, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k350, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.122 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.122 0 0))) ((bruijn memtail 21 1) (close _V0pure__in_Q_k351) (bruijn x 20 1) (bruijn args 1 2)) ((bruijn ##k.801 1 0) #f)) ((bruijn ##k.801 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 21-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0pure__in_Q_k351, env)}),
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
static void _V0pure__in_Q_lambda100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda100" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0pure__in_Q_lambda100, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_lambda100, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##vcore.null? (bruijn tail-expr 0 1)) ((close _V0pure__in_Q_k350) (##inline ##vcore.cdr (bruijn ##expr.113 1 0))) ((bruijn ##k.801 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    V_CALL_FUNC(_V0pure__in_Q_k350, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0pure__in_Q_k339(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k339" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k339, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k339, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.113 0 0)) ((bruijn call-with-values 20 6) (bruijn ##k.776 2 0) (close _V0pure__in_Q_lambda95) (close _V0pure__in_Q_lambda100)) ((bruijn ##k.776 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL(VGetArg(upenv, 20-1, 6), runtime,
      upenv->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0pure__in_Q_lambda95, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0pure__in_Q_lambda100, env)}));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0pure__in_Q_k338(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k338" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k338, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k338, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.777 0 0) ((close _V0pure__in_Q_k339) (##inline ##vcore.cdr (bruijn ##expr.112 2 0))) ((bruijn ##k.776 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0pure__in_Q_k339, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0pure__in_Q_k337(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k337" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k337, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k337, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.112 1 0)) ((bruijn equal? 18 28) (close _V0pure__in_Q_k338) 'letrec (##inline ##vcore.car (bruijn ##expr.112 1 0))) ((bruijn ##k.776 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 18-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0pure__in_Q_k338, env)}),
      _V0letrec,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0pure__in_Q_k359(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k359" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k359, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k359, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.773 1 0) ((bruijn pure-in? 21 8) (bruijn ##k.774 0 0) (bruijn x 20 1) (##inline ##vcore.cdr (bruijn ##expr.123 3 0))) ((bruijn ##k.774 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 21-1, 8), runtime,
      _var0,
      VGetArg(upenv, 20-1, 1),
      VInlineCdr2(runtime,
        upenv->up->up->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0pure__in_Q_k360(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k360" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k360, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k360, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.89 19 1) (bruijn ##k.771 2 0) (bruijn ##x.772 0 0))
    V_CALL(VGetArg(upenv, 19-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0pure__in_Q_k358(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k358" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k358, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k358, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0pure__in_Q_k359) (close _V0pure__in_Q_k360))
    V_CALL_FUNC(_V0pure__in_Q_k359, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0pure__in_Q_k360, env)}));
 }
}
static void _V0pure__in_Q_k357(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k357" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k357, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k357, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.123 1 0)) ((bruijn pure-in? 19 8) (close _V0pure__in_Q_k358) (bruijn x 18 1) (##inline ##vcore.car (bruijn ##expr.123 1 0))) ((bruijn ##k.771 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 19-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0pure__in_Q_k358, env)}),
      VGetArg(upenv, 18-1, 1),
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0pure__in_Q_k361(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k361" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k361, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k361, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.89 17 1) (bruijn ##k.761 17 0) #t)
    V_CALL(VGetArg(upenv, 17-1, 1), runtime,
      VGetArg(upenv, 17-1, 0),
      VEncodeBool(true));
 }
}
static void _V0pure__in_Q_lambda103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda103" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_lambda103, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0pure__in_Q_k357) (close _V0pure__in_Q_k361))
    V_CALL_FUNC(_V0pure__in_Q_k357, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0pure__in_Q_k361, env)}));
 }
}
static void _V0pure__in_Q_k356(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k356" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k356, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k356, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0pure__in_Q_lambda103) (bruijn ##input.90 14 0))
    V_CALL_FUNC(_V0pure__in_Q_lambda103, env, runtime,
      VGetArg(upenv, 14-1, 0));
 }
}
static void _V0pure__in_Q_lambda94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda94" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_lambda94, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0pure__in_Q_k337) (close _V0pure__in_Q_k356))
    V_CALL_FUNC(_V0pure__in_Q_k337, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0pure__in_Q_k356, env)}));
 }
}
static void _V0pure__in_Q_k336(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k336" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k336, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k336, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0pure__in_Q_lambda94) (bruijn ##input.90 12 0))
    V_CALL_FUNC(_V0pure__in_Q_lambda94, env, runtime,
      VGetArg(upenv, 12-1, 0));
 }
}
static void _V0pure__in_Q_lambda93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda93" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_lambda93, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0pure__in_Q_k328) (close _V0pure__in_Q_k336))
    V_CALL_FUNC(_V0pure__in_Q_k328, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0pure__in_Q_k336, env)}));
 }
}
static void _V0pure__in_Q_k327(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k327" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k327, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k327, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0pure__in_Q_lambda93) (bruijn ##input.90 10 0))
    V_CALL_FUNC(_V0pure__in_Q_lambda93, env, runtime,
      VGetArg(upenv, 10-1, 0));
 }
}
static void _V0pure__in_Q_lambda92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda92" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_lambda92, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0pure__in_Q_k324) (close _V0pure__in_Q_k327))
    V_CALL_FUNC(_V0pure__in_Q_k324, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0pure__in_Q_k327, env)}));
 }
}
static void _V0pure__in_Q_k323(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k323" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k323, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k323, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0pure__in_Q_lambda92) (bruijn ##input.90 8 0))
    V_CALL_FUNC(_V0pure__in_Q_lambda92, env, runtime,
      VGetArg(upenv, 8-1, 0));
 }
}
static void _V0pure__in_Q_lambda91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda91" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_lambda91, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0pure__in_Q_k321) (close _V0pure__in_Q_k323))
    V_CALL_FUNC(_V0pure__in_Q_k321, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0pure__in_Q_k323, env)}));
 }
}
static void _V0pure__in_Q_k320(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k320" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k320, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k320, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0pure__in_Q_lambda91) (bruijn ##input.90 6 0))
    V_CALL_FUNC(_V0pure__in_Q_lambda91, env, runtime,
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V0pure__in_Q_lambda82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda82" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_lambda82, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0pure__in_Q_k306) (close _V0pure__in_Q_k320))
    V_CALL_FUNC(_V0pure__in_Q_k306, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0pure__in_Q_k320, env)}));
 }
}
static void _V0pure__in_Q_k305(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k305" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k305, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k305, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0pure__in_Q_lambda82) (bruijn ##input.90 4 0))
    V_CALL_FUNC(_V0pure__in_Q_lambda82, env, runtime,
      upenv->up->up->up->vars[0]);
 }
}
static void _V0pure__in_Q_lambda81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda81" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_lambda81, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0pure__in_Q_k300) (close _V0pure__in_Q_k305))
    V_CALL_FUNC(_V0pure__in_Q_k300, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0pure__in_Q_k305, env)}));
 }
}
static void _V0pure__in_Q_k299(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_k299" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k299, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k299, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0pure__in_Q_lambda81) (bruijn ##input.90 2 0))
    V_CALL_FUNC(_V0pure__in_Q_lambda81, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V0pure__in_Q_lambda80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda80" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_lambda80, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0pure__in_Q_k294) (close _V0pure__in_Q_k299))
    V_CALL_FUNC(_V0pure__in_Q_k294, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0pure__in_Q_k299, env)}));
 }
}
static void _V0pure__in_Q_lambda79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda79" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_lambda79, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0pure__in_Q_lambda80) (bruijn ##input.90 0 0))
    V_CALL_FUNC(_V0pure__in_Q_lambda80, env, runtime,
      _var0);
 }
}
static void _V0pure__in_Q_lambda78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda78" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0pure__in_Q_lambda78, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_lambda78, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0pure__in_Q_lambda79) (bruijn expr 1 2))
    V_CALL_FUNC(_V0pure__in_Q_lambda79, env, runtime,
      upenv->vars[2]);
 }
}
static void _V0pure__in_Q_lambda77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0pure__in_Q_lambda77" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0pure__in_Q_lambda77, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_lambda77, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn call/cc 2 27) (bruijn ##k.760 0 0) (close _V0pure__in_Q_lambda78))
    V_CALL(upenv->up->vars[27], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0pure__in_Q_lambda78, env)}));
 }
}
static void _V0substitute__lambda_k363(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute__lambda_k363" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute__lambda_k363, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute__lambda_k363, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.885 2 0) (##inline ##vcore.cons (bruijn args 2 3) (##inline ##vcore.cons (bruijn ##x.889 0 0) '())))
    V_CALL(upenv->up->vars[0], runtime,
      VInlineCons2(runtime,
        upenv->up->vars[3],
        VInlineCons2(runtime,
        _var0,
        VNULL)));
 }
}
static void _V0substitute__lambda_k362(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute__lambda_k362" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute__lambda_k362, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute__lambda_k362, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.886 0 0) ((bruijn ##k.885 1 0) (##inline ##vcore.cons (bruijn args 1 3) (##inline ##vcore.cons (bruijn body 1 4) '()))) ((bruijn substitute 2 10) (close _V0substitute__lambda_k363) (bruijn x 1 1) (bruijn atom 1 2) (bruijn body 1 4)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VInlineCons2(runtime,
        upenv->vars[3],
        VInlineCons2(runtime,
        upenv->vars[4],
        VNULL)));
} else {
    V_CALL(upenv->up->vars[10], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0substitute__lambda_k363, env)}),
      upenv->vars[1],
      upenv->vars[2],
      upenv->vars[4]);
}
 }
}
static void _V0substitute__lambda_lambda104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 static VDebugInfo dbg = { "_V0substitute__lambda_lambda104" };
 VRecordCall2(runtime, &dbg);
 if(argc != 5) {
  VError("Not enough arguments to _V0substitute__lambda_lambda104, got ~D~N"
  "-- expected 5~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute__lambda_lambda104, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 5, 5, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // ((bruijn memtail 1 1) (close _V0substitute__lambda_k362) (bruijn x 0 1) (bruijn args 0 3))
    V_CALL(upenv->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0substitute__lambda_k362, env)}),
      _var1,
      _var3);
 }
}
static void _V0substitute_k369(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_k369" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k369, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_k369, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.124 8 1) (bruijn ##k.1002 5 0) (bruijn ##x.1007 0 0))
    V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V0substitute_k368(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_k368" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k368, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_k368, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 10 9) (close _V0substitute_k369) 'lambda (bruijn ##x.1008 0 0))
    V_CALL(VGetArg(upenv, 10-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0substitute_k369, env)}),
      _V0lambda,
      _var0);
 }
}
static void _V0substitute_k367(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_k367" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k367, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_k367, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.128 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.128 0 0))) ((bruijn substitute-lambda 8 9) (close _V0substitute_k368) (bruijn x 7 1) (bruijn atom 7 2) (##inline ##vcore.car (bruijn ##expr.127 1 0)) (##inline ##vcore.car (bruijn ##expr.128 0 0))) ((bruijn ##k.1002 3 0) #f)) ((bruijn ##k.1002 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 8-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0substitute_k368, env)}),
      VGetArg(upenv, 7-1, 1),
      VGetArg(upenv, 7-1, 2),
      VInlineCar2(runtime,
        upenv->vars[0]),
      VInlineCar2(runtime,
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
static void _V0substitute_k366(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_k366" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k366, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_k366, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.127 0 0)) ((close _V0substitute_k367) (##inline ##vcore.cdr (bruijn ##expr.127 0 0))) ((bruijn ##k.1002 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V0substitute_k367, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0substitute_k365(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_k365" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k365, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_k365, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1003 0 0) ((close _V0substitute_k366) (##inline ##vcore.cdr (bruijn ##expr.126 2 0))) ((bruijn ##k.1002 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0substitute_k366, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0substitute_k364(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_k364" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k364, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_k364, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.126 1 0)) ((bruijn equal? 6 28) (close _V0substitute_k365) 'lambda (##inline ##vcore.car (bruijn ##expr.126 1 0))) ((bruijn ##k.1002 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 6-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0substitute_k365, env)}),
      _V0lambda,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0substitute_k376(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_k376" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k376, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_k376, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.124 10 1) (bruijn ##k.992 5 0) (bruijn ##x.997 0 0))
    V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V0substitute_k375(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_k375" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k375, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_k375, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 12 9) (close _V0substitute_k376) 'continuation (bruijn ##x.998 0 0))
    V_CALL(VGetArg(upenv, 12-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0substitute_k376, env)}),
      _V0continuation,
      _var0);
 }
}
static void _V0substitute_k374(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_k374" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k374, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_k374, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.131 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.131 0 0))) ((bruijn substitute-lambda 10 9) (close _V0substitute_k375) (bruijn x 9 1) (bruijn atom 9 2) (##inline ##vcore.car (bruijn ##expr.130 1 0)) (##inline ##vcore.car (bruijn ##expr.131 0 0))) ((bruijn ##k.992 3 0) #f)) ((bruijn ##k.992 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 10-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0substitute_k375, env)}),
      VGetArg(upenv, 9-1, 1),
      VGetArg(upenv, 9-1, 2),
      VInlineCar2(runtime,
        upenv->vars[0]),
      VInlineCar2(runtime,
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
static void _V0substitute_k373(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_k373" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k373, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_k373, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.130 0 0)) ((close _V0substitute_k374) (##inline ##vcore.cdr (bruijn ##expr.130 0 0))) ((bruijn ##k.992 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V0substitute_k374, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0substitute_k372(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_k372" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k372, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_k372, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.993 0 0) ((close _V0substitute_k373) (##inline ##vcore.cdr (bruijn ##expr.129 2 0))) ((bruijn ##k.992 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0substitute_k373, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0substitute_k371(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_k371" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k371, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_k371, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.129 1 0)) ((bruijn equal? 8 28) (close _V0substitute_k372) 'continuation (##inline ##vcore.car (bruijn ##expr.129 1 0))) ((bruijn ##k.992 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 8-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0substitute_k372, env)}),
      _V0continuation,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k382(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k382" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k382, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k382, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.136 5 1) (bruijn ##k.981 2 0) (bruijn ##expr.138 3 1) (bruijn ##x.982 1 0) (bruijn ##x.983 0 0))
    V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->vars[0],
      upenv->up->up->vars[1],
      upenv->vars[0],
      _var0);
 }
}
static void _V0loop_k381(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k381" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k381, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k381, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 17 5) (close _V0loop_k382) (bruijn ##body.135 2 3))
    V_CALL(VGetArg(upenv, 17-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k382, env)}),
      upenv->up->vars[3]);
 }
}
static void _V0loop_k380(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k380" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k380, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k380, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##expr.138 1 1))) ((bruijn reverse 16 5) (close _V0loop_k381) (bruijn ##args.134 1 2)) ((bruijn ##k.981 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        upenv->vars[1])))) {
    V_CALL(VGetArg(upenv, 16-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k381, env)}),
      upenv->vars[2]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k386(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k386" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k386, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k386, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##vcore.pair? (bruijn ##expr.140 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.140 0 0))) ((bruijn ##kk.137 3 1) (bruijn ##k.973 1 0) (##inline ##vcore.cdr (bruijn ##expr.138 6 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##expr.139 2 0)) (bruijn ##args.134 6 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##expr.140 0 0)) (bruijn ##body.135 6 3))) ((bruijn ##k.973 1 0) #f)) ((bruijn ##k.973 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(upenv->up->up->vars[1], runtime,
      upenv->vars[0],
      VInlineCdr2(runtime,
        VGetArg(upenv, 6-1, 1)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->up->vars[0]),
        VGetArg(upenv, 6-1, 2)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
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
static void _V0loop_k385(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k385" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k385, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k385, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.139 1 0)) ((close _V0loop_k386) (##inline ##vcore.cdr (bruijn ##expr.139 1 0))) ((bruijn ##k.973 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(_V0loop_k386, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k389(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k389" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k389, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k389, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.136 9 1) (bruijn ##k.968 4 0) (bruijn ##expr.138 7 1) (bruijn ##x.970 1 0) (bruijn ##x.971 0 0))
    V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 7-1, 1),
      upenv->vars[0],
      _var0);
 }
}
static void _V0loop_k388(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k388" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k388, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k388, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 21 5) (close _V0loop_k389) (bruijn ##body.135 6 3))
    V_CALL(VGetArg(upenv, 21-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k389, env)}),
      VGetArg(upenv, 6-1, 3));
 }
}
static void _V0loop_k387(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k387" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k387, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k387, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 20 5) (close _V0loop_k388) (bruijn ##args.134 5 2))
    V_CALL(VGetArg(upenv, 20-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k388, env)}),
      VGetArg(upenv, 5-1, 2));
 }
}
static void _V0loop_k384(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k384" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k384, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k384, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0loop_k385) (close _V0loop_k387))
    V_CALL_FUNC(_V0loop_k385, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k387, env)}));
 }
}
static void _V0loop_lambda115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda115" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda115, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda115, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_k384) (##inline ##vcore.car (bruijn ##expr.138 3 1)))
    V_CALL_FUNC(_V0loop_k384, env, runtime,
      VInlineCar2(runtime,
        upenv->up->up->vars[1]));
 }
}
static void _V0loop_lambda114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda114" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda114, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 17 27) (bruijn ##k.967 0 0) (close _V0loop_lambda115))
    V_CALL(VGetArg(upenv, 17-1, 27), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda115, env)}));
 }
}
static void _V0loop_k383(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k383" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k383, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k383, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call-with-values 16 6) (bruijn ##k.965 1 0) (close _V0loop_lambda114) (bruijn loop 2 0))
    V_CALL(VGetArg(upenv, 16-1, 6), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda114, env)}),
      upenv->up->vars[0]);
 }
}
static void _V0loop_lambda113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0loop_lambda113" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0loop_lambda113, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda113, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((close _V0loop_k380) (close _V0loop_k383))
    V_CALL_FUNC(_V0loop_k380, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k383, env)}));
 }
}
static void _V0substitute_lambda112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0substitute_lambda112" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0substitute_lambda112, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_lambda112, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V0loop_lambda113)) ((bruijn loop 0 0) (bruijn ##k.964 1 0) (##inline ##vcore.cdr (bruijn ##expr.132 5 0)) '() '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda113, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VInlineCdr2(runtime,
        VGetArg(upenv, 5-1, 0)),
      VNULL,
      VNULL);
    }
 }
}
static void _V0substitute_lambda111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_lambda111" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_lambda111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_lambda111, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 12 27) (bruijn ##k.963 0 0) (close _V0substitute_lambda112))
    V_CALL(VGetArg(upenv, 12-1, 27), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0substitute_lambda112, env)}));
 }
}
static void _V0substitute_k391(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_k391" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k391, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_k391, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.124 11 1) (bruijn ##k.985 2 0) (bruijn ##x.987 0 0))
    V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0substitute_k390(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_k390" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k390, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_k390, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 13 9) (close _V0substitute_k391) 'case-lambda (bruijn ##x.988 0 0))
    V_CALL(VGetArg(upenv, 13-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0substitute_k391, env)}),
      _V0case__lambda,
      _var0);
 }
}
static void _V0substitute_lambda117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0substitute_lambda117" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0substitute_lambda117, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_lambda117, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // ((bruijn substitute-lambda 12 9) (bruijn ##k.989 0 0) (bruijn x 11 1) (bruijn atom 11 2) (bruijn args 0 1) (bruijn body 0 2))
    V_CALL(VGetArg(upenv, 12-1, 9), runtime,
      _var0,
      VGetArg(upenv, 11-1, 1),
      VGetArg(upenv, 11-1, 2),
      _var1,
      _var2);
 }
}
static void _V0substitute_lambda116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0substitute_lambda116" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0substitute_lambda116, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_lambda116, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##vcore.null? (bruijn tail-expr 0 1)) ((bruijn map 12 7) (close _V0substitute_k390) (close _V0substitute_lambda117) (bruijn args 0 2) (bruijn body 0 3)) ((bruijn ##k.985 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    V_CALL(VGetArg(upenv, 12-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0substitute_k390, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0substitute_lambda117, env)}),
      _var2,
      _var3);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0substitute_k379(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_k379" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k379, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_k379, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.962 0 0) ((bruijn call-with-values 11 6) (bruijn ##k.961 1 0) (close _V0substitute_lambda111) (close _V0substitute_lambda116)) ((bruijn ##k.961 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 11-1, 6), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0substitute_lambda111, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0substitute_lambda116, env)}));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0substitute_k378(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_k378" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k378, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_k378, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.132 1 0)) ((bruijn equal? 10 28) (close _V0substitute_k379) 'case-lambda (##inline ##vcore.car (bruijn ##expr.132 1 0))) ((bruijn ##k.961 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 10-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0substitute_k379, env)}),
      _V0case__lambda,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0substitute_k394(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_k394" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k394, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_k394, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.958 0 0) ((bruijn ##kk.124 10 1) (bruijn ##k.957 1 0) (bruijn expr 11 3)) ((bruijn ##k.957 1 0) #f))
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
static void _V0substitute_k393(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_k393" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k393, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_k393, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.141 1 0)) ((bruijn equal? 12 28) (close _V0substitute_k394) '##foreign.function (##inline ##vcore.car (bruijn ##expr.141 1 0))) ((bruijn ##k.957 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 12-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0substitute_k394, env)}),
      _V10foreign_Dfunction,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0substitute_k398(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_k398" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k398, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_k398, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##vcore.pair? (bruijn ##expr.143 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.143 0 0))) ((bruijn ##kk.124 13 1) (bruijn ##k.950 2 0) (bruijn expr 14 3)) ((bruijn ##k.950 2 0) #f)) ((bruijn ##k.950 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
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
static void _V0substitute_k397(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_k397" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k397, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_k397, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.951 0 0) ((close _V0substitute_k398) (##inline ##vcore.cdr (bruijn ##expr.142 2 0))) ((bruijn ##k.950 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0substitute_k398, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0substitute_k396(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_k396" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k396, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_k396, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.142 1 0)) ((bruijn equal? 14 28) (close _V0substitute_k397) 'quote (##inline ##vcore.car (bruijn ##expr.142 1 0))) ((bruijn ##k.950 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 14-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0substitute_k397, env)}),
      _V0quote,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k405(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k405" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k405, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k405, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.149 5 1) (bruijn ##k.930 2 0) (bruijn ##expr.151 3 1) (bruijn ##x.931 1 0) (bruijn ##x.932 0 0))
    V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->vars[0],
      upenv->up->up->vars[1],
      upenv->vars[0],
      _var0);
 }
}
static void _V0loop_k404(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k404" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k404, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k404, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 24 5) (close _V0loop_k405) (bruijn ##vals.148 2 3))
    V_CALL(VGetArg(upenv, 24-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k405, env)}),
      upenv->up->vars[3]);
 }
}
static void _V0loop_k403(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k403" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k403, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k403, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##expr.151 1 1))) ((bruijn reverse 23 5) (close _V0loop_k404) (bruijn ##args.147 1 2)) ((bruijn ##k.930 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        upenv->vars[1])))) {
    V_CALL(VGetArg(upenv, 23-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k404, env)}),
      upenv->vars[2]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k409(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k409" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k409, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k409, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##vcore.pair? (bruijn ##expr.153 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.153 0 0))) ((bruijn ##kk.150 3 1) (bruijn ##k.922 1 0) (##inline ##vcore.cdr (bruijn ##expr.151 6 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##expr.152 2 0)) (bruijn ##args.147 6 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##expr.153 0 0)) (bruijn ##vals.148 6 3))) ((bruijn ##k.922 1 0) #f)) ((bruijn ##k.922 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(upenv->up->up->vars[1], runtime,
      upenv->vars[0],
      VInlineCdr2(runtime,
        VGetArg(upenv, 6-1, 1)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->up->vars[0]),
        VGetArg(upenv, 6-1, 2)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
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
static void _V0loop_k408(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k408" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k408, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k408, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.152 1 0)) ((close _V0loop_k409) (##inline ##vcore.cdr (bruijn ##expr.152 1 0))) ((bruijn ##k.922 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(_V0loop_k409, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k412(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k412" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k412, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k412, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.149 9 1) (bruijn ##k.917 4 0) (bruijn ##expr.151 7 1) (bruijn ##x.919 1 0) (bruijn ##x.920 0 0))
    V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 7-1, 1),
      upenv->vars[0],
      _var0);
 }
}
static void _V0loop_k411(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k411" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k411, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k411, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 28 5) (close _V0loop_k412) (bruijn ##vals.148 6 3))
    V_CALL(VGetArg(upenv, 28-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k412, env)}),
      VGetArg(upenv, 6-1, 3));
 }
}
static void _V0loop_k410(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k410" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k410, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k410, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 27 5) (close _V0loop_k411) (bruijn ##args.147 5 2))
    V_CALL(VGetArg(upenv, 27-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k411, env)}),
      VGetArg(upenv, 5-1, 2));
 }
}
static void _V0loop_k407(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k407" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k407, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k407, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0loop_k408) (close _V0loop_k410))
    V_CALL_FUNC(_V0loop_k408, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k410, env)}));
 }
}
static void _V0loop_lambda125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda125" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda125, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda125, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_k407) (##inline ##vcore.car (bruijn ##expr.151 3 1)))
    V_CALL_FUNC(_V0loop_k407, env, runtime,
      VInlineCar2(runtime,
        upenv->up->up->vars[1]));
 }
}
static void _V0loop_lambda124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda124" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda124, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 24 27) (bruijn ##k.916 0 0) (close _V0loop_lambda125))
    V_CALL(VGetArg(upenv, 24-1, 27), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda125, env)}));
 }
}
static void _V0loop_k406(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k406" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k406, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k406, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call-with-values 23 6) (bruijn ##k.914 1 0) (close _V0loop_lambda124) (bruijn loop 2 0))
    V_CALL(VGetArg(upenv, 23-1, 6), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda124, env)}),
      upenv->up->vars[0]);
 }
}
static void _V0loop_lambda123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0loop_lambda123" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0loop_lambda123, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda123, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((close _V0loop_k403) (close _V0loop_k406))
    V_CALL_FUNC(_V0loop_k403, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k406, env)}));
 }
}
static void _V0substitute_lambda122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0substitute_lambda122" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0substitute_lambda122, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_lambda122, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V0loop_lambda123)) ((bruijn loop 0 0) (bruijn ##k.913 1 0) (##inline ##vcore.car (bruijn ##expr.145 3 0)) '() '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda123, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VInlineCar2(runtime,
        upenv->up->up->vars[0]),
      VNULL,
      VNULL);
    }
 }
}
static void _V0substitute_lambda121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_lambda121" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_lambda121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_lambda121, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 19 27) (bruijn ##k.912 0 0) (close _V0substitute_lambda122))
    V_CALL(VGetArg(upenv, 19-1, 27), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0substitute_lambda122, env)}));
 }
}
static void _V0substitute_k418(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_k418" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k418, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_k418, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.940 3 0) (##inline ##vcore.cons 'letrec (##inline ##vcore.cons (bruijn ##x.942 1 0) (##inline ##vcore.cons (bruijn ##x.944 0 0) '()))))
    V_CALL(upenv->up->up->vars[0], runtime,
      VInlineCons2(runtime,
        _V0letrec,
        VInlineCons2(runtime,
        upenv->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL))));
 }
}
static void _V0substitute_k417(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_k417" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k417, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_k417, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn substitute 23 10) (close _V0substitute_k418) (bruijn x 22 1) (bruijn atom 22 2) (##inline ##vcore.car (bruijn ##expr.154 4 0)))
    V_CALL(VGetArg(upenv, 23-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0substitute_k418, env)}),
      VGetArg(upenv, 22-1, 1),
      VGetArg(upenv, 22-1, 2),
      VInlineCar2(runtime,
        upenv->up->up->up->vars[0]));
 }
}
static void _V0substitute_k416(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_k416" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k416, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_k416, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn map 23 7) (close _V0substitute_k417) (bruijn list 23 13) (bruijn args 4 2) (bruijn ##x.945 0 0))
    V_CALL(VGetArg(upenv, 23-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0substitute_k417, env)}),
      VGetArg(upenv, 23-1, 13),
      upenv->up->up->up->vars[2],
      _var0);
 }
}
static void _V0substitute_lambda127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0substitute_lambda127" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0substitute_lambda127, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_lambda127, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn substitute 22 10) (bruijn ##k.946 0 0) (bruijn x 21 1) (bruijn atom 21 2) (bruijn val 0 1))
    V_CALL(VGetArg(upenv, 22-1, 10), runtime,
      _var0,
      VGetArg(upenv, 21-1, 1),
      VGetArg(upenv, 21-1, 2),
      _var1);
 }
}
static void _V0substitute_k415(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_k415" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k415, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_k415, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.939 1 0) ((bruijn ##k.940 0 0) (bruijn expr 20 3)) ((bruijn map 22 7) (close _V0substitute_k416) (close _V0substitute_lambda127) (bruijn vals 3 3)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(_var0, runtime,
      VGetArg(upenv, 20-1, 3));
} else {
    V_CALL(VGetArg(upenv, 22-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0substitute_k416, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0substitute_lambda127, env)}),
      upenv->up->up->vars[3]);
}
 }
}
static void _V0substitute_k419(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_k419" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k419, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_k419, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.124 19 1) (bruijn ##k.934 3 0) (bruijn ##x.938 0 0))
    V_CALL(VGetArg(upenv, 19-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0substitute_k414(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_k414" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k414, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_k414, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0substitute_k415) (close _V0substitute_k419))
    V_CALL_FUNC(_V0substitute_k415, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0substitute_k419, env)}));
 }
}
static void _V0substitute_k413(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_k413" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k413, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_k413, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.154 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.154 0 0))) ((bruijn memtail 19 1) (close _V0substitute_k414) (bruijn x 18 1) (bruijn args 1 2)) ((bruijn ##k.934 1 0) #f)) ((bruijn ##k.934 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 19-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0substitute_k414, env)}),
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
static void _V0substitute_lambda126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0substitute_lambda126" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0substitute_lambda126, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_lambda126, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##vcore.null? (bruijn tail-expr 0 1)) ((close _V0substitute_k413) (##inline ##vcore.cdr (bruijn ##expr.145 1 0))) ((bruijn ##k.934 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    V_CALL_FUNC(_V0substitute_k413, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0substitute_k402(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_k402" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k402, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_k402, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.145 0 0)) ((bruijn call-with-values 18 6) (bruijn ##k.909 2 0) (close _V0substitute_lambda121) (close _V0substitute_lambda126)) ((bruijn ##k.909 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL(VGetArg(upenv, 18-1, 6), runtime,
      upenv->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0substitute_lambda121, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0substitute_lambda126, env)}));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0substitute_k401(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_k401" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k401, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_k401, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.910 0 0) ((close _V0substitute_k402) (##inline ##vcore.cdr (bruijn ##expr.144 2 0))) ((bruijn ##k.909 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0substitute_k402, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0substitute_k400(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_k400" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k400, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_k400, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.144 1 0)) ((bruijn equal? 16 28) (close _V0substitute_k401) 'letrec (##inline ##vcore.car (bruijn ##expr.144 1 0))) ((bruijn ##k.909 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 16-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0substitute_k401, env)}),
      _V0letrec,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0substitute_k424(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_k424" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k424, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_k424, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.124 18 1) (bruijn ##k.904 3 0) (bruijn ##x.905 0 0))
    V_CALL(VGetArg(upenv, 18-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0substitute_k423(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_k423" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k423, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_k423, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 20 9) (close _V0substitute_k424) (bruijn ##x.906 1 0) (bruijn ##x.907 0 0))
    V_CALL(VGetArg(upenv, 20-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0substitute_k424, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V0substitute_k422(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_k422" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k422, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_k422, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn substitute 18 10) (close _V0substitute_k423) (bruijn x 17 1) (bruijn atom 17 2) (##inline ##vcore.cdr (bruijn ##expr.155 2 0)))
    V_CALL(VGetArg(upenv, 18-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0substitute_k423, env)}),
      VGetArg(upenv, 17-1, 1),
      VGetArg(upenv, 17-1, 2),
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
 }
}
static void _V0substitute_k421(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_k421" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k421, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_k421, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.155 1 0)) ((bruijn substitute 17 10) (close _V0substitute_k422) (bruijn x 16 1) (bruijn atom 16 2) (##inline ##vcore.car (bruijn ##expr.155 1 0))) ((bruijn ##k.904 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 17-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0substitute_k422, env)}),
      VGetArg(upenv, 16-1, 1),
      VGetArg(upenv, 16-1, 2),
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0substitute_k427(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_k427" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k427, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_k427, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.901 1 0) ((bruijn ##k.902 0 0) (bruijn atom 19 2)) ((bruijn ##k.902 0 0) (bruijn y 2 0)))
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
static void _V0substitute_k429(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_k429" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k429, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_k429, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 22 12) (bruijn ##k.891 19 0) (##string ##string.1499))
    V_CALL(VGetArg(upenv, 22-1, 12), runtime,
      VGetArg(upenv, 19-1, 0),
      VEncodePointer(&_V10string_D1499.sym, VPOINTER_OTHER));
 }
}
static void _V0substitute_k428(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_k428" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k428, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_k428, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##kk.124 18 1) (close _V0substitute_k429) (bruijn ##x.900 0 0))
    V_CALL(VGetArg(upenv, 18-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0substitute_k429, env)}),
      _var0);
 }
}
static void _V0substitute_k426(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_k426" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k426, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_k426, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0substitute_k427) (close _V0substitute_k428))
    V_CALL_FUNC(_V0substitute_k427, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0substitute_k428, env)}));
 }
}
static void _V0substitute_lambda129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_lambda129" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_lambda129, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn eqv? 19 18) (close _V0substitute_k426) (bruijn x 17 1) (bruijn y 0 0))
    V_CALL(VGetArg(upenv, 19-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0substitute_k426, env)}),
      VGetArg(upenv, 17-1, 1),
      _var0);
 }
}
static void _V0substitute_k425(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_k425" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k425, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_k425, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0substitute_lambda129) (bruijn ##input.125 14 0))
    V_CALL_FUNC(_V0substitute_lambda129, env, runtime,
      VGetArg(upenv, 14-1, 0));
 }
}
static void _V0substitute_lambda128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_lambda128" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_lambda128, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0substitute_k421) (close _V0substitute_k425))
    V_CALL_FUNC(_V0substitute_k421, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0substitute_k425, env)}));
 }
}
static void _V0substitute_k420(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_k420" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k420, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_k420, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0substitute_lambda128) (bruijn ##input.125 12 0))
    V_CALL_FUNC(_V0substitute_lambda128, env, runtime,
      VGetArg(upenv, 12-1, 0));
 }
}
static void _V0substitute_lambda120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_lambda120" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_lambda120, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0substitute_k400) (close _V0substitute_k420))
    V_CALL_FUNC(_V0substitute_k400, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0substitute_k420, env)}));
 }
}
static void _V0substitute_k399(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_k399" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k399, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_k399, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0substitute_lambda120) (bruijn ##input.125 10 0))
    V_CALL_FUNC(_V0substitute_lambda120, env, runtime,
      VGetArg(upenv, 10-1, 0));
 }
}
static void _V0substitute_lambda119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_lambda119" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_lambda119, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0substitute_k396) (close _V0substitute_k399))
    V_CALL_FUNC(_V0substitute_k396, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0substitute_k399, env)}));
 }
}
static void _V0substitute_k395(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_k395" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k395, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_k395, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0substitute_lambda119) (bruijn ##input.125 8 0))
    V_CALL_FUNC(_V0substitute_lambda119, env, runtime,
      VGetArg(upenv, 8-1, 0));
 }
}
static void _V0substitute_lambda118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_lambda118" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_lambda118, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0substitute_k393) (close _V0substitute_k395))
    V_CALL_FUNC(_V0substitute_k393, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0substitute_k395, env)}));
 }
}
static void _V0substitute_k392(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_k392" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k392, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_k392, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0substitute_lambda118) (bruijn ##input.125 6 0))
    V_CALL_FUNC(_V0substitute_lambda118, env, runtime,
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V0substitute_lambda110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_lambda110" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_lambda110, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0substitute_k378) (close _V0substitute_k392))
    V_CALL_FUNC(_V0substitute_k378, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0substitute_k392, env)}));
 }
}
static void _V0substitute_k377(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_k377" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k377, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_k377, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0substitute_lambda110) (bruijn ##input.125 4 0))
    V_CALL_FUNC(_V0substitute_lambda110, env, runtime,
      upenv->up->up->up->vars[0]);
 }
}
static void _V0substitute_lambda109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_lambda109" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_lambda109, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0substitute_k371) (close _V0substitute_k377))
    V_CALL_FUNC(_V0substitute_k371, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0substitute_k377, env)}));
 }
}
static void _V0substitute_k370(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_k370" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k370, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_k370, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0substitute_lambda109) (bruijn ##input.125 2 0))
    V_CALL_FUNC(_V0substitute_lambda109, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V0substitute_lambda108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_lambda108" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_lambda108, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0substitute_k364) (close _V0substitute_k370))
    V_CALL_FUNC(_V0substitute_k364, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0substitute_k370, env)}));
 }
}
static void _V0substitute_lambda107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0substitute_lambda107" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_lambda107, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0substitute_lambda108) (bruijn ##input.125 0 0))
    V_CALL_FUNC(_V0substitute_lambda108, env, runtime,
      _var0);
 }
}
static void _V0substitute_lambda106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0substitute_lambda106" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0substitute_lambda106, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_lambda106, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0substitute_lambda107) (bruijn expr 1 3))
    V_CALL_FUNC(_V0substitute_lambda107, env, runtime,
      upenv->vars[3]);
 }
}
static void _V0substitute_lambda105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0substitute_lambda105" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0substitute_lambda105, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_lambda105, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn call/cc 2 27) (bruijn ##k.890 0 0) (close _V0substitute_lambda106))
    V_CALL(upenv->up->vars[27], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0substitute_lambda106, env)}));
 }
}
static void _V0special__apply_Q_lambda130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0special__apply_Q_lambda130" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0special__apply_Q_lambda130, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0special__apply_Q_lambda130, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn memv 2 21) (bruijn ##k.1011 0 0) (bruijn tok 0 1) (##inline ##vcore.qcons 'if (##inline ##vcore.qcons 'letrec '())))
    V_CALL(upenv->up->vars[21], runtime,
      _var0,
      _var1,
      VInlineCons2(runtime,
        _V0if,
        VInlineCons2(runtime,
        _V0letrec,
        VNULL)));
 }
}
static void _V0loop_k432(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k432" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k432, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k432, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 4 0) (bruijn ##k.1015 3 0) (bruijn ##x.1017 1 0) (bruijn ##x.1018 0 0))
    V_CALL(upenv->up->up->up->vars[0], runtime,
      upenv->up->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V0loop_k431(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k431" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k431, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k431, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 6 25) (close _V0loop_k432) (bruijn len 2 2) 1)
    V_CALL(VGetArg(upenv, 6-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k432, env)}),
      upenv->up->vars[2],
      VEncodeInt(1l));
 }
}
static void _V0loop_k430(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k430" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k430, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k430, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1016 0 0) ((bruijn cdr 5 23) (close _V0loop_k431) (bruijn lst 1 1)) ((bruijn ##k.1015 1 0) (bruijn len 1 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 5-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k431, env)}),
      upenv->vars[1]);
} else {
    V_CALL(upenv->vars[0], runtime,
      upenv->vars[2]);
}
 }
}
static void _V0loop_lambda132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0loop_lambda132" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda132, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda132, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn pair? 4 20) (close _V0loop_k430) (bruijn lst 0 1))
    V_CALL(upenv->up->up->up->vars[20], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k430, env)}),
      _var1);
 }
}
static void _V0taillength_lambda131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0taillength_lambda131" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0taillength_lambda131, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0taillength_lambda131, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V0loop_lambda132)) ((bruijn loop 0 0) (bruijn ##k.1014 1 0) (bruijn lst 1 1) 0))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda132, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      upenv->vars[1],
      VEncodeInt(0l));
    }
 }
}
static void _V0optimize__lambda_k438(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__lambda_k438" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__lambda_k438, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__lambda_k438, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.164 7 1) (bruijn ##k.1025 5 0) (bruijn ##x.1029 0 0))
    V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V0optimize__lambda_k448(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__lambda_k448" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__lambda_k448, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__lambda_k448, runtime, upenv, 1, argc, _var0) {
  // ((bruijn = 23 17) (bruijn ##k.1045 3 0) 0 (bruijn ##x.1047 0 0))
    V_CALL(VGetArg(upenv, 23-1, 17), runtime,
      upenv->up->up->vars[0],
      VEncodeInt(0l),
      _var0);
 }
}
static void _V0optimize__lambda_k447(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__lambda_k447" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__lambda_k447, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__lambda_k447, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn fold 22 26) (close _V0optimize__lambda_k448) (bruijn + 22 25) 0 (bruijn ##x.1048 0 0))
    V_CALL(VGetArg(upenv, 22-1, 26), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__lambda_k448, env)}),
      VGetArg(upenv, 22-1, 25),
      VEncodeInt(0l),
      _var0);
 }
}
static void _V0optimize__lambda_lambda139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__lambda_lambda139" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0optimize__lambda_lambda139, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__lambda_lambda139, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ref-count 21 6) (bruijn ##k.1049 0 0) (bruijn x 0 1) (bruijn f 6 0))
    V_CALL(VGetArg(upenv, 21-1, 6), runtime,
      _var0,
      _var1,
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V0optimize__lambda_k446(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__lambda_k446" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__lambda_k446, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__lambda_k446, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1046 0 0) ((bruijn map 21 7) (close _V0optimize__lambda_k447) (close _V0optimize__lambda_lambda139) (bruijn xs 11 0)) ((bruijn ##k.1045 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 21-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__lambda_k447, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__lambda_lambda139, env)}),
      VGetArg(upenv, 11-1, 0));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__lambda_k445(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__lambda_k445" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__lambda_k445, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__lambda_k445, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1044 1 0) ((bruijn equal? 20 28) (close _V0optimize__lambda_k446) (bruijn xs 10 0) (bruijn ys 3 0)) ((bruijn ##k.1045 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 20-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__lambda_k446, env)}),
      VGetArg(upenv, 10-1, 0),
      upenv->up->up->vars[0]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__lambda_k450(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__lambda_k450" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__lambda_k450, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__lambda_k450, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1039 1 0) ((bruijn ##k.1040 0 0) (bruijn f 5 0)) ((bruijn ##k.1040 0 0) (##inline ##vcore.cons (bruijn lamb 13 0) (##inline ##vcore.cons (bruijn xs 11 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn f 5 0) (bruijn ys 4 0)) '())))))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(_var0, runtime,
      VGetArg(upenv, 5-1, 0));
} else {
    V_CALL(_var0, runtime,
      VInlineCons2(runtime,
        VGetArg(upenv, 13-1, 0),
        VInlineCons2(runtime,
        VGetArg(upenv, 11-1, 0),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(upenv, 5-1, 0),
        upenv->up->up->up->vars[0]),
        VNULL))));
}
 }
}
static void _V0optimize__lambda_k451(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__lambda_k451" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__lambda_k451, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__lambda_k451, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.169 9 1) (bruijn ##k.1037 6 0) (bruijn ##x.1038 0 0))
    V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0);
 }
}
static void _V0optimize__lambda_k449(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__lambda_k449" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__lambda_k449, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__lambda_k449, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0optimize__lambda_k450) (close _V0optimize__lambda_k451))
    V_CALL_FUNC(_V0optimize__lambda_k450, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__lambda_k451, env)}));
 }
}
static void _V0optimize__lambda_k444(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__lambda_k444" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__lambda_k444, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__lambda_k444, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0optimize__lambda_k445) (close _V0optimize__lambda_k449))
    V_CALL_FUNC(_V0optimize__lambda_k445, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__lambda_k449, env)}));
 }
}
static void _V0optimize__lambda_k443(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__lambda_k443" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__lambda_k443, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__lambda_k443, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn not 18 14) (close _V0optimize__lambda_k444) (bruijn ##x.1050 0 0))
    V_CALL(VGetArg(upenv, 18-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__lambda_k444, env)}),
      _var0);
 }
}
static void _V0optimize__lambda_k442(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__lambda_k442" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__lambda_k442, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__lambda_k442, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn special-apply? 16 11) (close _V0optimize__lambda_k443) (bruijn f 1 0))
    V_CALL(VGetArg(upenv, 16-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__lambda_k443, env)}),
      upenv->vars[0]);
 }
}
static void _V0optimize__lambda_k441(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__lambda_k441" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__lambda_k441, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__lambda_k441, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0optimize__lambda_k442) (##inline ##vcore.cdr (bruijn ##expr.171 2 0)))
    V_CALL_FUNC(_V0optimize__lambda_k442, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
 }
}
static void _V0optimize__lambda_k440(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__lambda_k440" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__lambda_k440, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__lambda_k440, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.171 1 0)) ((close _V0optimize__lambda_k441) (##inline ##vcore.car (bruijn ##expr.171 1 0))) ((bruijn ##k.1037 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(_V0optimize__lambda_k441, env, runtime,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__lambda_k453(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__lambda_k453" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__lambda_k453, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__lambda_k453, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 17 12) (bruijn ##k.1030 5 0) (##string ##string.1499))
    V_CALL(VGetArg(upenv, 17-1, 12), runtime,
      VGetArg(upenv, 5-1, 0),
      VEncodePointer(&_V10string_D1499.sym, VPOINTER_OTHER));
 }
}
static void _V0optimize__lambda_lambda140(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__lambda_lambda140" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__lambda_lambda140, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##kk.169 4 1) (close _V0optimize__lambda_k453) (##inline ##vcore.cons (bruijn lamb 8 0) (##inline ##vcore.cons (bruijn xs 6 0) (##inline ##vcore.cons (bruijn opt-body 0 0) '()))))
    V_CALL(upenv->up->up->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__lambda_k453, env)}),
      VInlineCons2(runtime,
        VGetArg(upenv, 8-1, 0),
        VInlineCons2(runtime,
        VGetArg(upenv, 6-1, 0),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
 }
}
static void _V0optimize__lambda_k452(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__lambda_k452" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__lambda_k452, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__lambda_k452, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0optimize__lambda_lambda140) (bruijn ##input.170 2 0))
    V_CALL_FUNC(_V0optimize__lambda_lambda140, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V0optimize__lambda_lambda138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__lambda_lambda138" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__lambda_lambda138, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0optimize__lambda_k440) (close _V0optimize__lambda_k452))
    V_CALL_FUNC(_V0optimize__lambda_k440, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__lambda_k452, env)}));
 }
}
static void _V0optimize__lambda_k439(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__lambda_k439" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__lambda_k439, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__lambda_k439, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0optimize__lambda_lambda138) (bruijn ##input.170 0 0))
    V_CALL_FUNC(_V0optimize__lambda_lambda138, env, runtime,
      _var0);
 }
}
static void _V0optimize__lambda_lambda137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__lambda_lambda137" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0optimize__lambda_lambda137, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__lambda_lambda137, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn optimize-apply 9 4) (close _V0optimize__lambda_k439) (##inline ##vcore.car (bruijn ##expr.168 1 0)))
    V_CALL(VGetArg(upenv, 9-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__lambda_k439, env)}),
      VInlineCar2(runtime,
        upenv->vars[0]));
 }
}
static void _V0optimize__lambda_k437(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__lambda_k437" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__lambda_k437, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__lambda_k437, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.168 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.168 0 0))) ((bruijn call/cc 11 27) (close _V0optimize__lambda_k438) (close _V0optimize__lambda_lambda137)) ((bruijn ##k.1025 4 0) #f)) ((bruijn ##k.1025 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 11-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__lambda_k438, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__lambda_lambda137, env)}));
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
static void _V0optimize__lambda_k436(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__lambda_k436" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__lambda_k436, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__lambda_k436, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0optimize__lambda_k437) (##inline ##vcore.cdr (bruijn ##expr.167 1 0)))
    V_CALL_FUNC(_V0optimize__lambda_k437, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
 }
}
static void _V0optimize__lambda_k435(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__lambda_k435" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__lambda_k435, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__lambda_k435, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.167 0 0)) ((close _V0optimize__lambda_k436) (##inline ##vcore.car (bruijn ##expr.167 0 0))) ((bruijn ##k.1025 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V0optimize__lambda_k436, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__lambda_k434(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__lambda_k434" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__lambda_k434, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__lambda_k434, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0optimize__lambda_k435) (##inline ##vcore.cdr (bruijn ##expr.166 2 0)))
    V_CALL_FUNC(_V0optimize__lambda_k435, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
 }
}
static void _V0optimize__lambda_k433(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__lambda_k433" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__lambda_k433, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__lambda_k433, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.166 1 0)) ((close _V0optimize__lambda_k434) (##inline ##vcore.car (bruijn ##expr.166 1 0))) ((bruijn ##k.1025 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(_V0optimize__lambda_k434, env, runtime,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__lambda_k455(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__lambda_k455" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__lambda_k455, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__lambda_k455, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.164 3 1) (bruijn ##k.1021 3 0) (bruijn ##x.1023 0 0))
    V_CALL(upenv->up->up->vars[1], runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0optimize__lambda_k454(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__lambda_k454" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__lambda_k454, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__lambda_k454, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn compiler-error 7 8) (close _V0optimize__lambda_k455) (##string ##string.1500) (bruijn expr 3 1))
    V_CALL(VGetArg(upenv, 7-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__lambda_k455, env)}),
      VEncodePointer(&_V10string_D1500.sym, VPOINTER_OTHER),
      upenv->up->up->vars[1]);
 }
}
static void _V0optimize__lambda_lambda136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__lambda_lambda136" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__lambda_lambda136, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0optimize__lambda_k433) (close _V0optimize__lambda_k454))
    V_CALL_FUNC(_V0optimize__lambda_k433, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__lambda_k454, env)}));
 }
}
static void _V0optimize__lambda_lambda135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__lambda_lambda135" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0optimize__lambda_lambda135, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__lambda_lambda135, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0optimize__lambda_lambda136) (bruijn expr 1 1))
    V_CALL_FUNC(_V0optimize__lambda_lambda136, env, runtime,
      upenv->vars[1]);
 }
}
static void _V0optimize__lambda_lambda134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__lambda_lambda134" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0optimize__lambda_lambda134, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__lambda_lambda134, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 4 27) (bruijn ##k.1020 0 0) (close _V0optimize__lambda_lambda135))
    V_CALL(upenv->up->up->up->vars[27], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__lambda_lambda135, env)}));
 }
}
static void _V0inline__let_k460(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0inline__let_k460" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0inline__let_k460, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0inline__let_k460, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.1052 5 0) (##inline ##vcore.cons (bruijn ##x.1055 1 0) (bruijn ##x.1056 0 0)))
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VInlineCons2(runtime,
        upenv->vars[0],
        _var0));
 }
}
static void _V0inline__let_k459(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0inline__let_k459" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0inline__let_k459, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0inline__let_k459, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 8 5) (close _V0inline__let_k460) (bruijn done-xs 4 3))
    V_CALL(VGetArg(upenv, 8-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0inline__let_k460, env)}),
      upenv->up->up->up->vars[3]);
 }
}
static void _V0inline__let_k458(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0inline__let_k458" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0inline__let_k458, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0inline__let_k458, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn optimize-atom 4 5) (close _V0inline__let_k459) (##inline ##vcore.cons 'lambda (##inline ##vcore.cons (bruijn ##x.1059 0 0) (##inline ##vcore.cons (bruijn expr 3 1) '()))))
    V_CALL(upenv->up->up->up->vars[5], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0inline__let_k459, env)}),
      VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        _var0,
        VInlineCons2(runtime,
        upenv->up->up->vars[1],
        VNULL))));
 }
}
static void _V0inline__let_k457(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0inline__let_k457" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0inline__let_k457, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0inline__let_k457, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1054 0 0) ((bruijn optimize-apply 3 4) (bruijn ##k.1052 2 0) (bruijn expr 2 1)) ((bruijn reverse 6 5) (close _V0inline__let_k458) (bruijn done-ys 2 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->vars[4], runtime,
      upenv->up->vars[0],
      upenv->up->vars[1]);
} else {
    V_CALL(VGetArg(upenv, 6-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0inline__let_k458, env)}),
      upenv->up->vars[2]);
}
 }
}
static void _V0inline__let_k472(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0inline__let_k472" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0inline__let_k472, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0inline__let_k472, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1079 0 0) ((bruijn ##k.1077 4 0) (bruijn ##p.1079 0 0)) ((bruijn = 17 17) (bruijn ##k.1077 4 0) (bruijn refs 7 0) 1))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      _var0);
} else {
    V_CALL(VGetArg(upenv, 17-1, 17), runtime,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 7-1, 0),
      VEncodeInt(1l));
}
 }
}
static void _V0inline__let_k471(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0inline__let_k471" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0inline__let_k471, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0inline__let_k471, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn eqv? 16 18) (close _V0inline__let_k472) (bruijn ##x.1080 0 0) '##foreign.function)
    V_CALL(VGetArg(upenv, 16-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0inline__let_k472, env)}),
      _var0,
      _V10foreign_Dfunction);
 }
}
static void _V0inline__let_k470(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0inline__let_k470" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0inline__let_k470, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0inline__let_k470, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1078 0 0) ((bruijn ##k.1077 2 0) (bruijn ##p.1078 0 0)) ((bruijn car 15 22) (close _V0inline__let_k471) (bruijn x 8 0)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->vars[0], runtime,
      _var0);
} else {
    V_CALL(VGetArg(upenv, 15-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0inline__let_k471, env)}),
      VGetArg(upenv, 8-1, 0));
}
 }
}
static void _V0inline__let_k469(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0inline__let_k469" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0inline__let_k469, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0inline__let_k469, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn eqv? 14 18) (close _V0inline__let_k470) (bruijn ##x.1081 0 0) 'quote)
    V_CALL(VGetArg(upenv, 14-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0inline__let_k470, env)}),
      _var0,
      _V0quote);
 }
}
static void _V0inline__let_k468(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0inline__let_k468" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0inline__let_k468, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0inline__let_k468, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1076 1 0) ((bruijn ##k.1077 0 0) (bruijn ##p.1076 1 0)) ((bruijn car 13 22) (close _V0inline__let_k469) (bruijn x 6 0)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(_var0, runtime,
      upenv->vars[0]);
} else {
    V_CALL(VGetArg(upenv, 13-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0inline__let_k469, env)}),
      VGetArg(upenv, 6-1, 0));
}
 }
}
static void _V0inline__let_k477(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0inline__let_k477" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0inline__let_k477, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0inline__let_k477, runtime, upenv, 1, argc, _var0) {
  // ((bruijn memv 17 21) (bruijn ##k.1071 1 0) (bruijn ##x.1072 0 0) (##inline ##vcore.qcons 'lambda (##inline ##vcore.qcons 'continuation (##inline ##vcore.qcons 'case-lambda '()))))
    V_CALL(VGetArg(upenv, 17-1, 21), runtime,
      upenv->vars[0],
      _var0,
      VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        _V0continuation,
        VInlineCons2(runtime,
        _V0case__lambda,
        VNULL))));
 }
}
static void _V0inline__let_k476(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0inline__let_k476" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0inline__let_k476, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0inline__let_k476, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1070 1 0) ((bruijn car 16 22) (close _V0inline__let_k477) (bruijn x 9 0)) ((bruijn ##k.1071 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 16-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0inline__let_k477, env)}),
      VGetArg(upenv, 9-1, 0));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0inline__let_k479(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0inline__let_k479" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0inline__let_k479, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0inline__let_k479, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1068 0 0) ((bruijn pure-in? 16 8) (bruijn ##k.1067 3 0) (bruijn y 11 0) (bruijn expr 13 1)) ((bruijn ##k.1067 3 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 16-1, 8), runtime,
      upenv->up->up->vars[0],
      VGetArg(upenv, 11-1, 0),
      VGetArg(upenv, 13-1, 1));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0inline__let_k478(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0inline__let_k478" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0inline__let_k478, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0inline__let_k478, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn not 16 14) (close _V0inline__let_k479) (bruijn ##x.1069 0 0))
    V_CALL(VGetArg(upenv, 16-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0inline__let_k479, env)}),
      _var0);
 }
}
static void _V0inline__let_k475(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0inline__let_k475" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0inline__let_k475, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0inline__let_k475, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0inline__let_k476) (close _V0inline__let_k478))
    V_CALL_FUNC(_V0inline__let_k476, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0inline__let_k478, env)}));
 }
}
static void _V0inline__let_k474(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0inline__let_k474" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0inline__let_k474, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0inline__let_k474, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1066 1 0) ((bruijn pair? 14 20) (close _V0inline__let_k475) (bruijn x 7 0)) ((bruijn ##k.1067 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 14-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0inline__let_k475, env)}),
      VGetArg(upenv, 7-1, 0));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0inline__let_k481(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0inline__let_k481" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0inline__let_k481, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0inline__let_k481, runtime, upenv, 1, argc, _var0) {
  // ((bruijn inline-let 12 1) (bruijn ##k.1052 11 0) (bruijn ##x.1063 0 0) (bruijn done-ys 11 2) (bruijn done-xs 11 3) (bruijn ys 7 0) (bruijn xs 6 0))
    V_CALL(VGetArg(upenv, 12-1, 1), runtime,
      VGetArg(upenv, 11-1, 0),
      _var0,
      VGetArg(upenv, 11-1, 2),
      VGetArg(upenv, 11-1, 3),
      VGetArg(upenv, 7-1, 0),
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V0inline__let_k483(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0inline__let_k483" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0inline__let_k483, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0inline__let_k483, runtime, upenv, 1, argc, _var0) {
  // ((bruijn inline-let 13 1) (bruijn ##k.1052 12 0) (bruijn expr 12 1) (bruijn ##x.1064 1 0) (bruijn ##x.1065 0 0) (bruijn ys 8 0) (bruijn xs 7 0))
    V_CALL(VGetArg(upenv, 13-1, 1), runtime,
      VGetArg(upenv, 12-1, 0),
      VGetArg(upenv, 12-1, 1),
      upenv->vars[0],
      _var0,
      VGetArg(upenv, 8-1, 0),
      VGetArg(upenv, 7-1, 0));
 }
}
static void _V0inline__let_k482(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0inline__let_k482" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0inline__let_k482, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0inline__let_k482, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 15 9) (close _V0inline__let_k483) (bruijn x 8 0) (bruijn done-xs 11 3))
    V_CALL(VGetArg(upenv, 15-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0inline__let_k483, env)}),
      VGetArg(upenv, 8-1, 0),
      VGetArg(upenv, 11-1, 3));
 }
}
static void _V0inline__let_k480(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0inline__let_k480" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0inline__let_k480, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0inline__let_k480, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1062 0 0) ((bruijn substitute 13 10) (close _V0inline__let_k481) (bruijn y 8 0) (bruijn x 7 0) (bruijn expr 10 1)) ((bruijn cons 14 9) (close _V0inline__let_k482) (bruijn y 8 0) (bruijn done-ys 10 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 13-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0inline__let_k481, env)}),
      VGetArg(upenv, 8-1, 0),
      VGetArg(upenv, 7-1, 0),
      VGetArg(upenv, 10-1, 1));
} else {
    V_CALL(VGetArg(upenv, 14-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0inline__let_k482, env)}),
      VGetArg(upenv, 8-1, 0),
      VGetArg(upenv, 10-1, 2));
}
 }
}
static void _V0inline__let_k473(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0inline__let_k473" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0inline__let_k473, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0inline__let_k473, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0inline__let_k474) (close _V0inline__let_k480))
    V_CALL_FUNC(_V0inline__let_k474, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0inline__let_k480, env)}));
 }
}
static void _V0inline__let_k467(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0inline__let_k467" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0inline__let_k467, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0inline__let_k467, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0inline__let_k468) (close _V0inline__let_k473))
    V_CALL_FUNC(_V0inline__let_k468, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0inline__let_k473, env)}));
 }
}
static void _V0inline__let_k466(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0inline__let_k466" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0inline__let_k466, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0inline__let_k466, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1061 0 0) ((bruijn inline-let 8 1) (bruijn ##k.1052 7 0) (bruijn expr 7 1) (bruijn done-ys 7 2) (bruijn done-xs 7 3) (bruijn ys 3 0) (bruijn xs 2 0)) ((bruijn atom? 11 19) (close _V0inline__let_k467) (bruijn x 4 0)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      VGetArg(upenv, 7-1, 0),
      VGetArg(upenv, 7-1, 1),
      VGetArg(upenv, 7-1, 2),
      VGetArg(upenv, 7-1, 3),
      upenv->up->up->vars[0],
      upenv->up->vars[0]);
} else {
    V_CALL(VGetArg(upenv, 11-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0inline__let_k467, env)}),
      upenv->up->up->up->vars[0]);
}
 }
}
static void _V0inline__let_k465(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0inline__let_k465" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0inline__let_k465, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0inline__let_k465, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn = 10 17) (close _V0inline__let_k466) (bruijn refs 0 0) 0)
    V_CALL(VGetArg(upenv, 10-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0inline__let_k466, env)}),
      _var0,
      VEncodeInt(0l));
 }
}
static void _V0inline__let_k464(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0inline__let_k464" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0inline__let_k464, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0inline__let_k464, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ref-count 8 6) (close _V0inline__let_k465) (bruijn y 3 0) (bruijn expr 5 1))
    V_CALL(VGetArg(upenv, 8-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0inline__let_k465, env)}),
      upenv->up->up->vars[0],
      VGetArg(upenv, 5-1, 1));
 }
}
static void _V0inline__let_k463(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0inline__let_k463" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0inline__let_k463, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0inline__let_k463, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 8 23) (close _V0inline__let_k464) (bruijn xs 4 5))
    V_CALL(VGetArg(upenv, 8-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0inline__let_k464, env)}),
      upenv->up->up->up->vars[5]);
 }
}
static void _V0inline__let_k462(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0inline__let_k462" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0inline__let_k462, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0inline__let_k462, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 7 23) (close _V0inline__let_k463) (bruijn ys 3 4))
    V_CALL(VGetArg(upenv, 7-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0inline__let_k463, env)}),
      upenv->up->up->vars[4]);
 }
}
static void _V0inline__let_k461(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0inline__let_k461" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0inline__let_k461, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0inline__let_k461, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn car 6 22) (close _V0inline__let_k462) (bruijn xs 2 5))
    V_CALL(VGetArg(upenv, 6-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0inline__let_k462, env)}),
      upenv->up->vars[5]);
 }
}
static void _V0inline__let_k456(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0inline__let_k456" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0inline__let_k456, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0inline__let_k456, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1053 0 0) ((bruijn null? 5 24) (close _V0inline__let_k457) (bruijn done-ys 1 2)) ((bruijn car 5 22) (close _V0inline__let_k461) (bruijn ys 1 4)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 5-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0inline__let_k457, env)}),
      upenv->vars[2]);
} else {
    V_CALL(VGetArg(upenv, 5-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0inline__let_k461, env)}),
      upenv->vars[4]);
}
 }
}
static void _V0inline__let_lambda141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5) {
 static VDebugInfo dbg = { "_V0inline__let_lambda141" };
 VRecordCall2(runtime, &dbg);
 if(argc != 6) {
  VError("Not enough arguments to _V0inline__let_lambda141, got ~D~N"
  "-- expected 6~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0inline__let_lambda141, runtime, upenv, 6, argc, _var0, _var1, _var2, _var3, _var4, _var5) {
  struct { VEnv env; VWORD argv[6]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 6, 6, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  env->vars[5] = _var5;
  // ((bruijn null? 4 24) (close _V0inline__let_k456) (bruijn ys 0 4))
    V_CALL(upenv->up->up->up->vars[24], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0inline__let_k456, env)}),
      _var4);
 }
}
static void _V0optimize__let_k502(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k502" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k502, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k502, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1230 0 0) ((bruijn ##k.1228 4 0) (bruijn ##p.1230 0 0)) ((bruijn = 26 17) (bruijn ##k.1228 4 0) (bruijn refs 8 0) 1))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      _var0);
} else {
    V_CALL(VGetArg(upenv, 26-1, 17), runtime,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 8-1, 0),
      VEncodeInt(1l));
}
 }
}
static void _V0optimize__let_k501(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k501" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k501, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k501, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn eqv? 25 18) (close _V0optimize__let_k502) (bruijn ##x.1231 0 0) '##foreign.function)
    V_CALL(VGetArg(upenv, 25-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k502, env)}),
      _var0,
      _V10foreign_Dfunction);
 }
}
static void _V0optimize__let_k500(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k500" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k500, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k500, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1229 0 0) ((bruijn ##k.1228 2 0) (bruijn ##p.1229 0 0)) ((bruijn car 24 22) (close _V0optimize__let_k501) (bruijn x 7 0)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->vars[0], runtime,
      _var0);
} else {
    V_CALL(VGetArg(upenv, 24-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k501, env)}),
      VGetArg(upenv, 7-1, 0));
}
 }
}
static void _V0optimize__let_k499(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k499" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k499, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k499, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn eqv? 23 18) (close _V0optimize__let_k500) (bruijn ##x.1232 0 0) 'quote)
    V_CALL(VGetArg(upenv, 23-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k500, env)}),
      _var0,
      _V0quote);
 }
}
static void _V0optimize__let_k498(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k498" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k498, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k498, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1227 1 0) ((bruijn ##k.1228 0 0) (bruijn ##p.1227 1 0)) ((bruijn car 22 22) (close _V0optimize__let_k499) (bruijn x 5 0)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(_var0, runtime,
      upenv->vars[0]);
} else {
    V_CALL(VGetArg(upenv, 22-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k499, env)}),
      VGetArg(upenv, 5-1, 0));
}
 }
}
static void _V0optimize__let_k507(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k507" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k507, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k507, runtime, upenv, 1, argc, _var0) {
  // ((bruijn memv 26 21) (bruijn ##k.1222 1 0) (bruijn ##x.1223 0 0) (##inline ##vcore.qcons 'lambda (##inline ##vcore.qcons 'continuation (##inline ##vcore.qcons 'case-lambda '()))))
    V_CALL(VGetArg(upenv, 26-1, 21), runtime,
      upenv->vars[0],
      _var0,
      VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        _V0continuation,
        VInlineCons2(runtime,
        _V0case__lambda,
        VNULL))));
 }
}
static void _V0optimize__let_k506(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k506" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k506, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k506, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1221 1 0) ((bruijn car 25 22) (close _V0optimize__let_k507) (bruijn x 8 0)) ((bruijn ##k.1222 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 25-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k507, env)}),
      VGetArg(upenv, 8-1, 0));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__let_k509(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k509" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k509, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k509, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1219 0 0) ((bruijn pure-in? 25 8) (bruijn ##k.1218 3 0) (bruijn y 13 0) (bruijn expr 11 0)) ((bruijn ##k.1218 3 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 25-1, 8), runtime,
      upenv->up->up->vars[0],
      VGetArg(upenv, 13-1, 0),
      VGetArg(upenv, 11-1, 0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__let_k508(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k508" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k508, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k508, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn not 25 14) (close _V0optimize__let_k509) (bruijn ##x.1220 0 0))
    V_CALL(VGetArg(upenv, 25-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k509, env)}),
      _var0);
 }
}
static void _V0optimize__let_k505(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k505" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k505, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k505, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0optimize__let_k506) (close _V0optimize__let_k508))
    V_CALL_FUNC(_V0optimize__let_k506, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k508, env)}));
 }
}
static void _V0optimize__let_k504(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k504" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k504, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k504, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1217 1 0) ((bruijn pair? 23 20) (close _V0optimize__let_k505) (bruijn x 6 0)) ((bruijn ##k.1218 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 23-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k505, env)}),
      VGetArg(upenv, 6-1, 0));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__let_k511(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k511" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k511, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k511, runtime, upenv, 1, argc, _var0) {
  // ((bruijn optimize-apply 21 4) (bruijn ##k.1207 4 0) (bruijn ##x.1209 0 0))
    V_CALL(VGetArg(upenv, 21-1, 4), runtime,
      upenv->up->up->up->vars[0],
      _var0);
 }
}
static void _V0optimize__let_k513(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k513" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k513, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k513, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.1207 5 0) (##inline ##vcore.cons (bruijn ##x.1210 1 0) (##inline ##vcore.cons (bruijn ##x.1212 0 0) '())))
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VInlineCons2(runtime,
        upenv->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL)));
 }
}
static void _V0optimize__let_k512(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k512" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k512, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k512, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn optimize-atom 21 5) (close _V0optimize__let_k513) (bruijn x 7 0))
    V_CALL(VGetArg(upenv, 21-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k513, env)}),
      VGetArg(upenv, 7-1, 0));
 }
}
static void _V0optimize__let_k510(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k510" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k510, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k510, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1208 0 0) ((bruijn substitute 22 10) (close _V0optimize__let_k511) (bruijn y 10 0) (bruijn x 6 0) (bruijn expr 8 0)) ((bruijn optimize-atom 20 5) (close _V0optimize__let_k512) (##inline ##vcore.cons 'continuation (##inline ##vcore.cons (##inline ##vcore.cons (bruijn y 10 0) '()) (##inline ##vcore.cons (bruijn expr 8 0) '())))))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 22-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k511, env)}),
      VGetArg(upenv, 10-1, 0),
      VGetArg(upenv, 6-1, 0),
      VGetArg(upenv, 8-1, 0));
} else {
    V_CALL(VGetArg(upenv, 20-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k512, env)}),
      VInlineCons2(runtime,
        _V0continuation,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(upenv, 10-1, 0),
        VNULL),
        VInlineCons2(runtime,
        VGetArg(upenv, 8-1, 0),
        VNULL))));
}
 }
}
static void _V0optimize__let_k503(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k503" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k503, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k503, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0optimize__let_k504) (close _V0optimize__let_k510))
    V_CALL_FUNC(_V0optimize__let_k504, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k510, env)}));
 }
}
static void _V0optimize__let_k497(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k497" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k497, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k497, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0optimize__let_k498) (close _V0optimize__let_k503))
    V_CALL_FUNC(_V0optimize__let_k498, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k503, env)}));
 }
}
static void _V0optimize__let_k496(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k496" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k496, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k496, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1206 1 0) ((bruijn optimize-apply 17 4) (bruijn ##k.1207 0 0) (bruijn expr 5 0)) ((bruijn atom? 20 19) (close _V0optimize__let_k497) (bruijn x 3 0)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 17-1, 4), runtime,
      _var0,
      VGetArg(upenv, 5-1, 0));
} else {
    V_CALL(VGetArg(upenv, 20-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k497, env)}),
      upenv->up->up->vars[0]);
}
 }
}
static void _V0optimize__let_k514(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k514" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k514, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k514, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.172 15 1) (bruijn ##k.1195 12 0) (bruijn ##x.1205 0 0))
    V_CALL(VGetArg(upenv, 15-1, 1), runtime,
      VGetArg(upenv, 12-1, 0),
      _var0);
 }
}
static void _V0optimize__let_k495(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k495" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k495, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k495, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0optimize__let_k496) (close _V0optimize__let_k514))
    V_CALL_FUNC(_V0optimize__let_k496, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k514, env)}));
 }
}
static void _V0optimize__let_k494(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k494" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k494, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k494, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn = 18 17) (close _V0optimize__let_k495) (bruijn refs 0 0) 0)
    V_CALL(VGetArg(upenv, 18-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k495, env)}),
      _var0,
      VEncodeInt(0l));
 }
}
static void _V0optimize__let_k493(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k493" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k493, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k493, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.179 1 0))) ((bruijn ref-count 16 6) (close _V0optimize__let_k494) (bruijn y 4 0) (bruijn expr 2 0)) ((bruijn ##k.1195 9 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    V_CALL(VGetArg(upenv, 16-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k494, env)}),
      upenv->up->up->up->vars[0],
      upenv->up->vars[0]);
} else {
    V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__let_k492(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k492" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k492, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k492, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.179 0 0)) ((close _V0optimize__let_k493) (##inline ##vcore.car (bruijn ##expr.179 0 0))) ((bruijn ##k.1195 8 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V0optimize__let_k493, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__let_k491(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k491" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k491, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k491, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.178 1 0))) ((close _V0optimize__let_k492) (##inline ##vcore.cdr (bruijn ##expr.174 8 0))) ((bruijn ##k.1195 7 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    V_CALL_FUNC(_V0optimize__let_k492, env, runtime,
      VInlineCdr2(runtime,
        VGetArg(upenv, 8-1, 0)));
} else {
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__let_k490(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k490" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k490, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k490, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.178 0 0)) ((close _V0optimize__let_k491) (##inline ##vcore.car (bruijn ##expr.178 0 0))) ((bruijn ##k.1195 6 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V0optimize__let_k491, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__let_k489(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k489" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k489, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k489, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.177 1 0))) ((close _V0optimize__let_k490) (##inline ##vcore.cdr (bruijn ##expr.176 2 0))) ((bruijn ##k.1195 5 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    V_CALL_FUNC(_V0optimize__let_k490, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__let_k488(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k488" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k488, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k488, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.177 0 0)) ((close _V0optimize__let_k489) (##inline ##vcore.car (bruijn ##expr.177 0 0))) ((bruijn ##k.1195 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V0optimize__let_k489, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__let_k487(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k487" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k487, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k487, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.176 0 0)) ((close _V0optimize__let_k488) (##inline ##vcore.car (bruijn ##expr.176 0 0))) ((bruijn ##k.1195 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V0optimize__let_k488, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__let_k486(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k486" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k486, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k486, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1197 0 0) ((close _V0optimize__let_k487) (##inline ##vcore.cdr (bruijn ##expr.175 1 0))) ((bruijn ##k.1195 2 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0optimize__let_k487, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__let_k485(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k485" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k485, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k485, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.175 0 0)) ((bruijn equal? 9 28) (close _V0optimize__let_k486) 'continuation (##inline ##vcore.car (bruijn ##expr.175 0 0))) ((bruijn ##k.1195 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL(VGetArg(upenv, 9-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k486, env)}),
      _V0continuation,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__let_k484(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k484" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k484, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k484, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.174 1 0)) ((close _V0optimize__let_k485) (##inline ##vcore.car (bruijn ##expr.174 1 0))) ((bruijn ##k.1195 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(_V0optimize__let_k485, env, runtime,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__let_k521(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k521" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k521, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k521, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.172 10 1) (bruijn ##k.1181 5 0) (bruijn ##x.1189 0 0))
    V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V0optimize__let_k520(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k520" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k520, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k520, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.183 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.183 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.180 5 0))) ((bruijn optimize-apply 11 4) (close _V0optimize__let_k521) (##inline ##vcore.car (bruijn ##expr.183 0 0))) ((bruijn ##k.1181 4 0) #f)) ((bruijn ##k.1181 4 0) #f)) ((bruijn ##k.1181 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        VGetArg(upenv, 5-1, 0))))) {
    V_CALL(VGetArg(upenv, 11-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k521, env)}),
      VInlineCar2(runtime,
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
static void _V0optimize__let_k519(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k519" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k519, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k519, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.182 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.car (bruijn ##expr.182 0 0))) ((close _V0optimize__let_k520) (##inline ##vcore.cdr (bruijn ##expr.182 0 0))) ((bruijn ##k.1181 3 0) #f)) ((bruijn ##k.1181 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V0optimize__let_k520, env, runtime,
      VInlineCdr2(runtime,
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
static void _V0optimize__let_k518(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k518" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k518, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k518, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1183 0 0) ((close _V0optimize__let_k519) (##inline ##vcore.cdr (bruijn ##expr.181 1 0))) ((bruijn ##k.1181 2 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0optimize__let_k519, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__let_k517(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k517" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k517, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k517, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.181 0 0)) ((bruijn equal? 11 28) (close _V0optimize__let_k518) 'lambda (##inline ##vcore.car (bruijn ##expr.181 0 0))) ((bruijn ##k.1181 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL(VGetArg(upenv, 11-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k518, env)}),
      _V0lambda,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__let_k516(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k516" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k516, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k516, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.180 1 0)) ((close _V0optimize__let_k517) (##inline ##vcore.car (bruijn ##expr.180 1 0))) ((bruijn ##k.1181 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(_V0optimize__let_k517, env, runtime,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k528(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k528" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k528, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k528, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.189 4 1) (bruijn ##k.1148 1 0) (bruijn ##expr.191 2 1) (bruijn ##x.1149 0 0))
    V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[1],
      _var0);
 }
}
static void _V0loop_k527(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k527" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k527, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k527, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##expr.191 1 1))) ((bruijn reverse 20 5) (close _V0loop_k528) (bruijn ##ys.188 1 2)) ((bruijn ##k.1148 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        upenv->vars[1])))) {
    V_CALL(VGetArg(upenv, 20-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k528, env)}),
      upenv->vars[2]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k531(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k531" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k531, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k531, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.189 7 1) (bruijn ##k.1142 2 0) (bruijn ##expr.191 5 1) (bruijn ##x.1144 0 0))
    V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      _var0);
 }
}
static void _V0loop_k530(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k530" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k530, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k530, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 23 5) (close _V0loop_k531) (bruijn ##ys.188 4 2))
    V_CALL(VGetArg(upenv, 23-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k531, env)}),
      upenv->up->up->up->vars[2]);
 }
}
static void _V0loop_lambda152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda152" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda152, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda152, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##kk.190 0 1) (close _V0loop_k530) (##inline ##vcore.cdr (bruijn ##expr.191 3 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##expr.191 3 1)) (bruijn ##ys.188 3 2)))
    V_CALL(_var1, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k530, env)}),
      VInlineCdr2(runtime,
        upenv->up->up->vars[1]),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->up->up->vars[1]),
        upenv->up->up->vars[2]));
 }
}
static void _V0loop_lambda151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda151" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda151, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 21 27) (bruijn ##k.1141 0 0) (close _V0loop_lambda152))
    V_CALL(VGetArg(upenv, 21-1, 27), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda152, env)}));
 }
}
static void _V0loop_k529(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k529" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k529, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k529, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call-with-values 20 6) (bruijn ##k.1139 1 0) (close _V0loop_lambda151) (bruijn loop 2 0))
    V_CALL(VGetArg(upenv, 20-1, 6), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda151, env)}),
      upenv->up->vars[0]);
 }
}
static void _V0loop_lambda150(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0loop_lambda150" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda150, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda150, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0loop_k527) (close _V0loop_k529))
    V_CALL_FUNC(_V0loop_k527, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k529, env)}));
 }
}
static void _V0optimize__let_lambda149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda149" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0optimize__let_lambda149, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_lambda149, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V0loop_lambda150)) ((bruijn loop 0 0) (bruijn ##k.1138 1 0) (##inline ##vcore.car (bruijn ##expr.186 3 0)) '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda150, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VInlineCar2(runtime,
        upenv->up->up->vars[0]),
      VNULL);
    }
 }
}
static void _V0optimize__let_lambda148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda148" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_lambda148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_lambda148, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 16 27) (bruijn ##k.1137 0 0) (close _V0optimize__let_lambda149))
    V_CALL(VGetArg(upenv, 16-1, 27), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_lambda149, env)}));
 }
}
static void _V0loop_k534(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k534" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k534, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k534, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.195 4 1) (bruijn ##k.1166 1 0) (bruijn ##expr.197 2 1) (bruijn ##x.1167 0 0))
    V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[1],
      _var0);
 }
}
static void _V0loop_k533(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k533" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k533, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k533, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##expr.197 1 1))) ((bruijn reverse 22 5) (close _V0loop_k534) (bruijn ##xs.194 1 2)) ((bruijn ##k.1166 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        upenv->vars[1])))) {
    V_CALL(VGetArg(upenv, 22-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k534, env)}),
      upenv->vars[2]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k537(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k537" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k537, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k537, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.195 7 1) (bruijn ##k.1160 2 0) (bruijn ##expr.197 5 1) (bruijn ##x.1162 0 0))
    V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      _var0);
 }
}
static void _V0loop_k536(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k536" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k536, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k536, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 25 5) (close _V0loop_k537) (bruijn ##xs.194 4 2))
    V_CALL(VGetArg(upenv, 25-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k537, env)}),
      upenv->up->up->up->vars[2]);
 }
}
static void _V0loop_lambda158(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda158" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda158, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda158, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##kk.196 0 1) (close _V0loop_k536) (##inline ##vcore.cdr (bruijn ##expr.197 3 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##expr.197 3 1)) (bruijn ##xs.194 3 2)))
    V_CALL(_var1, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k536, env)}),
      VInlineCdr2(runtime,
        upenv->up->up->vars[1]),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->up->up->vars[1]),
        upenv->up->up->vars[2]));
 }
}
static void _V0loop_lambda157(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda157" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda157, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 23 27) (bruijn ##k.1159 0 0) (close _V0loop_lambda158))
    V_CALL(VGetArg(upenv, 23-1, 27), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda158, env)}));
 }
}
static void _V0loop_k535(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k535" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k535, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k535, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call-with-values 22 6) (bruijn ##k.1157 1 0) (close _V0loop_lambda157) (bruijn loop 2 0))
    V_CALL(VGetArg(upenv, 22-1, 6), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda157, env)}),
      upenv->up->vars[0]);
 }
}
static void _V0loop_lambda156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0loop_lambda156" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda156, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda156, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0loop_k533) (close _V0loop_k535))
    V_CALL_FUNC(_V0loop_k533, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k535, env)}));
 }
}
static void _V0optimize__let_lambda155(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda155" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0optimize__let_lambda155, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_lambda155, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V0loop_lambda156)) ((bruijn loop 0 0) (bruijn ##k.1156 1 0) (##inline ##vcore.cdr (bruijn ##expr.184 9 0)) '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda156, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VInlineCdr2(runtime,
        VGetArg(upenv, 9-1, 0)),
      VNULL);
    }
 }
}
static void _V0optimize__let_lambda154(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda154" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_lambda154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_lambda154, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 18 27) (bruijn ##k.1155 0 0) (close _V0optimize__let_lambda155))
    V_CALL(VGetArg(upenv, 18-1, 27), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_lambda155, env)}));
 }
}
static void _V0optimize__let_k542(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k542" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k542, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k542, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1173 1 0) ((bruijn compiler-error 23 8) (bruijn ##k.1174 0 0) (##string ##string.1501)) ((bruijn ##k.1174 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 23-1, 8), runtime,
      _var0,
      VEncodePointer(&_V10string_D1501.sym, VPOINTER_OTHER));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__let_k544(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k544" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k544, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k544, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.172 19 1) (bruijn ##k.1169 6 0) (bruijn ##x.1171 0 0))
    V_CALL(VGetArg(upenv, 19-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0);
 }
}
static void _V0optimize__let_k543(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k543" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k543, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k543, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn map 23 7) (close _V0optimize__let_k544) (bruijn optimize-atom 20 5) (bruijn let-expr 19 1))
    V_CALL(VGetArg(upenv, 23-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k544, env)}),
      VGetArg(upenv, 20-1, 5),
      VGetArg(upenv, 19-1, 1));
 }
}
static void _V0optimize__let_k541(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k541" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k541, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k541, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0optimize__let_k542) (close _V0optimize__let_k543))
    V_CALL_FUNC(_V0optimize__let_k542, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k543, env)}));
 }
}
static void _V0optimize__let_k540(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k540" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k540, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k540, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn not 21 14) (close _V0optimize__let_k541) (bruijn ##x.1175 0 0))
    V_CALL(VGetArg(upenv, 21-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k541, env)}),
      _var0);
 }
}
static void _V0optimize__let_k539(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k539" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k539, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k539, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn = 20 17) (close _V0optimize__let_k540) (bruijn ##x.1176 1 0) (bruijn ##x.1177 0 0))
    V_CALL(VGetArg(upenv, 20-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k540, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V0optimize__let_k538(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k538" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k538, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k538, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn length 19 15) (close _V0optimize__let_k539) (bruijn xs 1 2))
    V_CALL(VGetArg(upenv, 19-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k539, env)}),
      upenv->vars[2]);
 }
}
static void _V0optimize__let_lambda159(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda159" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0optimize__let_lambda159, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_lambda159, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn tail-expr 0 1)) ((bruijn length 18 15) (close _V0optimize__let_k538) (bruijn ys 2 2)) ((bruijn ##k.1169 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    V_CALL(VGetArg(upenv, 18-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k538, env)}),
      upenv->up->vars[2]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__let_k532(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k532" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k532, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k532, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.192 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.192 0 0))) ((bruijn call-with-values 17 6) (bruijn ##k.1151 1 0) (close _V0optimize__let_lambda154) (close _V0optimize__let_lambda159)) ((bruijn ##k.1151 1 0) #f)) ((bruijn ##k.1151 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 17-1, 6), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_lambda154, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_lambda159, env)}));
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
static void _V0optimize__let_lambda153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda153" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0optimize__let_lambda153, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_lambda153, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn tail-expr 0 1)) ((close _V0optimize__let_k532) (##inline ##vcore.cdr (bruijn ##expr.186 1 0))) ((bruijn ##k.1151 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    V_CALL_FUNC(_V0optimize__let_k532, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__let_k526(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k526" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k526, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k526, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.186 0 0)) ((bruijn call-with-values 15 6) (bruijn ##k.1133 3 0) (close _V0optimize__let_lambda148) (close _V0optimize__let_lambda153)) ((bruijn ##k.1133 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL(VGetArg(upenv, 15-1, 6), runtime,
      upenv->up->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_lambda148, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_lambda153, env)}));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__let_k525(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k525" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k525, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k525, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1135 0 0) ((close _V0optimize__let_k526) (##inline ##vcore.cdr (bruijn ##expr.185 1 0))) ((bruijn ##k.1133 2 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0optimize__let_k526, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__let_k524(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k524" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k524, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k524, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.185 0 0)) ((bruijn equal? 13 28) (close _V0optimize__let_k525) 'lambda (##inline ##vcore.car (bruijn ##expr.185 0 0))) ((bruijn ##k.1133 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL(VGetArg(upenv, 13-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k525, env)}),
      _V0lambda,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__let_k523(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k523" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k523, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k523, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.184 1 0)) ((close _V0optimize__let_k524) (##inline ##vcore.car (bruijn ##expr.184 1 0))) ((bruijn ##k.1133 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(_V0optimize__let_k524, env, runtime,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__let_k551(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k551" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k551, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k551, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.172 14 1) (bruijn ##k.1119 5 0) (bruijn ##x.1127 0 0))
    V_CALL(VGetArg(upenv, 14-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V0optimize__let_k550(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k550" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k550, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k550, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.201 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.201 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.198 5 0))) ((bruijn optimize-apply 15 4) (close _V0optimize__let_k551) (##inline ##vcore.car (bruijn ##expr.201 0 0))) ((bruijn ##k.1119 4 0) #f)) ((bruijn ##k.1119 4 0) #f)) ((bruijn ##k.1119 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        VGetArg(upenv, 5-1, 0))))) {
    V_CALL(VGetArg(upenv, 15-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k551, env)}),
      VInlineCar2(runtime,
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
static void _V0optimize__let_k549(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k549" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k549, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k549, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.200 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.car (bruijn ##expr.200 0 0))) ((close _V0optimize__let_k550) (##inline ##vcore.cdr (bruijn ##expr.200 0 0))) ((bruijn ##k.1119 3 0) #f)) ((bruijn ##k.1119 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V0optimize__let_k550, env, runtime,
      VInlineCdr2(runtime,
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
static void _V0optimize__let_k548(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k548" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k548, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k548, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1121 0 0) ((close _V0optimize__let_k549) (##inline ##vcore.cdr (bruijn ##expr.199 1 0))) ((bruijn ##k.1119 2 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0optimize__let_k549, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__let_k547(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k547" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k547, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k547, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.199 0 0)) ((bruijn equal? 15 28) (close _V0optimize__let_k548) 'continuation (##inline ##vcore.car (bruijn ##expr.199 0 0))) ((bruijn ##k.1119 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL(VGetArg(upenv, 15-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k548, env)}),
      _V0continuation,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__let_k546(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k546" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k546, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k546, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.198 1 0)) ((close _V0optimize__let_k547) (##inline ##vcore.car (bruijn ##expr.198 1 0))) ((bruijn ##k.1119 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(_V0optimize__let_k547, env, runtime,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__let_k564(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k564" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k564, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k564, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1111 1 0) ((bruijn compiler-error 27 8) (bruijn ##k.1112 0 0) (##string ##string.1501)) ((bruijn ##k.1112 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 27-1, 8), runtime,
      _var0,
      VEncodePointer(&_V10string_D1501.sym, VPOINTER_OTHER));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__let_k567(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k567" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k567, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k567, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.172 24 1) (bruijn ##k.1098 13 0) (##inline ##vcore.cons (bruijn ##x.1106 1 0) (bruijn ##x.1107 0 0)))
    V_CALL(VGetArg(upenv, 24-1, 1), runtime,
      VGetArg(upenv, 13-1, 0),
      VInlineCons2(runtime,
        upenv->vars[0],
        _var0));
 }
}
static void _V0optimize__let_k566(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k566" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k566, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k566, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn map 28 7) (close _V0optimize__let_k567) (bruijn optimize-atom 25 5) (bruijn xs 6 0))
    V_CALL(VGetArg(upenv, 28-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k567, env)}),
      VGetArg(upenv, 25-1, 5),
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V0optimize__let_k565(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k565" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k565, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k565, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn optimize-atom 24 5) (close _V0optimize__let_k566) (##inline ##vcore.cons 'lambda (##inline ##vcore.cons (bruijn ys 7 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##expr.205 6 0)) '()))))
    V_CALL(VGetArg(upenv, 24-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k566, env)}),
      VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        VGetArg(upenv, 7-1, 0),
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(upenv, 6-1, 0)),
        VNULL))));
 }
}
static void _V0optimize__let_k563(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k563" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k563, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k563, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0optimize__let_k564) (close _V0optimize__let_k565))
    V_CALL_FUNC(_V0optimize__let_k564, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k565, env)}));
 }
}
static void _V0optimize__let_k562(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k562" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k562, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k562, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn not 25 14) (close _V0optimize__let_k563) (bruijn ##x.1113 0 0))
    V_CALL(VGetArg(upenv, 25-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k563, env)}),
      _var0);
 }
}
static void _V0optimize__let_k561(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k561" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k561, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k561, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn <= 24 16) (close _V0optimize__let_k562) (bruijn ##x.1114 1 0) (bruijn ##x.1115 0 0))
    V_CALL(VGetArg(upenv, 24-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k562, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V0optimize__let_k560(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k560" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k560, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k560, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn length 23 15) (close _V0optimize__let_k561) (bruijn xs 1 0))
    V_CALL(VGetArg(upenv, 23-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k561, env)}),
      upenv->vars[0]);
 }
}
static void _V0optimize__let_k559(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k559" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k559, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k559, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn taillength 21 12) (close _V0optimize__let_k560) (bruijn ys 2 0))
    V_CALL(VGetArg(upenv, 21-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k560, env)}),
      upenv->up->vars[0]);
 }
}
static void _V0optimize__let_k558(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k558" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k558, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k558, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.205 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.205 0 0))) ((close _V0optimize__let_k559) (##inline ##vcore.cdr (bruijn ##expr.202 6 0))) ((bruijn ##k.1098 5 0) #f)) ((bruijn ##k.1098 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V0optimize__let_k559, env, runtime,
      VInlineCdr2(runtime,
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
static void _V0optimize__let_k557(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k557" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k557, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k557, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0optimize__let_k558) (##inline ##vcore.cdr (bruijn ##expr.204 1 0)))
    V_CALL_FUNC(_V0optimize__let_k558, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
 }
}
static void _V0optimize__let_k556(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k556" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k556, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k556, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.204 0 0)) ((close _V0optimize__let_k557) (##inline ##vcore.car (bruijn ##expr.204 0 0))) ((bruijn ##k.1098 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V0optimize__let_k557, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__let_k555(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k555" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k555, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k555, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1100 0 0) ((close _V0optimize__let_k556) (##inline ##vcore.cdr (bruijn ##expr.203 1 0))) ((bruijn ##k.1098 2 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0optimize__let_k556, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__let_k554(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k554" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k554, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k554, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.203 0 0)) ((bruijn equal? 17 28) (close _V0optimize__let_k555) 'lambda (##inline ##vcore.car (bruijn ##expr.203 0 0))) ((bruijn ##k.1098 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL(VGetArg(upenv, 17-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k555, env)}),
      _V0lambda,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__let_k553(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k553" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k553, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k553, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.202 1 0)) ((close _V0optimize__let_k554) (##inline ##vcore.car (bruijn ##expr.202 1 0))) ((bruijn ##k.1098 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(_V0optimize__let_k554, env, runtime,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__let_k572(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k572" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k572, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k572, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.172 16 1) (bruijn ##k.1092 3 0) (bruijn ##x.1095 0 0))
    V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0optimize__let_k571(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k571" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k571, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k571, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1094 0 0) ((bruijn compiler-error 20 8) (close _V0optimize__let_k572) (##string ##string.1502)) ((bruijn ##k.1092 2 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 20-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k572, env)}),
      VEncodePointer(&_V10string_D1502.sym, VPOINTER_OTHER));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__let_k570(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k570" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k570, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k570, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.207 0 0)) ((bruijn equal? 19 28) (close _V0optimize__let_k571) 'continuation (##inline ##vcore.car (bruijn ##expr.207 0 0))) ((bruijn ##k.1092 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL(VGetArg(upenv, 19-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k571, env)}),
      _V0continuation,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__let_k569(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k569" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k569, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k569, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.206 1 0)) ((close _V0optimize__let_k570) (##inline ##vcore.car (bruijn ##expr.206 1 0))) ((bruijn ##k.1092 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(_V0optimize__let_k570, env, runtime,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__let_k574(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k574" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k574, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k574, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.172 14 1) (bruijn ##k.1083 14 0) (bruijn ##x.1090 0 0))
    V_CALL(VGetArg(upenv, 14-1, 1), runtime,
      VGetArg(upenv, 14-1, 0),
      _var0);
 }
}
static void _V0optimize__let_k573(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k573" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k573, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k573, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn compiler-error 18 8) (close _V0optimize__let_k574) (##string ##string.1503))
    V_CALL(VGetArg(upenv, 18-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k574, env)}),
      VEncodePointer(&_V10string_D1503.sym, VPOINTER_OTHER));
 }
}
static void _V0optimize__let_lambda162(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda162" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_lambda162, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0optimize__let_k569) (close _V0optimize__let_k573))
    V_CALL_FUNC(_V0optimize__let_k569, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k573, env)}));
 }
}
static void _V0optimize__let_k568(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k568" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k568, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k568, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0optimize__let_lambda162) (bruijn ##input.173 10 0))
    V_CALL_FUNC(_V0optimize__let_lambda162, env, runtime,
      VGetArg(upenv, 10-1, 0));
 }
}
static void _V0optimize__let_lambda161(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda161" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_lambda161, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0optimize__let_k553) (close _V0optimize__let_k568))
    V_CALL_FUNC(_V0optimize__let_k553, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k568, env)}));
 }
}
static void _V0optimize__let_k552(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k552" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k552, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k552, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0optimize__let_lambda161) (bruijn ##input.173 8 0))
    V_CALL_FUNC(_V0optimize__let_lambda161, env, runtime,
      VGetArg(upenv, 8-1, 0));
 }
}
static void _V0optimize__let_lambda160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda160" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_lambda160, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0optimize__let_k546) (close _V0optimize__let_k552))
    V_CALL_FUNC(_V0optimize__let_k546, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k552, env)}));
 }
}
static void _V0optimize__let_k545(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k545" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k545, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k545, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0optimize__let_lambda160) (bruijn ##input.173 6 0))
    V_CALL_FUNC(_V0optimize__let_lambda160, env, runtime,
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V0optimize__let_lambda147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda147" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_lambda147, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0optimize__let_k523) (close _V0optimize__let_k545))
    V_CALL_FUNC(_V0optimize__let_k523, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k545, env)}));
 }
}
static void _V0optimize__let_k522(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k522" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k522, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k522, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0optimize__let_lambda147) (bruijn ##input.173 4 0))
    V_CALL_FUNC(_V0optimize__let_lambda147, env, runtime,
      upenv->up->up->up->vars[0]);
 }
}
static void _V0optimize__let_lambda146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda146" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_lambda146, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0optimize__let_k516) (close _V0optimize__let_k522))
    V_CALL_FUNC(_V0optimize__let_k516, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k522, env)}));
 }
}
static void _V0optimize__let_k515(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_k515" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k515, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k515, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0optimize__let_lambda146) (bruijn ##input.173 2 0))
    V_CALL_FUNC(_V0optimize__let_lambda146, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V0optimize__let_lambda145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda145" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_lambda145, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0optimize__let_k484) (close _V0optimize__let_k515))
    V_CALL_FUNC(_V0optimize__let_k484, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k515, env)}));
 }
}
static void _V0optimize__let_lambda144(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda144" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_lambda144, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0optimize__let_lambda145) (bruijn ##input.173 0 0))
    V_CALL_FUNC(_V0optimize__let_lambda145, env, runtime,
      _var0);
 }
}
static void _V0optimize__let_lambda143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda143" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0optimize__let_lambda143, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_lambda143, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0optimize__let_lambda144) (bruijn let-expr 1 1))
    V_CALL_FUNC(_V0optimize__let_lambda144, env, runtime,
      upenv->vars[1]);
 }
}
static void _V0optimize__let_lambda142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__let_lambda142" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0optimize__let_lambda142, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_lambda142, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 4 27) (bruijn ##k.1082 0 0) (close _V0optimize__let_lambda143))
    V_CALL(upenv->up->up->up->vars[27], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_lambda143, env)}));
 }
}
static void _V0loop_k580(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k580" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k580, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k580, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.215 5 1) (bruijn ##k.1262 2 0) (bruijn ##expr.217 3 1) (bruijn ##x.1263 1 0) (bruijn ##x.1264 0 0))
    V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->vars[0],
      upenv->up->up->vars[1],
      upenv->vars[0],
      _var0);
 }
}
static void _V0loop_k579(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k579" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k579, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k579, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 15 5) (close _V0loop_k580) (bruijn ##vals.214 2 3))
    V_CALL(VGetArg(upenv, 15-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k580, env)}),
      upenv->up->vars[3]);
 }
}
static void _V0loop_k578(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k578" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k578, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k578, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##expr.217 1 1))) ((bruijn reverse 14 5) (close _V0loop_k579) (bruijn ##args.213 1 2)) ((bruijn ##k.1262 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        upenv->vars[1])))) {
    V_CALL(VGetArg(upenv, 14-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k579, env)}),
      upenv->vars[2]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k584(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k584" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k584, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k584, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##vcore.pair? (bruijn ##expr.219 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.219 0 0))) ((bruijn ##kk.216 3 1) (bruijn ##k.1254 1 0) (##inline ##vcore.cdr (bruijn ##expr.217 6 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##expr.218 2 0)) (bruijn ##args.213 6 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##expr.219 0 0)) (bruijn ##vals.214 6 3))) ((bruijn ##k.1254 1 0) #f)) ((bruijn ##k.1254 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(upenv->up->up->vars[1], runtime,
      upenv->vars[0],
      VInlineCdr2(runtime,
        VGetArg(upenv, 6-1, 1)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->up->vars[0]),
        VGetArg(upenv, 6-1, 2)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
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
static void _V0loop_k583(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k583" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k583, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k583, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.218 1 0)) ((close _V0loop_k584) (##inline ##vcore.cdr (bruijn ##expr.218 1 0))) ((bruijn ##k.1254 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(_V0loop_k584, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k587(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k587" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k587, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k587, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.215 9 1) (bruijn ##k.1249 4 0) (bruijn ##expr.217 7 1) (bruijn ##x.1251 1 0) (bruijn ##x.1252 0 0))
    V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 7-1, 1),
      upenv->vars[0],
      _var0);
 }
}
static void _V0loop_k586(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k586" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k586, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k586, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 19 5) (close _V0loop_k587) (bruijn ##vals.214 6 3))
    V_CALL(VGetArg(upenv, 19-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k587, env)}),
      VGetArg(upenv, 6-1, 3));
 }
}
static void _V0loop_k585(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k585" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k585, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k585, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 18 5) (close _V0loop_k586) (bruijn ##args.213 5 2))
    V_CALL(VGetArg(upenv, 18-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k586, env)}),
      VGetArg(upenv, 5-1, 2));
 }
}
static void _V0loop_k582(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k582" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k582, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k582, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0loop_k583) (close _V0loop_k585))
    V_CALL_FUNC(_V0loop_k583, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k585, env)}));
 }
}
static void _V0loop_lambda170(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda170" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda170, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda170, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_k582) (##inline ##vcore.car (bruijn ##expr.217 3 1)))
    V_CALL_FUNC(_V0loop_k582, env, runtime,
      VInlineCar2(runtime,
        upenv->up->up->vars[1]));
 }
}
static void _V0loop_lambda169(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda169" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda169, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 15 27) (bruijn ##k.1248 0 0) (close _V0loop_lambda170))
    V_CALL(VGetArg(upenv, 15-1, 27), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda170, env)}));
 }
}
static void _V0loop_k581(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k581" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k581, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k581, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call-with-values 14 6) (bruijn ##k.1246 1 0) (close _V0loop_lambda169) (bruijn loop 2 0))
    V_CALL(VGetArg(upenv, 14-1, 6), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda169, env)}),
      upenv->up->vars[0]);
 }
}
static void _V0loop_lambda168(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0loop_lambda168" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0loop_lambda168, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda168, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((close _V0loop_k578) (close _V0loop_k581))
    V_CALL_FUNC(_V0loop_k578, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k581, env)}));
 }
}
static void _V0optimize__letrec_lambda167(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__letrec_lambda167" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0optimize__letrec_lambda167, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__letrec_lambda167, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V0loop_lambda168)) ((bruijn loop 0 0) (bruijn ##k.1245 1 0) (##inline ##vcore.car (bruijn ##expr.211 3 0)) '() '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda168, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VInlineCar2(runtime,
        upenv->up->up->vars[0]),
      VNULL,
      VNULL);
    }
 }
}
static void _V0optimize__letrec_lambda166(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__letrec_lambda166" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__letrec_lambda166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__letrec_lambda166, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 10 27) (bruijn ##k.1244 0 0) (close _V0optimize__letrec_lambda167))
    V_CALL(VGetArg(upenv, 10-1, 27), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__letrec_lambda167, env)}));
 }
}
static void _V0optimize__letrec_k591(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__letrec_k591" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__letrec_k591, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__letrec_k591, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.208 9 1) (bruijn ##k.1266 4 0) (##inline ##vcore.cons 'letrec (##inline ##vcore.cons (bruijn ##x.1272 1 0) (##inline ##vcore.cons (bruijn ##x.1274 0 0) '()))))
    V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VInlineCons2(runtime,
        _V0letrec,
        VInlineCons2(runtime,
        upenv->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL))));
 }
}
static void _V0optimize__letrec_k590(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__letrec_k590" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__letrec_k590, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__letrec_k590, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn optimize-apply 10 4) (close _V0optimize__letrec_k591) (##inline ##vcore.car (bruijn ##expr.220 2 0)))
    V_CALL(VGetArg(upenv, 10-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__letrec_k591, env)}),
      VInlineCar2(runtime,
        upenv->up->vars[0]));
 }
}
static void _V0optimize__letrec_k589(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__letrec_k589" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__letrec_k589, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__letrec_k589, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn map 12 7) (close _V0optimize__letrec_k590) (bruijn list 12 13) (bruijn args 2 2) (bruijn ##x.1275 0 0))
    V_CALL(VGetArg(upenv, 12-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__letrec_k590, env)}),
      VGetArg(upenv, 12-1, 13),
      upenv->up->vars[2],
      _var0);
 }
}
static void _V0optimize__letrec_k588(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__letrec_k588" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__letrec_k588, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__letrec_k588, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.220 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.220 0 0))) ((bruijn map 11 7) (close _V0optimize__letrec_k589) (bruijn optimize-atom 8 5) (bruijn vals 1 3)) ((bruijn ##k.1266 1 0) #f)) ((bruijn ##k.1266 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 11-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__letrec_k589, env)}),
      VGetArg(upenv, 8-1, 5),
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
static void _V0optimize__letrec_lambda171(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0optimize__letrec_lambda171" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0optimize__letrec_lambda171, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__letrec_lambda171, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##vcore.null? (bruijn tail-expr 0 1)) ((close _V0optimize__letrec_k588) (##inline ##vcore.cdr (bruijn ##expr.211 1 0))) ((bruijn ##k.1266 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    V_CALL_FUNC(_V0optimize__letrec_k588, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__letrec_k577(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__letrec_k577" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__letrec_k577, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__letrec_k577, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.211 0 0)) ((bruijn call-with-values 9 6) (bruijn ##k.1241 2 0) (close _V0optimize__letrec_lambda166) (close _V0optimize__letrec_lambda171)) ((bruijn ##k.1241 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL(VGetArg(upenv, 9-1, 6), runtime,
      upenv->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__letrec_lambda166, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__letrec_lambda171, env)}));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__letrec_k576(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__letrec_k576" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__letrec_k576, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__letrec_k576, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1242 0 0) ((close _V0optimize__letrec_k577) (##inline ##vcore.cdr (bruijn ##expr.210 2 0))) ((bruijn ##k.1241 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0optimize__letrec_k577, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__letrec_k575(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__letrec_k575" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__letrec_k575, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__letrec_k575, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.210 1 0)) ((bruijn equal? 7 28) (close _V0optimize__letrec_k576) 'letrec (##inline ##vcore.car (bruijn ##expr.210 1 0))) ((bruijn ##k.1241 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 7-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__letrec_k576, env)}),
      _V0letrec,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__letrec_k592(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__letrec_k592" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__letrec_k592, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__letrec_k592, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 7 12) (bruijn ##k.1238 2 0) (##string ##string.1499))
    V_CALL(VGetArg(upenv, 7-1, 12), runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V10string_D1499.sym, VPOINTER_OTHER));
 }
}
static void _V0optimize__letrec_lambda165(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__letrec_lambda165" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__letrec_lambda165, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0optimize__letrec_k575) (close _V0optimize__letrec_k592))
    V_CALL_FUNC(_V0optimize__letrec_k575, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__letrec_k592, env)}));
 }
}
static void _V0optimize__letrec_lambda164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__letrec_lambda164" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0optimize__letrec_lambda164, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__letrec_lambda164, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0optimize__letrec_lambda165) (bruijn letrec-expr 1 1))
    V_CALL_FUNC(_V0optimize__letrec_lambda165, env, runtime,
      upenv->vars[1]);
 }
}
static void _V0optimize__letrec_lambda163(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__letrec_lambda163" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0optimize__letrec_lambda163, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__letrec_lambda163, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 4 27) (bruijn ##k.1237 0 0) (close _V0optimize__letrec_lambda164))
    V_CALL(upenv->up->up->up->vars[27], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__letrec_lambda164, env)}));
 }
}
static void _V0optimize__apply_k596(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k596" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k596, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k596, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.221 6 1) (bruijn ##k.1357 3 0) (bruijn ##x.1360 0 0))
    V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0optimize__apply_k595(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k595" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k595, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k595, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1359 0 0) ((bruijn optimize-let 7 2) (close _V0optimize__apply_k596) (bruijn expr 6 1)) ((bruijn ##k.1357 2 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 7-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__apply_k596, env)}),
      VGetArg(upenv, 6-1, 1));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__apply_k594(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k594" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k594, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k594, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.224 0 0)) ((bruijn equal? 9 28) (close _V0optimize__apply_k595) 'continuation (##inline ##vcore.car (bruijn ##expr.224 0 0))) ((bruijn ##k.1357 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL(VGetArg(upenv, 9-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__apply_k595, env)}),
      _V0continuation,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__apply_k593(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k593" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k593, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k593, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.223 1 0)) ((close _V0optimize__apply_k594) (##inline ##vcore.car (bruijn ##expr.223 1 0))) ((bruijn ##k.1357 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(_V0optimize__apply_k594, env, runtime,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__apply_k601(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k601" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k601, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k601, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.221 8 1) (bruijn ##k.1351 3 0) (bruijn ##x.1354 0 0))
    V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0optimize__apply_k600(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k600" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k600, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k600, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1353 0 0) ((bruijn optimize-let 9 2) (close _V0optimize__apply_k601) (bruijn expr 8 1)) ((bruijn ##k.1351 2 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 9-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__apply_k601, env)}),
      VGetArg(upenv, 8-1, 1));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__apply_k599(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k599" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k599, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k599, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.226 0 0)) ((bruijn equal? 11 28) (close _V0optimize__apply_k600) 'lambda (##inline ##vcore.car (bruijn ##expr.226 0 0))) ((bruijn ##k.1351 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL(VGetArg(upenv, 11-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__apply_k600, env)}),
      _V0lambda,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__apply_k598(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k598" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k598, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k598, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.225 1 0)) ((close _V0optimize__apply_k599) (##inline ##vcore.car (bruijn ##expr.225 1 0))) ((bruijn ##k.1351 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(_V0optimize__apply_k599, env, runtime,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__apply_k605(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k605" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k605, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k605, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.221 9 1) (bruijn ##k.1346 2 0) (bruijn ##x.1348 0 0))
    V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0optimize__apply_k604(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k604" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k604, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k604, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1347 0 0) ((bruijn optimize-letrec 10 3) (close _V0optimize__apply_k605) (bruijn expr 9 1)) ((bruijn ##k.1346 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 10-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__apply_k605, env)}),
      VGetArg(upenv, 9-1, 1));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__apply_k603(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k603" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k603, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k603, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.227 1 0)) ((bruijn equal? 12 28) (close _V0optimize__apply_k604) 'letrec (##inline ##vcore.car (bruijn ##expr.227 1 0))) ((bruijn ##k.1346 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 12-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__apply_k604, env)}),
      _V0letrec,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__apply_k612(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k612" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k612, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k612, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.221 14 1) (bruijn ##k.1334 5 0) (bruijn ##x.1341 0 0))
    V_CALL(VGetArg(upenv, 14-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V0optimize__apply_k611(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k611" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k611, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k611, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.231 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.231 0 0))) ((bruijn optimize-apply 15 4) (close _V0optimize__apply_k612) (##inline ##vcore.car (bruijn ##expr.230 1 0))) ((bruijn ##k.1334 4 0) #f)) ((bruijn ##k.1334 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 15-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__apply_k612, env)}),
      VInlineCar2(runtime,
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
static void _V0optimize__apply_k610(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k610" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k610, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k610, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.230 0 0)) ((close _V0optimize__apply_k611) (##inline ##vcore.cdr (bruijn ##expr.230 0 0))) ((bruijn ##k.1334 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V0optimize__apply_k611, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__apply_k609(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k609" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k609, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k609, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.229 0 0)) (if (##inline ##vcore.eq? #t (##inline ##vcore.car (bruijn ##expr.229 0 0))) ((close _V0optimize__apply_k610) (##inline ##vcore.cdr (bruijn ##expr.229 0 0))) ((bruijn ##k.1334 2 0) #f)) ((bruijn ##k.1334 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(true),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V0optimize__apply_k610, env, runtime,
      VInlineCdr2(runtime,
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
static void _V0optimize__apply_k608(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k608" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k608, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k608, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1335 0 0) ((close _V0optimize__apply_k609) (##inline ##vcore.cdr (bruijn ##expr.228 2 0))) ((bruijn ##k.1334 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0optimize__apply_k609, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__apply_k607(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k607" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k607, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k607, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.228 1 0)) ((bruijn equal? 14 28) (close _V0optimize__apply_k608) 'if (##inline ##vcore.car (bruijn ##expr.228 1 0))) ((bruijn ##k.1334 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 14-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__apply_k608, env)}),
      _V0if,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__apply_k619(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k619" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k619, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k619, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.221 16 1) (bruijn ##k.1322 5 0) (bruijn ##x.1329 0 0))
    V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V0optimize__apply_k618(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k618" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k618, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k618, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.235 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.235 0 0))) ((bruijn optimize-apply 17 4) (close _V0optimize__apply_k619) (##inline ##vcore.car (bruijn ##expr.235 0 0))) ((bruijn ##k.1322 4 0) #f)) ((bruijn ##k.1322 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 17-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__apply_k619, env)}),
      VInlineCar2(runtime,
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
static void _V0optimize__apply_k617(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k617" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k617, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k617, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.234 0 0)) ((close _V0optimize__apply_k618) (##inline ##vcore.cdr (bruijn ##expr.234 0 0))) ((bruijn ##k.1322 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V0optimize__apply_k618, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__apply_k616(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k616" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k616, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k616, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.233 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##expr.233 0 0))) ((close _V0optimize__apply_k617) (##inline ##vcore.cdr (bruijn ##expr.233 0 0))) ((bruijn ##k.1322 2 0) #f)) ((bruijn ##k.1322 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V0optimize__apply_k617, env, runtime,
      VInlineCdr2(runtime,
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
static void _V0optimize__apply_k615(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k615" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k615, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k615, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1323 0 0) ((close _V0optimize__apply_k616) (##inline ##vcore.cdr (bruijn ##expr.232 2 0))) ((bruijn ##k.1322 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0optimize__apply_k616, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__apply_k614(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k614" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k614, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k614, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.232 1 0)) ((bruijn equal? 16 28) (close _V0optimize__apply_k615) 'if (##inline ##vcore.car (bruijn ##expr.232 1 0))) ((bruijn ##k.1322 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 16-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__apply_k615, env)}),
      _V0if,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__apply_k627(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k627" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k627, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k627, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.221 19 1) (bruijn ##k.1307 6 0) (##inline ##vcore.cons 'if (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##expr.237 4 0)) (##inline ##vcore.cons (bruijn ##x.1316 1 0) (##inline ##vcore.cons (bruijn ##x.1318 0 0) '())))))
    V_CALL(VGetArg(upenv, 19-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      VInlineCons2(runtime,
        _V0if,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->up->up->up->vars[0]),
        VInlineCons2(runtime,
        upenv->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL)))));
 }
}
static void _V0optimize__apply_k626(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k626" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k626, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k626, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn optimize-apply 20 4) (close _V0optimize__apply_k627) (##inline ##vcore.car (bruijn ##expr.239 1 0)))
    V_CALL(VGetArg(upenv, 20-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__apply_k627, env)}),
      VInlineCar2(runtime,
        upenv->vars[0]));
 }
}
static void _V0optimize__apply_k625(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k625" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k625, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k625, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.239 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.239 0 0))) ((bruijn optimize-apply 19 4) (close _V0optimize__apply_k626) (##inline ##vcore.car (bruijn ##expr.238 1 0))) ((bruijn ##k.1307 4 0) #f)) ((bruijn ##k.1307 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 19-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__apply_k626, env)}),
      VInlineCar2(runtime,
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
static void _V0optimize__apply_k624(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k624" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k624, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k624, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.238 0 0)) ((close _V0optimize__apply_k625) (##inline ##vcore.cdr (bruijn ##expr.238 0 0))) ((bruijn ##k.1307 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V0optimize__apply_k625, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__apply_k623(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k623" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k623, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k623, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.237 0 0)) ((close _V0optimize__apply_k624) (##inline ##vcore.cdr (bruijn ##expr.237 0 0))) ((bruijn ##k.1307 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V0optimize__apply_k624, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__apply_k622(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k622" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k622, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k622, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1308 0 0) ((close _V0optimize__apply_k623) (##inline ##vcore.cdr (bruijn ##expr.236 2 0))) ((bruijn ##k.1307 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0optimize__apply_k623, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__apply_k621(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k621" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k621, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k621, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.236 1 0)) ((bruijn equal? 18 28) (close _V0optimize__apply_k622) 'if (##inline ##vcore.car (bruijn ##expr.236 1 0))) ((bruijn ##k.1307 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 18-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__apply_k622, env)}),
      _V0if,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__apply_k635(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k635" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k635, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k635, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1305 0 0) ((bruijn lookup-inline-name 26 10) (bruijn ##k.1304 1 0) (bruijn f 5 0)) ((bruijn ##k.1304 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 26-1, 10), runtime,
      upenv->vars[0],
      VGetArg(upenv, 5-1, 0));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__apply_k634(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k634" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k634, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k634, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn inlining? 23 2) ((bruijn symbol? 25 11) (close _V0optimize__apply_k635) (bruijn f 4 0)) ((bruijn ##k.1304 0 0) #f))
if(VDecodeBool(
VGetArg(upenv, 23-1, 2))) {
    V_CALL(VGetArg(upenv, 25-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__apply_k635, env)}),
      upenv->up->up->up->vars[0]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__apply_k639(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k639" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k639, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k639, runtime, upenv, 1, argc, _var0) {
  // ((bruijn optimize-apply 25 4) (bruijn ##k.1293 2 0) (##inline ##vcore.cons (bruijn ##x.1295 1 0) (##inline ##vcore.cons (##inline ##vcore.cons '##inline (##inline ##vcore.cons (bruijn f 7 0) (bruijn ##x.1299 0 0))) '())))
    V_CALL(VGetArg(upenv, 25-1, 4), runtime,
      upenv->up->vars[0],
      VInlineCons2(runtime,
        upenv->vars[0],
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10inline,
        VInlineCons2(runtime,
        VGetArg(upenv, 7-1, 0),
        _var0)),
        VNULL)));
 }
}
static void _V0optimize__apply_k638(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k638" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k638, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k638, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn map 27 7) (close _V0optimize__apply_k639) (bruijn optimize-atom 24 5) (bruijn xs 3 0))
    V_CALL(VGetArg(upenv, 27-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__apply_k639, env)}),
      VGetArg(upenv, 24-1, 5),
      upenv->up->up->vars[0]);
 }
}
static void _V0optimize__apply_k643(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k643" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k643, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k643, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 30 9) (bruijn ##k.1293 4 0) (bruijn ##x.1300 3 0) (bruijn ##x.1301 0 0))
    V_CALL(VGetArg(upenv, 30-1, 9), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0optimize__apply_k642(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k642" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k642, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k642, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 29 9) (close _V0optimize__apply_k643) (bruijn ##x.1302 1 0) (bruijn ##x.1303 0 0))
    V_CALL(VGetArg(upenv, 29-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__apply_k643, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V0optimize__apply_k641(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k641" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k641, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k641, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn map 28 7) (close _V0optimize__apply_k642) (bruijn optimize-atom 25 5) (bruijn xs 4 0))
    V_CALL(VGetArg(upenv, 28-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__apply_k642, env)}),
      VGetArg(upenv, 25-1, 5),
      upenv->up->up->up->vars[0]);
 }
}
static void _V0optimize__apply_k640(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k640" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k640, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k640, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn optimize-atom 24 5) (close _V0optimize__apply_k641) (bruijn k 4 0))
    V_CALL(VGetArg(upenv, 24-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__apply_k641, env)}),
      upenv->up->up->up->vars[0]);
 }
}
static void _V0optimize__apply_k637(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k637" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k637, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k637, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1292 1 0) ((bruijn optimize-atom 23 5) (close _V0optimize__apply_k638) (bruijn k 3 0)) ((bruijn optimize-atom 23 5) (close _V0optimize__apply_k640) (bruijn f 5 0)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 23-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__apply_k638, env)}),
      upenv->up->up->vars[0]);
} else {
    V_CALL(VGetArg(upenv, 23-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__apply_k640, env)}),
      VGetArg(upenv, 5-1, 0));
}
 }
}
static void _V0optimize__apply_k644(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k644" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k644, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k644, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.221 21 1) (bruijn ##k.1289 6 0) (bruijn ##x.1291 0 0))
    V_CALL(VGetArg(upenv, 21-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0);
 }
}
static void _V0optimize__apply_k636(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k636" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k636, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k636, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0optimize__apply_k637) (close _V0optimize__apply_k644))
    V_CALL_FUNC(_V0optimize__apply_k637, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__apply_k644, env)}));
 }
}
static void _V0optimize__apply_k633(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k633" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k633, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k633, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0optimize__apply_k634) (close _V0optimize__apply_k636))
    V_CALL_FUNC(_V0optimize__apply_k634, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__apply_k636, env)}));
 }
}
static void _V0optimize__apply_k632(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k632" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k632, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k632, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0optimize__apply_k633) (##inline ##vcore.cdr (bruijn ##expr.241 1 0)))
    V_CALL_FUNC(_V0optimize__apply_k633, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
 }
}
static void _V0optimize__apply_k631(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k631" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k631, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k631, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.241 0 0)) ((close _V0optimize__apply_k632) (##inline ##vcore.car (bruijn ##expr.241 0 0))) ((bruijn ##k.1289 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V0optimize__apply_k632, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__apply_k630(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k630" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k630, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k630, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0optimize__apply_k631) (##inline ##vcore.cdr (bruijn ##expr.240 2 0)))
    V_CALL_FUNC(_V0optimize__apply_k631, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
 }
}
static void _V0optimize__apply_k629(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k629" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k629, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k629, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.240 1 0)) ((close _V0optimize__apply_k630) (##inline ##vcore.car (bruijn ##expr.240 1 0))) ((bruijn ##k.1289 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(_V0optimize__apply_k630, env, runtime,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__apply_k646(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k646" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k646, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k646, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.221 16 1) (bruijn ##k.1279 16 0) (bruijn ##x.1287 0 0))
    V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      VGetArg(upenv, 16-1, 0),
      _var0);
 }
}
static void _V0optimize__apply_k645(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k645" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k645, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k645, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn compiler-error 20 8) (close _V0optimize__apply_k646) (##string ##string.1504) (bruijn expr 16 1))
    V_CALL(VGetArg(upenv, 20-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__apply_k646, env)}),
      VEncodePointer(&_V10string_D1504.sym, VPOINTER_OTHER),
      VGetArg(upenv, 16-1, 1));
 }
}
static void _V0optimize__apply_lambda181(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda181" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_lambda181, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0optimize__apply_k629) (close _V0optimize__apply_k645))
    V_CALL_FUNC(_V0optimize__apply_k629, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__apply_k645, env)}));
 }
}
static void _V0optimize__apply_k628(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k628" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k628, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k628, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0optimize__apply_lambda181) (bruijn ##input.222 12 0))
    V_CALL_FUNC(_V0optimize__apply_lambda181, env, runtime,
      VGetArg(upenv, 12-1, 0));
 }
}
static void _V0optimize__apply_lambda180(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda180" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_lambda180, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0optimize__apply_k621) (close _V0optimize__apply_k628))
    V_CALL_FUNC(_V0optimize__apply_k621, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__apply_k628, env)}));
 }
}
static void _V0optimize__apply_k620(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k620" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k620, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k620, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0optimize__apply_lambda180) (bruijn ##input.222 10 0))
    V_CALL_FUNC(_V0optimize__apply_lambda180, env, runtime,
      VGetArg(upenv, 10-1, 0));
 }
}
static void _V0optimize__apply_lambda179(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda179" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_lambda179, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0optimize__apply_k614) (close _V0optimize__apply_k620))
    V_CALL_FUNC(_V0optimize__apply_k614, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__apply_k620, env)}));
 }
}
static void _V0optimize__apply_k613(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k613" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k613, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k613, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0optimize__apply_lambda179) (bruijn ##input.222 8 0))
    V_CALL_FUNC(_V0optimize__apply_lambda179, env, runtime,
      VGetArg(upenv, 8-1, 0));
 }
}
static void _V0optimize__apply_lambda178(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda178" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_lambda178, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0optimize__apply_k607) (close _V0optimize__apply_k613))
    V_CALL_FUNC(_V0optimize__apply_k607, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__apply_k613, env)}));
 }
}
static void _V0optimize__apply_k606(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k606" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k606, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k606, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0optimize__apply_lambda178) (bruijn ##input.222 6 0))
    V_CALL_FUNC(_V0optimize__apply_lambda178, env, runtime,
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V0optimize__apply_lambda177(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda177" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_lambda177, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0optimize__apply_k603) (close _V0optimize__apply_k606))
    V_CALL_FUNC(_V0optimize__apply_k603, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__apply_k606, env)}));
 }
}
static void _V0optimize__apply_k602(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k602" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k602, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k602, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0optimize__apply_lambda177) (bruijn ##input.222 4 0))
    V_CALL_FUNC(_V0optimize__apply_lambda177, env, runtime,
      upenv->up->up->up->vars[0]);
 }
}
static void _V0optimize__apply_lambda176(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda176" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_lambda176, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0optimize__apply_k598) (close _V0optimize__apply_k602))
    V_CALL_FUNC(_V0optimize__apply_k598, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__apply_k602, env)}));
 }
}
static void _V0optimize__apply_k597(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_k597" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k597, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k597, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0optimize__apply_lambda176) (bruijn ##input.222 2 0))
    V_CALL_FUNC(_V0optimize__apply_lambda176, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V0optimize__apply_lambda175(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda175" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_lambda175, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0optimize__apply_k593) (close _V0optimize__apply_k597))
    V_CALL_FUNC(_V0optimize__apply_k593, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__apply_k597, env)}));
 }
}
static void _V0optimize__apply_lambda174(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda174" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_lambda174, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0optimize__apply_lambda175) (bruijn ##input.222 0 0))
    V_CALL_FUNC(_V0optimize__apply_lambda175, env, runtime,
      _var0);
 }
}
static void _V0optimize__apply_lambda173(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda173" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0optimize__apply_lambda173, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_lambda173, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0optimize__apply_lambda174) (bruijn expr 1 1))
    V_CALL_FUNC(_V0optimize__apply_lambda174, env, runtime,
      upenv->vars[1]);
 }
}
static void _V0optimize__apply_lambda172(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__apply_lambda172" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0optimize__apply_lambda172, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_lambda172, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 4 27) (bruijn ##k.1278 0 0) (close _V0optimize__apply_lambda173))
    V_CALL(upenv->up->up->up->vars[27], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__apply_lambda173, env)}));
 }
}
static void _V0optimize__atom_k648(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__atom_k648" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__atom_k648, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__atom_k648, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1423 0 0) ((bruijn ##kk.242 4 1) (bruijn ##k.1422 1 0) (bruijn expr 5 1)) ((bruijn ##k.1422 1 0) #f))
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
static void _V0optimize__atom_k647(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__atom_k647" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__atom_k647, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__atom_k647, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.244 1 0)) ((bruijn equal? 8 28) (close _V0optimize__atom_k648) 'quote (##inline ##vcore.car (bruijn ##expr.244 1 0))) ((bruijn ##k.1422 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 8-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__atom_k648, env)}),
      _V0quote,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__atom_k651(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__atom_k651" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__atom_k651, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__atom_k651, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1419 0 0) ((bruijn ##kk.242 6 1) (bruijn ##k.1418 1 0) (bruijn expr 7 1)) ((bruijn ##k.1418 1 0) #f))
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
static void _V0optimize__atom_k650(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__atom_k650" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__atom_k650, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__atom_k650, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.245 1 0)) ((bruijn equal? 10 28) (close _V0optimize__atom_k651) '##foreign.function (##inline ##vcore.car (bruijn ##expr.245 1 0))) ((bruijn ##k.1418 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 10-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__atom_k651, env)}),
      _V10foreign_Dfunction,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__atom_k654(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__atom_k654" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__atom_k654, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__atom_k654, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1415 0 0) ((bruijn ##kk.242 8 1) (bruijn ##k.1414 1 0) (bruijn expr 9 1)) ((bruijn ##k.1414 1 0) #f))
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
static void _V0optimize__atom_k653(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__atom_k653" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__atom_k653, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__atom_k653, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.246 1 0)) ((bruijn equal? 12 28) (close _V0optimize__atom_k654) '##inline (##inline ##vcore.car (bruijn ##expr.246 1 0))) ((bruijn ##k.1414 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 12-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__atom_k654, env)}),
      _V10inline,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__atom_k658(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__atom_k658" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__atom_k658, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__atom_k658, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.242 11 1) (bruijn ##k.1409 2 0) (bruijn ##x.1411 0 0))
    V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0optimize__atom_k657(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__atom_k657" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__atom_k657, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__atom_k657, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1410 0 0) ((bruijn optimize-lambda 12 0) (close _V0optimize__atom_k658) (bruijn expr 11 1)) ((bruijn ##k.1409 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__atom_k658, env)}),
      VGetArg(upenv, 11-1, 1));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__atom_k656(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__atom_k656" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__atom_k656, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__atom_k656, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.247 1 0)) ((bruijn equal? 14 28) (close _V0optimize__atom_k657) 'lambda (##inline ##vcore.car (bruijn ##expr.247 1 0))) ((bruijn ##k.1409 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 14-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__atom_k657, env)}),
      _V0lambda,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__atom_k662(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__atom_k662" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__atom_k662, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__atom_k662, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.242 13 1) (bruijn ##k.1404 2 0) (bruijn ##x.1406 0 0))
    V_CALL(VGetArg(upenv, 13-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0optimize__atom_k661(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__atom_k661" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__atom_k661, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__atom_k661, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1405 0 0) ((bruijn optimize-lambda 14 0) (close _V0optimize__atom_k662) (bruijn expr 13 1)) ((bruijn ##k.1404 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__atom_k662, env)}),
      VGetArg(upenv, 13-1, 1));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__atom_k660(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__atom_k660" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__atom_k660, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__atom_k660, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.248 1 0)) ((bruijn equal? 16 28) (close _V0optimize__atom_k661) 'continuation (##inline ##vcore.car (bruijn ##expr.248 1 0))) ((bruijn ##k.1404 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 16-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__atom_k661, env)}),
      _V0continuation,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k668(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k668" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k668, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k668, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.253 5 1) (bruijn ##k.1391 2 0) (bruijn ##expr.255 3 1) (bruijn ##x.1392 1 0) (bruijn ##x.1393 0 0))
    V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->vars[0],
      upenv->up->up->vars[1],
      upenv->vars[0],
      _var0);
 }
}
static void _V0loop_k667(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k667" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k667, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k667, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 25 5) (close _V0loop_k668) (bruijn ##body.252 2 3))
    V_CALL(VGetArg(upenv, 25-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k668, env)}),
      upenv->up->vars[3]);
 }
}
static void _V0loop_k666(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k666" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k666, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k666, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##expr.255 1 1))) ((bruijn reverse 24 5) (close _V0loop_k667) (bruijn ##args.251 1 2)) ((bruijn ##k.1391 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        upenv->vars[1])))) {
    V_CALL(VGetArg(upenv, 24-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k667, env)}),
      upenv->vars[2]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k672(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k672" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k672, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k672, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##vcore.pair? (bruijn ##expr.257 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.257 0 0))) ((bruijn ##kk.254 3 1) (bruijn ##k.1383 1 0) (##inline ##vcore.cdr (bruijn ##expr.255 6 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##expr.256 2 0)) (bruijn ##args.251 6 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##expr.257 0 0)) (bruijn ##body.252 6 3))) ((bruijn ##k.1383 1 0) #f)) ((bruijn ##k.1383 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(upenv->up->up->vars[1], runtime,
      upenv->vars[0],
      VInlineCdr2(runtime,
        VGetArg(upenv, 6-1, 1)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->up->vars[0]),
        VGetArg(upenv, 6-1, 2)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
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
static void _V0loop_k671(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k671" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k671, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k671, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.256 1 0)) ((close _V0loop_k672) (##inline ##vcore.cdr (bruijn ##expr.256 1 0))) ((bruijn ##k.1383 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(_V0loop_k672, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k675(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k675" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k675, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k675, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.253 9 1) (bruijn ##k.1378 4 0) (bruijn ##expr.255 7 1) (bruijn ##x.1380 1 0) (bruijn ##x.1381 0 0))
    V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 7-1, 1),
      upenv->vars[0],
      _var0);
 }
}
static void _V0loop_k674(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k674" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k674, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k674, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 29 5) (close _V0loop_k675) (bruijn ##body.252 6 3))
    V_CALL(VGetArg(upenv, 29-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k675, env)}),
      VGetArg(upenv, 6-1, 3));
 }
}
static void _V0loop_k673(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k673" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k673, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k673, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 28 5) (close _V0loop_k674) (bruijn ##args.251 5 2))
    V_CALL(VGetArg(upenv, 28-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k674, env)}),
      VGetArg(upenv, 5-1, 2));
 }
}
static void _V0loop_k670(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k670" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k670, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k670, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0loop_k671) (close _V0loop_k673))
    V_CALL_FUNC(_V0loop_k671, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k673, env)}));
 }
}
static void _V0loop_lambda195(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda195" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda195, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda195, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_k670) (##inline ##vcore.car (bruijn ##expr.255 3 1)))
    V_CALL_FUNC(_V0loop_k670, env, runtime,
      VInlineCar2(runtime,
        upenv->up->up->vars[1]));
 }
}
static void _V0loop_lambda194(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda194" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda194, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 25 27) (bruijn ##k.1377 0 0) (close _V0loop_lambda195))
    V_CALL(VGetArg(upenv, 25-1, 27), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda195, env)}));
 }
}
static void _V0loop_k669(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k669" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k669, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k669, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call-with-values 24 6) (bruijn ##k.1375 1 0) (close _V0loop_lambda194) (bruijn loop 2 0))
    V_CALL(VGetArg(upenv, 24-1, 6), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda194, env)}),
      upenv->up->vars[0]);
 }
}
static void _V0loop_lambda193(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0loop_lambda193" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0loop_lambda193, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda193, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((close _V0loop_k666) (close _V0loop_k669))
    V_CALL_FUNC(_V0loop_k666, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k669, env)}));
 }
}
static void _V0optimize__atom_lambda192(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__atom_lambda192" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0optimize__atom_lambda192, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__atom_lambda192, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V0loop_lambda193)) ((bruijn loop 0 0) (bruijn ##k.1374 1 0) (##inline ##vcore.cdr (bruijn ##expr.249 5 0)) '() '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda193, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VInlineCdr2(runtime,
        VGetArg(upenv, 5-1, 0)),
      VNULL,
      VNULL);
    }
 }
}
static void _V0optimize__atom_lambda191(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__atom_lambda191" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__atom_lambda191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__atom_lambda191, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 20 27) (bruijn ##k.1373 0 0) (close _V0optimize__atom_lambda192))
    V_CALL(VGetArg(upenv, 20-1, 27), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__atom_lambda192, env)}));
 }
}
static void _V0optimize__atom_k676(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__atom_k676" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__atom_k676, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__atom_k676, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.242 16 1) (bruijn ##k.1395 1 0) (##inline ##vcore.cons 'case-lambda (bruijn ##x.1398 0 0)))
    V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      upenv->vars[0],
      VInlineCons2(runtime,
        _V0case__lambda,
        _var0));
 }
}
static void _V0optimize__atom_k677(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__atom_k677" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__atom_k677, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__atom_k677, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.1399 1 0) (##inline ##vcore.cons (bruijn args 1 1) (##inline ##vcore.cons (bruijn ##x.1401 0 0) '())))
    V_CALL(upenv->vars[0], runtime,
      VInlineCons2(runtime,
        upenv->vars[1],
        VInlineCons2(runtime,
        _var0,
        VNULL)));
 }
}
static void _V0optimize__atom_lambda197(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0optimize__atom_lambda197" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0optimize__atom_lambda197, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__atom_lambda197, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn optimize-apply 18 4) (close _V0optimize__atom_k677) (bruijn body 0 2))
    V_CALL(VGetArg(upenv, 18-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__atom_k677, env)}),
      _var2);
 }
}
static void _V0optimize__atom_lambda196(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0optimize__atom_lambda196" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0optimize__atom_lambda196, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__atom_lambda196, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##vcore.null? (bruijn tail-expr 0 1)) ((bruijn map 20 7) (close _V0optimize__atom_k676) (close _V0optimize__atom_lambda197) (bruijn args 0 2) (bruijn body 0 3)) ((bruijn ##k.1395 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    V_CALL(VGetArg(upenv, 20-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__atom_k676, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__atom_lambda197, env)}),
      _var2,
      _var3);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__atom_k665(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__atom_k665" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__atom_k665, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__atom_k665, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1372 0 0) ((bruijn call-with-values 19 6) (bruijn ##k.1371 1 0) (close _V0optimize__atom_lambda191) (close _V0optimize__atom_lambda196)) ((bruijn ##k.1371 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 19-1, 6), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__atom_lambda191, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__atom_lambda196, env)}));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__atom_k664(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__atom_k664" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__atom_k664, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__atom_k664, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.249 1 0)) ((bruijn equal? 18 28) (close _V0optimize__atom_k665) 'case-lambda (##inline ##vcore.car (bruijn ##expr.249 1 0))) ((bruijn ##k.1371 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 18-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__atom_k665, env)}),
      _V0case__lambda,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__atom_k678(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__atom_k678" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__atom_k678, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__atom_k678, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.242 13 1) (bruijn ##k.1363 13 0) (bruijn expr 14 1))
    V_CALL(VGetArg(upenv, 13-1, 1), runtime,
      VGetArg(upenv, 13-1, 0),
      VGetArg(upenv, 14-1, 1));
 }
}
static void _V0optimize__atom_lambda190(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__atom_lambda190" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__atom_lambda190, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0optimize__atom_k664) (close _V0optimize__atom_k678))
    V_CALL_FUNC(_V0optimize__atom_k664, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__atom_k678, env)}));
 }
}
static void _V0optimize__atom_k663(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__atom_k663" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__atom_k663, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__atom_k663, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0optimize__atom_lambda190) (bruijn ##input.243 10 0))
    V_CALL_FUNC(_V0optimize__atom_lambda190, env, runtime,
      VGetArg(upenv, 10-1, 0));
 }
}
static void _V0optimize__atom_lambda189(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__atom_lambda189" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__atom_lambda189, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0optimize__atom_k660) (close _V0optimize__atom_k663))
    V_CALL_FUNC(_V0optimize__atom_k660, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__atom_k663, env)}));
 }
}
static void _V0optimize__atom_k659(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__atom_k659" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__atom_k659, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__atom_k659, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0optimize__atom_lambda189) (bruijn ##input.243 8 0))
    V_CALL_FUNC(_V0optimize__atom_lambda189, env, runtime,
      VGetArg(upenv, 8-1, 0));
 }
}
static void _V0optimize__atom_lambda188(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__atom_lambda188" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__atom_lambda188, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0optimize__atom_k656) (close _V0optimize__atom_k659))
    V_CALL_FUNC(_V0optimize__atom_k656, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__atom_k659, env)}));
 }
}
static void _V0optimize__atom_k655(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__atom_k655" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__atom_k655, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__atom_k655, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0optimize__atom_lambda188) (bruijn ##input.243 6 0))
    V_CALL_FUNC(_V0optimize__atom_lambda188, env, runtime,
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V0optimize__atom_lambda187(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__atom_lambda187" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__atom_lambda187, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0optimize__atom_k653) (close _V0optimize__atom_k655))
    V_CALL_FUNC(_V0optimize__atom_k653, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__atom_k655, env)}));
 }
}
static void _V0optimize__atom_k652(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__atom_k652" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__atom_k652, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__atom_k652, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0optimize__atom_lambda187) (bruijn ##input.243 4 0))
    V_CALL_FUNC(_V0optimize__atom_lambda187, env, runtime,
      upenv->up->up->up->vars[0]);
 }
}
static void _V0optimize__atom_lambda186(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__atom_lambda186" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__atom_lambda186, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0optimize__atom_k650) (close _V0optimize__atom_k652))
    V_CALL_FUNC(_V0optimize__atom_k650, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__atom_k652, env)}));
 }
}
static void _V0optimize__atom_k649(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__atom_k649" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__atom_k649, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__atom_k649, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0optimize__atom_lambda186) (bruijn ##input.243 2 0))
    V_CALL_FUNC(_V0optimize__atom_lambda186, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V0optimize__atom_lambda185(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__atom_lambda185" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__atom_lambda185, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0optimize__atom_k647) (close _V0optimize__atom_k649))
    V_CALL_FUNC(_V0optimize__atom_k647, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__atom_k649, env)}));
 }
}
static void _V0optimize__atom_lambda184(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__atom_lambda184" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__atom_lambda184, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0optimize__atom_lambda185) (bruijn ##input.243 0 0))
    V_CALL_FUNC(_V0optimize__atom_lambda185, env, runtime,
      _var0);
 }
}
static void _V0optimize__atom_lambda183(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__atom_lambda183" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0optimize__atom_lambda183, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__atom_lambda183, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0optimize__atom_lambda184) (bruijn expr 1 1))
    V_CALL_FUNC(_V0optimize__atom_lambda184, env, runtime,
      upenv->vars[1]);
 }
}
static void _V0optimize__atom_lambda182(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__atom_lambda182" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0optimize__atom_lambda182, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__atom_lambda182, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 4 27) (bruijn ##k.1362 0 0) (close _V0optimize__atom_lambda183))
    V_CALL(upenv->up->up->up->vars[27], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__atom_lambda183, env)}));
 }
}
static void _V0optimize__impl_k680(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__impl_k680" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__impl_k680, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__impl_k680, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1455 0 0) ((bruijn ##kk.156 4 1) (bruijn ##k.1454 1 0) (bruijn expr 6 1)) ((bruijn ##k.1454 1 0) #f))
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
static void _V0optimize__impl_k679(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__impl_k679" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__impl_k679, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__impl_k679, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.158 1 0)) ((bruijn equal? 7 28) (close _V0optimize__impl_k680) 'quote (##inline ##vcore.car (bruijn ##expr.158 1 0))) ((bruijn ##k.1454 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 7-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__impl_k680, env)}),
      _V0quote,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__impl_k683(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__impl_k683" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__impl_k683, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__impl_k683, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1451 0 0) ((bruijn ##kk.156 6 1) (bruijn ##k.1450 1 0) (bruijn expr 8 1)) ((bruijn ##k.1450 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      upenv->vars[0],
      VGetArg(upenv, 8-1, 1));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__impl_k682(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__impl_k682" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__impl_k682, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__impl_k682, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.159 1 0)) ((bruijn equal? 9 28) (close _V0optimize__impl_k683) '##foreign.function (##inline ##vcore.car (bruijn ##expr.159 1 0))) ((bruijn ##k.1450 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 9-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__impl_k683, env)}),
      _V10foreign_Dfunction,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__impl_k686(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__impl_k686" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__impl_k686, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__impl_k686, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1447 0 0) ((bruijn ##kk.156 8 1) (bruijn ##k.1446 1 0) (bruijn expr 10 1)) ((bruijn ##k.1446 1 0) #f))
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
static void _V0optimize__impl_k685(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__impl_k685" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__impl_k685, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__impl_k685, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.160 1 0)) ((bruijn equal? 11 28) (close _V0optimize__impl_k686) '##inline (##inline ##vcore.car (bruijn ##expr.160 1 0))) ((bruijn ##k.1446 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 11-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__impl_k686, env)}),
      _V10inline,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__impl_k690(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__impl_k690" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__impl_k690, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__impl_k690, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.156 11 1) (bruijn ##k.1441 2 0) (bruijn ##x.1443 0 0))
    V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0optimize__impl_k689(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__impl_k689" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__impl_k689, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__impl_k689, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1442 0 0) ((bruijn optimize-lambda 11 0) (close _V0optimize__impl_k690) (bruijn expr 12 1)) ((bruijn ##k.1441 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__impl_k690, env)}),
      VGetArg(upenv, 12-1, 1));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__impl_k688(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__impl_k688" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__impl_k688, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__impl_k688, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.161 1 0)) ((bruijn equal? 13 28) (close _V0optimize__impl_k689) 'lambda (##inline ##vcore.car (bruijn ##expr.161 1 0))) ((bruijn ##k.1441 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 13-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__impl_k689, env)}),
      _V0lambda,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__impl_k694(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__impl_k694" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__impl_k694, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__impl_k694, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.156 13 1) (bruijn ##k.1436 2 0) (bruijn ##x.1438 0 0))
    V_CALL(VGetArg(upenv, 13-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0optimize__impl_k693(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__impl_k693" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__impl_k693, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__impl_k693, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1437 0 0) ((bruijn optimize-lambda 13 0) (close _V0optimize__impl_k694) (bruijn expr 14 1)) ((bruijn ##k.1436 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__impl_k694, env)}),
      VGetArg(upenv, 14-1, 1));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__impl_k692(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__impl_k692" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__impl_k692, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__impl_k692, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.162 1 0)) ((bruijn equal? 15 28) (close _V0optimize__impl_k693) 'continuation (##inline ##vcore.car (bruijn ##expr.162 1 0))) ((bruijn ##k.1436 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 15-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__impl_k693, env)}),
      _V0continuation,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__impl_k697(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__impl_k697" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__impl_k697, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__impl_k697, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.156 14 1) (bruijn ##k.1433 1 0) (bruijn ##x.1434 0 0))
    V_CALL(VGetArg(upenv, 14-1, 1), runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V0optimize__impl_k696(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__impl_k696" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__impl_k696, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__impl_k696, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.163 1 0)) ((bruijn optimize-apply 14 4) (close _V0optimize__impl_k697) (bruijn expr 15 1)) ((bruijn ##k.1433 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 14-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__impl_k697, env)}),
      VGetArg(upenv, 15-1, 1));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize__impl_k698(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__impl_k698" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__impl_k698, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__impl_k698, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.156 13 1) (bruijn ##k.1425 13 0) (bruijn expr 15 1))
    V_CALL(VGetArg(upenv, 13-1, 1), runtime,
      VGetArg(upenv, 13-1, 0),
      VGetArg(upenv, 15-1, 1));
 }
}
static void _V0optimize__impl_lambda205(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__impl_lambda205" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__impl_lambda205, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0optimize__impl_k696) (close _V0optimize__impl_k698))
    V_CALL_FUNC(_V0optimize__impl_k696, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__impl_k698, env)}));
 }
}
static void _V0optimize__impl_k695(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__impl_k695" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__impl_k695, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__impl_k695, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0optimize__impl_lambda205) (bruijn ##input.157 10 0))
    V_CALL_FUNC(_V0optimize__impl_lambda205, env, runtime,
      VGetArg(upenv, 10-1, 0));
 }
}
static void _V0optimize__impl_lambda204(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__impl_lambda204" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__impl_lambda204, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0optimize__impl_k692) (close _V0optimize__impl_k695))
    V_CALL_FUNC(_V0optimize__impl_k692, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__impl_k695, env)}));
 }
}
static void _V0optimize__impl_k691(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__impl_k691" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__impl_k691, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__impl_k691, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0optimize__impl_lambda204) (bruijn ##input.157 8 0))
    V_CALL_FUNC(_V0optimize__impl_lambda204, env, runtime,
      VGetArg(upenv, 8-1, 0));
 }
}
static void _V0optimize__impl_lambda203(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__impl_lambda203" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__impl_lambda203, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0optimize__impl_k688) (close _V0optimize__impl_k691))
    V_CALL_FUNC(_V0optimize__impl_k688, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__impl_k691, env)}));
 }
}
static void _V0optimize__impl_k687(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__impl_k687" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__impl_k687, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__impl_k687, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0optimize__impl_lambda203) (bruijn ##input.157 6 0))
    V_CALL_FUNC(_V0optimize__impl_lambda203, env, runtime,
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V0optimize__impl_lambda202(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__impl_lambda202" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__impl_lambda202, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0optimize__impl_k685) (close _V0optimize__impl_k687))
    V_CALL_FUNC(_V0optimize__impl_k685, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__impl_k687, env)}));
 }
}
static void _V0optimize__impl_k684(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__impl_k684" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__impl_k684, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__impl_k684, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0optimize__impl_lambda202) (bruijn ##input.157 4 0))
    V_CALL_FUNC(_V0optimize__impl_lambda202, env, runtime,
      upenv->up->up->up->vars[0]);
 }
}
static void _V0optimize__impl_lambda201(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__impl_lambda201" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__impl_lambda201, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0optimize__impl_k682) (close _V0optimize__impl_k684))
    V_CALL_FUNC(_V0optimize__impl_k682, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__impl_k684, env)}));
 }
}
static void _V0optimize__impl_k681(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__impl_k681" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__impl_k681, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__impl_k681, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0optimize__impl_lambda201) (bruijn ##input.157 2 0))
    V_CALL_FUNC(_V0optimize__impl_lambda201, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V0optimize__impl_lambda200(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__impl_lambda200" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__impl_lambda200, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0optimize__impl_k679) (close _V0optimize__impl_k681))
    V_CALL_FUNC(_V0optimize__impl_k679, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__impl_k681, env)}));
 }
}
static void _V0optimize__impl_lambda199(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize__impl_lambda199" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__impl_lambda199, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0optimize__impl_lambda200) (bruijn ##input.157 0 0))
    V_CALL_FUNC(_V0optimize__impl_lambda200, env, runtime,
      _var0);
 }
}
static void _V0optimize__impl_lambda198(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize__impl_lambda198" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0optimize__impl_lambda198, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__impl_lambda198, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0optimize__impl_lambda199) (bruijn expr 2 1))
    V_CALL_FUNC(_V0optimize__impl_lambda199, env, runtime,
      upenv->up->vars[1]);
 }
}
static void _V0optimize__impl_lambda133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0optimize__impl_lambda133" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0optimize__impl_lambda133, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__impl_lambda133, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (letrec 6 ((close _V0optimize__lambda_lambda134) (close _V0inline__let_lambda141) (close _V0optimize__let_lambda142) (close _V0optimize__letrec_lambda163) (close _V0optimize__apply_lambda172) (close _V0optimize__atom_lambda182)) ((bruijn call/cc 3 27) (bruijn ##k.1019 1 0) (close _V0optimize__impl_lambda198)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[6]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 6, 6, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__lambda_lambda134, env)});
    env->vars[1] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0inline__let_lambda141, env)});
    env->vars[2] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_lambda142, env)});
    env->vars[3] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__letrec_lambda163, env)});
    env->vars[4] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__apply_lambda172, env)});
    env->vars[5] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__atom_lambda182, env)});
    V_CALL(upenv->up->up->vars[27], runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__impl_lambda198, env)}));
    }
 }
}
static void _V0optimize_k700(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize_k700" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize_k700, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize_k700, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1476 0 0) ((bruijn ##kk.258 4 1) (bruijn ##k.1475 1 0) (bruijn expr 5 0)) ((bruijn ##k.1475 1 0) #f))
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
static void _V0optimize_k699(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize_k699" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize_k699, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize_k699, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.260 1 0)) ((bruijn equal? 7 28) (close _V0optimize_k700) '##foreign.declare (##inline ##vcore.car (bruijn ##expr.260 1 0))) ((bruijn ##k.1475 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 7-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize_k700, env)}),
      _V10foreign_Ddeclare,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize_k706(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize_k706" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize_k706, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize_k706, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.258 9 1) (bruijn ##k.1463 4 0) (##inline ##vcore.cons '##vcore.declare (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##expr.262 2 0)) (##inline ##vcore.cons (bruijn ##x.1471 0 0) '()))))
    V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VInlineCons2(runtime,
        _V10vcore_Ddeclare,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->up->vars[0]),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
 }
}
static void _V0optimize_k705(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize_k705" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize_k705, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize_k705, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.263 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.263 0 0))) ((bruijn optimize-impl 11 13) (close _V0optimize_k706) (##inline ##vcore.car (bruijn ##expr.263 0 0)) (bruijn inlining? 10 2)) ((bruijn ##k.1463 3 0) #f)) ((bruijn ##k.1463 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 11-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize_k706, env)}),
      VInlineCar2(runtime,
        _var0),
      VGetArg(upenv, 10-1, 2));
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
static void _V0optimize_k704(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize_k704" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize_k704, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize_k704, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.262 0 0)) ((close _V0optimize_k705) (##inline ##vcore.cdr (bruijn ##expr.262 0 0))) ((bruijn ##k.1463 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V0optimize_k705, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize_k703(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize_k703" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize_k703, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize_k703, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1464 0 0) ((close _V0optimize_k704) (##inline ##vcore.cdr (bruijn ##expr.261 2 0))) ((bruijn ##k.1463 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0optimize_k704, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize_k702(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize_k702" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize_k702, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize_k702, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.261 1 0)) ((bruijn equal? 9 28) (close _V0optimize_k703) '##vcore.declare (##inline ##vcore.car (bruijn ##expr.261 1 0))) ((bruijn ##k.1463 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 9-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize_k703, env)}),
      _V10vcore_Ddeclare,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0optimize_k708(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize_k708" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize_k708, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize_k708, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.258 6 1) (bruijn ##k.1458 6 0) (bruijn ##x.1461 0 0))
    V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0);
 }
}
static void _V0optimize_k707(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize_k707" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize_k707, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize_k707, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn optimize-impl 8 13) (close _V0optimize_k708) (bruijn expr 6 0) (bruijn inlining? 7 2))
    V_CALL(VGetArg(upenv, 8-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize_k708, env)}),
      VGetArg(upenv, 6-1, 0),
      VGetArg(upenv, 7-1, 2));
 }
}
static void _V0optimize_lambda211(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize_lambda211" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize_lambda211, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0optimize_k702) (close _V0optimize_k707))
    V_CALL_FUNC(_V0optimize_k702, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize_k707, env)}));
 }
}
static void _V0optimize_k701(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize_k701" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize_k701, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize_k701, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0optimize_lambda211) (bruijn ##input.259 2 0))
    V_CALL_FUNC(_V0optimize_lambda211, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V0optimize_lambda210(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize_lambda210" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize_lambda210, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0optimize_k699) (close _V0optimize_k701))
    V_CALL_FUNC(_V0optimize_k699, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize_k701, env)}));
 }
}
static void _V0optimize_lambda209(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize_lambda209" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize_lambda209, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0optimize_lambda210) (bruijn ##input.259 0 0))
    V_CALL_FUNC(_V0optimize_lambda210, env, runtime,
      _var0);
 }
}
static void _V0optimize_lambda208(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0optimize_lambda208" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0optimize_lambda208, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize_lambda208, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0optimize_lambda209) (bruijn expr 1 0))
    V_CALL_FUNC(_V0optimize_lambda209, env, runtime,
      upenv->vars[0]);
 }
}
static void _V0optimize_lambda207(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0optimize_lambda207" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize_lambda207, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 3 27) (bruijn ##k.1457 1 0) (close _V0optimize_lambda208))
    V_CALL(upenv->up->up->vars[27], runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize_lambda208, env)}));
 }
}
static void _V0optimize_lambda206(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0optimize_lambda206" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0optimize_lambda206, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize_lambda206, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0optimize_lambda207) (bruijn expr 0 1))
    V_CALL_FUNC(_V0optimize_lambda207, env, runtime,
      _var1);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17, VWORD _var18, VWORD _var19, VWORD _var20, VWORD _var21, VWORD _var22, VWORD _var23, VWORD _var24, VWORD _var25, VWORD _var26, VWORD _var27, VWORD _var28) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0cps_V20_lambda2" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda2, runtime, upenv, 29, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7, _var8, _var9, _var10, _var11, _var12, _var13, _var14, _var15, _var16, _var17, _var18, _var19, _var20, _var21, _var22, _var23, _var24, _var25, _var26, _var27, _var28) {
  struct { VEnv env; VWORD argv[29]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 29, 29, upenv);
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
  // (letrec 15 ((close _V0to__cps_lambda3) (close _V0memtail_lambda46) (close _V0annotate__lambdas_lambda47) (close _V0alpha__convert_lambda48) (close _V0deannotate__lambdas_lambda49) (close _V0ref__count__lambda_lambda50) (close _V0ref__count_lambda51) (close _V0pure__in__lambda_Q_lambda76) (close _V0pure__in_Q_lambda77) (close _V0substitute__lambda_lambda104) (close _V0substitute_lambda105) (close _V0special__apply_Q_lambda130) (close _V0taillength_lambda131) (close _V0optimize__impl_lambda133) (close _V0optimize_lambda206)) ((bruijn ##k.265 38 0) (##inline ##vcore.cons (##inline ##vcore.cons 'to-cps (bruijn to-cps 0 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'optimize (bruijn optimize 0 14)) (##inline ##vcore.cons (##inline ##vcore.cons 'alpha-convert (bruijn alpha-convert 0 3)) (##inline ##vcore.cons (##inline ##vcore.cons 'annotate-lambdas (bruijn annotate-lambdas 0 2)) (##inline ##vcore.cons (##inline ##vcore.cons 'deannotate-lambdas (bruijn deannotate-lambdas 0 4)) '())))))))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[15]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 15, 15, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__cps_lambda3, env)});
    env->vars[1] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0memtail_lambda46, env)});
    env->vars[2] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0annotate__lambdas_lambda47, env)});
    env->vars[3] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0alpha__convert_lambda48, env)});
    env->vars[4] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0deannotate__lambdas_lambda49, env)});
    env->vars[5] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0ref__count__lambda_lambda50, env)});
    env->vars[6] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0ref__count_lambda51, env)});
    env->vars[7] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0pure__in__lambda_Q_lambda76, env)});
    env->vars[8] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0pure__in_Q_lambda77, env)});
    env->vars[9] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0substitute__lambda_lambda104, env)});
    env->vars[10] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0substitute_lambda105, env)});
    env->vars[11] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0special__apply_Q_lambda130, env)});
    env->vars[12] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0taillength_lambda131, env)});
    env->vars[13] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__impl_lambda133, env)});
    env->vars[14] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize_lambda206, env)});
    V_CALL(VGetArg(upenv, 38-1, 0), runtime,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0to__cps,
        env->vars[0]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0optimize,
        env->vars[14]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0alpha__convert,
        env->vars[3]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0annotate__lambdas,
        env->vars[2]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0deannotate__lambdas,
        env->vars[4]),
        VNULL))))));
    }
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
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda2) (bruijn ##x.266 28 0) (bruijn ##x.267 27 0) (bruijn ##x.268 26 0) (bruijn ##x.269 25 0) (bruijn ##x.270 24 0) (bruijn ##x.271 23 0) (bruijn ##x.272 22 0) (bruijn ##x.273 21 0) (bruijn ##x.274 20 0) (bruijn ##x.275 19 0) (bruijn ##x.276 18 0) (bruijn ##x.277 17 0) (bruijn ##x.278 16 0) (bruijn ##x.279 15 0) (bruijn ##x.280 14 0) (bruijn ##x.281 13 0) (bruijn ##x.282 12 0) (bruijn ##x.283 11 0) (bruijn ##x.284 10 0) (bruijn ##x.285 9 0) (bruijn ##x.286 8 0) (bruijn ##x.287 7 0) (bruijn ##x.288 6 0) (bruijn ##x.289 5 0) (bruijn ##x.290 4 0) (bruijn ##x.291 3 0) (bruijn ##x.292 2 0) (bruijn ##x.293 1 0) (bruijn ##x.294 0 0))
    V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda2, env, runtime,
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
      _var0);
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
  // ((bruijn ##vcore.import 28 0) (close _V0vanity_V0compiler_V0cps_V20_k36) 'equal?)
    V_CALL(VGetArg(upenv, 28-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k36, env)}),
      _V0equal_Q);
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
  // ((bruijn ##vcore.import 27 0) (close _V0vanity_V0compiler_V0cps_V20_k35) 'call/cc)
    V_CALL(VGetArg(upenv, 27-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k35, env)}),
      _V0call_Wcc);
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
  // ((bruijn ##vcore.import 26 0) (close _V0vanity_V0compiler_V0cps_V20_k34) 'fold)
    V_CALL(VGetArg(upenv, 26-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k34, env)}),
      _V0fold);
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
  // ((bruijn ##vcore.import 25 0) (close _V0vanity_V0compiler_V0cps_V20_k33) '+)
    V_CALL(VGetArg(upenv, 25-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k33, env)}),
      _V0_P);
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
  // ((bruijn ##vcore.import 24 0) (close _V0vanity_V0compiler_V0cps_V20_k32) 'null?)
    V_CALL(VGetArg(upenv, 24-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k32, env)}),
      _V0null_Q);
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
  // ((bruijn ##vcore.import 23 0) (close _V0vanity_V0compiler_V0cps_V20_k31) 'cdr)
    V_CALL(VGetArg(upenv, 23-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k31, env)}),
      _V0cdr);
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
  // ((bruijn ##vcore.import 22 0) (close _V0vanity_V0compiler_V0cps_V20_k30) 'car)
    V_CALL(VGetArg(upenv, 22-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k30, env)}),
      _V0car);
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
  // ((bruijn ##vcore.import 21 0) (close _V0vanity_V0compiler_V0cps_V20_k29) 'memv)
    V_CALL(VGetArg(upenv, 21-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k29, env)}),
      _V0memv);
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
  // ((bruijn ##vcore.import 20 0) (close _V0vanity_V0compiler_V0cps_V20_k28) 'pair?)
    V_CALL(VGetArg(upenv, 20-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k28, env)}),
      _V0pair_Q);
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
  // ((bruijn ##vcore.import 19 0) (close _V0vanity_V0compiler_V0cps_V20_k27) 'atom?)
    V_CALL(VGetArg(upenv, 19-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k27, env)}),
      _V0atom_Q);
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
  // ((bruijn ##vcore.import 18 0) (close _V0vanity_V0compiler_V0cps_V20_k26) 'eqv?)
    V_CALL(VGetArg(upenv, 18-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k26, env)}),
      _V0eqv_Q);
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
  // ((bruijn ##vcore.import 17 0) (close _V0vanity_V0compiler_V0cps_V20_k25) '=)
    V_CALL(VGetArg(upenv, 17-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k25, env)}),
      _V0_E);
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
  // ((bruijn ##vcore.import 16 0) (close _V0vanity_V0compiler_V0cps_V20_k24) '<=)
    V_CALL(VGetArg(upenv, 16-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k24, env)}),
      _V0_L_E);
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
  // ((bruijn ##vcore.import 15 0) (close _V0vanity_V0compiler_V0cps_V20_k23) 'length)
    V_CALL(VGetArg(upenv, 15-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k23, env)}),
      _V0length);
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
  // ((bruijn ##vcore.import 14 0) (close _V0vanity_V0compiler_V0cps_V20_k22) 'not)
    V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k22, env)}),
      _V0not);
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
  // ((bruijn ##vcore.import 13 0) (close _V0vanity_V0compiler_V0cps_V20_k21) 'list)
    V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k21, env)}),
      _V0list);
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
  // ((bruijn ##vcore.import 12 0) (close _V0vanity_V0compiler_V0cps_V20_k20) 'error)
    V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k20, env)}),
      _V0error);
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
  // ((bruijn ##vcore.import 11 0) (close _V0vanity_V0compiler_V0cps_V20_k19) 'symbol?)
    V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k19, env)}),
      _V0symbol_Q);
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
  // ((bruijn ##vcore.import 10 0) (close _V0vanity_V0compiler_V0cps_V20_k18) 'lookup-inline-name)
    V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k18, env)}),
      _V0lookup__inline__name);
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
  // ((bruijn ##vcore.import 9 0) (close _V0vanity_V0compiler_V0cps_V20_k17) 'cons)
    V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k17, env)}),
      _V0cons);
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
  // ((bruijn ##vcore.import 8 0) (close _V0vanity_V0compiler_V0cps_V20_k16) 'compiler-error)
    V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k16, env)}),
      _V0compiler__error);
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
  // ((bruijn ##vcore.import 7 0) (close _V0vanity_V0compiler_V0cps_V20_k15) 'map)
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k15, env)}),
      _V0map);
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
  // ((bruijn ##vcore.import 6 0) (close _V0vanity_V0compiler_V0cps_V20_k14) 'call-with-values)
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k14, env)}),
      _V0call__with__values);
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
  // ((bruijn ##vcore.import 5 0) (close _V0vanity_V0compiler_V0cps_V20_k13) 'reverse)
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k13, env)}),
      _V0reverse);
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
  // ((bruijn ##vcore.import 4 0) (close _V0vanity_V0compiler_V0cps_V20_k12) 'apply)
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k12, env)}),
      _V0apply);
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
  // ((bruijn ##vcore.import 3 0) (close _V0vanity_V0compiler_V0cps_V20_k11) 'caddr)
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k11, env)}),
      _V0caddr);
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
  // ((bruijn ##vcore.import 2 0) (close _V0vanity_V0compiler_V0cps_V20_k10) 'cadr)
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k10, env)}),
      _V0cadr);
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
  // ((bruijn ##vcore.import 1 0) (close _V0vanity_V0compiler_V0cps_V20_k9) 'eq?)
    V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k9, env)}),
      _V0eq_Q);
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
  // ((bruijn ##vcore.import 0 0) (close _V0vanity_V0compiler_V0cps_V20_k8) 'gensym)
    V_CALL(_var0, runtime,
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
  // (##vcore.make-import (close _V0vanity_V0compiler_V0cps_V20_k7) (##string ##string.1505) (bruijn ##x.1487 5 0) (bruijn ##x.1488 4 0) (bruijn ##x.1489 3 0) (bruijn ##x.1490 2 0) (bruijn ##x.1491 1 0) (bruijn ##x.1492 0 0))
    V_CALL_FUNC(VMakeImport2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k7, env)}),
      VEncodePointer(&_V10string_D1505.sym, VPOINTER_OTHER),
      VGetArg(upenv, 5-1, 0),
      upenv->up->up->up->vars[0],
      upenv->up->up->vars[0],
      upenv->up->vars[0],
      upenv->vars[0],
      _var0);
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0cps_V20_k6) (##string ##string.1506))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k6, env)}),
      VEncodePointer(&_V10string_D1506.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0cps_V20_k5) (##string ##string.1507))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k5, env)}),
      VEncodePointer(&_V10string_D1507.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0cps_V20_k4) (##string ##string.1508))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k4, env)}),
      VEncodePointer(&_V10string_D1508.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0cps_V20_k3) (##string ##string.1509))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k3, env)}),
      VEncodePointer(&_V10string_D1509.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0cps_V20_k2) (##string ##string.1510))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k2, env)}),
      VEncodePointer(&_V10string_D1510.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0cps_V20_k1) (##string ##string.1511))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k1, env)}),
      VEncodePointer(&_V10string_D1511.sym, VPOINTER_OTHER));
 }
}
VFunc _V0vanity_V0compiler_V0cps_V20 = (VFunc)_V0vanity_V0compiler_V0cps_V20_lambda1;
