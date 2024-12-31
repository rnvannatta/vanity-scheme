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
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D453 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D452 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
VWEAK VWORD _V0pair_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0pair_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "pair\?" };
VWEAK VWORD _V0_S;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_S = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "*" };
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
  _V0pair_Q = VEncodePointer(VLookupConstant("_V0pair_Q", &_VW_V0pair_Q), VPOINTER_OTHER);
  _V0_S = VEncodePointer(VLookupConstant("_V0_S", &_VW_V0_S), VPOINTER_OTHER);
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
static void _V10_Dloop_D56_k28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D56_k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.56 4 0) (bruijn ##.k.181 3 0) (bruijn ##.x.183 1 0) (bruijn ##.x.184 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 3,
      upenv->up->up->vars[0],
      upenv->vars[0],
      _var0);
}
static void _V10_Dloop_D56_k27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D56_k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.+.13 6 12) (close _V10_Dloop_D56_k28) (bruijn ##.n.58 2 2) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 12)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D56_k28, env)}),
      upenv->up->vars[2],
      VEncodeInt(1l));
}
static void _V10_Dloop_D56_k26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D56_k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.182 0 0) ((bruijn ##.cdr.18 5 17) (close _V10_Dloop_D56_k27) (bruijn ##.lst.57 1 1)) ((bruijn ##.k.181 1 0) (bruijn ##.n.58 1 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 17)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D56_k27, env)}),
      upenv->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      upenv->vars[2]);
}
}
static void _V10_Dloop_D56_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D56_lambda4, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.pair?.1 4 0) (close _V10_Dloop_D56_k26) (bruijn ##.lst.57 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D56_k26, env)}),
      _var1);
}
static void _V10_Dmy__num__pairs_D24_lambda3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmy__num__pairs_D24_lambda3, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D56_lambda4)) ((bruijn ##.loop.56 0 0) (bruijn ##.k.180 1 0) (bruijn ##.lst.55 1 1) 0))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D56_lambda4, env)});
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, env->vars[0]), 3,
      upenv->vars[0],
      upenv->vars[1],
      VEncodeInt(0l));
    }
}
static void _V10_Dloop_D60_k31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D60_k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.cons.20 7 19) (bruijn ##.k.186 3 0) (bruijn ##.i.61 3 1) (bruijn ##.x.188 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 19)), 3,
      upenv->up->up->vars[0],
      upenv->up->up->vars[1],
      _var0);
}
static void _V10_Dloop_D60_k30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D60_k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.loop.60 3 0) (close _V10_Dloop_D60_k31) (bruijn ##.x.189 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D60_k31, env)}),
      _var0);
}
static void _V10_Dloop_D60_k29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D60_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.187 0 0) ((bruijn ##.k.186 1 0) '()) ((bruijn ##.+.13 5 12) (close _V10_Dloop_D60_k30) (bruijn ##.i.61 1 1) 1))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 12)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D60_k30, env)}),
      upenv->vars[1],
      VEncodeInt(1l));
}
}
static void _V10_Dloop_D60_lambda6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D60_lambda6, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.eq?.16 4 15) (close _V10_Dloop_D60_k29) (bruijn ##.i.61 0 1) (bruijn ##.n.59 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[15]), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D60_k29, env)}),
      _var1,
      upenv->up->vars[1]);
}
static void _V10_Dloop_D64_k35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D64_k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.cons.20 8 19) (bruijn ##.k.191 4 0) (bruijn ##.x.193 2 0) (bruijn ##.x.194 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 19)), 3,
      upenv->up->up->up->vars[0],
      upenv->up->vars[0],
      _var0);
}
static void _V10_Dloop_D64_k34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D64_k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.loop.64 4 0) (close _V10_Dloop_D64_k35) (bruijn ##.x.195 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D64_k35, env)}),
      _var0);
}
static void _V10_Dloop_D64_k33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D64_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.+.13 6 12) (close _V10_Dloop_D64_k34) (bruijn ##.i.65 2 1) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 12)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D64_k34, env)}),
      upenv->up->vars[1],
      VEncodeInt(1l));
}
static void _V10_Dloop_D64_k32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D64_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.192 0 0) ((bruijn ##.k.191 1 0) '()) ((bruijn ##.+.13 5 12) (close _V10_Dloop_D64_k33) (bruijn ##.i.65 1 1) (bruijn ##.b.63 3 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 12)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D64_k33, env)}),
      upenv->vars[1],
      upenv->up->up->vars[2]);
}
}
static void _V10_Dloop_D64_lambda7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D64_lambda7, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.eq?.16 4 15) (close _V10_Dloop_D64_k32) (bruijn ##.i.65 0 1) (bruijn ##.n.62 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[15]), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D64_k32, env)}),
      _var1,
      upenv->up->vars[1]);
}
static void _V10_Dloop_D69_k40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D69_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.cons.20 9 19) (bruijn ##.k.197 5 0) (bruijn ##.x.199 2 0) (bruijn ##.x.200 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 19)), 3,
      VGetArg(upenv, 5-1, 0),
      upenv->up->vars[0],
      _var0);
}
static void _V10_Dloop_D69_k39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D69_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.loop.69 5 0) (close _V10_Dloop_D69_k40) (bruijn ##.x.201 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D69_k40, env)}),
      _var0);
}
static void _V10_Dloop_D69_k38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D69_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.+.13 7 12) (close _V10_Dloop_D69_k39) (bruijn ##.i.70 3 1) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 12)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D69_k39, env)}),
      upenv->up->up->vars[1],
      VEncodeInt(1l));
}
static void _V10_Dloop_D69_k37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D69_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.+.13 6 12) (close _V10_Dloop_D69_k38) (bruijn ##.x.202 0 0) (bruijn ##.b.67 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 12)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D69_k38, env)}),
      _var0,
      upenv->up->up->up->vars[2]);
}
static void _V10_Dloop_D69_k36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D69_k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.198 0 0) ((bruijn ##.k.197 1 0) '()) ((bruijn ##.*.2 5 1) (close _V10_Dloop_D69_k37) (bruijn ##.s.68 3 3) (bruijn ##.i.70 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 1)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D69_k37, env)}),
      upenv->up->up->vars[3],
      upenv->vars[1]);
}
}
static void _V10_Dloop_D69_lambda8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D69_lambda8, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.eq?.16 4 15) (close _V10_Dloop_D69_k36) (bruijn ##.i.70 0 1) (bruijn ##.n.66 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[15]), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D69_k36, env)}),
      _var1,
      upenv->up->vars[1]);
}
__attribute__((used)) static void _V20CaseError__V10_Diota_D25_lambda5(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V10_Diota_D25_lambda5 #t (2 (letrec 1 ((close _V10_Dloop_D60_lambda6)) ((bruijn ##.loop.60 0 0) (bruijn ##.k.185 1 0) 0))) (3 (letrec 1 ((close _V10_Dloop_D64_lambda7)) ((bruijn ##.loop.64 0 0) (bruijn ##.k.190 1 0) 0))) (4 (letrec 1 ((close _V10_Dloop_D69_lambda8)) ((bruijn ##.loop.69 0 0) (bruijn ##.k.196 1 0) 0))))
 VErrorC(runtime, "Not enough arguments to _V10_Diota_D25_lambda5, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Diota_D25_lambda5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D60_lambda6)) ((bruijn ##.loop.60 0 0) (bruijn ##.k.185 1 0) 0))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D60_lambda6, env)});
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, env->vars[0]), 2,
      upenv->vars[0],
      VEncodeInt(0l));
    }
}
__attribute__((used)) static void _V20Case1__V10_Diota_D25_lambda5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (letrec 1 ((close _V10_Dloop_D64_lambda7)) ((bruijn ##.loop.64 0 0) (bruijn ##.k.190 1 0) 0))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D64_lambda7, env)});
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, env->vars[0]), 2,
      upenv->vars[0],
      VEncodeInt(0l));
    }
}
__attribute__((used)) static void _V20Case2__V10_Diota_D25_lambda5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (letrec 1 ((close _V10_Dloop_D69_lambda8)) ((bruijn ##.loop.69 0 0) (bruijn ##.k.196 1 0) 0))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D69_lambda8, env)});
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, env->vars[0]), 2,
      upenv->vars[0],
      VEncodeInt(0l));
    }
}
void _V10_Diota_D25_lambda5(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Diota_D25_lambda5, @function\n"
#endif
"_V10_Diota_D25_lambda5:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V10_Diota_D25_lambda5\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V10_Diota_D25_lambda5\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case2__V10_Diota_D25_lambda5\n"
"    jmp _V20CaseError__V10_Diota_D25_lambda5\n"
);
static void _V10_Dloop_D73_k44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.cons.20 8 19) (bruijn ##.k.204 4 0) (bruijn ##.x.206 2 0) (bruijn ##.x.207 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 19)), 3,
      upenv->up->up->up->vars[0],
      upenv->up->vars[0],
      _var0);
}
static void _V10_Dloop_D73_k43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.loop.73 4 0) (close _V10_Dloop_D73_k44) (bruijn ##.x.208 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D73_k44, env)}),
      _var0);
}
static void _V10_Dloop_D73_k42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.+.13 6 12) (close _V10_Dloop_D73_k43) (bruijn ##.i.74 2 1) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 12)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D73_k43, env)}),
      upenv->up->vars[1],
      VEncodeInt(1l));
}
static void _V10_Dloop_D73_k41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.205 0 0) ((bruijn ##.k.204 1 0) '()) ((bruijn ##.proc.72 3 2) (close _V10_Dloop_D73_k42) (bruijn ##.i.74 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[2]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D73_k42, env)}),
      upenv->vars[1]);
}
}
static void _V10_Dloop_D73_lambda10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_lambda10, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.eq?.16 4 15) (close _V10_Dloop_D73_k41) (bruijn ##.i.74 0 1) (bruijn ##.n.71 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[15]), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D73_k41, env)}),
      _var1,
      upenv->up->vars[1]);
}
static void _V10_Dlist__tabulate_D26_lambda9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlist__tabulate_D26_lambda9, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (letrec 1 ((close _V10_Dloop_D73_lambda10)) ((bruijn ##.loop.73 0 0) (bruijn ##.k.203 1 0) 0))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D73_lambda10, env)});
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, env->vars[0]), 2,
      upenv->vars[0],
      VEncodeInt(0l));
    }
}
static void _V10_Dtake_D27_k49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtake_D27_k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.cons.20 7 19) (bruijn ##.k.209 5 0) (bruijn ##.x.211 3 0) (bruijn ##.x.212 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 19)), 3,
      VGetArg(upenv, 5-1, 0),
      upenv->up->up->vars[0],
      _var0);
}
static void _V10_Dtake_D27_k48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtake_D27_k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.take.27 5 3) (close _V10_Dtake_D27_k49) (bruijn ##.x.213 1 0) (bruijn ##.x.214 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 3)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtake_D27_k49, env)}),
      upenv->vars[0],
      _var0);
}
static void _V10_Dtake_D27_k47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtake_D27_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.-.15 5 14) (close _V10_Dtake_D27_k48) (bruijn ##.i.76 3 2) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 14)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtake_D27_k48, env)}),
      upenv->up->up->vars[2],
      VEncodeInt(1l));
}
static void _V10_Dtake_D27_k46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtake_D27_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.18 4 17) (close _V10_Dtake_D27_k47) (bruijn ##.lst.75 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[17]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtake_D27_k47, env)}),
      upenv->up->vars[1]);
}
static void _V10_Dtake_D27_k45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtake_D27_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.210 0 0) ((bruijn ##.k.209 1 0) '()) ((bruijn ##.car.19 3 18) (close _V10_Dtake_D27_k46) (bruijn ##.lst.75 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[18]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtake_D27_k46, env)}),
      upenv->vars[1]);
}
}
static void _V10_Dtake_D27_lambda11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtake_D27_lambda11, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.eq?.16 2 15) (close _V10_Dtake_D27_k45) (bruijn ##.i.76 0 2) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[15]), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtake_D27_k45, env)}),
      _var2,
      VEncodeInt(0l));
}
static void _V10_Ddrop_D28_k52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddrop_D28_k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.drop.28 4 4) (bruijn ##.k.215 3 0) (bruijn ##.x.217 1 0) (bruijn ##.x.218 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[4]), 3,
      upenv->up->up->vars[0],
      upenv->vars[0],
      _var0);
}
static void _V10_Ddrop_D28_k51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddrop_D28_k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.-.15 4 14) (close _V10_Ddrop_D28_k52) (bruijn ##.i.78 2 2) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[14]), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddrop_D28_k52, env)}),
      upenv->up->vars[2],
      VEncodeInt(1l));
}
static void _V10_Ddrop_D28_k50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddrop_D28_k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.216 0 0) ((bruijn ##.k.215 1 0) (bruijn ##.lst.77 1 1)) ((bruijn ##.cdr.18 3 17) (close _V10_Ddrop_D28_k51) (bruijn ##.lst.77 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      upenv->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[17]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddrop_D28_k51, env)}),
      upenv->vars[1]);
}
}
static void _V10_Ddrop_D28_lambda12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddrop_D28_lambda12, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.eq?.16 2 15) (close _V10_Ddrop_D28_k50) (bruijn ##.i.78 0 2) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[15]), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddrop_D28_k50, env)}),
      _var2,
      VEncodeInt(0l));
}
static void _V10_Dloop_D81_k55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D81_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.81 4 0) (bruijn ##.k.220 3 0) (bruijn ##.x.222 1 0) (bruijn ##.x.223 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 3,
      upenv->up->up->vars[0],
      upenv->vars[0],
      _var0);
}
static void _V10_Dloop_D81_k54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D81_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.-.15 6 14) (close _V10_Dloop_D81_k55) (bruijn ##.len.83 2 2) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 14)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D81_k55, env)}),
      upenv->up->vars[2],
      VEncodeInt(1l));
}
static void _V10_Dloop_D81_k53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D81_k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.221 0 0) ((bruijn ##.k.220 1 0) (bruijn ##.lst.82 1 1)) ((bruijn ##.cdr.18 5 17) (close _V10_Dloop_D81_k54) (bruijn ##.lst.82 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      upenv->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 17)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D81_k54, env)}),
      upenv->vars[1]);
}
}
static void _V10_Dloop_D81_lambda14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D81_lambda14, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.eq?.16 4 15) (close _V10_Dloop_D81_k53) (bruijn ##.len.83 0 2) (bruijn ##.i.80 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[15]), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D81_k53, env)}),
      _var2,
      upenv->up->vars[2]);
}
static void _V10_Dtake__right_D29_k56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtake__right_D29_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.81 1 0) (bruijn ##.k.219 2 0) (bruijn ##.lst.79 2 1) (bruijn ##.x.224 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 3,
      upenv->up->vars[0],
      upenv->up->vars[1],
      _var0);
}
static void _V10_Dtake__right_D29_lambda13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtake__right_D29_lambda13, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (letrec 1 ((close _V10_Dloop_D81_lambda14)) ((bruijn ##.my-num-pairs.24 2 0) (close _V10_Dtake__right_D29_k56) (bruijn ##.lst.79 1 1)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D81_lambda14, env)});
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtake__right_D29_k56, env)}),
      upenv->vars[1]);
    }
}
static void _V10_Dloop_D86_k61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D86_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.cons.20 9 19) (bruijn ##.k.226 5 0) (bruijn ##.x.228 3 0) (bruijn ##.x.229 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 19)), 3,
      VGetArg(upenv, 5-1, 0),
      upenv->up->up->vars[0],
      _var0);
}
static void _V10_Dloop_D86_k60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D86_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.loop.86 5 0) (close _V10_Dloop_D86_k61) (bruijn ##.x.230 1 0) (bruijn ##.x.231 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D86_k61, env)}),
      upenv->vars[0],
      _var0);
}
static void _V10_Dloop_D86_k59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D86_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.-.15 7 14) (close _V10_Dloop_D86_k60) (bruijn ##.len.88 3 2) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 14)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D86_k60, env)}),
      upenv->up->up->vars[2],
      VEncodeInt(1l));
}
static void _V10_Dloop_D86_k58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D86_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.18 6 17) (close _V10_Dloop_D86_k59) (bruijn ##.lst.87 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 17)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D86_k59, env)}),
      upenv->up->vars[1]);
}
static void _V10_Dloop_D86_k57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D86_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.227 0 0) ((bruijn ##.k.226 1 0) '()) ((bruijn ##.car.19 5 18) (close _V10_Dloop_D86_k58) (bruijn ##.lst.87 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 18)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D86_k58, env)}),
      upenv->vars[1]);
}
}
static void _V10_Dloop_D86_lambda16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D86_lambda16, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.eq?.16 4 15) (close _V10_Dloop_D86_k57) (bruijn ##.len.88 0 2) (bruijn ##.i.85 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[15]), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D86_k57, env)}),
      _var2,
      upenv->up->vars[2]);
}
static void _V10_Ddrop__right_D30_k62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddrop__right_D30_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.86 1 0) (bruijn ##.k.225 2 0) (bruijn ##.lst.84 2 1) (bruijn ##.x.232 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 3,
      upenv->up->vars[0],
      upenv->up->vars[1],
      _var0);
}
static void _V10_Ddrop__right_D30_lambda15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddrop__right_D30_lambda15, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (letrec 1 ((close _V10_Dloop_D86_lambda16)) ((bruijn ##.my-num-pairs.24 2 0) (close _V10_Ddrop__right_D30_k62) (bruijn ##.lst.84 1 1)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D86_lambda16, env)});
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddrop__right_D30_k62, env)}),
      upenv->vars[1]);
    }
}
static void _V10_Dsplit__at_D31_k65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsplit__at_D31_k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.split-at.31 5 7) (bruijn ##.k.235 2 0) (bruijn ##.x.236 1 0) (bruijn ##.x.237 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 7)), 3,
      upenv->up->vars[0],
      upenv->vars[0],
      _var0);
}
static void _V10_Dsplit__at_D31_k64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsplit__at_D31_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.-.15 5 14) (close _V10_Dsplit__at_D31_k65) (bruijn ##.i.90 3 2) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 14)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsplit__at_D31_k65, env)}),
      upenv->up->up->vars[2],
      VEncodeInt(1l));
}
static void _V10_Dsplit__at_D31_lambda18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsplit__at_D31_lambda18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.18 4 17) (close _V10_Dsplit__at_D31_k64) (bruijn ##.lst.89 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[17]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsplit__at_D31_k64, env)}),
      upenv->up->vars[1]);
}
static void _V10_Dsplit__at_D31_k67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsplit__at_D31_k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.values.11 6 10) (bruijn ##.k.238 2 0) (bruijn ##.x.239 0 0) (bruijn ##.d.92 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 10)), 3,
      upenv->up->vars[0],
      _var0,
      upenv->up->vars[2]);
}
static void _V10_Dsplit__at_D31_k66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsplit__at_D31_k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.20 5 19) (close _V10_Dsplit__at_D31_k67) (bruijn ##.x.240 0 0) (bruijn ##.t.91 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 19)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsplit__at_D31_k67, env)}),
      _var0,
      upenv->vars[1]);
}
static void _V10_Dsplit__at_D31_lambda19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsplit__at_D31_lambda19, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.car.19 4 18) (close _V10_Dsplit__at_D31_k66) (bruijn ##.lst.89 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[18]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsplit__at_D31_k66, env)}),
      upenv->up->vars[1]);
}
static void _V10_Dsplit__at_D31_k63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsplit__at_D31_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.234 0 0) ((bruijn ##.values.11 3 10) (bruijn ##.k.233 1 0) '() (bruijn ##.lst.89 1 1)) ((bruijn ##.call-with-values.10 3 9) (bruijn ##.k.233 1 0) (close _V10_Dsplit__at_D31_lambda18) (close _V10_Dsplit__at_D31_lambda19)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[10]), 3,
      upenv->vars[0],
      VNULL,
      upenv->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[9]), 3,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsplit__at_D31_lambda18, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsplit__at_D31_lambda19, env)}));
}
}
static void _V10_Dsplit__at_D31_lambda17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsplit__at_D31_lambda17, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.eq?.16 2 15) (close _V10_Dsplit__at_D31_k63) (bruijn ##.i.90 0 2) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[15]), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsplit__at_D31_k63, env)}),
      _var2,
      VEncodeInt(0l));
}
static void _V10_Dfold_D32_k71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfold_D32_k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.fold.32 5 8) (bruijn ##.k.241 4 0) (bruijn ##.kons.93 4 1) (bruijn ##.x.243 1 0) (bruijn ##.x.244 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 8)), 4,
      upenv->up->up->up->vars[0],
      upenv->up->up->up->vars[1],
      upenv->vars[0],
      _var0);
}
static void _V10_Dfold_D32_k70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfold_D32_k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.18 5 17) (close _V10_Dfold_D32_k71) (bruijn ##.ks.95 3 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 17)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfold_D32_k71, env)}),
      upenv->up->up->vars[3]);
}
static void _V10_Dfold_D32_k69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfold_D32_k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.kons.93 2 1) (close _V10_Dfold_D32_k70) (bruijn ##.x.245 0 0) (bruijn ##.knil.94 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[1]), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfold_D32_k70, env)}),
      _var0,
      upenv->up->vars[2]);
}
static void _V10_Dfold_D32_k68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfold_D32_k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.242 0 0) ((bruijn ##.k.241 1 0) (bruijn ##.knil.94 1 2)) ((bruijn ##.car.19 3 18) (close _V10_Dfold_D32_k69) (bruijn ##.ks.95 1 3)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      upenv->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[18]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfold_D32_k69, env)}),
      upenv->vars[3]);
}
}
static void _V10_Dfold_D32_lambda20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfold_D32_lambda20, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn ##.null?.22 2 21) (close _V10_Dfold_D32_k68) (bruijn ##.ks.95 0 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[21]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfold_D32_k68, env)}),
      _var3);
}
static void _V10_Dfold__right_D33_k75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfold__right_D33_k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kons.96 4 1) (bruijn ##.k.246 4 0) (bruijn ##.x.248 2 0) (bruijn ##.x.249 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[1]), 3,
      upenv->up->up->up->vars[0],
      upenv->up->vars[0],
      _var0);
}
static void _V10_Dfold__right_D33_k74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfold__right_D33_k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.fold-right.33 4 9) (close _V10_Dfold__right_D33_k75) (bruijn ##.kons.96 3 1) (bruijn ##.knil.97 3 2) (bruijn ##.x.250 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[9]), 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfold__right_D33_k75, env)}),
      upenv->up->up->vars[1],
      upenv->up->up->vars[2],
      _var0);
}
static void _V10_Dfold__right_D33_k73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfold__right_D33_k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.18 4 17) (close _V10_Dfold__right_D33_k74) (bruijn ##.ks.98 2 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[17]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfold__right_D33_k74, env)}),
      upenv->up->vars[3]);
}
static void _V10_Dfold__right_D33_k72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfold__right_D33_k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.247 0 0) ((bruijn ##.k.246 1 0) (bruijn ##.knil.97 1 2)) ((bruijn ##.car.19 3 18) (close _V10_Dfold__right_D33_k73) (bruijn ##.ks.98 1 3)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      upenv->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[18]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfold__right_D33_k73, env)}),
      upenv->vars[3]);
}
}
static void _V10_Dfold__right_D33_lambda21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfold__right_D33_lambda21, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn ##.null?.22 2 21) (close _V10_Dfold__right_D33_k72) (bruijn ##.ks.98 0 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[21]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfold__right_D33_k72, env)}),
      _var3);
}
static void _V10_Dconcatenate_D34_k79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dconcatenate_D34_k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.append.3 6 2) (bruijn ##.k.251 4 0) (bruijn ##.x.253 2 0) (bruijn ##.x.254 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 2)), 3,
      upenv->up->up->up->vars[0],
      upenv->up->vars[0],
      _var0);
}
static void _V10_Dconcatenate_D34_k78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dconcatenate_D34_k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.concatenate.34 4 10) (close _V10_Dconcatenate_D34_k79) (bruijn ##.x.255 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[10]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dconcatenate_D34_k79, env)}),
      _var0);
}
static void _V10_Dconcatenate_D34_k77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dconcatenate_D34_k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.18 4 17) (close _V10_Dconcatenate_D34_k78) (bruijn ##.lst-of-lsts.99 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[17]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dconcatenate_D34_k78, env)}),
      upenv->up->vars[1]);
}
static void _V10_Dconcatenate_D34_k76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dconcatenate_D34_k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.252 0 0) ((bruijn ##.k.251 1 0) '()) ((bruijn ##.car.19 3 18) (close _V10_Dconcatenate_D34_k77) (bruijn ##.lst-of-lsts.99 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[18]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dconcatenate_D34_k77, env)}),
      upenv->vars[1]);
}
}
static void _V10_Dconcatenate_D34_lambda22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dconcatenate_D34_lambda22, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.null?.22 2 21) (close _V10_Dconcatenate_D34_k76) (bruijn ##.lst-of-lsts.99 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[21]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dconcatenate_D34_k76, env)}),
      _var1);
}
static void _V10_Dzip_D35_lambda23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, ...) {
 if(argc < 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dzip_D35_lambda23, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
  // ((bruijn ##.apply.4 2 3) (bruijn ##.k.256 0 0) (bruijn ##.map.9 2 8) (bruijn ##.list.5 2 4) (bruijn ##.lsts.100 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[3]), 4,
      _var0,
      upenv->up->vars[8],
      upenv->up->vars[4],
      _varargs);
}
static void _V10_Dunzip1_D36_lambda24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunzip1_D36_lambda24, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.map.9 2 8) (bruijn ##.k.257 0 0) (bruijn ##.car.19 2 18) (bruijn ##.lst.101 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[8]), 3,
      _var0,
      upenv->up->vars[18],
      _var1);
}
static void _V10_Dunzip2_D37_k81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunzip2_D37_k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.values.11 4 10) (bruijn ##.k.258 2 0) (bruijn ##.x.259 1 0) (bruijn ##.x.260 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[10]), 3,
      upenv->up->vars[0],
      upenv->vars[0],
      _var0);
}
static void _V10_Dunzip2_D37_k80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunzip2_D37_k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.9 3 8) (close _V10_Dunzip2_D37_k81) (bruijn ##.cadr.6 3 5) (bruijn ##.lst.102 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[8]), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunzip2_D37_k81, env)}),
      upenv->up->up->vars[5],
      upenv->vars[1]);
}
static void _V10_Dunzip2_D37_lambda25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunzip2_D37_lambda25, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.map.9 2 8) (close _V10_Dunzip2_D37_k80) (bruijn ##.car.19 2 18) (bruijn ##.lst.102 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[8]), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunzip2_D37_k80, env)}),
      upenv->up->vars[18],
      _var1);
}
static void _V10_Dunzip3_D38_k84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunzip3_D38_k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.values.11 5 10) (bruijn ##.k.261 3 0) (bruijn ##.x.262 2 0) (bruijn ##.x.263 1 0) (bruijn ##.x.264 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 10)), 4,
      upenv->up->up->vars[0],
      upenv->up->vars[0],
      upenv->vars[0],
      _var0);
}
static void _V10_Dunzip3_D38_k83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunzip3_D38_k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.9 4 8) (close _V10_Dunzip3_D38_k84) (bruijn ##.caddr.7 4 6) (bruijn ##.lst.103 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[8]), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunzip3_D38_k84, env)}),
      upenv->up->up->up->vars[6],
      upenv->up->vars[1]);
}
static void _V10_Dunzip3_D38_k82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunzip3_D38_k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.9 3 8) (close _V10_Dunzip3_D38_k83) (bruijn ##.cadr.6 3 5) (bruijn ##.lst.103 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[8]), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunzip3_D38_k83, env)}),
      upenv->up->up->vars[5],
      upenv->vars[1]);
}
static void _V10_Dunzip3_D38_lambda26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunzip3_D38_lambda26, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.map.9 2 8) (close _V10_Dunzip3_D38_k82) (bruijn ##.car.19 2 18) (bruijn ##.lst.103 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[8]), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunzip3_D38_k82, env)}),
      upenv->up->vars[18],
      _var1);
}
static void _V10_Dunzip4_D39_k88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunzip4_D39_k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.values.11 6 10) (bruijn ##.k.265 4 0) (bruijn ##.x.266 3 0) (bruijn ##.x.267 2 0) (bruijn ##.x.268 1 0) (bruijn ##.x.269 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 10)), 5,
      upenv->up->up->up->vars[0],
      upenv->up->up->vars[0],
      upenv->up->vars[0],
      upenv->vars[0],
      _var0);
}
static void _V10_Dunzip4_D39_k87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunzip4_D39_k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.9 5 8) (close _V10_Dunzip4_D39_k88) (bruijn ##.cadddr.8 5 7) (bruijn ##.lst.104 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 8)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunzip4_D39_k88, env)}),
      VGetArg(upenv, 5-1, 7),
      upenv->up->up->vars[1]);
}
static void _V10_Dunzip4_D39_k86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunzip4_D39_k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.9 4 8) (close _V10_Dunzip4_D39_k87) (bruijn ##.caddr.7 4 6) (bruijn ##.lst.104 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[8]), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunzip4_D39_k87, env)}),
      upenv->up->up->up->vars[6],
      upenv->up->vars[1]);
}
static void _V10_Dunzip4_D39_k85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunzip4_D39_k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.9 3 8) (close _V10_Dunzip4_D39_k86) (bruijn ##.cadr.6 3 5) (bruijn ##.lst.104 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[8]), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunzip4_D39_k86, env)}),
      upenv->up->up->vars[5],
      upenv->vars[1]);
}
static void _V10_Dunzip4_D39_lambda27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunzip4_D39_lambda27, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.map.9 2 8) (close _V10_Dunzip4_D39_k85) (bruijn ##.car.19 2 18) (bruijn ##.lst.104 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[8]), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunzip4_D39_k85, env)}),
      upenv->up->vars[18],
      _var1);
}
static void _V10_Dunzip5_D40_k93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunzip5_D40_k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.values.11 7 10) (bruijn ##.k.270 5 0) (bruijn ##.x.271 4 0) (bruijn ##.x.272 3 0) (bruijn ##.x.273 2 0) (bruijn ##.x.274 1 0) (bruijn ##.x.275 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 10)), 6,
      VGetArg(upenv, 5-1, 0),
      upenv->up->up->up->vars[0],
      upenv->up->up->vars[0],
      upenv->up->vars[0],
      upenv->vars[0],
      _var0);
}
static void _V10_Dunzip5_D40_k94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunzip5_D40_k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.cadddr.8 8 7) (bruijn ##.k.276 1 0) (bruijn ##.x.277 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 7)), 2,
      upenv->vars[0],
      _var0);
}
static void _V10_Dunzip5_D40_lambda29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunzip5_D40_lambda29, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.cdr.18 7 17) (close _V10_Dunzip5_D40_k94) (bruijn ##.e.106 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 17)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunzip5_D40_k94, env)}),
      _var1);
}
static void _V10_Dunzip5_D40_k92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunzip5_D40_k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.9 6 8) (close _V10_Dunzip5_D40_k93) (close _V10_Dunzip5_D40_lambda29) (bruijn ##.lst.105 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 8)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunzip5_D40_k93, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunzip5_D40_lambda29, env)}),
      upenv->up->up->up->vars[1]);
}
static void _V10_Dunzip5_D40_k91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunzip5_D40_k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.9 5 8) (close _V10_Dunzip5_D40_k92) (bruijn ##.cadddr.8 5 7) (bruijn ##.lst.105 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 8)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunzip5_D40_k92, env)}),
      VGetArg(upenv, 5-1, 7),
      upenv->up->up->vars[1]);
}
static void _V10_Dunzip5_D40_k90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunzip5_D40_k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.9 4 8) (close _V10_Dunzip5_D40_k91) (bruijn ##.caddr.7 4 6) (bruijn ##.lst.105 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[8]), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunzip5_D40_k91, env)}),
      upenv->up->up->up->vars[6],
      upenv->up->vars[1]);
}
static void _V10_Dunzip5_D40_k89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunzip5_D40_k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.9 3 8) (close _V10_Dunzip5_D40_k90) (bruijn ##.cadr.6 3 5) (bruijn ##.lst.105 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[8]), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunzip5_D40_k90, env)}),
      upenv->up->up->vars[5],
      upenv->vars[1]);
}
static void _V10_Dunzip5_D40_lambda28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunzip5_D40_lambda28, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.map.9 2 8) (close _V10_Dunzip5_D40_k89) (bruijn ##.car.19 2 18) (bruijn ##.lst.105 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[8]), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunzip5_D40_k89, env)}),
      upenv->up->vars[18],
      _var1);
}
static void _V10_Dloop_D109_k98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D109_k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.284 1 0) ((bruijn ##.k.285 0 0) 1) ((bruijn ##.k.285 0 0) 0))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(1l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(0l));
}
}
static void _V10_Dloop_D109_k101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D109_k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.109 7 0) (bruijn ##.k.279 6 0) (bruijn ##.x.281 1 0) (bruijn ##.pred.111 6 2) (bruijn ##.x.282 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 0)), 4,
      VGetArg(upenv, 6-1, 0),
      upenv->vars[0],
      VGetArg(upenv, 6-1, 2),
      _var0);
}
static void _V10_Dloop_D109_k100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D109_k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.18 9 17) (close _V10_Dloop_D109_k101) (bruijn ##.lst.112 5 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 17)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D109_k101, env)}),
      VGetArg(upenv, 5-1, 3));
}
static void _V10_Dloop_D109_k99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D109_k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.+.13 8 12) (close _V10_Dloop_D109_k100) (bruijn ##.n.110 4 1) (bruijn ##.x.283 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 12)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D109_k100, env)}),
      upenv->up->up->up->vars[1],
      _var0);
}
static void _V10_Dloop_D109_k97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D109_k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D109_k98) (close _V10_Dloop_D109_k99))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D109_k98, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D109_k99, env)}));
}
static void _V10_Dloop_D109_k96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D109_k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.pred.111 2 2) (close _V10_Dloop_D109_k97) (bruijn ##.x.286 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[2]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D109_k97, env)}),
      _var0);
}
static void _V10_Dloop_D109_k95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D109_k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.280 0 0) ((bruijn ##.k.279 1 0) (bruijn ##.n.110 1 1)) ((bruijn ##.car.19 5 18) (close _V10_Dloop_D109_k96) (bruijn ##.lst.112 1 3)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      upenv->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 18)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D109_k96, env)}),
      upenv->vars[3]);
}
}
static void _V10_Dloop_D109_lambda31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D109_lambda31, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn ##.null?.22 4 21) (close _V10_Dloop_D109_k95) (bruijn ##.lst.112 0 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[21]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D109_k95, env)}),
      _var3);
}
static void _V10_Dcount_D41_lambda30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount_D41_lambda30, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (letrec 1 ((close _V10_Dloop_D109_lambda31)) ((bruijn ##.loop.109 0 0) (bruijn ##.k.278 1 0) 0 (bruijn ##.pred.107 1 1) (bruijn ##.lst.108 1 2)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D109_lambda31, env)});
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, env->vars[0]), 4,
      upenv->vars[0],
      VEncodeInt(0l),
      upenv->vars[1],
      upenv->vars[2]);
    }
}
static void _V10_Dfilter_D42_k107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfilter_D42_k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.cons.20 8 19) (bruijn ##.k.287 6 0) (bruijn ##.x.290 2 0) (bruijn ##.x.291 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 19)), 3,
      VGetArg(upenv, 6-1, 0),
      upenv->up->vars[0],
      _var0);
}
static void _V10_Dfilter_D42_k106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfilter_D42_k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.filter.42 6 18) (close _V10_Dfilter_D42_k107) (bruijn ##.pred.113 5 1) (bruijn ##.x.292 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 18)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfilter_D42_k107, env)}),
      VGetArg(upenv, 5-1, 1),
      _var0);
}
static void _V10_Dfilter_D42_k105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfilter_D42_k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.18 6 17) (close _V10_Dfilter_D42_k106) (bruijn ##.lst.114 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 17)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfilter_D42_k106, env)}),
      upenv->up->up->up->vars[2]);
}
static void _V10_Dfilter_D42_k108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfilter_D42_k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.filter.42 5 18) (bruijn ##.k.287 4 0) (bruijn ##.pred.113 4 1) (bruijn ##.x.293 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 18)), 3,
      upenv->up->up->up->vars[0],
      upenv->up->up->up->vars[1],
      _var0);
}
static void _V10_Dfilter_D42_k104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfilter_D42_k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.289 0 0) ((bruijn ##.car.19 5 18) (close _V10_Dfilter_D42_k105) (bruijn ##.lst.114 3 2)) ((bruijn ##.cdr.18 5 17) (close _V10_Dfilter_D42_k108) (bruijn ##.lst.114 3 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 18)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfilter_D42_k105, env)}),
      upenv->up->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 17)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfilter_D42_k108, env)}),
      upenv->up->up->vars[2]);
}
}
static void _V10_Dfilter_D42_k103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfilter_D42_k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.pred.113 2 1) (close _V10_Dfilter_D42_k104) (bruijn ##.x.294 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[1]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfilter_D42_k104, env)}),
      _var0);
}
static void _V10_Dfilter_D42_k102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfilter_D42_k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.288 0 0) ((bruijn ##.k.287 1 0) (bruijn ##.lst.114 1 2)) ((bruijn ##.car.19 3 18) (close _V10_Dfilter_D42_k103) (bruijn ##.lst.114 1 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      upenv->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[18]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfilter_D42_k103, env)}),
      upenv->vars[2]);
}
}
static void _V10_Dfilter_D42_lambda32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfilter_D42_lambda32, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.null?.22 2 21) (close _V10_Dfilter_D42_k102) (bruijn ##.lst.114 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[21]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfilter_D42_k102, env)}),
      _var2);
}
static void _V10_Dpartition_D43_k110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpartition_D43_k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.partition.43 4 19) (bruijn ##.k.297 1 0) (bruijn ##.pred.115 3 1) (bruijn ##.x.298 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[19]), 3,
      upenv->vars[0],
      upenv->up->up->vars[1],
      _var0);
}
static void _V10_Dpartition_D43_lambda34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpartition_D43_lambda34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.18 4 17) (close _V10_Dpartition_D43_k110) (bruijn ##.lst.116 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[17]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpartition_D43_k110, env)}),
      upenv->up->vars[2]);
}
static void _V10_Dpartition_D43_k114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpartition_D43_k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.values.11 8 10) (bruijn ##.k.299 4 0) (bruijn ##.x.301 0 0) (bruijn ##.r.118 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 10)), 3,
      upenv->up->up->up->vars[0],
      _var0,
      upenv->up->up->up->vars[2]);
}
static void _V10_Dpartition_D43_k113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpartition_D43_k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.20 7 19) (close _V10_Dpartition_D43_k114) (bruijn ##.x.302 0 0) (bruijn ##.l.117 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 19)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpartition_D43_k114, env)}),
      _var0,
      upenv->up->up->vars[1]);
}
static void _V10_Dpartition_D43_k116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpartition_D43_k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.values.11 8 10) (bruijn ##.k.299 4 0) (bruijn ##.l.117 4 1) (bruijn ##.x.303 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 10)), 3,
      upenv->up->up->up->vars[0],
      upenv->up->up->up->vars[1],
      _var0);
}
static void _V10_Dpartition_D43_k115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpartition_D43_k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.20 7 19) (close _V10_Dpartition_D43_k116) (bruijn ##.x.304 0 0) (bruijn ##.r.118 3 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 19)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpartition_D43_k116, env)}),
      _var0,
      upenv->up->up->vars[2]);
}
static void _V10_Dpartition_D43_k112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpartition_D43_k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.300 0 0) ((bruijn ##.car.19 6 18) (close _V10_Dpartition_D43_k113) (bruijn ##.lst.116 4 2)) ((bruijn ##.car.19 6 18) (close _V10_Dpartition_D43_k115) (bruijn ##.lst.116 4 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 18)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpartition_D43_k113, env)}),
      upenv->up->up->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 18)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpartition_D43_k115, env)}),
      upenv->up->up->up->vars[2]);
}
}
static void _V10_Dpartition_D43_k111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpartition_D43_k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.pred.115 3 1) (close _V10_Dpartition_D43_k112) (bruijn ##.x.305 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[1]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpartition_D43_k112, env)}),
      _var0);
}
static void _V10_Dpartition_D43_lambda35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpartition_D43_lambda35, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.car.19 4 18) (close _V10_Dpartition_D43_k111) (bruijn ##.lst.116 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[18]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpartition_D43_k111, env)}),
      upenv->up->vars[2]);
}
static void _V10_Dpartition_D43_k109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpartition_D43_k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.296 0 0) ((bruijn ##.values.11 3 10) (bruijn ##.k.295 1 0) '() '()) ((bruijn ##.call-with-values.10 3 9) (bruijn ##.k.295 1 0) (close _V10_Dpartition_D43_lambda34) (close _V10_Dpartition_D43_lambda35)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[10]), 3,
      upenv->vars[0],
      VNULL,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[9]), 3,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpartition_D43_lambda34, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpartition_D43_lambda35, env)}));
}
}
static void _V10_Dpartition_D43_lambda33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpartition_D43_lambda33, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.null?.22 2 21) (close _V10_Dpartition_D43_k109) (bruijn ##.lst.116 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[21]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpartition_D43_k109, env)}),
      _var2);
}
static void _V10_Dtake__while_D44_k120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtake__while_D44_k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.not.12 6 11) (bruijn ##.k.312 2 0) (bruijn ##.x.313 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 11)), 2,
      upenv->up->vars[0],
      _var0);
}
static void _V10_Dtake__while_D44_k119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtake__while_D44_k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.pred.119 3 1) (close _V10_Dtake__while_D44_k120) (bruijn ##.x.314 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[1]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtake__while_D44_k120, env)}),
      _var0);
}
static void _V10_Dtake__while_D44_k118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtake__while_D44_k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.311 1 0) ((bruijn ##.k.312 0 0) (bruijn ##.p.311 1 0)) ((bruijn ##.car.19 4 18) (close _V10_Dtake__while_D44_k119) (bruijn ##.lst.120 2 2)))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[18]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtake__while_D44_k119, env)}),
      upenv->up->vars[2]);
}
}
static void _V10_Dtake__while_D44_k124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtake__while_D44_k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.cons.20 7 19) (bruijn ##.k.306 5 0) (bruijn ##.x.308 2 0) (bruijn ##.x.309 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 19)), 3,
      VGetArg(upenv, 5-1, 0),
      upenv->up->vars[0],
      _var0);
}
static void _V10_Dtake__while_D44_k123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtake__while_D44_k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.take-while.44 5 20) (close _V10_Dtake__while_D44_k124) (bruijn ##.pred.119 4 1) (bruijn ##.x.310 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 20)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtake__while_D44_k124, env)}),
      upenv->up->up->up->vars[1],
      _var0);
}
static void _V10_Dtake__while_D44_k122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtake__while_D44_k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.18 5 17) (close _V10_Dtake__while_D44_k123) (bruijn ##.lst.120 3 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 17)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtake__while_D44_k123, env)}),
      upenv->up->up->vars[2]);
}
static void _V10_Dtake__while_D44_k121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtake__while_D44_k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.307 0 0) ((bruijn ##.k.306 2 0) '()) ((bruijn ##.car.19 4 18) (close _V10_Dtake__while_D44_k122) (bruijn ##.lst.120 2 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[18]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtake__while_D44_k122, env)}),
      upenv->up->vars[2]);
}
}
static void _V10_Dtake__while_D44_k117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtake__while_D44_k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dtake__while_D44_k118) (close _V10_Dtake__while_D44_k121))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dtake__while_D44_k118, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtake__while_D44_k121, env)}));
}
static void _V10_Dtake__while_D44_lambda36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtake__while_D44_lambda36, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.null?.22 2 21) (close _V10_Dtake__while_D44_k117) (bruijn ##.lst.120 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[21]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtake__while_D44_k117, env)}),
      _var2);
}
static void _V10_Ddrop__while_D45_k128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddrop__while_D45_k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.not.12 6 11) (bruijn ##.k.319 2 0) (bruijn ##.x.320 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 11)), 2,
      upenv->up->vars[0],
      _var0);
}
static void _V10_Ddrop__while_D45_k127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddrop__while_D45_k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.pred.121 3 1) (close _V10_Ddrop__while_D45_k128) (bruijn ##.x.321 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[1]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddrop__while_D45_k128, env)}),
      _var0);
}
static void _V10_Ddrop__while_D45_k126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddrop__while_D45_k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.318 1 0) ((bruijn ##.k.319 0 0) (bruijn ##.p.318 1 0)) ((bruijn ##.car.19 4 18) (close _V10_Ddrop__while_D45_k127) (bruijn ##.lst.122 2 2)))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[18]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddrop__while_D45_k127, env)}),
      upenv->up->vars[2]);
}
}
static void _V10_Ddrop__while_D45_k130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddrop__while_D45_k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.drop-while.45 4 21) (bruijn ##.k.315 3 0) (bruijn ##.pred.121 3 1) (bruijn ##.x.317 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[21]), 3,
      upenv->up->up->vars[0],
      upenv->up->up->vars[1],
      _var0);
}
static void _V10_Ddrop__while_D45_k129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddrop__while_D45_k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.316 0 0) ((bruijn ##.k.315 2 0) (bruijn ##.lst.122 2 2)) ((bruijn ##.cdr.18 4 17) (close _V10_Ddrop__while_D45_k130) (bruijn ##.lst.122 2 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      upenv->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[17]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddrop__while_D45_k130, env)}),
      upenv->up->vars[2]);
}
}
static void _V10_Ddrop__while_D45_k125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddrop__while_D45_k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Ddrop__while_D45_k126) (close _V10_Ddrop__while_D45_k129))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddrop__while_D45_k126, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddrop__while_D45_k129, env)}));
}
static void _V10_Ddrop__while_D45_lambda37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddrop__while_D45_lambda37, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.null?.22 2 21) (close _V10_Ddrop__while_D45_k125) (bruijn ##.lst.122 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[21]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddrop__while_D45_k125, env)}),
      _var2);
}
static void _V10_Dsplit__while_D46_k134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsplit__while_D46_k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.not.12 6 11) (bruijn ##.k.330 2 0) (bruijn ##.x.331 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 11)), 2,
      upenv->up->vars[0],
      _var0);
}
static void _V10_Dsplit__while_D46_k133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsplit__while_D46_k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.pred.123 3 1) (close _V10_Dsplit__while_D46_k134) (bruijn ##.x.332 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[1]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsplit__while_D46_k134, env)}),
      _var0);
}
static void _V10_Dsplit__while_D46_k132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsplit__while_D46_k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.329 1 0) ((bruijn ##.k.330 0 0) (bruijn ##.p.329 1 0)) ((bruijn ##.car.19 4 18) (close _V10_Dsplit__while_D46_k133) (bruijn ##.lst.124 2 2)))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[18]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsplit__while_D46_k133, env)}),
      upenv->up->vars[2]);
}
}
static void _V10_Dsplit__while_D46_k136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsplit__while_D46_k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.split-while.46 5 22) (bruijn ##.k.324 1 0) (bruijn ##.pred.123 4 1) (bruijn ##.x.325 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 22)), 3,
      upenv->vars[0],
      upenv->up->up->up->vars[1],
      _var0);
}
static void _V10_Dsplit__while_D46_lambda39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsplit__while_D46_lambda39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.18 5 17) (close _V10_Dsplit__while_D46_k136) (bruijn ##.lst.124 3 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 17)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsplit__while_D46_k136, env)}),
      upenv->up->up->vars[2]);
}
static void _V10_Dsplit__while_D46_k138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsplit__while_D46_k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.values.11 7 10) (bruijn ##.k.326 2 0) (bruijn ##.x.327 0 0) (bruijn ##.d.126 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 10)), 3,
      upenv->up->vars[0],
      _var0,
      upenv->up->vars[2]);
}
static void _V10_Dsplit__while_D46_k137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsplit__while_D46_k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.20 6 19) (close _V10_Dsplit__while_D46_k138) (bruijn ##.x.328 0 0) (bruijn ##.t.125 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 19)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsplit__while_D46_k138, env)}),
      _var0,
      upenv->vars[1]);
}
static void _V10_Dsplit__while_D46_lambda40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsplit__while_D46_lambda40, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.car.19 5 18) (close _V10_Dsplit__while_D46_k137) (bruijn ##.lst.124 3 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 18)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsplit__while_D46_k137, env)}),
      upenv->up->up->vars[2]);
}
static void _V10_Dsplit__while_D46_k135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsplit__while_D46_k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.323 0 0) ((bruijn ##.values.11 4 10) (bruijn ##.k.322 2 0) '() (bruijn ##.lst.124 2 2)) ((bruijn ##.call-with-values.10 4 9) (bruijn ##.k.322 2 0) (close _V10_Dsplit__while_D46_lambda39) (close _V10_Dsplit__while_D46_lambda40)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[10]), 3,
      upenv->up->vars[0],
      VNULL,
      upenv->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[9]), 3,
      upenv->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsplit__while_D46_lambda39, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsplit__while_D46_lambda40, env)}));
}
}
static void _V10_Dsplit__while_D46_k131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsplit__while_D46_k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dsplit__while_D46_k132) (close _V10_Dsplit__while_D46_k135))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dsplit__while_D46_k132, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsplit__while_D46_k135, env)}));
}
static void _V10_Dsplit__while_D46_lambda38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsplit__while_D46_lambda38, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.null?.22 2 21) (close _V10_Dsplit__while_D46_k131) (bruijn ##.lst.124 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[21]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsplit__while_D46_k131, env)}),
      _var2);
}
static void _V10_Dany_Q_D47_k142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dany_Q_D47_k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.any?.47 5 23) (bruijn ##.k.333 4 0) (bruijn ##.p.127 4 1) (bruijn ##.x.336 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 23)), 3,
      upenv->up->up->up->vars[0],
      upenv->up->up->up->vars[1],
      _var0);
}
static void _V10_Dany_Q_D47_k141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dany_Q_D47_k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.335 0 0) ((bruijn ##.k.333 3 0) #t) ((bruijn ##.cdr.18 5 17) (close _V10_Dany_Q_D47_k142) (bruijn ##.lst.128 3 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(true));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 17)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dany_Q_D47_k142, env)}),
      upenv->up->up->vars[2]);
}
}
static void _V10_Dany_Q_D47_k140(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dany_Q_D47_k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.p.127 2 1) (close _V10_Dany_Q_D47_k141) (bruijn ##.x.337 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[1]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dany_Q_D47_k141, env)}),
      _var0);
}
static void _V10_Dany_Q_D47_k139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dany_Q_D47_k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.334 0 0) ((bruijn ##.k.333 1 0) #f) ((bruijn ##.car.19 3 18) (close _V10_Dany_Q_D47_k140) (bruijn ##.lst.128 1 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[18]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dany_Q_D47_k140, env)}),
      upenv->vars[2]);
}
}
static void _V10_Dany_Q_D47_lambda41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dany_Q_D47_lambda41, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.null?.22 2 21) (close _V10_Dany_Q_D47_k139) (bruijn ##.p.127 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[21]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dany_Q_D47_k139, env)}),
      _var1);
}
static void _V10_Devery_Q_D48_k143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Devery_Q_D48_k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.not.12 3 11) (bruijn ##.k.338 1 0) (bruijn ##.x.339 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[11]), 2,
      upenv->vars[0],
      _var0);
}
static void _V10_Devery_Q_D48_k144(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Devery_Q_D48_k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.not.12 4 11) (bruijn ##.k.340 1 0) (bruijn ##.x.341 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[11]), 2,
      upenv->vars[0],
      _var0);
}
static void _V10_Devery_Q_D48_lambda43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Devery_Q_D48_lambda43, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.p.129 1 1) (close _V10_Devery_Q_D48_k144) (bruijn ##.e.131 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[1]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Devery_Q_D48_k144, env)}),
      _var1);
}
static void _V10_Devery_Q_D48_lambda42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Devery_Q_D48_lambda42, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.any?.47 1 23) (close _V10_Devery_Q_D48_k143) (close _V10_Devery_Q_D48_lambda43) (bruijn ##.lst.130 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[23]), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Devery_Q_D48_k143, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Devery_Q_D48_lambda43, env)}),
      _var2);
}
static void _V10_Dloop_D134_k149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D134_k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.134 6 0) (bruijn ##.k.343 5 0) (bruijn ##.x.346 1 0) (bruijn ##.x.347 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 0)), 3,
      VGetArg(upenv, 5-1, 0),
      upenv->vars[0],
      _var0);
}
static void _V10_Dloop_D134_k148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D134_k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.18 8 17) (close _V10_Dloop_D134_k149) (bruijn ##.lst.136 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 17)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D134_k149, env)}),
      upenv->up->up->up->vars[2]);
}
static void _V10_Dloop_D134_k147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D134_k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.345 0 0) ((bruijn ##.k.343 3 0) (bruijn ##.i.135 3 1)) ((bruijn ##.+.13 7 12) (close _V10_Dloop_D134_k148) (bruijn ##.i.135 3 1) 1))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      upenv->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 12)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D134_k148, env)}),
      upenv->up->up->vars[1],
      VEncodeInt(1l));
}
}
static void _V10_Dloop_D134_k146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D134_k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.p.132 4 1) (close _V10_Dloop_D134_k147) (bruijn ##.x.348 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[1]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D134_k147, env)}),
      _var0);
}
static void _V10_Dloop_D134_k145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D134_k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.344 0 0) ((bruijn ##.k.343 1 0) #f) ((bruijn ##.car.19 5 18) (close _V10_Dloop_D134_k146) (bruijn ##.lst.136 1 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 18)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D134_k146, env)}),
      upenv->vars[2]);
}
}
static void _V10_Dloop_D134_lambda45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D134_lambda45, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.null?.22 4 21) (close _V10_Dloop_D134_k145) (bruijn ##.p.132 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[21]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D134_k145, env)}),
      upenv->up->vars[1]);
}
static void _V10_Dlist__index_D49_lambda44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlist__index_D49_lambda44, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (letrec 1 ((close _V10_Dloop_D134_lambda45)) ((bruijn ##.loop.134 0 0) (bruijn ##.k.342 1 0) 0 (bruijn ##.lst.133 1 2)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D134_lambda45, env)});
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, env->vars[0]), 3,
      upenv->vars[0],
      VEncodeInt(0l),
      upenv->vars[2]);
    }
}
static void _V10_Dinsert_D50_k154(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinsert_D50_k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.cons.20 7 19) (bruijn ##.k.349 5 0) (bruijn ##.x.351 3 0) (bruijn ##.x.352 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 19)), 3,
      VGetArg(upenv, 5-1, 0),
      upenv->up->up->vars[0],
      _var0);
}
static void _V10_Dinsert_D50_k153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinsert_D50_k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.insert.50 5 26) (close _V10_Dinsert_D50_k154) (bruijn ##.x.353 1 0) (bruijn ##.x.354 0 0) (bruijn ##.x.139 4 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 26)), 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinsert_D50_k154, env)}),
      upenv->vars[0],
      _var0,
      upenv->up->up->up->vars[3]);
}
static void _V10_Dinsert_D50_k152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinsert_D50_k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.-.15 5 14) (close _V10_Dinsert_D50_k153) (bruijn ##.i.138 3 2) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 14)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinsert_D50_k153, env)}),
      upenv->up->up->vars[2],
      VEncodeInt(1l));
}
static void _V10_Dinsert_D50_k151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinsert_D50_k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.18 4 17) (close _V10_Dinsert_D50_k152) (bruijn ##.lst.137 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[17]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinsert_D50_k152, env)}),
      upenv->up->vars[1]);
}
static void _V10_Dinsert_D50_k150(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinsert_D50_k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.350 0 0) ((bruijn ##.cons.20 3 19) (bruijn ##.k.349 1 0) (bruijn ##.x.139 1 3) (bruijn ##.lst.137 1 1)) ((bruijn ##.car.19 3 18) (close _V10_Dinsert_D50_k151) (bruijn ##.lst.137 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[19]), 3,
      upenv->vars[0],
      upenv->vars[3],
      upenv->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[18]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinsert_D50_k151, env)}),
      upenv->vars[1]);
}
}
static void _V10_Dinsert_D50_lambda46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinsert_D50_lambda46, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn ##.=.14 2 13) (close _V10_Dinsert_D50_k150) (bruijn ##.i.138 0 2) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[13]), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinsert_D50_k150, env)}),
      _var2,
      VEncodeInt(0l));
}
static void _V10_Ddelete_D51_k159(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddelete_D51_k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.cons.20 7 19) (bruijn ##.k.355 5 0) (bruijn ##.x.357 3 0) (bruijn ##.x.358 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 19)), 3,
      VGetArg(upenv, 5-1, 0),
      upenv->up->up->vars[0],
      _var0);
}
static void _V10_Ddelete_D51_k158(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddelete_D51_k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.delete.51 5 27) (close _V10_Ddelete_D51_k159) (bruijn ##.x.359 1 0) (bruijn ##.x.360 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 27)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddelete_D51_k159, env)}),
      upenv->vars[0],
      _var0);
}
static void _V10_Ddelete_D51_k157(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddelete_D51_k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.-.15 5 14) (close _V10_Ddelete_D51_k158) (bruijn ##.i.141 3 2) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 14)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddelete_D51_k158, env)}),
      upenv->up->up->vars[2],
      VEncodeInt(1l));
}
static void _V10_Ddelete_D51_k156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddelete_D51_k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.18 4 17) (close _V10_Ddelete_D51_k157) (bruijn ##.lst.140 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[17]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddelete_D51_k157, env)}),
      upenv->up->vars[1]);
}
static void _V10_Ddelete_D51_k155(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddelete_D51_k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.356 0 0) ((bruijn ##.cdr.18 3 17) (bruijn ##.k.355 1 0) (bruijn ##.lst.140 1 1)) ((bruijn ##.car.19 3 18) (close _V10_Ddelete_D51_k156) (bruijn ##.lst.140 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[17]), 2,
      upenv->vars[0],
      upenv->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[18]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddelete_D51_k156, env)}),
      upenv->vars[1]);
}
}
static void _V10_Ddelete_D51_lambda47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddelete_D51_lambda47, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.=.14 2 13) (close _V10_Ddelete_D51_k155) (bruijn ##.i.141 0 2) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[13]), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddelete_D51_k155, env)}),
      _var2,
      VEncodeInt(0l));
}
static void _V10_Dassq__update_D52_k161(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassq__update_D52_k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.cons.20 4 19) (bruijn ##.k.361 2 0) (bruijn ##.x.363 0 0) '())
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[19]), 3,
      upenv->up->vars[0],
      _var0,
      VNULL);
}
static void _V10_Dassq__update_D52_k165(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassq__update_D52_k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.cons.20 7 19) (bruijn ##.k.361 5 0) (bruijn ##.x.365 1 0) (bruijn ##.x.366 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 19)), 3,
      VGetArg(upenv, 5-1, 0),
      upenv->vars[0],
      _var0);
}
static void _V10_Dassq__update_D52_k164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassq__update_D52_k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.18 6 17) (close _V10_Dassq__update_D52_k165) (bruijn ##.lst.142 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 17)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassq__update_D52_k165, env)}),
      upenv->up->up->up->vars[1]);
}
static void _V10_Dassq__update_D52_k168(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassq__update_D52_k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.cons.20 8 19) (bruijn ##.k.361 6 0) (bruijn ##.x.367 2 0) (bruijn ##.x.368 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 19)), 3,
      VGetArg(upenv, 6-1, 0),
      upenv->up->vars[0],
      _var0);
}
static void _V10_Dassq__update_D52_k167(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassq__update_D52_k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.assoc-update.54 6 30) (close _V10_Dassq__update_D52_k168) (bruijn ##.x.369 0 0) (bruijn ##.x.143 5 2) (bruijn ##.val.144 5 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 30)), 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassq__update_D52_k168, env)}),
      _var0,
      VGetArg(upenv, 5-1, 2),
      VGetArg(upenv, 5-1, 3));
}
static void _V10_Dassq__update_D52_k166(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassq__update_D52_k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.18 6 17) (close _V10_Dassq__update_D52_k167) (bruijn ##.lst.142 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 17)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassq__update_D52_k167, env)}),
      upenv->up->up->up->vars[1]);
}
static void _V10_Dassq__update_D52_k163(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassq__update_D52_k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.364 0 0) ((bruijn ##.cons.20 5 19) (close _V10_Dassq__update_D52_k164) (bruijn ##.x.143 3 2) (bruijn ##.val.144 3 3)) ((bruijn ##.car.19 5 18) (close _V10_Dassq__update_D52_k166) (bruijn ##.lst.142 3 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 19)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassq__update_D52_k164, env)}),
      upenv->up->up->vars[2],
      upenv->up->up->vars[3]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 18)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassq__update_D52_k166, env)}),
      upenv->up->up->vars[1]);
}
}
static void _V10_Dassq__update_D52_k162(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassq__update_D52_k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.eq?.16 4 15) (close _V10_Dassq__update_D52_k163) (bruijn ##.x.143 2 2) (bruijn ##.x.370 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[15]), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassq__update_D52_k163, env)}),
      upenv->up->vars[2],
      _var0);
}
static void _V10_Dassq__update_D52_k160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassq__update_D52_k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.362 0 0) ((bruijn ##.cons.20 3 19) (close _V10_Dassq__update_D52_k161) (bruijn ##.x.143 1 2) (bruijn ##.val.144 1 3)) ((bruijn ##.caar.21 3 20) (close _V10_Dassq__update_D52_k162) (bruijn ##.lst.142 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[19]), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassq__update_D52_k161, env)}),
      upenv->vars[2],
      upenv->vars[3]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[20]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassq__update_D52_k162, env)}),
      upenv->vars[1]);
}
}
static void _V10_Dassq__update_D52_lambda48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassq__update_D52_lambda48, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn ##.null?.22 2 21) (close _V10_Dassq__update_D52_k160) (bruijn ##.lst.142 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[21]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassq__update_D52_k160, env)}),
      _var1);
}
static void _V10_Dassv__update_D53_k170(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassv__update_D53_k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.cons.20 4 19) (bruijn ##.k.371 2 0) (bruijn ##.x.373 0 0) '())
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[19]), 3,
      upenv->up->vars[0],
      _var0,
      VNULL);
}
static void _V10_Dassv__update_D53_k174(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassv__update_D53_k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.cons.20 7 19) (bruijn ##.k.371 5 0) (bruijn ##.x.375 1 0) (bruijn ##.x.376 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 19)), 3,
      VGetArg(upenv, 5-1, 0),
      upenv->vars[0],
      _var0);
}
static void _V10_Dassv__update_D53_k173(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassv__update_D53_k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.18 6 17) (close _V10_Dassv__update_D53_k174) (bruijn ##.lst.145 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 17)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassv__update_D53_k174, env)}),
      upenv->up->up->up->vars[1]);
}
static void _V10_Dassv__update_D53_k177(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassv__update_D53_k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.cons.20 8 19) (bruijn ##.k.371 6 0) (bruijn ##.x.377 2 0) (bruijn ##.x.378 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 19)), 3,
      VGetArg(upenv, 6-1, 0),
      upenv->up->vars[0],
      _var0);
}
static void _V10_Dassv__update_D53_k176(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassv__update_D53_k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.assoc-update.54 6 30) (close _V10_Dassv__update_D53_k177) (bruijn ##.x.379 0 0) (bruijn ##.x.146 5 2) (bruijn ##.val.147 5 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 30)), 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassv__update_D53_k177, env)}),
      _var0,
      VGetArg(upenv, 5-1, 2),
      VGetArg(upenv, 5-1, 3));
}
static void _V10_Dassv__update_D53_k175(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassv__update_D53_k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.18 6 17) (close _V10_Dassv__update_D53_k176) (bruijn ##.lst.145 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 17)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassv__update_D53_k176, env)}),
      upenv->up->up->up->vars[1]);
}
static void _V10_Dassv__update_D53_k172(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassv__update_D53_k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.374 0 0) ((bruijn ##.cons.20 5 19) (close _V10_Dassv__update_D53_k173) (bruijn ##.x.146 3 2) (bruijn ##.val.147 3 3)) ((bruijn ##.car.19 5 18) (close _V10_Dassv__update_D53_k175) (bruijn ##.lst.145 3 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 19)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassv__update_D53_k173, env)}),
      upenv->up->up->vars[2],
      upenv->up->up->vars[3]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 18)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassv__update_D53_k175, env)}),
      upenv->up->up->vars[1]);
}
}
static void _V10_Dassv__update_D53_k171(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassv__update_D53_k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.eqv?.17 4 16) (close _V10_Dassv__update_D53_k172) (bruijn ##.x.146 2 2) (bruijn ##.x.380 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[16]), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassv__update_D53_k172, env)}),
      upenv->up->vars[2],
      _var0);
}
static void _V10_Dassv__update_D53_k169(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassv__update_D53_k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.372 0 0) ((bruijn ##.cons.20 3 19) (close _V10_Dassv__update_D53_k170) (bruijn ##.x.146 1 2) (bruijn ##.val.147 1 3)) ((bruijn ##.caar.21 3 20) (close _V10_Dassv__update_D53_k171) (bruijn ##.lst.145 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[19]), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassv__update_D53_k170, env)}),
      upenv->vars[2],
      upenv->vars[3]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[20]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassv__update_D53_k171, env)}),
      upenv->vars[1]);
}
}
static void _V10_Dassv__update_D53_lambda49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassv__update_D53_lambda49, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn ##.null?.22 2 21) (close _V10_Dassv__update_D53_k169) (bruijn ##.lst.145 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[21]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassv__update_D53_k169, env)}),
      _var1);
}
static void _V10_Dassoc__update_D54_k179(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassoc__update_D54_k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.cons.20 4 19) (bruijn ##.k.382 2 0) (bruijn ##.x.384 0 0) '())
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[19]), 3,
      upenv->up->vars[0],
      _var0,
      VNULL);
}
static void _V10_Dassoc__update_D54_k183(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassoc__update_D54_k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.cons.20 7 19) (bruijn ##.k.382 5 0) (bruijn ##.x.386 1 0) (bruijn ##.x.387 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 19)), 3,
      VGetArg(upenv, 5-1, 0),
      upenv->vars[0],
      _var0);
}
static void _V10_Dassoc__update_D54_k182(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassoc__update_D54_k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.18 6 17) (close _V10_Dassoc__update_D54_k183) (bruijn ##.lst.151 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 17)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassoc__update_D54_k183, env)}),
      upenv->up->up->up->vars[1]);
}
static void _V10_Dassoc__update_D54_k186(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassoc__update_D54_k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.cons.20 8 19) (bruijn ##.k.382 6 0) (bruijn ##.x.388 2 0) (bruijn ##.x.389 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 19)), 3,
      VGetArg(upenv, 6-1, 0),
      upenv->up->vars[0],
      _var0);
}
static void _V10_Dassoc__update_D54_k185(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassoc__update_D54_k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.assoc-update.54 6 30) (close _V10_Dassoc__update_D54_k186) (bruijn ##.x.390 0 0) (bruijn ##.x.152 5 2) (bruijn ##.val.153 5 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 30)), 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassoc__update_D54_k186, env)}),
      _var0,
      VGetArg(upenv, 5-1, 2),
      VGetArg(upenv, 5-1, 3));
}
static void _V10_Dassoc__update_D54_k184(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassoc__update_D54_k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.18 6 17) (close _V10_Dassoc__update_D54_k185) (bruijn ##.lst.151 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 17)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassoc__update_D54_k185, env)}),
      upenv->up->up->up->vars[1]);
}
static void _V10_Dassoc__update_D54_k181(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassoc__update_D54_k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.385 0 0) ((bruijn ##.cons.20 5 19) (close _V10_Dassoc__update_D54_k182) (bruijn ##.x.152 3 2) (bruijn ##.val.153 3 3)) ((bruijn ##.car.19 5 18) (close _V10_Dassoc__update_D54_k184) (bruijn ##.lst.151 3 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 19)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassoc__update_D54_k182, env)}),
      upenv->up->up->vars[2],
      upenv->up->up->vars[3]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 18)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassoc__update_D54_k184, env)}),
      upenv->up->up->vars[1]);
}
}
static void _V10_Dassoc__update_D54_k180(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassoc__update_D54_k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.=.154 2 4) (close _V10_Dassoc__update_D54_k181) (bruijn ##.x.152 2 2) (bruijn ##.x.391 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[4]), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassoc__update_D54_k181, env)}),
      upenv->up->vars[2],
      _var0);
}
static void _V10_Dassoc__update_D54_k178(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassoc__update_D54_k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.383 0 0) ((bruijn ##.cons.20 3 19) (close _V10_Dassoc__update_D54_k179) (bruijn ##.x.152 1 2) (bruijn ##.val.153 1 3)) ((bruijn ##.caar.21 3 20) (close _V10_Dassoc__update_D54_k180) (bruijn ##.lst.151 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[19]), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassoc__update_D54_k179, env)}),
      upenv->vars[2],
      upenv->vars[3]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[20]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassoc__update_D54_k180, env)}),
      upenv->vars[1]);
}
}
__attribute__((used)) static void _V20CaseError__V10_Dassoc__update_D54_lambda50(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V10_Dassoc__update_D54_lambda50 #t (4 ((bruijn ##.assoc-update.54 1 30) (bruijn ##.k.381 0 0) (bruijn ##.lst.148 0 1) (bruijn ##.x.149 0 2) (bruijn ##.val.150 0 3) (bruijn ##.equal?.23 2 22))) (5 ((bruijn ##.null?.22 2 21) (close _V10_Dassoc__update_D54_k178) (bruijn ##.lst.151 0 1))))
 VErrorC(runtime, "Not enough arguments to _V10_Dassoc__update_D54_lambda50, got ~D~N"
 "-- expected 4~N"
 "-- expected 5~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dassoc__update_D54_lambda50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  // ((bruijn ##.assoc-update.54 1 30) (bruijn ##.k.381 0 0) (bruijn ##.lst.148 0 1) (bruijn ##.x.149 0 2) (bruijn ##.val.150 0 3) (bruijn ##.equal?.23 2 22))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[30]), 5,
      _var0,
      _var1,
      _var2,
      _var3,
      upenv->up->vars[22]);
}
__attribute__((used)) static void _V20Case1__V10_Dassoc__update_D54_lambda50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 5, 5, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // ((bruijn ##.null?.22 2 21) (close _V10_Dassoc__update_D54_k178) (bruijn ##.lst.151 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[21]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassoc__update_D54_k178, env)}),
      _var1);
}
void _V10_Dassoc__update_D54_lambda50(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dassoc__update_D54_lambda50, @function\n"
#endif
"_V10_Dassoc__update_D54_lambda50:\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case0__V10_Dassoc__update_D54_lambda50\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case1__V10_Dassoc__update_D54_lambda50\n"
"    jmp _V20CaseError__V10_Dassoc__update_D54_lambda50\n"
);
static void _V0vanity_V0list_V20_lambda2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17, VWORD _var18, VWORD _var19, VWORD _var20, VWORD _var21, VWORD _var22) {
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
  // (letrec 31 ((close _V10_Dmy__num__pairs_D24_lambda3) (close _V10_Diota_D25_lambda5) (close _V10_Dlist__tabulate_D26_lambda9) (close _V10_Dtake_D27_lambda11) (close _V10_Ddrop_D28_lambda12) (close _V10_Dtake__right_D29_lambda13) (close _V10_Ddrop__right_D30_lambda15) (close _V10_Dsplit__at_D31_lambda17) (close _V10_Dfold_D32_lambda20) (close _V10_Dfold__right_D33_lambda21) (close _V10_Dconcatenate_D34_lambda22) (close _V10_Dzip_D35_lambda23) (close _V10_Dunzip1_D36_lambda24) (close _V10_Dunzip2_D37_lambda25) (close _V10_Dunzip3_D38_lambda26) (close _V10_Dunzip4_D39_lambda27) (close _V10_Dunzip5_D40_lambda28) (close _V10_Dcount_D41_lambda30) (close _V10_Dfilter_D42_lambda32) (close _V10_Dpartition_D43_lambda33) (close _V10_Dtake__while_D44_lambda36) (close _V10_Ddrop__while_D45_lambda37) (close _V10_Dsplit__while_D46_lambda38) (close _V10_Dany_Q_D47_lambda41) (close _V10_Devery_Q_D48_lambda42) (close _V10_Dlist__index_D49_lambda44) (close _V10_Dinsert_D50_lambda46) (close _V10_Ddelete_D51_lambda47) (close _V10_Dassq__update_D52_lambda48) (close _V10_Dassv__update_D53_lambda49) (close _V10_Dassoc__update_D54_lambda50)) ((bruijn ##.k.156 27 0) (##inline ##vcore.cons (##inline ##vcore.cons 'iota (bruijn ##.iota.25 0 1)) (##inline ##vcore.cons (##inline ##vcore.cons 'list-tabulate (bruijn ##.list-tabulate.26 0 2)) (##inline ##vcore.cons (##inline ##vcore.cons 'take (bruijn ##.take.27 0 3)) (##inline ##vcore.cons (##inline ##vcore.cons 'drop (bruijn ##.drop.28 0 4)) (##inline ##vcore.cons (##inline ##vcore.cons 'take-right (bruijn ##.take-right.29 0 5)) (##inline ##vcore.cons (##inline ##vcore.cons 'drop-right (bruijn ##.drop-right.30 0 6)) (##inline ##vcore.cons (##inline ##vcore.cons 'split-at (bruijn ##.split-at.31 0 7)) (##inline ##vcore.cons (##inline ##vcore.cons 'fold (bruijn ##.fold.32 0 8)) (##inline ##vcore.cons (##inline ##vcore.cons 'fold-right (bruijn ##.fold-right.33 0 9)) (##inline ##vcore.cons (##inline ##vcore.cons 'concatenate (bruijn ##.concatenate.34 0 10)) (##inline ##vcore.cons (##inline ##vcore.cons 'zip (bruijn ##.zip.35 0 11)) (##inline ##vcore.cons (##inline ##vcore.cons 'unzip1 (bruijn ##.unzip1.36 0 12)) (##inline ##vcore.cons (##inline ##vcore.cons 'unzip2 (bruijn ##.unzip2.37 0 13)) (##inline ##vcore.cons (##inline ##vcore.cons 'unzip3 (bruijn ##.unzip3.38 0 14)) (##inline ##vcore.cons (##inline ##vcore.cons 'unzip4 (bruijn ##.unzip4.39 0 15)) (##inline ##vcore.cons (##inline ##vcore.cons 'unzip5 (bruijn ##.unzip5.40 0 16)) (##inline ##vcore.cons (##inline ##vcore.cons 'count (bruijn ##.count.41 0 17)) (##inline ##vcore.cons (##inline ##vcore.cons 'filter (bruijn ##.filter.42 0 18)) (##inline ##vcore.cons (##inline ##vcore.cons 'partition (bruijn ##.partition.43 0 19)) (##inline ##vcore.cons (##inline ##vcore.cons 'take-while (bruijn ##.take-while.44 0 20)) (##inline ##vcore.cons (##inline ##vcore.cons 'drop-while (bruijn ##.drop-while.45 0 21)) (##inline ##vcore.cons (##inline ##vcore.cons 'split-while (bruijn ##.split-while.46 0 22)) (##inline ##vcore.cons (##inline ##vcore.cons 'any? (bruijn ##.any?.47 0 23)) (##inline ##vcore.cons (##inline ##vcore.cons 'every? (bruijn ##.every?.48 0 24)) (##inline ##vcore.cons (##inline ##vcore.cons 'list-index (bruijn ##.list-index.49 0 25)) (##inline ##vcore.cons (##inline ##vcore.cons 'insert (bruijn ##.insert.50 0 26)) (##inline ##vcore.cons (##inline ##vcore.cons 'delete (bruijn ##.delete.51 0 27)) (##inline ##vcore.cons (##inline ##vcore.cons 'assq-update (bruijn ##.assq-update.52 0 28)) (##inline ##vcore.cons (##inline ##vcore.cons 'assv-update (bruijn ##.assv-update.53 0 29)) (##inline ##vcore.cons (##inline ##vcore.cons 'assoc-update (bruijn ##.assoc-update.54 0 30)) '()))))))))))))))))))))))))))))))))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[31]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 31, 31, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmy__num__pairs_D24_lambda3, env)});
    env->vars[1] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diota_D25_lambda5, env)});
    env->vars[2] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlist__tabulate_D26_lambda9, env)});
    env->vars[3] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtake_D27_lambda11, env)});
    env->vars[4] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddrop_D28_lambda12, env)});
    env->vars[5] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtake__right_D29_lambda13, env)});
    env->vars[6] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddrop__right_D30_lambda15, env)});
    env->vars[7] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsplit__at_D31_lambda17, env)});
    env->vars[8] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfold_D32_lambda20, env)});
    env->vars[9] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfold__right_D33_lambda21, env)});
    env->vars[10] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dconcatenate_D34_lambda22, env)});
    env->vars[11] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dzip_D35_lambda23, env)});
    env->vars[12] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunzip1_D36_lambda24, env)});
    env->vars[13] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunzip2_D37_lambda25, env)});
    env->vars[14] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunzip3_D38_lambda26, env)});
    env->vars[15] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunzip4_D39_lambda27, env)});
    env->vars[16] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunzip5_D40_lambda28, env)});
    env->vars[17] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount_D41_lambda30, env)});
    env->vars[18] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfilter_D42_lambda32, env)});
    env->vars[19] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpartition_D43_lambda33, env)});
    env->vars[20] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtake__while_D44_lambda36, env)});
    env->vars[21] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddrop__while_D45_lambda37, env)});
    env->vars[22] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsplit__while_D46_lambda38, env)});
    env->vars[23] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dany_Q_D47_lambda41, env)});
    env->vars[24] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Devery_Q_D48_lambda42, env)});
    env->vars[25] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlist__index_D49_lambda44, env)});
    env->vars[26] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinsert_D50_lambda46, env)});
    env->vars[27] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddelete_D51_lambda47, env)});
    env->vars[28] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassq__update_D52_lambda48, env)});
    env->vars[29] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassv__update_D53_lambda49, env)});
    env->vars[30] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassoc__update_D54_lambda50, env)});
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 27-1, 0)), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0iota,
        env->vars[1]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0list__tabulate,
        env->vars[2]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0take,
        env->vars[3]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0drop,
        env->vars[4]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0take__right,
        env->vars[5]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0drop__right,
        env->vars[6]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0split__at,
        env->vars[7]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0fold,
        env->vars[8]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0fold__right,
        env->vars[9]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0concatenate,
        env->vars[10]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0zip,
        env->vars[11]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unzip1,
        env->vars[12]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unzip2,
        env->vars[13]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unzip3,
        env->vars[14]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unzip4,
        env->vars[15]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unzip5,
        env->vars[16]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0count,
        env->vars[17]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0filter,
        env->vars[18]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0partition,
        env->vars[19]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0take__while,
        env->vars[20]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0drop__while,
        env->vars[21]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0split__while,
        env->vars[22]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0any_Q,
        env->vars[23]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0every_Q,
        env->vars[24]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0list__index,
        env->vars[25]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0insert,
        env->vars[26]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0delete,
        env->vars[27]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0assq__update,
        env->vars[28]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0assv__update,
        env->vars[29]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0assoc__update,
        env->vars[30]),
        VNULL)))))))))))))))))))))))))))))));
    }
}
static void _V0vanity_V0list_V20_k25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0list_V20_lambda2) (bruijn ##.x.157 22 0) (bruijn ##.x.158 21 0) (bruijn ##.x.159 20 0) (bruijn ##.x.160 19 0) (bruijn ##.x.161 18 0) (bruijn ##.x.162 17 0) (bruijn ##.x.163 16 0) (bruijn ##.x.164 15 0) (bruijn ##.x.165 14 0) (bruijn ##.x.166 13 0) (bruijn ##.x.167 12 0) (bruijn ##.x.168 11 0) (bruijn ##.x.169 10 0) (bruijn ##.x.170 9 0) (bruijn ##.x.171 8 0) (bruijn ##.x.172 7 0) (bruijn ##.x.173 6 0) (bruijn ##.x.174 5 0) (bruijn ##.x.175 4 0) (bruijn ##.x.176 3 0) (bruijn ##.x.177 2 0) (bruijn ##.x.178 1 0) (bruijn ##.x.179 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V0vanity_V0list_V20_lambda2, .env = env }, }, 23,
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
static void _V0vanity_V0list_V20_k24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 22 0) (close _V0vanity_V0list_V20_k25) 'equal?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 22-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k25, env)}),
      _V0equal_Q);
}
static void _V0vanity_V0list_V20_k23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 21 0) (close _V0vanity_V0list_V20_k24) 'null?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 21-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k24, env)}),
      _V0null_Q);
}
static void _V0vanity_V0list_V20_k22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 20 0) (close _V0vanity_V0list_V20_k23) 'caar)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 20-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k23, env)}),
      _V0caar);
}
static void _V0vanity_V0list_V20_k21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 19 0) (close _V0vanity_V0list_V20_k22) 'cons)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 19-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k22, env)}),
      _V0cons);
}
static void _V0vanity_V0list_V20_k20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 18 0) (close _V0vanity_V0list_V20_k21) 'car)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 18-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k21, env)}),
      _V0car);
}
static void _V0vanity_V0list_V20_k19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 17 0) (close _V0vanity_V0list_V20_k20) 'cdr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 17-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k20, env)}),
      _V0cdr);
}
static void _V0vanity_V0list_V20_k18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 16 0) (close _V0vanity_V0list_V20_k19) 'eqv?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 16-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k19, env)}),
      _V0eqv_Q);
}
static void _V0vanity_V0list_V20_k17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 15 0) (close _V0vanity_V0list_V20_k18) 'eq?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 15-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k18, env)}),
      _V0eq_Q);
}
static void _V0vanity_V0list_V20_k16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 14 0) (close _V0vanity_V0list_V20_k17) '-)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 14-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k17, env)}),
      _V0__);
}
static void _V0vanity_V0list_V20_k15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 13 0) (close _V0vanity_V0list_V20_k16) '=)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 13-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k16, env)}),
      _V0_E);
}
static void _V0vanity_V0list_V20_k14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 12 0) (close _V0vanity_V0list_V20_k15) '+)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 12-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k15, env)}),
      _V0_P);
}
static void _V0vanity_V0list_V20_k13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 11 0) (close _V0vanity_V0list_V20_k14) 'not)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k14, env)}),
      _V0not);
}
static void _V0vanity_V0list_V20_k12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 10 0) (close _V0vanity_V0list_V20_k13) 'values)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k13, env)}),
      _V0values);
}
static void _V0vanity_V0list_V20_k11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 9 0) (close _V0vanity_V0list_V20_k12) 'call-with-values)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k12, env)}),
      _V0call__with__values);
}
static void _V0vanity_V0list_V20_k10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 8 0) (close _V0vanity_V0list_V20_k11) 'map)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k11, env)}),
      _V0map);
}
static void _V0vanity_V0list_V20_k9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 7 0) (close _V0vanity_V0list_V20_k10) 'cadddr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k10, env)}),
      _V0cadddr);
}
static void _V0vanity_V0list_V20_k8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 6 0) (close _V0vanity_V0list_V20_k9) 'caddr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k9, env)}),
      _V0caddr);
}
static void _V0vanity_V0list_V20_k7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 5 0) (close _V0vanity_V0list_V20_k8) 'cadr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k8, env)}),
      _V0cadr);
}
static void _V0vanity_V0list_V20_k6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 4 0) (close _V0vanity_V0list_V20_k7) 'list)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k7, env)}),
      _V0list);
}
static void _V0vanity_V0list_V20_k5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 3 0) (close _V0vanity_V0list_V20_k6) 'apply)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k6, env)}),
      _V0apply);
}
static void _V0vanity_V0list_V20_k4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 2 0) (close _V0vanity_V0list_V20_k5) 'append)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k5, env)}),
      _V0append);
}
static void _V0vanity_V0list_V20_k3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 1 0) (close _V0vanity_V0list_V20_k4) '*)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k4, env)}),
      _V0_S);
}
static void _V0vanity_V0list_V20_k2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 0 0) (close _V0vanity_V0list_V20_k3) 'pair?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k3, env)}),
      _V0pair_Q);
}
static void _V0vanity_V0list_V20_k1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.make-import (close _V0vanity_V0list_V20_k2) (##string ##.string.452) (bruijn ##.x.451 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMakeImport2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k2, env)}),
      VEncodePointer(&_V10_Dstring_D452.sym, VPOINTER_OTHER),
      _var0);
}
static void _V0vanity_V0list_V20_lambda1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0list_V20_k1) (##string ##.string.453))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k1, env)}),
      VEncodePointer(&_V10_Dstring_D453.sym, VPOINTER_OTHER));
}
VFunc _V0vanity_V0list_V20 = (VFunc)_V0vanity_V0list_V20_lambda1;
