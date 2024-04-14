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
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D362 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D361 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D360 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0match_V20" };
VWEAK VWORD _V0car;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0car = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "car" };
VWEAK VWORD _V0compiler__error;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0compiler__error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "compiler-error" };
VWEAK VWORD _V0pair_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0pair_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "pair\?" };
VWEAK VWORD _V0cadar;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0cadar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "cadar" };
VWEAK VWORD _V0cddar;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0cddar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "cddar" };
VWEAK VWORD _V0not;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0not = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "not" };
VWEAK VWORD _V0atom_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0atom_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "atom\?" };
VWEAK VWORD _V0string_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0string_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "string\?" };
VWEAK VWORD _V0vector_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0vector_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "vector\?" };
VWEAK VWORD _V0symbol_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0symbol_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "symbol\?" };
VWEAK VWORD _V0map;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "map" };
VWEAK VWORD _V0cadr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cadr" };
VWEAK VWORD _V0cddr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cddr" };
VWEAK VWORD _V0null_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0null_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "null\?" };
VWEAK VWORD _V0cons;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cons = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cons" };
VWEAK VWORD _V0cdar;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cdar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cdar" };
VWEAK VWORD _V0list;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "list" };
VWEAK VWORD _V0caar;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0caar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "caar" };
VWEAK VWORD _V0cdr;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0cdr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "cdr" };
VWEAK VWORD _V0gensym;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0gensym = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "gensym" };
VWEAK VWORD _V0transform__match;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0transform__match = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "transform-match" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D359 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "input" };
VWEAK VWORD _V0else;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0else = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "else" };
VWEAK VWORD _V0begin;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0begin = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "begin" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D358 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "match statement exhausted" };
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "error" };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D357 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "unknown form in match pattern" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D356 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "malformed quote" };
VWEAK VWORD _V10vcore_Deq_Q;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10vcore_Deq_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##vcore.eq\?" };
VWEAK VWORD _V10vcore_Dblob_E_Q;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V10vcore_Dblob_E_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "##vcore.blob=\?" };
VWEAK VWORD _V10vcore_Dstring_Q;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Dstring_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.string\?" };
VWEAK VWORD _V0and;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0and = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "and" };
VWEAK VWORD _V10vcore_Dnull_Q;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10vcore_Dnull_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##vcore.null\?" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D355 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "kk" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D354 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "expr" };
VWEAK VWORD _V10vcore_Dcar;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10vcore_Dcar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##vcore.car" };
VWEAK VWORD _V10vcore_Dcons;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V10vcore_Dcons = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "##vcore.cons" };
VWEAK VWORD _V10vcore_Dcdr;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10vcore_Dcdr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##vcore.cdr" };
VWEAK VWORD _V0reverse;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0reverse = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "reverse" };
VWEAK VWORD _V0tail__expr;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0tail__expr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "tail-expr" };
VWEAK VWORD _V10vcore_Dpair_Q;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10vcore_Dpair_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##vcore.pair\?" };
VWEAK VWORD _V10vcore_Dnot;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10vcore_Dnot = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##vcore.not" };
VWEAK VWORD _V0if;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0if = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "if" };
VWEAK VWORD _V0loop;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0loop = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "loop" };
VWEAK VWORD _V0let;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0let = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "let" };
VWEAK VWORD _V0call_Wcc;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0call_Wcc = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "call/cc" };
VWEAK VWORD _V0lambda;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "lambda" };
VWEAK VWORD _V0call__with__values;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0call__with__values = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "call-with-values" };
VWEAK VWORD _V0_U;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_U = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "_" };
VWEAK VWORD _V0_D_D_D;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0_D_D_D = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "..." };
VWEAK VWORD _V0quote;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0quote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "quote" };
static struct { VBlob sym; char bytes[39]; } _V10_Dstring_D353 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 39 }, "vectors in matches not implemented yet" };
static __attribute__((constructor)) void VDllMain1() {
  _V0car = VEncodePointer(VLookupConstant("_V0car", &_VW_V0car), VPOINTER_OTHER);
  _V0compiler__error = VEncodePointer(VLookupConstant("_V0compiler__error", &_VW_V0compiler__error), VPOINTER_OTHER);
  _V0pair_Q = VEncodePointer(VLookupConstant("_V0pair_Q", &_VW_V0pair_Q), VPOINTER_OTHER);
  _V0cadar = VEncodePointer(VLookupConstant("_V0cadar", &_VW_V0cadar), VPOINTER_OTHER);
  _V0cddar = VEncodePointer(VLookupConstant("_V0cddar", &_VW_V0cddar), VPOINTER_OTHER);
  _V0not = VEncodePointer(VLookupConstant("_V0not", &_VW_V0not), VPOINTER_OTHER);
  _V0atom_Q = VEncodePointer(VLookupConstant("_V0atom_Q", &_VW_V0atom_Q), VPOINTER_OTHER);
  _V0string_Q = VEncodePointer(VLookupConstant("_V0string_Q", &_VW_V0string_Q), VPOINTER_OTHER);
  _V0vector_Q = VEncodePointer(VLookupConstant("_V0vector_Q", &_VW_V0vector_Q), VPOINTER_OTHER);
  _V0symbol_Q = VEncodePointer(VLookupConstant("_V0symbol_Q", &_VW_V0symbol_Q), VPOINTER_OTHER);
  _V0map = VEncodePointer(VLookupConstant("_V0map", &_VW_V0map), VPOINTER_OTHER);
  _V0cadr = VEncodePointer(VLookupConstant("_V0cadr", &_VW_V0cadr), VPOINTER_OTHER);
  _V0cddr = VEncodePointer(VLookupConstant("_V0cddr", &_VW_V0cddr), VPOINTER_OTHER);
  _V0null_Q = VEncodePointer(VLookupConstant("_V0null_Q", &_VW_V0null_Q), VPOINTER_OTHER);
  _V0cons = VEncodePointer(VLookupConstant("_V0cons", &_VW_V0cons), VPOINTER_OTHER);
  _V0cdar = VEncodePointer(VLookupConstant("_V0cdar", &_VW_V0cdar), VPOINTER_OTHER);
  _V0list = VEncodePointer(VLookupConstant("_V0list", &_VW_V0list), VPOINTER_OTHER);
  _V0caar = VEncodePointer(VLookupConstant("_V0caar", &_VW_V0caar), VPOINTER_OTHER);
  _V0cdr = VEncodePointer(VLookupConstant("_V0cdr", &_VW_V0cdr), VPOINTER_OTHER);
  _V0gensym = VEncodePointer(VLookupConstant("_V0gensym", &_VW_V0gensym), VPOINTER_OTHER);
  _V0transform__match = VEncodePointer(VLookupConstant("_V0transform__match", &_VW_V0transform__match), VPOINTER_OTHER);
  _V0else = VEncodePointer(VLookupConstant("_V0else", &_VW_V0else), VPOINTER_OTHER);
  _V0begin = VEncodePointer(VLookupConstant("_V0begin", &_VW_V0begin), VPOINTER_OTHER);
  _V0error = VEncodePointer(VLookupConstant("_V0error", &_VW_V0error), VPOINTER_OTHER);
  _V0equal_Q = VEncodePointer(VLookupConstant("_V0equal_Q", &_VW_V0equal_Q), VPOINTER_OTHER);
  _V10vcore_Deq_Q = VEncodePointer(VLookupConstant("_V10vcore_Deq_Q", &_VW_V10vcore_Deq_Q), VPOINTER_OTHER);
  _V10vcore_Dblob_E_Q = VEncodePointer(VLookupConstant("_V10vcore_Dblob_E_Q", &_VW_V10vcore_Dblob_E_Q), VPOINTER_OTHER);
  _V10vcore_Dstring_Q = VEncodePointer(VLookupConstant("_V10vcore_Dstring_Q", &_VW_V10vcore_Dstring_Q), VPOINTER_OTHER);
  _V0and = VEncodePointer(VLookupConstant("_V0and", &_VW_V0and), VPOINTER_OTHER);
  _V10vcore_Dnull_Q = VEncodePointer(VLookupConstant("_V10vcore_Dnull_Q", &_VW_V10vcore_Dnull_Q), VPOINTER_OTHER);
  _V10vcore_Dcar = VEncodePointer(VLookupConstant("_V10vcore_Dcar", &_VW_V10vcore_Dcar), VPOINTER_OTHER);
  _V10vcore_Dcons = VEncodePointer(VLookupConstant("_V10vcore_Dcons", &_VW_V10vcore_Dcons), VPOINTER_OTHER);
  _V10vcore_Dcdr = VEncodePointer(VLookupConstant("_V10vcore_Dcdr", &_VW_V10vcore_Dcdr), VPOINTER_OTHER);
  _V0reverse = VEncodePointer(VLookupConstant("_V0reverse", &_VW_V0reverse), VPOINTER_OTHER);
  _V0tail__expr = VEncodePointer(VLookupConstant("_V0tail__expr", &_VW_V0tail__expr), VPOINTER_OTHER);
  _V10vcore_Dpair_Q = VEncodePointer(VLookupConstant("_V10vcore_Dpair_Q", &_VW_V10vcore_Dpair_Q), VPOINTER_OTHER);
  _V10vcore_Dnot = VEncodePointer(VLookupConstant("_V10vcore_Dnot", &_VW_V10vcore_Dnot), VPOINTER_OTHER);
  _V0if = VEncodePointer(VLookupConstant("_V0if", &_VW_V0if), VPOINTER_OTHER);
  _V0loop = VEncodePointer(VLookupConstant("_V0loop", &_VW_V0loop), VPOINTER_OTHER);
  _V0let = VEncodePointer(VLookupConstant("_V0let", &_VW_V0let), VPOINTER_OTHER);
  _V0call_Wcc = VEncodePointer(VLookupConstant("_V0call_Wcc", &_VW_V0call_Wcc), VPOINTER_OTHER);
  _V0lambda = VEncodePointer(VLookupConstant("_V0lambda", &_VW_V0lambda), VPOINTER_OTHER);
  _V0call__with__values = VEncodePointer(VLookupConstant("_V0call__with__values", &_VW_V0call__with__values), VPOINTER_OTHER);
  _V0_U = VEncodePointer(VLookupConstant("_V0_U", &_VW_V0_U), VPOINTER_OTHER);
  _V0_D_D_D = VEncodePointer(VLookupConstant("_V0_D_D_D", &_VW_V0_D_D_D), VPOINTER_OTHER);
  _V0quote = VEncodePointer(VLookupConstant("_V0quote", &_VW_V0quote), VPOINTER_OTHER);
}
static void _V10_Dgather__variables_D21_k27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgather__variables_D21_k27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D21_k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__variables_D21_k27, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.gather-variables.21 5 0) (bruijn ##.k.76 4 0) (bruijn ##.x.79 0 0) (bruijn ##.eqv?.24 4 2))
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      upenv->up->up->up->vars[0],
      _var0,
      upenv->up->up->up->vars[2]);
 }
}
static void _V10_Dgather__variables_D21_k30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgather__variables_D21_k30" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D21_k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__variables_D21_k30, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.gather-variables.21 7 0) (bruijn ##.k.76 6 0) (bruijn ##.x.81 0 0) (bruijn ##.eqv?.24 6 2))
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0,
      VGetArg(upenv, 6-1, 2));
 }
}
static void _V10_Dgather__variables_D21_k35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgather__variables_D21_k35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D21_k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__variables_D21_k35, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.cons.15 12 14) (bruijn ##.k.76 10 0) (bruijn ##.x.83 2 0) (bruijn ##.x.84 0 0))
    V_CALL(VGetArg(upenv, 12-1, 14), runtime,
      VGetArg(upenv, 10-1, 0),
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Dgather__variables_D21_k34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgather__variables_D21_k34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D21_k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__variables_D21_k34, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.gather-variables.21 10 0) (close _V10_Dgather__variables_D21_k35) (bruijn ##.x.85 0 0) (bruijn ##.eqv?.24 9 2))
    V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D21_k35, env)}),
      _var0,
      VGetArg(upenv, 9-1, 2));
 }
}
static void _V10_Dgather__variables_D21_k33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgather__variables_D21_k33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D21_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__variables_D21_k33, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.19 10 18) (close _V10_Dgather__variables_D21_k34) (bruijn ##.pattern.23 8 1))
    V_CALL(VGetArg(upenv, 10-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D21_k34, env)}),
      VGetArg(upenv, 8-1, 1));
 }
}
static void _V10_Dgather__variables_D21_k38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgather__variables_D21_k38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D21_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__variables_D21_k38, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.compiler-error.2 12 1) (bruijn ##.k.76 10 0) (##string ##.string.353) (bruijn ##.x.87 0 0))
    V_CALL(VGetArg(upenv, 12-1, 1), runtime,
      VGetArg(upenv, 10-1, 0),
      VEncodePointer(&_V10_Dstring_D353.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V10_Dgather__variables_D21_k41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgather__variables_D21_k41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D21_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__variables_D21_k41, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.gather-variables.21 13 0) (bruijn ##.k.76 12 0) (bruijn ##.x.89 0 0) (bruijn ##.eqv?.24 12 2))
    V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VGetArg(upenv, 12-1, 0),
      _var0,
      VGetArg(upenv, 12-1, 2));
 }
}
static void _V10_Dgather__variables_D21_k45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgather__variables_D21_k45" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D21_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__variables_D21_k45, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.eqv?.24 15 2) (bruijn ##.k.98 1 0) (bruijn ##.x.99 0 0) 'quote)
    V_CALL(VGetArg(upenv, 15-1, 2), runtime,
      upenv->vars[0],
      _var0,
      _V0quote);
 }
}
static void _V10_Dgather__variables_D21_k44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgather__variables_D21_k44" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D21_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__variables_D21_k44, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.97 1 0) ((bruijn ##.caar.18 16 17) (close _V10_Dgather__variables_D21_k45) (bruijn ##.pattern.23 14 1)) ((bruijn ##.k.98 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 16-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D21_k45, env)}),
      VGetArg(upenv, 14-1, 1));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dgather__variables_D21_k47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgather__variables_D21_k47" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D21_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__variables_D21_k47, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.gather-variables.21 16 0) (bruijn ##.k.76 15 0) (bruijn ##.x.91 0 0) (bruijn ##.eqv?.24 15 2))
    V_CALL(VGetArg(upenv, 16-1, 0), runtime,
      VGetArg(upenv, 15-1, 0),
      _var0,
      VGetArg(upenv, 15-1, 2));
 }
}
static void _V10_Dgather__variables_D21_k50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgather__variables_D21_k50" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D21_k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__variables_D21_k50, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.gather-variables.21 18 0) (bruijn ##.k.76 17 0) (##inline ##vcore.cons (bruijn ##.x.93 2 0) (##inline ##vcore.cons (bruijn ##.x.95 1 0) (bruijn ##.x.96 0 0))) (bruijn ##.eqv?.24 17 2))
    V_CALL(VGetArg(upenv, 18-1, 0), runtime,
      VGetArg(upenv, 17-1, 0),
      VInlineCons2(runtime,
        upenv->up->vars[0],
        VInlineCons2(runtime,
        upenv->vars[0],
        _var0)),
      VGetArg(upenv, 17-1, 2));
 }
}
static void _V10_Dgather__variables_D21_k49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgather__variables_D21_k49" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D21_k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__variables_D21_k49, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.19 18 18) (close _V10_Dgather__variables_D21_k50) (bruijn ##.pattern.23 16 1))
    V_CALL(VGetArg(upenv, 18-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D21_k50, env)}),
      VGetArg(upenv, 16-1, 1));
 }
}
static void _V10_Dgather__variables_D21_k48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgather__variables_D21_k48" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D21_k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__variables_D21_k48, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdar.16 17 15) (close _V10_Dgather__variables_D21_k49) (bruijn ##.pattern.23 15 1))
    V_CALL(VGetArg(upenv, 17-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D21_k49, env)}),
      VGetArg(upenv, 15-1, 1));
 }
}
static void _V10_Dgather__variables_D21_k46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgather__variables_D21_k46" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D21_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__variables_D21_k46, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.90 0 0) ((bruijn ##.cdr.19 16 18) (close _V10_Dgather__variables_D21_k47) (bruijn ##.pattern.23 14 1)) ((bruijn ##.caar.18 16 17) (close _V10_Dgather__variables_D21_k48) (bruijn ##.pattern.23 14 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 16-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D21_k47, env)}),
      VGetArg(upenv, 14-1, 1));
} else {
    V_CALL(VGetArg(upenv, 16-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D21_k48, env)}),
      VGetArg(upenv, 14-1, 1));
}
 }
}
static void _V10_Dgather__variables_D21_k43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgather__variables_D21_k43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D21_k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__variables_D21_k43, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dgather__variables_D21_k44) (close _V10_Dgather__variables_D21_k46))
    V_CALL_FUNC(_V10_Dgather__variables_D21_k44, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D21_k46, env)}));
 }
}
static void _V10_Dgather__variables_D21_k42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgather__variables_D21_k42" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D21_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__variables_D21_k42, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.pair?.3 14 2) (close _V10_Dgather__variables_D21_k43) (bruijn ##.x.100 0 0))
    V_CALL(VGetArg(upenv, 14-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D21_k43, env)}),
      _var0);
 }
}
static void _V10_Dgather__variables_D21_k40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgather__variables_D21_k40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D21_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__variables_D21_k40, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.88 0 0) ((bruijn ##.cdr.19 13 18) (close _V10_Dgather__variables_D21_k41) (bruijn ##.pattern.23 11 1)) ((bruijn ##.car.1 13 0) (close _V10_Dgather__variables_D21_k42) (bruijn ##.pattern.23 11 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 13-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D21_k41, env)}),
      VGetArg(upenv, 11-1, 1));
} else {
    V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D21_k42, env)}),
      VGetArg(upenv, 11-1, 1));
}
 }
}
static void _V10_Dgather__variables_D21_k39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgather__variables_D21_k39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D21_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__variables_D21_k39, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.atom?.7 12 6) (close _V10_Dgather__variables_D21_k40) (bruijn ##.x.101 0 0))
    V_CALL(VGetArg(upenv, 12-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D21_k40, env)}),
      _var0);
 }
}
static void _V10_Dgather__variables_D21_k37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgather__variables_D21_k37" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D21_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__variables_D21_k37, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.86 0 0) ((bruijn ##.car.1 11 0) (close _V10_Dgather__variables_D21_k38) (bruijn ##.pattern.23 9 1)) ((bruijn ##.car.1 11 0) (close _V10_Dgather__variables_D21_k39) (bruijn ##.pattern.23 9 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D21_k38, env)}),
      VGetArg(upenv, 9-1, 1));
} else {
    V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D21_k39, env)}),
      VGetArg(upenv, 9-1, 1));
}
 }
}
static void _V10_Dgather__variables_D21_k36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgather__variables_D21_k36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D21_k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__variables_D21_k36, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.vector?.9 10 8) (close _V10_Dgather__variables_D21_k37) (bruijn ##.x.102 0 0))
    V_CALL(VGetArg(upenv, 10-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D21_k37, env)}),
      _var0);
 }
}
static void _V10_Dgather__variables_D21_k32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgather__variables_D21_k32" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D21_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__variables_D21_k32, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.82 0 0) ((bruijn ##.car.1 9 0) (close _V10_Dgather__variables_D21_k33) (bruijn ##.pattern.23 7 1)) ((bruijn ##.car.1 9 0) (close _V10_Dgather__variables_D21_k36) (bruijn ##.pattern.23 7 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D21_k33, env)}),
      VGetArg(upenv, 7-1, 1));
} else {
    V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D21_k36, env)}),
      VGetArg(upenv, 7-1, 1));
}
 }
}
static void _V10_Dgather__variables_D21_k31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgather__variables_D21_k31" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D21_k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__variables_D21_k31, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.symbol?.10 8 9) (close _V10_Dgather__variables_D21_k32) (bruijn ##.x.103 0 0))
    V_CALL(VGetArg(upenv, 8-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D21_k32, env)}),
      _var0);
 }
}
static void _V10_Dgather__variables_D21_k29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgather__variables_D21_k29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D21_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__variables_D21_k29, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.80 0 0) ((bruijn ##.cdr.19 7 18) (close _V10_Dgather__variables_D21_k30) (bruijn ##.pattern.23 5 1)) ((bruijn ##.car.1 7 0) (close _V10_Dgather__variables_D21_k31) (bruijn ##.pattern.23 5 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 7-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D21_k30, env)}),
      VGetArg(upenv, 5-1, 1));
} else {
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D21_k31, env)}),
      VGetArg(upenv, 5-1, 1));
}
 }
}
static void _V10_Dgather__variables_D21_k28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgather__variables_D21_k28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D21_k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__variables_D21_k28, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.eqv?.24 4 2) (close _V10_Dgather__variables_D21_k29) (bruijn ##.x.104 0 0) '...)
    V_CALL(upenv->up->up->up->vars[2], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D21_k29, env)}),
      _var0,
      _V0_D_D_D);
 }
}
static void _V10_Dgather__variables_D21_k26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgather__variables_D21_k26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D21_k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__variables_D21_k26, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.78 0 0) ((bruijn ##.cdr.19 5 18) (close _V10_Dgather__variables_D21_k27) (bruijn ##.pattern.23 3 1)) ((bruijn ##.car.1 5 0) (close _V10_Dgather__variables_D21_k28) (bruijn ##.pattern.23 3 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 5-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D21_k27, env)}),
      upenv->up->up->vars[1]);
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D21_k28, env)}),
      upenv->up->up->vars[1]);
}
 }
}
static void _V10_Dgather__variables_D21_k25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgather__variables_D21_k25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D21_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__variables_D21_k25, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.eqv?.24 2 2) (close _V10_Dgather__variables_D21_k26) (bruijn ##.x.105 0 0) '_)
    V_CALL(upenv->up->vars[2], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D21_k26, env)}),
      _var0,
      _V0_U);
 }
}
static void _V10_Dgather__variables_D21_k24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgather__variables_D21_k24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D21_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__variables_D21_k24, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.77 0 0) ((bruijn ##.k.76 1 0) '()) ((bruijn ##.car.1 3 0) (close _V10_Dgather__variables_D21_k25) (bruijn ##.pattern.23 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VNULL);
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D21_k25, env)}),
      upenv->vars[1]);
}
 }
}
static void _V10_Dgather__variables_D21_lambda3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dgather__variables_D21_lambda3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D21_lambda3, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__variables_D21_lambda3, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.null?.14 2 13) (close _V10_Dgather__variables_D21_k24) (bruijn ##.pattern.23 0 1))
    V_CALL(upenv->up->vars[13], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D21_k24, env)}),
      _var1);
 }
}
static void _V10_Dmatch__ellipses_D27_k71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__ellipses_D27_k71" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D27_k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__ellipses_D27_k71, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.107 21 0) (##inline ##vcore.cons 'call-with-values (##inline ##vcore.cons (##inline ##vcore.cons 'lambda (##inline ##vcore.cons '() (##inline ##vcore.cons (##inline ##vcore.cons 'call/cc (##inline ##vcore.cons (##inline ##vcore.cons 'lambda (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.k.37 14 0) '()) (##inline ##vcore.cons (##inline ##vcore.cons 'let (##inline ##vcore.cons 'loop (##inline ##vcore.cons (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.expr.39 12 0) (##inline ##vcore.cons (bruijn ##.x.183 11 0) '())) (bruijn ##.x.177 10 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'if (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.not (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.pair? (##inline ##vcore.cons (bruijn ##.expr.39 12 0) '())) '())) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.k.37 14 0) (##inline ##vcore.cons (bruijn ##.expr.39 12 0) (bruijn ##.x.170 9 0))) '()))) (##inline ##vcore.cons (##inline ##vcore.cons 'call-with-values (##inline ##vcore.cons (##inline ##vcore.cons 'lambda (##inline ##vcore.cons '() (##inline ##vcore.cons (##inline ##vcore.cons 'call/cc (##inline ##vcore.cons (##inline ##vcore.cons 'lambda (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.k2.38 13 0) '()) (##inline ##vcore.cons (bruijn ##.x.146 5 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.k.37 14 0) (##inline ##vcore.cons (bruijn ##.expr.39 12 0) (bruijn ##.x.150 4 0))) '())))) '())) '()))) (##inline ##vcore.cons 'loop '()))) '()))))) '()))) '())) '()))) (##inline ##vcore.cons (##inline ##vcore.cons 'lambda (##inline ##vcore.cons (##inline ##vcore.cons 'tail-expr (bruijn ##.variables.35 16 0)) (##inline ##vcore.cons (bruijn ##.x.115 0 0) '()))) '()))))
    V_CALL(VGetArg(upenv, 21-1, 0), runtime,
      VInlineCons2(runtime,
        _V0call__with__values,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        VNULL,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0call_Wcc,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(upenv, 14-1, 0),
        VNULL),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0let,
        VInlineCons2(runtime,
        _V0loop,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(upenv, 12-1, 0),
        VInlineCons2(runtime,
        VGetArg(upenv, 11-1, 0),
        VNULL)),
        VGetArg(upenv, 10-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0if,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Dnot,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Dpair_Q,
        VInlineCons2(runtime,
        VGetArg(upenv, 12-1, 0),
        VNULL)),
        VNULL)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(upenv, 14-1, 0),
        VInlineCons2(runtime,
        VGetArg(upenv, 12-1, 0),
        VGetArg(upenv, 9-1, 0))),
        VNULL))),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0call__with__values,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        VNULL,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0call_Wcc,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(upenv, 13-1, 0),
        VNULL),
        VInlineCons2(runtime,
        VGetArg(upenv, 5-1, 0),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(upenv, 14-1, 0),
        VInlineCons2(runtime,
        VGetArg(upenv, 12-1, 0),
        upenv->up->up->up->vars[0])),
        VNULL)))),
        VNULL)),
        VNULL))),
        VInlineCons2(runtime,
        _V0loop,
        VNULL))),
        VNULL))))),
        VNULL))),
        VNULL)),
        VNULL))),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0tail__expr,
        VGetArg(upenv, 16-1, 0)),
        VInlineCons2(runtime,
        _var0,
        VNULL))),
        VNULL))));
 }
}
static void _V10_Dmatch__ellipses_D27_k70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__ellipses_D27_k70" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D27_k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__ellipses_D27_k70, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.match-iter.28 21 1) (close _V10_Dmatch__ellipses_D27_k71) (bruijn ##.x.116 1 0) (bruijn ##.x.117 0 0) (bruijn ##.success-expr.31 20 3))
    V_CALL(VGetArg(upenv, 21-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D27_k71, env)}),
      upenv->vars[0],
      _var0,
      VGetArg(upenv, 20-1, 3));
 }
}
static void _V10_Dmatch__ellipses_D27_k69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__ellipses_D27_k69" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D27_k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__ellipses_D27_k69, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.15 23 14) (close _V10_Dmatch__ellipses_D27_k70) (bruijn ##.tail-pattern.33 17 0) (bruijn ##.pattern-stack.34 16 0))
    V_CALL(VGetArg(upenv, 23-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D27_k70, env)}),
      VGetArg(upenv, 17-1, 0),
      VGetArg(upenv, 16-1, 0));
 }
}
static void _V10_Dmatch__ellipses_D27_k68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__ellipses_D27_k68" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D27_k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__ellipses_D27_k68, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.15 22 14) (close _V10_Dmatch__ellipses_D27_k69) 'tail-expr (bruijn ##.x.118 0 0))
    V_CALL(VGetArg(upenv, 22-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D27_k69, env)}),
      _V0tail__expr,
      _var0);
 }
}
static void _V10_Dmatch__ellipses_D27_k67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__ellipses_D27_k67" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D27_k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__ellipses_D27_k67, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.19 21 18) (close _V10_Dmatch__ellipses_D27_k68) (bruijn ##.expr-stack.29 17 1))
    V_CALL(VGetArg(upenv, 21-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D27_k68, env)}),
      VGetArg(upenv, 17-1, 1));
 }
}
static void _V10_Dmatch__ellipses_D27_lambda6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dmatch__ellipses_D27_lambda6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D27_lambda6, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__ellipses_D27_lambda6, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##.k.151 0 0) (##inline ##vcore.cons 'reverse (##inline ##vcore.cons (bruijn ##.sym.44 0 1) '())))
    V_CALL(_var0, runtime,
      VInlineCons2(runtime,
        _V0reverse,
        VInlineCons2(runtime,
        _var1,
        VNULL)));
 }
}
static void _V10_Dmatch__ellipses_D27_k66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__ellipses_D27_k66" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D27_k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__ellipses_D27_k66, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.11 20 10) (close _V10_Dmatch__ellipses_D27_k67) (close _V10_Dmatch__ellipses_D27_lambda6) (bruijn ##.syms.36 10 0))
    V_CALL(VGetArg(upenv, 20-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D27_k67, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D27_lambda6, env)}),
      VGetArg(upenv, 10-1, 0));
 }
}
static void _V10_Dmatch__ellipses_D27_k65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__ellipses_D27_k65" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D27_k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__ellipses_D27_k65, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.match-iter.28 16 1) (close _V10_Dmatch__ellipses_D27_k66) (bruijn ##.x.153 2 0) (bruijn ##.x.154 1 0) (##inline ##vcore.cons (bruijn ##.k2.38 7 0) (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.cdr (##inline ##vcore.cons (bruijn ##.expr.39 6 0) '())) (bruijn ##.x.158 0 0))))
    V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D27_k66, env)}),
      upenv->up->vars[0],
      upenv->vars[0],
      VInlineCons2(runtime,
        VGetArg(upenv, 7-1, 0),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Dcdr,
        VInlineCons2(runtime,
        VGetArg(upenv, 6-1, 0),
        VNULL)),
        _var0)));
 }
}
static void _V10_Dmatch__ellipses_D27_lambda7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dmatch__ellipses_D27_lambda7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D27_lambda7, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__ellipses_D27_lambda7, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // ((bruijn ##.k.159 0 0) (##inline ##vcore.cons '##vcore.cons (##inline ##vcore.cons (bruijn ##.var.42 0 1) (##inline ##vcore.cons (bruijn ##.sym.43 0 2) '()))))
    V_CALL(_var0, runtime,
      VInlineCons2(runtime,
        _V10vcore_Dcons,
        VInlineCons2(runtime,
        _var1,
        VInlineCons2(runtime,
        _var2,
        VNULL))));
 }
}
static void _V10_Dmatch__ellipses_D27_k64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__ellipses_D27_k64" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D27_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__ellipses_D27_k64, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.11 18 10) (close _V10_Dmatch__ellipses_D27_k65) (close _V10_Dmatch__ellipses_D27_lambda7) (bruijn ##.variables.35 9 0) (bruijn ##.syms.36 8 0))
    V_CALL(VGetArg(upenv, 18-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D27_k65, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D27_lambda7, env)}),
      VGetArg(upenv, 9-1, 0),
      VGetArg(upenv, 8-1, 0));
 }
}
static void _V10_Dmatch__ellipses_D27_k63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__ellipses_D27_k63" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D27_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__ellipses_D27_k63, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.list.17 17 16) (close _V10_Dmatch__ellipses_D27_k64) (bruijn ##.pattern.32 12 0))
    V_CALL(VGetArg(upenv, 17-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D27_k64, env)}),
      VGetArg(upenv, 12-1, 0));
 }
}
static void _V10_Dmatch__ellipses_D27_k62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__ellipses_D27_k62" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D27_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__ellipses_D27_k62, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.list.17 16 16) (close _V10_Dmatch__ellipses_D27_k63) (##inline ##vcore.cons '##vcore.car (##inline ##vcore.cons (bruijn ##.expr.39 3 0) '())))
    V_CALL(VGetArg(upenv, 16-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D27_k63, env)}),
      VInlineCons2(runtime,
        _V10vcore_Dcar,
        VInlineCons2(runtime,
        upenv->up->up->vars[0],
        VNULL)));
 }
}
static void _V10_Dmatch__ellipses_D27_lambda8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dmatch__ellipses_D27_lambda8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D27_lambda8, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__ellipses_D27_lambda8, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##.k.171 0 0) (##inline ##vcore.cons 'reverse (##inline ##vcore.cons (bruijn ##.sym.41 0 1) '())))
    V_CALL(_var0, runtime,
      VInlineCons2(runtime,
        _V0reverse,
        VInlineCons2(runtime,
        _var1,
        VNULL)));
 }
}
static void _V10_Dmatch__ellipses_D27_k61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__ellipses_D27_k61" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D27_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__ellipses_D27_k61, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.11 15 10) (close _V10_Dmatch__ellipses_D27_k62) (close _V10_Dmatch__ellipses_D27_lambda8) (bruijn ##.syms.36 5 0))
    V_CALL(VGetArg(upenv, 15-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D27_k62, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D27_lambda8, env)}),
      VGetArg(upenv, 5-1, 0));
 }
}
static void _V10_Dmatch__ellipses_D27_lambda9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dmatch__ellipses_D27_lambda9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D27_lambda9, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__ellipses_D27_lambda9, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##.k.178 0 0) (##inline ##vcore.cons (bruijn ##.sym.40 0 1) (##inline ##vcore.cons (##inline ##vcore.cons 'quote (##inline ##vcore.cons '() '())) '())))
    V_CALL(_var0, runtime,
      VInlineCons2(runtime,
        _var1,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0quote,
        VInlineCons2(runtime,
        VNULL,
        VNULL)),
        VNULL)));
 }
}
static void _V10_Dmatch__ellipses_D27_k60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__ellipses_D27_k60" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D27_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__ellipses_D27_k60, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.11 14 10) (close _V10_Dmatch__ellipses_D27_k61) (close _V10_Dmatch__ellipses_D27_lambda9) (bruijn ##.syms.36 4 0))
    V_CALL(VGetArg(upenv, 14-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D27_k61, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D27_lambda9, env)}),
      upenv->up->up->up->vars[0]);
 }
}
static void _V10_Dmatch__ellipses_D27_k59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__ellipses_D27_k59" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D27_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__ellipses_D27_k59, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.car.1 13 0) (close _V10_Dmatch__ellipses_D27_k60) (bruijn ##.expr-stack.29 9 1))
    V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D27_k60, env)}),
      VGetArg(upenv, 9-1, 1));
 }
}
static void _V10_Dmatch__ellipses_D27_k58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__ellipses_D27_k58" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D27_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__ellipses_D27_k58, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.gensym.20 12 19) (close _V10_Dmatch__ellipses_D27_k59) (##string ##.string.354))
    V_CALL(VGetArg(upenv, 12-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D27_k59, env)}),
      VEncodePointer(&_V10_Dstring_D354.sym, VPOINTER_OTHER));
 }
}
static void _V10_Dmatch__ellipses_D27_k57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__ellipses_D27_k57" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D27_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__ellipses_D27_k57, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.gensym.20 11 19) (close _V10_Dmatch__ellipses_D27_k58) (##string ##.string.355))
    V_CALL(VGetArg(upenv, 11-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D27_k58, env)}),
      VEncodePointer(&_V10_Dstring_D355.sym, VPOINTER_OTHER));
 }
}
static void _V10_Dmatch__ellipses_D27_k56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__ellipses_D27_k56" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D27_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__ellipses_D27_k56, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.gensym.20 10 19) (close _V10_Dmatch__ellipses_D27_k57) (##string ##.string.355))
    V_CALL(VGetArg(upenv, 10-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D27_k57, env)}),
      VEncodePointer(&_V10_Dstring_D355.sym, VPOINTER_OTHER));
 }
}
static void _V10_Dmatch__ellipses_D27_k55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__ellipses_D27_k55" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D27_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__ellipses_D27_k55, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.11 9 10) (close _V10_Dmatch__ellipses_D27_k56) (bruijn ##.gensym.20 9 19) (bruijn ##.variables.35 0 0))
    V_CALL(VGetArg(upenv, 9-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D27_k56, env)}),
      VGetArg(upenv, 9-1, 19),
      _var0);
 }
}
static void _V10_Dmatch__ellipses_D27_k54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__ellipses_D27_k54" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D27_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__ellipses_D27_k54, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.gather-variables.21 7 0) (close _V10_Dmatch__ellipses_D27_k55) (bruijn ##.x.184 0 0) (bruijn ##.eqv?.26 6 2))
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D27_k55, env)}),
      _var0,
      VGetArg(upenv, 6-1, 2));
 }
}
static void _V10_Dmatch__ellipses_D27_k53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__ellipses_D27_k53" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D27_k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__ellipses_D27_k53, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.list.17 7 16) (close _V10_Dmatch__ellipses_D27_k54) (bruijn ##.pattern.32 2 0))
    V_CALL(VGetArg(upenv, 7-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D27_k54, env)}),
      upenv->up->vars[0]);
 }
}
static void _V10_Dmatch__ellipses_D27_k52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__ellipses_D27_k52" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D27_k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__ellipses_D27_k52, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.19 6 18) (close _V10_Dmatch__ellipses_D27_k53) (bruijn ##.pattern-stack.30 2 2))
    V_CALL(VGetArg(upenv, 6-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D27_k53, env)}),
      upenv->up->vars[2]);
 }
}
static void _V10_Dmatch__ellipses_D27_k51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__ellipses_D27_k51" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D27_k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__ellipses_D27_k51, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cddar.5 5 4) (close _V10_Dmatch__ellipses_D27_k52) (bruijn ##.pattern-stack.30 1 2))
    V_CALL(VGetArg(upenv, 5-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D27_k52, env)}),
      upenv->vars[2]);
 }
}
static void _V10_Dmatch__ellipses_D27_lambda5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V10_Dmatch__ellipses_D27_lambda5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D27_lambda5, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__ellipses_D27_lambda5, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn ##.caar.18 4 17) (close _V10_Dmatch__ellipses_D27_k51) (bruijn ##.pattern-stack.30 0 2))
    V_CALL(upenv->up->up->up->vars[17], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D27_k51, env)}),
      _var2);
 }
}
static void _V10_Dmatch__iter_D28_k76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k76" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k76, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.match-iter.28 6 1) (bruijn ##.k.185 5 0) (bruijn ##.x.188 1 0) (bruijn ##.x.189 0 0) (bruijn ##.success-expr.47 5 3))
    V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      upenv->vars[0],
      _var0,
      VGetArg(upenv, 5-1, 3));
 }
}
static void _V10_Dmatch__iter_D28_k75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k75" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k75, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.19 8 18) (close _V10_Dmatch__iter_D28_k76) (bruijn ##.pattern-stack.46 4 2))
    V_CALL(VGetArg(upenv, 8-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D28_k76, env)}),
      upenv->up->up->up->vars[2]);
 }
}
static void _V10_Dmatch__iter_D28_k83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k83" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k83, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.185 10 0) (##inline ##vcore.cons 'let (##inline ##vcore.cons (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.198 4 0) (##inline ##vcore.cons (bruijn ##.x.200 3 0) '())) '()) (##inline ##vcore.cons (bruijn ##.x.194 0 0) '()))))
    V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      VInlineCons2(runtime,
        _V0let,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        upenv->up->up->up->vars[0],
        VInlineCons2(runtime,
        upenv->up->up->vars[0],
        VNULL)),
        VNULL),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
 }
}
static void _V10_Dmatch__iter_D28_k82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k82" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k82, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.match-iter.28 10 1) (close _V10_Dmatch__iter_D28_k83) (bruijn ##.x.195 1 0) (bruijn ##.x.196 0 0) (bruijn ##.success-expr.47 9 3))
    V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D28_k83, env)}),
      upenv->vars[0],
      _var0,
      VGetArg(upenv, 9-1, 3));
 }
}
static void _V10_Dmatch__iter_D28_k81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k81" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k81, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.19 12 18) (close _V10_Dmatch__iter_D28_k82) (bruijn ##.pattern-stack.46 8 2))
    V_CALL(VGetArg(upenv, 12-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D28_k82, env)}),
      VGetArg(upenv, 8-1, 2));
 }
}
static void _V10_Dmatch__iter_D28_k80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k80" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k80, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.19 11 18) (close _V10_Dmatch__iter_D28_k81) (bruijn ##.expr-stack.45 7 1))
    V_CALL(VGetArg(upenv, 11-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D28_k81, env)}),
      VGetArg(upenv, 7-1, 1));
 }
}
static void _V10_Dmatch__iter_D28_k79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k79" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k79, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.car.1 10 0) (close _V10_Dmatch__iter_D28_k80) (bruijn ##.expr-stack.45 6 1))
    V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D28_k80, env)}),
      VGetArg(upenv, 6-1, 1));
 }
}
static void _V10_Dmatch__iter_D28_k86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k86" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k86, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.compiler-error.2 12 1) (bruijn ##.k.185 8 0) (##string ##.string.353) (bruijn ##.x.202 0 0))
    V_CALL(VGetArg(upenv, 12-1, 1), runtime,
      VGetArg(upenv, 8-1, 0),
      VEncodePointer(&_V10_Dstring_D353.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V10_Dmatch__iter_D28_k92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k92" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k92, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.185 13 0) (##inline ##vcore.cons 'if (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.null? (##inline ##vcore.cons (bruijn ##.x.211 3 0) '())) (##inline ##vcore.cons (bruijn ##.x.207 0 0) '()))))
    V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VInlineCons2(runtime,
        _V0if,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Dnull_Q,
        VInlineCons2(runtime,
        upenv->up->up->vars[0],
        VNULL)),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
 }
}
static void _V10_Dmatch__iter_D28_k91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k91" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k91, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.match-iter.28 13 1) (close _V10_Dmatch__iter_D28_k92) (bruijn ##.x.208 1 0) (bruijn ##.x.209 0 0) (bruijn ##.success-expr.47 12 3))
    V_CALL(VGetArg(upenv, 13-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D28_k92, env)}),
      upenv->vars[0],
      _var0,
      VGetArg(upenv, 12-1, 3));
 }
}
static void _V10_Dmatch__iter_D28_k90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k90" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k90, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.19 15 18) (close _V10_Dmatch__iter_D28_k91) (bruijn ##.pattern-stack.46 11 2))
    V_CALL(VGetArg(upenv, 15-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D28_k91, env)}),
      VGetArg(upenv, 11-1, 2));
 }
}
static void _V10_Dmatch__iter_D28_k89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k89" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k89, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.19 14 18) (close _V10_Dmatch__iter_D28_k90) (bruijn ##.expr-stack.45 10 1))
    V_CALL(VGetArg(upenv, 14-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D28_k90, env)}),
      VGetArg(upenv, 10-1, 1));
 }
}
static void _V10_Dmatch__iter_D28_k100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k100" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k100, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.185 17 0) (##inline ##vcore.cons 'if (##inline ##vcore.cons (##inline ##vcore.cons 'and (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.string? (##inline ##vcore.cons (bruijn ##.x.228 5 0) '())) (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.blob=? (##inline ##vcore.cons (bruijn ##.x.224 4 0) (##inline ##vcore.cons (bruijn ##.x.226 3 0) '()))) '()))) (##inline ##vcore.cons (bruijn ##.x.216 0 0) '()))))
    V_CALL(VGetArg(upenv, 17-1, 0), runtime,
      VInlineCons2(runtime,
        _V0if,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0and,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Dstring_Q,
        VInlineCons2(runtime,
        VGetArg(upenv, 5-1, 0),
        VNULL)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Dblob_E_Q,
        VInlineCons2(runtime,
        upenv->up->up->up->vars[0],
        VInlineCons2(runtime,
        upenv->up->up->vars[0],
        VNULL))),
        VNULL))),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
 }
}
static void _V10_Dmatch__iter_D28_k99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k99" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k99, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.match-iter.28 17 1) (close _V10_Dmatch__iter_D28_k100) (bruijn ##.x.217 1 0) (bruijn ##.x.218 0 0) (bruijn ##.success-expr.47 16 3))
    V_CALL(VGetArg(upenv, 17-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D28_k100, env)}),
      upenv->vars[0],
      _var0,
      VGetArg(upenv, 16-1, 3));
 }
}
static void _V10_Dmatch__iter_D28_k98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k98" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k98, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.19 19 18) (close _V10_Dmatch__iter_D28_k99) (bruijn ##.pattern-stack.46 15 2))
    V_CALL(VGetArg(upenv, 19-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D28_k99, env)}),
      VGetArg(upenv, 15-1, 2));
 }
}
static void _V10_Dmatch__iter_D28_k97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k97" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k97, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.19 18 18) (close _V10_Dmatch__iter_D28_k98) (bruijn ##.expr-stack.45 14 1))
    V_CALL(VGetArg(upenv, 18-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D28_k98, env)}),
      VGetArg(upenv, 14-1, 1));
 }
}
static void _V10_Dmatch__iter_D28_k96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k96" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k96, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.car.1 17 0) (close _V10_Dmatch__iter_D28_k97) (bruijn ##.expr-stack.45 13 1))
    V_CALL(VGetArg(upenv, 17-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D28_k97, env)}),
      VGetArg(upenv, 13-1, 1));
 }
}
static void _V10_Dmatch__iter_D28_k95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k95" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k95, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.car.1 16 0) (close _V10_Dmatch__iter_D28_k96) (bruijn ##.pattern-stack.46 12 2))
    V_CALL(VGetArg(upenv, 16-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D28_k96, env)}),
      VGetArg(upenv, 12-1, 2));
 }
}
static void _V10_Dmatch__iter_D28_k107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k107" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k107, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.185 18 0) (##inline ##vcore.cons 'if (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.eq? (##inline ##vcore.cons (bruijn ##.x.237 4 0) (##inline ##vcore.cons (bruijn ##.x.239 3 0) '()))) (##inline ##vcore.cons (bruijn ##.x.233 0 0) '()))))
    V_CALL(VGetArg(upenv, 18-1, 0), runtime,
      VInlineCons2(runtime,
        _V0if,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Deq_Q,
        VInlineCons2(runtime,
        upenv->up->up->up->vars[0],
        VInlineCons2(runtime,
        upenv->up->up->vars[0],
        VNULL))),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
 }
}
static void _V10_Dmatch__iter_D28_k106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k106" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k106, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.match-iter.28 18 1) (close _V10_Dmatch__iter_D28_k107) (bruijn ##.x.234 1 0) (bruijn ##.x.235 0 0) (bruijn ##.success-expr.47 17 3))
    V_CALL(VGetArg(upenv, 18-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D28_k107, env)}),
      upenv->vars[0],
      _var0,
      VGetArg(upenv, 17-1, 3));
 }
}
static void _V10_Dmatch__iter_D28_k105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k105" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k105, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.19 20 18) (close _V10_Dmatch__iter_D28_k106) (bruijn ##.pattern-stack.46 16 2))
    V_CALL(VGetArg(upenv, 20-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D28_k106, env)}),
      VGetArg(upenv, 16-1, 2));
 }
}
static void _V10_Dmatch__iter_D28_k104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k104" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k104, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.19 19 18) (close _V10_Dmatch__iter_D28_k105) (bruijn ##.expr-stack.45 15 1))
    V_CALL(VGetArg(upenv, 19-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D28_k105, env)}),
      VGetArg(upenv, 15-1, 1));
 }
}
static void _V10_Dmatch__iter_D28_k103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k103" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k103, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.car.1 18 0) (close _V10_Dmatch__iter_D28_k104) (bruijn ##.expr-stack.45 14 1))
    V_CALL(VGetArg(upenv, 18-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D28_k104, env)}),
      VGetArg(upenv, 14-1, 1));
 }
}
static void _V10_Dmatch__iter_D28_k111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k111" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k111, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.eqv?.26 19 2) (bruijn ##.k.306 1 0) (bruijn ##.x.307 0 0) 'quote)
    V_CALL(VGetArg(upenv, 19-1, 2), runtime,
      upenv->vars[0],
      _var0,
      _V0quote);
 }
}
static void _V10_Dmatch__iter_D28_k110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k110" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k110, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.305 1 0) ((bruijn ##.caar.18 20 17) (close _V10_Dmatch__iter_D28_k111) (bruijn ##.pattern-stack.46 16 2)) ((bruijn ##.k.306 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 20-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D28_k111, env)}),
      VGetArg(upenv, 16-1, 2));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dmatch__iter_D28_k118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k118" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k118, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.not.6 26 5) (bruijn ##.k.257 2 0) (bruijn ##.x.258 0 0))
    V_CALL(VGetArg(upenv, 26-1, 5), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Dmatch__iter_D28_k117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k117" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k117, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.null?.14 25 13) (close _V10_Dmatch__iter_D28_k118) (bruijn ##.x.259 0 0))
    V_CALL(VGetArg(upenv, 25-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D28_k118, env)}),
      _var0);
 }
}
static void _V10_Dmatch__iter_D28_k116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k116" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k116, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.256 1 0) ((bruijn ##.k.257 0 0) (bruijn ##.p.256 1 0)) ((bruijn ##.cddar.5 24 4) (close _V10_Dmatch__iter_D28_k117) (bruijn ##.pattern-stack.46 20 2)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(_var0, runtime,
      upenv->vars[0]);
} else {
    V_CALL(VGetArg(upenv, 24-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D28_k117, env)}),
      VGetArg(upenv, 20-1, 2));
}
 }
}
static void _V10_Dmatch__iter_D28_k120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k120" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k120, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.254 1 0) ((bruijn ##.compiler-error.2 25 1) (bruijn ##.k.255 0 0) (##string ##.string.356)) ((bruijn ##.k.255 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 25-1, 1), runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D356.sym, VPOINTER_OTHER));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dmatch__iter_D28_k126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k126" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k126, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.185 26 0) (##inline ##vcore.cons 'if (##inline ##vcore.cons (##inline ##vcore.cons 'equal? (##inline ##vcore.cons (##inline ##vcore.cons 'quote (##inline ##vcore.cons (bruijn ##.x.253 4 0) '())) (##inline ##vcore.cons (bruijn ##.x.251 3 0) '()))) (##inline ##vcore.cons (bruijn ##.x.245 0 0) '()))))
    V_CALL(VGetArg(upenv, 26-1, 0), runtime,
      VInlineCons2(runtime,
        _V0if,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0equal_Q,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0quote,
        VInlineCons2(runtime,
        upenv->up->up->up->vars[0],
        VNULL)),
        VInlineCons2(runtime,
        upenv->up->up->vars[0],
        VNULL))),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
 }
}
static void _V10_Dmatch__iter_D28_k125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k125" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k125, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.match-iter.28 26 1) (close _V10_Dmatch__iter_D28_k126) (bruijn ##.x.246 1 0) (bruijn ##.x.247 0 0) (bruijn ##.success-expr.47 25 3))
    V_CALL(VGetArg(upenv, 26-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D28_k126, env)}),
      upenv->vars[0],
      _var0,
      VGetArg(upenv, 25-1, 3));
 }
}
static void _V10_Dmatch__iter_D28_k124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k124" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k124, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.19 28 18) (close _V10_Dmatch__iter_D28_k125) (bruijn ##.pattern-stack.46 24 2))
    V_CALL(VGetArg(upenv, 28-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D28_k125, env)}),
      VGetArg(upenv, 24-1, 2));
 }
}
static void _V10_Dmatch__iter_D28_k123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k123" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k123, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.19 27 18) (close _V10_Dmatch__iter_D28_k124) (bruijn ##.expr-stack.45 23 1))
    V_CALL(VGetArg(upenv, 27-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D28_k124, env)}),
      VGetArg(upenv, 23-1, 1));
 }
}
static void _V10_Dmatch__iter_D28_k122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k122" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k122, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.car.1 26 0) (close _V10_Dmatch__iter_D28_k123) (bruijn ##.expr-stack.45 22 1))
    V_CALL(VGetArg(upenv, 26-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D28_k123, env)}),
      VGetArg(upenv, 22-1, 1));
 }
}
static void _V10_Dmatch__iter_D28_k121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k121" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k121, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cadar.4 25 3) (close _V10_Dmatch__iter_D28_k122) (bruijn ##.pattern-stack.46 21 2))
    V_CALL(VGetArg(upenv, 25-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D28_k122, env)}),
      VGetArg(upenv, 21-1, 2));
 }
}
static void _V10_Dmatch__iter_D28_k119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k119" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k119, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dmatch__iter_D28_k120) (close _V10_Dmatch__iter_D28_k121))
    V_CALL_FUNC(_V10_Dmatch__iter_D28_k120, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D28_k121, env)}));
 }
}
static void _V10_Dmatch__iter_D28_k115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k115" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k115, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dmatch__iter_D28_k116) (close _V10_Dmatch__iter_D28_k119))
    V_CALL_FUNC(_V10_Dmatch__iter_D28_k116, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D28_k119, env)}));
 }
}
static void _V10_Dmatch__iter_D28_k114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k114" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k114, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.not.6 22 5) (close _V10_Dmatch__iter_D28_k115) (bruijn ##.x.260 0 0))
    V_CALL(VGetArg(upenv, 22-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D28_k115, env)}),
      _var0);
 }
}
static void _V10_Dmatch__iter_D28_k113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k113" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k113, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.pair?.3 21 2) (close _V10_Dmatch__iter_D28_k114) (bruijn ##.x.261 0 0))
    V_CALL(VGetArg(upenv, 21-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D28_k114, env)}),
      _var0);
 }
}
static void _V10_Dmatch__iter_D28_k132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k132" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k132, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.eqv?.26 24 2) (bruijn ##.k.300 3 0) (bruijn ##.x.302 0 0) '...)
    V_CALL(VGetArg(upenv, 24-1, 2), runtime,
      upenv->up->up->vars[0],
      _var0,
      _V0_D_D_D);
 }
}
static void _V10_Dmatch__iter_D28_k131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k131" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k131, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.301 0 0) ((bruijn ##.cadar.4 25 3) (close _V10_Dmatch__iter_D28_k132) (bruijn ##.pattern-stack.46 21 2)) ((bruijn ##.k.300 2 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 25-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D28_k132, env)}),
      VGetArg(upenv, 21-1, 2));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dmatch__iter_D28_k130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k130" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k130, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.pair?.3 24 2) (close _V10_Dmatch__iter_D28_k131) (bruijn ##.x.303 0 0))
    V_CALL(VGetArg(upenv, 24-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D28_k131, env)}),
      _var0);
 }
}
static void _V10_Dmatch__iter_D28_k129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k129" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k129, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.299 1 0) ((bruijn ##.cdar.16 23 15) (close _V10_Dmatch__iter_D28_k130) (bruijn ##.pattern-stack.46 19 2)) ((bruijn ##.k.300 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 23-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D28_k130, env)}),
      VGetArg(upenv, 19-1, 2));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dmatch__iter_D28_k138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k138" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k138, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.185 24 0) (##inline ##vcore.cons 'let (##inline ##vcore.cons (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.sym.48 4 0) (##inline ##vcore.cons (bruijn ##.x.271 3 0) '())) '()) (##inline ##vcore.cons (bruijn ##.x.266 0 0) '()))))
    V_CALL(VGetArg(upenv, 24-1, 0), runtime,
      VInlineCons2(runtime,
        _V0let,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        upenv->up->up->up->vars[0],
        VInlineCons2(runtime,
        upenv->up->up->vars[0],
        VNULL)),
        VNULL),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
 }
}
static void _V10_Dmatch__iter_D28_k137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k137" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k137, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.match-ellipses.27 24 0) (close _V10_Dmatch__iter_D28_k138) (bruijn ##.x.267 0 0) (bruijn ##.pattern-stack.46 23 2) (bruijn ##.success-expr.47 23 3))
    V_CALL(VGetArg(upenv, 24-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D28_k138, env)}),
      _var0,
      VGetArg(upenv, 23-1, 2),
      VGetArg(upenv, 23-1, 3));
 }
}
static void _V10_Dmatch__iter_D28_k136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k136" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k136, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.15 26 14) (close _V10_Dmatch__iter_D28_k137) (bruijn ##.sym.48 2 0) (bruijn ##.x.268 0 0))
    V_CALL(VGetArg(upenv, 26-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D28_k137, env)}),
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Dmatch__iter_D28_k135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k135" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k135, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.19 25 18) (close _V10_Dmatch__iter_D28_k136) (bruijn ##.expr-stack.45 21 1))
    V_CALL(VGetArg(upenv, 25-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D28_k136, env)}),
      VGetArg(upenv, 21-1, 1));
 }
}
static void _V10_Dmatch__iter_D28_k134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k134" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k134, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.car.1 24 0) (close _V10_Dmatch__iter_D28_k135) (bruijn ##.expr-stack.45 20 1))
    V_CALL(VGetArg(upenv, 24-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D28_k135, env)}),
      VGetArg(upenv, 20-1, 1));
 }
}
static void _V10_Dmatch__iter_D28_k147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k147" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k147, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.185 28 0) (##inline ##vcore.cons 'let (##inline ##vcore.cons (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.sym.49 6 0) (##inline ##vcore.cons (bruijn ##.x.296 5 0) '())) '()) (##inline ##vcore.cons (##inline ##vcore.cons 'if (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.pair? (##inline ##vcore.cons (bruijn ##.sym.49 6 0) '())) (##inline ##vcore.cons (bruijn ##.x.280 0 0) '()))) '()))))
    V_CALL(VGetArg(upenv, 28-1, 0), runtime,
      VInlineCons2(runtime,
        _V0let,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(upenv, 6-1, 0),
        VInlineCons2(runtime,
        VGetArg(upenv, 5-1, 0),
        VNULL)),
        VNULL),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0if,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Dpair_Q,
        VInlineCons2(runtime,
        VGetArg(upenv, 6-1, 0),
        VNULL)),
        VInlineCons2(runtime,
        _var0,
        VNULL))),
        VNULL))));
 }
}
static void _V10_Dmatch__iter_D28_k146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k146" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k146, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.match-iter.28 28 1) (close _V10_Dmatch__iter_D28_k147) (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.car (##inline ##vcore.cons (bruijn ##.sym.49 5 0) '())) (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.cdr (##inline ##vcore.cons (bruijn ##.sym.49 5 0) '())) (bruijn ##.x.290 3 0))) (##inline ##vcore.cons (bruijn ##.x.283 2 0) (##inline ##vcore.cons (bruijn ##.x.285 1 0) (bruijn ##.x.286 0 0))) (bruijn ##.success-expr.47 27 3))
    V_CALL(VGetArg(upenv, 28-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D28_k147, env)}),
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Dcar,
        VInlineCons2(runtime,
        VGetArg(upenv, 5-1, 0),
        VNULL)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Dcdr,
        VInlineCons2(runtime,
        VGetArg(upenv, 5-1, 0),
        VNULL)),
        upenv->up->up->vars[0])),
      VInlineCons2(runtime,
        upenv->up->vars[0],
        VInlineCons2(runtime,
        upenv->vars[0],
        _var0)),
      VGetArg(upenv, 27-1, 3));
 }
}
static void _V10_Dmatch__iter_D28_k145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k145" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k145, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.19 30 18) (close _V10_Dmatch__iter_D28_k146) (bruijn ##.pattern-stack.46 26 2))
    V_CALL(VGetArg(upenv, 30-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D28_k146, env)}),
      VGetArg(upenv, 26-1, 2));
 }
}
static void _V10_Dmatch__iter_D28_k144(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k144" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k144, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdar.16 29 15) (close _V10_Dmatch__iter_D28_k145) (bruijn ##.pattern-stack.46 25 2))
    V_CALL(VGetArg(upenv, 29-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D28_k145, env)}),
      VGetArg(upenv, 25-1, 2));
 }
}
static void _V10_Dmatch__iter_D28_k143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k143" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k143, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.caar.18 28 17) (close _V10_Dmatch__iter_D28_k144) (bruijn ##.pattern-stack.46 24 2))
    V_CALL(VGetArg(upenv, 28-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D28_k144, env)}),
      VGetArg(upenv, 24-1, 2));
 }
}
static void _V10_Dmatch__iter_D28_k142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k142" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k142, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.19 27 18) (close _V10_Dmatch__iter_D28_k143) (bruijn ##.expr-stack.45 23 1))
    V_CALL(VGetArg(upenv, 27-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D28_k143, env)}),
      VGetArg(upenv, 23-1, 1));
 }
}
static void _V10_Dmatch__iter_D28_k141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k141" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k141, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.car.1 26 0) (close _V10_Dmatch__iter_D28_k142) (bruijn ##.expr-stack.45 22 1))
    V_CALL(VGetArg(upenv, 26-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D28_k142, env)}),
      VGetArg(upenv, 22-1, 1));
 }
}
static void _V10_Dmatch__iter_D28_k148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k148" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k148, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.compiler-error.2 26 1) (bruijn ##.k.185 22 0) (##string ##.string.357) (bruijn ##.x.297 0 0))
    V_CALL(VGetArg(upenv, 26-1, 1), runtime,
      VGetArg(upenv, 22-1, 0),
      VEncodePointer(&_V10_Dstring_D357.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V10_Dmatch__iter_D28_k140(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k140" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k140, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.272 0 0) ((bruijn ##.gensym.20 25 19) (close _V10_Dmatch__iter_D28_k141) (##string ##.string.354)) ((bruijn ##.car.1 25 0) (close _V10_Dmatch__iter_D28_k148) (bruijn ##.pattern-stack.46 21 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 25-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D28_k141, env)}),
      VEncodePointer(&_V10_Dstring_D354.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 25-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D28_k148, env)}),
      VGetArg(upenv, 21-1, 2));
}
 }
}
static void _V10_Dmatch__iter_D28_k139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k139" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k139, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.pair?.3 24 2) (close _V10_Dmatch__iter_D28_k140) (bruijn ##.x.298 0 0))
    V_CALL(VGetArg(upenv, 24-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D28_k140, env)}),
      _var0);
 }
}
static void _V10_Dmatch__iter_D28_k133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k133" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k133, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.262 0 0) ((bruijn ##.gensym.20 23 19) (close _V10_Dmatch__iter_D28_k134) (##string ##.string.354)) ((bruijn ##.car.1 23 0) (close _V10_Dmatch__iter_D28_k139) (bruijn ##.pattern-stack.46 19 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 23-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D28_k134, env)}),
      VEncodePointer(&_V10_Dstring_D354.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 23-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D28_k139, env)}),
      VGetArg(upenv, 19-1, 2));
}
 }
}
static void _V10_Dmatch__iter_D28_k128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k128" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k128, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dmatch__iter_D28_k129) (close _V10_Dmatch__iter_D28_k133))
    V_CALL_FUNC(_V10_Dmatch__iter_D28_k129, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D28_k133, env)}));
 }
}
static void _V10_Dmatch__iter_D28_k127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k127" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k127, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.pair?.3 21 2) (close _V10_Dmatch__iter_D28_k128) (bruijn ##.x.304 0 0))
    V_CALL(VGetArg(upenv, 21-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D28_k128, env)}),
      _var0);
 }
}
static void _V10_Dmatch__iter_D28_k112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k112" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k112, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.240 0 0) ((bruijn ##.cdar.16 20 15) (close _V10_Dmatch__iter_D28_k113) (bruijn ##.pattern-stack.46 16 2)) ((bruijn ##.car.1 20 0) (close _V10_Dmatch__iter_D28_k127) (bruijn ##.pattern-stack.46 16 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 20-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D28_k113, env)}),
      VGetArg(upenv, 16-1, 2));
} else {
    V_CALL(VGetArg(upenv, 20-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D28_k127, env)}),
      VGetArg(upenv, 16-1, 2));
}
 }
}
static void _V10_Dmatch__iter_D28_k109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k109" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k109, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dmatch__iter_D28_k110) (close _V10_Dmatch__iter_D28_k112))
    V_CALL_FUNC(_V10_Dmatch__iter_D28_k110, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D28_k112, env)}));
 }
}
static void _V10_Dmatch__iter_D28_k108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k108" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k108, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.pair?.3 18 2) (close _V10_Dmatch__iter_D28_k109) (bruijn ##.x.308 0 0))
    V_CALL(VGetArg(upenv, 18-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D28_k109, env)}),
      _var0);
 }
}
static void _V10_Dmatch__iter_D28_k102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k102" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k102, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.229 0 0) ((bruijn ##.car.1 17 0) (close _V10_Dmatch__iter_D28_k103) (bruijn ##.pattern-stack.46 13 2)) ((bruijn ##.car.1 17 0) (close _V10_Dmatch__iter_D28_k108) (bruijn ##.pattern-stack.46 13 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 17-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D28_k103, env)}),
      VGetArg(upenv, 13-1, 2));
} else {
    V_CALL(VGetArg(upenv, 17-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D28_k108, env)}),
      VGetArg(upenv, 13-1, 2));
}
 }
}
static void _V10_Dmatch__iter_D28_k101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k101" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k101, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.atom?.7 16 6) (close _V10_Dmatch__iter_D28_k102) (bruijn ##.x.309 0 0))
    V_CALL(VGetArg(upenv, 16-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D28_k102, env)}),
      _var0);
 }
}
static void _V10_Dmatch__iter_D28_k94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k94" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k94, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.212 0 0) ((bruijn ##.car.1 15 0) (close _V10_Dmatch__iter_D28_k95) (bruijn ##.expr-stack.45 11 1)) ((bruijn ##.car.1 15 0) (close _V10_Dmatch__iter_D28_k101) (bruijn ##.pattern-stack.46 11 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 15-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D28_k95, env)}),
      VGetArg(upenv, 11-1, 1));
} else {
    V_CALL(VGetArg(upenv, 15-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D28_k101, env)}),
      VGetArg(upenv, 11-1, 2));
}
 }
}
static void _V10_Dmatch__iter_D28_k93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k93" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k93, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.string?.8 14 7) (close _V10_Dmatch__iter_D28_k94) (bruijn ##.x.310 0 0))
    V_CALL(VGetArg(upenv, 14-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D28_k94, env)}),
      _var0);
 }
}
static void _V10_Dmatch__iter_D28_k88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k88" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k88, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.203 0 0) ((bruijn ##.car.1 13 0) (close _V10_Dmatch__iter_D28_k89) (bruijn ##.expr-stack.45 9 1)) ((bruijn ##.car.1 13 0) (close _V10_Dmatch__iter_D28_k93) (bruijn ##.pattern-stack.46 9 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D28_k89, env)}),
      VGetArg(upenv, 9-1, 1));
} else {
    V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D28_k93, env)}),
      VGetArg(upenv, 9-1, 2));
}
 }
}
static void _V10_Dmatch__iter_D28_k87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k87" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k87, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.null?.14 12 13) (close _V10_Dmatch__iter_D28_k88) (bruijn ##.x.311 0 0))
    V_CALL(VGetArg(upenv, 12-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D28_k88, env)}),
      _var0);
 }
}
static void _V10_Dmatch__iter_D28_k85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k85" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k85, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.201 0 0) ((bruijn ##.car.1 11 0) (close _V10_Dmatch__iter_D28_k86) (bruijn ##.pattern-stack.46 7 2)) ((bruijn ##.car.1 11 0) (close _V10_Dmatch__iter_D28_k87) (bruijn ##.pattern-stack.46 7 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D28_k86, env)}),
      VGetArg(upenv, 7-1, 2));
} else {
    V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D28_k87, env)}),
      VGetArg(upenv, 7-1, 2));
}
 }
}
static void _V10_Dmatch__iter_D28_k84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k84" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k84, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.vector?.9 10 8) (close _V10_Dmatch__iter_D28_k85) (bruijn ##.x.312 0 0))
    V_CALL(VGetArg(upenv, 10-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D28_k85, env)}),
      _var0);
 }
}
static void _V10_Dmatch__iter_D28_k78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k78" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k78, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.190 0 0) ((bruijn ##.car.1 9 0) (close _V10_Dmatch__iter_D28_k79) (bruijn ##.pattern-stack.46 5 2)) ((bruijn ##.car.1 9 0) (close _V10_Dmatch__iter_D28_k84) (bruijn ##.pattern-stack.46 5 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D28_k79, env)}),
      VGetArg(upenv, 5-1, 2));
} else {
    V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D28_k84, env)}),
      VGetArg(upenv, 5-1, 2));
}
 }
}
static void _V10_Dmatch__iter_D28_k77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k77" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k77, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.symbol?.10 8 9) (close _V10_Dmatch__iter_D28_k78) (bruijn ##.x.313 0 0))
    V_CALL(VGetArg(upenv, 8-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D28_k78, env)}),
      _var0);
 }
}
static void _V10_Dmatch__iter_D28_k74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k74" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k74, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.187 0 0) ((bruijn ##.cdr.19 7 18) (close _V10_Dmatch__iter_D28_k75) (bruijn ##.expr-stack.45 3 1)) ((bruijn ##.car.1 7 0) (close _V10_Dmatch__iter_D28_k77) (bruijn ##.pattern-stack.46 3 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 7-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D28_k75, env)}),
      upenv->up->up->vars[1]);
} else {
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D28_k77, env)}),
      upenv->up->up->vars[2]);
}
 }
}
static void _V10_Dmatch__iter_D28_k73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k73" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k73, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.eqv?.26 4 2) (close _V10_Dmatch__iter_D28_k74) (bruijn ##.x.314 0 0) '_)
    V_CALL(upenv->up->up->up->vars[2], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D28_k74, env)}),
      _var0,
      _V0_U);
 }
}
static void _V10_Dmatch__iter_D28_k72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_k72" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_k72, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.186 0 0) ((bruijn ##.k.185 1 0) (bruijn ##.success-expr.47 1 3)) ((bruijn ##.car.1 5 0) (close _V10_Dmatch__iter_D28_k73) (bruijn ##.pattern-stack.46 1 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      upenv->vars[3]);
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D28_k73, env)}),
      upenv->vars[2]);
}
 }
}
static void _V10_Dmatch__iter_D28_lambda10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D28_lambda10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D28_lambda10, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D28_lambda10, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn ##.null?.14 4 13) (close _V10_Dmatch__iter_D28_k72) (bruijn ##.pattern-stack.46 0 2))
    V_CALL(upenv->up->up->up->vars[13], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D28_k72, env)}),
      _var2);
 }
}
static void _V10_Dloop_D52_k155(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D52_k155" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D52_k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D52_k155, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.326 4 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.k.50 7 0) (##inline ##vcore.cons (##inline ##vcore.cons 'begin (bruijn ##.x.334 0 0)) '())) '()))
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(upenv, 7-1, 0),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0begin,
        _var0),
        VNULL)),
        VNULL));
 }
}
static void _V10_Dloop_D52_k162(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D52_k162" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D52_k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D52_k162, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.cons.15 19 14) (bruijn ##.k.326 10 0) (bruijn ##.x.335 2 0) (bruijn ##.x.336 0 0))
    V_CALL(VGetArg(upenv, 19-1, 14), runtime,
      VGetArg(upenv, 10-1, 0),
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D52_k161(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D52_k161" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D52_k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D52_k161, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.loop.52 10 0) (close _V10_Dloop_D52_k162) (bruijn ##.x.337 0 0))
    V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D52_k162, env)}),
      _var0);
 }
}
static void _V10_Dloop_D52_k160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D52_k160" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D52_k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D52_k160, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.19 17 18) (close _V10_Dloop_D52_k161) (bruijn ##.patterns.53 8 1))
    V_CALL(VGetArg(upenv, 17-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D52_k161, env)}),
      VGetArg(upenv, 8-1, 1));
 }
}
static void _V10_Dloop_D52_k159(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D52_k159" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D52_k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D52_k159, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.match-iter.28 13 1) (close _V10_Dloop_D52_k160) (bruijn ##.x.338 3 0) (bruijn ##.x.339 1 0) (##inline ##vcore.cons (bruijn ##.k.50 10 0) (##inline ##vcore.cons (##inline ##vcore.cons 'begin (bruijn ##.x.343 0 0)) '())))
    V_CALL(VGetArg(upenv, 13-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D52_k160, env)}),
      upenv->up->up->vars[0],
      upenv->vars[0],
      VInlineCons2(runtime,
        VGetArg(upenv, 10-1, 0),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0begin,
        _var0),
        VNULL)));
 }
}
static void _V10_Dloop_D52_k158(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D52_k158" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D52_k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D52_k158, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdar.16 15 15) (close _V10_Dloop_D52_k159) (bruijn ##.patterns.53 6 1))
    V_CALL(VGetArg(upenv, 15-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D52_k159, env)}),
      VGetArg(upenv, 6-1, 1));
 }
}
static void _V10_Dloop_D52_k157(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D52_k157" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D52_k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D52_k157, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.list.17 14 16) (close _V10_Dloop_D52_k158) (bruijn ##.x.344 0 0))
    V_CALL(VGetArg(upenv, 14-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D52_k158, env)}),
      _var0);
 }
}
static void _V10_Dloop_D52_k156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D52_k156" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D52_k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D52_k156, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.caar.18 13 17) (close _V10_Dloop_D52_k157) (bruijn ##.patterns.53 4 1))
    V_CALL(VGetArg(upenv, 13-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D52_k157, env)}),
      upenv->up->up->up->vars[1]);
 }
}
static void _V10_Dloop_D52_k154(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D52_k154" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D52_k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D52_k154, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.330 0 0) ((bruijn ##.cdar.16 12 15) (close _V10_Dloop_D52_k155) (bruijn ##.patterns.53 3 1)) ((bruijn ##.list.17 12 16) (close _V10_Dloop_D52_k156) (bruijn ##.input.51 6 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 12-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D52_k155, env)}),
      upenv->up->up->vars[1]);
} else {
    V_CALL(VGetArg(upenv, 12-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D52_k156, env)}),
      VGetArg(upenv, 6-1, 1));
}
 }
}
static void _V10_Dloop_D52_k153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D52_k153" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D52_k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D52_k153, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.eqv?.26 9 2) (close _V10_Dloop_D52_k154) (bruijn ##.x.345 0 0) 'else)
    V_CALL(VGetArg(upenv, 9-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D52_k154, env)}),
      _var0,
      _V0else);
 }
}
static void _V10_Dloop_D52_k152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D52_k152" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D52_k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D52_k152, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.327 0 0) ((bruijn ##.k.326 1 0) (##inline ##vcore.cons (##inline ##vcore.cons 'error (##inline ##vcore.cons '(##string ##.string.358) '())) '())) ((bruijn ##.caar.18 10 17) (close _V10_Dloop_D52_k153) (bruijn ##.patterns.53 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0error,
        VInlineCons2(runtime,
        VEncodePointer(&_V10_Dstring_D358.sym, VPOINTER_OTHER),
        VNULL)),
        VNULL));
} else {
    V_CALL(VGetArg(upenv, 10-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D52_k153, env)}),
      upenv->vars[1]);
}
 }
}
static void _V10_Dloop_D52_lambda12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dloop_D52_lambda12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D52_lambda12, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D52_lambda12, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.null?.14 9 13) (close _V10_Dloop_D52_k152) (bruijn ##.patterns.53 0 1))
    V_CALL(VGetArg(upenv, 9-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D52_k152, env)}),
      _var1);
 }
}
static void _V10_Dtransform__match_D22_k164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dtransform__match_D22_k164" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtransform__match_D22_k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtransform__match_D22_k164, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.106 8 0) (##inline ##vcore.cons 'call/cc (##inline ##vcore.cons (##inline ##vcore.cons 'lambda (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.k.50 4 0) '()) (##inline ##vcore.cons (##inline ##vcore.cons 'let (##inline ##vcore.cons (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.input.51 4 1) (##inline ##vcore.cons (bruijn ##.x.349 3 0) '())) '()) (bruijn ##.x.325 0 0))) '()))) '())))
    V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VInlineCons2(runtime,
        _V0call_Wcc,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        upenv->up->up->up->vars[0],
        VNULL),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0let,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        upenv->up->up->up->vars[1],
        VInlineCons2(runtime,
        upenv->up->up->vars[0],
        VNULL)),
        VNULL),
        _var0)),
        VNULL))),
        VNULL)));
 }
}
static void _V10_Dtransform__match_D22_k163(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dtransform__match_D22_k163" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtransform__match_D22_k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtransform__match_D22_k163, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.loop.52 1 0) (close _V10_Dtransform__match_D22_k164) (bruijn ##.x.346 0 0))
    V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtransform__match_D22_k164, env)}),
      _var0);
 }
}
static void _V10_Dtransform__match_D22_k151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dtransform__match_D22_k151" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtransform__match_D22_k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtransform__match_D22_k151, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 1 ((close _V10_Dloop_D52_lambda12)) ((bruijn ##.cddr.13 8 12) (close _V10_Dtransform__match_D22_k163) (bruijn ##.expr.25 6 1)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D52_lambda12, env)});
    V_CALL(VGetArg(upenv, 8-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtransform__match_D22_k163, env)}),
      VGetArg(upenv, 6-1, 1));
    }
 }
}
static void _V10_Dtransform__match_D22_lambda11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dtransform__match_D22_lambda11" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtransform__match_D22_lambda11, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.cadr.12 6 11) (close _V10_Dtransform__match_D22_k151) (bruijn ##.expr.25 4 1))
    V_CALL(VGetArg(upenv, 6-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtransform__match_D22_k151, env)}),
      upenv->up->up->up->vars[1]);
 }
}
static void _V10_Dtransform__match_D22_k150(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dtransform__match_D22_k150" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtransform__match_D22_k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtransform__match_D22_k150, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dtransform__match_D22_lambda11) (bruijn ##.x.315 1 0) (bruijn ##.x.316 0 0))
    V_CALL_FUNC(_V10_Dtransform__match_D22_lambda11, env, runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dtransform__match_D22_k149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dtransform__match_D22_k149" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtransform__match_D22_k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtransform__match_D22_k149, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.gensym.20 4 19) (close _V10_Dtransform__match_D22_k150) (##string ##.string.359))
    V_CALL(upenv->up->up->up->vars[19], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtransform__match_D22_k150, env)}),
      VEncodePointer(&_V10_Dstring_D359.sym, VPOINTER_OTHER));
 }
}
static void _V10_Dtransform__match_D22_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dtransform__match_D22_lambda4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtransform__match_D22_lambda4, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtransform__match_D22_lambda4, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (letrec 2 ((close _V10_Dmatch__ellipses_D27_lambda5) (close _V10_Dmatch__iter_D28_lambda10)) ((bruijn ##.gensym.20 3 19) (close _V10_Dtransform__match_D22_k149) (##string ##.string.355)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[2]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 2, 2, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D27_lambda5, env)});
    env->vars[1] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D28_lambda10, env)});
    V_CALL(upenv->up->up->vars[19], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtransform__match_D22_k149, env)}),
      VEncodePointer(&_V10_Dstring_D355.sym, VPOINTER_OTHER));
    }
 }
}
static void _V0vanity_V0compiler_V0match_V20_lambda2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17, VWORD _var18, VWORD _var19) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_lambda2" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_lambda2, runtime, upenv, 20, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7, _var8, _var9, _var10, _var11, _var12, _var13, _var14, _var15, _var16, _var17, _var18, _var19) {
  struct { VEnv env; VWORD argv[20]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 20, 20, upenv);
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
  // (letrec 2 ((close _V10_Dgather__variables_D21_lambda3) (close _V10_Dtransform__match_D22_lambda4)) ((bruijn ##.k.55 25 0) (##inline ##vcore.cons (##inline ##vcore.cons 'transform-match (bruijn ##.transform-match.22 0 1)) '())))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[2]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 2, 2, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D21_lambda3, env)});
    env->vars[1] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtransform__match_D22_lambda4, env)});
    V_CALL(VGetArg(upenv, 25-1, 0), runtime,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0transform__match,
        env->vars[1]),
        VNULL));
    }
 }
}
static void _V0vanity_V0compiler_V0match_V20_k23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k23, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0match_V20_lambda2) (bruijn ##.x.56 19 0) (bruijn ##.x.57 18 0) (bruijn ##.x.58 17 0) (bruijn ##.x.59 16 0) (bruijn ##.x.60 15 0) (bruijn ##.x.61 14 0) (bruijn ##.x.62 13 0) (bruijn ##.x.63 12 0) (bruijn ##.x.64 11 0) (bruijn ##.x.65 10 0) (bruijn ##.x.66 9 0) (bruijn ##.x.67 8 0) (bruijn ##.x.68 7 0) (bruijn ##.x.69 6 0) (bruijn ##.x.70 5 0) (bruijn ##.x.71 4 0) (bruijn ##.x.72 3 0) (bruijn ##.x.73 2 0) (bruijn ##.x.74 1 0) (bruijn ##.x.75 0 0))
    V_CALL_FUNC(_V0vanity_V0compiler_V0match_V20_lambda2, env, runtime,
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
static void _V0vanity_V0compiler_V0match_V20_k22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k22, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 19 0) (close _V0vanity_V0compiler_V0match_V20_k23) 'gensym)
    V_CALL(VGetArg(upenv, 19-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k23, env)}),
      _V0gensym);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k21, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 18 0) (close _V0vanity_V0compiler_V0match_V20_k22) 'cdr)
    V_CALL(VGetArg(upenv, 18-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k22, env)}),
      _V0cdr);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k20, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 17 0) (close _V0vanity_V0compiler_V0match_V20_k21) 'caar)
    V_CALL(VGetArg(upenv, 17-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k21, env)}),
      _V0caar);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k19, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 16 0) (close _V0vanity_V0compiler_V0match_V20_k20) 'list)
    V_CALL(VGetArg(upenv, 16-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k20, env)}),
      _V0list);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k18, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 15 0) (close _V0vanity_V0compiler_V0match_V20_k19) 'cdar)
    V_CALL(VGetArg(upenv, 15-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k19, env)}),
      _V0cdar);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k17, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 14 0) (close _V0vanity_V0compiler_V0match_V20_k18) 'cons)
    V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k18, env)}),
      _V0cons);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k16, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 13 0) (close _V0vanity_V0compiler_V0match_V20_k17) 'null?)
    V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k17, env)}),
      _V0null_Q);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k15, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 12 0) (close _V0vanity_V0compiler_V0match_V20_k16) 'cddr)
    V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k16, env)}),
      _V0cddr);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k14, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 11 0) (close _V0vanity_V0compiler_V0match_V20_k15) 'cadr)
    V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k15, env)}),
      _V0cadr);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k13, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 10 0) (close _V0vanity_V0compiler_V0match_V20_k14) 'map)
    V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k14, env)}),
      _V0map);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k12, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 9 0) (close _V0vanity_V0compiler_V0match_V20_k13) 'symbol?)
    V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k13, env)}),
      _V0symbol_Q);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k11, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 8 0) (close _V0vanity_V0compiler_V0match_V20_k12) 'vector?)
    V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k12, env)}),
      _V0vector_Q);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k10, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 7 0) (close _V0vanity_V0compiler_V0match_V20_k11) 'string?)
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k11, env)}),
      _V0string_Q);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k9, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 6 0) (close _V0vanity_V0compiler_V0match_V20_k10) 'atom?)
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k10, env)}),
      _V0atom_Q);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k8, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 5 0) (close _V0vanity_V0compiler_V0match_V20_k9) 'not)
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k9, env)}),
      _V0not);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k7, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 4 0) (close _V0vanity_V0compiler_V0match_V20_k8) 'cddar)
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k8, env)}),
      _V0cddar);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k6, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 3 0) (close _V0vanity_V0compiler_V0match_V20_k7) 'cadar)
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k7, env)}),
      _V0cadar);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k5, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 2 0) (close _V0vanity_V0compiler_V0match_V20_k6) 'pair?)
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k6, env)}),
      _V0pair_Q);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k4, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 1 0) (close _V0vanity_V0compiler_V0match_V20_k5) 'compiler-error)
    V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k5, env)}),
      _V0compiler__error);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k3, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 0 0) (close _V0vanity_V0compiler_V0match_V20_k4) 'car)
    V_CALL(_var0, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k4, env)}),
      _V0car);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k2, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.make-import (close _V0vanity_V0compiler_V0match_V20_k3) (##string ##.string.360) (bruijn ##.x.351 1 0) (bruijn ##.x.352 0 0))
    V_CALL_FUNC(VMakeImport2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k3, env)}),
      VEncodePointer(&_V10_Dstring_D360.sym, VPOINTER_OTHER),
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0match_V20_k2) (##string ##.string.361))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k2, env)}),
      VEncodePointer(&_V10_Dstring_D361.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0match_V20_lambda1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_lambda1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_lambda1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0match_V20_k1) (##string ##.string.362))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k1, env)}),
      VEncodePointer(&_V10_Dstring_D362.sym, VPOINTER_OTHER));
 }
}
VFunc _V0vanity_V0compiler_V0match_V20 = (VFunc)_V0vanity_V0compiler_V0match_V20_lambda1;
