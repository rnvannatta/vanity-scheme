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
static struct { VBlob sym; char bytes[21]; } _V10string_D308 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[33]; } _V10string_D307 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
static struct { VBlob sym; char bytes[33]; } _V10string_D306 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0match_V20" };
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
static struct { VBlob sym; char bytes[6]; } _V10string_D305 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "input" };
VWEAK VWORD _V0else;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0else = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "else" };
VWEAK VWORD _V0begin;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0begin = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "begin" };
static struct { VBlob sym; char bytes[26]; } _V10string_D304 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "match statement exhausted" };
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "error" };
static struct { VBlob sym; char bytes[30]; } _V10string_D303 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "unknown form in match pattern" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
static struct { VBlob sym; char bytes[16]; } _V10string_D302 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "malformed quote" };
VWEAK VWORD _V10sys_Deq_Q;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V10sys_Deq_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "##sys.eq\?" };
VWEAK VWORD _V10sys_Dblob_E_Q;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V10sys_Dblob_E_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "##sys.blob=\?" };
VWEAK VWORD _V10sys_Dstring_Q;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10sys_Dstring_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##sys.string\?" };
VWEAK VWORD _V0and;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0and = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "and" };
VWEAK VWORD _V10sys_Dnull_Q;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10sys_Dnull_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##sys.null\?" };
static struct { VBlob sym; char bytes[3]; } _V10string_D301 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "kk" };
static struct { VBlob sym; char bytes[5]; } _V10string_D300 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "expr" };
VWEAK VWORD _V10sys_Dcar;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V10sys_Dcar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "##sys.car" };
VWEAK VWORD _V10sys_Dcons;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V10sys_Dcons = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "##sys.cons" };
VWEAK VWORD _V10sys_Dcdr;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V10sys_Dcdr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "##sys.cdr" };
VWEAK VWORD _V0reverse;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0reverse = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "reverse" };
VWEAK VWORD _V0tail__expr;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0tail__expr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "tail-expr" };
VWEAK VWORD _V10sys_Dpair_Q;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10sys_Dpair_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##sys.pair\?" };
VWEAK VWORD _V10sys_Dnot;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V10sys_Dnot = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "##sys.not" };
VWEAK VWORD _V0if;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0if = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "if" };
VWEAK VWORD _V0loop;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0loop = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "loop" };
VWEAK VWORD _V0let;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0let = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "let" };
VWEAK VWORD _V0call_Wcc;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0call_Wcc = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "call/cc" };
VWEAK VWORD _V0lambda;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "lambda" };
VWEAK VWORD _V0call__with__values;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0call__with__values = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "call-with-values" };
VWEAK VWORD _V0_U;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_U = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "_" };
VWEAK VWORD _V0_D_D_D;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0_D_D_D = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "..." };
VWEAK VWORD _V0quote;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0quote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "quote" };
static struct { VBlob sym; char bytes[39]; } _V10string_D299 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 39 }, "vectors in matches not implemented yet" };
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
  _V10sys_Deq_Q = VEncodePointer(VLookupConstant("_V10sys_Deq_Q", &_VW_V10sys_Deq_Q), VPOINTER_OTHER);
  _V10sys_Dblob_E_Q = VEncodePointer(VLookupConstant("_V10sys_Dblob_E_Q", &_VW_V10sys_Dblob_E_Q), VPOINTER_OTHER);
  _V10sys_Dstring_Q = VEncodePointer(VLookupConstant("_V10sys_Dstring_Q", &_VW_V10sys_Dstring_Q), VPOINTER_OTHER);
  _V0and = VEncodePointer(VLookupConstant("_V0and", &_VW_V0and), VPOINTER_OTHER);
  _V10sys_Dnull_Q = VEncodePointer(VLookupConstant("_V10sys_Dnull_Q", &_VW_V10sys_Dnull_Q), VPOINTER_OTHER);
  _V10sys_Dcar = VEncodePointer(VLookupConstant("_V10sys_Dcar", &_VW_V10sys_Dcar), VPOINTER_OTHER);
  _V10sys_Dcons = VEncodePointer(VLookupConstant("_V10sys_Dcons", &_VW_V10sys_Dcons), VPOINTER_OTHER);
  _V10sys_Dcdr = VEncodePointer(VLookupConstant("_V10sys_Dcdr", &_VW_V10sys_Dcdr), VPOINTER_OTHER);
  _V0reverse = VEncodePointer(VLookupConstant("_V0reverse", &_VW_V0reverse), VPOINTER_OTHER);
  _V0tail__expr = VEncodePointer(VLookupConstant("_V0tail__expr", &_VW_V0tail__expr), VPOINTER_OTHER);
  _V10sys_Dpair_Q = VEncodePointer(VLookupConstant("_V10sys_Dpair_Q", &_VW_V10sys_Dpair_Q), VPOINTER_OTHER);
  _V10sys_Dnot = VEncodePointer(VLookupConstant("_V10sys_Dnot", &_VW_V10sys_Dnot), VPOINTER_OTHER);
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
static void _V0vanity_V0compiler_V0match_V20_k27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k27, runtime, upenv, 1, argc, _var0) {
  // ((bruijn gather-variables 5 0) (bruijn ##k.22 4 0) (bruijn ##x.25 0 0) (bruijn eqv? 4 2))
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      upenv->up->up->up->vars[0],
      _var0,
      upenv->up->up->up->vars[2]);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k30" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k30, runtime, upenv, 1, argc, _var0) {
  // ((bruijn gather-variables 7 0) (bruijn ##k.22 6 0) (bruijn ##x.27 0 0) (bruijn eqv? 6 2))
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0,
      VGetArg(upenv, 6-1, 2));
 }
}
static void _V0vanity_V0compiler_V0match_V20_k35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k35, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 12 14) (bruijn ##k.22 10 0) (bruijn ##x.29 2 0) (bruijn ##x.30 0 0))
V_CALL(VGetArg(upenv, 12-1, 14), runtime,
      VGetArg(upenv, 10-1, 0),
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k34, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn gather-variables 10 0) (close _V0vanity_V0compiler_V0match_V20_k35) (bruijn ##x.31 0 0) (bruijn eqv? 9 2))
V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k35, env)}),
      _var0,
      VGetArg(upenv, 9-1, 2));
 }
}
static void _V0vanity_V0compiler_V0match_V20_k33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k33, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 10 18) (close _V0vanity_V0compiler_V0match_V20_k34) (bruijn pattern 8 1))
V_CALL(VGetArg(upenv, 10-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k34, env)}),
      VGetArg(upenv, 8-1, 1));
 }
}
static void _V0vanity_V0compiler_V0match_V20_k38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k38, runtime, upenv, 1, argc, _var0) {
  // ((bruijn compiler-error 12 1) (bruijn ##k.22 10 0) (##string ##string.299) (bruijn ##x.33 0 0))
V_CALL(VGetArg(upenv, 12-1, 1), runtime,
      VGetArg(upenv, 10-1, 0),
      VEncodePointer(&_V10string_D299.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k41, runtime, upenv, 1, argc, _var0) {
  // ((bruijn gather-variables 13 0) (bruijn ##k.22 12 0) (bruijn ##x.35 0 0) (bruijn eqv? 12 2))
V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VGetArg(upenv, 12-1, 0),
      _var0,
      VGetArg(upenv, 12-1, 2));
 }
}
static void _V0vanity_V0compiler_V0match_V20_k45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k45" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k45, runtime, upenv, 1, argc, _var0) {
  // ((bruijn eqv? 15 2) (bruijn ##k.44 1 0) (bruijn ##x.45 0 0) 'quote)
V_CALL(VGetArg(upenv, 15-1, 2), runtime,
      upenv->vars[0],
      _var0,
      _V0quote);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k44" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k44, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.43 1 0) ((bruijn caar 16 17) (close _V0vanity_V0compiler_V0match_V20_k45) (bruijn pattern 14 1)) ((bruijn ##k.44 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 16-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k45, env)}),
      VGetArg(upenv, 14-1, 1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0match_V20_k47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k47" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k47, runtime, upenv, 1, argc, _var0) {
  // ((bruijn gather-variables 16 0) (bruijn ##k.22 15 0) (bruijn ##x.37 0 0) (bruijn eqv? 15 2))
V_CALL(VGetArg(upenv, 16-1, 0), runtime,
      VGetArg(upenv, 15-1, 0),
      _var0,
      VGetArg(upenv, 15-1, 2));
 }
}
static void _V0vanity_V0compiler_V0match_V20_k50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k50" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k50, runtime, upenv, 1, argc, _var0) {
  // ((bruijn gather-variables 18 0) (bruijn ##k.22 17 0) (##inline ##sys.cons (bruijn ##x.39 2 0) (##inline ##sys.cons (bruijn ##x.41 1 0) (bruijn ##x.42 0 0))) (bruijn eqv? 17 2))
