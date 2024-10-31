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
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D443 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D442 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
VWEAK VWORD _V0_S;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_S = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "*" };
VWEAK VWORD _V0length;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "length" };
VWEAK VWORD _V0append;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0append = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "append" };
VWEAK VWORD _V0apply;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0apply = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "apply" };
VWEAK VWORD _V0list;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "list" };
VWEAK VWORD _V0cadr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cadr" };
VWEAK VWORD _V0caddr;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0caddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "caddr" };
VWEAK VWORD _V0cadddr;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0cadddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "cadddr" };
VWEAK VWORD _V0map;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "map" };
VWEAK VWORD _V0call__with__values;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0call__with__values = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "call-with-values" };
VWEAK VWORD _V0values;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0values = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "values" };
VWEAK VWORD _V0not;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0not = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "not" };
VWEAK VWORD _V0_P;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_P = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "+" };
VWEAK VWORD _V0_E;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_E = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "=" };
VWEAK VWORD _V0__;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0__ = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "-" };
VWEAK VWORD _V0eq_Q;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0eq_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "eq\?" };
VWEAK VWORD _V0eqv_Q;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0eqv_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "eqv\?" };
VWEAK VWORD _V0cdr;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0cdr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "cdr" };
VWEAK VWORD _V0car;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0car = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "car" };
VWEAK VWORD _V0cons;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cons = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cons" };
VWEAK VWORD _V0caar;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0caar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "caar" };
VWEAK VWORD _V0null_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0null_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "null\?" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
VWEAK VWORD _V0assoc__update;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0assoc__update = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "assoc-update" };
VWEAK VWORD _V0assv__update;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0assv__update = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "assv-update" };
VWEAK VWORD _V0assq__update;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0assq__update = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "assq-update" };
VWEAK VWORD _V0delete;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0delete = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "delete" };
VWEAK VWORD _V0insert;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0insert = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "insert" };
VWEAK VWORD _V0list__index;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0list__index = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "list-index" };
VWEAK VWORD _V0every_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0every_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "every\?" };
VWEAK VWORD _V0any_Q;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0any_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "any\?" };
VWEAK VWORD _V0split__while;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0split__while = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "split-while" };
VWEAK VWORD _V0drop__while;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0drop__while = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "drop-while" };
VWEAK VWORD _V0take__while;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0take__while = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "take-while" };
VWEAK VWORD _V0partition;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0partition = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "partition" };
VWEAK VWORD _V0filter;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0filter = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "filter" };
VWEAK VWORD _V0count;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0count = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "count" };
VWEAK VWORD _V0unzip5;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0unzip5 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "unzip5" };
VWEAK VWORD _V0unzip4;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0unzip4 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "unzip4" };
VWEAK VWORD _V0unzip3;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0unzip3 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "unzip3" };
VWEAK VWORD _V0unzip2;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0unzip2 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "unzip2" };
VWEAK VWORD _V0unzip1;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0unzip1 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "unzip1" };
VWEAK VWORD _V0zip;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0zip = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "zip" };
VWEAK VWORD _V0concatenate;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0concatenate = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "concatenate" };
VWEAK VWORD _V0fold__right;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0fold__right = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "fold-right" };
VWEAK VWORD _V0fold;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0fold = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "fold" };
VWEAK VWORD _V0split__at;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0split__at = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "split-at" };
VWEAK VWORD _V0drop__right;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0drop__right = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "drop-right" };
VWEAK VWORD _V0take__right;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0take__right = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "take-right" };
VWEAK VWORD _V0drop;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0drop = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "drop" };
VWEAK VWORD _V0take;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0take = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "take" };
VWEAK VWORD _V0list__tabulate;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0list__tabulate = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "list-tabulate" };
VWEAK VWORD _V0iota;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0iota = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "iota" };
static __attribute__((constructor)) void VDllMain1() {
  _V0_S = VEncodePointer(VLookupConstant("_V0_S", &_VW_V0_S), VPOINTER_OTHER);
  _V0length = VEncodePointer(VLookupConstant("_V0length", &_VW_V0length), VPOINTER_OTHER);
  _V0append = VEncodePointer(VLookupConstant("_V0append", &_VW_V0append), VPOINTER_OTHER);
  _V0apply = VEncodePointer(VLookupConstant("_V0apply", &_VW_V0apply), VPOINTER_OTHER);
  _V0list = VEncodePointer(VLookupConstant("_V0list", &_VW_V0list), VPOINTER_OTHER);
  _V0cadr = VEncodePointer(VLookupConstant("_V0cadr", &_VW_V0cadr), VPOINTER_OTHER);
  _V0caddr = VEncodePointer(VLookupConstant("_V0caddr", &_VW_V0caddr), VPOINTER_OTHER);
  _V0cadddr = VEncodePointer(VLookupConstant("_V0cadddr", &_VW_V0cadddr), VPOINTER_OTHER);
  _V0map = VEncodePointer(VLookupConstant("_V0map", &_VW_V0map), VPOINTER_OTHER);
  _V0call__with__values = VEncodePointer(VLookupConstant("_V0call__with__values", &_VW_V0call__with__values), VPOINTER_OTHER);
  _V0values = VEncodePointer(VLookupConstant("_V0values", &_VW_V0values), VPOINTER_OTHER);
  _V0not = VEncodePointer(VLookupConstant("_V0not", &_VW_V0not), VPOINTER_OTHER);
  _V0_P = VEncodePointer(VLookupConstant("_V0_P", &_VW_V0_P), VPOINTER_OTHER);
  _V0_E = VEncodePointer(VLookupConstant("_V0_E", &_VW_V0_E), VPOINTER_OTHER);
  _V0__ = VEncodePointer(VLookupConstant("_V0__", &_VW_V0__), VPOINTER_OTHER);
  _V0eq_Q = VEncodePointer(VLookupConstant("_V0eq_Q", &_VW_V0eq_Q), VPOINTER_OTHER);
  _V0eqv_Q = VEncodePointer(VLookupConstant("_V0eqv_Q", &_VW_V0eqv_Q), VPOINTER_OTHER);
  _V0cdr = VEncodePointer(VLookupConstant("_V0cdr", &_VW_V0cdr), VPOINTER_OTHER);
  _V0car = VEncodePointer(VLookupConstant("_V0car", &_VW_V0car), VPOINTER_OTHER);
  _V0cons = VEncodePointer(VLookupConstant("_V0cons", &_VW_V0cons), VPOINTER_OTHER);
  _V0caar = VEncodePointer(VLookupConstant("_V0caar", &_VW_V0caar), VPOINTER_OTHER);
  _V0null_Q = VEncodePointer(VLookupConstant("_V0null_Q", &_VW_V0null_Q), VPOINTER_OTHER);
  _V0equal_Q = VEncodePointer(VLookupConstant("_V0equal_Q", &_VW_V0equal_Q), VPOINTER_OTHER);
  _V0assoc__update = VEncodePointer(VLookupConstant("_V0assoc__update", &_VW_V0assoc__update), VPOINTER_OTHER);
  _V0assv__update = VEncodePointer(VLookupConstant("_V0assv__update", &_VW_V0assv__update), VPOINTER_OTHER);
  _V0assq__update = VEncodePointer(VLookupConstant("_V0assq__update", &_VW_V0assq__update), VPOINTER_OTHER);
  _V0delete = VEncodePointer(VLookupConstant("_V0delete", &_VW_V0delete), VPOINTER_OTHER);
  _V0insert = VEncodePointer(VLookupConstant("_V0insert", &_VW_V0insert), VPOINTER_OTHER);
  _V0list__index = VEncodePointer(VLookupConstant("_V0list__index", &_VW_V0list__index), VPOINTER_OTHER);
  _V0every_Q = VEncodePointer(VLookupConstant("_V0every_Q", &_VW_V0every_Q), VPOINTER_OTHER);
  _V0any_Q = VEncodePointer(VLookupConstant("_V0any_Q", &_VW_V0any_Q), VPOINTER_OTHER);
  _V0split__while = VEncodePointer(VLookupConstant("_V0split__while", &_VW_V0split__while), VPOINTER_OTHER);
  _V0drop__while = VEncodePointer(VLookupConstant("_V0drop__while", &_VW_V0drop__while), VPOINTER_OTHER);
  _V0take__while = VEncodePointer(VLookupConstant("_V0take__while", &_VW_V0take__while), VPOINTER_OTHER);
  _V0partition = VEncodePointer(VLookupConstant("_V0partition", &_VW_V0partition), VPOINTER_OTHER);
  _V0filter = VEncodePointer(VLookupConstant("_V0filter", &_VW_V0filter), VPOINTER_OTHER);
  _V0count = VEncodePointer(VLookupConstant("_V0count", &_VW_V0count), VPOINTER_OTHER);
  _V0unzip5 = VEncodePointer(VLookupConstant("_V0unzip5", &_VW_V0unzip5), VPOINTER_OTHER);
  _V0unzip4 = VEncodePointer(VLookupConstant("_V0unzip4", &_VW_V0unzip4), VPOINTER_OTHER);
  _V0unzip3 = VEncodePointer(VLookupConstant("_V0unzip3", &_VW_V0unzip3), VPOINTER_OTHER);
  _V0unzip2 = VEncodePointer(VLookupConstant("_V0unzip2", &_VW_V0unzip2), VPOINTER_OTHER);
  _V0unzip1 = VEncodePointer(VLookupConstant("_V0unzip1", &_VW_V0unzip1), VPOINTER_OTHER);
  _V0zip = VEncodePointer(VLookupConstant("_V0zip", &_VW_V0zip), VPOINTER_OTHER);
  _V0concatenate = VEncodePointer(VLookupConstant("_V0concatenate", &_VW_V0concatenate), VPOINTER_OTHER);
  _V0fold__right = VEncodePointer(VLookupConstant("_V0fold__right", &_VW_V0fold__right), VPOINTER_OTHER);
  _V0fold = VEncodePointer(VLookupConstant("_V0fold", &_VW_V0fold), VPOINTER_OTHER);
  _V0split__at = VEncodePointer(VLookupConstant("_V0split__at", &_VW_V0split__at), VPOINTER_OTHER);
  _V0drop__right = VEncodePointer(VLookupConstant("_V0drop__right", &_VW_V0drop__right), VPOINTER_OTHER);
  _V0take__right = VEncodePointer(VLookupConstant("_V0take__right", &_VW_V0take__right), VPOINTER_OTHER);
  _V0drop = VEncodePointer(VLookupConstant("_V0drop", &_VW_V0drop), VPOINTER_OTHER);
  _V0take = VEncodePointer(VLookupConstant("_V0take", &_VW_V0take), VPOINTER_OTHER);
  _V0list__tabulate = VEncodePointer(VLookupConstant("_V0list__tabulate", &_VW_V0list__tabulate), VPOINTER_OTHER);
  _V0iota = VEncodePointer(VLookupConstant("_V0iota", &_VW_V0iota), VPOINTER_OTHER);
}
static void _V10_Dloop_D55_k28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D55_k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D55_k28, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.cons.20 7 19) (bruijn ##.k.176 3 0) (bruijn ##.i.56 3 1) (bruijn ##.x.178 0 0))
    V_CALL(VGetArg(upenv, 7-1, 19), runtime,
      upenv->up->up->vars[0],
      upenv->up->up->vars[1],
      _var0);
 }
}
static void _V10_Dloop_D55_k27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D55_k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D55_k27, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.loop.55 3 0) (close _V10_Dloop_D55_k28) (bruijn ##.x.179 0 0))
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D55_k28, env)}),
      _var0);
 }
}
static void _V10_Dloop_D55_k26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D55_k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D55_k26, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.177 0 0) ((bruijn ##.k.176 1 0) '()) ((bruijn ##.+.13 5 12) (close _V10_Dloop_D55_k27) (bruijn ##.i.56 1 1) 1))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VNULL);
} else {
    V_CALL(VGetArg(upenv, 5-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D55_k27, env)}),
      upenv->vars[1],
      VEncodeInt(1l));
}
 }
}
static void _V10_Dloop_D55_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D55_lambda4, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D55_lambda4, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.eq?.16 4 15) (close _V10_Dloop_D55_k26) (bruijn ##.i.56 0 1) (bruijn ##.n.54 2 1))
    V_CALL(upenv->up->up->up->vars[15], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D55_k26, env)}),
      _var1,
      upenv->up->vars[1]);
 }
}
static void _V10_Dloop_D59_k32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D59_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D59_k32, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.cons.20 8 19) (bruijn ##.k.181 4 0) (bruijn ##.x.183 2 0) (bruijn ##.x.184 0 0))
    V_CALL(VGetArg(upenv, 8-1, 19), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D59_k31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D59_k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D59_k31, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.loop.59 4 0) (close _V10_Dloop_D59_k32) (bruijn ##.x.185 0 0))
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D59_k32, env)}),
      _var0);
 }
}
static void _V10_Dloop_D59_k30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D59_k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D59_k30, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.+.13 6 12) (close _V10_Dloop_D59_k31) (bruijn ##.i.60 2 1) 1)
    V_CALL(VGetArg(upenv, 6-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D59_k31, env)}),
      upenv->up->vars[1],
      VEncodeInt(1l));
 }
}
static void _V10_Dloop_D59_k29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D59_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D59_k29, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.182 0 0) ((bruijn ##.k.181 1 0) '()) ((bruijn ##.+.13 5 12) (close _V10_Dloop_D59_k30) (bruijn ##.i.60 1 1) (bruijn ##.b.58 3 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VNULL);
} else {
    V_CALL(VGetArg(upenv, 5-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D59_k30, env)}),
      upenv->vars[1],
      upenv->up->up->vars[2]);
}
 }
}
static void _V10_Dloop_D59_lambda5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D59_lambda5, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D59_lambda5, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.eq?.16 4 15) (close _V10_Dloop_D59_k29) (bruijn ##.i.60 0 1) (bruijn ##.n.57 2 1))
    V_CALL(upenv->up->up->up->vars[15], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D59_k29, env)}),
      _var1,
      upenv->up->vars[1]);
 }
}
static void _V10_Dloop_D64_k37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D64_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D64_k37, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.cons.20 9 19) (bruijn ##.k.187 5 0) (bruijn ##.x.189 2 0) (bruijn ##.x.190 0 0))
    V_CALL(VGetArg(upenv, 9-1, 19), runtime,
      VGetArg(upenv, 5-1, 0),
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D64_k36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D64_k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D64_k36, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.loop.64 5 0) (close _V10_Dloop_D64_k37) (bruijn ##.x.191 0 0))
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D64_k37, env)}),
      _var0);
 }
}
static void _V10_Dloop_D64_k35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D64_k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D64_k35, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.+.13 7 12) (close _V10_Dloop_D64_k36) (bruijn ##.i.65 3 1) 1)
    V_CALL(VGetArg(upenv, 7-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D64_k36, env)}),
      upenv->up->up->vars[1],
      VEncodeInt(1l));
 }
}
static void _V10_Dloop_D64_k34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D64_k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D64_k34, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.+.13 6 12) (close _V10_Dloop_D64_k35) (bruijn ##.x.192 0 0) (bruijn ##.b.62 4 2))
    V_CALL(VGetArg(upenv, 6-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D64_k35, env)}),
      _var0,
      upenv->up->up->up->vars[2]);
 }
}
static void _V10_Dloop_D64_k33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D64_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D64_k33, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.188 0 0) ((bruijn ##.k.187 1 0) '()) ((bruijn ##.*.1 5 0) (close _V10_Dloop_D64_k34) (bruijn ##.s.63 3 3) (bruijn ##.i.65 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VNULL);
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D64_k34, env)}),
      upenv->up->up->vars[3],
      upenv->vars[1]);
}
 }
}
static void _V10_Dloop_D64_lambda6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D64_lambda6, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D64_lambda6, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.eq?.16 4 15) (close _V10_Dloop_D64_k33) (bruijn ##.i.65 0 1) (bruijn ##.n.61 2 1))
    V_CALL(upenv->up->up->up->vars[15], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D64_k33, env)}),
      _var1,
      upenv->up->vars[1]);
 }
}
__attribute__((used)) static void _V20CaseError__V10_Diota_D24_lambda3(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V10_Diota_D24_lambda3 #t (2 (letrec 1 ((close _V10_Dloop_D55_lambda4)) ((bruijn ##.loop.55 0 0) (bruijn ##.k.175 1 0) 0))) (3 (letrec 1 ((close _V10_Dloop_D59_lambda5)) ((bruijn ##.loop.59 0 0) (bruijn ##.k.180 1 0) 0))) (4 (letrec 1 ((close _V10_Dloop_D64_lambda6)) ((bruijn ##.loop.64 0 0) (bruijn ##.k.186 1 0) 0))))
 VErrorC(runtime, "Not enough arguments to _V10_Diota_D24_lambda3, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Diota_D24_lambda3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V10_Diota_D24_lambda3, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D55_lambda4)) ((bruijn ##.loop.55 0 0) (bruijn ##.k.175 1 0) 0))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D55_lambda4, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VEncodeInt(0l));
    }
 }
}
__attribute__((used)) static void _V20Case1__V10_Diota_D24_lambda3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V10_Diota_D24_lambda3, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (letrec 1 ((close _V10_Dloop_D59_lambda5)) ((bruijn ##.loop.59 0 0) (bruijn ##.k.180 1 0) 0))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D59_lambda5, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VEncodeInt(0l));
    }
 }
}
__attribute__((used)) static void _V20Case2__V10_Diota_D24_lambda3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 V_GC_CHECK2_VARARGS((VFunc)_V20Case2__V10_Diota_D24_lambda3, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (letrec 1 ((close _V10_Dloop_D64_lambda6)) ((bruijn ##.loop.64 0 0) (bruijn ##.k.186 1 0) 0))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D64_lambda6, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VEncodeInt(0l));
    }
 }
}
void _V10_Diota_D24_lambda3(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Diota_D24_lambda3, @function\n"
#endif
"_V10_Diota_D24_lambda3:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V10_Diota_D24_lambda3\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V10_Diota_D24_lambda3\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case2__V10_Diota_D24_lambda3\n"
"    jmp _V20CaseError__V10_Diota_D24_lambda3\n"
);
static void _V10_Dloop_D68_k41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D68_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D68_k41, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.cons.20 8 19) (bruijn ##.k.194 4 0) (bruijn ##.x.196 2 0) (bruijn ##.x.197 0 0))
    V_CALL(VGetArg(upenv, 8-1, 19), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D68_k40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D68_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D68_k40, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.loop.68 4 0) (close _V10_Dloop_D68_k41) (bruijn ##.x.198 0 0))
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D68_k41, env)}),
      _var0);
 }
}
static void _V10_Dloop_D68_k39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D68_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D68_k39, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.+.13 6 12) (close _V10_Dloop_D68_k40) (bruijn ##.i.69 2 1) 1)
    V_CALL(VGetArg(upenv, 6-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D68_k40, env)}),
      upenv->up->vars[1],
      VEncodeInt(1l));
 }
}
static void _V10_Dloop_D68_k38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D68_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D68_k38, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.195 0 0) ((bruijn ##.k.194 1 0) '()) ((bruijn ##.proc.67 3 2) (close _V10_Dloop_D68_k39) (bruijn ##.i.69 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VNULL);
} else {
    V_CALL(upenv->up->up->vars[2], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D68_k39, env)}),
      upenv->vars[1]);
}
 }
}
static void _V10_Dloop_D68_lambda8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D68_lambda8, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D68_lambda8, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.eq?.16 4 15) (close _V10_Dloop_D68_k38) (bruijn ##.i.69 0 1) (bruijn ##.n.66 2 1))
    V_CALL(upenv->up->up->up->vars[15], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D68_k38, env)}),
      _var1,
      upenv->up->vars[1]);
 }
}
static void _V10_Dlist__tabulate_D25_lambda7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlist__tabulate_D25_lambda7, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlist__tabulate_D25_lambda7, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (letrec 1 ((close _V10_Dloop_D68_lambda8)) ((bruijn ##.loop.68 0 0) (bruijn ##.k.193 1 0) 0))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D68_lambda8, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VEncodeInt(0l));
    }
 }
}
static void _V10_Dtake_D26_k46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtake_D26_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtake_D26_k46, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.cons.20 7 19) (bruijn ##.k.199 5 0) (bruijn ##.x.201 3 0) (bruijn ##.x.202 0 0))
    V_CALL(VGetArg(upenv, 7-1, 19), runtime,
      VGetArg(upenv, 5-1, 0),
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V10_Dtake_D26_k45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtake_D26_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtake_D26_k45, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.take.26 5 2) (close _V10_Dtake_D26_k46) (bruijn ##.x.203 1 0) (bruijn ##.x.204 0 0))
    V_CALL(VGetArg(upenv, 5-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtake_D26_k46, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dtake_D26_k44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtake_D26_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtake_D26_k44, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.-.15 5 14) (close _V10_Dtake_D26_k45) (bruijn ##.i.71 3 2) 1)
    V_CALL(VGetArg(upenv, 5-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtake_D26_k45, env)}),
      upenv->up->up->vars[2],
      VEncodeInt(1l));
 }
}
static void _V10_Dtake_D26_k43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtake_D26_k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtake_D26_k43, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.18 4 17) (close _V10_Dtake_D26_k44) (bruijn ##.lst.70 2 1))
    V_CALL(upenv->up->up->up->vars[17], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtake_D26_k44, env)}),
      upenv->up->vars[1]);
 }
}
static void _V10_Dtake_D26_k42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtake_D26_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtake_D26_k42, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.200 0 0) ((bruijn ##.k.199 1 0) '()) ((bruijn ##.car.19 3 18) (close _V10_Dtake_D26_k43) (bruijn ##.lst.70 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VNULL);
} else {
    V_CALL(upenv->up->up->vars[18], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtake_D26_k43, env)}),
      upenv->vars[1]);
}
 }
}
static void _V10_Dtake_D26_lambda9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtake_D26_lambda9, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtake_D26_lambda9, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.eq?.16 2 15) (close _V10_Dtake_D26_k42) (bruijn ##.i.71 0 2) 0)
    V_CALL(upenv->up->vars[15], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtake_D26_k42, env)}),
      _var2,
      VEncodeInt(0l));
 }
}
static void _V10_Ddrop_D27_k49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddrop_D27_k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddrop_D27_k49, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.drop.27 4 3) (bruijn ##.k.205 3 0) (bruijn ##.x.207 1 0) (bruijn ##.x.208 0 0))
    V_CALL(upenv->up->up->up->vars[3], runtime,
      upenv->up->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Ddrop_D27_k48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddrop_D27_k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddrop_D27_k48, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.-.15 4 14) (close _V10_Ddrop_D27_k49) (bruijn ##.i.73 2 2) 1)
    V_CALL(upenv->up->up->up->vars[14], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddrop_D27_k49, env)}),
      upenv->up->vars[2],
      VEncodeInt(1l));
 }
}
static void _V10_Ddrop_D27_k47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddrop_D27_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddrop_D27_k47, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.206 0 0) ((bruijn ##.k.205 1 0) (bruijn ##.lst.72 1 1)) ((bruijn ##.cdr.18 3 17) (close _V10_Ddrop_D27_k48) (bruijn ##.lst.72 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      upenv->vars[1]);
} else {
    V_CALL(upenv->up->up->vars[17], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddrop_D27_k48, env)}),
      upenv->vars[1]);
}
 }
}
static void _V10_Ddrop_D27_lambda10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddrop_D27_lambda10, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddrop_D27_lambda10, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.eq?.16 2 15) (close _V10_Ddrop_D27_k47) (bruijn ##.i.73 0 2) 0)
    V_CALL(upenv->up->vars[15], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddrop_D27_k47, env)}),
      _var2,
      VEncodeInt(0l));
 }
}
static void _V10_Dloop_D76_k52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D76_k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D76_k52, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.76 4 0) (bruijn ##.k.210 3 0) (bruijn ##.x.212 1 0) (bruijn ##.x.213 0 0))
    V_CALL(upenv->up->up->up->vars[0], runtime,
      upenv->up->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D76_k51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D76_k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D76_k51, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.-.15 6 14) (close _V10_Dloop_D76_k52) (bruijn ##.len.78 2 2) 1)
    V_CALL(VGetArg(upenv, 6-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D76_k52, env)}),
      upenv->up->vars[2],
      VEncodeInt(1l));
 }
}
static void _V10_Dloop_D76_k50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D76_k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D76_k50, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.211 0 0) ((bruijn ##.k.210 1 0) (bruijn ##.lst.77 1 1)) ((bruijn ##.cdr.18 5 17) (close _V10_Dloop_D76_k51) (bruijn ##.lst.77 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      upenv->vars[1]);
} else {
    V_CALL(VGetArg(upenv, 5-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D76_k51, env)}),
      upenv->vars[1]);
}
 }
}
static void _V10_Dloop_D76_lambda12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D76_lambda12, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D76_lambda12, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.eq?.16 4 15) (close _V10_Dloop_D76_k50) (bruijn ##.len.78 0 2) (bruijn ##.i.75 2 2))
    V_CALL(upenv->up->up->up->vars[15], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D76_k50, env)}),
      _var2,
      upenv->up->vars[2]);
 }
}
static void _V10_Dtake__right_D28_k53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtake__right_D28_k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtake__right_D28_k53, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.76 1 0) (bruijn ##.k.209 2 0) (bruijn ##.lst.74 2 1) (bruijn ##.x.214 0 0))
    V_CALL(upenv->vars[0], runtime,
      upenv->up->vars[0],
      upenv->up->vars[1],
      _var0);
 }
}
static void _V10_Dtake__right_D28_lambda11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtake__right_D28_lambda11, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtake__right_D28_lambda11, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (letrec 1 ((close _V10_Dloop_D76_lambda12)) ((bruijn ##.length.2 3 1) (close _V10_Dtake__right_D28_k53) (bruijn ##.lst.74 1 1)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D76_lambda12, env)});
    V_CALL(upenv->up->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtake__right_D28_k53, env)}),
      upenv->vars[1]);
    }
 }
}
static void _V10_Dloop_D81_k58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D81_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D81_k58, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.cons.20 9 19) (bruijn ##.k.216 5 0) (bruijn ##.x.218 3 0) (bruijn ##.x.219 0 0))
    V_CALL(VGetArg(upenv, 9-1, 19), runtime,
      VGetArg(upenv, 5-1, 0),
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D81_k57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D81_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D81_k57, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.loop.81 5 0) (close _V10_Dloop_D81_k58) (bruijn ##.x.220 1 0) (bruijn ##.x.221 0 0))
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D81_k58, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D81_k56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D81_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D81_k56, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.-.15 7 14) (close _V10_Dloop_D81_k57) (bruijn ##.len.83 3 2) 1)
    V_CALL(VGetArg(upenv, 7-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D81_k57, env)}),
      upenv->up->up->vars[2],
      VEncodeInt(1l));
 }
}
static void _V10_Dloop_D81_k55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D81_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D81_k55, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.18 6 17) (close _V10_Dloop_D81_k56) (bruijn ##.lst.82 2 1))
    V_CALL(VGetArg(upenv, 6-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D81_k56, env)}),
      upenv->up->vars[1]);
 }
}
static void _V10_Dloop_D81_k54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D81_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D81_k54, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.217 0 0) ((bruijn ##.k.216 1 0) '()) ((bruijn ##.car.19 5 18) (close _V10_Dloop_D81_k55) (bruijn ##.lst.82 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VNULL);
} else {
    V_CALL(VGetArg(upenv, 5-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D81_k55, env)}),
      upenv->vars[1]);
}
 }
}
static void _V10_Dloop_D81_lambda14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D81_lambda14, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D81_lambda14, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.eq?.16 4 15) (close _V10_Dloop_D81_k54) (bruijn ##.len.83 0 2) (bruijn ##.i.80 2 2))
    V_CALL(upenv->up->up->up->vars[15], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D81_k54, env)}),
      _var2,
      upenv->up->vars[2]);
 }
}
static void _V10_Ddrop__right_D29_k59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddrop__right_D29_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddrop__right_D29_k59, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.81 1 0) (bruijn ##.k.215 2 0) (bruijn ##.lst.79 2 1) (bruijn ##.x.222 0 0))
    V_CALL(upenv->vars[0], runtime,
      upenv->up->vars[0],
      upenv->up->vars[1],
      _var0);
 }
}
static void _V10_Ddrop__right_D29_lambda13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddrop__right_D29_lambda13, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddrop__right_D29_lambda13, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (letrec 1 ((close _V10_Dloop_D81_lambda14)) ((bruijn ##.length.2 3 1) (close _V10_Ddrop__right_D29_k59) (bruijn ##.lst.79 1 1)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D81_lambda14, env)});
    V_CALL(upenv->up->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddrop__right_D29_k59, env)}),
      upenv->vars[1]);
    }
 }
}
static void _V10_Dsplit__at_D30_k62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsplit__at_D30_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsplit__at_D30_k62, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.split-at.30 5 6) (bruijn ##.k.225 2 0) (bruijn ##.x.226 1 0) (bruijn ##.x.227 0 0))
    V_CALL(VGetArg(upenv, 5-1, 6), runtime,
      upenv->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dsplit__at_D30_k61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsplit__at_D30_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsplit__at_D30_k61, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.-.15 5 14) (close _V10_Dsplit__at_D30_k62) (bruijn ##.i.85 3 2) 1)
    V_CALL(VGetArg(upenv, 5-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsplit__at_D30_k62, env)}),
      upenv->up->up->vars[2],
      VEncodeInt(1l));
 }
}
static void _V10_Dsplit__at_D30_lambda16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsplit__at_D30_lambda16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsplit__at_D30_lambda16, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.18 4 17) (close _V10_Dsplit__at_D30_k61) (bruijn ##.lst.84 2 1))
    V_CALL(upenv->up->up->up->vars[17], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsplit__at_D30_k61, env)}),
      upenv->up->vars[1]);
 }
}
static void _V10_Dsplit__at_D30_k64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsplit__at_D30_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsplit__at_D30_k64, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.values.11 6 10) (bruijn ##.k.228 2 0) (bruijn ##.x.229 0 0) (bruijn ##.d.87 2 2))
    V_CALL(VGetArg(upenv, 6-1, 10), runtime,
      upenv->up->vars[0],
      _var0,
      upenv->up->vars[2]);
 }
}
static void _V10_Dsplit__at_D30_k63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsplit__at_D30_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsplit__at_D30_k63, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.20 5 19) (close _V10_Dsplit__at_D30_k64) (bruijn ##.x.230 0 0) (bruijn ##.t.86 1 1))
    V_CALL(VGetArg(upenv, 5-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsplit__at_D30_k64, env)}),
      _var0,
      upenv->vars[1]);
 }
}
static void _V10_Dsplit__at_D30_lambda17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsplit__at_D30_lambda17, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsplit__at_D30_lambda17, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.car.19 4 18) (close _V10_Dsplit__at_D30_k63) (bruijn ##.lst.84 2 1))
    V_CALL(upenv->up->up->up->vars[18], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsplit__at_D30_k63, env)}),
      upenv->up->vars[1]);
 }
}
static void _V10_Dsplit__at_D30_k60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsplit__at_D30_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsplit__at_D30_k60, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.224 0 0) ((bruijn ##.values.11 3 10) (bruijn ##.k.223 1 0) '() (bruijn ##.lst.84 1 1)) ((bruijn ##.call-with-values.10 3 9) (bruijn ##.k.223 1 0) (close _V10_Dsplit__at_D30_lambda16) (close _V10_Dsplit__at_D30_lambda17)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->vars[10], runtime,
      upenv->vars[0],
      VNULL,
      upenv->vars[1]);
} else {
    V_CALL(upenv->up->up->vars[9], runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsplit__at_D30_lambda16, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsplit__at_D30_lambda17, env)}));
}
 }
}
static void _V10_Dsplit__at_D30_lambda15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsplit__at_D30_lambda15, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsplit__at_D30_lambda15, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.eq?.16 2 15) (close _V10_Dsplit__at_D30_k60) (bruijn ##.i.85 0 2) 0)
    V_CALL(upenv->up->vars[15], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsplit__at_D30_k60, env)}),
      _var2,
      VEncodeInt(0l));
 }
}
static void _V10_Dfold_D31_k68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfold_D31_k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfold_D31_k68, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.fold.31 5 7) (bruijn ##.k.231 4 0) (bruijn ##.kons.88 4 1) (bruijn ##.x.233 1 0) (bruijn ##.x.234 0 0))
    V_CALL(VGetArg(upenv, 5-1, 7), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->up->up->vars[1],
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dfold_D31_k67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfold_D31_k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfold_D31_k67, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.18 5 17) (close _V10_Dfold_D31_k68) (bruijn ##.ks.90 3 3))
    V_CALL(VGetArg(upenv, 5-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfold_D31_k68, env)}),
      upenv->up->up->vars[3]);
 }
}
static void _V10_Dfold_D31_k66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfold_D31_k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfold_D31_k66, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.kons.88 2 1) (close _V10_Dfold_D31_k67) (bruijn ##.x.235 0 0) (bruijn ##.knil.89 2 2))
    V_CALL(upenv->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfold_D31_k67, env)}),
      _var0,
      upenv->up->vars[2]);
 }
}
static void _V10_Dfold_D31_k65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfold_D31_k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfold_D31_k65, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.232 0 0) ((bruijn ##.k.231 1 0) (bruijn ##.knil.89 1 2)) ((bruijn ##.car.19 3 18) (close _V10_Dfold_D31_k66) (bruijn ##.ks.90 1 3)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      upenv->vars[2]);
} else {
    V_CALL(upenv->up->up->vars[18], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfold_D31_k66, env)}),
      upenv->vars[3]);
}
 }
}
static void _V10_Dfold_D31_lambda18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfold_D31_lambda18, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfold_D31_lambda18, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn ##.null?.22 2 21) (close _V10_Dfold_D31_k65) (bruijn ##.ks.90 0 3))
    V_CALL(upenv->up->vars[21], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfold_D31_k65, env)}),
      _var3);
 }
}
static void _V10_Dfold__right_D32_k72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfold__right_D32_k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfold__right_D32_k72, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kons.91 4 1) (bruijn ##.k.236 4 0) (bruijn ##.x.238 2 0) (bruijn ##.x.239 0 0))
    V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->up->up->up->vars[0],
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Dfold__right_D32_k71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfold__right_D32_k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfold__right_D32_k71, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.fold-right.32 4 8) (close _V10_Dfold__right_D32_k72) (bruijn ##.kons.91 3 1) (bruijn ##.knil.92 3 2) (bruijn ##.x.240 0 0))
    V_CALL(upenv->up->up->up->vars[8], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfold__right_D32_k72, env)}),
      upenv->up->up->vars[1],
      upenv->up->up->vars[2],
      _var0);
 }
}
static void _V10_Dfold__right_D32_k70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfold__right_D32_k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfold__right_D32_k70, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.18 4 17) (close _V10_Dfold__right_D32_k71) (bruijn ##.ks.93 2 3))
    V_CALL(upenv->up->up->up->vars[17], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfold__right_D32_k71, env)}),
      upenv->up->vars[3]);
 }
}
static void _V10_Dfold__right_D32_k69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfold__right_D32_k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfold__right_D32_k69, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.237 0 0) ((bruijn ##.k.236 1 0) (bruijn ##.knil.92 1 2)) ((bruijn ##.car.19 3 18) (close _V10_Dfold__right_D32_k70) (bruijn ##.ks.93 1 3)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      upenv->vars[2]);
} else {
    V_CALL(upenv->up->up->vars[18], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfold__right_D32_k70, env)}),
      upenv->vars[3]);
}
 }
}
static void _V10_Dfold__right_D32_lambda19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfold__right_D32_lambda19, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfold__right_D32_lambda19, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn ##.null?.22 2 21) (close _V10_Dfold__right_D32_k69) (bruijn ##.ks.93 0 3))
    V_CALL(upenv->up->vars[21], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfold__right_D32_k69, env)}),
      _var3);
 }
}
static void _V10_Dconcatenate_D33_k76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dconcatenate_D33_k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dconcatenate_D33_k76, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.append.3 6 2) (bruijn ##.k.241 4 0) (bruijn ##.x.243 2 0) (bruijn ##.x.244 0 0))
    V_CALL(VGetArg(upenv, 6-1, 2), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Dconcatenate_D33_k75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dconcatenate_D33_k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dconcatenate_D33_k75, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.concatenate.33 4 9) (close _V10_Dconcatenate_D33_k76) (bruijn ##.x.245 0 0))
    V_CALL(upenv->up->up->up->vars[9], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dconcatenate_D33_k76, env)}),
      _var0);
 }
}
static void _V10_Dconcatenate_D33_k74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dconcatenate_D33_k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dconcatenate_D33_k74, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.18 4 17) (close _V10_Dconcatenate_D33_k75) (bruijn ##.lst-of-lsts.94 2 1))
    V_CALL(upenv->up->up->up->vars[17], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dconcatenate_D33_k75, env)}),
      upenv->up->vars[1]);
 }
}
static void _V10_Dconcatenate_D33_k73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dconcatenate_D33_k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dconcatenate_D33_k73, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.242 0 0) ((bruijn ##.k.241 1 0) '()) ((bruijn ##.car.19 3 18) (close _V10_Dconcatenate_D33_k74) (bruijn ##.lst-of-lsts.94 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VNULL);
} else {
    V_CALL(upenv->up->up->vars[18], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dconcatenate_D33_k74, env)}),
      upenv->vars[1]);
}
 }
}
static void _V10_Dconcatenate_D33_lambda20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dconcatenate_D33_lambda20, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dconcatenate_D33_lambda20, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.null?.22 2 21) (close _V10_Dconcatenate_D33_k73) (bruijn ##.lst-of-lsts.94 0 1))
    V_CALL(upenv->up->vars[21], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dconcatenate_D33_k73, env)}),
      _var1);
 }
}
static void _V10_Dzip_D34_lambda21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, ...) {
 if(argc < 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dzip_D34_lambda21, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dzip_D34_lambda21, runtime, upenv, 1, argc, _var0, _varargs) {
  // ((bruijn ##.apply.4 2 3) (bruijn ##.k.246 0 0) (bruijn ##.map.9 2 8) (bruijn ##.list.5 2 4) (bruijn ##.lsts.95 0 1))
    V_CALL(upenv->up->vars[3], runtime,
      _var0,
      upenv->up->vars[8],
      upenv->up->vars[4],
      _varargs);
 }
}
static void _V10_Dunzip1_D35_lambda22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunzip1_D35_lambda22, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunzip1_D35_lambda22, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##.map.9 2 8) (bruijn ##.k.247 0 0) (bruijn ##.car.19 2 18) (bruijn ##.lst.96 0 1))
    V_CALL(upenv->up->vars[8], runtime,
      _var0,
      upenv->up->vars[18],
      _var1);
 }
}
static void _V10_Dunzip2_D36_k78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunzip2_D36_k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunzip2_D36_k78, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.values.11 4 10) (bruijn ##.k.248 2 0) (bruijn ##.x.249 1 0) (bruijn ##.x.250 0 0))
    V_CALL(upenv->up->up->up->vars[10], runtime,
      upenv->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dunzip2_D36_k77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunzip2_D36_k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunzip2_D36_k77, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.9 3 8) (close _V10_Dunzip2_D36_k78) (bruijn ##.cadr.6 3 5) (bruijn ##.lst.97 1 1))
    V_CALL(upenv->up->up->vars[8], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunzip2_D36_k78, env)}),
      upenv->up->up->vars[5],
      upenv->vars[1]);
 }
}
static void _V10_Dunzip2_D36_lambda23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunzip2_D36_lambda23, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunzip2_D36_lambda23, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.map.9 2 8) (close _V10_Dunzip2_D36_k77) (bruijn ##.car.19 2 18) (bruijn ##.lst.97 0 1))
    V_CALL(upenv->up->vars[8], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunzip2_D36_k77, env)}),
      upenv->up->vars[18],
      _var1);
 }
}
static void _V10_Dunzip3_D37_k81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunzip3_D37_k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunzip3_D37_k81, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.values.11 5 10) (bruijn ##.k.251 3 0) (bruijn ##.x.252 2 0) (bruijn ##.x.253 1 0) (bruijn ##.x.254 0 0))
    V_CALL(VGetArg(upenv, 5-1, 10), runtime,
      upenv->up->up->vars[0],
      upenv->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dunzip3_D37_k80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunzip3_D37_k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunzip3_D37_k80, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.9 4 8) (close _V10_Dunzip3_D37_k81) (bruijn ##.caddr.7 4 6) (bruijn ##.lst.98 2 1))
    V_CALL(upenv->up->up->up->vars[8], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunzip3_D37_k81, env)}),
      upenv->up->up->up->vars[6],
      upenv->up->vars[1]);
 }
}
static void _V10_Dunzip3_D37_k79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunzip3_D37_k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunzip3_D37_k79, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.9 3 8) (close _V10_Dunzip3_D37_k80) (bruijn ##.cadr.6 3 5) (bruijn ##.lst.98 1 1))
    V_CALL(upenv->up->up->vars[8], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunzip3_D37_k80, env)}),
      upenv->up->up->vars[5],
      upenv->vars[1]);
 }
}
static void _V10_Dunzip3_D37_lambda24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunzip3_D37_lambda24, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunzip3_D37_lambda24, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.map.9 2 8) (close _V10_Dunzip3_D37_k79) (bruijn ##.car.19 2 18) (bruijn ##.lst.98 0 1))
    V_CALL(upenv->up->vars[8], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunzip3_D37_k79, env)}),
      upenv->up->vars[18],
      _var1);
 }
}
static void _V10_Dunzip4_D38_k85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunzip4_D38_k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunzip4_D38_k85, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.values.11 6 10) (bruijn ##.k.255 4 0) (bruijn ##.x.256 3 0) (bruijn ##.x.257 2 0) (bruijn ##.x.258 1 0) (bruijn ##.x.259 0 0))
    V_CALL(VGetArg(upenv, 6-1, 10), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->up->vars[0],
      upenv->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dunzip4_D38_k84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunzip4_D38_k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunzip4_D38_k84, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.9 5 8) (close _V10_Dunzip4_D38_k85) (bruijn ##.cadddr.8 5 7) (bruijn ##.lst.99 3 1))
    V_CALL(VGetArg(upenv, 5-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunzip4_D38_k85, env)}),
      VGetArg(upenv, 5-1, 7),
      upenv->up->up->vars[1]);
 }
}
static void _V10_Dunzip4_D38_k83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunzip4_D38_k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunzip4_D38_k83, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.9 4 8) (close _V10_Dunzip4_D38_k84) (bruijn ##.caddr.7 4 6) (bruijn ##.lst.99 2 1))
    V_CALL(upenv->up->up->up->vars[8], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunzip4_D38_k84, env)}),
      upenv->up->up->up->vars[6],
      upenv->up->vars[1]);
 }
}
static void _V10_Dunzip4_D38_k82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunzip4_D38_k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunzip4_D38_k82, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.9 3 8) (close _V10_Dunzip4_D38_k83) (bruijn ##.cadr.6 3 5) (bruijn ##.lst.99 1 1))
    V_CALL(upenv->up->up->vars[8], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunzip4_D38_k83, env)}),
      upenv->up->up->vars[5],
      upenv->vars[1]);
 }
}
static void _V10_Dunzip4_D38_lambda25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunzip4_D38_lambda25, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunzip4_D38_lambda25, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.map.9 2 8) (close _V10_Dunzip4_D38_k82) (bruijn ##.car.19 2 18) (bruijn ##.lst.99 0 1))
    V_CALL(upenv->up->vars[8], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunzip4_D38_k82, env)}),
      upenv->up->vars[18],
      _var1);
 }
}
static void _V10_Dunzip5_D39_k90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunzip5_D39_k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunzip5_D39_k90, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.values.11 7 10) (bruijn ##.k.260 5 0) (bruijn ##.x.261 4 0) (bruijn ##.x.262 3 0) (bruijn ##.x.263 2 0) (bruijn ##.x.264 1 0) (bruijn ##.x.265 0 0))
    V_CALL(VGetArg(upenv, 7-1, 10), runtime,
      VGetArg(upenv, 5-1, 0),
      upenv->up->up->up->vars[0],
      upenv->up->up->vars[0],
      upenv->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dunzip5_D39_k91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunzip5_D39_k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunzip5_D39_k91, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.cadddr.8 8 7) (bruijn ##.k.266 1 0) (bruijn ##.x.267 0 0))
    V_CALL(VGetArg(upenv, 8-1, 7), runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dunzip5_D39_lambda27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunzip5_D39_lambda27, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunzip5_D39_lambda27, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.cdr.18 7 17) (close _V10_Dunzip5_D39_k91) (bruijn ##.e.101 0 1))
    V_CALL(VGetArg(upenv, 7-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunzip5_D39_k91, env)}),
      _var1);
 }
}
static void _V10_Dunzip5_D39_k89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunzip5_D39_k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunzip5_D39_k89, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.9 6 8) (close _V10_Dunzip5_D39_k90) (close _V10_Dunzip5_D39_lambda27) (bruijn ##.lst.100 4 1))
    V_CALL(VGetArg(upenv, 6-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunzip5_D39_k90, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunzip5_D39_lambda27, env)}),
      upenv->up->up->up->vars[1]);
 }
}
static void _V10_Dunzip5_D39_k88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunzip5_D39_k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunzip5_D39_k88, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.9 5 8) (close _V10_Dunzip5_D39_k89) (bruijn ##.cadddr.8 5 7) (bruijn ##.lst.100 3 1))
    V_CALL(VGetArg(upenv, 5-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunzip5_D39_k89, env)}),
      VGetArg(upenv, 5-1, 7),
      upenv->up->up->vars[1]);
 }
}
static void _V10_Dunzip5_D39_k87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunzip5_D39_k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunzip5_D39_k87, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.9 4 8) (close _V10_Dunzip5_D39_k88) (bruijn ##.caddr.7 4 6) (bruijn ##.lst.100 2 1))
    V_CALL(upenv->up->up->up->vars[8], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunzip5_D39_k88, env)}),
      upenv->up->up->up->vars[6],
      upenv->up->vars[1]);
 }
}
static void _V10_Dunzip5_D39_k86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunzip5_D39_k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunzip5_D39_k86, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.9 3 8) (close _V10_Dunzip5_D39_k87) (bruijn ##.cadr.6 3 5) (bruijn ##.lst.100 1 1))
    V_CALL(upenv->up->up->vars[8], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunzip5_D39_k87, env)}),
      upenv->up->up->vars[5],
      upenv->vars[1]);
 }
}
static void _V10_Dunzip5_D39_lambda26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunzip5_D39_lambda26, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunzip5_D39_lambda26, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.map.9 2 8) (close _V10_Dunzip5_D39_k86) (bruijn ##.car.19 2 18) (bruijn ##.lst.100 0 1))
    V_CALL(upenv->up->vars[8], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunzip5_D39_k86, env)}),
      upenv->up->vars[18],
      _var1);
 }
}
static void _V10_Dloop_D104_k95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D104_k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D104_k95, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.274 1 0) ((bruijn ##.k.275 0 0) 1) ((bruijn ##.k.275 0 0) 0))
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
static void _V10_Dloop_D104_k98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D104_k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D104_k98, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.104 7 0) (bruijn ##.k.269 6 0) (bruijn ##.x.271 1 0) (bruijn ##.pred.106 6 2) (bruijn ##.x.272 0 0))
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VGetArg(upenv, 6-1, 0),
      upenv->vars[0],
      VGetArg(upenv, 6-1, 2),
      _var0);
 }
}
static void _V10_Dloop_D104_k97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D104_k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D104_k97, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.18 9 17) (close _V10_Dloop_D104_k98) (bruijn ##.lst.107 5 3))
    V_CALL(VGetArg(upenv, 9-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D104_k98, env)}),
      VGetArg(upenv, 5-1, 3));
 }
}
static void _V10_Dloop_D104_k96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D104_k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D104_k96, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.+.13 8 12) (close _V10_Dloop_D104_k97) (bruijn ##.n.105 4 1) (bruijn ##.x.273 0 0))
    V_CALL(VGetArg(upenv, 8-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D104_k97, env)}),
      upenv->up->up->up->vars[1],
      _var0);
 }
}
static void _V10_Dloop_D104_k94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D104_k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D104_k94, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D104_k95) (close _V10_Dloop_D104_k96))
    V_CALL_FUNC(_V10_Dloop_D104_k95, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D104_k96, env)}));
 }
}
static void _V10_Dloop_D104_k93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D104_k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D104_k93, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.pred.106 2 2) (close _V10_Dloop_D104_k94) (bruijn ##.x.276 0 0))
    V_CALL(upenv->up->vars[2], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D104_k94, env)}),
      _var0);
 }
}
static void _V10_Dloop_D104_k92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D104_k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D104_k92, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.270 0 0) ((bruijn ##.k.269 1 0) (bruijn ##.n.105 1 1)) ((bruijn ##.car.19 5 18) (close _V10_Dloop_D104_k93) (bruijn ##.lst.107 1 3)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      upenv->vars[1]);
} else {
    V_CALL(VGetArg(upenv, 5-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D104_k93, env)}),
      upenv->vars[3]);
}
 }
}
static void _V10_Dloop_D104_lambda29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D104_lambda29, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D104_lambda29, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn ##.null?.22 4 21) (close _V10_Dloop_D104_k92) (bruijn ##.lst.107 0 3))
    V_CALL(upenv->up->up->up->vars[21], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D104_k92, env)}),
      _var3);
 }
}
static void _V10_Dcount_D40_lambda28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount_D40_lambda28, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount_D40_lambda28, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (letrec 1 ((close _V10_Dloop_D104_lambda29)) ((bruijn ##.loop.104 0 0) (bruijn ##.k.268 1 0) 0 (bruijn ##.pred.102 1 1) (bruijn ##.lst.103 1 2)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D104_lambda29, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VEncodeInt(0l),
      upenv->vars[1],
      upenv->vars[2]);
    }
 }
}
static void _V10_Dfilter_D41_k104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfilter_D41_k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfilter_D41_k104, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.cons.20 8 19) (bruijn ##.k.277 6 0) (bruijn ##.x.280 2 0) (bruijn ##.x.281 0 0))
    V_CALL(VGetArg(upenv, 8-1, 19), runtime,
      VGetArg(upenv, 6-1, 0),
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Dfilter_D41_k103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfilter_D41_k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfilter_D41_k103, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.filter.41 6 17) (close _V10_Dfilter_D41_k104) (bruijn ##.pred.108 5 1) (bruijn ##.x.282 0 0))
    V_CALL(VGetArg(upenv, 6-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfilter_D41_k104, env)}),
      VGetArg(upenv, 5-1, 1),
      _var0);
 }
}
static void _V10_Dfilter_D41_k102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfilter_D41_k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfilter_D41_k102, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.18 6 17) (close _V10_Dfilter_D41_k103) (bruijn ##.lst.109 4 2))
    V_CALL(VGetArg(upenv, 6-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfilter_D41_k103, env)}),
      upenv->up->up->up->vars[2]);
 }
}
static void _V10_Dfilter_D41_k105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfilter_D41_k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfilter_D41_k105, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.filter.41 5 17) (bruijn ##.k.277 4 0) (bruijn ##.pred.108 4 1) (bruijn ##.x.283 0 0))
    V_CALL(VGetArg(upenv, 5-1, 17), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->up->up->vars[1],
      _var0);
 }
}
static void _V10_Dfilter_D41_k101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfilter_D41_k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfilter_D41_k101, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.279 0 0) ((bruijn ##.car.19 5 18) (close _V10_Dfilter_D41_k102) (bruijn ##.lst.109 3 2)) ((bruijn ##.cdr.18 5 17) (close _V10_Dfilter_D41_k105) (bruijn ##.lst.109 3 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 5-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfilter_D41_k102, env)}),
      upenv->up->up->vars[2]);
} else {
    V_CALL(VGetArg(upenv, 5-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfilter_D41_k105, env)}),
      upenv->up->up->vars[2]);
}
 }
}
static void _V10_Dfilter_D41_k100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfilter_D41_k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfilter_D41_k100, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.pred.108 2 1) (close _V10_Dfilter_D41_k101) (bruijn ##.x.284 0 0))
    V_CALL(upenv->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfilter_D41_k101, env)}),
      _var0);
 }
}
static void _V10_Dfilter_D41_k99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfilter_D41_k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfilter_D41_k99, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.278 0 0) ((bruijn ##.k.277 1 0) (bruijn ##.lst.109 1 2)) ((bruijn ##.car.19 3 18) (close _V10_Dfilter_D41_k100) (bruijn ##.lst.109 1 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      upenv->vars[2]);
} else {
    V_CALL(upenv->up->up->vars[18], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfilter_D41_k100, env)}),
      upenv->vars[2]);
}
 }
}
static void _V10_Dfilter_D41_lambda30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfilter_D41_lambda30, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfilter_D41_lambda30, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.null?.22 2 21) (close _V10_Dfilter_D41_k99) (bruijn ##.lst.109 0 2))
    V_CALL(upenv->up->vars[21], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfilter_D41_k99, env)}),
      _var2);
 }
}
static void _V10_Dpartition_D42_k107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpartition_D42_k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpartition_D42_k107, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.partition.42 4 18) (bruijn ##.k.287 1 0) (bruijn ##.pred.110 3 1) (bruijn ##.x.288 0 0))
    V_CALL(upenv->up->up->up->vars[18], runtime,
      upenv->vars[0],
      upenv->up->up->vars[1],
      _var0);
 }
}
static void _V10_Dpartition_D42_lambda32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpartition_D42_lambda32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpartition_D42_lambda32, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.18 4 17) (close _V10_Dpartition_D42_k107) (bruijn ##.lst.111 2 2))
    V_CALL(upenv->up->up->up->vars[17], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpartition_D42_k107, env)}),
      upenv->up->vars[2]);
 }
}
static void _V10_Dpartition_D42_k111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpartition_D42_k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpartition_D42_k111, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.values.11 8 10) (bruijn ##.k.289 4 0) (bruijn ##.x.291 0 0) (bruijn ##.r.113 4 2))
    V_CALL(VGetArg(upenv, 8-1, 10), runtime,
      upenv->up->up->up->vars[0],
      _var0,
      upenv->up->up->up->vars[2]);
 }
}
static void _V10_Dpartition_D42_k110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpartition_D42_k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpartition_D42_k110, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.20 7 19) (close _V10_Dpartition_D42_k111) (bruijn ##.x.292 0 0) (bruijn ##.l.112 3 1))
    V_CALL(VGetArg(upenv, 7-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpartition_D42_k111, env)}),
      _var0,
      upenv->up->up->vars[1]);
 }
}
static void _V10_Dpartition_D42_k113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpartition_D42_k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpartition_D42_k113, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.values.11 8 10) (bruijn ##.k.289 4 0) (bruijn ##.l.112 4 1) (bruijn ##.x.293 0 0))
    V_CALL(VGetArg(upenv, 8-1, 10), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->up->up->vars[1],
      _var0);
 }
}
static void _V10_Dpartition_D42_k112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpartition_D42_k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpartition_D42_k112, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.20 7 19) (close _V10_Dpartition_D42_k113) (bruijn ##.x.294 0 0) (bruijn ##.r.113 3 2))
    V_CALL(VGetArg(upenv, 7-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpartition_D42_k113, env)}),
      _var0,
      upenv->up->up->vars[2]);
 }
}
static void _V10_Dpartition_D42_k109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpartition_D42_k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpartition_D42_k109, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.290 0 0) ((bruijn ##.car.19 6 18) (close _V10_Dpartition_D42_k110) (bruijn ##.lst.111 4 2)) ((bruijn ##.car.19 6 18) (close _V10_Dpartition_D42_k112) (bruijn ##.lst.111 4 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 6-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpartition_D42_k110, env)}),
      upenv->up->up->up->vars[2]);
} else {
    V_CALL(VGetArg(upenv, 6-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpartition_D42_k112, env)}),
      upenv->up->up->up->vars[2]);
}
 }
}
static void _V10_Dpartition_D42_k108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpartition_D42_k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpartition_D42_k108, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.pred.110 3 1) (close _V10_Dpartition_D42_k109) (bruijn ##.x.295 0 0))
    V_CALL(upenv->up->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpartition_D42_k109, env)}),
      _var0);
 }
}
static void _V10_Dpartition_D42_lambda33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpartition_D42_lambda33, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpartition_D42_lambda33, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.car.19 4 18) (close _V10_Dpartition_D42_k108) (bruijn ##.lst.111 2 2))
    V_CALL(upenv->up->up->up->vars[18], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpartition_D42_k108, env)}),
      upenv->up->vars[2]);
 }
}
static void _V10_Dpartition_D42_k106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpartition_D42_k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpartition_D42_k106, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.286 0 0) ((bruijn ##.values.11 3 10) (bruijn ##.k.285 1 0) '() '()) ((bruijn ##.call-with-values.10 3 9) (bruijn ##.k.285 1 0) (close _V10_Dpartition_D42_lambda32) (close _V10_Dpartition_D42_lambda33)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->vars[10], runtime,
      upenv->vars[0],
      VNULL,
      VNULL);
} else {
    V_CALL(upenv->up->up->vars[9], runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpartition_D42_lambda32, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpartition_D42_lambda33, env)}));
}
 }
}
static void _V10_Dpartition_D42_lambda31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpartition_D42_lambda31, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpartition_D42_lambda31, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.null?.22 2 21) (close _V10_Dpartition_D42_k106) (bruijn ##.lst.111 0 2))
    V_CALL(upenv->up->vars[21], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpartition_D42_k106, env)}),
      _var2);
 }
}
static void _V10_Dtake__while_D43_k117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtake__while_D43_k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtake__while_D43_k117, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.not.12 6 11) (bruijn ##.k.302 2 0) (bruijn ##.x.303 0 0))
    V_CALL(VGetArg(upenv, 6-1, 11), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Dtake__while_D43_k116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtake__while_D43_k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtake__while_D43_k116, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.pred.114 3 1) (close _V10_Dtake__while_D43_k117) (bruijn ##.x.304 0 0))
    V_CALL(upenv->up->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtake__while_D43_k117, env)}),
      _var0);
 }
}
static void _V10_Dtake__while_D43_k115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtake__while_D43_k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtake__while_D43_k115, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.301 1 0) ((bruijn ##.k.302 0 0) (bruijn ##.p.301 1 0)) ((bruijn ##.car.19 4 18) (close _V10_Dtake__while_D43_k116) (bruijn ##.lst.115 2 2)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(_var0, runtime,
      upenv->vars[0]);
} else {
    V_CALL(upenv->up->up->up->vars[18], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtake__while_D43_k116, env)}),
      upenv->up->vars[2]);
}
 }
}
static void _V10_Dtake__while_D43_k121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtake__while_D43_k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtake__while_D43_k121, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.cons.20 7 19) (bruijn ##.k.296 5 0) (bruijn ##.x.298 2 0) (bruijn ##.x.299 0 0))
    V_CALL(VGetArg(upenv, 7-1, 19), runtime,
      VGetArg(upenv, 5-1, 0),
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Dtake__while_D43_k120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtake__while_D43_k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtake__while_D43_k120, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.take-while.43 5 19) (close _V10_Dtake__while_D43_k121) (bruijn ##.pred.114 4 1) (bruijn ##.x.300 0 0))
    V_CALL(VGetArg(upenv, 5-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtake__while_D43_k121, env)}),
      upenv->up->up->up->vars[1],
      _var0);
 }
}
static void _V10_Dtake__while_D43_k119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtake__while_D43_k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtake__while_D43_k119, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.18 5 17) (close _V10_Dtake__while_D43_k120) (bruijn ##.lst.115 3 2))
    V_CALL(VGetArg(upenv, 5-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtake__while_D43_k120, env)}),
      upenv->up->up->vars[2]);
 }
}
static void _V10_Dtake__while_D43_k118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtake__while_D43_k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtake__while_D43_k118, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.297 0 0) ((bruijn ##.k.296 2 0) '()) ((bruijn ##.car.19 4 18) (close _V10_Dtake__while_D43_k119) (bruijn ##.lst.115 2 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->vars[0], runtime,
      VNULL);
} else {
    V_CALL(upenv->up->up->up->vars[18], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtake__while_D43_k119, env)}),
      upenv->up->vars[2]);
}
 }
}
static void _V10_Dtake__while_D43_k114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtake__while_D43_k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtake__while_D43_k114, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dtake__while_D43_k115) (close _V10_Dtake__while_D43_k118))
    V_CALL_FUNC(_V10_Dtake__while_D43_k115, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtake__while_D43_k118, env)}));
 }
}
static void _V10_Dtake__while_D43_lambda34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtake__while_D43_lambda34, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtake__while_D43_lambda34, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.null?.22 2 21) (close _V10_Dtake__while_D43_k114) (bruijn ##.lst.115 0 2))
    V_CALL(upenv->up->vars[21], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtake__while_D43_k114, env)}),
      _var2);
 }
}
static void _V10_Ddrop__while_D44_k125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddrop__while_D44_k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddrop__while_D44_k125, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.not.12 6 11) (bruijn ##.k.309 2 0) (bruijn ##.x.310 0 0))
    V_CALL(VGetArg(upenv, 6-1, 11), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Ddrop__while_D44_k124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddrop__while_D44_k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddrop__while_D44_k124, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.pred.116 3 1) (close _V10_Ddrop__while_D44_k125) (bruijn ##.x.311 0 0))
    V_CALL(upenv->up->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddrop__while_D44_k125, env)}),
      _var0);
 }
}
static void _V10_Ddrop__while_D44_k123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddrop__while_D44_k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddrop__while_D44_k123, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.308 1 0) ((bruijn ##.k.309 0 0) (bruijn ##.p.308 1 0)) ((bruijn ##.car.19 4 18) (close _V10_Ddrop__while_D44_k124) (bruijn ##.lst.117 2 2)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(_var0, runtime,
      upenv->vars[0]);
} else {
    V_CALL(upenv->up->up->up->vars[18], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddrop__while_D44_k124, env)}),
      upenv->up->vars[2]);
}
 }
}
static void _V10_Ddrop__while_D44_k127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddrop__while_D44_k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddrop__while_D44_k127, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.drop-while.44 4 20) (bruijn ##.k.305 3 0) (bruijn ##.pred.116 3 1) (bruijn ##.x.307 0 0))
    V_CALL(upenv->up->up->up->vars[20], runtime,
      upenv->up->up->vars[0],
      upenv->up->up->vars[1],
      _var0);
 }
}
static void _V10_Ddrop__while_D44_k126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddrop__while_D44_k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddrop__while_D44_k126, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.306 0 0) ((bruijn ##.k.305 2 0) (bruijn ##.lst.117 2 2)) ((bruijn ##.cdr.18 4 17) (close _V10_Ddrop__while_D44_k127) (bruijn ##.lst.117 2 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->vars[0], runtime,
      upenv->up->vars[2]);
} else {
    V_CALL(upenv->up->up->up->vars[17], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddrop__while_D44_k127, env)}),
      upenv->up->vars[2]);
}
 }
}
static void _V10_Ddrop__while_D44_k122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddrop__while_D44_k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddrop__while_D44_k122, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Ddrop__while_D44_k123) (close _V10_Ddrop__while_D44_k126))
    V_CALL_FUNC(_V10_Ddrop__while_D44_k123, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddrop__while_D44_k126, env)}));
 }
}
static void _V10_Ddrop__while_D44_lambda35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddrop__while_D44_lambda35, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddrop__while_D44_lambda35, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.null?.22 2 21) (close _V10_Ddrop__while_D44_k122) (bruijn ##.lst.117 0 2))
    V_CALL(upenv->up->vars[21], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddrop__while_D44_k122, env)}),
      _var2);
 }
}
static void _V10_Dsplit__while_D45_k131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsplit__while_D45_k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsplit__while_D45_k131, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.not.12 6 11) (bruijn ##.k.320 2 0) (bruijn ##.x.321 0 0))
    V_CALL(VGetArg(upenv, 6-1, 11), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Dsplit__while_D45_k130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsplit__while_D45_k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsplit__while_D45_k130, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.pred.118 3 1) (close _V10_Dsplit__while_D45_k131) (bruijn ##.x.322 0 0))
    V_CALL(upenv->up->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsplit__while_D45_k131, env)}),
      _var0);
 }
}
static void _V10_Dsplit__while_D45_k129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsplit__while_D45_k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsplit__while_D45_k129, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.319 1 0) ((bruijn ##.k.320 0 0) (bruijn ##.p.319 1 0)) ((bruijn ##.car.19 4 18) (close _V10_Dsplit__while_D45_k130) (bruijn ##.lst.119 2 2)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(_var0, runtime,
      upenv->vars[0]);
} else {
    V_CALL(upenv->up->up->up->vars[18], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsplit__while_D45_k130, env)}),
      upenv->up->vars[2]);
}
 }
}
static void _V10_Dsplit__while_D45_k133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsplit__while_D45_k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsplit__while_D45_k133, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.split-while.45 5 21) (bruijn ##.k.314 1 0) (bruijn ##.pred.118 4 1) (bruijn ##.x.315 0 0))
    V_CALL(VGetArg(upenv, 5-1, 21), runtime,
      upenv->vars[0],
      upenv->up->up->up->vars[1],
      _var0);
 }
}
static void _V10_Dsplit__while_D45_lambda37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsplit__while_D45_lambda37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsplit__while_D45_lambda37, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.18 5 17) (close _V10_Dsplit__while_D45_k133) (bruijn ##.lst.119 3 2))
    V_CALL(VGetArg(upenv, 5-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsplit__while_D45_k133, env)}),
      upenv->up->up->vars[2]);
 }
}
static void _V10_Dsplit__while_D45_k135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsplit__while_D45_k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsplit__while_D45_k135, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.values.11 7 10) (bruijn ##.k.316 2 0) (bruijn ##.x.317 0 0) (bruijn ##.d.121 2 2))
    V_CALL(VGetArg(upenv, 7-1, 10), runtime,
      upenv->up->vars[0],
      _var0,
      upenv->up->vars[2]);
 }
}
static void _V10_Dsplit__while_D45_k134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsplit__while_D45_k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsplit__while_D45_k134, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.20 6 19) (close _V10_Dsplit__while_D45_k135) (bruijn ##.x.318 0 0) (bruijn ##.t.120 1 1))
    V_CALL(VGetArg(upenv, 6-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsplit__while_D45_k135, env)}),
      _var0,
      upenv->vars[1]);
 }
}
static void _V10_Dsplit__while_D45_lambda38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsplit__while_D45_lambda38, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsplit__while_D45_lambda38, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.car.19 5 18) (close _V10_Dsplit__while_D45_k134) (bruijn ##.lst.119 3 2))
    V_CALL(VGetArg(upenv, 5-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsplit__while_D45_k134, env)}),
      upenv->up->up->vars[2]);
 }
}
static void _V10_Dsplit__while_D45_k132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsplit__while_D45_k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsplit__while_D45_k132, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.313 0 0) ((bruijn ##.values.11 4 10) (bruijn ##.k.312 2 0) '() (bruijn ##.lst.119 2 2)) ((bruijn ##.call-with-values.10 4 9) (bruijn ##.k.312 2 0) (close _V10_Dsplit__while_D45_lambda37) (close _V10_Dsplit__while_D45_lambda38)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->up->vars[10], runtime,
      upenv->up->vars[0],
      VNULL,
      upenv->up->vars[2]);
} else {
    V_CALL(upenv->up->up->up->vars[9], runtime,
      upenv->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsplit__while_D45_lambda37, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsplit__while_D45_lambda38, env)}));
}
 }
}
static void _V10_Dsplit__while_D45_k128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsplit__while_D45_k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsplit__while_D45_k128, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dsplit__while_D45_k129) (close _V10_Dsplit__while_D45_k132))
    V_CALL_FUNC(_V10_Dsplit__while_D45_k129, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsplit__while_D45_k132, env)}));
 }
}
static void _V10_Dsplit__while_D45_lambda36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsplit__while_D45_lambda36, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsplit__while_D45_lambda36, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.null?.22 2 21) (close _V10_Dsplit__while_D45_k128) (bruijn ##.lst.119 0 2))
    V_CALL(upenv->up->vars[21], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsplit__while_D45_k128, env)}),
      _var2);
 }
}
static void _V10_Dany_Q_D46_k139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dany_Q_D46_k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dany_Q_D46_k139, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.any?.46 5 22) (bruijn ##.k.323 4 0) (bruijn ##.p.122 4 1) (bruijn ##.x.326 0 0))
    V_CALL(VGetArg(upenv, 5-1, 22), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->up->up->vars[1],
      _var0);
 }
}
static void _V10_Dany_Q_D46_k138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dany_Q_D46_k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dany_Q_D46_k138, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.325 0 0) ((bruijn ##.k.323 3 0) #t) ((bruijn ##.cdr.18 5 17) (close _V10_Dany_Q_D46_k139) (bruijn ##.lst.123 3 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(true));
} else {
    V_CALL(VGetArg(upenv, 5-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dany_Q_D46_k139, env)}),
      upenv->up->up->vars[2]);
}
 }
}
static void _V10_Dany_Q_D46_k137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dany_Q_D46_k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dany_Q_D46_k137, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.p.122 2 1) (close _V10_Dany_Q_D46_k138) (bruijn ##.x.327 0 0))
    V_CALL(upenv->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dany_Q_D46_k138, env)}),
      _var0);
 }
}
static void _V10_Dany_Q_D46_k136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dany_Q_D46_k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dany_Q_D46_k136, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.324 0 0) ((bruijn ##.k.323 1 0) #f) ((bruijn ##.car.19 3 18) (close _V10_Dany_Q_D46_k137) (bruijn ##.lst.123 1 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
} else {
    V_CALL(upenv->up->up->vars[18], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dany_Q_D46_k137, env)}),
      upenv->vars[2]);
}
 }
}
static void _V10_Dany_Q_D46_lambda39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dany_Q_D46_lambda39, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dany_Q_D46_lambda39, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.null?.22 2 21) (close _V10_Dany_Q_D46_k136) (bruijn ##.p.122 0 1))
    V_CALL(upenv->up->vars[21], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dany_Q_D46_k136, env)}),
      _var1);
 }
}
static void _V10_Devery_Q_D47_k140(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Devery_Q_D47_k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Devery_Q_D47_k140, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.not.12 3 11) (bruijn ##.k.328 1 0) (bruijn ##.x.329 0 0))
    V_CALL(upenv->up->up->vars[11], runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Devery_Q_D47_k141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Devery_Q_D47_k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Devery_Q_D47_k141, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.not.12 4 11) (bruijn ##.k.330 1 0) (bruijn ##.x.331 0 0))
    V_CALL(upenv->up->up->up->vars[11], runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Devery_Q_D47_lambda41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Devery_Q_D47_lambda41, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Devery_Q_D47_lambda41, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.p.124 1 1) (close _V10_Devery_Q_D47_k141) (bruijn ##.e.126 0 1))
    V_CALL(upenv->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Devery_Q_D47_k141, env)}),
      _var1);
 }
}
static void _V10_Devery_Q_D47_lambda40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Devery_Q_D47_lambda40, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Devery_Q_D47_lambda40, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.any?.46 1 22) (close _V10_Devery_Q_D47_k140) (close _V10_Devery_Q_D47_lambda41) (bruijn ##.lst.125 0 2))
    V_CALL(upenv->vars[22], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Devery_Q_D47_k140, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Devery_Q_D47_lambda41, env)}),
      _var2);
 }
}
static void _V10_Dloop_D129_k146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D129_k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D129_k146, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.129 6 0) (bruijn ##.k.333 5 0) (bruijn ##.x.336 1 0) (bruijn ##.x.337 0 0))
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VGetArg(upenv, 5-1, 0),
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D129_k145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D129_k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D129_k145, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.18 8 17) (close _V10_Dloop_D129_k146) (bruijn ##.lst.131 4 2))
    V_CALL(VGetArg(upenv, 8-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D129_k146, env)}),
      upenv->up->up->up->vars[2]);
 }
}
static void _V10_Dloop_D129_k144(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D129_k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D129_k144, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.335 0 0) ((bruijn ##.k.333 3 0) (bruijn ##.i.130 3 1)) ((bruijn ##.+.13 7 12) (close _V10_Dloop_D129_k145) (bruijn ##.i.130 3 1) 1))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->vars[0], runtime,
      upenv->up->up->vars[1]);
} else {
    V_CALL(VGetArg(upenv, 7-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D129_k145, env)}),
      upenv->up->up->vars[1],
      VEncodeInt(1l));
}
 }
}
static void _V10_Dloop_D129_k143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D129_k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D129_k143, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.p.127 4 1) (close _V10_Dloop_D129_k144) (bruijn ##.x.338 0 0))
    V_CALL(upenv->up->up->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D129_k144, env)}),
      _var0);
 }
}
static void _V10_Dloop_D129_k142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D129_k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D129_k142, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.334 0 0) ((bruijn ##.k.333 1 0) #f) ((bruijn ##.car.19 5 18) (close _V10_Dloop_D129_k143) (bruijn ##.lst.131 1 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
} else {
    V_CALL(VGetArg(upenv, 5-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D129_k143, env)}),
      upenv->vars[2]);
}
 }
}
static void _V10_Dloop_D129_lambda43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D129_lambda43, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D129_lambda43, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.null?.22 4 21) (close _V10_Dloop_D129_k142) (bruijn ##.p.127 2 1))
    V_CALL(upenv->up->up->up->vars[21], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D129_k142, env)}),
      upenv->up->vars[1]);
 }
}
static void _V10_Dlist__index_D48_lambda42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlist__index_D48_lambda42, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlist__index_D48_lambda42, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (letrec 1 ((close _V10_Dloop_D129_lambda43)) ((bruijn ##.loop.129 0 0) (bruijn ##.k.332 1 0) 0 (bruijn ##.lst.128 1 2)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D129_lambda43, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VEncodeInt(0l),
      upenv->vars[2]);
    }
 }
}
static void _V10_Dinsert_D49_k151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinsert_D49_k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dinsert_D49_k151, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.cons.20 7 19) (bruijn ##.k.339 5 0) (bruijn ##.x.341 3 0) (bruijn ##.x.342 0 0))
    V_CALL(VGetArg(upenv, 7-1, 19), runtime,
      VGetArg(upenv, 5-1, 0),
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V10_Dinsert_D49_k150(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinsert_D49_k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dinsert_D49_k150, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.insert.49 5 25) (close _V10_Dinsert_D49_k151) (bruijn ##.x.343 1 0) (bruijn ##.x.344 0 0) (bruijn ##.x.134 4 3))
    V_CALL(VGetArg(upenv, 5-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinsert_D49_k151, env)}),
      upenv->vars[0],
      _var0,
      upenv->up->up->up->vars[3]);
 }
}
static void _V10_Dinsert_D49_k149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinsert_D49_k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dinsert_D49_k149, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.-.15 5 14) (close _V10_Dinsert_D49_k150) (bruijn ##.i.133 3 2) 1)
    V_CALL(VGetArg(upenv, 5-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinsert_D49_k150, env)}),
      upenv->up->up->vars[2],
      VEncodeInt(1l));
 }
}
static void _V10_Dinsert_D49_k148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinsert_D49_k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dinsert_D49_k148, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.18 4 17) (close _V10_Dinsert_D49_k149) (bruijn ##.lst.132 2 1))
    V_CALL(upenv->up->up->up->vars[17], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinsert_D49_k149, env)}),
      upenv->up->vars[1]);
 }
}
static void _V10_Dinsert_D49_k147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinsert_D49_k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dinsert_D49_k147, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.340 0 0) ((bruijn ##.cons.20 3 19) (bruijn ##.k.339 1 0) (bruijn ##.x.134 1 3) (bruijn ##.lst.132 1 1)) ((bruijn ##.car.19 3 18) (close _V10_Dinsert_D49_k148) (bruijn ##.lst.132 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->vars[19], runtime,
      upenv->vars[0],
      upenv->vars[3],
      upenv->vars[1]);
} else {
    V_CALL(upenv->up->up->vars[18], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinsert_D49_k148, env)}),
      upenv->vars[1]);
}
 }
}
static void _V10_Dinsert_D49_lambda44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinsert_D49_lambda44, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dinsert_D49_lambda44, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn ##.=.14 2 13) (close _V10_Dinsert_D49_k147) (bruijn ##.i.133 0 2) 0)
    V_CALL(upenv->up->vars[13], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinsert_D49_k147, env)}),
      _var2,
      VEncodeInt(0l));
 }
}
static void _V10_Ddelete_D50_k156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddelete_D50_k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddelete_D50_k156, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.cons.20 7 19) (bruijn ##.k.345 5 0) (bruijn ##.x.347 3 0) (bruijn ##.x.348 0 0))
    V_CALL(VGetArg(upenv, 7-1, 19), runtime,
      VGetArg(upenv, 5-1, 0),
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V10_Ddelete_D50_k155(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddelete_D50_k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddelete_D50_k155, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.delete.50 5 26) (close _V10_Ddelete_D50_k156) (bruijn ##.x.349 1 0) (bruijn ##.x.350 0 0))
    V_CALL(VGetArg(upenv, 5-1, 26), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddelete_D50_k156, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Ddelete_D50_k154(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddelete_D50_k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddelete_D50_k154, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.-.15 5 14) (close _V10_Ddelete_D50_k155) (bruijn ##.i.136 3 2) 1)
    V_CALL(VGetArg(upenv, 5-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddelete_D50_k155, env)}),
      upenv->up->up->vars[2],
      VEncodeInt(1l));
 }
}
static void _V10_Ddelete_D50_k153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddelete_D50_k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddelete_D50_k153, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.18 4 17) (close _V10_Ddelete_D50_k154) (bruijn ##.lst.135 2 1))
    V_CALL(upenv->up->up->up->vars[17], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddelete_D50_k154, env)}),
      upenv->up->vars[1]);
 }
}
static void _V10_Ddelete_D50_k152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddelete_D50_k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddelete_D50_k152, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.346 0 0) ((bruijn ##.cdr.18 3 17) (bruijn ##.k.345 1 0) (bruijn ##.lst.135 1 1)) ((bruijn ##.car.19 3 18) (close _V10_Ddelete_D50_k153) (bruijn ##.lst.135 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->vars[17], runtime,
      upenv->vars[0],
      upenv->vars[1]);
} else {
    V_CALL(upenv->up->up->vars[18], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddelete_D50_k153, env)}),
      upenv->vars[1]);
}
 }
}
static void _V10_Ddelete_D50_lambda45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddelete_D50_lambda45, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddelete_D50_lambda45, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.=.14 2 13) (close _V10_Ddelete_D50_k152) (bruijn ##.i.136 0 2) 0)
    V_CALL(upenv->up->vars[13], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddelete_D50_k152, env)}),
      _var2,
      VEncodeInt(0l));
 }
}
static void _V10_Dassq__update_D51_k158(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassq__update_D51_k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dassq__update_D51_k158, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.cons.20 4 19) (bruijn ##.k.351 2 0) (bruijn ##.x.353 0 0) '())
    V_CALL(upenv->up->up->up->vars[19], runtime,
      upenv->up->vars[0],
      _var0,
      VNULL);
 }
}
static void _V10_Dassq__update_D51_k162(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassq__update_D51_k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dassq__update_D51_k162, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.cons.20 7 19) (bruijn ##.k.351 5 0) (bruijn ##.x.355 1 0) (bruijn ##.x.356 0 0))
    V_CALL(VGetArg(upenv, 7-1, 19), runtime,
      VGetArg(upenv, 5-1, 0),
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dassq__update_D51_k161(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassq__update_D51_k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dassq__update_D51_k161, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.18 6 17) (close _V10_Dassq__update_D51_k162) (bruijn ##.lst.137 4 1))
    V_CALL(VGetArg(upenv, 6-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassq__update_D51_k162, env)}),
      upenv->up->up->up->vars[1]);
 }
}
static void _V10_Dassq__update_D51_k165(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassq__update_D51_k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dassq__update_D51_k165, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.cons.20 8 19) (bruijn ##.k.351 6 0) (bruijn ##.x.357 2 0) (bruijn ##.x.358 0 0))
    V_CALL(VGetArg(upenv, 8-1, 19), runtime,
      VGetArg(upenv, 6-1, 0),
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Dassq__update_D51_k164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassq__update_D51_k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dassq__update_D51_k164, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.assoc-update.53 6 29) (close _V10_Dassq__update_D51_k165) (bruijn ##.x.359 0 0) (bruijn ##.x.138 5 2) (bruijn ##.val.139 5 3))
    V_CALL(VGetArg(upenv, 6-1, 29), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassq__update_D51_k165, env)}),
      _var0,
      VGetArg(upenv, 5-1, 2),
      VGetArg(upenv, 5-1, 3));
 }
}
static void _V10_Dassq__update_D51_k163(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassq__update_D51_k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dassq__update_D51_k163, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.18 6 17) (close _V10_Dassq__update_D51_k164) (bruijn ##.lst.137 4 1))
    V_CALL(VGetArg(upenv, 6-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassq__update_D51_k164, env)}),
      upenv->up->up->up->vars[1]);
 }
}
static void _V10_Dassq__update_D51_k160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassq__update_D51_k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dassq__update_D51_k160, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.354 0 0) ((bruijn ##.cons.20 5 19) (close _V10_Dassq__update_D51_k161) (bruijn ##.x.138 3 2) (bruijn ##.val.139 3 3)) ((bruijn ##.car.19 5 18) (close _V10_Dassq__update_D51_k163) (bruijn ##.lst.137 3 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 5-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassq__update_D51_k161, env)}),
      upenv->up->up->vars[2],
      upenv->up->up->vars[3]);
} else {
    V_CALL(VGetArg(upenv, 5-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassq__update_D51_k163, env)}),
      upenv->up->up->vars[1]);
}
 }
}
static void _V10_Dassq__update_D51_k159(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassq__update_D51_k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dassq__update_D51_k159, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.eq?.16 4 15) (close _V10_Dassq__update_D51_k160) (bruijn ##.x.138 2 2) (bruijn ##.x.360 0 0))
    V_CALL(upenv->up->up->up->vars[15], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassq__update_D51_k160, env)}),
      upenv->up->vars[2],
      _var0);
 }
}
static void _V10_Dassq__update_D51_k157(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassq__update_D51_k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dassq__update_D51_k157, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.352 0 0) ((bruijn ##.cons.20 3 19) (close _V10_Dassq__update_D51_k158) (bruijn ##.x.138 1 2) (bruijn ##.val.139 1 3)) ((bruijn ##.caar.21 3 20) (close _V10_Dassq__update_D51_k159) (bruijn ##.lst.137 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->vars[19], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassq__update_D51_k158, env)}),
      upenv->vars[2],
      upenv->vars[3]);
} else {
    V_CALL(upenv->up->up->vars[20], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassq__update_D51_k159, env)}),
      upenv->vars[1]);
}
 }
}
static void _V10_Dassq__update_D51_lambda46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassq__update_D51_lambda46, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dassq__update_D51_lambda46, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn ##.null?.22 2 21) (close _V10_Dassq__update_D51_k157) (bruijn ##.lst.137 0 1))
    V_CALL(upenv->up->vars[21], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassq__update_D51_k157, env)}),
      _var1);
 }
}
static void _V10_Dassv__update_D52_k167(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassv__update_D52_k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dassv__update_D52_k167, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.cons.20 4 19) (bruijn ##.k.361 2 0) (bruijn ##.x.363 0 0) '())
    V_CALL(upenv->up->up->up->vars[19], runtime,
      upenv->up->vars[0],
      _var0,
      VNULL);
 }
}
static void _V10_Dassv__update_D52_k171(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassv__update_D52_k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dassv__update_D52_k171, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.cons.20 7 19) (bruijn ##.k.361 5 0) (bruijn ##.x.365 1 0) (bruijn ##.x.366 0 0))
    V_CALL(VGetArg(upenv, 7-1, 19), runtime,
      VGetArg(upenv, 5-1, 0),
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dassv__update_D52_k170(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassv__update_D52_k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dassv__update_D52_k170, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.18 6 17) (close _V10_Dassv__update_D52_k171) (bruijn ##.lst.140 4 1))
    V_CALL(VGetArg(upenv, 6-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassv__update_D52_k171, env)}),
      upenv->up->up->up->vars[1]);
 }
}
static void _V10_Dassv__update_D52_k174(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassv__update_D52_k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dassv__update_D52_k174, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.cons.20 8 19) (bruijn ##.k.361 6 0) (bruijn ##.x.367 2 0) (bruijn ##.x.368 0 0))
    V_CALL(VGetArg(upenv, 8-1, 19), runtime,
      VGetArg(upenv, 6-1, 0),
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Dassv__update_D52_k173(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassv__update_D52_k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dassv__update_D52_k173, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.assoc-update.53 6 29) (close _V10_Dassv__update_D52_k174) (bruijn ##.x.369 0 0) (bruijn ##.x.141 5 2) (bruijn ##.val.142 5 3))
    V_CALL(VGetArg(upenv, 6-1, 29), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassv__update_D52_k174, env)}),
      _var0,
      VGetArg(upenv, 5-1, 2),
      VGetArg(upenv, 5-1, 3));
 }
}
static void _V10_Dassv__update_D52_k172(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassv__update_D52_k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dassv__update_D52_k172, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.18 6 17) (close _V10_Dassv__update_D52_k173) (bruijn ##.lst.140 4 1))
    V_CALL(VGetArg(upenv, 6-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassv__update_D52_k173, env)}),
      upenv->up->up->up->vars[1]);
 }
}
static void _V10_Dassv__update_D52_k169(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassv__update_D52_k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dassv__update_D52_k169, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.364 0 0) ((bruijn ##.cons.20 5 19) (close _V10_Dassv__update_D52_k170) (bruijn ##.x.141 3 2) (bruijn ##.val.142 3 3)) ((bruijn ##.car.19 5 18) (close _V10_Dassv__update_D52_k172) (bruijn ##.lst.140 3 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 5-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassv__update_D52_k170, env)}),
      upenv->up->up->vars[2],
      upenv->up->up->vars[3]);
} else {
    V_CALL(VGetArg(upenv, 5-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassv__update_D52_k172, env)}),
      upenv->up->up->vars[1]);
}
 }
}
static void _V10_Dassv__update_D52_k168(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassv__update_D52_k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dassv__update_D52_k168, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.eqv?.17 4 16) (close _V10_Dassv__update_D52_k169) (bruijn ##.x.141 2 2) (bruijn ##.x.370 0 0))
    V_CALL(upenv->up->up->up->vars[16], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassv__update_D52_k169, env)}),
      upenv->up->vars[2],
      _var0);
 }
}
static void _V10_Dassv__update_D52_k166(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassv__update_D52_k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dassv__update_D52_k166, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.362 0 0) ((bruijn ##.cons.20 3 19) (close _V10_Dassv__update_D52_k167) (bruijn ##.x.141 1 2) (bruijn ##.val.142 1 3)) ((bruijn ##.caar.21 3 20) (close _V10_Dassv__update_D52_k168) (bruijn ##.lst.140 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->vars[19], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassv__update_D52_k167, env)}),
      upenv->vars[2],
      upenv->vars[3]);
} else {
    V_CALL(upenv->up->up->vars[20], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassv__update_D52_k168, env)}),
      upenv->vars[1]);
}
 }
}
static void _V10_Dassv__update_D52_lambda47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassv__update_D52_lambda47, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dassv__update_D52_lambda47, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn ##.null?.22 2 21) (close _V10_Dassv__update_D52_k166) (bruijn ##.lst.140 0 1))
    V_CALL(upenv->up->vars[21], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassv__update_D52_k166, env)}),
      _var1);
 }
}
static void _V10_Dassoc__update_D53_k176(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassoc__update_D53_k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dassoc__update_D53_k176, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.cons.20 4 19) (bruijn ##.k.372 2 0) (bruijn ##.x.374 0 0) '())
    V_CALL(upenv->up->up->up->vars[19], runtime,
      upenv->up->vars[0],
      _var0,
      VNULL);
 }
}
static void _V10_Dassoc__update_D53_k180(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassoc__update_D53_k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dassoc__update_D53_k180, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.cons.20 7 19) (bruijn ##.k.372 5 0) (bruijn ##.x.376 1 0) (bruijn ##.x.377 0 0))
    V_CALL(VGetArg(upenv, 7-1, 19), runtime,
      VGetArg(upenv, 5-1, 0),
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dassoc__update_D53_k179(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassoc__update_D53_k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dassoc__update_D53_k179, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.18 6 17) (close _V10_Dassoc__update_D53_k180) (bruijn ##.lst.146 4 1))
    V_CALL(VGetArg(upenv, 6-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassoc__update_D53_k180, env)}),
      upenv->up->up->up->vars[1]);
 }
}
static void _V10_Dassoc__update_D53_k183(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassoc__update_D53_k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dassoc__update_D53_k183, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.cons.20 8 19) (bruijn ##.k.372 6 0) (bruijn ##.x.378 2 0) (bruijn ##.x.379 0 0))
    V_CALL(VGetArg(upenv, 8-1, 19), runtime,
      VGetArg(upenv, 6-1, 0),
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Dassoc__update_D53_k182(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassoc__update_D53_k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dassoc__update_D53_k182, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.assoc-update.53 6 29) (close _V10_Dassoc__update_D53_k183) (bruijn ##.x.380 0 0) (bruijn ##.x.147 5 2) (bruijn ##.val.148 5 3))
    V_CALL(VGetArg(upenv, 6-1, 29), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassoc__update_D53_k183, env)}),
      _var0,
      VGetArg(upenv, 5-1, 2),
      VGetArg(upenv, 5-1, 3));
 }
}
static void _V10_Dassoc__update_D53_k181(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassoc__update_D53_k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dassoc__update_D53_k181, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.18 6 17) (close _V10_Dassoc__update_D53_k182) (bruijn ##.lst.146 4 1))
    V_CALL(VGetArg(upenv, 6-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassoc__update_D53_k182, env)}),
      upenv->up->up->up->vars[1]);
 }
}
static void _V10_Dassoc__update_D53_k178(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassoc__update_D53_k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dassoc__update_D53_k178, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.375 0 0) ((bruijn ##.cons.20 5 19) (close _V10_Dassoc__update_D53_k179) (bruijn ##.x.147 3 2) (bruijn ##.val.148 3 3)) ((bruijn ##.car.19 5 18) (close _V10_Dassoc__update_D53_k181) (bruijn ##.lst.146 3 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 5-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassoc__update_D53_k179, env)}),
      upenv->up->up->vars[2],
      upenv->up->up->vars[3]);
} else {
    V_CALL(VGetArg(upenv, 5-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassoc__update_D53_k181, env)}),
      upenv->up->up->vars[1]);
}
 }
}
static void _V10_Dassoc__update_D53_k177(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassoc__update_D53_k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dassoc__update_D53_k177, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.=.149 2 4) (close _V10_Dassoc__update_D53_k178) (bruijn ##.x.147 2 2) (bruijn ##.x.381 0 0))
    V_CALL(upenv->up->vars[4], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassoc__update_D53_k178, env)}),
      upenv->up->vars[2],
      _var0);
 }
}
static void _V10_Dassoc__update_D53_k175(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassoc__update_D53_k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dassoc__update_D53_k175, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.373 0 0) ((bruijn ##.cons.20 3 19) (close _V10_Dassoc__update_D53_k176) (bruijn ##.x.147 1 2) (bruijn ##.val.148 1 3)) ((bruijn ##.caar.21 3 20) (close _V10_Dassoc__update_D53_k177) (bruijn ##.lst.146 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->vars[19], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassoc__update_D53_k176, env)}),
      upenv->vars[2],
      upenv->vars[3]);
} else {
    V_CALL(upenv->up->up->vars[20], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassoc__update_D53_k177, env)}),
      upenv->vars[1]);
}
 }
}
__attribute__((used)) static void _V20CaseError__V10_Dassoc__update_D53_lambda48(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V10_Dassoc__update_D53_lambda48 #t (4 ((bruijn ##.assoc-update.53 1 29) (bruijn ##.k.371 0 0) (bruijn ##.lst.143 0 1) (bruijn ##.x.144 0 2) (bruijn ##.val.145 0 3) (bruijn ##.equal?.23 2 22))) (5 ((bruijn ##.null?.22 2 21) (close _V10_Dassoc__update_D53_k175) (bruijn ##.lst.146 0 1))))
 VErrorC(runtime, "Not enough arguments to _V10_Dassoc__update_D53_lambda48, got ~D~N"
 "-- expected 4~N"
 "-- expected 5~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dassoc__update_D53_lambda48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V10_Dassoc__update_D53_lambda48, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  // ((bruijn ##.assoc-update.53 1 29) (bruijn ##.k.371 0 0) (bruijn ##.lst.143 0 1) (bruijn ##.x.144 0 2) (bruijn ##.val.145 0 3) (bruijn ##.equal?.23 2 22))
    V_CALL(upenv->vars[29], runtime,
      _var0,
      _var1,
      _var2,
      _var3,
      upenv->up->vars[22]);
 }
}
__attribute__((used)) static void _V20Case1__V10_Dassoc__update_D53_lambda48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V10_Dassoc__update_D53_lambda48, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 5, 5, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // ((bruijn ##.null?.22 2 21) (close _V10_Dassoc__update_D53_k175) (bruijn ##.lst.146 0 1))
    V_CALL(upenv->up->vars[21], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassoc__update_D53_k175, env)}),
      _var1);
 }
}
void _V10_Dassoc__update_D53_lambda48(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dassoc__update_D53_lambda48, @function\n"
#endif
"_V10_Dassoc__update_D53_lambda48:\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case0__V10_Dassoc__update_D53_lambda48\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case1__V10_Dassoc__update_D53_lambda48\n"
"    jmp _V20CaseError__V10_Dassoc__update_D53_lambda48\n"
);
static void _V0vanity_V0list_V20_lambda2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17, VWORD _var18, VWORD _var19, VWORD _var20, VWORD _var21, VWORD _var22) {
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_lambda2, runtime, upenv, 23, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7, _var8, _var9, _var10, _var11, _var12, _var13, _var14, _var15, _var16, _var17, _var18, _var19, _var20, _var21, _var22) {
  struct { VEnv env; VWORD argv[23]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 23, 23, upenv);
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
  // (letrec 30 ((close _V10_Diota_D24_lambda3) (close _V10_Dlist__tabulate_D25_lambda7) (close _V10_Dtake_D26_lambda9) (close _V10_Ddrop_D27_lambda10) (close _V10_Dtake__right_D28_lambda11) (close _V10_Ddrop__right_D29_lambda13) (close _V10_Dsplit__at_D30_lambda15) (close _V10_Dfold_D31_lambda18) (close _V10_Dfold__right_D32_lambda19) (close _V10_Dconcatenate_D33_lambda20) (close _V10_Dzip_D34_lambda21) (close _V10_Dunzip1_D35_lambda22) (close _V10_Dunzip2_D36_lambda23) (close _V10_Dunzip3_D37_lambda24) (close _V10_Dunzip4_D38_lambda25) (close _V10_Dunzip5_D39_lambda26) (close _V10_Dcount_D40_lambda28) (close _V10_Dfilter_D41_lambda30) (close _V10_Dpartition_D42_lambda31) (close _V10_Dtake__while_D43_lambda34) (close _V10_Ddrop__while_D44_lambda35) (close _V10_Dsplit__while_D45_lambda36) (close _V10_Dany_Q_D46_lambda39) (close _V10_Devery_Q_D47_lambda40) (close _V10_Dlist__index_D48_lambda42) (close _V10_Dinsert_D49_lambda44) (close _V10_Ddelete_D50_lambda45) (close _V10_Dassq__update_D51_lambda46) (close _V10_Dassv__update_D52_lambda47) (close _V10_Dassoc__update_D53_lambda48)) ((bruijn ##.k.151 27 0) (##inline ##vcore.cons (##inline ##vcore.cons 'iota (bruijn ##.iota.24 0 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'list-tabulate (bruijn ##.list-tabulate.25 0 1)) (##inline ##vcore.cons (##inline ##vcore.cons 'take (bruijn ##.take.26 0 2)) (##inline ##vcore.cons (##inline ##vcore.cons 'drop (bruijn ##.drop.27 0 3)) (##inline ##vcore.cons (##inline ##vcore.cons 'take-right (bruijn ##.take-right.28 0 4)) (##inline ##vcore.cons (##inline ##vcore.cons 'drop-right (bruijn ##.drop-right.29 0 5)) (##inline ##vcore.cons (##inline ##vcore.cons 'split-at (bruijn ##.split-at.30 0 6)) (##inline ##vcore.cons (##inline ##vcore.cons 'fold (bruijn ##.fold.31 0 7)) (##inline ##vcore.cons (##inline ##vcore.cons 'fold-right (bruijn ##.fold-right.32 0 8)) (##inline ##vcore.cons (##inline ##vcore.cons 'concatenate (bruijn ##.concatenate.33 0 9)) (##inline ##vcore.cons (##inline ##vcore.cons 'zip (bruijn ##.zip.34 0 10)) (##inline ##vcore.cons (##inline ##vcore.cons 'unzip1 (bruijn ##.unzip1.35 0 11)) (##inline ##vcore.cons (##inline ##vcore.cons 'unzip2 (bruijn ##.unzip2.36 0 12)) (##inline ##vcore.cons (##inline ##vcore.cons 'unzip3 (bruijn ##.unzip3.37 0 13)) (##inline ##vcore.cons (##inline ##vcore.cons 'unzip4 (bruijn ##.unzip4.38 0 14)) (##inline ##vcore.cons (##inline ##vcore.cons 'unzip5 (bruijn ##.unzip5.39 0 15)) (##inline ##vcore.cons (##inline ##vcore.cons 'count (bruijn ##.count.40 0 16)) (##inline ##vcore.cons (##inline ##vcore.cons 'filter (bruijn ##.filter.41 0 17)) (##inline ##vcore.cons (##inline ##vcore.cons 'partition (bruijn ##.partition.42 0 18)) (##inline ##vcore.cons (##inline ##vcore.cons 'take-while (bruijn ##.take-while.43 0 19)) (##inline ##vcore.cons (##inline ##vcore.cons 'drop-while (bruijn ##.drop-while.44 0 20)) (##inline ##vcore.cons (##inline ##vcore.cons 'split-while (bruijn ##.split-while.45 0 21)) (##inline ##vcore.cons (##inline ##vcore.cons 'any? (bruijn ##.any?.46 0 22)) (##inline ##vcore.cons (##inline ##vcore.cons 'every? (bruijn ##.every?.47 0 23)) (##inline ##vcore.cons (##inline ##vcore.cons 'list-index (bruijn ##.list-index.48 0 24)) (##inline ##vcore.cons (##inline ##vcore.cons 'insert (bruijn ##.insert.49 0 25)) (##inline ##vcore.cons (##inline ##vcore.cons 'delete (bruijn ##.delete.50 0 26)) (##inline ##vcore.cons (##inline ##vcore.cons 'assq-update (bruijn ##.assq-update.51 0 27)) (##inline ##vcore.cons (##inline ##vcore.cons 'assv-update (bruijn ##.assv-update.52 0 28)) (##inline ##vcore.cons (##inline ##vcore.cons 'assoc-update (bruijn ##.assoc-update.53 0 29)) '()))))))))))))))))))))))))))))))))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[30]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 30, 30, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diota_D24_lambda3, env)});
    env->vars[1] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlist__tabulate_D25_lambda7, env)});
    env->vars[2] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtake_D26_lambda9, env)});
    env->vars[3] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddrop_D27_lambda10, env)});
    env->vars[4] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtake__right_D28_lambda11, env)});
    env->vars[5] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddrop__right_D29_lambda13, env)});
    env->vars[6] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsplit__at_D30_lambda15, env)});
    env->vars[7] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfold_D31_lambda18, env)});
    env->vars[8] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfold__right_D32_lambda19, env)});
    env->vars[9] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dconcatenate_D33_lambda20, env)});
    env->vars[10] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dzip_D34_lambda21, env)});
    env->vars[11] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunzip1_D35_lambda22, env)});
    env->vars[12] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunzip2_D36_lambda23, env)});
    env->vars[13] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunzip3_D37_lambda24, env)});
    env->vars[14] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunzip4_D38_lambda25, env)});
    env->vars[15] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunzip5_D39_lambda26, env)});
    env->vars[16] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount_D40_lambda28, env)});
    env->vars[17] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfilter_D41_lambda30, env)});
    env->vars[18] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpartition_D42_lambda31, env)});
    env->vars[19] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtake__while_D43_lambda34, env)});
    env->vars[20] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddrop__while_D44_lambda35, env)});
    env->vars[21] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsplit__while_D45_lambda36, env)});
    env->vars[22] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dany_Q_D46_lambda39, env)});
    env->vars[23] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Devery_Q_D47_lambda40, env)});
    env->vars[24] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlist__index_D48_lambda42, env)});
    env->vars[25] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinsert_D49_lambda44, env)});
    env->vars[26] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddelete_D50_lambda45, env)});
    env->vars[27] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassq__update_D51_lambda46, env)});
    env->vars[28] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassv__update_D52_lambda47, env)});
    env->vars[29] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassoc__update_D53_lambda48, env)});
    V_CALL(VGetArg(upenv, 27-1, 0), runtime,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0iota,
        env->vars[0]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0list__tabulate,
        env->vars[1]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0take,
        env->vars[2]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0drop,
        env->vars[3]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0take__right,
        env->vars[4]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0drop__right,
        env->vars[5]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0split__at,
        env->vars[6]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0fold,
        env->vars[7]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0fold__right,
        env->vars[8]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0concatenate,
        env->vars[9]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0zip,
        env->vars[10]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unzip1,
        env->vars[11]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unzip2,
        env->vars[12]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unzip3,
        env->vars[13]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unzip4,
        env->vars[14]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unzip5,
        env->vars[15]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0count,
        env->vars[16]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0filter,
        env->vars[17]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0partition,
        env->vars[18]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0take__while,
        env->vars[19]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0drop__while,
        env->vars[20]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0split__while,
        env->vars[21]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0any_Q,
        env->vars[22]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0every_Q,
        env->vars[23]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0list__index,
        env->vars[24]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0insert,
        env->vars[25]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0delete,
        env->vars[26]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0assq__update,
        env->vars[27]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0assv__update,
        env->vars[28]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0assoc__update,
        env->vars[29]),
        VNULL)))))))))))))))))))))))))))))));
    }
 }
}
static void _V0vanity_V0list_V20_k25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k25, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0list_V20_lambda2) (bruijn ##.x.152 22 0) (bruijn ##.x.153 21 0) (bruijn ##.x.154 20 0) (bruijn ##.x.155 19 0) (bruijn ##.x.156 18 0) (bruijn ##.x.157 17 0) (bruijn ##.x.158 16 0) (bruijn ##.x.159 15 0) (bruijn ##.x.160 14 0) (bruijn ##.x.161 13 0) (bruijn ##.x.162 12 0) (bruijn ##.x.163 11 0) (bruijn ##.x.164 10 0) (bruijn ##.x.165 9 0) (bruijn ##.x.166 8 0) (bruijn ##.x.167 7 0) (bruijn ##.x.168 6 0) (bruijn ##.x.169 5 0) (bruijn ##.x.170 4 0) (bruijn ##.x.171 3 0) (bruijn ##.x.172 2 0) (bruijn ##.x.173 1 0) (bruijn ##.x.174 0 0))
    V_CALL_FUNC(_V0vanity_V0list_V20_lambda2, env, runtime,
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
static void _V0vanity_V0list_V20_k24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k24, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 22 0) (close _V0vanity_V0list_V20_k25) 'equal?)
    V_CALL(VGetArg(upenv, 22-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k25, env)}),
      _V0equal_Q);
 }
}
static void _V0vanity_V0list_V20_k23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k23, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 21 0) (close _V0vanity_V0list_V20_k24) 'null?)
    V_CALL(VGetArg(upenv, 21-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k24, env)}),
      _V0null_Q);
 }
}
static void _V0vanity_V0list_V20_k22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k22, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 20 0) (close _V0vanity_V0list_V20_k23) 'caar)
    V_CALL(VGetArg(upenv, 20-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k23, env)}),
      _V0caar);
 }
}
static void _V0vanity_V0list_V20_k21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k21, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 19 0) (close _V0vanity_V0list_V20_k22) 'cons)
    V_CALL(VGetArg(upenv, 19-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k22, env)}),
      _V0cons);
 }
}
static void _V0vanity_V0list_V20_k20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k20, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 18 0) (close _V0vanity_V0list_V20_k21) 'car)
    V_CALL(VGetArg(upenv, 18-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k21, env)}),
      _V0car);
 }
}
static void _V0vanity_V0list_V20_k19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k19, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 17 0) (close _V0vanity_V0list_V20_k20) 'cdr)
    V_CALL(VGetArg(upenv, 17-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k20, env)}),
      _V0cdr);
 }
}
static void _V0vanity_V0list_V20_k18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k18, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 16 0) (close _V0vanity_V0list_V20_k19) 'eqv?)
    V_CALL(VGetArg(upenv, 16-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k19, env)}),
      _V0eqv_Q);
 }
}
static void _V0vanity_V0list_V20_k17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k17, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 15 0) (close _V0vanity_V0list_V20_k18) 'eq?)
    V_CALL(VGetArg(upenv, 15-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k18, env)}),
      _V0eq_Q);
 }
}
static void _V0vanity_V0list_V20_k16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k16, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 14 0) (close _V0vanity_V0list_V20_k17) '-)
    V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k17, env)}),
      _V0__);
 }
}
static void _V0vanity_V0list_V20_k15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k15, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 13 0) (close _V0vanity_V0list_V20_k16) '=)
    V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k16, env)}),
      _V0_E);
 }
}
static void _V0vanity_V0list_V20_k14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k14, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 12 0) (close _V0vanity_V0list_V20_k15) '+)
    V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k15, env)}),
      _V0_P);
 }
}
static void _V0vanity_V0list_V20_k13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k13, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 11 0) (close _V0vanity_V0list_V20_k14) 'not)
    V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k14, env)}),
      _V0not);
 }
}
static void _V0vanity_V0list_V20_k12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k12, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 10 0) (close _V0vanity_V0list_V20_k13) 'values)
    V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k13, env)}),
      _V0values);
 }
}
static void _V0vanity_V0list_V20_k11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k11, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 9 0) (close _V0vanity_V0list_V20_k12) 'call-with-values)
    V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k12, env)}),
      _V0call__with__values);
 }
}
static void _V0vanity_V0list_V20_k10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k10, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 8 0) (close _V0vanity_V0list_V20_k11) 'map)
    V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k11, env)}),
      _V0map);
 }
}
static void _V0vanity_V0list_V20_k9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k9, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 7 0) (close _V0vanity_V0list_V20_k10) 'cadddr)
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k10, env)}),
      _V0cadddr);
 }
}
static void _V0vanity_V0list_V20_k8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k8, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 6 0) (close _V0vanity_V0list_V20_k9) 'caddr)
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k9, env)}),
      _V0caddr);
 }
}
static void _V0vanity_V0list_V20_k7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k7, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 5 0) (close _V0vanity_V0list_V20_k8) 'cadr)
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k8, env)}),
      _V0cadr);
 }
}
static void _V0vanity_V0list_V20_k6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k6, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 4 0) (close _V0vanity_V0list_V20_k7) 'list)
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k7, env)}),
      _V0list);
 }
}
static void _V0vanity_V0list_V20_k5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k5, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 3 0) (close _V0vanity_V0list_V20_k6) 'apply)
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k6, env)}),
      _V0apply);
 }
}
static void _V0vanity_V0list_V20_k4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k4, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 2 0) (close _V0vanity_V0list_V20_k5) 'append)
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k5, env)}),
      _V0append);
 }
}
static void _V0vanity_V0list_V20_k3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k3, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 1 0) (close _V0vanity_V0list_V20_k4) 'length)
    V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k4, env)}),
      _V0length);
 }
}
static void _V0vanity_V0list_V20_k2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k2, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 0 0) (close _V0vanity_V0list_V20_k3) '*)
    V_CALL(_var0, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k3, env)}),
      _V0_S);
 }
}
static void _V0vanity_V0list_V20_k1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.make-import (close _V0vanity_V0list_V20_k2) (##string ##.string.442) (bruijn ##.x.441 0 0))
    V_CALL_FUNC(VMakeImport2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k2, env)}),
      VEncodePointer(&_V10_Dstring_D442.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V0vanity_V0list_V20_lambda1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_lambda1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0list_V20_k1) (##string ##.string.443))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k1, env)}),
      VEncodePointer(&_V10_Dstring_D443.sym, VPOINTER_OTHER));
 }
}
VFunc _V0vanity_V0list_V20 = (VFunc)_V0vanity_V0list_V20_lambda1;
