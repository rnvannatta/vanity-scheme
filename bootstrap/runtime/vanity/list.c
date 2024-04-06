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
static struct { VBlob sym; char bytes[21]; } _V10string_D294 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10string_D293 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
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
static void _V0vanity_V0list_V20_k28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k28, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 7 19) (bruijn ##k.27 3 0) (bruijn i 3 1) (bruijn ##x.29 0 0))
    V_CALL(VGetArg(upenv, 7-1, 19), runtime,
      upenv->up->up->vars[0],
      upenv->up->up->vars[1],
      _var0);
 }
}
static void _V0vanity_V0list_V20_k27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k27, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn loop 3 0) (close _V0vanity_V0list_V20_k28) (bruijn ##x.30 0 0))
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k28, env)}),
      _var0);
 }
}
static void _V0vanity_V0list_V20_k26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k26, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.28 0 0) ((bruijn ##k.27 1 0) '()) ((bruijn + 5 12) (close _V0vanity_V0list_V20_k27) (bruijn i 1 1) 1))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VNULL);
} else {
    V_CALL(VGetArg(upenv, 5-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k27, env)}),
      upenv->vars[1],
      VEncodeInt(1l));
}
 }
}
static void _V0vanity_V0list_V20_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_lambda4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0list_V20_lambda4, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_lambda4, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn eq? 4 15) (close _V0vanity_V0list_V20_k26) (bruijn i 0 1) (bruijn n 2 1))
    V_CALL(upenv->up->up->up->vars[15], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k26, env)}),
      _var1,
      upenv->up->vars[1]);
 }
}
static void _V0vanity_V0list_V20_k32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k32" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k32, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 8 19) (bruijn ##k.32 4 0) (bruijn ##x.34 2 0) (bruijn ##x.35 0 0))
    V_CALL(VGetArg(upenv, 8-1, 19), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0list_V20_k31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k31" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k31, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn loop 4 0) (close _V0vanity_V0list_V20_k32) (bruijn ##x.36 0 0))
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k32, env)}),
      _var0);
 }
}
static void _V0vanity_V0list_V20_k30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k30" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k30, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 6 12) (close _V0vanity_V0list_V20_k31) (bruijn i 2 1) 1)
    V_CALL(VGetArg(upenv, 6-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k31, env)}),
      upenv->up->vars[1],
      VEncodeInt(1l));
 }
}
static void _V0vanity_V0list_V20_k29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k29, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.33 0 0) ((bruijn ##k.32 1 0) '()) ((bruijn + 5 12) (close _V0vanity_V0list_V20_k30) (bruijn i 1 1) (bruijn b 3 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VNULL);
} else {
    V_CALL(VGetArg(upenv, 5-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k30, env)}),
      upenv->vars[1],
      upenv->up->up->vars[2]);
}
 }
}
static void _V0vanity_V0list_V20_lambda5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_lambda5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0list_V20_lambda5, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_lambda5, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn eq? 4 15) (close _V0vanity_V0list_V20_k29) (bruijn i 0 1) (bruijn n 2 1))
    V_CALL(upenv->up->up->up->vars[15], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k29, env)}),
      _var1,
      upenv->up->vars[1]);
 }
}
static void _V0vanity_V0list_V20_k37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k37" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k37, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 9 19) (bruijn ##k.38 5 0) (bruijn ##x.40 2 0) (bruijn ##x.41 0 0))
    V_CALL(VGetArg(upenv, 9-1, 19), runtime,
      VGetArg(upenv, 5-1, 0),
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0list_V20_k36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k36, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn loop 5 0) (close _V0vanity_V0list_V20_k37) (bruijn ##x.42 0 0))
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k37, env)}),
      _var0);
 }
}
static void _V0vanity_V0list_V20_k35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k35, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 7 12) (close _V0vanity_V0list_V20_k36) (bruijn i 3 1) 1)
    V_CALL(VGetArg(upenv, 7-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k36, env)}),
      upenv->up->up->vars[1],
      VEncodeInt(1l));
 }
}
static void _V0vanity_V0list_V20_k34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k34, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 6 12) (close _V0vanity_V0list_V20_k35) (bruijn ##x.43 0 0) (bruijn b 4 2))
    V_CALL(VGetArg(upenv, 6-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k35, env)}),
      _var0,
      upenv->up->up->up->vars[2]);
 }
}
static void _V0vanity_V0list_V20_k33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k33, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.39 0 0) ((bruijn ##k.38 1 0) '()) ((bruijn * 5 0) (close _V0vanity_V0list_V20_k34) (bruijn s 3 3) (bruijn i 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VNULL);
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k34, env)}),
      upenv->up->up->vars[3],
      upenv->vars[1]);
}
 }
}
static void _V0vanity_V0list_V20_lambda6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_lambda6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0list_V20_lambda6, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_lambda6, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn eq? 4 15) (close _V0vanity_V0list_V20_k33) (bruijn i 0 1) (bruijn n 2 1))
    V_CALL(upenv->up->up->up->vars[15], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k33, env)}),
      _var1,
      upenv->up->vars[1]);
 }
}
__attribute__((used)) static void _V20CaseError__V0vanity_V0list_V20_lambda3(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0vanity_V0list_V20_lambda3 #t (2 (letrec 1 ((close _V0vanity_V0list_V20_lambda4)) ((bruijn loop 0 0) (bruijn ##k.26 1 0) 0))) (3 (letrec 1 ((close _V0vanity_V0list_V20_lambda5)) ((bruijn loop 0 0) (bruijn ##k.31 1 0) 0))) (4 (letrec 1 ((close _V0vanity_V0list_V20_lambda6)) ((bruijn loop 0 0) (bruijn ##k.37 1 0) 0))))
 VError("Not enough arguments to _V0vanity_V0list_V20_lambda3, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0vanity_V0list_V20_lambda3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case0__V0vanity_V0list_V20_lambda3" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0vanity_V0list_V20_lambda3, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V0vanity_V0list_V20_lambda4)) ((bruijn loop 0 0) (bruijn ##k.26 1 0) 0))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_lambda4, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VEncodeInt(0l));
    }
 }
}
__attribute__((used)) static void _V20Case1__V0vanity_V0list_V20_lambda3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case1__V0vanity_V0list_V20_lambda3" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0vanity_V0list_V20_lambda3, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (letrec 1 ((close _V0vanity_V0list_V20_lambda5)) ((bruijn loop 0 0) (bruijn ##k.31 1 0) 0))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_lambda5, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VEncodeInt(0l));
    }
 }
}
__attribute__((used)) static void _V20Case2__V0vanity_V0list_V20_lambda3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case2__V0vanity_V0list_V20_lambda3" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case2__V0vanity_V0list_V20_lambda3, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (letrec 1 ((close _V0vanity_V0list_V20_lambda6)) ((bruijn loop 0 0) (bruijn ##k.37 1 0) 0))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_lambda6, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VEncodeInt(0l));
    }
 }
}
void _V0vanity_V0list_V20_lambda3(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V0vanity_V0list_V20_lambda3, @function\n"
#endif
"_V0vanity_V0list_V20_lambda3:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V0vanity_V0list_V20_lambda3\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V0vanity_V0list_V20_lambda3\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case2__V0vanity_V0list_V20_lambda3\n"
"    jmp _V20CaseError__V0vanity_V0list_V20_lambda3\n"
);
static void _V0vanity_V0list_V20_k41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k41, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 8 19) (bruijn ##k.45 4 0) (bruijn ##x.47 2 0) (bruijn ##x.48 0 0))
    V_CALL(VGetArg(upenv, 8-1, 19), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0list_V20_k40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k40, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn loop 4 0) (close _V0vanity_V0list_V20_k41) (bruijn ##x.49 0 0))
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k41, env)}),
      _var0);
 }
}
static void _V0vanity_V0list_V20_k39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k39, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 6 12) (close _V0vanity_V0list_V20_k40) (bruijn i 2 1) 1)
    V_CALL(VGetArg(upenv, 6-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k40, env)}),
      upenv->up->vars[1],
      VEncodeInt(1l));
 }
}
static void _V0vanity_V0list_V20_k38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k38, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.46 0 0) ((bruijn ##k.45 1 0) '()) ((bruijn proc 3 2) (close _V0vanity_V0list_V20_k39) (bruijn i 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VNULL);
} else {
    V_CALL(upenv->up->up->vars[2], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k39, env)}),
      upenv->vars[1]);
}
 }
}
static void _V0vanity_V0list_V20_lambda8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_lambda8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0list_V20_lambda8, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_lambda8, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn eq? 4 15) (close _V0vanity_V0list_V20_k38) (bruijn i 0 1) (bruijn n 2 1))
    V_CALL(upenv->up->up->up->vars[15], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k38, env)}),
      _var1,
      upenv->up->vars[1]);
 }
}
static void _V0vanity_V0list_V20_lambda7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_lambda7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0list_V20_lambda7, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_lambda7, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (letrec 1 ((close _V0vanity_V0list_V20_lambda8)) ((bruijn loop 0 0) (bruijn ##k.44 1 0) 0))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_lambda8, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VEncodeInt(0l));
    }
 }
}
static void _V0vanity_V0list_V20_k46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k46" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k46, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 7 19) (bruijn ##k.50 5 0) (bruijn ##x.52 3 0) (bruijn ##x.53 0 0))
    V_CALL(VGetArg(upenv, 7-1, 19), runtime,
      VGetArg(upenv, 5-1, 0),
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0list_V20_k45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k45" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k45, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn take 5 2) (close _V0vanity_V0list_V20_k46) (bruijn ##x.54 1 0) (bruijn ##x.55 0 0))
    V_CALL(VGetArg(upenv, 5-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k46, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0list_V20_k44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k44" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k44, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn - 5 14) (close _V0vanity_V0list_V20_k45) (bruijn i 3 2) 1)
    V_CALL(VGetArg(upenv, 5-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k45, env)}),
      upenv->up->up->vars[2],
      VEncodeInt(1l));
 }
}
static void _V0vanity_V0list_V20_k43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k43, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 4 17) (close _V0vanity_V0list_V20_k44) (bruijn lst 2 1))
    V_CALL(upenv->up->up->up->vars[17], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k44, env)}),
      upenv->up->vars[1]);
 }
}
static void _V0vanity_V0list_V20_k42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k42" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k42, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.51 0 0) ((bruijn ##k.50 1 0) '()) ((bruijn car 3 18) (close _V0vanity_V0list_V20_k43) (bruijn lst 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VNULL);
} else {
    V_CALL(upenv->up->up->vars[18], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k43, env)}),
      upenv->vars[1]);
}
 }
}
static void _V0vanity_V0list_V20_lambda9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_lambda9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0list_V20_lambda9, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_lambda9, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn eq? 2 15) (close _V0vanity_V0list_V20_k42) (bruijn i 0 2) 0)
    V_CALL(upenv->up->vars[15], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k42, env)}),
      _var2,
      VEncodeInt(0l));
 }
}
static void _V0vanity_V0list_V20_k49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k49" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k49, runtime, upenv, 1, argc, _var0) {
  // ((bruijn drop 4 3) (bruijn ##k.56 3 0) (bruijn ##x.58 1 0) (bruijn ##x.59 0 0))
    V_CALL(upenv->up->up->up->vars[3], runtime,
      upenv->up->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0list_V20_k48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k48" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k48, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn - 4 14) (close _V0vanity_V0list_V20_k49) (bruijn i 2 2) 1)
    V_CALL(upenv->up->up->up->vars[14], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k49, env)}),
      upenv->up->vars[2],
      VEncodeInt(1l));
 }
}
static void _V0vanity_V0list_V20_k47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k47" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k47, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.57 0 0) ((bruijn ##k.56 1 0) (bruijn lst 1 1)) ((bruijn cdr 3 17) (close _V0vanity_V0list_V20_k48) (bruijn lst 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      upenv->vars[1]);
} else {
    V_CALL(upenv->up->up->vars[17], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k48, env)}),
      upenv->vars[1]);
}
 }
}
static void _V0vanity_V0list_V20_lambda10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_lambda10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0list_V20_lambda10, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_lambda10, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn eq? 2 15) (close _V0vanity_V0list_V20_k47) (bruijn i 0 2) 0)
    V_CALL(upenv->up->vars[15], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k47, env)}),
      _var2,
      VEncodeInt(0l));
 }
}
static void _V0vanity_V0list_V20_k52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k52" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k52, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 4 0) (bruijn ##k.61 3 0) (bruijn ##x.63 1 0) (bruijn ##x.64 0 0))
    V_CALL(upenv->up->up->up->vars[0], runtime,
      upenv->up->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0list_V20_k51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k51" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k51, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn - 6 14) (close _V0vanity_V0list_V20_k52) (bruijn len 2 2) 1)
    V_CALL(VGetArg(upenv, 6-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k52, env)}),
      upenv->up->vars[2],
      VEncodeInt(1l));
 }
}
static void _V0vanity_V0list_V20_k50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k50" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k50, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.62 0 0) ((bruijn ##k.61 1 0) (bruijn lst 1 1)) ((bruijn cdr 5 17) (close _V0vanity_V0list_V20_k51) (bruijn lst 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      upenv->vars[1]);
} else {
    V_CALL(VGetArg(upenv, 5-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k51, env)}),
      upenv->vars[1]);
}
 }
}
static void _V0vanity_V0list_V20_lambda12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_lambda12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0list_V20_lambda12, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_lambda12, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn eq? 4 15) (close _V0vanity_V0list_V20_k50) (bruijn len 0 2) (bruijn i 2 2))
    V_CALL(upenv->up->up->up->vars[15], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k50, env)}),
      _var2,
      upenv->up->vars[2]);
 }
}
static void _V0vanity_V0list_V20_k53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k53" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k53, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 0) (bruijn ##k.60 2 0) (bruijn lst 2 1) (bruijn ##x.65 0 0))
    V_CALL(upenv->vars[0], runtime,
      upenv->up->vars[0],
      upenv->up->vars[1],
      _var0);
 }
}
static void _V0vanity_V0list_V20_lambda11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_lambda11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0list_V20_lambda11, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_lambda11, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (letrec 1 ((close _V0vanity_V0list_V20_lambda12)) ((bruijn length 3 1) (close _V0vanity_V0list_V20_k53) (bruijn lst 1 1)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_lambda12, env)});
    V_CALL(upenv->up->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k53, env)}),
      upenv->vars[1]);
    }
 }
}
static void _V0vanity_V0list_V20_k58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k58" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k58, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 9 19) (bruijn ##k.67 5 0) (bruijn ##x.69 3 0) (bruijn ##x.70 0 0))
    V_CALL(VGetArg(upenv, 9-1, 19), runtime,
      VGetArg(upenv, 5-1, 0),
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0list_V20_k57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k57" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k57, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn loop 5 0) (close _V0vanity_V0list_V20_k58) (bruijn ##x.71 1 0) (bruijn ##x.72 0 0))
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k58, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0list_V20_k56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k56" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k56, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn - 7 14) (close _V0vanity_V0list_V20_k57) (bruijn len 3 2) 1)
    V_CALL(VGetArg(upenv, 7-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k57, env)}),
      upenv->up->up->vars[2],
      VEncodeInt(1l));
 }
}
static void _V0vanity_V0list_V20_k55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k55" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k55, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 6 17) (close _V0vanity_V0list_V20_k56) (bruijn lst 2 1))
    V_CALL(VGetArg(upenv, 6-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k56, env)}),
      upenv->up->vars[1]);
 }
}
static void _V0vanity_V0list_V20_k54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k54" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k54, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.68 0 0) ((bruijn ##k.67 1 0) '()) ((bruijn car 5 18) (close _V0vanity_V0list_V20_k55) (bruijn lst 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VNULL);
} else {
    V_CALL(VGetArg(upenv, 5-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k55, env)}),
      upenv->vars[1]);
}
 }
}
static void _V0vanity_V0list_V20_lambda14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_lambda14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0list_V20_lambda14, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_lambda14, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn eq? 4 15) (close _V0vanity_V0list_V20_k54) (bruijn len 0 2) (bruijn i 2 2))
    V_CALL(upenv->up->up->up->vars[15], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k54, env)}),
      _var2,
      upenv->up->vars[2]);
 }
}
static void _V0vanity_V0list_V20_k59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k59" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k59, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 0) (bruijn ##k.66 2 0) (bruijn lst 2 1) (bruijn ##x.73 0 0))
    V_CALL(upenv->vars[0], runtime,
      upenv->up->vars[0],
      upenv->up->vars[1],
      _var0);
 }
}
static void _V0vanity_V0list_V20_lambda13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_lambda13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0list_V20_lambda13, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_lambda13, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (letrec 1 ((close _V0vanity_V0list_V20_lambda14)) ((bruijn length 3 1) (close _V0vanity_V0list_V20_k59) (bruijn lst 1 1)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_lambda14, env)});
    V_CALL(upenv->up->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k59, env)}),
      upenv->vars[1]);
    }
 }
}
static void _V0vanity_V0list_V20_k62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k62" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k62, runtime, upenv, 1, argc, _var0) {
  // ((bruijn split-at 5 6) (bruijn ##k.76 2 0) (bruijn ##x.77 1 0) (bruijn ##x.78 0 0))
    V_CALL(VGetArg(upenv, 5-1, 6), runtime,
      upenv->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0list_V20_k61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k61" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k61, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn - 5 14) (close _V0vanity_V0list_V20_k62) (bruijn i 3 2) 1)
    V_CALL(VGetArg(upenv, 5-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k62, env)}),
      upenv->up->up->vars[2],
      VEncodeInt(1l));
 }
}
static void _V0vanity_V0list_V20_lambda16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_lambda16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_lambda16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_lambda16, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 4 17) (close _V0vanity_V0list_V20_k61) (bruijn lst 2 1))
    V_CALL(upenv->up->up->up->vars[17], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k61, env)}),
      upenv->up->vars[1]);
 }
}
static void _V0vanity_V0list_V20_k64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k64" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k64, runtime, upenv, 1, argc, _var0) {
  // ((bruijn values 6 10) (bruijn ##k.79 2 0) (bruijn ##x.80 0 0) (bruijn d 2 2))
    V_CALL(VGetArg(upenv, 6-1, 10), runtime,
      upenv->up->vars[0],
      _var0,
      upenv->up->vars[2]);
 }
}
static void _V0vanity_V0list_V20_k63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k63" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k63, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 5 19) (close _V0vanity_V0list_V20_k64) (bruijn ##x.81 0 0) (bruijn t 1 1))
    V_CALL(VGetArg(upenv, 5-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k64, env)}),
      _var0,
      upenv->vars[1]);
 }
}
static void _V0vanity_V0list_V20_lambda17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_lambda17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0list_V20_lambda17, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_lambda17, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn car 4 18) (close _V0vanity_V0list_V20_k63) (bruijn lst 2 1))
    V_CALL(upenv->up->up->up->vars[18], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k63, env)}),
      upenv->up->vars[1]);
 }
}
static void _V0vanity_V0list_V20_k60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k60" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k60, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.75 0 0) ((bruijn values 3 10) (bruijn ##k.74 1 0) '() (bruijn lst 1 1)) ((bruijn call-with-values 3 9) (bruijn ##k.74 1 0) (close _V0vanity_V0list_V20_lambda16) (close _V0vanity_V0list_V20_lambda17)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->vars[10], runtime,
      upenv->vars[0],
      VNULL,
      upenv->vars[1]);
} else {
    V_CALL(upenv->up->up->vars[9], runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_lambda16, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_lambda17, env)}));
}
 }
}
static void _V0vanity_V0list_V20_lambda15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_lambda15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0list_V20_lambda15, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_lambda15, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn eq? 2 15) (close _V0vanity_V0list_V20_k60) (bruijn i 0 2) 0)
    V_CALL(upenv->up->vars[15], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k60, env)}),
      _var2,
      VEncodeInt(0l));
 }
}
static void _V0vanity_V0list_V20_k68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k68" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k68, runtime, upenv, 1, argc, _var0) {
  // ((bruijn fold 5 7) (bruijn ##k.82 4 0) (bruijn kons 4 1) (bruijn ##x.84 1 0) (bruijn ##x.85 0 0))
    V_CALL(VGetArg(upenv, 5-1, 7), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->up->up->vars[1],
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0list_V20_k67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k67" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k67, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 5 17) (close _V0vanity_V0list_V20_k68) (bruijn ks 3 3))
    V_CALL(VGetArg(upenv, 5-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k68, env)}),
      upenv->up->up->vars[3]);
 }
}
static void _V0vanity_V0list_V20_k66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k66" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k66, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn kons 2 1) (close _V0vanity_V0list_V20_k67) (bruijn ##x.86 0 0) (bruijn knil 2 2))
    V_CALL(upenv->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k67, env)}),
      _var0,
      upenv->up->vars[2]);
 }
}
static void _V0vanity_V0list_V20_k65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k65" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k65, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.83 0 0) ((bruijn ##k.82 1 0) (bruijn knil 1 2)) ((bruijn car 3 18) (close _V0vanity_V0list_V20_k66) (bruijn ks 1 3)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      upenv->vars[2]);
} else {
    V_CALL(upenv->up->up->vars[18], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k66, env)}),
      upenv->vars[3]);
}
 }
}
static void _V0vanity_V0list_V20_lambda18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_lambda18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0vanity_V0list_V20_lambda18, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_lambda18, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn null? 2 21) (close _V0vanity_V0list_V20_k65) (bruijn ks 0 3))
    V_CALL(upenv->up->vars[21], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k65, env)}),
      _var3);
 }
}
static void _V0vanity_V0list_V20_k72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k72" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k72, runtime, upenv, 1, argc, _var0) {
  // ((bruijn kons 4 1) (bruijn ##k.87 4 0) (bruijn ##x.89 2 0) (bruijn ##x.90 0 0))
    V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->up->up->up->vars[0],
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0list_V20_k71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k71" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k71, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn fold-right 4 8) (close _V0vanity_V0list_V20_k72) (bruijn kons 3 1) (bruijn knil 3 2) (bruijn ##x.91 0 0))
    V_CALL(upenv->up->up->up->vars[8], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k72, env)}),
      upenv->up->up->vars[1],
      upenv->up->up->vars[2],
      _var0);
 }
}
static void _V0vanity_V0list_V20_k70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k70" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k70, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 4 17) (close _V0vanity_V0list_V20_k71) (bruijn ks 2 3))
    V_CALL(upenv->up->up->up->vars[17], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k71, env)}),
      upenv->up->vars[3]);
 }
}
static void _V0vanity_V0list_V20_k69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k69" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k69, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.88 0 0) ((bruijn ##k.87 1 0) (bruijn knil 1 2)) ((bruijn car 3 18) (close _V0vanity_V0list_V20_k70) (bruijn ks 1 3)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      upenv->vars[2]);
} else {
    V_CALL(upenv->up->up->vars[18], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k70, env)}),
      upenv->vars[3]);
}
 }
}
static void _V0vanity_V0list_V20_lambda19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_lambda19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0vanity_V0list_V20_lambda19, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_lambda19, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn null? 2 21) (close _V0vanity_V0list_V20_k69) (bruijn ks 0 3))
    V_CALL(upenv->up->vars[21], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k69, env)}),
      _var3);
 }
}
static void _V0vanity_V0list_V20_k76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k76" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k76, runtime, upenv, 1, argc, _var0) {
  // ((bruijn append 6 2) (bruijn ##k.92 4 0) (bruijn ##x.94 2 0) (bruijn ##x.95 0 0))
    V_CALL(VGetArg(upenv, 6-1, 2), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0list_V20_k75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k75" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k75, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn concatenate 4 9) (close _V0vanity_V0list_V20_k76) (bruijn ##x.96 0 0))
    V_CALL(upenv->up->up->up->vars[9], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k76, env)}),
      _var0);
 }
}
static void _V0vanity_V0list_V20_k74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k74" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k74, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 4 17) (close _V0vanity_V0list_V20_k75) (bruijn lst-of-lsts 2 1))
    V_CALL(upenv->up->up->up->vars[17], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k75, env)}),
      upenv->up->vars[1]);
 }
}
static void _V0vanity_V0list_V20_k73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k73" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k73, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.93 0 0) ((bruijn ##k.92 1 0) '()) ((bruijn car 3 18) (close _V0vanity_V0list_V20_k74) (bruijn lst-of-lsts 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VNULL);
} else {
    V_CALL(upenv->up->up->vars[18], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k74, env)}),
      upenv->vars[1]);
}
 }
}
static void _V0vanity_V0list_V20_lambda20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_lambda20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0list_V20_lambda20, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_lambda20, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn null? 2 21) (close _V0vanity_V0list_V20_k73) (bruijn lst-of-lsts 0 1))
    V_CALL(upenv->up->vars[21], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k73, env)}),
      _var1);
 }
}
static void _V0vanity_V0list_V20_lambda21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, ...) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_lambda21" };
 VRecordCall2(runtime, &dbg);
 if(argc < 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_lambda21, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_lambda21, runtime, upenv, 1, argc, _var0, _varargs) {
  // ((bruijn apply 2 3) (bruijn ##k.97 0 0) (bruijn map 2 8) (bruijn list 2 4) (bruijn lsts 0 1))
    V_CALL(upenv->up->vars[3], runtime,
      _var0,
      upenv->up->vars[8],
      upenv->up->vars[4],
      _varargs);
 }
}
static void _V0vanity_V0list_V20_lambda22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_lambda22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0list_V20_lambda22, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_lambda22, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn map 2 8) (bruijn ##k.98 0 0) (bruijn car 2 18) (bruijn lst 0 1))
    V_CALL(upenv->up->vars[8], runtime,
      _var0,
      upenv->up->vars[18],
      _var1);
 }
}
static void _V0vanity_V0list_V20_k78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k78" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k78, runtime, upenv, 1, argc, _var0) {
  // ((bruijn values 4 10) (bruijn ##k.99 2 0) (bruijn ##x.100 1 0) (bruijn ##x.101 0 0))
    V_CALL(upenv->up->up->up->vars[10], runtime,
      upenv->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0list_V20_k77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k77" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k77, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn map 3 8) (close _V0vanity_V0list_V20_k78) (bruijn cadr 3 5) (bruijn lst 1 1))
    V_CALL(upenv->up->up->vars[8], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k78, env)}),
      upenv->up->up->vars[5],
      upenv->vars[1]);
 }
}
static void _V0vanity_V0list_V20_lambda23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_lambda23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0list_V20_lambda23, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_lambda23, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn map 2 8) (close _V0vanity_V0list_V20_k77) (bruijn car 2 18) (bruijn lst 0 1))
    V_CALL(upenv->up->vars[8], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k77, env)}),
      upenv->up->vars[18],
      _var1);
 }
}
static void _V0vanity_V0list_V20_k81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k81" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k81, runtime, upenv, 1, argc, _var0) {
  // ((bruijn values 5 10) (bruijn ##k.102 3 0) (bruijn ##x.103 2 0) (bruijn ##x.104 1 0) (bruijn ##x.105 0 0))
    V_CALL(VGetArg(upenv, 5-1, 10), runtime,
      upenv->up->up->vars[0],
      upenv->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0list_V20_k80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k80" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k80, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn map 4 8) (close _V0vanity_V0list_V20_k81) (bruijn caddr 4 6) (bruijn lst 2 1))
    V_CALL(upenv->up->up->up->vars[8], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k81, env)}),
      upenv->up->up->up->vars[6],
      upenv->up->vars[1]);
 }
}
static void _V0vanity_V0list_V20_k79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k79" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k79, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn map 3 8) (close _V0vanity_V0list_V20_k80) (bruijn cadr 3 5) (bruijn lst 1 1))
    V_CALL(upenv->up->up->vars[8], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k80, env)}),
      upenv->up->up->vars[5],
      upenv->vars[1]);
 }
}
static void _V0vanity_V0list_V20_lambda24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_lambda24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0list_V20_lambda24, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_lambda24, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn map 2 8) (close _V0vanity_V0list_V20_k79) (bruijn car 2 18) (bruijn lst 0 1))
    V_CALL(upenv->up->vars[8], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k79, env)}),
      upenv->up->vars[18],
      _var1);
 }
}
static void _V0vanity_V0list_V20_k85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k85" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k85, runtime, upenv, 1, argc, _var0) {
  // ((bruijn values 6 10) (bruijn ##k.106 4 0) (bruijn ##x.107 3 0) (bruijn ##x.108 2 0) (bruijn ##x.109 1 0) (bruijn ##x.110 0 0))
    V_CALL(VGetArg(upenv, 6-1, 10), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->up->vars[0],
      upenv->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0list_V20_k84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k84" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k84, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn map 5 8) (close _V0vanity_V0list_V20_k85) (bruijn cadddr 5 7) (bruijn lst 3 1))
    V_CALL(VGetArg(upenv, 5-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k85, env)}),
      VGetArg(upenv, 5-1, 7),
      upenv->up->up->vars[1]);
 }
}
static void _V0vanity_V0list_V20_k83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k83" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k83, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn map 4 8) (close _V0vanity_V0list_V20_k84) (bruijn caddr 4 6) (bruijn lst 2 1))
    V_CALL(upenv->up->up->up->vars[8], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k84, env)}),
      upenv->up->up->up->vars[6],
      upenv->up->vars[1]);
 }
}
static void _V0vanity_V0list_V20_k82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k82" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k82, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn map 3 8) (close _V0vanity_V0list_V20_k83) (bruijn cadr 3 5) (bruijn lst 1 1))
    V_CALL(upenv->up->up->vars[8], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k83, env)}),
      upenv->up->up->vars[5],
      upenv->vars[1]);
 }
}
static void _V0vanity_V0list_V20_lambda25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_lambda25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0list_V20_lambda25, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_lambda25, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn map 2 8) (close _V0vanity_V0list_V20_k82) (bruijn car 2 18) (bruijn lst 0 1))
    V_CALL(upenv->up->vars[8], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k82, env)}),
      upenv->up->vars[18],
      _var1);
 }
}
static void _V0vanity_V0list_V20_k90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k90" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k90, runtime, upenv, 1, argc, _var0) {
  // ((bruijn values 7 10) (bruijn ##k.111 5 0) (bruijn ##x.112 4 0) (bruijn ##x.113 3 0) (bruijn ##x.114 2 0) (bruijn ##x.115 1 0) (bruijn ##x.116 0 0))
    V_CALL(VGetArg(upenv, 7-1, 10), runtime,
      VGetArg(upenv, 5-1, 0),
      upenv->up->up->up->vars[0],
      upenv->up->up->vars[0],
      upenv->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0list_V20_k91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k91" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k91, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cadddr 8 7) (bruijn ##k.117 1 0) (bruijn ##x.118 0 0))
    V_CALL(VGetArg(upenv, 8-1, 7), runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0list_V20_lambda27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_lambda27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0list_V20_lambda27, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_lambda27, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn cdr 7 17) (close _V0vanity_V0list_V20_k91) (bruijn e 0 1))
    V_CALL(VGetArg(upenv, 7-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k91, env)}),
      _var1);
 }
}
static void _V0vanity_V0list_V20_k89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k89" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k89, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn map 6 8) (close _V0vanity_V0list_V20_k90) (close _V0vanity_V0list_V20_lambda27) (bruijn lst 4 1))
    V_CALL(VGetArg(upenv, 6-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k90, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_lambda27, env)}),
      upenv->up->up->up->vars[1]);
 }
}
static void _V0vanity_V0list_V20_k88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k88" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k88, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn map 5 8) (close _V0vanity_V0list_V20_k89) (bruijn cadddr 5 7) (bruijn lst 3 1))
    V_CALL(VGetArg(upenv, 5-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k89, env)}),
      VGetArg(upenv, 5-1, 7),
      upenv->up->up->vars[1]);
 }
}
static void _V0vanity_V0list_V20_k87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k87" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k87, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn map 4 8) (close _V0vanity_V0list_V20_k88) (bruijn caddr 4 6) (bruijn lst 2 1))
    V_CALL(upenv->up->up->up->vars[8], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k88, env)}),
      upenv->up->up->up->vars[6],
      upenv->up->vars[1]);
 }
}
static void _V0vanity_V0list_V20_k86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k86" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k86, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn map 3 8) (close _V0vanity_V0list_V20_k87) (bruijn cadr 3 5) (bruijn lst 1 1))
    V_CALL(upenv->up->up->vars[8], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k87, env)}),
      upenv->up->up->vars[5],
      upenv->vars[1]);
 }
}
static void _V0vanity_V0list_V20_lambda26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_lambda26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0list_V20_lambda26, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_lambda26, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn map 2 8) (close _V0vanity_V0list_V20_k86) (bruijn car 2 18) (bruijn lst 0 1))
    V_CALL(upenv->up->vars[8], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k86, env)}),
      upenv->up->vars[18],
      _var1);
 }
}
static void _V0vanity_V0list_V20_k95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k95" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k95, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.125 1 0) ((bruijn ##k.126 0 0) 1) ((bruijn ##k.126 0 0) 0))
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
static void _V0vanity_V0list_V20_k98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k98" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k98, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 7 0) (bruijn ##k.120 6 0) (bruijn ##x.122 1 0) (bruijn pred 6 2) (bruijn ##x.123 0 0))
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VGetArg(upenv, 6-1, 0),
      upenv->vars[0],
      VGetArg(upenv, 6-1, 2),
      _var0);
 }
}
static void _V0vanity_V0list_V20_k97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k97" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k97, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 9 17) (close _V0vanity_V0list_V20_k98) (bruijn lst 5 3))
    V_CALL(VGetArg(upenv, 9-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k98, env)}),
      VGetArg(upenv, 5-1, 3));
 }
}
static void _V0vanity_V0list_V20_k96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k96" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k96, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 8 12) (close _V0vanity_V0list_V20_k97) (bruijn n 4 1) (bruijn ##x.124 0 0))
    V_CALL(VGetArg(upenv, 8-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k97, env)}),
      upenv->up->up->up->vars[1],
      _var0);
 }
}
static void _V0vanity_V0list_V20_k94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k94" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k94, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0list_V20_k95) (close _V0vanity_V0list_V20_k96))
    V_CALL_FUNC(_V0vanity_V0list_V20_k95, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k96, env)}));
 }
}
static void _V0vanity_V0list_V20_k93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k93" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k93, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn pred 2 2) (close _V0vanity_V0list_V20_k94) (bruijn ##x.127 0 0))
    V_CALL(upenv->up->vars[2], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k94, env)}),
      _var0);
 }
}
static void _V0vanity_V0list_V20_k92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k92" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k92, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.121 0 0) ((bruijn ##k.120 1 0) (bruijn n 1 1)) ((bruijn car 5 18) (close _V0vanity_V0list_V20_k93) (bruijn lst 1 3)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      upenv->vars[1]);
} else {
    V_CALL(VGetArg(upenv, 5-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k93, env)}),
      upenv->vars[3]);
}
 }
}
static void _V0vanity_V0list_V20_lambda29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_lambda29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0vanity_V0list_V20_lambda29, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_lambda29, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn null? 4 21) (close _V0vanity_V0list_V20_k92) (bruijn lst 0 3))
    V_CALL(upenv->up->up->up->vars[21], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k92, env)}),
      _var3);
 }
}
static void _V0vanity_V0list_V20_lambda28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_lambda28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0list_V20_lambda28, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_lambda28, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (letrec 1 ((close _V0vanity_V0list_V20_lambda29)) ((bruijn loop 0 0) (bruijn ##k.119 1 0) 0 (bruijn pred 1 1) (bruijn lst 1 2)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_lambda29, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VEncodeInt(0l),
      upenv->vars[1],
      upenv->vars[2]);
    }
 }
}
static void _V0vanity_V0list_V20_k104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k104" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k104, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 8 19) (bruijn ##k.128 6 0) (bruijn ##x.131 2 0) (bruijn ##x.132 0 0))
    V_CALL(VGetArg(upenv, 8-1, 19), runtime,
      VGetArg(upenv, 6-1, 0),
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0list_V20_k103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k103" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k103, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn filter 6 17) (close _V0vanity_V0list_V20_k104) (bruijn pred 5 1) (bruijn ##x.133 0 0))
    V_CALL(VGetArg(upenv, 6-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k104, env)}),
      VGetArg(upenv, 5-1, 1),
      _var0);
 }
}
static void _V0vanity_V0list_V20_k102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k102" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k102, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 6 17) (close _V0vanity_V0list_V20_k103) (bruijn lst 4 2))
    V_CALL(VGetArg(upenv, 6-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k103, env)}),
      upenv->up->up->up->vars[2]);
 }
}
static void _V0vanity_V0list_V20_k105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k105" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k105, runtime, upenv, 1, argc, _var0) {
  // ((bruijn filter 5 17) (bruijn ##k.128 4 0) (bruijn pred 4 1) (bruijn ##x.134 0 0))
    V_CALL(VGetArg(upenv, 5-1, 17), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->up->up->vars[1],
      _var0);
 }
}
static void _V0vanity_V0list_V20_k101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k101" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k101, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.130 0 0) ((bruijn car 5 18) (close _V0vanity_V0list_V20_k102) (bruijn lst 3 2)) ((bruijn cdr 5 17) (close _V0vanity_V0list_V20_k105) (bruijn lst 3 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 5-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k102, env)}),
      upenv->up->up->vars[2]);
} else {
    V_CALL(VGetArg(upenv, 5-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k105, env)}),
      upenv->up->up->vars[2]);
}
 }
}
static void _V0vanity_V0list_V20_k100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k100" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k100, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn pred 2 1) (close _V0vanity_V0list_V20_k101) (bruijn ##x.135 0 0))
    V_CALL(upenv->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k101, env)}),
      _var0);
 }
}
static void _V0vanity_V0list_V20_k99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k99" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k99, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.129 0 0) ((bruijn ##k.128 1 0) (bruijn lst 1 2)) ((bruijn car 3 18) (close _V0vanity_V0list_V20_k100) (bruijn lst 1 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      upenv->vars[2]);
} else {
    V_CALL(upenv->up->up->vars[18], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k100, env)}),
      upenv->vars[2]);
}
 }
}
static void _V0vanity_V0list_V20_lambda30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_lambda30" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0list_V20_lambda30, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_lambda30, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 2 21) (close _V0vanity_V0list_V20_k99) (bruijn lst 0 2))
    V_CALL(upenv->up->vars[21], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k99, env)}),
      _var2);
 }
}
static void _V0vanity_V0list_V20_k107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k107" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k107, runtime, upenv, 1, argc, _var0) {
  // ((bruijn partition 4 18) (bruijn ##k.138 1 0) (bruijn pred 3 1) (bruijn ##x.139 0 0))
    V_CALL(upenv->up->up->up->vars[18], runtime,
      upenv->vars[0],
      upenv->up->up->vars[1],
      _var0);
 }
}
static void _V0vanity_V0list_V20_lambda32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_lambda32" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_lambda32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_lambda32, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 4 17) (close _V0vanity_V0list_V20_k107) (bruijn lst 2 2))
    V_CALL(upenv->up->up->up->vars[17], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k107, env)}),
      upenv->up->vars[2]);
 }
}
static void _V0vanity_V0list_V20_k111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k111" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k111, runtime, upenv, 1, argc, _var0) {
  // ((bruijn values 8 10) (bruijn ##k.140 4 0) (bruijn ##x.142 0 0) (bruijn r 4 2))
    V_CALL(VGetArg(upenv, 8-1, 10), runtime,
      upenv->up->up->up->vars[0],
      _var0,
      upenv->up->up->up->vars[2]);
 }
}
static void _V0vanity_V0list_V20_k110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k110" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k110, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 7 19) (close _V0vanity_V0list_V20_k111) (bruijn ##x.143 0 0) (bruijn l 3 1))
    V_CALL(VGetArg(upenv, 7-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k111, env)}),
      _var0,
      upenv->up->up->vars[1]);
 }
}
static void _V0vanity_V0list_V20_k113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k113" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k113, runtime, upenv, 1, argc, _var0) {
  // ((bruijn values 8 10) (bruijn ##k.140 4 0) (bruijn l 4 1) (bruijn ##x.144 0 0))
    V_CALL(VGetArg(upenv, 8-1, 10), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->up->up->vars[1],
      _var0);
 }
}
static void _V0vanity_V0list_V20_k112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k112" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k112, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 7 19) (close _V0vanity_V0list_V20_k113) (bruijn ##x.145 0 0) (bruijn r 3 2))
    V_CALL(VGetArg(upenv, 7-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k113, env)}),
      _var0,
      upenv->up->up->vars[2]);
 }
}
static void _V0vanity_V0list_V20_k109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k109" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k109, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.141 0 0) ((bruijn car 6 18) (close _V0vanity_V0list_V20_k110) (bruijn lst 4 2)) ((bruijn car 6 18) (close _V0vanity_V0list_V20_k112) (bruijn lst 4 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 6-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k110, env)}),
      upenv->up->up->up->vars[2]);
} else {
    V_CALL(VGetArg(upenv, 6-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k112, env)}),
      upenv->up->up->up->vars[2]);
}
 }
}
static void _V0vanity_V0list_V20_k108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k108" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k108, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn pred 3 1) (close _V0vanity_V0list_V20_k109) (bruijn ##x.146 0 0))
    V_CALL(upenv->up->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k109, env)}),
      _var0);
 }
}
static void _V0vanity_V0list_V20_lambda33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_lambda33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0list_V20_lambda33, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_lambda33, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn car 4 18) (close _V0vanity_V0list_V20_k108) (bruijn lst 2 2))
    V_CALL(upenv->up->up->up->vars[18], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k108, env)}),
      upenv->up->vars[2]);
 }
}
static void _V0vanity_V0list_V20_k106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k106" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k106, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.137 0 0) ((bruijn values 3 10) (bruijn ##k.136 1 0) '() '()) ((bruijn call-with-values 3 9) (bruijn ##k.136 1 0) (close _V0vanity_V0list_V20_lambda32) (close _V0vanity_V0list_V20_lambda33)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->vars[10], runtime,
      upenv->vars[0],
      VNULL,
      VNULL);
} else {
    V_CALL(upenv->up->up->vars[9], runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_lambda32, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_lambda33, env)}));
}
 }
}
static void _V0vanity_V0list_V20_lambda31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_lambda31" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0list_V20_lambda31, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_lambda31, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 2 21) (close _V0vanity_V0list_V20_k106) (bruijn lst 0 2))
    V_CALL(upenv->up->vars[21], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k106, env)}),
      _var2);
 }
}
static void _V0vanity_V0list_V20_k117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k117" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k117, runtime, upenv, 1, argc, _var0) {
  // ((bruijn not 6 11) (bruijn ##k.153 2 0) (bruijn ##x.154 0 0))
    V_CALL(VGetArg(upenv, 6-1, 11), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0list_V20_k116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k116" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k116, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn pred 3 1) (close _V0vanity_V0list_V20_k117) (bruijn ##x.155 0 0))
    V_CALL(upenv->up->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k117, env)}),
      _var0);
 }
}
static void _V0vanity_V0list_V20_k115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k115" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k115, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.152 1 0) ((bruijn ##k.153 0 0) (bruijn ##p.152 1 0)) ((bruijn car 4 18) (close _V0vanity_V0list_V20_k116) (bruijn lst 2 2)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(_var0, runtime,
      upenv->vars[0]);
} else {
    V_CALL(upenv->up->up->up->vars[18], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k116, env)}),
      upenv->up->vars[2]);
}
 }
}
static void _V0vanity_V0list_V20_k121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k121" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k121, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 7 19) (bruijn ##k.147 5 0) (bruijn ##x.149 2 0) (bruijn ##x.150 0 0))
    V_CALL(VGetArg(upenv, 7-1, 19), runtime,
      VGetArg(upenv, 5-1, 0),
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0list_V20_k120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k120" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k120, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn take-while 5 19) (close _V0vanity_V0list_V20_k121) (bruijn pred 4 1) (bruijn ##x.151 0 0))
    V_CALL(VGetArg(upenv, 5-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k121, env)}),
      upenv->up->up->up->vars[1],
      _var0);
 }
}
static void _V0vanity_V0list_V20_k119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k119" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k119, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 5 17) (close _V0vanity_V0list_V20_k120) (bruijn lst 3 2))
    V_CALL(VGetArg(upenv, 5-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k120, env)}),
      upenv->up->up->vars[2]);
 }
}
static void _V0vanity_V0list_V20_k118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k118" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k118, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.148 0 0) ((bruijn ##k.147 2 0) '()) ((bruijn car 4 18) (close _V0vanity_V0list_V20_k119) (bruijn lst 2 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->vars[0], runtime,
      VNULL);
} else {
    V_CALL(upenv->up->up->up->vars[18], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k119, env)}),
      upenv->up->vars[2]);
}
 }
}
static void _V0vanity_V0list_V20_k114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k114" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k114, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0list_V20_k115) (close _V0vanity_V0list_V20_k118))
    V_CALL_FUNC(_V0vanity_V0list_V20_k115, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k118, env)}));
 }
}
static void _V0vanity_V0list_V20_lambda34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_lambda34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0list_V20_lambda34, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_lambda34, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 2 21) (close _V0vanity_V0list_V20_k114) (bruijn lst 0 2))
    V_CALL(upenv->up->vars[21], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k114, env)}),
      _var2);
 }
}
static void _V0vanity_V0list_V20_k125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k125" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k125, runtime, upenv, 1, argc, _var0) {
  // ((bruijn not 6 11) (bruijn ##k.160 2 0) (bruijn ##x.161 0 0))
    V_CALL(VGetArg(upenv, 6-1, 11), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0list_V20_k124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k124" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k124, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn pred 3 1) (close _V0vanity_V0list_V20_k125) (bruijn ##x.162 0 0))
    V_CALL(upenv->up->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k125, env)}),
      _var0);
 }
}
static void _V0vanity_V0list_V20_k123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k123" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k123, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.159 1 0) ((bruijn ##k.160 0 0) (bruijn ##p.159 1 0)) ((bruijn car 4 18) (close _V0vanity_V0list_V20_k124) (bruijn lst 2 2)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(_var0, runtime,
      upenv->vars[0]);
} else {
    V_CALL(upenv->up->up->up->vars[18], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k124, env)}),
      upenv->up->vars[2]);
}
 }
}
static void _V0vanity_V0list_V20_k127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k127" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k127, runtime, upenv, 1, argc, _var0) {
  // ((bruijn drop-while 4 20) (bruijn ##k.156 3 0) (bruijn pred 3 1) (bruijn ##x.158 0 0))
    V_CALL(upenv->up->up->up->vars[20], runtime,
      upenv->up->up->vars[0],
      upenv->up->up->vars[1],
      _var0);
 }
}
static void _V0vanity_V0list_V20_k126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k126" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k126, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.157 0 0) ((bruijn ##k.156 2 0) (bruijn lst 2 2)) ((bruijn cdr 4 17) (close _V0vanity_V0list_V20_k127) (bruijn lst 2 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->vars[0], runtime,
      upenv->up->vars[2]);
} else {
    V_CALL(upenv->up->up->up->vars[17], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k127, env)}),
      upenv->up->vars[2]);
}
 }
}
static void _V0vanity_V0list_V20_k122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k122" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k122, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0list_V20_k123) (close _V0vanity_V0list_V20_k126))
    V_CALL_FUNC(_V0vanity_V0list_V20_k123, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k126, env)}));
 }
}
static void _V0vanity_V0list_V20_lambda35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_lambda35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0list_V20_lambda35, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_lambda35, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 2 21) (close _V0vanity_V0list_V20_k122) (bruijn lst 0 2))
    V_CALL(upenv->up->vars[21], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k122, env)}),
      _var2);
 }
}
static void _V0vanity_V0list_V20_k131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k131" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k131, runtime, upenv, 1, argc, _var0) {
  // ((bruijn not 6 11) (bruijn ##k.171 2 0) (bruijn ##x.172 0 0))
    V_CALL(VGetArg(upenv, 6-1, 11), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0list_V20_k130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k130" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k130, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn pred 3 1) (close _V0vanity_V0list_V20_k131) (bruijn ##x.173 0 0))
    V_CALL(upenv->up->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k131, env)}),
      _var0);
 }
}
static void _V0vanity_V0list_V20_k129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k129" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k129, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.170 1 0) ((bruijn ##k.171 0 0) (bruijn ##p.170 1 0)) ((bruijn car 4 18) (close _V0vanity_V0list_V20_k130) (bruijn lst 2 2)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(_var0, runtime,
      upenv->vars[0]);
} else {
    V_CALL(upenv->up->up->up->vars[18], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k130, env)}),
      upenv->up->vars[2]);
}
 }
}
static void _V0vanity_V0list_V20_k133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k133" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k133, runtime, upenv, 1, argc, _var0) {
  // ((bruijn split-while 5 21) (bruijn ##k.165 1 0) (bruijn pred 4 1) (bruijn ##x.166 0 0))
    V_CALL(VGetArg(upenv, 5-1, 21), runtime,
      upenv->vars[0],
      upenv->up->up->up->vars[1],
      _var0);
 }
}
static void _V0vanity_V0list_V20_lambda37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_lambda37" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_lambda37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_lambda37, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 5 17) (close _V0vanity_V0list_V20_k133) (bruijn lst 3 2))
    V_CALL(VGetArg(upenv, 5-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k133, env)}),
      upenv->up->up->vars[2]);
 }
}
static void _V0vanity_V0list_V20_k135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k135" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k135, runtime, upenv, 1, argc, _var0) {
  // ((bruijn values 7 10) (bruijn ##k.167 2 0) (bruijn ##x.168 0 0) (bruijn d 2 2))
    V_CALL(VGetArg(upenv, 7-1, 10), runtime,
      upenv->up->vars[0],
      _var0,
      upenv->up->vars[2]);
 }
}
static void _V0vanity_V0list_V20_k134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k134" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k134, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 6 19) (close _V0vanity_V0list_V20_k135) (bruijn ##x.169 0 0) (bruijn t 1 1))
    V_CALL(VGetArg(upenv, 6-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k135, env)}),
      _var0,
      upenv->vars[1]);
 }
}
static void _V0vanity_V0list_V20_lambda38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_lambda38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0list_V20_lambda38, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_lambda38, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn car 5 18) (close _V0vanity_V0list_V20_k134) (bruijn lst 3 2))
    V_CALL(VGetArg(upenv, 5-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k134, env)}),
      upenv->up->up->vars[2]);
 }
}
static void _V0vanity_V0list_V20_k132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k132" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k132, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.164 0 0) ((bruijn values 4 10) (bruijn ##k.163 2 0) '() (bruijn lst 2 2)) ((bruijn call-with-values 4 9) (bruijn ##k.163 2 0) (close _V0vanity_V0list_V20_lambda37) (close _V0vanity_V0list_V20_lambda38)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->up->vars[10], runtime,
      upenv->up->vars[0],
      VNULL,
      upenv->up->vars[2]);
} else {
    V_CALL(upenv->up->up->up->vars[9], runtime,
      upenv->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_lambda37, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_lambda38, env)}));
}
 }
}
static void _V0vanity_V0list_V20_k128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k128" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k128, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0list_V20_k129) (close _V0vanity_V0list_V20_k132))
    V_CALL_FUNC(_V0vanity_V0list_V20_k129, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k132, env)}));
 }
}
static void _V0vanity_V0list_V20_lambda36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_lambda36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0list_V20_lambda36, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_lambda36, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 2 21) (close _V0vanity_V0list_V20_k128) (bruijn lst 0 2))
    V_CALL(upenv->up->vars[21], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k128, env)}),
      _var2);
 }
}
static void _V0vanity_V0list_V20_k139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k139" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k139, runtime, upenv, 1, argc, _var0) {
  // ((bruijn any? 5 22) (bruijn ##k.174 4 0) (bruijn p 4 1) (bruijn ##x.177 0 0))
    V_CALL(VGetArg(upenv, 5-1, 22), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->up->up->vars[1],
      _var0);
 }
}
static void _V0vanity_V0list_V20_k138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k138" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k138, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.176 0 0) ((bruijn ##k.174 3 0) #t) ((bruijn cdr 5 17) (close _V0vanity_V0list_V20_k139) (bruijn lst 3 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(true));
} else {
    V_CALL(VGetArg(upenv, 5-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k139, env)}),
      upenv->up->up->vars[2]);
}
 }
}
static void _V0vanity_V0list_V20_k137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k137" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k137, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn p 2 1) (close _V0vanity_V0list_V20_k138) (bruijn ##x.178 0 0))
    V_CALL(upenv->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k138, env)}),
      _var0);
 }
}
static void _V0vanity_V0list_V20_k136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k136" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k136, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.175 0 0) ((bruijn ##k.174 1 0) #f) ((bruijn car 3 18) (close _V0vanity_V0list_V20_k137) (bruijn lst 1 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
} else {
    V_CALL(upenv->up->up->vars[18], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k137, env)}),
      upenv->vars[2]);
}
 }
}
static void _V0vanity_V0list_V20_lambda39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_lambda39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0list_V20_lambda39, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_lambda39, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 2 21) (close _V0vanity_V0list_V20_k136) (bruijn p 0 1))
    V_CALL(upenv->up->vars[21], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k136, env)}),
      _var1);
 }
}
static void _V0vanity_V0list_V20_k140(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k140" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k140, runtime, upenv, 1, argc, _var0) {
  // ((bruijn not 3 11) (bruijn ##k.179 1 0) (bruijn ##x.180 0 0))
    V_CALL(upenv->up->up->vars[11], runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0list_V20_k141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k141" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k141, runtime, upenv, 1, argc, _var0) {
  // ((bruijn not 4 11) (bruijn ##k.181 1 0) (bruijn ##x.182 0 0))
    V_CALL(upenv->up->up->up->vars[11], runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0list_V20_lambda41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_lambda41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0list_V20_lambda41, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_lambda41, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn p 1 1) (close _V0vanity_V0list_V20_k141) (bruijn e 0 1))
    V_CALL(upenv->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k141, env)}),
      _var1);
 }
}
static void _V0vanity_V0list_V20_lambda40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_lambda40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0list_V20_lambda40, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_lambda40, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn any? 1 22) (close _V0vanity_V0list_V20_k140) (close _V0vanity_V0list_V20_lambda41) (bruijn lst 0 2))
    V_CALL(upenv->vars[22], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k140, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_lambda41, env)}),
      _var2);
 }
}
static void _V0vanity_V0list_V20_k146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k146" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k146, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 6 0) (bruijn ##k.184 5 0) (bruijn ##x.187 1 0) (bruijn ##x.188 0 0))
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VGetArg(upenv, 5-1, 0),
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0list_V20_k145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k145" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k145, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 8 17) (close _V0vanity_V0list_V20_k146) (bruijn lst 4 2))
    V_CALL(VGetArg(upenv, 8-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k146, env)}),
      upenv->up->up->up->vars[2]);
 }
}
static void _V0vanity_V0list_V20_k144(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k144" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k144, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.186 0 0) ((bruijn ##k.184 3 0) (bruijn i 3 1)) ((bruijn + 7 12) (close _V0vanity_V0list_V20_k145) (bruijn i 3 1) 1))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->vars[0], runtime,
      upenv->up->up->vars[1]);
} else {
    V_CALL(VGetArg(upenv, 7-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k145, env)}),
      upenv->up->up->vars[1],
      VEncodeInt(1l));
}
 }
}
static void _V0vanity_V0list_V20_k143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k143" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k143, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn p 4 1) (close _V0vanity_V0list_V20_k144) (bruijn ##x.189 0 0))
    V_CALL(upenv->up->up->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k144, env)}),
      _var0);
 }
}
static void _V0vanity_V0list_V20_k142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k142" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k142, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.185 0 0) ((bruijn ##k.184 1 0) #f) ((bruijn car 5 18) (close _V0vanity_V0list_V20_k143) (bruijn lst 1 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
} else {
    V_CALL(VGetArg(upenv, 5-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k143, env)}),
      upenv->vars[2]);
}
 }
}
static void _V0vanity_V0list_V20_lambda43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_lambda43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0list_V20_lambda43, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_lambda43, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 4 21) (close _V0vanity_V0list_V20_k142) (bruijn p 2 1))
    V_CALL(upenv->up->up->up->vars[21], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k142, env)}),
      upenv->up->vars[1]);
 }
}
static void _V0vanity_V0list_V20_lambda42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_lambda42" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0list_V20_lambda42, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_lambda42, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (letrec 1 ((close _V0vanity_V0list_V20_lambda43)) ((bruijn loop 0 0) (bruijn ##k.183 1 0) 0 (bruijn lst 1 2)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_lambda43, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VEncodeInt(0l),
      upenv->vars[2]);
    }
 }
}
static void _V0vanity_V0list_V20_k151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k151" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k151, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 7 19) (bruijn ##k.190 5 0) (bruijn ##x.192 3 0) (bruijn ##x.193 0 0))
    V_CALL(VGetArg(upenv, 7-1, 19), runtime,
      VGetArg(upenv, 5-1, 0),
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0list_V20_k150(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k150" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k150, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn insert 5 25) (close _V0vanity_V0list_V20_k151) (bruijn ##x.194 1 0) (bruijn ##x.195 0 0) (bruijn x 4 3))
    V_CALL(VGetArg(upenv, 5-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k151, env)}),
      upenv->vars[0],
      _var0,
      upenv->up->up->up->vars[3]);
 }
}
static void _V0vanity_V0list_V20_k149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k149" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k149, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn - 5 14) (close _V0vanity_V0list_V20_k150) (bruijn i 3 2) 1)
    V_CALL(VGetArg(upenv, 5-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k150, env)}),
      upenv->up->up->vars[2],
      VEncodeInt(1l));
 }
}
static void _V0vanity_V0list_V20_k148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k148" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k148, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 4 17) (close _V0vanity_V0list_V20_k149) (bruijn lst 2 1))
    V_CALL(upenv->up->up->up->vars[17], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k149, env)}),
      upenv->up->vars[1]);
 }
}
static void _V0vanity_V0list_V20_k147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k147" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k147, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.191 0 0) ((bruijn cons 3 19) (bruijn ##k.190 1 0) (bruijn x 1 3) (bruijn lst 1 1)) ((bruijn car 3 18) (close _V0vanity_V0list_V20_k148) (bruijn lst 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->vars[19], runtime,
      upenv->vars[0],
      upenv->vars[3],
      upenv->vars[1]);
} else {
    V_CALL(upenv->up->up->vars[18], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k148, env)}),
      upenv->vars[1]);
}
 }
}
static void _V0vanity_V0list_V20_lambda44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_lambda44" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0vanity_V0list_V20_lambda44, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_lambda44, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn = 2 13) (close _V0vanity_V0list_V20_k147) (bruijn i 0 2) 0)
    V_CALL(upenv->up->vars[13], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k147, env)}),
      _var2,
      VEncodeInt(0l));
 }
}
static void _V0vanity_V0list_V20_k156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k156" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k156, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 7 19) (bruijn ##k.196 5 0) (bruijn ##x.198 3 0) (bruijn ##x.199 0 0))
    V_CALL(VGetArg(upenv, 7-1, 19), runtime,
      VGetArg(upenv, 5-1, 0),
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0list_V20_k155(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k155" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k155, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn delete 5 26) (close _V0vanity_V0list_V20_k156) (bruijn ##x.200 1 0) (bruijn ##x.201 0 0))
    V_CALL(VGetArg(upenv, 5-1, 26), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k156, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0list_V20_k154(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k154" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k154, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn - 5 14) (close _V0vanity_V0list_V20_k155) (bruijn i 3 2) 1)
    V_CALL(VGetArg(upenv, 5-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k155, env)}),
      upenv->up->up->vars[2],
      VEncodeInt(1l));
 }
}
static void _V0vanity_V0list_V20_k153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k153" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k153, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 4 17) (close _V0vanity_V0list_V20_k154) (bruijn lst 2 1))
    V_CALL(upenv->up->up->up->vars[17], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k154, env)}),
      upenv->up->vars[1]);
 }
}
static void _V0vanity_V0list_V20_k152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k152" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k152, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.197 0 0) ((bruijn cdr 3 17) (bruijn ##k.196 1 0) (bruijn lst 1 1)) ((bruijn car 3 18) (close _V0vanity_V0list_V20_k153) (bruijn lst 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->vars[17], runtime,
      upenv->vars[0],
      upenv->vars[1]);
} else {
    V_CALL(upenv->up->up->vars[18], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k153, env)}),
      upenv->vars[1]);
}
 }
}
static void _V0vanity_V0list_V20_lambda45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_lambda45" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0list_V20_lambda45, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_lambda45, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn = 2 13) (close _V0vanity_V0list_V20_k152) (bruijn i 0 2) 0)
    V_CALL(upenv->up->vars[13], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k152, env)}),
      _var2,
      VEncodeInt(0l));
 }
}
static void _V0vanity_V0list_V20_k158(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k158" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k158, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 4 19) (bruijn ##k.202 2 0) (bruijn ##x.204 0 0) '())
    V_CALL(upenv->up->up->up->vars[19], runtime,
      upenv->up->vars[0],
      _var0,
      VNULL);
 }
}
static void _V0vanity_V0list_V20_k162(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k162" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k162, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 7 19) (bruijn ##k.202 5 0) (bruijn ##x.206 1 0) (bruijn ##x.207 0 0))
    V_CALL(VGetArg(upenv, 7-1, 19), runtime,
      VGetArg(upenv, 5-1, 0),
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0list_V20_k161(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k161" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k161, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 6 17) (close _V0vanity_V0list_V20_k162) (bruijn lst 4 1))
    V_CALL(VGetArg(upenv, 6-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k162, env)}),
      upenv->up->up->up->vars[1]);
 }
}
static void _V0vanity_V0list_V20_k165(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k165" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k165, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 8 19) (bruijn ##k.202 6 0) (bruijn ##x.208 2 0) (bruijn ##x.209 0 0))
    V_CALL(VGetArg(upenv, 8-1, 19), runtime,
      VGetArg(upenv, 6-1, 0),
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0list_V20_k164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k164" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k164, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn assoc-update 6 29) (close _V0vanity_V0list_V20_k165) (bruijn ##x.210 0 0) (bruijn x 5 2) (bruijn val 5 3))
    V_CALL(VGetArg(upenv, 6-1, 29), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k165, env)}),
      _var0,
      VGetArg(upenv, 5-1, 2),
      VGetArg(upenv, 5-1, 3));
 }
}
static void _V0vanity_V0list_V20_k163(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k163" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k163, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 6 17) (close _V0vanity_V0list_V20_k164) (bruijn lst 4 1))
    V_CALL(VGetArg(upenv, 6-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k164, env)}),
      upenv->up->up->up->vars[1]);
 }
}
static void _V0vanity_V0list_V20_k160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k160" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k160, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.205 0 0) ((bruijn cons 5 19) (close _V0vanity_V0list_V20_k161) (bruijn x 3 2) (bruijn val 3 3)) ((bruijn car 5 18) (close _V0vanity_V0list_V20_k163) (bruijn lst 3 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 5-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k161, env)}),
      upenv->up->up->vars[2],
      upenv->up->up->vars[3]);
} else {
    V_CALL(VGetArg(upenv, 5-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k163, env)}),
      upenv->up->up->vars[1]);
}
 }
}
static void _V0vanity_V0list_V20_k159(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k159" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k159, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn eq? 4 15) (close _V0vanity_V0list_V20_k160) (bruijn x 2 2) (bruijn ##x.211 0 0))
    V_CALL(upenv->up->up->up->vars[15], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k160, env)}),
      upenv->up->vars[2],
      _var0);
 }
}
static void _V0vanity_V0list_V20_k157(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k157" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k157, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.203 0 0) ((bruijn cons 3 19) (close _V0vanity_V0list_V20_k158) (bruijn x 1 2) (bruijn val 1 3)) ((bruijn caar 3 20) (close _V0vanity_V0list_V20_k159) (bruijn lst 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->vars[19], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k158, env)}),
      upenv->vars[2],
      upenv->vars[3]);
} else {
    V_CALL(upenv->up->up->vars[20], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k159, env)}),
      upenv->vars[1]);
}
 }
}
static void _V0vanity_V0list_V20_lambda46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_lambda46" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0vanity_V0list_V20_lambda46, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_lambda46, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn null? 2 21) (close _V0vanity_V0list_V20_k157) (bruijn lst 0 1))
    V_CALL(upenv->up->vars[21], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k157, env)}),
      _var1);
 }
}
static void _V0vanity_V0list_V20_k167(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k167" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k167, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 4 19) (bruijn ##k.212 2 0) (bruijn ##x.214 0 0) '())
    V_CALL(upenv->up->up->up->vars[19], runtime,
      upenv->up->vars[0],
      _var0,
      VNULL);
 }
}
static void _V0vanity_V0list_V20_k171(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k171" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k171, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 7 19) (bruijn ##k.212 5 0) (bruijn ##x.216 1 0) (bruijn ##x.217 0 0))
    V_CALL(VGetArg(upenv, 7-1, 19), runtime,
      VGetArg(upenv, 5-1, 0),
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0list_V20_k170(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k170" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k170, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 6 17) (close _V0vanity_V0list_V20_k171) (bruijn lst 4 1))
    V_CALL(VGetArg(upenv, 6-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k171, env)}),
      upenv->up->up->up->vars[1]);
 }
}
static void _V0vanity_V0list_V20_k174(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k174" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k174, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 8 19) (bruijn ##k.212 6 0) (bruijn ##x.218 2 0) (bruijn ##x.219 0 0))
    V_CALL(VGetArg(upenv, 8-1, 19), runtime,
      VGetArg(upenv, 6-1, 0),
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0list_V20_k173(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k173" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k173, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn assoc-update 6 29) (close _V0vanity_V0list_V20_k174) (bruijn ##x.220 0 0) (bruijn x 5 2) (bruijn val 5 3))
    V_CALL(VGetArg(upenv, 6-1, 29), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k174, env)}),
      _var0,
      VGetArg(upenv, 5-1, 2),
      VGetArg(upenv, 5-1, 3));
 }
}
static void _V0vanity_V0list_V20_k172(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k172" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k172, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 6 17) (close _V0vanity_V0list_V20_k173) (bruijn lst 4 1))
    V_CALL(VGetArg(upenv, 6-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k173, env)}),
      upenv->up->up->up->vars[1]);
 }
}
static void _V0vanity_V0list_V20_k169(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k169" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k169, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.215 0 0) ((bruijn cons 5 19) (close _V0vanity_V0list_V20_k170) (bruijn x 3 2) (bruijn val 3 3)) ((bruijn car 5 18) (close _V0vanity_V0list_V20_k172) (bruijn lst 3 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 5-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k170, env)}),
      upenv->up->up->vars[2],
      upenv->up->up->vars[3]);
} else {
    V_CALL(VGetArg(upenv, 5-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k172, env)}),
      upenv->up->up->vars[1]);
}
 }
}
static void _V0vanity_V0list_V20_k168(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k168" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k168, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn eqv? 4 16) (close _V0vanity_V0list_V20_k169) (bruijn x 2 2) (bruijn ##x.221 0 0))
    V_CALL(upenv->up->up->up->vars[16], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k169, env)}),
      upenv->up->vars[2],
      _var0);
 }
}
static void _V0vanity_V0list_V20_k166(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k166" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k166, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.213 0 0) ((bruijn cons 3 19) (close _V0vanity_V0list_V20_k167) (bruijn x 1 2) (bruijn val 1 3)) ((bruijn caar 3 20) (close _V0vanity_V0list_V20_k168) (bruijn lst 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->vars[19], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k167, env)}),
      upenv->vars[2],
      upenv->vars[3]);
} else {
    V_CALL(upenv->up->up->vars[20], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k168, env)}),
      upenv->vars[1]);
}
 }
}
static void _V0vanity_V0list_V20_lambda47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_lambda47" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0vanity_V0list_V20_lambda47, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_lambda47, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn null? 2 21) (close _V0vanity_V0list_V20_k166) (bruijn lst 0 1))
    V_CALL(upenv->up->vars[21], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k166, env)}),
      _var1);
 }
}
static void _V0vanity_V0list_V20_k176(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k176" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k176, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 4 19) (bruijn ##k.223 2 0) (bruijn ##x.225 0 0) '())
    V_CALL(upenv->up->up->up->vars[19], runtime,
      upenv->up->vars[0],
      _var0,
      VNULL);
 }
}
static void _V0vanity_V0list_V20_k180(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k180" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k180, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 7 19) (bruijn ##k.223 5 0) (bruijn ##x.227 1 0) (bruijn ##x.228 0 0))
    V_CALL(VGetArg(upenv, 7-1, 19), runtime,
      VGetArg(upenv, 5-1, 0),
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0list_V20_k179(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k179" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k179, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 6 17) (close _V0vanity_V0list_V20_k180) (bruijn lst 4 1))
    V_CALL(VGetArg(upenv, 6-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k180, env)}),
      upenv->up->up->up->vars[1]);
 }
}
static void _V0vanity_V0list_V20_k183(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k183" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k183, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 8 19) (bruijn ##k.223 6 0) (bruijn ##x.229 2 0) (bruijn ##x.230 0 0))
    V_CALL(VGetArg(upenv, 8-1, 19), runtime,
      VGetArg(upenv, 6-1, 0),
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0list_V20_k182(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k182" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k182, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn assoc-update 6 29) (close _V0vanity_V0list_V20_k183) (bruijn ##x.231 0 0) (bruijn x 5 2) (bruijn val 5 3))
    V_CALL(VGetArg(upenv, 6-1, 29), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k183, env)}),
      _var0,
      VGetArg(upenv, 5-1, 2),
      VGetArg(upenv, 5-1, 3));
 }
}
static void _V0vanity_V0list_V20_k181(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k181" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k181, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 6 17) (close _V0vanity_V0list_V20_k182) (bruijn lst 4 1))
    V_CALL(VGetArg(upenv, 6-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k182, env)}),
      upenv->up->up->up->vars[1]);
 }
}
static void _V0vanity_V0list_V20_k178(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k178" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k178, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.226 0 0) ((bruijn cons 5 19) (close _V0vanity_V0list_V20_k179) (bruijn x 3 2) (bruijn val 3 3)) ((bruijn car 5 18) (close _V0vanity_V0list_V20_k181) (bruijn lst 3 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 5-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k179, env)}),
      upenv->up->up->vars[2],
      upenv->up->up->vars[3]);
} else {
    V_CALL(VGetArg(upenv, 5-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k181, env)}),
      upenv->up->up->vars[1]);
}
 }
}
static void _V0vanity_V0list_V20_k177(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k177" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k177, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn = 2 4) (close _V0vanity_V0list_V20_k178) (bruijn x 2 2) (bruijn ##x.232 0 0))
    V_CALL(upenv->up->vars[4], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k178, env)}),
      upenv->up->vars[2],
      _var0);
 }
}
static void _V0vanity_V0list_V20_k175(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k175" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k175, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.224 0 0) ((bruijn cons 3 19) (close _V0vanity_V0list_V20_k176) (bruijn x 1 2) (bruijn val 1 3)) ((bruijn caar 3 20) (close _V0vanity_V0list_V20_k177) (bruijn lst 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->vars[19], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k176, env)}),
      upenv->vars[2],
      upenv->vars[3]);
} else {
    V_CALL(upenv->up->up->vars[20], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k177, env)}),
      upenv->vars[1]);
}
 }
}
__attribute__((used)) static void _V20CaseError__V0vanity_V0list_V20_lambda48(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0vanity_V0list_V20_lambda48 #t (4 ((bruijn assoc-update 1 29) (bruijn ##k.222 0 0) (bruijn lst 0 1) (bruijn x 0 2) (bruijn val 0 3) (bruijn equal? 2 22))) (5 ((bruijn null? 2 21) (close _V0vanity_V0list_V20_k175) (bruijn lst 0 1))))
 VError("Not enough arguments to _V0vanity_V0list_V20_lambda48, got ~D~N"
 "-- expected 4~N"
 "-- expected 5~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0vanity_V0list_V20_lambda48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case0__V0vanity_V0list_V20_lambda48" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0vanity_V0list_V20_lambda48, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  // ((bruijn assoc-update 1 29) (bruijn ##k.222 0 0) (bruijn lst 0 1) (bruijn x 0 2) (bruijn val 0 3) (bruijn equal? 2 22))
    V_CALL(upenv->vars[29], runtime,
      _var0,
      _var1,
      _var2,
      _var3,
      upenv->up->vars[22]);
 }
}
__attribute__((used)) static void _V20Case1__V0vanity_V0list_V20_lambda48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 static VDebugInfo dbg = { "_V20Case1__V0vanity_V0list_V20_lambda48" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0vanity_V0list_V20_lambda48, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 5, 5, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // ((bruijn null? 2 21) (close _V0vanity_V0list_V20_k175) (bruijn lst 0 1))
    V_CALL(upenv->up->vars[21], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k175, env)}),
      _var1);
 }
}
void _V0vanity_V0list_V20_lambda48(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V0vanity_V0list_V20_lambda48, @function\n"
#endif
"_V0vanity_V0list_V20_lambda48:\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case0__V0vanity_V0list_V20_lambda48\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case1__V0vanity_V0list_V20_lambda48\n"
"    jmp _V20CaseError__V0vanity_V0list_V20_lambda48\n"
);
static void _V0vanity_V0list_V20_lambda2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17, VWORD _var18, VWORD _var19, VWORD _var20, VWORD _var21, VWORD _var22) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_lambda2" };
 VRecordCall2(runtime, &dbg);
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
  // (letrec 30 ((close _V0vanity_V0list_V20_lambda3) (close _V0vanity_V0list_V20_lambda7) (close _V0vanity_V0list_V20_lambda9) (close _V0vanity_V0list_V20_lambda10) (close _V0vanity_V0list_V20_lambda11) (close _V0vanity_V0list_V20_lambda13) (close _V0vanity_V0list_V20_lambda15) (close _V0vanity_V0list_V20_lambda18) (close _V0vanity_V0list_V20_lambda19) (close _V0vanity_V0list_V20_lambda20) (close _V0vanity_V0list_V20_lambda21) (close _V0vanity_V0list_V20_lambda22) (close _V0vanity_V0list_V20_lambda23) (close _V0vanity_V0list_V20_lambda24) (close _V0vanity_V0list_V20_lambda25) (close _V0vanity_V0list_V20_lambda26) (close _V0vanity_V0list_V20_lambda28) (close _V0vanity_V0list_V20_lambda30) (close _V0vanity_V0list_V20_lambda31) (close _V0vanity_V0list_V20_lambda34) (close _V0vanity_V0list_V20_lambda35) (close _V0vanity_V0list_V20_lambda36) (close _V0vanity_V0list_V20_lambda39) (close _V0vanity_V0list_V20_lambda40) (close _V0vanity_V0list_V20_lambda42) (close _V0vanity_V0list_V20_lambda44) (close _V0vanity_V0list_V20_lambda45) (close _V0vanity_V0list_V20_lambda46) (close _V0vanity_V0list_V20_lambda47) (close _V0vanity_V0list_V20_lambda48)) ((bruijn ##k.2 27 0) (##inline ##vcore.cons (##inline ##vcore.cons 'iota (bruijn iota 0 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'list-tabulate (bruijn list-tabulate 0 1)) (##inline ##vcore.cons (##inline ##vcore.cons 'take (bruijn take 0 2)) (##inline ##vcore.cons (##inline ##vcore.cons 'drop (bruijn drop 0 3)) (##inline ##vcore.cons (##inline ##vcore.cons 'take-right (bruijn take-right 0 4)) (##inline ##vcore.cons (##inline ##vcore.cons 'drop-right (bruijn drop-right 0 5)) (##inline ##vcore.cons (##inline ##vcore.cons 'split-at (bruijn split-at 0 6)) (##inline ##vcore.cons (##inline ##vcore.cons 'fold (bruijn fold 0 7)) (##inline ##vcore.cons (##inline ##vcore.cons 'fold-right (bruijn fold-right 0 8)) (##inline ##vcore.cons (##inline ##vcore.cons 'concatenate (bruijn concatenate 0 9)) (##inline ##vcore.cons (##inline ##vcore.cons 'zip (bruijn zip 0 10)) (##inline ##vcore.cons (##inline ##vcore.cons 'unzip1 (bruijn unzip1 0 11)) (##inline ##vcore.cons (##inline ##vcore.cons 'unzip2 (bruijn unzip2 0 12)) (##inline ##vcore.cons (##inline ##vcore.cons 'unzip3 (bruijn unzip3 0 13)) (##inline ##vcore.cons (##inline ##vcore.cons 'unzip4 (bruijn unzip4 0 14)) (##inline ##vcore.cons (##inline ##vcore.cons 'unzip5 (bruijn unzip5 0 15)) (##inline ##vcore.cons (##inline ##vcore.cons 'count (bruijn count 0 16)) (##inline ##vcore.cons (##inline ##vcore.cons 'filter (bruijn filter 0 17)) (##inline ##vcore.cons (##inline ##vcore.cons 'partition (bruijn partition 0 18)) (##inline ##vcore.cons (##inline ##vcore.cons 'take-while (bruijn take-while 0 19)) (##inline ##vcore.cons (##inline ##vcore.cons 'drop-while (bruijn drop-while 0 20)) (##inline ##vcore.cons (##inline ##vcore.cons 'split-while (bruijn split-while 0 21)) (##inline ##vcore.cons (##inline ##vcore.cons 'any? (bruijn any? 0 22)) (##inline ##vcore.cons (##inline ##vcore.cons 'every? (bruijn every? 0 23)) (##inline ##vcore.cons (##inline ##vcore.cons 'list-index (bruijn list-index 0 24)) (##inline ##vcore.cons (##inline ##vcore.cons 'insert (bruijn insert 0 25)) (##inline ##vcore.cons (##inline ##vcore.cons 'delete (bruijn delete 0 26)) (##inline ##vcore.cons (##inline ##vcore.cons 'assq-update (bruijn assq-update 0 27)) (##inline ##vcore.cons (##inline ##vcore.cons 'assv-update (bruijn assv-update 0 28)) (##inline ##vcore.cons (##inline ##vcore.cons 'assoc-update (bruijn assoc-update 0 29)) '()))))))))))))))))))))))))))))))))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[30]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 30, 30, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_lambda3, env)});
    env->vars[1] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_lambda7, env)});
    env->vars[2] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_lambda9, env)});
    env->vars[3] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_lambda10, env)});
    env->vars[4] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_lambda11, env)});
    env->vars[5] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_lambda13, env)});
    env->vars[6] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_lambda15, env)});
    env->vars[7] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_lambda18, env)});
    env->vars[8] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_lambda19, env)});
    env->vars[9] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_lambda20, env)});
    env->vars[10] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_lambda21, env)});
    env->vars[11] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_lambda22, env)});
    env->vars[12] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_lambda23, env)});
    env->vars[13] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_lambda24, env)});
    env->vars[14] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_lambda25, env)});
    env->vars[15] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_lambda26, env)});
    env->vars[16] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_lambda28, env)});
    env->vars[17] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_lambda30, env)});
    env->vars[18] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_lambda31, env)});
    env->vars[19] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_lambda34, env)});
    env->vars[20] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_lambda35, env)});
    env->vars[21] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_lambda36, env)});
    env->vars[22] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_lambda39, env)});
    env->vars[23] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_lambda40, env)});
    env->vars[24] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_lambda42, env)});
    env->vars[25] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_lambda44, env)});
    env->vars[26] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_lambda45, env)});
    env->vars[27] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_lambda46, env)});
    env->vars[28] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_lambda47, env)});
    env->vars[29] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_lambda48, env)});
    V_CALL(VGetArg(upenv, 27-1, 0), runtime,
      VInlineCons(
        VInlineCons(
        _V0iota,
        env->vars[0]),
        VInlineCons(
        VInlineCons(
        _V0list__tabulate,
        env->vars[1]),
        VInlineCons(
        VInlineCons(
        _V0take,
        env->vars[2]),
        VInlineCons(
        VInlineCons(
        _V0drop,
        env->vars[3]),
        VInlineCons(
        VInlineCons(
        _V0take__right,
        env->vars[4]),
        VInlineCons(
        VInlineCons(
        _V0drop__right,
        env->vars[5]),
        VInlineCons(
        VInlineCons(
        _V0split__at,
        env->vars[6]),
        VInlineCons(
        VInlineCons(
        _V0fold,
        env->vars[7]),
        VInlineCons(
        VInlineCons(
        _V0fold__right,
        env->vars[8]),
        VInlineCons(
        VInlineCons(
        _V0concatenate,
        env->vars[9]),
        VInlineCons(
        VInlineCons(
        _V0zip,
        env->vars[10]),
        VInlineCons(
        VInlineCons(
        _V0unzip1,
        env->vars[11]),
        VInlineCons(
        VInlineCons(
        _V0unzip2,
        env->vars[12]),
        VInlineCons(
        VInlineCons(
        _V0unzip3,
        env->vars[13]),
        VInlineCons(
        VInlineCons(
        _V0unzip4,
        env->vars[14]),
        VInlineCons(
        VInlineCons(
        _V0unzip5,
        env->vars[15]),
        VInlineCons(
        VInlineCons(
        _V0count,
        env->vars[16]),
        VInlineCons(
        VInlineCons(
        _V0filter,
        env->vars[17]),
        VInlineCons(
        VInlineCons(
        _V0partition,
        env->vars[18]),
        VInlineCons(
        VInlineCons(
        _V0take__while,
        env->vars[19]),
        VInlineCons(
        VInlineCons(
        _V0drop__while,
        env->vars[20]),
        VInlineCons(
        VInlineCons(
        _V0split__while,
        env->vars[21]),
        VInlineCons(
        VInlineCons(
        _V0any_Q,
        env->vars[22]),
        VInlineCons(
        VInlineCons(
        _V0every_Q,
        env->vars[23]),
        VInlineCons(
        VInlineCons(
        _V0list__index,
        env->vars[24]),
        VInlineCons(
        VInlineCons(
        _V0insert,
        env->vars[25]),
        VInlineCons(
        VInlineCons(
        _V0delete,
        env->vars[26]),
        VInlineCons(
        VInlineCons(
        _V0assq__update,
        env->vars[27]),
        VInlineCons(
        VInlineCons(
        _V0assv__update,
        env->vars[28]),
        VInlineCons(
        VInlineCons(
        _V0assoc__update,
        env->vars[29]),
        VNULL)))))))))))))))))))))))))))))));
    }
 }
}
static void _V0vanity_V0list_V20_k25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k25, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0list_V20_lambda2) (bruijn ##x.3 22 0) (bruijn ##x.4 21 0) (bruijn ##x.5 20 0) (bruijn ##x.6 19 0) (bruijn ##x.7 18 0) (bruijn ##x.8 17 0) (bruijn ##x.9 16 0) (bruijn ##x.10 15 0) (bruijn ##x.11 14 0) (bruijn ##x.12 13 0) (bruijn ##x.13 12 0) (bruijn ##x.14 11 0) (bruijn ##x.15 10 0) (bruijn ##x.16 9 0) (bruijn ##x.17 8 0) (bruijn ##x.18 7 0) (bruijn ##x.19 6 0) (bruijn ##x.20 5 0) (bruijn ##x.21 4 0) (bruijn ##x.22 3 0) (bruijn ##x.23 2 0) (bruijn ##x.24 1 0) (bruijn ##x.25 0 0))
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
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k24, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 22 0) (close _V0vanity_V0list_V20_k25) 'equal?)
    V_CALL(VGetArg(upenv, 22-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k25, env)}),
      _V0equal_Q);
 }
}
static void _V0vanity_V0list_V20_k23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k23, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 21 0) (close _V0vanity_V0list_V20_k24) 'null?)
    V_CALL(VGetArg(upenv, 21-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k24, env)}),
      _V0null_Q);
 }
}
static void _V0vanity_V0list_V20_k22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k22, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 20 0) (close _V0vanity_V0list_V20_k23) 'caar)
    V_CALL(VGetArg(upenv, 20-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k23, env)}),
      _V0caar);
 }
}
static void _V0vanity_V0list_V20_k21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k21, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 19 0) (close _V0vanity_V0list_V20_k22) 'cons)
    V_CALL(VGetArg(upenv, 19-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k22, env)}),
      _V0cons);
 }
}
static void _V0vanity_V0list_V20_k20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k20, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 18 0) (close _V0vanity_V0list_V20_k21) 'car)
    V_CALL(VGetArg(upenv, 18-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k21, env)}),
      _V0car);
 }
}
static void _V0vanity_V0list_V20_k19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k19, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 17 0) (close _V0vanity_V0list_V20_k20) 'cdr)
    V_CALL(VGetArg(upenv, 17-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k20, env)}),
      _V0cdr);
 }
}
static void _V0vanity_V0list_V20_k18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k18, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 16 0) (close _V0vanity_V0list_V20_k19) 'eqv?)
    V_CALL(VGetArg(upenv, 16-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k19, env)}),
      _V0eqv_Q);
 }
}
static void _V0vanity_V0list_V20_k17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k17, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 15 0) (close _V0vanity_V0list_V20_k18) 'eq?)
    V_CALL(VGetArg(upenv, 15-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k18, env)}),
      _V0eq_Q);
 }
}
static void _V0vanity_V0list_V20_k16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k16, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 14 0) (close _V0vanity_V0list_V20_k17) '-)
    V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k17, env)}),
      _V0__);
 }
}
static void _V0vanity_V0list_V20_k15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k15, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 13 0) (close _V0vanity_V0list_V20_k16) '=)
    V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k16, env)}),
      _V0_E);
 }
}
static void _V0vanity_V0list_V20_k14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k14, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 12 0) (close _V0vanity_V0list_V20_k15) '+)
    V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k15, env)}),
      _V0_P);
 }
}
static void _V0vanity_V0list_V20_k13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k13, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 11 0) (close _V0vanity_V0list_V20_k14) 'not)
    V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k14, env)}),
      _V0not);
 }
}
static void _V0vanity_V0list_V20_k12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k12, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 10 0) (close _V0vanity_V0list_V20_k13) 'values)
    V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k13, env)}),
      _V0values);
 }
}
static void _V0vanity_V0list_V20_k11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k11, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 9 0) (close _V0vanity_V0list_V20_k12) 'call-with-values)
    V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k12, env)}),
      _V0call__with__values);
 }
}
static void _V0vanity_V0list_V20_k10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k10, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 8 0) (close _V0vanity_V0list_V20_k11) 'map)
    V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k11, env)}),
      _V0map);
 }
}
static void _V0vanity_V0list_V20_k9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k9, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 7 0) (close _V0vanity_V0list_V20_k10) 'cadddr)
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k10, env)}),
      _V0cadddr);
 }
}
static void _V0vanity_V0list_V20_k8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k8, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 6 0) (close _V0vanity_V0list_V20_k9) 'caddr)
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k9, env)}),
      _V0caddr);
 }
}
static void _V0vanity_V0list_V20_k7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k7, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 5 0) (close _V0vanity_V0list_V20_k8) 'cadr)
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k8, env)}),
      _V0cadr);
 }
}
static void _V0vanity_V0list_V20_k6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k6, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 4 0) (close _V0vanity_V0list_V20_k7) 'list)
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k7, env)}),
      _V0list);
 }
}
static void _V0vanity_V0list_V20_k5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k5, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 3 0) (close _V0vanity_V0list_V20_k6) 'apply)
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k6, env)}),
      _V0apply);
 }
}
static void _V0vanity_V0list_V20_k4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k4, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 2 0) (close _V0vanity_V0list_V20_k5) 'append)
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k5, env)}),
      _V0append);
 }
}
static void _V0vanity_V0list_V20_k3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k3, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 1 0) (close _V0vanity_V0list_V20_k4) 'length)
    V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k4, env)}),
      _V0length);
 }
}
static void _V0vanity_V0list_V20_k2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k2, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 0 0) (close _V0vanity_V0list_V20_k3) '*)
    V_CALL(_var0, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k3, env)}),
      _V0_S);
 }
}
static void _V0vanity_V0list_V20_k1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.make-import (close _V0vanity_V0list_V20_k2) (##string ##string.293) (bruijn ##x.292 0 0))
    V_CALL_FUNC(VMakeImport2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k2, env)}),
      VEncodePointer(&_V10string_D293.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V0vanity_V0list_V20_lambda1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_lambda1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_lambda1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0list_V20_k1) (##string ##string.294))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k1, env)}),
      VEncodePointer(&_V10string_D294.sym, VPOINTER_OTHER));
 }
}
VFunc _V0vanity_V0list_V20 = (VFunc)_V0vanity_V0list_V20_lambda1;