V_CALL(VGetArg(upenv, 18-1, 0), runtime,
      VGetArg(upenv, 17-1, 0),
      VInlineCons(
        upenv->up->vars[0],
        VInlineCons(
        upenv->vars[0],
        _var0)),
      VGetArg(upenv, 17-1, 2));
 }
}
static void _V0vanity_V0compiler_V0match_V20_k49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k49" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k49, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 18 18) (close _V0vanity_V0compiler_V0match_V20_k50) (bruijn pattern 16 1))
V_CALL(VGetArg(upenv, 18-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k50, env)}),
      VGetArg(upenv, 16-1, 1));
 }
}
static void _V0vanity_V0compiler_V0match_V20_k48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k48" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k48, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdar 17 15) (close _V0vanity_V0compiler_V0match_V20_k49) (bruijn pattern 15 1))
V_CALL(VGetArg(upenv, 17-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k49, env)}),
      VGetArg(upenv, 15-1, 1));
 }
}
static void _V0vanity_V0compiler_V0match_V20_k46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k46" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k46, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.36 0 0) ((bruijn cdr 16 18) (close _V0vanity_V0compiler_V0match_V20_k47) (bruijn pattern 14 1)) ((bruijn caar 16 17) (close _V0vanity_V0compiler_V0match_V20_k48) (bruijn pattern 14 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 16-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k47, env)}),
      VGetArg(upenv, 14-1, 1));
} else {
V_CALL(VGetArg(upenv, 16-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k48, env)}),
      VGetArg(upenv, 14-1, 1));
}
 }
}
static void _V0vanity_V0compiler_V0match_V20_k43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k43, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0match_V20_k44) (close _V0vanity_V0compiler_V0match_V20_k46))
V_CALL_FUNC(_V0vanity_V0compiler_V0match_V20_k44, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k46, env)}));
 }
}
static void _V0vanity_V0compiler_V0match_V20_k42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k42" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k42, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn pair? 14 2) (close _V0vanity_V0compiler_V0match_V20_k43) (bruijn ##x.46 0 0))
V_CALL(VGetArg(upenv, 14-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k43, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k40, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.34 0 0) ((bruijn cdr 13 18) (close _V0vanity_V0compiler_V0match_V20_k41) (bruijn pattern 11 1)) ((bruijn car 13 0) (close _V0vanity_V0compiler_V0match_V20_k42) (bruijn pattern 11 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 13-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k41, env)}),
      VGetArg(upenv, 11-1, 1));
} else {
V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k42, env)}),
      VGetArg(upenv, 11-1, 1));
}
 }
}
static void _V0vanity_V0compiler_V0match_V20_k39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k39, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn atom? 12 6) (close _V0vanity_V0compiler_V0match_V20_k40) (bruijn ##x.47 0 0))
V_CALL(VGetArg(upenv, 12-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k40, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k37" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k37, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.32 0 0) ((bruijn car 11 0) (close _V0vanity_V0compiler_V0match_V20_k38) (bruijn pattern 9 1)) ((bruijn car 11 0) (close _V0vanity_V0compiler_V0match_V20_k39) (bruijn pattern 9 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k38, env)}),
      VGetArg(upenv, 9-1, 1));
} else {
V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k39, env)}),
      VGetArg(upenv, 9-1, 1));
}
 }
}
static void _V0vanity_V0compiler_V0match_V20_k36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k36, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn vector? 10 8) (close _V0vanity_V0compiler_V0match_V20_k37) (bruijn ##x.48 0 0))
V_CALL(VGetArg(upenv, 10-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k37, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k32" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k32, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.28 0 0) ((bruijn car 9 0) (close _V0vanity_V0compiler_V0match_V20_k33) (bruijn pattern 7 1)) ((bruijn car 9 0) (close _V0vanity_V0compiler_V0match_V20_k36) (bruijn pattern 7 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k33, env)}),
      VGetArg(upenv, 7-1, 1));
} else {
V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k36, env)}),
      VGetArg(upenv, 7-1, 1));
}
 }
}
static void _V0vanity_V0compiler_V0match_V20_k31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k31" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k31, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn symbol? 8 9) (close _V0vanity_V0compiler_V0match_V20_k32) (bruijn ##x.49 0 0))
V_CALL(VGetArg(upenv, 8-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k32, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k29, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.26 0 0) ((bruijn cdr 7 18) (close _V0vanity_V0compiler_V0match_V20_k30) (bruijn pattern 5 1)) ((bruijn car 7 0) (close _V0vanity_V0compiler_V0match_V20_k31) (bruijn pattern 5 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 7-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k30, env)}),
      VGetArg(upenv, 5-1, 1));
} else {
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k31, env)}),
      VGetArg(upenv, 5-1, 1));
}
 }
}
static void _V0vanity_V0compiler_V0match_V20_k28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k28, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn eqv? 4 2) (close _V0vanity_V0compiler_V0match_V20_k29) (bruijn ##x.50 0 0) '...)
V_CALL(upenv->up->up->up->vars[2], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k29, env)}),
      _var0,
      _V0_D_D_D);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k26, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.24 0 0) ((bruijn cdr 5 18) (close _V0vanity_V0compiler_V0match_V20_k27) (bruijn pattern 3 1)) ((bruijn car 5 0) (close _V0vanity_V0compiler_V0match_V20_k28) (bruijn pattern 3 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 5-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k27, env)}),
      upenv->up->up->vars[1]);
} else {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k28, env)}),
      upenv->up->up->vars[1]);
}
 }
}
static void _V0vanity_V0compiler_V0match_V20_k25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k25, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn eqv? 2 2) (close _V0vanity_V0compiler_V0match_V20_k26) (bruijn ##x.51 0 0) '_)
V_CALL(upenv->up->vars[2], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k26, env)}),
      _var0,
      _V0_U);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k24, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.23 0 0) ((bruijn ##k.22 1 0) '()) ((bruijn car 3 0) (close _V0vanity_V0compiler_V0match_V20_k25) (bruijn pattern 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      VNULL);
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k25, env)}),
      upenv->vars[1]);
}
 }
}
static void _V0vanity_V0compiler_V0match_V20_lambda3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_lambda3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_lambda3, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_lambda3, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 2 13) (close _V0vanity_V0compiler_V0match_V20_k24) (bruijn pattern 0 1))
V_CALL(upenv->up->vars[13], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k24, env)}),
      _var1);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k71" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k71, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.53 21 0) (##inline ##sys.cons 'call-with-values (##inline ##sys.cons (##inline ##sys.cons 'lambda (##inline ##sys.cons '() (##inline ##sys.cons (##inline ##sys.cons 'call/cc (##inline ##sys.cons (##inline ##sys.cons 'lambda (##inline ##sys.cons (##inline ##sys.cons (bruijn k 14 0) '()) (##inline ##sys.cons (##inline ##sys.cons 'let (##inline ##sys.cons 'loop (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.cons (bruijn expr 12 0) (##inline ##sys.cons (bruijn ##x.129 11 0) '())) (bruijn ##x.123 10 0)) (##inline ##sys.cons (##inline ##sys.cons 'if (##inline ##sys.cons (##inline ##sys.cons '##sys.not (##inline ##sys.cons (##inline ##sys.cons '##sys.pair? (##inline ##sys.cons (bruijn expr 12 0) '())) '())) (##inline ##sys.cons (##inline ##sys.cons (bruijn k 14 0) (##inline ##sys.cons (bruijn expr 12 0) (bruijn ##x.116 9 0))) '()))) (##inline ##sys.cons (##inline ##sys.cons 'call-with-values (##inline ##sys.cons (##inline ##sys.cons 'lambda (##inline ##sys.cons '() (##inline ##sys.cons (##inline ##sys.cons 'call/cc (##inline ##sys.cons (##inline ##sys.cons 'lambda (##inline ##sys.cons (##inline ##sys.cons (bruijn k2 13 0) '()) (##inline ##sys.cons (bruijn ##x.92 5 0) (##inline ##sys.cons (##inline ##sys.cons (bruijn k 14 0) (##inline ##sys.cons (bruijn expr 12 0) (bruijn ##x.96 4 0))) '())))) '())) '()))) (##inline ##sys.cons 'loop '()))) '()))))) '()))) '())) '()))) (##inline ##sys.cons (##inline ##sys.cons 'lambda (##inline ##sys.cons (##inline ##sys.cons 'tail-expr (bruijn variables 16 0)) (##inline ##sys.cons (bruijn ##x.61 0 0) '()))) '()))))
