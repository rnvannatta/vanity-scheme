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
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D371 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D370 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D369 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0match_V20" };
VWEAK VWORD _V0car;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0car = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "car" };
VWEAK VWORD _V0compiler__error;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0compiler__error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "compiler-error" };
VWEAK VWORD _V0pair_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0pair_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "pair\?" };
VWEAK VWORD _V0cadar;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0cadar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "cadar" };
VWEAK VWORD _V0cddar;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0cddar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "cddar" };
VWEAK VWORD _V0not;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0not = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "not" };
VWEAK VWORD _V0atom_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0atom_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "atom\?" };
VWEAK VWORD _V0string_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0string_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "string\?" };
VWEAK VWORD _V0typevector_Q;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0typevector_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "typevector\?" };
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
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D368 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "input" };
VWEAK VWORD _V0else;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0else = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "else" };
VWEAK VWORD _V0begin;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0begin = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "begin" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D367 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "match statement exhausted" };
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "error" };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D366 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "unknown form in match pattern" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D365 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "malformed quote" };
VWEAK VWORD _V10vcore_Deq_Q;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10vcore_Deq_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##vcore.eq\?" };
VWEAK VWORD _V10vcore_Dblob_E_Q;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V10vcore_Dblob_E_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "##vcore.blob=\?" };
VWEAK VWORD _V10vcore_Dstring_Q;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Dstring_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.string\?" };
VWEAK VWORD _V0and;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0and = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "and" };
VWEAK VWORD _V10vcore_Dnull_Q;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10vcore_Dnull_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##vcore.null\?" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D364 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "kk" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D363 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "expr" };
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
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D362 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "typevectors in matches not supported" };
static struct { VBlob sym; char bytes[39]; } _V10_Dstring_D361 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 39 }, "vectors in matches not implemented yet" };
static __attribute__((constructor)) void VDllMain1() {
  _V0car = VEncodePointer(VLookupConstant("_V0car", &_VW_V0car), VPOINTER_OTHER);
  _V0compiler__error = VEncodePointer(VLookupConstant("_V0compiler__error", &_VW_V0compiler__error), VPOINTER_OTHER);
  _V0pair_Q = VEncodePointer(VLookupConstant("_V0pair_Q", &_VW_V0pair_Q), VPOINTER_OTHER);
  _V0cadar = VEncodePointer(VLookupConstant("_V0cadar", &_VW_V0cadar), VPOINTER_OTHER);
  _V0cddar = VEncodePointer(VLookupConstant("_V0cddar", &_VW_V0cddar), VPOINTER_OTHER);
  _V0not = VEncodePointer(VLookupConstant("_V0not", &_VW_V0not), VPOINTER_OTHER);
  _V0atom_Q = VEncodePointer(VLookupConstant("_V0atom_Q", &_VW_V0atom_Q), VPOINTER_OTHER);
  _V0string_Q = VEncodePointer(VLookupConstant("_V0string_Q", &_VW_V0string_Q), VPOINTER_OTHER);
  _V0typevector_Q = VEncodePointer(VLookupConstant("_V0typevector_Q", &_VW_V0typevector_Q), VPOINTER_OTHER);
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
static void _V10_Dgather__variables_D22_k28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgather__variables_D22_k28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D22_k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__variables_D22_k28, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.gather-variables.22 5 0) (bruijn ##.k.78 4 0) (bruijn ##.x.81 0 0) (bruijn ##.eqv?.25 4 2))
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      upenv->up->up->up->vars[0],
      _var0,
      upenv->up->up->up->vars[2]);
 }
}
static void _V10_Dgather__variables_D22_k31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgather__variables_D22_k31" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D22_k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__variables_D22_k31, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.gather-variables.22 7 0) (bruijn ##.k.78 6 0) (bruijn ##.x.83 0 0) (bruijn ##.eqv?.25 6 2))
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0,
      VGetArg(upenv, 6-1, 2));
 }
}
static void _V10_Dgather__variables_D22_k36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgather__variables_D22_k36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D22_k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__variables_D22_k36, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.cons.16 12 15) (bruijn ##.k.78 10 0) (bruijn ##.x.85 2 0) (bruijn ##.x.86 0 0))
    V_CALL(VGetArg(upenv, 12-1, 15), runtime,
      VGetArg(upenv, 10-1, 0),
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Dgather__variables_D22_k35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgather__variables_D22_k35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D22_k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__variables_D22_k35, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.gather-variables.22 10 0) (close _V10_Dgather__variables_D22_k36) (bruijn ##.x.87 0 0) (bruijn ##.eqv?.25 9 2))
    V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D22_k36, env)}),
      _var0,
      VGetArg(upenv, 9-1, 2));
 }
}
static void _V10_Dgather__variables_D22_k34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgather__variables_D22_k34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D22_k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__variables_D22_k34, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.20 10 19) (close _V10_Dgather__variables_D22_k35) (bruijn ##.pattern.24 8 1))
    V_CALL(VGetArg(upenv, 10-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D22_k35, env)}),
      VGetArg(upenv, 8-1, 1));
 }
}
static void _V10_Dgather__variables_D22_k39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgather__variables_D22_k39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D22_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__variables_D22_k39, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.compiler-error.2 12 1) (bruijn ##.k.78 10 0) (##string ##.string.361) (bruijn ##.x.89 0 0))
    V_CALL(VGetArg(upenv, 12-1, 1), runtime,
      VGetArg(upenv, 10-1, 0),
      VEncodePointer(&_V10_Dstring_D361.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V10_Dgather__variables_D22_k42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgather__variables_D22_k42" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D22_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__variables_D22_k42, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.compiler-error.2 14 1) (bruijn ##.k.78 12 0) (##string ##.string.362) (bruijn ##.x.91 0 0))
    V_CALL(VGetArg(upenv, 14-1, 1), runtime,
      VGetArg(upenv, 12-1, 0),
      VEncodePointer(&_V10_Dstring_D362.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V10_Dgather__variables_D22_k45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgather__variables_D22_k45" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D22_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__variables_D22_k45, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.gather-variables.22 15 0) (bruijn ##.k.78 14 0) (bruijn ##.x.93 0 0) (bruijn ##.eqv?.25 14 2))
    V_CALL(VGetArg(upenv, 15-1, 0), runtime,
      VGetArg(upenv, 14-1, 0),
      _var0,
      VGetArg(upenv, 14-1, 2));
 }
}
static void _V10_Dgather__variables_D22_k49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgather__variables_D22_k49" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D22_k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__variables_D22_k49, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.eqv?.25 17 2) (bruijn ##.k.102 1 0) (bruijn ##.x.103 0 0) 'quote)
    V_CALL(VGetArg(upenv, 17-1, 2), runtime,
      upenv->vars[0],
      _var0,
      _V0quote);
 }
}
static void _V10_Dgather__variables_D22_k48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgather__variables_D22_k48" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D22_k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__variables_D22_k48, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.101 1 0) ((bruijn ##.caar.19 18 18) (close _V10_Dgather__variables_D22_k49) (bruijn ##.pattern.24 16 1)) ((bruijn ##.k.102 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 18-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D22_k49, env)}),
      VGetArg(upenv, 16-1, 1));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dgather__variables_D22_k51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgather__variables_D22_k51" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D22_k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__variables_D22_k51, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.gather-variables.22 18 0) (bruijn ##.k.78 17 0) (bruijn ##.x.95 0 0) (bruijn ##.eqv?.25 17 2))
    V_CALL(VGetArg(upenv, 18-1, 0), runtime,
      VGetArg(upenv, 17-1, 0),
      _var0,
      VGetArg(upenv, 17-1, 2));
 }
}
static void _V10_Dgather__variables_D22_k54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgather__variables_D22_k54" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D22_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__variables_D22_k54, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.gather-variables.22 20 0) (bruijn ##.k.78 19 0) (##inline ##vcore.cons (bruijn ##.x.97 2 0) (##inline ##vcore.cons (bruijn ##.x.99 1 0) (bruijn ##.x.100 0 0))) (bruijn ##.eqv?.25 19 2))
    V_CALL(VGetArg(upenv, 20-1, 0), runtime,
      VGetArg(upenv, 19-1, 0),
      VInlineCons2(runtime,
        upenv->up->vars[0],
        VInlineCons2(runtime,
        upenv->vars[0],
        _var0)),
      VGetArg(upenv, 19-1, 2));
 }
}
static void _V10_Dgather__variables_D22_k53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgather__variables_D22_k53" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D22_k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__variables_D22_k53, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.20 20 19) (close _V10_Dgather__variables_D22_k54) (bruijn ##.pattern.24 18 1))
    V_CALL(VGetArg(upenv, 20-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D22_k54, env)}),
      VGetArg(upenv, 18-1, 1));
 }
}
static void _V10_Dgather__variables_D22_k52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgather__variables_D22_k52" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D22_k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__variables_D22_k52, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdar.17 19 16) (close _V10_Dgather__variables_D22_k53) (bruijn ##.pattern.24 17 1))
    V_CALL(VGetArg(upenv, 19-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D22_k53, env)}),
      VGetArg(upenv, 17-1, 1));
 }
}
static void _V10_Dgather__variables_D22_k50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgather__variables_D22_k50" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D22_k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__variables_D22_k50, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.94 0 0) ((bruijn ##.cdr.20 18 19) (close _V10_Dgather__variables_D22_k51) (bruijn ##.pattern.24 16 1)) ((bruijn ##.caar.19 18 18) (close _V10_Dgather__variables_D22_k52) (bruijn ##.pattern.24 16 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 18-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D22_k51, env)}),
      VGetArg(upenv, 16-1, 1));
} else {
    V_CALL(VGetArg(upenv, 18-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D22_k52, env)}),
      VGetArg(upenv, 16-1, 1));
}
 }
}
static void _V10_Dgather__variables_D22_k47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgather__variables_D22_k47" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D22_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__variables_D22_k47, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dgather__variables_D22_k48) (close _V10_Dgather__variables_D22_k50))
    V_CALL_FUNC(_V10_Dgather__variables_D22_k48, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D22_k50, env)}));
 }
}
static void _V10_Dgather__variables_D22_k46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgather__variables_D22_k46" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D22_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__variables_D22_k46, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.pair?.3 16 2) (close _V10_Dgather__variables_D22_k47) (bruijn ##.x.104 0 0))
    V_CALL(VGetArg(upenv, 16-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D22_k47, env)}),
      _var0);
 }
}
static void _V10_Dgather__variables_D22_k44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgather__variables_D22_k44" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D22_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__variables_D22_k44, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.92 0 0) ((bruijn ##.cdr.20 15 19) (close _V10_Dgather__variables_D22_k45) (bruijn ##.pattern.24 13 1)) ((bruijn ##.car.1 15 0) (close _V10_Dgather__variables_D22_k46) (bruijn ##.pattern.24 13 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 15-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D22_k45, env)}),
      VGetArg(upenv, 13-1, 1));
} else {
    V_CALL(VGetArg(upenv, 15-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D22_k46, env)}),
      VGetArg(upenv, 13-1, 1));
}
 }
}
static void _V10_Dgather__variables_D22_k43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgather__variables_D22_k43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D22_k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__variables_D22_k43, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.atom?.7 14 6) (close _V10_Dgather__variables_D22_k44) (bruijn ##.x.105 0 0))
    V_CALL(VGetArg(upenv, 14-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D22_k44, env)}),
      _var0);
 }
}
static void _V10_Dgather__variables_D22_k41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgather__variables_D22_k41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D22_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__variables_D22_k41, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.90 0 0) ((bruijn ##.car.1 13 0) (close _V10_Dgather__variables_D22_k42) (bruijn ##.pattern.24 11 1)) ((bruijn ##.car.1 13 0) (close _V10_Dgather__variables_D22_k43) (bruijn ##.pattern.24 11 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D22_k42, env)}),
      VGetArg(upenv, 11-1, 1));
} else {
    V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D22_k43, env)}),
      VGetArg(upenv, 11-1, 1));
}
 }
}
static void _V10_Dgather__variables_D22_k40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgather__variables_D22_k40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D22_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__variables_D22_k40, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.typevector?.9 12 8) (close _V10_Dgather__variables_D22_k41) (bruijn ##.x.106 0 0))
    V_CALL(VGetArg(upenv, 12-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D22_k41, env)}),
      _var0);
 }
}
static void _V10_Dgather__variables_D22_k38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgather__variables_D22_k38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D22_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__variables_D22_k38, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.88 0 0) ((bruijn ##.car.1 11 0) (close _V10_Dgather__variables_D22_k39) (bruijn ##.pattern.24 9 1)) ((bruijn ##.car.1 11 0) (close _V10_Dgather__variables_D22_k40) (bruijn ##.pattern.24 9 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D22_k39, env)}),
      VGetArg(upenv, 9-1, 1));
} else {
    V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D22_k40, env)}),
      VGetArg(upenv, 9-1, 1));
}
 }
}
static void _V10_Dgather__variables_D22_k37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgather__variables_D22_k37" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D22_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__variables_D22_k37, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.vector?.10 10 9) (close _V10_Dgather__variables_D22_k38) (bruijn ##.x.107 0 0))
    V_CALL(VGetArg(upenv, 10-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D22_k38, env)}),
      _var0);
 }
}
static void _V10_Dgather__variables_D22_k33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgather__variables_D22_k33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D22_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__variables_D22_k33, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.84 0 0) ((bruijn ##.car.1 9 0) (close _V10_Dgather__variables_D22_k34) (bruijn ##.pattern.24 7 1)) ((bruijn ##.car.1 9 0) (close _V10_Dgather__variables_D22_k37) (bruijn ##.pattern.24 7 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D22_k34, env)}),
      VGetArg(upenv, 7-1, 1));
} else {
    V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D22_k37, env)}),
      VGetArg(upenv, 7-1, 1));
}
 }
}
static void _V10_Dgather__variables_D22_k32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgather__variables_D22_k32" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D22_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__variables_D22_k32, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.symbol?.11 8 10) (close _V10_Dgather__variables_D22_k33) (bruijn ##.x.108 0 0))
    V_CALL(VGetArg(upenv, 8-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D22_k33, env)}),
      _var0);
 }
}
static void _V10_Dgather__variables_D22_k30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgather__variables_D22_k30" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D22_k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__variables_D22_k30, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.82 0 0) ((bruijn ##.cdr.20 7 19) (close _V10_Dgather__variables_D22_k31) (bruijn ##.pattern.24 5 1)) ((bruijn ##.car.1 7 0) (close _V10_Dgather__variables_D22_k32) (bruijn ##.pattern.24 5 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 7-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D22_k31, env)}),
      VGetArg(upenv, 5-1, 1));
} else {
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D22_k32, env)}),
      VGetArg(upenv, 5-1, 1));
}
 }
}
static void _V10_Dgather__variables_D22_k29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgather__variables_D22_k29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D22_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__variables_D22_k29, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.eqv?.25 4 2) (close _V10_Dgather__variables_D22_k30) (bruijn ##.x.109 0 0) '...)
    V_CALL(upenv->up->up->up->vars[2], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D22_k30, env)}),
      _var0,
      _V0_D_D_D);
 }
}
static void _V10_Dgather__variables_D22_k27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgather__variables_D22_k27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D22_k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__variables_D22_k27, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.80 0 0) ((bruijn ##.cdr.20 5 19) (close _V10_Dgather__variables_D22_k28) (bruijn ##.pattern.24 3 1)) ((bruijn ##.car.1 5 0) (close _V10_Dgather__variables_D22_k29) (bruijn ##.pattern.24 3 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 5-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D22_k28, env)}),
      upenv->up->up->vars[1]);
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D22_k29, env)}),
      upenv->up->up->vars[1]);
}
 }
}
static void _V10_Dgather__variables_D22_k26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgather__variables_D22_k26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D22_k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__variables_D22_k26, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.eqv?.25 2 2) (close _V10_Dgather__variables_D22_k27) (bruijn ##.x.110 0 0) '_)
    V_CALL(upenv->up->vars[2], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D22_k27, env)}),
      _var0,
      _V0_U);
 }
}
static void _V10_Dgather__variables_D22_k25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgather__variables_D22_k25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D22_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__variables_D22_k25, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.79 0 0) ((bruijn ##.k.78 1 0) '()) ((bruijn ##.car.1 3 0) (close _V10_Dgather__variables_D22_k26) (bruijn ##.pattern.24 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VNULL);
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D22_k26, env)}),
      upenv->vars[1]);
}
 }
}
static void _V10_Dgather__variables_D22_lambda3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dgather__variables_D22_lambda3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D22_lambda3, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__variables_D22_lambda3, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.null?.15 2 14) (close _V10_Dgather__variables_D22_k25) (bruijn ##.pattern.24 0 1))
    V_CALL(upenv->up->vars[14], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D22_k25, env)}),
      _var1);
 }
}
static void _V10_Dmatch__ellipses_D28_k75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__ellipses_D28_k75" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D28_k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__ellipses_D28_k75, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.112 21 0) (##inline ##vcore.cons 'call-with-values (##inline ##vcore.cons (##inline ##vcore.cons 'lambda (##inline ##vcore.cons '() (##inline ##vcore.cons (##inline ##vcore.cons 'call/cc (##inline ##vcore.cons (##inline ##vcore.cons 'lambda (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.k.38 14 0) '()) (##inline ##vcore.cons (##inline ##vcore.cons 'let (##inline ##vcore.cons 'loop (##inline ##vcore.cons (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.expr.40 12 0) (##inline ##vcore.cons (bruijn ##.x.188 11 0) '())) (bruijn ##.x.182 10 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'if (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.not (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.pair? (##inline ##vcore.cons (bruijn ##.expr.40 12 0) '())) '())) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.k.38 14 0) (##inline ##vcore.cons (bruijn ##.expr.40 12 0) (bruijn ##.x.175 9 0))) '()))) (##inline ##vcore.cons (##inline ##vcore.cons 'call-with-values (##inline ##vcore.cons (##inline ##vcore.cons 'lambda (##inline ##vcore.cons '() (##inline ##vcore.cons (##inline ##vcore.cons 'call/cc (##inline ##vcore.cons (##inline ##vcore.cons 'lambda (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.k2.39 13 0) '()) (##inline ##vcore.cons (bruijn ##.x.151 5 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.k.38 14 0) (##inline ##vcore.cons (bruijn ##.expr.40 12 0) (bruijn ##.x.155 4 0))) '())))) '())) '()))) (##inline ##vcore.cons 'loop '()))) '()))))) '()))) '())) '()))) (##inline ##vcore.cons (##inline ##vcore.cons 'lambda (##inline ##vcore.cons (##inline ##vcore.cons 'tail-expr (bruijn ##.variables.36 16 0)) (##inline ##vcore.cons (bruijn ##.x.120 0 0) '()))) '()))))
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
static void _V10_Dmatch__ellipses_D28_k74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__ellipses_D28_k74" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D28_k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__ellipses_D28_k74, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.match-iter.29 21 1) (close _V10_Dmatch__ellipses_D28_k75) (bruijn ##.x.121 1 0) (bruijn ##.x.122 0 0) (bruijn ##.success-expr.32 20 3))
    V_CALL(VGetArg(upenv, 21-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D28_k75, env)}),
      upenv->vars[0],
      _var0,
      VGetArg(upenv, 20-1, 3));
 }
}
static void _V10_Dmatch__ellipses_D28_k73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__ellipses_D28_k73" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D28_k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__ellipses_D28_k73, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.16 23 15) (close _V10_Dmatch__ellipses_D28_k74) (bruijn ##.tail-pattern.34 17 0) (bruijn ##.pattern-stack.35 16 0))
    V_CALL(VGetArg(upenv, 23-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D28_k74, env)}),
      VGetArg(upenv, 17-1, 0),
      VGetArg(upenv, 16-1, 0));
 }
}
static void _V10_Dmatch__ellipses_D28_k72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__ellipses_D28_k72" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D28_k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__ellipses_D28_k72, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.16 22 15) (close _V10_Dmatch__ellipses_D28_k73) 'tail-expr (bruijn ##.x.123 0 0))
    V_CALL(VGetArg(upenv, 22-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D28_k73, env)}),
      _V0tail__expr,
      _var0);
 }
}
static void _V10_Dmatch__ellipses_D28_k71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__ellipses_D28_k71" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D28_k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__ellipses_D28_k71, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.20 21 19) (close _V10_Dmatch__ellipses_D28_k72) (bruijn ##.expr-stack.30 17 1))
    V_CALL(VGetArg(upenv, 21-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D28_k72, env)}),
      VGetArg(upenv, 17-1, 1));
 }
}
static void _V10_Dmatch__ellipses_D28_lambda6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dmatch__ellipses_D28_lambda6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D28_lambda6, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__ellipses_D28_lambda6, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##.k.156 0 0) (##inline ##vcore.cons 'reverse (##inline ##vcore.cons (bruijn ##.sym.45 0 1) '())))
    V_CALL(_var0, runtime,
      VInlineCons2(runtime,
        _V0reverse,
        VInlineCons2(runtime,
        _var1,
        VNULL)));
 }
}
static void _V10_Dmatch__ellipses_D28_k70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__ellipses_D28_k70" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D28_k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__ellipses_D28_k70, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.12 20 11) (close _V10_Dmatch__ellipses_D28_k71) (close _V10_Dmatch__ellipses_D28_lambda6) (bruijn ##.syms.37 10 0))
    V_CALL(VGetArg(upenv, 20-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D28_k71, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D28_lambda6, env)}),
      VGetArg(upenv, 10-1, 0));
 }
}
static void _V10_Dmatch__ellipses_D28_k69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__ellipses_D28_k69" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D28_k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__ellipses_D28_k69, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.match-iter.29 16 1) (close _V10_Dmatch__ellipses_D28_k70) (bruijn ##.x.158 2 0) (bruijn ##.x.159 1 0) (##inline ##vcore.cons (bruijn ##.k2.39 7 0) (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.cdr (##inline ##vcore.cons (bruijn ##.expr.40 6 0) '())) (bruijn ##.x.163 0 0))))
    V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D28_k70, env)}),
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
static void _V10_Dmatch__ellipses_D28_lambda7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dmatch__ellipses_D28_lambda7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D28_lambda7, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__ellipses_D28_lambda7, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // ((bruijn ##.k.164 0 0) (##inline ##vcore.cons '##vcore.cons (##inline ##vcore.cons (bruijn ##.var.43 0 1) (##inline ##vcore.cons (bruijn ##.sym.44 0 2) '()))))
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
static void _V10_Dmatch__ellipses_D28_k68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__ellipses_D28_k68" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D28_k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__ellipses_D28_k68, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.12 18 11) (close _V10_Dmatch__ellipses_D28_k69) (close _V10_Dmatch__ellipses_D28_lambda7) (bruijn ##.variables.36 9 0) (bruijn ##.syms.37 8 0))
    V_CALL(VGetArg(upenv, 18-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D28_k69, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D28_lambda7, env)}),
      VGetArg(upenv, 9-1, 0),
      VGetArg(upenv, 8-1, 0));
 }
}
static void _V10_Dmatch__ellipses_D28_k67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__ellipses_D28_k67" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D28_k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__ellipses_D28_k67, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.list.18 17 17) (close _V10_Dmatch__ellipses_D28_k68) (bruijn ##.pattern.33 12 0))
    V_CALL(VGetArg(upenv, 17-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D28_k68, env)}),
      VGetArg(upenv, 12-1, 0));
 }
}
static void _V10_Dmatch__ellipses_D28_k66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__ellipses_D28_k66" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D28_k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__ellipses_D28_k66, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.list.18 16 17) (close _V10_Dmatch__ellipses_D28_k67) (##inline ##vcore.cons '##vcore.car (##inline ##vcore.cons (bruijn ##.expr.40 3 0) '())))
    V_CALL(VGetArg(upenv, 16-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D28_k67, env)}),
      VInlineCons2(runtime,
        _V10vcore_Dcar,
        VInlineCons2(runtime,
        upenv->up->up->vars[0],
        VNULL)));
 }
}
static void _V10_Dmatch__ellipses_D28_lambda8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dmatch__ellipses_D28_lambda8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D28_lambda8, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__ellipses_D28_lambda8, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##.k.176 0 0) (##inline ##vcore.cons 'reverse (##inline ##vcore.cons (bruijn ##.sym.42 0 1) '())))
    V_CALL(_var0, runtime,
      VInlineCons2(runtime,
        _V0reverse,
        VInlineCons2(runtime,
        _var1,
        VNULL)));
 }
}
static void _V10_Dmatch__ellipses_D28_k65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__ellipses_D28_k65" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D28_k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__ellipses_D28_k65, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.12 15 11) (close _V10_Dmatch__ellipses_D28_k66) (close _V10_Dmatch__ellipses_D28_lambda8) (bruijn ##.syms.37 5 0))
    V_CALL(VGetArg(upenv, 15-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D28_k66, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D28_lambda8, env)}),
      VGetArg(upenv, 5-1, 0));
 }
}
static void _V10_Dmatch__ellipses_D28_lambda9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dmatch__ellipses_D28_lambda9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D28_lambda9, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__ellipses_D28_lambda9, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##.k.183 0 0) (##inline ##vcore.cons (bruijn ##.sym.41 0 1) (##inline ##vcore.cons (##inline ##vcore.cons 'quote (##inline ##vcore.cons '() '())) '())))
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
static void _V10_Dmatch__ellipses_D28_k64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__ellipses_D28_k64" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D28_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__ellipses_D28_k64, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.12 14 11) (close _V10_Dmatch__ellipses_D28_k65) (close _V10_Dmatch__ellipses_D28_lambda9) (bruijn ##.syms.37 4 0))
    V_CALL(VGetArg(upenv, 14-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D28_k65, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D28_lambda9, env)}),
      upenv->up->up->up->vars[0]);
 }
}
static void _V10_Dmatch__ellipses_D28_k63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__ellipses_D28_k63" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D28_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__ellipses_D28_k63, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.car.1 13 0) (close _V10_Dmatch__ellipses_D28_k64) (bruijn ##.expr-stack.30 9 1))
    V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D28_k64, env)}),
      VGetArg(upenv, 9-1, 1));
 }
}
static void _V10_Dmatch__ellipses_D28_k62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__ellipses_D28_k62" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D28_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__ellipses_D28_k62, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.gensym.21 12 20) (close _V10_Dmatch__ellipses_D28_k63) (##string ##.string.363))
    V_CALL(VGetArg(upenv, 12-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D28_k63, env)}),
      VEncodePointer(&_V10_Dstring_D363.sym, VPOINTER_OTHER));
 }
}
static void _V10_Dmatch__ellipses_D28_k61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__ellipses_D28_k61" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D28_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__ellipses_D28_k61, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.gensym.21 11 20) (close _V10_Dmatch__ellipses_D28_k62) (##string ##.string.364))
    V_CALL(VGetArg(upenv, 11-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D28_k62, env)}),
      VEncodePointer(&_V10_Dstring_D364.sym, VPOINTER_OTHER));
 }
}
static void _V10_Dmatch__ellipses_D28_k60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__ellipses_D28_k60" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D28_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__ellipses_D28_k60, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.gensym.21 10 20) (close _V10_Dmatch__ellipses_D28_k61) (##string ##.string.364))
    V_CALL(VGetArg(upenv, 10-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D28_k61, env)}),
      VEncodePointer(&_V10_Dstring_D364.sym, VPOINTER_OTHER));
 }
}
static void _V10_Dmatch__ellipses_D28_k59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__ellipses_D28_k59" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D28_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__ellipses_D28_k59, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.12 9 11) (close _V10_Dmatch__ellipses_D28_k60) (bruijn ##.gensym.21 9 20) (bruijn ##.variables.36 0 0))
    V_CALL(VGetArg(upenv, 9-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D28_k60, env)}),
      VGetArg(upenv, 9-1, 20),
      _var0);
 }
}
static void _V10_Dmatch__ellipses_D28_k58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__ellipses_D28_k58" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D28_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__ellipses_D28_k58, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.gather-variables.22 7 0) (close _V10_Dmatch__ellipses_D28_k59) (bruijn ##.x.189 0 0) (bruijn ##.eqv?.27 6 2))
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D28_k59, env)}),
      _var0,
      VGetArg(upenv, 6-1, 2));
 }
}
static void _V10_Dmatch__ellipses_D28_k57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__ellipses_D28_k57" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D28_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__ellipses_D28_k57, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.list.18 7 17) (close _V10_Dmatch__ellipses_D28_k58) (bruijn ##.pattern.33 2 0))
    V_CALL(VGetArg(upenv, 7-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D28_k58, env)}),
      upenv->up->vars[0]);
 }
}
static void _V10_Dmatch__ellipses_D28_k56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__ellipses_D28_k56" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D28_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__ellipses_D28_k56, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.20 6 19) (close _V10_Dmatch__ellipses_D28_k57) (bruijn ##.pattern-stack.31 2 2))
    V_CALL(VGetArg(upenv, 6-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D28_k57, env)}),
      upenv->up->vars[2]);
 }
}
static void _V10_Dmatch__ellipses_D28_k55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__ellipses_D28_k55" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D28_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__ellipses_D28_k55, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cddar.5 5 4) (close _V10_Dmatch__ellipses_D28_k56) (bruijn ##.pattern-stack.31 1 2))
    V_CALL(VGetArg(upenv, 5-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D28_k56, env)}),
      upenv->vars[2]);
 }
}
static void _V10_Dmatch__ellipses_D28_lambda5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V10_Dmatch__ellipses_D28_lambda5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D28_lambda5, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__ellipses_D28_lambda5, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn ##.caar.19 4 18) (close _V10_Dmatch__ellipses_D28_k55) (bruijn ##.pattern-stack.31 0 2))
    V_CALL(upenv->up->up->up->vars[18], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D28_k55, env)}),
      _var2);
 }
}
static void _V10_Dmatch__iter_D29_k80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k80" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k80, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.match-iter.29 6 1) (bruijn ##.k.190 5 0) (bruijn ##.x.193 1 0) (bruijn ##.x.194 0 0) (bruijn ##.success-expr.48 5 3))
    V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      upenv->vars[0],
      _var0,
      VGetArg(upenv, 5-1, 3));
 }
}
static void _V10_Dmatch__iter_D29_k79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k79" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k79, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.20 8 19) (close _V10_Dmatch__iter_D29_k80) (bruijn ##.pattern-stack.47 4 2))
    V_CALL(VGetArg(upenv, 8-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k80, env)}),
      upenv->up->up->up->vars[2]);
 }
}
static void _V10_Dmatch__iter_D29_k87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k87" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k87, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.190 10 0) (##inline ##vcore.cons 'let (##inline ##vcore.cons (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.203 4 0) (##inline ##vcore.cons (bruijn ##.x.205 3 0) '())) '()) (##inline ##vcore.cons (bruijn ##.x.199 0 0) '()))))
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
static void _V10_Dmatch__iter_D29_k86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k86" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k86, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.match-iter.29 10 1) (close _V10_Dmatch__iter_D29_k87) (bruijn ##.x.200 1 0) (bruijn ##.x.201 0 0) (bruijn ##.success-expr.48 9 3))
    V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k87, env)}),
      upenv->vars[0],
      _var0,
      VGetArg(upenv, 9-1, 3));
 }
}
static void _V10_Dmatch__iter_D29_k85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k85" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k85, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.20 12 19) (close _V10_Dmatch__iter_D29_k86) (bruijn ##.pattern-stack.47 8 2))
    V_CALL(VGetArg(upenv, 12-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k86, env)}),
      VGetArg(upenv, 8-1, 2));
 }
}
static void _V10_Dmatch__iter_D29_k84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k84" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k84, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.20 11 19) (close _V10_Dmatch__iter_D29_k85) (bruijn ##.expr-stack.46 7 1))
    V_CALL(VGetArg(upenv, 11-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k85, env)}),
      VGetArg(upenv, 7-1, 1));
 }
}
static void _V10_Dmatch__iter_D29_k83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k83" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k83, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.car.1 10 0) (close _V10_Dmatch__iter_D29_k84) (bruijn ##.expr-stack.46 6 1))
    V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k84, env)}),
      VGetArg(upenv, 6-1, 1));
 }
}
static void _V10_Dmatch__iter_D29_k90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k90" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k90, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.compiler-error.2 12 1) (bruijn ##.k.190 8 0) (##string ##.string.361) (bruijn ##.x.207 0 0))
    V_CALL(VGetArg(upenv, 12-1, 1), runtime,
      VGetArg(upenv, 8-1, 0),
      VEncodePointer(&_V10_Dstring_D361.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V10_Dmatch__iter_D29_k93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k93" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k93, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.compiler-error.2 14 1) (bruijn ##.k.190 10 0) (##string ##.string.362) (bruijn ##.x.209 0 0))
    V_CALL(VGetArg(upenv, 14-1, 1), runtime,
      VGetArg(upenv, 10-1, 0),
      VEncodePointer(&_V10_Dstring_D362.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V10_Dmatch__iter_D29_k99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k99" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k99, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.190 15 0) (##inline ##vcore.cons 'if (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.null? (##inline ##vcore.cons (bruijn ##.x.218 3 0) '())) (##inline ##vcore.cons (bruijn ##.x.214 0 0) '()))))
    V_CALL(VGetArg(upenv, 15-1, 0), runtime,
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
static void _V10_Dmatch__iter_D29_k98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k98" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k98, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.match-iter.29 15 1) (close _V10_Dmatch__iter_D29_k99) (bruijn ##.x.215 1 0) (bruijn ##.x.216 0 0) (bruijn ##.success-expr.48 14 3))
    V_CALL(VGetArg(upenv, 15-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k99, env)}),
      upenv->vars[0],
      _var0,
      VGetArg(upenv, 14-1, 3));
 }
}
static void _V10_Dmatch__iter_D29_k97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k97" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k97, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.20 17 19) (close _V10_Dmatch__iter_D29_k98) (bruijn ##.pattern-stack.47 13 2))
    V_CALL(VGetArg(upenv, 17-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k98, env)}),
      VGetArg(upenv, 13-1, 2));
 }
}
static void _V10_Dmatch__iter_D29_k96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k96" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k96, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.20 16 19) (close _V10_Dmatch__iter_D29_k97) (bruijn ##.expr-stack.46 12 1))
    V_CALL(VGetArg(upenv, 16-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k97, env)}),
      VGetArg(upenv, 12-1, 1));
 }
}
static void _V10_Dmatch__iter_D29_k107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k107" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k107, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.190 19 0) (##inline ##vcore.cons 'if (##inline ##vcore.cons (##inline ##vcore.cons 'and (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.string? (##inline ##vcore.cons (bruijn ##.x.235 5 0) '())) (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.blob=? (##inline ##vcore.cons (bruijn ##.x.231 4 0) (##inline ##vcore.cons (bruijn ##.x.233 3 0) '()))) '()))) (##inline ##vcore.cons (bruijn ##.x.223 0 0) '()))))
    V_CALL(VGetArg(upenv, 19-1, 0), runtime,
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
static void _V10_Dmatch__iter_D29_k106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k106" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k106, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.match-iter.29 19 1) (close _V10_Dmatch__iter_D29_k107) (bruijn ##.x.224 1 0) (bruijn ##.x.225 0 0) (bruijn ##.success-expr.48 18 3))
    V_CALL(VGetArg(upenv, 19-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k107, env)}),
      upenv->vars[0],
      _var0,
      VGetArg(upenv, 18-1, 3));
 }
}
static void _V10_Dmatch__iter_D29_k105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k105" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k105, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.20 21 19) (close _V10_Dmatch__iter_D29_k106) (bruijn ##.pattern-stack.47 17 2))
    V_CALL(VGetArg(upenv, 21-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k106, env)}),
      VGetArg(upenv, 17-1, 2));
 }
}
static void _V10_Dmatch__iter_D29_k104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k104" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k104, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.20 20 19) (close _V10_Dmatch__iter_D29_k105) (bruijn ##.expr-stack.46 16 1))
    V_CALL(VGetArg(upenv, 20-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k105, env)}),
      VGetArg(upenv, 16-1, 1));
 }
}
static void _V10_Dmatch__iter_D29_k103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k103" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k103, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.car.1 19 0) (close _V10_Dmatch__iter_D29_k104) (bruijn ##.expr-stack.46 15 1))
    V_CALL(VGetArg(upenv, 19-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k104, env)}),
      VGetArg(upenv, 15-1, 1));
 }
}
static void _V10_Dmatch__iter_D29_k102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k102" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k102, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.car.1 18 0) (close _V10_Dmatch__iter_D29_k103) (bruijn ##.pattern-stack.47 14 2))
    V_CALL(VGetArg(upenv, 18-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k103, env)}),
      VGetArg(upenv, 14-1, 2));
 }
}
static void _V10_Dmatch__iter_D29_k114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k114" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k114, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.190 20 0) (##inline ##vcore.cons 'if (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.eq? (##inline ##vcore.cons (bruijn ##.x.244 4 0) (##inline ##vcore.cons (bruijn ##.x.246 3 0) '()))) (##inline ##vcore.cons (bruijn ##.x.240 0 0) '()))))
    V_CALL(VGetArg(upenv, 20-1, 0), runtime,
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
static void _V10_Dmatch__iter_D29_k113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k113" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k113, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.match-iter.29 20 1) (close _V10_Dmatch__iter_D29_k114) (bruijn ##.x.241 1 0) (bruijn ##.x.242 0 0) (bruijn ##.success-expr.48 19 3))
    V_CALL(VGetArg(upenv, 20-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k114, env)}),
      upenv->vars[0],
      _var0,
      VGetArg(upenv, 19-1, 3));
 }
}
static void _V10_Dmatch__iter_D29_k112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k112" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k112, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.20 22 19) (close _V10_Dmatch__iter_D29_k113) (bruijn ##.pattern-stack.47 18 2))
    V_CALL(VGetArg(upenv, 22-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k113, env)}),
      VGetArg(upenv, 18-1, 2));
 }
}
static void _V10_Dmatch__iter_D29_k111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k111" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k111, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.20 21 19) (close _V10_Dmatch__iter_D29_k112) (bruijn ##.expr-stack.46 17 1))
    V_CALL(VGetArg(upenv, 21-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k112, env)}),
      VGetArg(upenv, 17-1, 1));
 }
}
static void _V10_Dmatch__iter_D29_k110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k110" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k110, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.car.1 20 0) (close _V10_Dmatch__iter_D29_k111) (bruijn ##.expr-stack.46 16 1))
    V_CALL(VGetArg(upenv, 20-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k111, env)}),
      VGetArg(upenv, 16-1, 1));
 }
}
static void _V10_Dmatch__iter_D29_k118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k118" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k118, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.eqv?.27 21 2) (bruijn ##.k.313 1 0) (bruijn ##.x.314 0 0) 'quote)
    V_CALL(VGetArg(upenv, 21-1, 2), runtime,
      upenv->vars[0],
      _var0,
      _V0quote);
 }
}
static void _V10_Dmatch__iter_D29_k117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k117" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k117, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.312 1 0) ((bruijn ##.caar.19 22 18) (close _V10_Dmatch__iter_D29_k118) (bruijn ##.pattern-stack.47 18 2)) ((bruijn ##.k.313 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 22-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k118, env)}),
      VGetArg(upenv, 18-1, 2));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dmatch__iter_D29_k125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k125" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k125, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.not.6 28 5) (bruijn ##.k.264 2 0) (bruijn ##.x.265 0 0))
    V_CALL(VGetArg(upenv, 28-1, 5), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Dmatch__iter_D29_k124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k124" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k124, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.null?.15 27 14) (close _V10_Dmatch__iter_D29_k125) (bruijn ##.x.266 0 0))
    V_CALL(VGetArg(upenv, 27-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k125, env)}),
      _var0);
 }
}
static void _V10_Dmatch__iter_D29_k123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k123" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k123, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.263 1 0) ((bruijn ##.k.264 0 0) (bruijn ##.p.263 1 0)) ((bruijn ##.cddar.5 26 4) (close _V10_Dmatch__iter_D29_k124) (bruijn ##.pattern-stack.47 22 2)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(_var0, runtime,
      upenv->vars[0]);
} else {
    V_CALL(VGetArg(upenv, 26-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k124, env)}),
      VGetArg(upenv, 22-1, 2));
}
 }
}
static void _V10_Dmatch__iter_D29_k127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k127" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k127, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.261 1 0) ((bruijn ##.compiler-error.2 27 1) (bruijn ##.k.262 0 0) (##string ##.string.365)) ((bruijn ##.k.262 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 27-1, 1), runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D365.sym, VPOINTER_OTHER));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dmatch__iter_D29_k133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k133" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k133, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.190 28 0) (##inline ##vcore.cons 'if (##inline ##vcore.cons (##inline ##vcore.cons 'equal? (##inline ##vcore.cons (##inline ##vcore.cons 'quote (##inline ##vcore.cons (bruijn ##.x.260 4 0) '())) (##inline ##vcore.cons (bruijn ##.x.258 3 0) '()))) (##inline ##vcore.cons (bruijn ##.x.252 0 0) '()))))
    V_CALL(VGetArg(upenv, 28-1, 0), runtime,
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
static void _V10_Dmatch__iter_D29_k132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k132" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k132, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.match-iter.29 28 1) (close _V10_Dmatch__iter_D29_k133) (bruijn ##.x.253 1 0) (bruijn ##.x.254 0 0) (bruijn ##.success-expr.48 27 3))
    V_CALL(VGetArg(upenv, 28-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k133, env)}),
      upenv->vars[0],
      _var0,
      VGetArg(upenv, 27-1, 3));
 }
}
static void _V10_Dmatch__iter_D29_k131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k131" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k131, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.20 30 19) (close _V10_Dmatch__iter_D29_k132) (bruijn ##.pattern-stack.47 26 2))
    V_CALL(VGetArg(upenv, 30-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k132, env)}),
      VGetArg(upenv, 26-1, 2));
 }
}
static void _V10_Dmatch__iter_D29_k130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k130" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k130, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.20 29 19) (close _V10_Dmatch__iter_D29_k131) (bruijn ##.expr-stack.46 25 1))
    V_CALL(VGetArg(upenv, 29-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k131, env)}),
      VGetArg(upenv, 25-1, 1));
 }
}
static void _V10_Dmatch__iter_D29_k129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k129" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k129, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.car.1 28 0) (close _V10_Dmatch__iter_D29_k130) (bruijn ##.expr-stack.46 24 1))
    V_CALL(VGetArg(upenv, 28-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k130, env)}),
      VGetArg(upenv, 24-1, 1));
 }
}
static void _V10_Dmatch__iter_D29_k128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k128" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k128, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cadar.4 27 3) (close _V10_Dmatch__iter_D29_k129) (bruijn ##.pattern-stack.47 23 2))
    V_CALL(VGetArg(upenv, 27-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k129, env)}),
      VGetArg(upenv, 23-1, 2));
 }
}
static void _V10_Dmatch__iter_D29_k126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k126" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k126, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dmatch__iter_D29_k127) (close _V10_Dmatch__iter_D29_k128))
    V_CALL_FUNC(_V10_Dmatch__iter_D29_k127, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k128, env)}));
 }
}
static void _V10_Dmatch__iter_D29_k122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k122" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k122, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dmatch__iter_D29_k123) (close _V10_Dmatch__iter_D29_k126))
    V_CALL_FUNC(_V10_Dmatch__iter_D29_k123, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k126, env)}));
 }
}
static void _V10_Dmatch__iter_D29_k121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k121" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k121, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.not.6 24 5) (close _V10_Dmatch__iter_D29_k122) (bruijn ##.x.267 0 0))
    V_CALL(VGetArg(upenv, 24-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k122, env)}),
      _var0);
 }
}
static void _V10_Dmatch__iter_D29_k120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k120" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k120, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.pair?.3 23 2) (close _V10_Dmatch__iter_D29_k121) (bruijn ##.x.268 0 0))
    V_CALL(VGetArg(upenv, 23-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k121, env)}),
      _var0);
 }
}
static void _V10_Dmatch__iter_D29_k139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k139" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k139, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.eqv?.27 26 2) (bruijn ##.k.307 3 0) (bruijn ##.x.309 0 0) '...)
    V_CALL(VGetArg(upenv, 26-1, 2), runtime,
      upenv->up->up->vars[0],
      _var0,
      _V0_D_D_D);
 }
}
static void _V10_Dmatch__iter_D29_k138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k138" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k138, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.308 0 0) ((bruijn ##.cadar.4 27 3) (close _V10_Dmatch__iter_D29_k139) (bruijn ##.pattern-stack.47 23 2)) ((bruijn ##.k.307 2 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 27-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k139, env)}),
      VGetArg(upenv, 23-1, 2));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dmatch__iter_D29_k137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k137" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k137, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.pair?.3 26 2) (close _V10_Dmatch__iter_D29_k138) (bruijn ##.x.310 0 0))
    V_CALL(VGetArg(upenv, 26-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k138, env)}),
      _var0);
 }
}
static void _V10_Dmatch__iter_D29_k136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k136" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k136, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.306 1 0) ((bruijn ##.cdar.17 25 16) (close _V10_Dmatch__iter_D29_k137) (bruijn ##.pattern-stack.47 21 2)) ((bruijn ##.k.307 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 25-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k137, env)}),
      VGetArg(upenv, 21-1, 2));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dmatch__iter_D29_k145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k145" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k145, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.190 26 0) (##inline ##vcore.cons 'let (##inline ##vcore.cons (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.sym.49 4 0) (##inline ##vcore.cons (bruijn ##.x.278 3 0) '())) '()) (##inline ##vcore.cons (bruijn ##.x.273 0 0) '()))))
    V_CALL(VGetArg(upenv, 26-1, 0), runtime,
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
static void _V10_Dmatch__iter_D29_k144(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k144" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k144, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.match-ellipses.28 26 0) (close _V10_Dmatch__iter_D29_k145) (bruijn ##.x.274 0 0) (bruijn ##.pattern-stack.47 25 2) (bruijn ##.success-expr.48 25 3))
    V_CALL(VGetArg(upenv, 26-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k145, env)}),
      _var0,
      VGetArg(upenv, 25-1, 2),
      VGetArg(upenv, 25-1, 3));
 }
}
static void _V10_Dmatch__iter_D29_k143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k143" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k143, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.16 28 15) (close _V10_Dmatch__iter_D29_k144) (bruijn ##.sym.49 2 0) (bruijn ##.x.275 0 0))
    V_CALL(VGetArg(upenv, 28-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k144, env)}),
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Dmatch__iter_D29_k142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k142" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k142, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.20 27 19) (close _V10_Dmatch__iter_D29_k143) (bruijn ##.expr-stack.46 23 1))
    V_CALL(VGetArg(upenv, 27-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k143, env)}),
      VGetArg(upenv, 23-1, 1));
 }
}
static void _V10_Dmatch__iter_D29_k141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k141" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k141, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.car.1 26 0) (close _V10_Dmatch__iter_D29_k142) (bruijn ##.expr-stack.46 22 1))
    V_CALL(VGetArg(upenv, 26-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k142, env)}),
      VGetArg(upenv, 22-1, 1));
 }
}
static void _V10_Dmatch__iter_D29_k154(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k154" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k154, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.190 30 0) (##inline ##vcore.cons 'let (##inline ##vcore.cons (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.sym.50 6 0) (##inline ##vcore.cons (bruijn ##.x.303 5 0) '())) '()) (##inline ##vcore.cons (##inline ##vcore.cons 'if (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.pair? (##inline ##vcore.cons (bruijn ##.sym.50 6 0) '())) (##inline ##vcore.cons (bruijn ##.x.287 0 0) '()))) '()))))
    V_CALL(VGetArg(upenv, 30-1, 0), runtime,
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
static void _V10_Dmatch__iter_D29_k153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k153" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k153, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.match-iter.29 30 1) (close _V10_Dmatch__iter_D29_k154) (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.car (##inline ##vcore.cons (bruijn ##.sym.50 5 0) '())) (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.cdr (##inline ##vcore.cons (bruijn ##.sym.50 5 0) '())) (bruijn ##.x.297 3 0))) (##inline ##vcore.cons (bruijn ##.x.290 2 0) (##inline ##vcore.cons (bruijn ##.x.292 1 0) (bruijn ##.x.293 0 0))) (bruijn ##.success-expr.48 29 3))
    V_CALL(VGetArg(upenv, 30-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k154, env)}),
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
      VGetArg(upenv, 29-1, 3));
 }
}
static void _V10_Dmatch__iter_D29_k152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k152" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k152, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.20 32 19) (close _V10_Dmatch__iter_D29_k153) (bruijn ##.pattern-stack.47 28 2))
    V_CALL(VGetArg(upenv, 32-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k153, env)}),
      VGetArg(upenv, 28-1, 2));
 }
}
static void _V10_Dmatch__iter_D29_k151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k151" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k151, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdar.17 31 16) (close _V10_Dmatch__iter_D29_k152) (bruijn ##.pattern-stack.47 27 2))
    V_CALL(VGetArg(upenv, 31-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k152, env)}),
      VGetArg(upenv, 27-1, 2));
 }
}
static void _V10_Dmatch__iter_D29_k150(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k150" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k150, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.caar.19 30 18) (close _V10_Dmatch__iter_D29_k151) (bruijn ##.pattern-stack.47 26 2))
    V_CALL(VGetArg(upenv, 30-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k151, env)}),
      VGetArg(upenv, 26-1, 2));
 }
}
static void _V10_Dmatch__iter_D29_k149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k149" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k149, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.20 29 19) (close _V10_Dmatch__iter_D29_k150) (bruijn ##.expr-stack.46 25 1))
    V_CALL(VGetArg(upenv, 29-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k150, env)}),
      VGetArg(upenv, 25-1, 1));
 }
}
static void _V10_Dmatch__iter_D29_k148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k148" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k148, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.car.1 28 0) (close _V10_Dmatch__iter_D29_k149) (bruijn ##.expr-stack.46 24 1))
    V_CALL(VGetArg(upenv, 28-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k149, env)}),
      VGetArg(upenv, 24-1, 1));
 }
}
static void _V10_Dmatch__iter_D29_k155(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k155" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k155, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.compiler-error.2 28 1) (bruijn ##.k.190 24 0) (##string ##.string.366) (bruijn ##.x.304 0 0))
    V_CALL(VGetArg(upenv, 28-1, 1), runtime,
      VGetArg(upenv, 24-1, 0),
      VEncodePointer(&_V10_Dstring_D366.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V10_Dmatch__iter_D29_k147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k147" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k147, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.279 0 0) ((bruijn ##.gensym.21 27 20) (close _V10_Dmatch__iter_D29_k148) (##string ##.string.363)) ((bruijn ##.car.1 27 0) (close _V10_Dmatch__iter_D29_k155) (bruijn ##.pattern-stack.47 23 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 27-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k148, env)}),
      VEncodePointer(&_V10_Dstring_D363.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 27-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k155, env)}),
      VGetArg(upenv, 23-1, 2));
}
 }
}
static void _V10_Dmatch__iter_D29_k146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k146" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k146, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.pair?.3 26 2) (close _V10_Dmatch__iter_D29_k147) (bruijn ##.x.305 0 0))
    V_CALL(VGetArg(upenv, 26-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k147, env)}),
      _var0);
 }
}
static void _V10_Dmatch__iter_D29_k140(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k140" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k140, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.269 0 0) ((bruijn ##.gensym.21 25 20) (close _V10_Dmatch__iter_D29_k141) (##string ##.string.363)) ((bruijn ##.car.1 25 0) (close _V10_Dmatch__iter_D29_k146) (bruijn ##.pattern-stack.47 21 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 25-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k141, env)}),
      VEncodePointer(&_V10_Dstring_D363.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 25-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k146, env)}),
      VGetArg(upenv, 21-1, 2));
}
 }
}
static void _V10_Dmatch__iter_D29_k135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k135" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k135, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dmatch__iter_D29_k136) (close _V10_Dmatch__iter_D29_k140))
    V_CALL_FUNC(_V10_Dmatch__iter_D29_k136, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k140, env)}));
 }
}
static void _V10_Dmatch__iter_D29_k134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k134" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k134, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.pair?.3 23 2) (close _V10_Dmatch__iter_D29_k135) (bruijn ##.x.311 0 0))
    V_CALL(VGetArg(upenv, 23-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k135, env)}),
      _var0);
 }
}
static void _V10_Dmatch__iter_D29_k119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k119" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k119, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.247 0 0) ((bruijn ##.cdar.17 22 16) (close _V10_Dmatch__iter_D29_k120) (bruijn ##.pattern-stack.47 18 2)) ((bruijn ##.car.1 22 0) (close _V10_Dmatch__iter_D29_k134) (bruijn ##.pattern-stack.47 18 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 22-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k120, env)}),
      VGetArg(upenv, 18-1, 2));
} else {
    V_CALL(VGetArg(upenv, 22-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k134, env)}),
      VGetArg(upenv, 18-1, 2));
}
 }
}
static void _V10_Dmatch__iter_D29_k116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k116" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k116, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dmatch__iter_D29_k117) (close _V10_Dmatch__iter_D29_k119))
    V_CALL_FUNC(_V10_Dmatch__iter_D29_k117, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k119, env)}));
 }
}
static void _V10_Dmatch__iter_D29_k115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k115" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k115, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.pair?.3 20 2) (close _V10_Dmatch__iter_D29_k116) (bruijn ##.x.315 0 0))
    V_CALL(VGetArg(upenv, 20-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k116, env)}),
      _var0);
 }
}
static void _V10_Dmatch__iter_D29_k109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k109" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k109, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.236 0 0) ((bruijn ##.car.1 19 0) (close _V10_Dmatch__iter_D29_k110) (bruijn ##.pattern-stack.47 15 2)) ((bruijn ##.car.1 19 0) (close _V10_Dmatch__iter_D29_k115) (bruijn ##.pattern-stack.47 15 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 19-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k110, env)}),
      VGetArg(upenv, 15-1, 2));
} else {
    V_CALL(VGetArg(upenv, 19-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k115, env)}),
      VGetArg(upenv, 15-1, 2));
}
 }
}
static void _V10_Dmatch__iter_D29_k108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k108" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k108, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.atom?.7 18 6) (close _V10_Dmatch__iter_D29_k109) (bruijn ##.x.316 0 0))
    V_CALL(VGetArg(upenv, 18-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k109, env)}),
      _var0);
 }
}
static void _V10_Dmatch__iter_D29_k101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k101" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k101, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.219 0 0) ((bruijn ##.car.1 17 0) (close _V10_Dmatch__iter_D29_k102) (bruijn ##.expr-stack.46 13 1)) ((bruijn ##.car.1 17 0) (close _V10_Dmatch__iter_D29_k108) (bruijn ##.pattern-stack.47 13 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 17-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k102, env)}),
      VGetArg(upenv, 13-1, 1));
} else {
    V_CALL(VGetArg(upenv, 17-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k108, env)}),
      VGetArg(upenv, 13-1, 2));
}
 }
}
static void _V10_Dmatch__iter_D29_k100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k100" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k100, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.string?.8 16 7) (close _V10_Dmatch__iter_D29_k101) (bruijn ##.x.317 0 0))
    V_CALL(VGetArg(upenv, 16-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k101, env)}),
      _var0);
 }
}
static void _V10_Dmatch__iter_D29_k95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k95" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k95, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.210 0 0) ((bruijn ##.car.1 15 0) (close _V10_Dmatch__iter_D29_k96) (bruijn ##.expr-stack.46 11 1)) ((bruijn ##.car.1 15 0) (close _V10_Dmatch__iter_D29_k100) (bruijn ##.pattern-stack.47 11 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 15-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k96, env)}),
      VGetArg(upenv, 11-1, 1));
} else {
    V_CALL(VGetArg(upenv, 15-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k100, env)}),
      VGetArg(upenv, 11-1, 2));
}
 }
}
static void _V10_Dmatch__iter_D29_k94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k94" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k94, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.null?.15 14 14) (close _V10_Dmatch__iter_D29_k95) (bruijn ##.x.318 0 0))
    V_CALL(VGetArg(upenv, 14-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k95, env)}),
      _var0);
 }
}
static void _V10_Dmatch__iter_D29_k92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k92" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k92, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.208 0 0) ((bruijn ##.car.1 13 0) (close _V10_Dmatch__iter_D29_k93) (bruijn ##.pattern-stack.47 9 2)) ((bruijn ##.car.1 13 0) (close _V10_Dmatch__iter_D29_k94) (bruijn ##.pattern-stack.47 9 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k93, env)}),
      VGetArg(upenv, 9-1, 2));
} else {
    V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k94, env)}),
      VGetArg(upenv, 9-1, 2));
}
 }
}
static void _V10_Dmatch__iter_D29_k91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k91" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k91, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.typevector?.9 12 8) (close _V10_Dmatch__iter_D29_k92) (bruijn ##.x.319 0 0))
    V_CALL(VGetArg(upenv, 12-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k92, env)}),
      _var0);
 }
}
static void _V10_Dmatch__iter_D29_k89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k89" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k89, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.206 0 0) ((bruijn ##.car.1 11 0) (close _V10_Dmatch__iter_D29_k90) (bruijn ##.pattern-stack.47 7 2)) ((bruijn ##.car.1 11 0) (close _V10_Dmatch__iter_D29_k91) (bruijn ##.pattern-stack.47 7 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k90, env)}),
      VGetArg(upenv, 7-1, 2));
} else {
    V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k91, env)}),
      VGetArg(upenv, 7-1, 2));
}
 }
}
static void _V10_Dmatch__iter_D29_k88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k88" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k88, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.vector?.10 10 9) (close _V10_Dmatch__iter_D29_k89) (bruijn ##.x.320 0 0))
    V_CALL(VGetArg(upenv, 10-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k89, env)}),
      _var0);
 }
}
static void _V10_Dmatch__iter_D29_k82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k82" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k82, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.195 0 0) ((bruijn ##.car.1 9 0) (close _V10_Dmatch__iter_D29_k83) (bruijn ##.pattern-stack.47 5 2)) ((bruijn ##.car.1 9 0) (close _V10_Dmatch__iter_D29_k88) (bruijn ##.pattern-stack.47 5 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k83, env)}),
      VGetArg(upenv, 5-1, 2));
} else {
    V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k88, env)}),
      VGetArg(upenv, 5-1, 2));
}
 }
}
static void _V10_Dmatch__iter_D29_k81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k81" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k81, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.symbol?.11 8 10) (close _V10_Dmatch__iter_D29_k82) (bruijn ##.x.321 0 0))
    V_CALL(VGetArg(upenv, 8-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k82, env)}),
      _var0);
 }
}
static void _V10_Dmatch__iter_D29_k78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k78" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k78, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.192 0 0) ((bruijn ##.cdr.20 7 19) (close _V10_Dmatch__iter_D29_k79) (bruijn ##.expr-stack.46 3 1)) ((bruijn ##.car.1 7 0) (close _V10_Dmatch__iter_D29_k81) (bruijn ##.pattern-stack.47 3 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 7-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k79, env)}),
      upenv->up->up->vars[1]);
} else {
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k81, env)}),
      upenv->up->up->vars[2]);
}
 }
}
static void _V10_Dmatch__iter_D29_k77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k77" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k77, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.eqv?.27 4 2) (close _V10_Dmatch__iter_D29_k78) (bruijn ##.x.322 0 0) '_)
    V_CALL(upenv->up->up->up->vars[2], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k78, env)}),
      _var0,
      _V0_U);
 }
}
static void _V10_Dmatch__iter_D29_k76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_k76" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_k76, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.191 0 0) ((bruijn ##.k.190 1 0) (bruijn ##.success-expr.48 1 3)) ((bruijn ##.car.1 5 0) (close _V10_Dmatch__iter_D29_k77) (bruijn ##.pattern-stack.47 1 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      upenv->vars[3]);
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k77, env)}),
      upenv->vars[2]);
}
 }
}
static void _V10_Dmatch__iter_D29_lambda10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V10_Dmatch__iter_D29_lambda10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D29_lambda10, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmatch__iter_D29_lambda10, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn ##.null?.15 4 14) (close _V10_Dmatch__iter_D29_k76) (bruijn ##.pattern-stack.47 0 2))
    V_CALL(upenv->up->up->up->vars[14], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_k76, env)}),
      _var2);
 }
}
static void _V10_Dloop_D53_k162(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D53_k162" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D53_k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D53_k162, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.334 4 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.k.51 7 0) (##inline ##vcore.cons (##inline ##vcore.cons 'begin (bruijn ##.x.342 0 0)) '())) '()))
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
static void _V10_Dloop_D53_k169(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D53_k169" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D53_k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D53_k169, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.cons.16 19 15) (bruijn ##.k.334 10 0) (bruijn ##.x.343 2 0) (bruijn ##.x.344 0 0))
    V_CALL(VGetArg(upenv, 19-1, 15), runtime,
      VGetArg(upenv, 10-1, 0),
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D53_k168(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D53_k168" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D53_k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D53_k168, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.loop.53 10 0) (close _V10_Dloop_D53_k169) (bruijn ##.x.345 0 0))
    V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D53_k169, env)}),
      _var0);
 }
}
static void _V10_Dloop_D53_k167(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D53_k167" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D53_k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D53_k167, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.20 17 19) (close _V10_Dloop_D53_k168) (bruijn ##.patterns.54 8 1))
    V_CALL(VGetArg(upenv, 17-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D53_k168, env)}),
      VGetArg(upenv, 8-1, 1));
 }
}
static void _V10_Dloop_D53_k166(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D53_k166" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D53_k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D53_k166, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.match-iter.29 13 1) (close _V10_Dloop_D53_k167) (bruijn ##.x.346 3 0) (bruijn ##.x.347 1 0) (##inline ##vcore.cons (bruijn ##.k.51 10 0) (##inline ##vcore.cons (##inline ##vcore.cons 'begin (bruijn ##.x.351 0 0)) '())))
    V_CALL(VGetArg(upenv, 13-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D53_k167, env)}),
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
static void _V10_Dloop_D53_k165(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D53_k165" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D53_k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D53_k165, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdar.17 15 16) (close _V10_Dloop_D53_k166) (bruijn ##.patterns.54 6 1))
    V_CALL(VGetArg(upenv, 15-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D53_k166, env)}),
      VGetArg(upenv, 6-1, 1));
 }
}
static void _V10_Dloop_D53_k164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D53_k164" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D53_k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D53_k164, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.list.18 14 17) (close _V10_Dloop_D53_k165) (bruijn ##.x.352 0 0))
    V_CALL(VGetArg(upenv, 14-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D53_k165, env)}),
      _var0);
 }
}
static void _V10_Dloop_D53_k163(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D53_k163" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D53_k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D53_k163, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.caar.19 13 18) (close _V10_Dloop_D53_k164) (bruijn ##.patterns.54 4 1))
    V_CALL(VGetArg(upenv, 13-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D53_k164, env)}),
      upenv->up->up->up->vars[1]);
 }
}
static void _V10_Dloop_D53_k161(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D53_k161" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D53_k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D53_k161, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.338 0 0) ((bruijn ##.cdar.17 12 16) (close _V10_Dloop_D53_k162) (bruijn ##.patterns.54 3 1)) ((bruijn ##.list.18 12 17) (close _V10_Dloop_D53_k163) (bruijn ##.input.52 6 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 12-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D53_k162, env)}),
      upenv->up->up->vars[1]);
} else {
    V_CALL(VGetArg(upenv, 12-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D53_k163, env)}),
      VGetArg(upenv, 6-1, 1));
}
 }
}
static void _V10_Dloop_D53_k160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D53_k160" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D53_k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D53_k160, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.eqv?.27 9 2) (close _V10_Dloop_D53_k161) (bruijn ##.x.353 0 0) 'else)
    V_CALL(VGetArg(upenv, 9-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D53_k161, env)}),
      _var0,
      _V0else);
 }
}
static void _V10_Dloop_D53_k159(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D53_k159" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D53_k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D53_k159, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.335 0 0) ((bruijn ##.k.334 1 0) (##inline ##vcore.cons (##inline ##vcore.cons 'error (##inline ##vcore.cons '(##string ##.string.367) '())) '())) ((bruijn ##.caar.19 10 18) (close _V10_Dloop_D53_k160) (bruijn ##.patterns.54 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0error,
        VInlineCons2(runtime,
        VEncodePointer(&_V10_Dstring_D367.sym, VPOINTER_OTHER),
        VNULL)),
        VNULL));
} else {
    V_CALL(VGetArg(upenv, 10-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D53_k160, env)}),
      upenv->vars[1]);
}
 }
}
static void _V10_Dloop_D53_lambda12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dloop_D53_lambda12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D53_lambda12, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D53_lambda12, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.null?.15 9 14) (close _V10_Dloop_D53_k159) (bruijn ##.patterns.54 0 1))
    V_CALL(VGetArg(upenv, 9-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D53_k159, env)}),
      _var1);
 }
}
static void _V10_Dtransform__match_D23_k171(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dtransform__match_D23_k171" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtransform__match_D23_k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtransform__match_D23_k171, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.111 8 0) (##inline ##vcore.cons 'call/cc (##inline ##vcore.cons (##inline ##vcore.cons 'lambda (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.k.51 4 0) '()) (##inline ##vcore.cons (##inline ##vcore.cons 'let (##inline ##vcore.cons (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.input.52 4 1) (##inline ##vcore.cons (bruijn ##.x.357 3 0) '())) '()) (bruijn ##.x.333 0 0))) '()))) '())))
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
static void _V10_Dtransform__match_D23_k170(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dtransform__match_D23_k170" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtransform__match_D23_k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtransform__match_D23_k170, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.loop.53 1 0) (close _V10_Dtransform__match_D23_k171) (bruijn ##.x.354 0 0))
    V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtransform__match_D23_k171, env)}),
      _var0);
 }
}
static void _V10_Dtransform__match_D23_k158(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dtransform__match_D23_k158" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtransform__match_D23_k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtransform__match_D23_k158, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 1 ((close _V10_Dloop_D53_lambda12)) ((bruijn ##.cddr.14 8 13) (close _V10_Dtransform__match_D23_k170) (bruijn ##.expr.26 6 1)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D53_lambda12, env)});
    V_CALL(VGetArg(upenv, 8-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtransform__match_D23_k170, env)}),
      VGetArg(upenv, 6-1, 1));
    }
 }
}
static void _V10_Dtransform__match_D23_lambda11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dtransform__match_D23_lambda11" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtransform__match_D23_lambda11, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.cadr.13 6 12) (close _V10_Dtransform__match_D23_k158) (bruijn ##.expr.26 4 1))
    V_CALL(VGetArg(upenv, 6-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtransform__match_D23_k158, env)}),
      upenv->up->up->up->vars[1]);
 }
}
static void _V10_Dtransform__match_D23_k157(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dtransform__match_D23_k157" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtransform__match_D23_k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtransform__match_D23_k157, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dtransform__match_D23_lambda11) (bruijn ##.x.323 1 0) (bruijn ##.x.324 0 0))
    V_CALL_FUNC(_V10_Dtransform__match_D23_lambda11, env, runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dtransform__match_D23_k156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dtransform__match_D23_k156" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtransform__match_D23_k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtransform__match_D23_k156, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.gensym.21 4 20) (close _V10_Dtransform__match_D23_k157) (##string ##.string.368))
    V_CALL(upenv->up->up->up->vars[20], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtransform__match_D23_k157, env)}),
      VEncodePointer(&_V10_Dstring_D368.sym, VPOINTER_OTHER));
 }
}
static void _V10_Dtransform__match_D23_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dtransform__match_D23_lambda4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtransform__match_D23_lambda4, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtransform__match_D23_lambda4, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (letrec 2 ((close _V10_Dmatch__ellipses_D28_lambda5) (close _V10_Dmatch__iter_D29_lambda10)) ((bruijn ##.gensym.21 3 20) (close _V10_Dtransform__match_D23_k156) (##string ##.string.364)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[2]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 2, 2, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D28_lambda5, env)});
    env->vars[1] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D29_lambda10, env)});
    V_CALL(upenv->up->up->vars[20], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtransform__match_D23_k156, env)}),
      VEncodePointer(&_V10_Dstring_D364.sym, VPOINTER_OTHER));
    }
 }
}
static void _V0vanity_V0compiler_V0match_V20_lambda2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17, VWORD _var18, VWORD _var19, VWORD _var20) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_lambda2" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_lambda2, runtime, upenv, 21, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7, _var8, _var9, _var10, _var11, _var12, _var13, _var14, _var15, _var16, _var17, _var18, _var19, _var20) {
  struct { VEnv env; VWORD argv[21]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 21, 21, upenv);
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
  // (letrec 2 ((close _V10_Dgather__variables_D22_lambda3) (close _V10_Dtransform__match_D23_lambda4)) ((bruijn ##.k.56 26 0) (##inline ##vcore.cons (##inline ##vcore.cons 'transform-match (bruijn ##.transform-match.23 0 1)) '())))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[2]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 2, 2, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D22_lambda3, env)});
    env->vars[1] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtransform__match_D23_lambda4, env)});
    V_CALL(VGetArg(upenv, 26-1, 0), runtime,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0transform__match,
        env->vars[1]),
        VNULL));
    }
 }
}
static void _V0vanity_V0compiler_V0match_V20_k24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k24, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0match_V20_lambda2) (bruijn ##.x.57 20 0) (bruijn ##.x.58 19 0) (bruijn ##.x.59 18 0) (bruijn ##.x.60 17 0) (bruijn ##.x.61 16 0) (bruijn ##.x.62 15 0) (bruijn ##.x.63 14 0) (bruijn ##.x.64 13 0) (bruijn ##.x.65 12 0) (bruijn ##.x.66 11 0) (bruijn ##.x.67 10 0) (bruijn ##.x.68 9 0) (bruijn ##.x.69 8 0) (bruijn ##.x.70 7 0) (bruijn ##.x.71 6 0) (bruijn ##.x.72 5 0) (bruijn ##.x.73 4 0) (bruijn ##.x.74 3 0) (bruijn ##.x.75 2 0) (bruijn ##.x.76 1 0) (bruijn ##.x.77 0 0))
    V_CALL_FUNC(_V0vanity_V0compiler_V0match_V20_lambda2, env, runtime,
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
  // ((bruijn ##..vcore.import.0 20 0) (close _V0vanity_V0compiler_V0match_V20_k24) 'gensym)
    V_CALL(VGetArg(upenv, 20-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k24, env)}),
      _V0gensym);
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
  // ((bruijn ##..vcore.import.0 19 0) (close _V0vanity_V0compiler_V0match_V20_k23) 'cdr)
    V_CALL(VGetArg(upenv, 19-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k23, env)}),
      _V0cdr);
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
  // ((bruijn ##..vcore.import.0 18 0) (close _V0vanity_V0compiler_V0match_V20_k22) 'caar)
    V_CALL(VGetArg(upenv, 18-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k22, env)}),
      _V0caar);
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
  // ((bruijn ##..vcore.import.0 17 0) (close _V0vanity_V0compiler_V0match_V20_k21) 'list)
    V_CALL(VGetArg(upenv, 17-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k21, env)}),
      _V0list);
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
  // ((bruijn ##..vcore.import.0 16 0) (close _V0vanity_V0compiler_V0match_V20_k20) 'cdar)
    V_CALL(VGetArg(upenv, 16-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k20, env)}),
      _V0cdar);
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
  // ((bruijn ##..vcore.import.0 15 0) (close _V0vanity_V0compiler_V0match_V20_k19) 'cons)
    V_CALL(VGetArg(upenv, 15-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k19, env)}),
      _V0cons);
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
  // ((bruijn ##..vcore.import.0 14 0) (close _V0vanity_V0compiler_V0match_V20_k18) 'null?)
    V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k18, env)}),
      _V0null_Q);
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
  // ((bruijn ##..vcore.import.0 13 0) (close _V0vanity_V0compiler_V0match_V20_k17) 'cddr)
    V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k17, env)}),
      _V0cddr);
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
  // ((bruijn ##..vcore.import.0 12 0) (close _V0vanity_V0compiler_V0match_V20_k16) 'cadr)
    V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k16, env)}),
      _V0cadr);
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
  // ((bruijn ##..vcore.import.0 11 0) (close _V0vanity_V0compiler_V0match_V20_k15) 'map)
    V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k15, env)}),
      _V0map);
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
  // ((bruijn ##..vcore.import.0 10 0) (close _V0vanity_V0compiler_V0match_V20_k14) 'symbol?)
    V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k14, env)}),
      _V0symbol_Q);
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
  // ((bruijn ##..vcore.import.0 9 0) (close _V0vanity_V0compiler_V0match_V20_k13) 'vector?)
    V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k13, env)}),
      _V0vector_Q);
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
  // ((bruijn ##..vcore.import.0 8 0) (close _V0vanity_V0compiler_V0match_V20_k12) 'typevector?)
    V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k12, env)}),
      _V0typevector_Q);
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
  // (##vcore.make-import (close _V0vanity_V0compiler_V0match_V20_k3) (##string ##.string.369) (bruijn ##.x.359 1 0) (bruijn ##.x.360 0 0))
    V_CALL_FUNC(VMakeImport2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k3, env)}),
      VEncodePointer(&_V10_Dstring_D369.sym, VPOINTER_OTHER),
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0match_V20_k2) (##string ##.string.370))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k2, env)}),
      VEncodePointer(&_V10_Dstring_D370.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0match_V20_k1) (##string ##.string.371))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k1, env)}),
      VEncodePointer(&_V10_Dstring_D371.sym, VPOINTER_OTHER));
 }
}
VFunc _V0vanity_V0compiler_V0match_V20 = (VFunc)_V0vanity_V0compiler_V0match_V20_lambda1;