V_CALL(VGetArg(upenv, 21-1, 0), runtime,
      VInlineCons(
        _V0call__with__values,
        VInlineCons(
        VInlineCons(
        _V0lambda,
        VInlineCons(
        VNULL,
        VInlineCons(
        VInlineCons(
        _V0call_Wcc,
        VInlineCons(
        VInlineCons(
        _V0lambda,
        VInlineCons(
        VInlineCons(
        VGetArg(upenv, 14-1, 0),
        VNULL),
        VInlineCons(
        VInlineCons(
        _V0let,
        VInlineCons(
        _V0loop,
        VInlineCons(
        VInlineCons(
        VInlineCons(
        VGetArg(upenv, 12-1, 0),
        VInlineCons(
        VGetArg(upenv, 11-1, 0),
        VNULL)),
        VGetArg(upenv, 10-1, 0)),
        VInlineCons(
        VInlineCons(
        _V0if,
        VInlineCons(
        VInlineCons(
        _V10sys_Dnot,
        VInlineCons(
        VInlineCons(
        _V10sys_Dpair_Q,
        VInlineCons(
        VGetArg(upenv, 12-1, 0),
        VNULL)),
        VNULL)),
        VInlineCons(
        VInlineCons(
        VGetArg(upenv, 14-1, 0),
        VInlineCons(
        VGetArg(upenv, 12-1, 0),
        VGetArg(upenv, 9-1, 0))),
        VNULL))),
        VInlineCons(
        VInlineCons(
        _V0call__with__values,
        VInlineCons(
        VInlineCons(
        _V0lambda,
        VInlineCons(
        VNULL,
        VInlineCons(
        VInlineCons(
        _V0call_Wcc,
        VInlineCons(
        VInlineCons(
        _V0lambda,
        VInlineCons(
        VInlineCons(
        VGetArg(upenv, 13-1, 0),
        VNULL),
        VInlineCons(
        VGetArg(upenv, 5-1, 0),
        VInlineCons(
        VInlineCons(
        VGetArg(upenv, 14-1, 0),
        VInlineCons(
        VGetArg(upenv, 12-1, 0),
        upenv->up->up->up->vars[0])),
        VNULL)))),
        VNULL)),
        VNULL))),
        VInlineCons(
        _V0loop,
        VNULL))),
        VNULL))))),
        VNULL))),
        VNULL)),
        VNULL))),
        VInlineCons(
        VInlineCons(
        _V0lambda,
        VInlineCons(
        VInlineCons(
        _V0tail__expr,
        VGetArg(upenv, 16-1, 0)),
        VInlineCons(
        _var0,
        VNULL))),
        VNULL))));
 }
}
static void _V0vanity_V0compiler_V0match_V20_k70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k70" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k70, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn match-iter 21 1) (close _V0vanity_V0compiler_V0match_V20_k71) (bruijn ##x.62 1 0) (bruijn ##x.63 0 0) (bruijn success-expr 20 3))
V_CALL(VGetArg(upenv, 21-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k71, env)}),
      upenv->vars[0],
      _var0,
      VGetArg(upenv, 20-1, 3));
 }
}
static void _V0vanity_V0compiler_V0match_V20_k69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k69" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k69, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 23 14) (close _V0vanity_V0compiler_V0match_V20_k70) (bruijn tail-pattern 17 0) (bruijn pattern-stack 16 0))
V_CALL(VGetArg(upenv, 23-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k70, env)}),
      VGetArg(upenv, 17-1, 0),
      VGetArg(upenv, 16-1, 0));
 }
}
static void _V0vanity_V0compiler_V0match_V20_k68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k68" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k68, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 22 14) (close _V0vanity_V0compiler_V0match_V20_k69) 'tail-expr (bruijn ##x.64 0 0))
V_CALL(VGetArg(upenv, 22-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k69, env)}),
      _V0tail__expr,
      _var0);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k67" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k67, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 21 18) (close _V0vanity_V0compiler_V0match_V20_k68) (bruijn expr-stack 17 1))
V_CALL(VGetArg(upenv, 21-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k68, env)}),
      VGetArg(upenv, 17-1, 1));
 }
}
static void _V0vanity_V0compiler_V0match_V20_lambda6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_lambda6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_lambda6, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_lambda6, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.97 0 0) (##inline ##sys.cons 'reverse (##inline ##sys.cons (bruijn sym 0 1) '())))
V_CALL(_var0, runtime,
      VInlineCons(
        _V0reverse,
        VInlineCons(
        _var1,
        VNULL)));
 }
}
static void _V0vanity_V0compiler_V0match_V20_k66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k66" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k66, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn map 20 10) (close _V0vanity_V0compiler_V0match_V20_k67) (close _V0vanity_V0compiler_V0match_V20_lambda6) (bruijn syms 10 0))
V_CALL(VGetArg(upenv, 20-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k67, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_lambda6, env)}),
      VGetArg(upenv, 10-1, 0));
 }
}
static void _V0vanity_V0compiler_V0match_V20_k65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k65" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k65, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn match-iter 16 1) (close _V0vanity_V0compiler_V0match_V20_k66) (bruijn ##x.99 2 0) (bruijn ##x.100 1 0) (##inline ##sys.cons (bruijn k2 7 0) (##inline ##sys.cons (##inline ##sys.cons '##sys.cdr (##inline ##sys.cons (bruijn expr 6 0) '())) (bruijn ##x.104 0 0))))
V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k66, env)}),
      upenv->up->vars[0],
      upenv->vars[0],
      VInlineCons(
        VGetArg(upenv, 7-1, 0),
        VInlineCons(
        VInlineCons(
        _V10sys_Dcdr,
        VInlineCons(
        VGetArg(upenv, 6-1, 0),
        VNULL)),
        _var0)));
 }
}
static void _V0vanity_V0compiler_V0match_V20_lambda7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_lambda7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_lambda7, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_lambda7, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // ((bruijn ##k.105 0 0) (##inline ##sys.cons '##sys.cons (##inline ##sys.cons (bruijn var 0 1) (##inline ##sys.cons (bruijn sym 0 2) '()))))
V_CALL(_var0, runtime,
      VInlineCons(
        _V10sys_Dcons,
        VInlineCons(
        _var1,
        VInlineCons(
        _var2,
        VNULL))));
 }
}
static void _V0vanity_V0compiler_V0match_V20_k64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k64" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k64, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn map 18 10) (close _V0vanity_V0compiler_V0match_V20_k65) (close _V0vanity_V0compiler_V0match_V20_lambda7) (bruijn variables 9 0) (bruijn syms 8 0))
V_CALL(VGetArg(upenv, 18-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k65, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_lambda7, env)}),
      VGetArg(upenv, 9-1, 0),
      VGetArg(upenv, 8-1, 0));
 }
}
static void _V0vanity_V0compiler_V0match_V20_k63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k63" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k63, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn list 17 16) (close _V0vanity_V0compiler_V0match_V20_k64) (bruijn pattern 12 0))
V_CALL(VGetArg(upenv, 17-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k64, env)}),
      VGetArg(upenv, 12-1, 0));
 }
}
static void _V0vanity_V0compiler_V0match_V20_k62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k62" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k62, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn list 16 16) (close _V0vanity_V0compiler_V0match_V20_k63) (##inline ##sys.cons '##sys.car (##inline ##sys.cons (bruijn expr 3 0) '())))
V_CALL(VGetArg(upenv, 16-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k63, env)}),
      VInlineCons(
        _V10sys_Dcar,
        VInlineCons(
        upenv->up->up->vars[0],
        VNULL)));
 }
}
static void _V0vanity_V0compiler_V0match_V20_lambda8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_lambda8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_lambda8, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_lambda8, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.117 0 0) (##inline ##sys.cons 'reverse (##inline ##sys.cons (bruijn sym 0 1) '())))
V_CALL(_var0, runtime,
      VInlineCons(
        _V0reverse,
        VInlineCons(
        _var1,
        VNULL)));
 }
}
static void _V0vanity_V0compiler_V0match_V20_k61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k61" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k61, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn map 15 10) (close _V0vanity_V0compiler_V0match_V20_k62) (close _V0vanity_V0compiler_V0match_V20_lambda8) (bruijn syms 5 0))
V_CALL(VGetArg(upenv, 15-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k62, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_lambda8, env)}),
      VGetArg(upenv, 5-1, 0));
 }
}
static void _V0vanity_V0compiler_V0match_V20_lambda9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_lambda9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_lambda9, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_lambda9, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.124 0 0) (##inline ##sys.cons (bruijn sym 0 1) (##inline ##sys.cons (##inline ##sys.cons 'quote (##inline ##sys.cons '() '())) '())))
V_CALL(_var0, runtime,
      VInlineCons(
        _var1,
        VInlineCons(
        VInlineCons(
        _V0quote,
        VInlineCons(
        VNULL,
        VNULL)),
        VNULL)));
 }
}
static void _V0vanity_V0compiler_V0match_V20_k60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k60" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k60, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn map 14 10) (close _V0vanity_V0compiler_V0match_V20_k61) (close _V0vanity_V0compiler_V0match_V20_lambda9) (bruijn syms 4 0))
V_CALL(VGetArg(upenv, 14-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k61, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_lambda9, env)}),
      upenv->up->up->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k59" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k59, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn car 13 0) (close _V0vanity_V0compiler_V0match_V20_k60) (bruijn expr-stack 9 1))
V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k60, env)}),
      VGetArg(upenv, 9-1, 1));
 }
}
static void _V0vanity_V0compiler_V0match_V20_k58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k58" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k58, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn gensym 12 19) (close _V0vanity_V0compiler_V0match_V20_k59) (##string ##string.300))
V_CALL(VGetArg(upenv, 12-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k59, env)}),
      VEncodePointer(&_V10string_D300.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0match_V20_k57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k57" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k57, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn gensym 11 19) (close _V0vanity_V0compiler_V0match_V20_k58) (##string ##string.301))
V_CALL(VGetArg(upenv, 11-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k58, env)}),
      VEncodePointer(&_V10string_D301.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0match_V20_k56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k56" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k56, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn gensym 10 19) (close _V0vanity_V0compiler_V0match_V20_k57) (##string ##string.301))
V_CALL(VGetArg(upenv, 10-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k57, env)}),
      VEncodePointer(&_V10string_D301.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0match_V20_k55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k55" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k55, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn map 9 10) (close _V0vanity_V0compiler_V0match_V20_k56) (bruijn gensym 9 19) (bruijn variables 0 0))
V_CALL(VGetArg(upenv, 9-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k56, env)}),
      VGetArg(upenv, 9-1, 19),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k54" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k54, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn gather-variables 7 0) (close _V0vanity_V0compiler_V0match_V20_k55) (bruijn ##x.130 0 0) (bruijn eqv? 6 2))
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k55, env)}),
      _var0,
      VGetArg(upenv, 6-1, 2));
 }
}
static void _V0vanity_V0compiler_V0match_V20_k53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k53" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k53, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn list 7 16) (close _V0vanity_V0compiler_V0match_V20_k54) (bruijn pattern 2 0))
V_CALL(VGetArg(upenv, 7-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k54, env)}),
      upenv->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k52" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k52, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 6 18) (close _V0vanity_V0compiler_V0match_V20_k53) (bruijn pattern-stack 2 2))
V_CALL(VGetArg(upenv, 6-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k53, env)}),
      upenv->up->vars[2]);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k51" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k51, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cddar 5 4) (close _V0vanity_V0compiler_V0match_V20_k52) (bruijn pattern-stack 1 2))
V_CALL(VGetArg(upenv, 5-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k52, env)}),
      upenv->vars[2]);
 }
}
static void _V0vanity_V0compiler_V0match_V20_lambda5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_lambda5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_lambda5, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_lambda5, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn caar 4 17) (close _V0vanity_V0compiler_V0match_V20_k51) (bruijn pattern-stack 0 2))
V_CALL(upenv->up->up->up->vars[17], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k51, env)}),
      _var2);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k76" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k76, runtime, upenv, 1, argc, _var0) {
  // ((bruijn match-iter 6 1) (bruijn ##k.131 5 0) (bruijn ##x.134 1 0) (bruijn ##x.135 0 0) (bruijn success-expr 5 3))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      upenv->vars[0],
      _var0,
      VGetArg(upenv, 5-1, 3));
 }
}
static void _V0vanity_V0compiler_V0match_V20_k75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k75" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k75, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 8 18) (close _V0vanity_V0compiler_V0match_V20_k76) (bruijn pattern-stack 4 2))
V_CALL(VGetArg(upenv, 8-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k76, env)}),
      upenv->up->up->up->vars[2]);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k83" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k83, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.131 10 0) (##inline ##sys.cons 'let (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.cons (bruijn ##x.144 4 0) (##inline ##sys.cons (bruijn ##x.146 3 0) '())) '()) (##inline ##sys.cons (bruijn ##x.140 0 0) '()))))
V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      VInlineCons(
        _V0let,
        VInlineCons(
        VInlineCons(
        VInlineCons(
        upenv->up->up->up->vars[0],
        VInlineCons(
        upenv->up->up->vars[0],
        VNULL)),
        VNULL),
        VInlineCons(
        _var0,
        VNULL))));
 }
}
static void _V0vanity_V0compiler_V0match_V20_k82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k82" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k82, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn match-iter 10 1) (close _V0vanity_V0compiler_V0match_V20_k83) (bruijn ##x.141 1 0) (bruijn ##x.142 0 0) (bruijn success-expr 9 3))
V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k83, env)}),
      upenv->vars[0],
      _var0,
      VGetArg(upenv, 9-1, 3));
 }
}
static void _V0vanity_V0compiler_V0match_V20_k81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k81" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k81, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 12 18) (close _V0vanity_V0compiler_V0match_V20_k82) (bruijn pattern-stack 8 2))
V_CALL(VGetArg(upenv, 12-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k82, env)}),
      VGetArg(upenv, 8-1, 2));
 }
}
static void _V0vanity_V0compiler_V0match_V20_k80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k80" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k80, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 11 18) (close _V0vanity_V0compiler_V0match_V20_k81) (bruijn expr-stack 7 1))
V_CALL(VGetArg(upenv, 11-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k81, env)}),
      VGetArg(upenv, 7-1, 1));
 }
}
static void _V0vanity_V0compiler_V0match_V20_k79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k79" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k79, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn car 10 0) (close _V0vanity_V0compiler_V0match_V20_k80) (bruijn expr-stack 6 1))
V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k80, env)}),
      VGetArg(upenv, 6-1, 1));
 }
}
static void _V0vanity_V0compiler_V0match_V20_k86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k86" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k86, runtime, upenv, 1, argc, _var0) {
  // ((bruijn compiler-error 12 1) (bruijn ##k.131 8 0) (##string ##string.299) (bruijn ##x.148 0 0))
V_CALL(VGetArg(upenv, 12-1, 1), runtime,
      VGetArg(upenv, 8-1, 0),
      VEncodePointer(&_V10string_D299.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k92" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k92, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.131 13 0) (##inline ##sys.cons 'if (##inline ##sys.cons (##inline ##sys.cons '##sys.null? (##inline ##sys.cons (bruijn ##x.157 3 0) '())) (##inline ##sys.cons (bruijn ##x.153 0 0) '()))))
V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VInlineCons(
        _V0if,
        VInlineCons(
        VInlineCons(
        _V10sys_Dnull_Q,
        VInlineCons(
        upenv->up->up->vars[0],
        VNULL)),
        VInlineCons(
        _var0,
        VNULL))));
 }
}
static void _V0vanity_V0compiler_V0match_V20_k91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k91" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k91, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn match-iter 13 1) (close _V0vanity_V0compiler_V0match_V20_k92) (bruijn ##x.154 1 0) (bruijn ##x.155 0 0) (bruijn success-expr 12 3))
V_CALL(VGetArg(upenv, 13-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k92, env)}),
      upenv->vars[0],
      _var0,
      VGetArg(upenv, 12-1, 3));
 }
}
static void _V0vanity_V0compiler_V0match_V20_k90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k90" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k90, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 15 18) (close _V0vanity_V0compiler_V0match_V20_k91) (bruijn pattern-stack 11 2))
V_CALL(VGetArg(upenv, 15-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k91, env)}),
      VGetArg(upenv, 11-1, 2));
 }
}
static void _V0vanity_V0compiler_V0match_V20_k89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k89" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k89, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 14 18) (close _V0vanity_V0compiler_V0match_V20_k90) (bruijn expr-stack 10 1))
V_CALL(VGetArg(upenv, 14-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k90, env)}),
      VGetArg(upenv, 10-1, 1));
 }
}
static void _V0vanity_V0compiler_V0match_V20_k100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k100" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k100, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.131 17 0) (##inline ##sys.cons 'if (##inline ##sys.cons (##inline ##sys.cons 'and (##inline ##sys.cons (##inline ##sys.cons '##sys.string? (##inline ##sys.cons (bruijn ##x.174 5 0) '())) (##inline ##sys.cons (##inline ##sys.cons '##sys.blob=? (##inline ##sys.cons (bruijn ##x.170 4 0) (##inline ##sys.cons (bruijn ##x.172 3 0) '()))) '()))) (##inline ##sys.cons (bruijn ##x.162 0 0) '()))))
V_CALL(VGetArg(upenv, 17-1, 0), runtime,
      VInlineCons(
        _V0if,
        VInlineCons(
        VInlineCons(
        _V0and,
        VInlineCons(
        VInlineCons(
        _V10sys_Dstring_Q,
        VInlineCons(
        VGetArg(upenv, 5-1, 0),
        VNULL)),
        VInlineCons(
        VInlineCons(
        _V10sys_Dblob_E_Q,
        VInlineCons(
        upenv->up->up->up->vars[0],
        VInlineCons(
        upenv->up->up->vars[0],
        VNULL))),
        VNULL))),
        VInlineCons(
        _var0,
        VNULL))));
 }
}
static void _V0vanity_V0compiler_V0match_V20_k99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k99" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k99, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn match-iter 17 1) (close _V0vanity_V0compiler_V0match_V20_k100) (bruijn ##x.163 1 0) (bruijn ##x.164 0 0) (bruijn success-expr 16 3))
V_CALL(VGetArg(upenv, 17-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k100, env)}),
      upenv->vars[0],
      _var0,
      VGetArg(upenv, 16-1, 3));
 }
}
static void _V0vanity_V0compiler_V0match_V20_k98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k98" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k98, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 19 18) (close _V0vanity_V0compiler_V0match_V20_k99) (bruijn pattern-stack 15 2))
V_CALL(VGetArg(upenv, 19-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k99, env)}),
      VGetArg(upenv, 15-1, 2));
 }
}
static void _V0vanity_V0compiler_V0match_V20_k97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k97" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k97, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 18 18) (close _V0vanity_V0compiler_V0match_V20_k98) (bruijn expr-stack 14 1))
V_CALL(VGetArg(upenv, 18-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k98, env)}),
      VGetArg(upenv, 14-1, 1));
 }
}
static void _V0vanity_V0compiler_V0match_V20_k96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k96" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k96, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn car 17 0) (close _V0vanity_V0compiler_V0match_V20_k97) (bruijn expr-stack 13 1))
V_CALL(VGetArg(upenv, 17-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k97, env)}),
      VGetArg(upenv, 13-1, 1));
 }
}
static void _V0vanity_V0compiler_V0match_V20_k95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k95" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k95, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn car 16 0) (close _V0vanity_V0compiler_V0match_V20_k96) (bruijn pattern-stack 12 2))
V_CALL(VGetArg(upenv, 16-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k96, env)}),
      VGetArg(upenv, 12-1, 2));
 }
}
static void _V0vanity_V0compiler_V0match_V20_k107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k107" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k107, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.131 18 0) (##inline ##sys.cons 'if (##inline ##sys.cons (##inline ##sys.cons '##sys.eq? (##inline ##sys.cons (bruijn ##x.183 4 0) (##inline ##sys.cons (bruijn ##x.185 3 0) '()))) (##inline ##sys.cons (bruijn ##x.179 0 0) '()))))
V_CALL(VGetArg(upenv, 18-1, 0), runtime,
      VInlineCons(
        _V0if,
        VInlineCons(
        VInlineCons(
        _V10sys_Deq_Q,
        VInlineCons(
        upenv->up->up->up->vars[0],
        VInlineCons(
        upenv->up->up->vars[0],
        VNULL))),
        VInlineCons(
        _var0,
        VNULL))));
 }
}
static void _V0vanity_V0compiler_V0match_V20_k106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k106" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k106, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn match-iter 18 1) (close _V0vanity_V0compiler_V0match_V20_k107) (bruijn ##x.180 1 0) (bruijn ##x.181 0 0) (bruijn success-expr 17 3))
V_CALL(VGetArg(upenv, 18-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k107, env)}),
      upenv->vars[0],
      _var0,
      VGetArg(upenv, 17-1, 3));
 }
}
static void _V0vanity_V0compiler_V0match_V20_k105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k105" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k105, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 20 18) (close _V0vanity_V0compiler_V0match_V20_k106) (bruijn pattern-stack 16 2))
V_CALL(VGetArg(upenv, 20-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k106, env)}),
      VGetArg(upenv, 16-1, 2));
 }
}
static void _V0vanity_V0compiler_V0match_V20_k104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k104" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k104, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 19 18) (close _V0vanity_V0compiler_V0match_V20_k105) (bruijn expr-stack 15 1))
V_CALL(VGetArg(upenv, 19-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k105, env)}),
      VGetArg(upenv, 15-1, 1));
 }
}
static void _V0vanity_V0compiler_V0match_V20_k103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k103" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k103, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn car 18 0) (close _V0vanity_V0compiler_V0match_V20_k104) (bruijn expr-stack 14 1))
V_CALL(VGetArg(upenv, 18-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k104, env)}),
      VGetArg(upenv, 14-1, 1));
 }
}
static void _V0vanity_V0compiler_V0match_V20_k111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k111" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k111, runtime, upenv, 1, argc, _var0) {
  // ((bruijn eqv? 19 2) (bruijn ##k.252 1 0) (bruijn ##x.253 0 0) 'quote)
V_CALL(VGetArg(upenv, 19-1, 2), runtime,
      upenv->vars[0],
      _var0,
      _V0quote);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k110" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k110, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.251 1 0) ((bruijn caar 20 17) (close _V0vanity_V0compiler_V0match_V20_k111) (bruijn pattern-stack 16 2)) ((bruijn ##k.252 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 20-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k111, env)}),
      VGetArg(upenv, 16-1, 2));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0match_V20_k118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k118" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k118, runtime, upenv, 1, argc, _var0) {
  // ((bruijn not 26 5) (bruijn ##k.203 2 0) (bruijn ##x.204 0 0))
V_CALL(VGetArg(upenv, 26-1, 5), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k117" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k117, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn null? 25 13) (close _V0vanity_V0compiler_V0match_V20_k118) (bruijn ##x.205 0 0))
V_CALL(VGetArg(upenv, 25-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k118, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k116" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k116, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.202 1 0) ((bruijn ##k.203 0 0) (bruijn ##p.202 1 0)) ((bruijn cddar 24 4) (close _V0vanity_V0compiler_V0match_V20_k117) (bruijn pattern-stack 20 2)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(_var0, runtime,
      upenv->vars[0]);
} else {
V_CALL(VGetArg(upenv, 24-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k117, env)}),
      VGetArg(upenv, 20-1, 2));
}
 }
}
static void _V0vanity_V0compiler_V0match_V20_k120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k120" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k120, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.200 1 0) ((bruijn compiler-error 25 1) (bruijn ##k.201 0 0) (##string ##string.302)) ((bruijn ##k.201 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 25-1, 1), runtime,
      _var0,
      VEncodePointer(&_V10string_D302.sym, VPOINTER_OTHER));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0match_V20_k126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k126" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k126, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.131 26 0) (##inline ##sys.cons 'if (##inline ##sys.cons (##inline ##sys.cons 'equal? (##inline ##sys.cons (##inline ##sys.cons 'quote (##inline ##sys.cons (bruijn ##x.199 4 0) '())) (##inline ##sys.cons (bruijn ##x.197 3 0) '()))) (##inline ##sys.cons (bruijn ##x.191 0 0) '()))))
V_CALL(VGetArg(upenv, 26-1, 0), runtime,
      VInlineCons(
        _V0if,
        VInlineCons(
        VInlineCons(
        _V0equal_Q,
        VInlineCons(
        VInlineCons(
        _V0quote,
        VInlineCons(
        upenv->up->up->up->vars[0],
        VNULL)),
        VInlineCons(
        upenv->up->up->vars[0],
        VNULL))),
        VInlineCons(
        _var0,
        VNULL))));
 }
}
static void _V0vanity_V0compiler_V0match_V20_k125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k125" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k125, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn match-iter 26 1) (close _V0vanity_V0compiler_V0match_V20_k126) (bruijn ##x.192 1 0) (bruijn ##x.193 0 0) (bruijn success-expr 25 3))
V_CALL(VGetArg(upenv, 26-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k126, env)}),
      upenv->vars[0],
      _var0,
      VGetArg(upenv, 25-1, 3));
 }
}
static void _V0vanity_V0compiler_V0match_V20_k124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k124" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k124, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 28 18) (close _V0vanity_V0compiler_V0match_V20_k125) (bruijn pattern-stack 24 2))
V_CALL(VGetArg(upenv, 28-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k125, env)}),
      VGetArg(upenv, 24-1, 2));
 }
}
static void _V0vanity_V0compiler_V0match_V20_k123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k123" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k123, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 27 18) (close _V0vanity_V0compiler_V0match_V20_k124) (bruijn expr-stack 23 1))
V_CALL(VGetArg(upenv, 27-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k124, env)}),
      VGetArg(upenv, 23-1, 1));
 }
}
static void _V0vanity_V0compiler_V0match_V20_k122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k122" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k122, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn car 26 0) (close _V0vanity_V0compiler_V0match_V20_k123) (bruijn expr-stack 22 1))
V_CALL(VGetArg(upenv, 26-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k123, env)}),
      VGetArg(upenv, 22-1, 1));
 }
}
static void _V0vanity_V0compiler_V0match_V20_k121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k121" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k121, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cadar 25 3) (close _V0vanity_V0compiler_V0match_V20_k122) (bruijn pattern-stack 21 2))
V_CALL(VGetArg(upenv, 25-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k122, env)}),
      VGetArg(upenv, 21-1, 2));
 }
}
static void _V0vanity_V0compiler_V0match_V20_k119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k119" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k119, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0match_V20_k120) (close _V0vanity_V0compiler_V0match_V20_k121))
V_CALL_FUNC(_V0vanity_V0compiler_V0match_V20_k120, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k121, env)}));
 }
}
static void _V0vanity_V0compiler_V0match_V20_k115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k115" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k115, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0match_V20_k116) (close _V0vanity_V0compiler_V0match_V20_k119))
V_CALL_FUNC(_V0vanity_V0compiler_V0match_V20_k116, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k119, env)}));
 }
}
static void _V0vanity_V0compiler_V0match_V20_k114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k114" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k114, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn not 22 5) (close _V0vanity_V0compiler_V0match_V20_k115) (bruijn ##x.206 0 0))
V_CALL(VGetArg(upenv, 22-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k115, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k113" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k113, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn pair? 21 2) (close _V0vanity_V0compiler_V0match_V20_k114) (bruijn ##x.207 0 0))
V_CALL(VGetArg(upenv, 21-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k114, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k132" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k132, runtime, upenv, 1, argc, _var0) {
  // ((bruijn eqv? 24 2) (bruijn ##k.246 3 0) (bruijn ##x.248 0 0) '...)
V_CALL(VGetArg(upenv, 24-1, 2), runtime,
      upenv->up->up->vars[0],
      _var0,
      _V0_D_D_D);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k131" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k131, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.247 0 0) ((bruijn cadar 25 3) (close _V0vanity_V0compiler_V0match_V20_k132) (bruijn pattern-stack 21 2)) ((bruijn ##k.246 2 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 25-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k132, env)}),
      VGetArg(upenv, 21-1, 2));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0match_V20_k130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k130" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k130, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn pair? 24 2) (close _V0vanity_V0compiler_V0match_V20_k131) (bruijn ##x.249 0 0))
V_CALL(VGetArg(upenv, 24-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k131, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k129" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k129, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.245 1 0) ((bruijn cdar 23 15) (close _V0vanity_V0compiler_V0match_V20_k130) (bruijn pattern-stack 19 2)) ((bruijn ##k.246 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 23-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k130, env)}),
      VGetArg(upenv, 19-1, 2));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0match_V20_k138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k138" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k138, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.131 24 0) (##inline ##sys.cons 'let (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.cons (bruijn sym 4 0) (##inline ##sys.cons (bruijn ##x.217 3 0) '())) '()) (##inline ##sys.cons (bruijn ##x.212 0 0) '()))))
V_CALL(VGetArg(upenv, 24-1, 0), runtime,
      VInlineCons(
        _V0let,
        VInlineCons(
        VInlineCons(
        VInlineCons(
        upenv->up->up->up->vars[0],
        VInlineCons(
        upenv->up->up->vars[0],
        VNULL)),
        VNULL),
        VInlineCons(
        _var0,
        VNULL))));
 }
}
static void _V0vanity_V0compiler_V0match_V20_k137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k137" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k137, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn match-ellipses 24 0) (close _V0vanity_V0compiler_V0match_V20_k138) (bruijn ##x.213 0 0) (bruijn pattern-stack 23 2) (bruijn success-expr 23 3))
V_CALL(VGetArg(upenv, 24-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k138, env)}),
      _var0,
      VGetArg(upenv, 23-1, 2),
      VGetArg(upenv, 23-1, 3));
 }
}
static void _V0vanity_V0compiler_V0match_V20_k136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k136" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k136, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 26 14) (close _V0vanity_V0compiler_V0match_V20_k137) (bruijn sym 2 0) (bruijn ##x.214 0 0))
V_CALL(VGetArg(upenv, 26-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k137, env)}),
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k135" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k135, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 25 18) (close _V0vanity_V0compiler_V0match_V20_k136) (bruijn expr-stack 21 1))
V_CALL(VGetArg(upenv, 25-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k136, env)}),
      VGetArg(upenv, 21-1, 1));
 }
}
static void _V0vanity_V0compiler_V0match_V20_k134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k134" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k134, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn car 24 0) (close _V0vanity_V0compiler_V0match_V20_k135) (bruijn expr-stack 20 1))
V_CALL(VGetArg(upenv, 24-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k135, env)}),
      VGetArg(upenv, 20-1, 1));
 }
}
static void _V0vanity_V0compiler_V0match_V20_k147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k147" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k147, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.131 28 0) (##inline ##sys.cons 'let (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.cons (bruijn sym 6 0) (##inline ##sys.cons (bruijn ##x.242 5 0) '())) '()) (##inline ##sys.cons (##inline ##sys.cons 'if (##inline ##sys.cons (##inline ##sys.cons '##sys.pair? (##inline ##sys.cons (bruijn sym 6 0) '())) (##inline ##sys.cons (bruijn ##x.226 0 0) '()))) '()))))
V_CALL(VGetArg(upenv, 28-1, 0), runtime,
      VInlineCons(
        _V0let,
        VInlineCons(
        VInlineCons(
        VInlineCons(
        VGetArg(upenv, 6-1, 0),
        VInlineCons(
        VGetArg(upenv, 5-1, 0),
        VNULL)),
        VNULL),
        VInlineCons(
        VInlineCons(
        _V0if,
        VInlineCons(
        VInlineCons(
        _V10sys_Dpair_Q,
        VInlineCons(
        VGetArg(upenv, 6-1, 0),
        VNULL)),
        VInlineCons(
        _var0,
        VNULL))),
        VNULL))));
 }
}
static void _V0vanity_V0compiler_V0match_V20_k146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k146" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k146, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn match-iter 28 1) (close _V0vanity_V0compiler_V0match_V20_k147) (##inline ##sys.cons (##inline ##sys.cons '##sys.car (##inline ##sys.cons (bruijn sym 5 0) '())) (##inline ##sys.cons (##inline ##sys.cons '##sys.cdr (##inline ##sys.cons (bruijn sym 5 0) '())) (bruijn ##x.236 3 0))) (##inline ##sys.cons (bruijn ##x.229 2 0) (##inline ##sys.cons (bruijn ##x.231 1 0) (bruijn ##x.232 0 0))) (bruijn success-expr 27 3))
V_CALL(VGetArg(upenv, 28-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k147, env)}),
      VInlineCons(
        VInlineCons(
        _V10sys_Dcar,
        VInlineCons(
        VGetArg(upenv, 5-1, 0),
        VNULL)),
        VInlineCons(
        VInlineCons(
        _V10sys_Dcdr,
        VInlineCons(
        VGetArg(upenv, 5-1, 0),
        VNULL)),
        upenv->up->up->vars[0])),
      VInlineCons(
        upenv->up->vars[0],
        VInlineCons(
        upenv->vars[0],
        _var0)),
      VGetArg(upenv, 27-1, 3));
 }
}
static void _V0vanity_V0compiler_V0match_V20_k145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k145" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k145, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 30 18) (close _V0vanity_V0compiler_V0match_V20_k146) (bruijn pattern-stack 26 2))
V_CALL(VGetArg(upenv, 30-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k146, env)}),
      VGetArg(upenv, 26-1, 2));
 }
}
static void _V0vanity_V0compiler_V0match_V20_k144(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k144" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k144, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdar 29 15) (close _V0vanity_V0compiler_V0match_V20_k145) (bruijn pattern-stack 25 2))
V_CALL(VGetArg(upenv, 29-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k145, env)}),
      VGetArg(upenv, 25-1, 2));
 }
}
static void _V0vanity_V0compiler_V0match_V20_k143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k143" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k143, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn caar 28 17) (close _V0vanity_V0compiler_V0match_V20_k144) (bruijn pattern-stack 24 2))
V_CALL(VGetArg(upenv, 28-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k144, env)}),
      VGetArg(upenv, 24-1, 2));
 }
}
static void _V0vanity_V0compiler_V0match_V20_k142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k142" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k142, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 27 18) (close _V0vanity_V0compiler_V0match_V20_k143) (bruijn expr-stack 23 1))
V_CALL(VGetArg(upenv, 27-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k143, env)}),
      VGetArg(upenv, 23-1, 1));
 }
}
static void _V0vanity_V0compiler_V0match_V20_k141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k141" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k141, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn car 26 0) (close _V0vanity_V0compiler_V0match_V20_k142) (bruijn expr-stack 22 1))
V_CALL(VGetArg(upenv, 26-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k142, env)}),
      VGetArg(upenv, 22-1, 1));
 }
}
static void _V0vanity_V0compiler_V0match_V20_k148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k148" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k148, runtime, upenv, 1, argc, _var0) {
  // ((bruijn compiler-error 26 1) (bruijn ##k.131 22 0) (##string ##string.303) (bruijn ##x.243 0 0))
V_CALL(VGetArg(upenv, 26-1, 1), runtime,
      VGetArg(upenv, 22-1, 0),
      VEncodePointer(&_V10string_D303.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k140(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k140" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k140, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.218 0 0) ((bruijn gensym 25 19) (close _V0vanity_V0compiler_V0match_V20_k141) (##string ##string.300)) ((bruijn car 25 0) (close _V0vanity_V0compiler_V0match_V20_k148) (bruijn pattern-stack 21 2)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 25-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k141, env)}),
      VEncodePointer(&_V10string_D300.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 25-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k148, env)}),
      VGetArg(upenv, 21-1, 2));
}
 }
}
static void _V0vanity_V0compiler_V0match_V20_k139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k139" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k139, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn pair? 24 2) (close _V0vanity_V0compiler_V0match_V20_k140) (bruijn ##x.244 0 0))
V_CALL(VGetArg(upenv, 24-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k140, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k133" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k133, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.208 0 0) ((bruijn gensym 23 19) (close _V0vanity_V0compiler_V0match_V20_k134) (##string ##string.300)) ((bruijn car 23 0) (close _V0vanity_V0compiler_V0match_V20_k139) (bruijn pattern-stack 19 2)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 23-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k134, env)}),
      VEncodePointer(&_V10string_D300.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 23-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k139, env)}),
      VGetArg(upenv, 19-1, 2));
}
 }
}
static void _V0vanity_V0compiler_V0match_V20_k128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k128" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k128, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0match_V20_k129) (close _V0vanity_V0compiler_V0match_V20_k133))
V_CALL_FUNC(_V0vanity_V0compiler_V0match_V20_k129, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k133, env)}));
 }
}
static void _V0vanity_V0compiler_V0match_V20_k127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k127" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k127, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn pair? 21 2) (close _V0vanity_V0compiler_V0match_V20_k128) (bruijn ##x.250 0 0))
V_CALL(VGetArg(upenv, 21-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k128, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k112" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k112, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.186 0 0) ((bruijn cdar 20 15) (close _V0vanity_V0compiler_V0match_V20_k113) (bruijn pattern-stack 16 2)) ((bruijn car 20 0) (close _V0vanity_V0compiler_V0match_V20_k127) (bruijn pattern-stack 16 2)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 20-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k113, env)}),
      VGetArg(upenv, 16-1, 2));
} else {
V_CALL(VGetArg(upenv, 20-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k127, env)}),
      VGetArg(upenv, 16-1, 2));
}
 }
}
static void _V0vanity_V0compiler_V0match_V20_k109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k109" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k109, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0match_V20_k110) (close _V0vanity_V0compiler_V0match_V20_k112))
V_CALL_FUNC(_V0vanity_V0compiler_V0match_V20_k110, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k112, env)}));
 }
}
static void _V0vanity_V0compiler_V0match_V20_k108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k108" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k108, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn pair? 18 2) (close _V0vanity_V0compiler_V0match_V20_k109) (bruijn ##x.254 0 0))
V_CALL(VGetArg(upenv, 18-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k109, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k102" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k102, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.175 0 0) ((bruijn car 17 0) (close _V0vanity_V0compiler_V0match_V20_k103) (bruijn pattern-stack 13 2)) ((bruijn car 17 0) (close _V0vanity_V0compiler_V0match_V20_k108) (bruijn pattern-stack 13 2)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 17-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k103, env)}),
      VGetArg(upenv, 13-1, 2));
} else {
V_CALL(VGetArg(upenv, 17-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k108, env)}),
      VGetArg(upenv, 13-1, 2));
}
 }
}
static void _V0vanity_V0compiler_V0match_V20_k101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k101" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k101, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn atom? 16 6) (close _V0vanity_V0compiler_V0match_V20_k102) (bruijn ##x.255 0 0))
V_CALL(VGetArg(upenv, 16-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k102, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k94" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k94, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.158 0 0) ((bruijn car 15 0) (close _V0vanity_V0compiler_V0match_V20_k95) (bruijn expr-stack 11 1)) ((bruijn car 15 0) (close _V0vanity_V0compiler_V0match_V20_k101) (bruijn pattern-stack 11 2)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 15-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k95, env)}),
      VGetArg(upenv, 11-1, 1));
} else {
V_CALL(VGetArg(upenv, 15-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k101, env)}),
      VGetArg(upenv, 11-1, 2));
}
 }
}
static void _V0vanity_V0compiler_V0match_V20_k93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k93" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k93, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string? 14 7) (close _V0vanity_V0compiler_V0match_V20_k94) (bruijn ##x.256 0 0))
V_CALL(VGetArg(upenv, 14-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k94, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k88" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k88, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.149 0 0) ((bruijn car 13 0) (close _V0vanity_V0compiler_V0match_V20_k89) (bruijn expr-stack 9 1)) ((bruijn car 13 0) (close _V0vanity_V0compiler_V0match_V20_k93) (bruijn pattern-stack 9 2)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k89, env)}),
      VGetArg(upenv, 9-1, 1));
} else {
V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k93, env)}),
      VGetArg(upenv, 9-1, 2));
}
 }
}
static void _V0vanity_V0compiler_V0match_V20_k87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k87" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k87, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn null? 12 13) (close _V0vanity_V0compiler_V0match_V20_k88) (bruijn ##x.257 0 0))
V_CALL(VGetArg(upenv, 12-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k88, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k85" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k85, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.147 0 0) ((bruijn car 11 0) (close _V0vanity_V0compiler_V0match_V20_k86) (bruijn pattern-stack 7 2)) ((bruijn car 11 0) (close _V0vanity_V0compiler_V0match_V20_k87) (bruijn pattern-stack 7 2)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k86, env)}),
      VGetArg(upenv, 7-1, 2));
} else {
V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k87, env)}),
      VGetArg(upenv, 7-1, 2));
}
 }
}
static void _V0vanity_V0compiler_V0match_V20_k84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k84" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k84, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn vector? 10 8) (close _V0vanity_V0compiler_V0match_V20_k85) (bruijn ##x.258 0 0))
V_CALL(VGetArg(upenv, 10-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k85, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k78" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k78, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.136 0 0) ((bruijn car 9 0) (close _V0vanity_V0compiler_V0match_V20_k79) (bruijn pattern-stack 5 2)) ((bruijn car 9 0) (close _V0vanity_V0compiler_V0match_V20_k84) (bruijn pattern-stack 5 2)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k79, env)}),
      VGetArg(upenv, 5-1, 2));
} else {
V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k84, env)}),
      VGetArg(upenv, 5-1, 2));
}
 }
}
static void _V0vanity_V0compiler_V0match_V20_k77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k77" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k77, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn symbol? 8 9) (close _V0vanity_V0compiler_V0match_V20_k78) (bruijn ##x.259 0 0))
V_CALL(VGetArg(upenv, 8-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k78, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k74" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k74, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.133 0 0) ((bruijn cdr 7 18) (close _V0vanity_V0compiler_V0match_V20_k75) (bruijn expr-stack 3 1)) ((bruijn car 7 0) (close _V0vanity_V0compiler_V0match_V20_k77) (bruijn pattern-stack 3 2)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 7-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k75, env)}),
      upenv->up->up->vars[1]);
} else {
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k77, env)}),
      upenv->up->up->vars[2]);
}
 }
}
static void _V0vanity_V0compiler_V0match_V20_k73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k73" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k73, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn eqv? 4 2) (close _V0vanity_V0compiler_V0match_V20_k74) (bruijn ##x.260 0 0) '_)
V_CALL(upenv->up->up->up->vars[2], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k74, env)}),
      _var0,
      _V0_U);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k72" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k72, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.132 0 0) ((bruijn ##k.131 1 0) (bruijn success-expr 1 3)) ((bruijn car 5 0) (close _V0vanity_V0compiler_V0match_V20_k73) (bruijn pattern-stack 1 2)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      upenv->vars[3]);
} else {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k73, env)}),
      upenv->vars[2]);
}
 }
}
static void _V0vanity_V0compiler_V0match_V20_lambda10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_lambda10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_lambda10, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_lambda10, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn null? 4 13) (close _V0vanity_V0compiler_V0match_V20_k72) (bruijn pattern-stack 0 2))
V_CALL(upenv->up->up->up->vars[13], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k72, env)}),
      _var2);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k155(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k155" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k155, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.272 4 0) (##inline ##sys.cons (##inline ##sys.cons (bruijn k 7 0) (##inline ##sys.cons (##inline ##sys.cons 'begin (bruijn ##x.280 0 0)) '())) '()))
V_CALL(upenv->up->up->up->vars[0], runtime,
      VInlineCons(
        VInlineCons(
        VGetArg(upenv, 7-1, 0),
        VInlineCons(
        VInlineCons(
        _V0begin,
        _var0),
        VNULL)),
        VNULL));
 }
}
static void _V0vanity_V0compiler_V0match_V20_k162(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k162" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k162, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 19 14) (bruijn ##k.272 10 0) (bruijn ##x.281 2 0) (bruijn ##x.282 0 0))
V_CALL(VGetArg(upenv, 19-1, 14), runtime,
      VGetArg(upenv, 10-1, 0),
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k161(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k161" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k161, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn loop 10 0) (close _V0vanity_V0compiler_V0match_V20_k162) (bruijn ##x.283 0 0))
V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k162, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k160" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k160, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 17 18) (close _V0vanity_V0compiler_V0match_V20_k161) (bruijn patterns 8 1))
V_CALL(VGetArg(upenv, 17-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k161, env)}),
      VGetArg(upenv, 8-1, 1));
 }
}
static void _V0vanity_V0compiler_V0match_V20_k159(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k159" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k159, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn match-iter 13 1) (close _V0vanity_V0compiler_V0match_V20_k160) (bruijn ##x.284 3 0) (bruijn ##x.285 1 0) (##inline ##sys.cons (bruijn k 10 0) (##inline ##sys.cons (##inline ##sys.cons 'begin (bruijn ##x.289 0 0)) '())))
V_CALL(VGetArg(upenv, 13-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k160, env)}),
      upenv->up->up->vars[0],
      upenv->vars[0],
      VInlineCons(
        VGetArg(upenv, 10-1, 0),
        VInlineCons(
        VInlineCons(
        _V0begin,
        _var0),
        VNULL)));
 }
}
static void _V0vanity_V0compiler_V0match_V20_k158(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k158" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k158, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdar 15 15) (close _V0vanity_V0compiler_V0match_V20_k159) (bruijn patterns 6 1))
V_CALL(VGetArg(upenv, 15-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k159, env)}),
      VGetArg(upenv, 6-1, 1));
 }
}
static void _V0vanity_V0compiler_V0match_V20_k157(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k157" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k157, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn list 14 16) (close _V0vanity_V0compiler_V0match_V20_k158) (bruijn ##x.290 0 0))
V_CALL(VGetArg(upenv, 14-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k158, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k156" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k156, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn caar 13 17) (close _V0vanity_V0compiler_V0match_V20_k157) (bruijn patterns 4 1))
V_CALL(VGetArg(upenv, 13-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k157, env)}),
      upenv->up->up->up->vars[1]);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k154(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k154" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k154, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.276 0 0) ((bruijn cdar 12 15) (close _V0vanity_V0compiler_V0match_V20_k155) (bruijn patterns 3 1)) ((bruijn list 12 16) (close _V0vanity_V0compiler_V0match_V20_k156) (bruijn input 6 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 12-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k155, env)}),
      upenv->up->up->vars[1]);
} else {
V_CALL(VGetArg(upenv, 12-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k156, env)}),
      VGetArg(upenv, 6-1, 1));
}
 }
}
static void _V0vanity_V0compiler_V0match_V20_k153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k153" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k153, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn eqv? 9 2) (close _V0vanity_V0compiler_V0match_V20_k154) (bruijn ##x.291 0 0) 'else)
V_CALL(VGetArg(upenv, 9-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k154, env)}),
      _var0,
      _V0else);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k152" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k152, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.273 0 0) ((bruijn ##k.272 1 0) (##inline ##sys.cons (##inline ##sys.cons 'error (##inline ##sys.cons '(##string ##string.304) '())) '())) ((bruijn caar 10 17) (close _V0vanity_V0compiler_V0match_V20_k153) (bruijn patterns 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      VInlineCons(
        VInlineCons(
        _V0error,
        VInlineCons(
        VEncodePointer(&_V10string_D304.sym, VPOINTER_OTHER),
        VNULL)),
        VNULL));
} else {
V_CALL(VGetArg(upenv, 10-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k153, env)}),
      upenv->vars[1]);
}
 }
}
static void _V0vanity_V0compiler_V0match_V20_lambda12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_lambda12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_lambda12, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_lambda12, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn null? 9 13) (close _V0vanity_V0compiler_V0match_V20_k152) (bruijn patterns 0 1))
V_CALL(VGetArg(upenv, 9-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k152, env)}),
      _var1);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k164" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k164, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.52 8 0) (##inline ##sys.cons 'call/cc (##inline ##sys.cons (##inline ##sys.cons 'lambda (##inline ##sys.cons (##inline ##sys.cons (bruijn k 4 0) '()) (##inline ##sys.cons (##inline ##sys.cons 'let (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.cons (bruijn input 4 1) (##inline ##sys.cons (bruijn ##x.295 3 0) '())) '()) (bruijn ##x.271 0 0))) '()))) '())))
V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VInlineCons(
        _V0call_Wcc,
        VInlineCons(
        VInlineCons(
        _V0lambda,
        VInlineCons(
        VInlineCons(
        upenv->up->up->up->vars[0],
        VNULL),
        VInlineCons(
        VInlineCons(
        _V0let,
        VInlineCons(
        VInlineCons(
        VInlineCons(
        upenv->up->up->up->vars[1],
        VInlineCons(
        upenv->up->up->vars[0],
        VNULL)),
        VNULL),
        _var0)),
        VNULL))),
        VNULL)));
 }
}
static void _V0vanity_V0compiler_V0match_V20_k163(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k163" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k163, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn loop 1 0) (close _V0vanity_V0compiler_V0match_V20_k164) (bruijn ##x.292 0 0))
V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k164, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k151" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k151, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 1 ((close _V0vanity_V0compiler_V0match_V20_lambda12)) ((bruijn cddr 8 12) (close _V0vanity_V0compiler_V0match_V20_k163) (bruijn expr 6 1)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_lambda12, env)});
V_CALL(VGetArg(upenv, 8-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k163, env)}),
      VGetArg(upenv, 6-1, 1));
    }
 }
}
static void _V0vanity_V0compiler_V0match_V20_lambda11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_lambda11" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_lambda11, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn cadr 6 11) (close _V0vanity_V0compiler_V0match_V20_k151) (bruijn expr 4 1))
V_CALL(VGetArg(upenv, 6-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k151, env)}),
      upenv->up->up->up->vars[1]);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k150(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k150" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k150, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0match_V20_lambda11) (bruijn ##x.261 1 0) (bruijn ##x.262 0 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0match_V20_lambda11, env, runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k149" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k149, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn gensym 4 19) (close _V0vanity_V0compiler_V0match_V20_k150) (##string ##string.305))
V_CALL(upenv->up->up->up->vars[19], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k150, env)}),
      VEncodePointer(&_V10string_D305.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0match_V20_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_lambda4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_lambda4, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_lambda4, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (letrec 2 ((close _V0vanity_V0compiler_V0match_V20_lambda5) (close _V0vanity_V0compiler_V0match_V20_lambda10)) ((bruijn gensym 3 19) (close _V0vanity_V0compiler_V0match_V20_k149) (##string ##string.301)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[2]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 2, 2, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_lambda5, env)});
    env->vars[1] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_lambda10, env)});
V_CALL(upenv->up->up->vars[19], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k149, env)}),
      VEncodePointer(&_V10string_D301.sym, VPOINTER_OTHER));
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
  // (letrec 2 ((close _V0vanity_V0compiler_V0match_V20_lambda3) (close _V0vanity_V0compiler_V0match_V20_lambda4)) ((bruijn ##k.1 25 0) (##inline ##sys.cons (##inline ##sys.cons 'transform-match (bruijn transform-match 0 1)) '())))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[2]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 2, 2, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_lambda3, env)});
    env->vars[1] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_lambda4, env)});
V_CALL(VGetArg(upenv, 25-1, 0), runtime,
      VInlineCons(
        VInlineCons(
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
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k23, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0match_V20_lambda2) (bruijn ##x.2 19 0) (bruijn ##x.3 18 0) (bruijn ##x.4 17 0) (bruijn ##x.5 16 0) (bruijn ##x.6 15 0) (bruijn ##x.7 14 0) (bruijn ##x.8 13 0) (bruijn ##x.9 12 0) (bruijn ##x.10 11 0) (bruijn ##x.11 10 0) (bruijn ##x.12 9 0) (bruijn ##x.13 8 0) (bruijn ##x.14 7 0) (bruijn ##x.15 6 0) (bruijn ##x.16 5 0) (bruijn ##x.17 4 0) (bruijn ##x.18 3 0) (bruijn ##x.19 2 0) (bruijn ##x.20 1 0) (bruijn ##x.21 0 0))
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
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k22, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 19 0) (close _V0vanity_V0compiler_V0match_V20_k23) 'gensym)
V_CALL(VGetArg(upenv, 19-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k23, env)}),
      _V0gensym);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k21, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 18 0) (close _V0vanity_V0compiler_V0match_V20_k22) 'cdr)
V_CALL(VGetArg(upenv, 18-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k22, env)}),
      _V0cdr);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k20, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 17 0) (close _V0vanity_V0compiler_V0match_V20_k21) 'caar)
V_CALL(VGetArg(upenv, 17-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k21, env)}),
      _V0caar);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k19, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 16 0) (close _V0vanity_V0compiler_V0match_V20_k20) 'list)
V_CALL(VGetArg(upenv, 16-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k20, env)}),
      _V0list);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k18, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 15 0) (close _V0vanity_V0compiler_V0match_V20_k19) 'cdar)
V_CALL(VGetArg(upenv, 15-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k19, env)}),
      _V0cdar);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k17, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 14 0) (close _V0vanity_V0compiler_V0match_V20_k18) 'cons)
V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k18, env)}),
      _V0cons);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k16, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 13 0) (close _V0vanity_V0compiler_V0match_V20_k17) 'null?)
V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k17, env)}),
      _V0null_Q);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k15, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 12 0) (close _V0vanity_V0compiler_V0match_V20_k16) 'cddr)
V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k16, env)}),
      _V0cddr);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k14, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 11 0) (close _V0vanity_V0compiler_V0match_V20_k15) 'cadr)
V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k15, env)}),
      _V0cadr);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k13, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 10 0) (close _V0vanity_V0compiler_V0match_V20_k14) 'map)
V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k14, env)}),
      _V0map);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k12, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 9 0) (close _V0vanity_V0compiler_V0match_V20_k13) 'symbol?)
V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k13, env)}),
      _V0symbol_Q);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k11, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 8 0) (close _V0vanity_V0compiler_V0match_V20_k12) 'vector?)
V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k12, env)}),
      _V0vector_Q);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k10, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 7 0) (close _V0vanity_V0compiler_V0match_V20_k11) 'string?)
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k11, env)}),
      _V0string_Q);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k9, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 6 0) (close _V0vanity_V0compiler_V0match_V20_k10) 'atom?)
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k10, env)}),
      _V0atom_Q);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k8, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 5 0) (close _V0vanity_V0compiler_V0match_V20_k9) 'not)
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k9, env)}),
      _V0not);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k7, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 4 0) (close _V0vanity_V0compiler_V0match_V20_k8) 'cddar)
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k8, env)}),
      _V0cddar);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k6, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 3 0) (close _V0vanity_V0compiler_V0match_V20_k7) 'cadar)
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k7, env)}),
      _V0cadar);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k5, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 2 0) (close _V0vanity_V0compiler_V0match_V20_k6) 'pair?)
V_CALL(upenv->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k6, env)}),
      _V0pair_Q);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k4, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 1 0) (close _V0vanity_V0compiler_V0match_V20_k5) 'compiler-error)
V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k5, env)}),
      _V0compiler__error);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k3, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 0 0) (close _V0vanity_V0compiler_V0match_V20_k4) 'car)
V_CALL(_var0, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k4, env)}),
      _V0car);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k2, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.make-import (close _V0vanity_V0compiler_V0match_V20_k3) (##string ##string.306) (bruijn ##x.297 1 0) (bruijn ##x.298 0 0))
    V_CALL_FUNC(VMakeImport2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k3, env)}),
      VEncodePointer(&_V10string_D306.sym, VPOINTER_OTHER),
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0match_V20_k1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0match_V20_k2) (##string ##string.307))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k2, env)}),
      VEncodePointer(&_V10string_D307.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0match_V20_lambda1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_lambda1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_lambda1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0match_V20_k1) (##string ##string.308))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k1, env)}),
      VEncodePointer(&_V10string_D308.sym, VPOINTER_OTHER));
 }
}
VFunc _V0vanity_V0compiler_V0match_V20 = (VFunc)_V0vanity_V0compiler_V0match_V20_lambda1;
