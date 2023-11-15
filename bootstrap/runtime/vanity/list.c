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
static struct { VBlob sym; char bytes[21]; } _V10string_D341 = { { VSTRING, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10string_D340 = { { VSTRING, 21 }, "_V0vanity_V0list_V20" };
struct { VBlob sym; char bytes[4]; } _V0cdr __attribute__((weak)) = { { VSYMBOL, 4 }, "cdr" };
struct { VBlob sym; char bytes[4]; } _V0car __attribute__((weak)) = { { VSYMBOL, 4 }, "car" };
struct { VBlob sym; char bytes[5]; } _V0cons __attribute__((weak)) = { { VSYMBOL, 5 }, "cons" };
struct { VBlob sym; char bytes[5]; } _V0caar __attribute__((weak)) = { { VSYMBOL, 5 }, "caar" };
struct { VBlob sym; char bytes[6]; } _V0null_Q __attribute__((weak)) = { { VSYMBOL, 6 }, "null\?" };
struct { VBlob sym; char bytes[7]; } _V0equal_Q __attribute__((weak)) = { { VSYMBOL, 7 }, "equal\?" };
struct { VBlob sym; char bytes[5]; } _V0eqv_Q __attribute__((weak)) = { { VSYMBOL, 5 }, "eqv\?" };
struct { VBlob sym; char bytes[4]; } _V0eq_Q __attribute__((weak)) = { { VSYMBOL, 4 }, "eq\?" };
struct { VBlob sym; char bytes[2]; } _V0_E __attribute__((weak)) = { { VSYMBOL, 2 }, "=" };
struct { VBlob sym; char bytes[2]; } _V0__ __attribute__((weak)) = { { VSYMBOL, 2 }, "-" };
struct { VBlob sym; char bytes[2]; } _V0_P __attribute__((weak)) = { { VSYMBOL, 2 }, "+" };
struct { VBlob sym; char bytes[4]; } _V0not __attribute__((weak)) = { { VSYMBOL, 4 }, "not" };
struct { VBlob sym; char bytes[17]; } _V0call__with__values __attribute__((weak)) = { { VSYMBOL, 17 }, "call-with-values" };
struct { VBlob sym; char bytes[7]; } _V0values __attribute__((weak)) = { { VSYMBOL, 7 }, "values" };
struct { VBlob sym; char bytes[5]; } _V0cadr __attribute__((weak)) = { { VSYMBOL, 5 }, "cadr" };
struct { VBlob sym; char bytes[6]; } _V0caddr __attribute__((weak)) = { { VSYMBOL, 6 }, "caddr" };
struct { VBlob sym; char bytes[7]; } _V0cadddr __attribute__((weak)) = { { VSYMBOL, 7 }, "cadddr" };
struct { VBlob sym; char bytes[4]; } _V0map __attribute__((weak)) = { { VSYMBOL, 4 }, "map" };
struct { VBlob sym; char bytes[6]; } _V0apply __attribute__((weak)) = { { VSYMBOL, 6 }, "apply" };
struct { VBlob sym; char bytes[5]; } _V0list __attribute__((weak)) = { { VSYMBOL, 5 }, "list" };
struct { VBlob sym; char bytes[7]; } _V0append __attribute__((weak)) = { { VSYMBOL, 7 }, "append" };
struct { VBlob sym; char bytes[7]; } _V0length __attribute__((weak)) = { { VSYMBOL, 7 }, "length" };
struct { VBlob sym; char bytes[2]; } _V0_S __attribute__((weak)) = { { VSYMBOL, 2 }, "*" };
struct { VBlob sym; char bytes[13]; } _V0assoc__update __attribute__((weak)) = { { VSYMBOL, 13 }, "assoc-update" };
struct { VBlob sym; char bytes[12]; } _V0assv__update __attribute__((weak)) = { { VSYMBOL, 12 }, "assv-update" };
struct { VBlob sym; char bytes[12]; } _V0assq__update __attribute__((weak)) = { { VSYMBOL, 12 }, "assq-update" };
struct { VBlob sym; char bytes[7]; } _V0delete __attribute__((weak)) = { { VSYMBOL, 7 }, "delete" };
struct { VBlob sym; char bytes[7]; } _V0insert __attribute__((weak)) = { { VSYMBOL, 7 }, "insert" };
struct { VBlob sym; char bytes[11]; } _V0list__index __attribute__((weak)) = { { VSYMBOL, 11 }, "list-index" };
struct { VBlob sym; char bytes[7]; } _V0every_Q __attribute__((weak)) = { { VSYMBOL, 7 }, "every\?" };
struct { VBlob sym; char bytes[5]; } _V0any_Q __attribute__((weak)) = { { VSYMBOL, 5 }, "any\?" };
struct { VBlob sym; char bytes[12]; } _V0split__while __attribute__((weak)) = { { VSYMBOL, 12 }, "split-while" };
struct { VBlob sym; char bytes[11]; } _V0drop__while __attribute__((weak)) = { { VSYMBOL, 11 }, "drop-while" };
struct { VBlob sym; char bytes[11]; } _V0take__while __attribute__((weak)) = { { VSYMBOL, 11 }, "take-while" };
struct { VBlob sym; char bytes[10]; } _V0partition __attribute__((weak)) = { { VSYMBOL, 10 }, "partition" };
struct { VBlob sym; char bytes[7]; } _V0filter __attribute__((weak)) = { { VSYMBOL, 7 }, "filter" };
struct { VBlob sym; char bytes[6]; } _V0count __attribute__((weak)) = { { VSYMBOL, 6 }, "count" };
struct { VBlob sym; char bytes[7]; } _V0unzip5 __attribute__((weak)) = { { VSYMBOL, 7 }, "unzip5" };
struct { VBlob sym; char bytes[7]; } _V0unzip4 __attribute__((weak)) = { { VSYMBOL, 7 }, "unzip4" };
struct { VBlob sym; char bytes[7]; } _V0unzip3 __attribute__((weak)) = { { VSYMBOL, 7 }, "unzip3" };
struct { VBlob sym; char bytes[7]; } _V0unzip2 __attribute__((weak)) = { { VSYMBOL, 7 }, "unzip2" };
struct { VBlob sym; char bytes[7]; } _V0unzip1 __attribute__((weak)) = { { VSYMBOL, 7 }, "unzip1" };
struct { VBlob sym; char bytes[4]; } _V0zip __attribute__((weak)) = { { VSYMBOL, 4 }, "zip" };
struct { VBlob sym; char bytes[12]; } _V0concatenate __attribute__((weak)) = { { VSYMBOL, 12 }, "concatenate" };
struct { VBlob sym; char bytes[11]; } _V0fold__right __attribute__((weak)) = { { VSYMBOL, 11 }, "fold-right" };
struct { VBlob sym; char bytes[5]; } _V0fold __attribute__((weak)) = { { VSYMBOL, 5 }, "fold" };
struct { VBlob sym; char bytes[9]; } _V0split__at __attribute__((weak)) = { { VSYMBOL, 9 }, "split-at" };
struct { VBlob sym; char bytes[11]; } _V0drop__right __attribute__((weak)) = { { VSYMBOL, 11 }, "drop-right" };
struct { VBlob sym; char bytes[11]; } _V0take__right __attribute__((weak)) = { { VSYMBOL, 11 }, "take-right" };
struct { VBlob sym; char bytes[5]; } _V0drop __attribute__((weak)) = { { VSYMBOL, 5 }, "drop" };
struct { VBlob sym; char bytes[5]; } _V0take __attribute__((weak)) = { { VSYMBOL, 5 }, "take" };
struct { VBlob sym; char bytes[14]; } _V0list__tabulate __attribute__((weak)) = { { VSYMBOL, 14 }, "list-tabulate" };
struct { VBlob sym; char bytes[5]; } _V0iota __attribute__((weak)) = { { VSYMBOL, 5 }, "iota" };
static void _V0vanity_V0list_V20_k55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k55" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k55, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.3 30 0) (##inline ##sys.cons (##inline ##sys.cons (quote iota) (bruijn iota 30 1)) (##inline ##sys.cons (##inline ##sys.cons (quote list-tabulate) (bruijn list-tabulate 30 2)) (##inline ##sys.cons (##inline ##sys.cons (quote take) (bruijn take 30 3)) (##inline ##sys.cons (##inline ##sys.cons (quote drop) (bruijn drop 30 4)) (##inline ##sys.cons (##inline ##sys.cons (quote take-right) (bruijn take-right 30 5)) (##inline ##sys.cons (##inline ##sys.cons (quote drop-right) (bruijn drop-right 30 6)) (##inline ##sys.cons (##inline ##sys.cons (quote split-at) (bruijn split-at 30 7)) (##inline ##sys.cons (##inline ##sys.cons (quote fold) (bruijn fold 30 8)) (##inline ##sys.cons (##inline ##sys.cons (quote fold-right) (bruijn fold-right 30 9)) (##inline ##sys.cons (##inline ##sys.cons (quote concatenate) (bruijn concatenate 30 10)) (##inline ##sys.cons (##inline ##sys.cons (quote zip) (bruijn zip 30 11)) (##inline ##sys.cons (##inline ##sys.cons (quote unzip1) (bruijn unzip1 30 12)) (##inline ##sys.cons (##inline ##sys.cons (quote unzip2) (bruijn unzip2 30 13)) (##inline ##sys.cons (##inline ##sys.cons (quote unzip3) (bruijn unzip3 30 14)) (##inline ##sys.cons (##inline ##sys.cons (quote unzip4) (bruijn unzip4 30 15)) (##inline ##sys.cons (##inline ##sys.cons (quote unzip5) (bruijn unzip5 30 16)) (##inline ##sys.cons (##inline ##sys.cons (quote count) (bruijn count 30 17)) (##inline ##sys.cons (##inline ##sys.cons (quote filter) (bruijn filter 30 18)) (##inline ##sys.cons (##inline ##sys.cons (quote partition) (bruijn partition 30 19)) (##inline ##sys.cons (##inline ##sys.cons (quote take-while) (bruijn take-while 30 20)) (##inline ##sys.cons (##inline ##sys.cons (quote drop-while) (bruijn drop-while 30 21)) (##inline ##sys.cons (##inline ##sys.cons (quote split-while) (bruijn split-while 30 22)) (##inline ##sys.cons (##inline ##sys.cons (quote any?) (bruijn any? 30 23)) (##inline ##sys.cons (##inline ##sys.cons (quote every?) (bruijn every? 30 24)) (##inline ##sys.cons (##inline ##sys.cons (quote list-index) (bruijn list-index 30 25)) (##inline ##sys.cons (##inline ##sys.cons (quote insert) (bruijn insert 30 26)) (##inline ##sys.cons (##inline ##sys.cons (quote delete) (bruijn delete 30 27)) (##inline ##sys.cons (##inline ##sys.cons (quote assq-update) (bruijn assq-update 30 28)) (##inline ##sys.cons (##inline ##sys.cons (quote assv-update) (bruijn assv-update 30 29)) (##inline ##sys.cons (##inline ##sys.cons (quote assoc-update) (bruijn assoc-update 30 30)) (quote ()))))))))))))))))))))))))))))))))
V_CALL(VGetArg(upenv, 30-1, 0), runtime,
      VInlineCons(
        VInlineCons(
        VEncodePointer(&_V0iota.sym, VPOINTER_OTHER),
        VGetArg(upenv, 30-1, 1)),
        VInlineCons(
        VInlineCons(
        VEncodePointer(&_V0list__tabulate.sym, VPOINTER_OTHER),
        VGetArg(upenv, 30-1, 2)),
        VInlineCons(
        VInlineCons(
        VEncodePointer(&_V0take.sym, VPOINTER_OTHER),
        VGetArg(upenv, 30-1, 3)),
        VInlineCons(
        VInlineCons(
        VEncodePointer(&_V0drop.sym, VPOINTER_OTHER),
        VGetArg(upenv, 30-1, 4)),
        VInlineCons(
        VInlineCons(
        VEncodePointer(&_V0take__right.sym, VPOINTER_OTHER),
        VGetArg(upenv, 30-1, 5)),
        VInlineCons(
        VInlineCons(
        VEncodePointer(&_V0drop__right.sym, VPOINTER_OTHER),
        VGetArg(upenv, 30-1, 6)),
        VInlineCons(
        VInlineCons(
        VEncodePointer(&_V0split__at.sym, VPOINTER_OTHER),
        VGetArg(upenv, 30-1, 7)),
        VInlineCons(
        VInlineCons(
        VEncodePointer(&_V0fold.sym, VPOINTER_OTHER),
        VGetArg(upenv, 30-1, 8)),
        VInlineCons(
        VInlineCons(
        VEncodePointer(&_V0fold__right.sym, VPOINTER_OTHER),
        VGetArg(upenv, 30-1, 9)),
        VInlineCons(
        VInlineCons(
        VEncodePointer(&_V0concatenate.sym, VPOINTER_OTHER),
        VGetArg(upenv, 30-1, 10)),
        VInlineCons(
        VInlineCons(
        VEncodePointer(&_V0zip.sym, VPOINTER_OTHER),
        VGetArg(upenv, 30-1, 11)),
        VInlineCons(
        VInlineCons(
        VEncodePointer(&_V0unzip1.sym, VPOINTER_OTHER),
        VGetArg(upenv, 30-1, 12)),
        VInlineCons(
        VInlineCons(
        VEncodePointer(&_V0unzip2.sym, VPOINTER_OTHER),
        VGetArg(upenv, 30-1, 13)),
        VInlineCons(
        VInlineCons(
        VEncodePointer(&_V0unzip3.sym, VPOINTER_OTHER),
        VGetArg(upenv, 30-1, 14)),
        VInlineCons(
        VInlineCons(
        VEncodePointer(&_V0unzip4.sym, VPOINTER_OTHER),
        VGetArg(upenv, 30-1, 15)),
        VInlineCons(
        VInlineCons(
        VEncodePointer(&_V0unzip5.sym, VPOINTER_OTHER),
        VGetArg(upenv, 30-1, 16)),
        VInlineCons(
        VInlineCons(
        VEncodePointer(&_V0count.sym, VPOINTER_OTHER),
        VGetArg(upenv, 30-1, 17)),
        VInlineCons(
        VInlineCons(
        VEncodePointer(&_V0filter.sym, VPOINTER_OTHER),
        VGetArg(upenv, 30-1, 18)),
        VInlineCons(
        VInlineCons(
        VEncodePointer(&_V0partition.sym, VPOINTER_OTHER),
        VGetArg(upenv, 30-1, 19)),
        VInlineCons(
        VInlineCons(
        VEncodePointer(&_V0take__while.sym, VPOINTER_OTHER),
        VGetArg(upenv, 30-1, 20)),
        VInlineCons(
        VInlineCons(
        VEncodePointer(&_V0drop__while.sym, VPOINTER_OTHER),
        VGetArg(upenv, 30-1, 21)),
        VInlineCons(
        VInlineCons(
        VEncodePointer(&_V0split__while.sym, VPOINTER_OTHER),
        VGetArg(upenv, 30-1, 22)),
        VInlineCons(
        VInlineCons(
        VEncodePointer(&_V0any_Q.sym, VPOINTER_OTHER),
        VGetArg(upenv, 30-1, 23)),
        VInlineCons(
        VInlineCons(
        VEncodePointer(&_V0every_Q.sym, VPOINTER_OTHER),
        VGetArg(upenv, 30-1, 24)),
        VInlineCons(
        VInlineCons(
        VEncodePointer(&_V0list__index.sym, VPOINTER_OTHER),
        VGetArg(upenv, 30-1, 25)),
        VInlineCons(
        VInlineCons(
        VEncodePointer(&_V0insert.sym, VPOINTER_OTHER),
        VGetArg(upenv, 30-1, 26)),
        VInlineCons(
        VInlineCons(
        VEncodePointer(&_V0delete.sym, VPOINTER_OTHER),
        VGetArg(upenv, 30-1, 27)),
        VInlineCons(
        VInlineCons(
        VEncodePointer(&_V0assq__update.sym, VPOINTER_OTHER),
        VGetArg(upenv, 30-1, 28)),
        VInlineCons(
        VInlineCons(
        VEncodePointer(&_V0assv__update.sym, VPOINTER_OTHER),
        VGetArg(upenv, 30-1, 29)),
        VInlineCons(
        VInlineCons(
        VEncodePointer(&_V0assoc__update.sym, VPOINTER_OTHER),
        VGetArg(upenv, 30-1, 30)),
        VNULL)))))))))))))))))))))))))))))));
 }
}
static void _V0assoc__update_k57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0assoc__update_k57" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0assoc__update_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assoc__update_k57, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 33 3) (bruijn ##k.94 2 0) (bruijn ##x.96 0 0) (quote ()))
V_CALL(VGetArg(upenv, 33-1, 3), runtime,
      upenv->up->vars[0],
      _var0,
      VNULL);
 }
}
static void _V0assoc__update_k61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0assoc__update_k61" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0assoc__update_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assoc__update_k61, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 36 3) (bruijn ##k.94 5 0) (bruijn ##x.98 1 0) (bruijn ##x.99 0 0))
V_CALL(VGetArg(upenv, 36-1, 3), runtime,
      VGetArg(upenv, 5-1, 0),
      upenv->vars[0],
      _var0);
 }
}
static void _V0assoc__update_k60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0assoc__update_k60" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0assoc__update_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assoc__update_k60, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 35 1) (close _V0assoc__update_k61) (bruijn lst 4 1))
V_CALL(VGetArg(upenv, 35-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assoc__update_k61, env)}),
      upenv->up->up->up->vars[1]);
 }
}
static void _V0assoc__update_k64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0assoc__update_k64" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0assoc__update_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assoc__update_k64, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 37 3) (bruijn ##k.94 6 0) (bruijn ##x.100 2 0) (bruijn ##x.101 0 0))
V_CALL(VGetArg(upenv, 37-1, 3), runtime,
      VGetArg(upenv, 6-1, 0),
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0assoc__update_k63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0assoc__update_k63" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0assoc__update_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assoc__update_k63, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn assoc-update 35 30) (close _V0assoc__update_k64) (bruijn ##x.102 0 0) (bruijn x 5 2) (bruijn val 5 3))
V_CALL(VGetArg(upenv, 35-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assoc__update_k64, env)}),
      _var0,
      VGetArg(upenv, 5-1, 2),
      VGetArg(upenv, 5-1, 3));
 }
}
static void _V0assoc__update_k62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0assoc__update_k62" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0assoc__update_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assoc__update_k62, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 35 1) (close _V0assoc__update_k63) (bruijn lst 4 1))
V_CALL(VGetArg(upenv, 35-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assoc__update_k63, env)}),
      upenv->up->up->up->vars[1]);
 }
}
static void _V0assoc__update_k59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0assoc__update_k59" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0assoc__update_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assoc__update_k59, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.97 0 0) ((bruijn cons 34 3) (close _V0assoc__update_k60) (bruijn x 3 2) (bruijn val 3 3)) ((bruijn car 34 2) (close _V0assoc__update_k62) (bruijn lst 3 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 34-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assoc__update_k60, env)}),
      upenv->up->up->vars[2],
      upenv->up->up->vars[3]);
} else {
V_CALL(VGetArg(upenv, 34-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assoc__update_k62, env)}),
      upenv->up->up->vars[1]);
}
 }
}
static void _V0assoc__update_k58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0assoc__update_k58" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0assoc__update_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assoc__update_k58, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn = 2 4) (close _V0assoc__update_k59) (bruijn x 2 2) (bruijn ##x.103 0 0))
V_CALL(upenv->up->vars[4], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assoc__update_k59, env)}),
      upenv->up->vars[2],
      _var0);
 }
}
static void _V0assoc__update_k56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0assoc__update_k56" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0assoc__update_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assoc__update_k56, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.95 0 0) ((bruijn cons 32 3) (close _V0assoc__update_k57) (bruijn x 1 2) (bruijn val 1 3)) ((bruijn caar 32 4) (close _V0assoc__update_k58) (bruijn lst 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 32-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assoc__update_k57, env)}),
      upenv->vars[2],
      upenv->vars[3]);
} else {
V_CALL(VGetArg(upenv, 32-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assoc__update_k58, env)}),
      upenv->vars[1]);
}
 }
}
__attribute__((used)) static void _V20CaseError__V0assoc__update_lambda4(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0assoc__update_lambda4 #t (4 ((bruijn assoc-update 30 30) (bruijn ##k.93 0 0) (bruijn lst 0 1) (bruijn x 0 2) (bruijn val 0 3) (bruijn equal? 31 6))) (5 ((bruijn null? 31 5) (close _V0assoc__update_k56) (bruijn lst 0 1))))
 VError("Not enough arguments to _V0assoc__update_lambda4, got ~D~N"
 "-- expected 4~N"
 "-- expected 5~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0assoc__update_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case0__V0assoc__update_lambda4" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0assoc__update_lambda4, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  // ((bruijn assoc-update 30 30) (bruijn ##k.93 0 0) (bruijn lst 0 1) (bruijn x 0 2) (bruijn val 0 3) (bruijn equal? 31 6))
V_CALL(VGetArg(upenv, 30-1, 30), runtime,
      _var0,
      _var1,
      _var2,
      _var3,
      VGetArg(upenv, 31-1, 6));
 }
}
__attribute__((used)) static void _V20Case1__V0assoc__update_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 static VDebugInfo dbg = { "_V20Case1__V0assoc__update_lambda4" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0assoc__update_lambda4, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 5; env->var_len = 5; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // ((bruijn null? 31 5) (close _V0assoc__update_k56) (bruijn lst 0 1))
V_CALL(VGetArg(upenv, 31-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assoc__update_k56, env)}),
      _var1);
 }
}
void _V0assoc__update_lambda4(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
"_V0assoc__update_lambda4:\n"
"    cmp edx, 4\n"
"    je _V20Case0__V0assoc__update_lambda4\n"
"    cmp edx, 5\n"
"    je _V20Case1__V0assoc__update_lambda4\n"
"    jmp _V20CaseError__V0assoc__update_lambda4\n"
);
static void _V0vanity_V0list_V20_k54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k54" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k54, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0list_V20_k55) (bruijn assoc-update 29 30) (close _V0assoc__update_lambda4))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k55, env)}),
      VEncodeInt(29l), VEncodeInt(30l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assoc__update_lambda4, env)})
    );
 }
}
static void _V0assv__update_k66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0assv__update_k66" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0assv__update_k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assv__update_k66, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 32 3) (bruijn ##k.104 2 0) (bruijn ##x.106 0 0) (quote ()))
V_CALL(VGetArg(upenv, 32-1, 3), runtime,
      upenv->up->vars[0],
      _var0,
      VNULL);
 }
}
static void _V0assv__update_k70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0assv__update_k70" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0assv__update_k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assv__update_k70, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 35 3) (bruijn ##k.104 5 0) (bruijn ##x.108 1 0) (bruijn ##x.109 0 0))
V_CALL(VGetArg(upenv, 35-1, 3), runtime,
      VGetArg(upenv, 5-1, 0),
      upenv->vars[0],
      _var0);
 }
}
static void _V0assv__update_k69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0assv__update_k69" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0assv__update_k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assv__update_k69, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 34 1) (close _V0assv__update_k70) (bruijn lst 4 1))
V_CALL(VGetArg(upenv, 34-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assv__update_k70, env)}),
      upenv->up->up->up->vars[1]);
 }
}
static void _V0assv__update_k73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0assv__update_k73" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0assv__update_k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assv__update_k73, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 36 3) (bruijn ##k.104 6 0) (bruijn ##x.110 2 0) (bruijn ##x.111 0 0))
V_CALL(VGetArg(upenv, 36-1, 3), runtime,
      VGetArg(upenv, 6-1, 0),
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0assv__update_k72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0assv__update_k72" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0assv__update_k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assv__update_k72, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn assoc-update 34 30) (close _V0assv__update_k73) (bruijn ##x.112 0 0) (bruijn x 5 2) (bruijn val 5 3))
V_CALL(VGetArg(upenv, 34-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assv__update_k73, env)}),
      _var0,
      VGetArg(upenv, 5-1, 2),
      VGetArg(upenv, 5-1, 3));
 }
}
static void _V0assv__update_k71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0assv__update_k71" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0assv__update_k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assv__update_k71, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 34 1) (close _V0assv__update_k72) (bruijn lst 4 1))
V_CALL(VGetArg(upenv, 34-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assv__update_k72, env)}),
      upenv->up->up->up->vars[1]);
 }
}
static void _V0assv__update_k68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0assv__update_k68" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0assv__update_k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assv__update_k68, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.107 0 0) ((bruijn cons 33 3) (close _V0assv__update_k69) (bruijn x 3 2) (bruijn val 3 3)) ((bruijn car 33 2) (close _V0assv__update_k71) (bruijn lst 3 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 33-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assv__update_k69, env)}),
      upenv->up->up->vars[2],
      upenv->up->up->vars[3]);
} else {
V_CALL(VGetArg(upenv, 33-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assv__update_k71, env)}),
      upenv->up->up->vars[1]);
}
 }
}
static void _V0assv__update_k67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0assv__update_k67" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0assv__update_k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assv__update_k67, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn eqv? 32 7) (close _V0assv__update_k68) (bruijn x 2 2) (bruijn ##x.113 0 0))
V_CALL(VGetArg(upenv, 32-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assv__update_k68, env)}),
      upenv->up->vars[2],
      _var0);
 }
}
static void _V0assv__update_k65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0assv__update_k65" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0assv__update_k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assv__update_k65, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.105 0 0) ((bruijn cons 31 3) (close _V0assv__update_k66) (bruijn x 1 2) (bruijn val 1 3)) ((bruijn caar 31 4) (close _V0assv__update_k67) (bruijn lst 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 31-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assv__update_k66, env)}),
      upenv->vars[2],
      upenv->vars[3]);
} else {
V_CALL(VGetArg(upenv, 31-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assv__update_k67, env)}),
      upenv->vars[1]);
}
 }
}
static void _V0assv__update_lambda5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0assv__update_lambda5" };
 VRecordCall(&dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0assv__update_lambda5, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assv__update_lambda5, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn null? 30 5) (close _V0assv__update_k65) (bruijn lst 0 1))
V_CALL(VGetArg(upenv, 30-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assv__update_k65, env)}),
      _var1);
 }
}
static void _V0vanity_V0list_V20_k53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k53" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k53, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0list_V20_k54) (bruijn assv-update 28 29) (close _V0assv__update_lambda5))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k54, env)}),
      VEncodeInt(28l), VEncodeInt(29l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assv__update_lambda5, env)})
    );
 }
}
static void _V0assq__update_k75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0assq__update_k75" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0assq__update_k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assq__update_k75, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 31 3) (bruijn ##k.114 2 0) (bruijn ##x.116 0 0) (quote ()))
V_CALL(VGetArg(upenv, 31-1, 3), runtime,
      upenv->up->vars[0],
      _var0,
      VNULL);
 }
}
static void _V0assq__update_k79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0assq__update_k79" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0assq__update_k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assq__update_k79, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 34 3) (bruijn ##k.114 5 0) (bruijn ##x.118 1 0) (bruijn ##x.119 0 0))
V_CALL(VGetArg(upenv, 34-1, 3), runtime,
      VGetArg(upenv, 5-1, 0),
      upenv->vars[0],
      _var0);
 }
}
static void _V0assq__update_k78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0assq__update_k78" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0assq__update_k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assq__update_k78, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 33 1) (close _V0assq__update_k79) (bruijn lst 4 1))
V_CALL(VGetArg(upenv, 33-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assq__update_k79, env)}),
      upenv->up->up->up->vars[1]);
 }
}
static void _V0assq__update_k82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0assq__update_k82" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0assq__update_k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assq__update_k82, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 35 3) (bruijn ##k.114 6 0) (bruijn ##x.120 2 0) (bruijn ##x.121 0 0))
V_CALL(VGetArg(upenv, 35-1, 3), runtime,
      VGetArg(upenv, 6-1, 0),
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0assq__update_k81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0assq__update_k81" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0assq__update_k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assq__update_k81, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn assoc-update 33 30) (close _V0assq__update_k82) (bruijn ##x.122 0 0) (bruijn x 5 2) (bruijn val 5 3))
V_CALL(VGetArg(upenv, 33-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assq__update_k82, env)}),
      _var0,
      VGetArg(upenv, 5-1, 2),
      VGetArg(upenv, 5-1, 3));
 }
}
static void _V0assq__update_k80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0assq__update_k80" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0assq__update_k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assq__update_k80, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 33 1) (close _V0assq__update_k81) (bruijn lst 4 1))
V_CALL(VGetArg(upenv, 33-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assq__update_k81, env)}),
      upenv->up->up->up->vars[1]);
 }
}
static void _V0assq__update_k77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0assq__update_k77" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0assq__update_k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assq__update_k77, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.117 0 0) ((bruijn cons 32 3) (close _V0assq__update_k78) (bruijn x 3 2) (bruijn val 3 3)) ((bruijn car 32 2) (close _V0assq__update_k80) (bruijn lst 3 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 32-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assq__update_k78, env)}),
      upenv->up->up->vars[2],
      upenv->up->up->vars[3]);
} else {
V_CALL(VGetArg(upenv, 32-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assq__update_k80, env)}),
      upenv->up->up->vars[1]);
}
 }
}
static void _V0assq__update_k76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0assq__update_k76" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0assq__update_k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assq__update_k76, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn eq? 31 8) (close _V0assq__update_k77) (bruijn x 2 2) (bruijn ##x.123 0 0))
V_CALL(VGetArg(upenv, 31-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assq__update_k77, env)}),
      upenv->up->vars[2],
      _var0);
 }
}
static void _V0assq__update_k74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0assq__update_k74" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0assq__update_k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assq__update_k74, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.115 0 0) ((bruijn cons 30 3) (close _V0assq__update_k75) (bruijn x 1 2) (bruijn val 1 3)) ((bruijn caar 30 4) (close _V0assq__update_k76) (bruijn lst 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 30-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assq__update_k75, env)}),
      upenv->vars[2],
      upenv->vars[3]);
} else {
V_CALL(VGetArg(upenv, 30-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assq__update_k76, env)}),
      upenv->vars[1]);
}
 }
}
static void _V0assq__update_lambda6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0assq__update_lambda6" };
 VRecordCall(&dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0assq__update_lambda6, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assq__update_lambda6, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn null? 29 5) (close _V0assq__update_k74) (bruijn lst 0 1))
V_CALL(VGetArg(upenv, 29-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assq__update_k74, env)}),
      _var1);
 }
}
static void _V0vanity_V0list_V20_k52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k52" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k52, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0list_V20_k53) (bruijn assq-update 27 28) (close _V0assq__update_lambda6))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k53, env)}),
      VEncodeInt(27l), VEncodeInt(28l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assq__update_lambda6, env)})
    );
 }
}
static void _V0delete_k87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0delete_k87" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0delete_k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0delete_k87, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 33 3) (bruijn ##k.124 5 0) (bruijn ##x.126 3 0) (bruijn ##x.127 0 0))
V_CALL(VGetArg(upenv, 33-1, 3), runtime,
      VGetArg(upenv, 5-1, 0),
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0delete_k86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0delete_k86" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0delete_k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0delete_k86, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn delete 31 27) (close _V0delete_k87) (bruijn ##x.128 1 0) (bruijn ##x.129 0 0))
V_CALL(VGetArg(upenv, 31-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0delete_k87, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V0delete_k85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0delete_k85" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0delete_k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0delete_k85, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn - 31 10) (close _V0delete_k86) (bruijn i 3 2) 1)
V_CALL(VGetArg(upenv, 31-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0delete_k86, env)}),
      upenv->up->up->vars[2],
      VEncodeInt(1l));
 }
}
static void _V0delete_k84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0delete_k84" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0delete_k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0delete_k84, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 30 1) (close _V0delete_k85) (bruijn lst 2 1))
V_CALL(VGetArg(upenv, 30-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0delete_k85, env)}),
      upenv->up->vars[1]);
 }
}
static void _V0delete_k83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0delete_k83" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0delete_k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0delete_k83, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.125 0 0) ((bruijn cdr 29 1) (bruijn ##k.124 1 0) (bruijn lst 1 1)) ((bruijn car 29 2) (close _V0delete_k84) (bruijn lst 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 29-1, 1), runtime,
      upenv->vars[0],
      upenv->vars[1]);
} else {
V_CALL(VGetArg(upenv, 29-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0delete_k84, env)}),
      upenv->vars[1]);
}
 }
}
static void _V0delete_lambda7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0delete_lambda7" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0delete_lambda7, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0delete_lambda7, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn = 28 9) (close _V0delete_k83) (bruijn i 0 2) 0)
V_CALL(VGetArg(upenv, 28-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0delete_k83, env)}),
      _var2,
      VEncodeInt(0l));
 }
}
static void _V0vanity_V0list_V20_k51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k51" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k51, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0list_V20_k52) (bruijn delete 26 27) (close _V0delete_lambda7))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k52, env)}),
      VEncodeInt(26l), VEncodeInt(27l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0delete_lambda7, env)})
    );
 }
}
static void _V0insert_k92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0insert_k92" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0insert_k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0insert_k92, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 32 3) (bruijn ##k.130 5 0) (bruijn ##x.132 3 0) (bruijn ##x.133 0 0))
V_CALL(VGetArg(upenv, 32-1, 3), runtime,
      VGetArg(upenv, 5-1, 0),
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0insert_k91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0insert_k91" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0insert_k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0insert_k91, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn insert 30 26) (close _V0insert_k92) (bruijn ##x.134 1 0) (bruijn ##x.135 0 0) (bruijn x 4 3))
V_CALL(VGetArg(upenv, 30-1, 26), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0insert_k92, env)}),
      upenv->vars[0],
      _var0,
      upenv->up->up->up->vars[3]);
 }
}
static void _V0insert_k90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0insert_k90" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0insert_k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0insert_k90, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn - 30 10) (close _V0insert_k91) (bruijn i 3 2) 1)
V_CALL(VGetArg(upenv, 30-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0insert_k91, env)}),
      upenv->up->up->vars[2],
      VEncodeInt(1l));
 }
}
static void _V0insert_k89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0insert_k89" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0insert_k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0insert_k89, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 29 1) (close _V0insert_k90) (bruijn lst 2 1))
V_CALL(VGetArg(upenv, 29-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0insert_k90, env)}),
      upenv->up->vars[1]);
 }
}
static void _V0insert_k88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0insert_k88" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0insert_k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0insert_k88, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.131 0 0) ((bruijn cons 28 3) (bruijn ##k.130 1 0) (bruijn x 1 3) (bruijn lst 1 1)) ((bruijn car 28 2) (close _V0insert_k89) (bruijn lst 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 28-1, 3), runtime,
      upenv->vars[0],
      upenv->vars[3],
      upenv->vars[1]);
} else {
V_CALL(VGetArg(upenv, 28-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0insert_k89, env)}),
      upenv->vars[1]);
}
 }
}
static void _V0insert_lambda8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0insert_lambda8" };
 VRecordCall(&dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0insert_lambda8, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0insert_lambda8, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn = 27 9) (close _V0insert_k88) (bruijn i 0 2) 0)
V_CALL(VGetArg(upenv, 27-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0insert_k88, env)}),
      _var2,
      VEncodeInt(0l));
 }
}
static void _V0vanity_V0list_V20_k50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k50" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k50, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0list_V20_k51) (bruijn insert 25 26) (close _V0insert_lambda8))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k51, env)}),
      VEncodeInt(25l), VEncodeInt(26l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0insert_lambda8, env)})
    );
 }
}
static void _V0list__index_k93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0list__index_k93" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0list__index_k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0list__index_k93, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.137 1 0) 0 (bruijn lst 2 2))
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      VEncodeInt(0l),
      upenv->up->vars[2]);
 }
}
static void _V0loop_k98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k98" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k98, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 6 1) (bruijn ##k.139 5 0) (bruijn ##x.142 1 0) (bruijn ##x.143 0 0))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      upenv->vars[0],
      _var0);
 }
}
static void _V0loop_k97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k97" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k97, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 32 1) (close _V0loop_k98) (bruijn lst 4 2))
V_CALL(VGetArg(upenv, 32-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k98, env)}),
      upenv->up->up->up->vars[2]);
 }
}
static void _V0loop_k96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k96" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k96, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.141 0 0) ((bruijn ##k.139 3 0) (bruijn i 3 1)) ((bruijn + 31 11) (close _V0loop_k97) (bruijn i 3 1) 1))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->vars[0], runtime,
      upenv->up->up->vars[1]);
} else {
V_CALL(VGetArg(upenv, 31-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k97, env)}),
      upenv->up->up->vars[1],
      VEncodeInt(1l));
}
 }
}
static void _V0loop_k95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k95" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k95, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn p 4 1) (close _V0loop_k96) (bruijn ##x.144 0 0))
V_CALL(upenv->up->up->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k96, env)}),
      _var0);
 }
}
static void _V0loop_k94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k94" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k94, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.140 0 0) ((bruijn ##k.139 1 0) #f) ((bruijn car 29 2) (close _V0loop_k95) (bruijn lst 1 2)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
} else {
V_CALL(VGetArg(upenv, 29-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k95, env)}),
      upenv->vars[2]);
}
 }
}
static void _V0loop_lambda11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0loop_lambda11" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda11, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda11, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 28 5) (close _V0loop_k94) (bruijn p 2 1))
V_CALL(VGetArg(upenv, 28-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k94, env)}),
      upenv->up->vars[1]);
 }
}
static void _V0list__index_lambda10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0list__index_lambda10" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0list__index_lambda10, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0list__index_k93) (bruijn loop 0 1) (close _V0loop_lambda11))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0list__index_k93, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda11, env)})
    );
 }
}
static void _V0list__index_lambda9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0list__index_lambda9" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0list__index_lambda9, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0list__index_lambda9, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0list__index_lambda10) (bruijn ##k.136 0 0) #f)
V_CALL_FUNC(_V0list__index_lambda10, env, runtime,
      _var0,
      VEncodeBool(false));
 }
}
static void _V0vanity_V0list_V20_k49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k49" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k49, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0list_V20_k50) (bruijn list-index 24 25) (close _V0list__index_lambda9))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k50, env)}),
      VEncodeInt(24l), VEncodeInt(25l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0list__index_lambda9, env)})
    );
 }
}
static void _V0every_Q_k99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0every_Q_k99" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0every_Q_k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0every_Q_k99, runtime, upenv, 1, argc, _var0) {
  // ((bruijn not 26 12) (bruijn ##k.145 1 0) (bruijn ##x.146 0 0))
V_CALL(VGetArg(upenv, 26-1, 12), runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V0every_Q_k100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0every_Q_k100" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0every_Q_k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0every_Q_k100, runtime, upenv, 1, argc, _var0) {
  // ((bruijn not 27 12) (bruijn ##k.147 1 0) (bruijn ##x.148 0 0))
V_CALL(VGetArg(upenv, 27-1, 12), runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V0every_Q_lambda13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0every_Q_lambda13" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0every_Q_lambda13, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0every_Q_lambda13, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn p 1 1) (close _V0every_Q_k100) (bruijn e 0 1))
V_CALL(upenv->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0every_Q_k100, env)}),
      _var1);
 }
}
static void _V0every_Q_lambda12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0every_Q_lambda12" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0every_Q_lambda12, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0every_Q_lambda12, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn any? 24 23) (close _V0every_Q_k99) (close _V0every_Q_lambda13) (bruijn lst 0 2))
V_CALL(VGetArg(upenv, 24-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0every_Q_k99, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0every_Q_lambda13, env)}),
      _var2);
 }
}
static void _V0vanity_V0list_V20_k48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k48" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k48, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0list_V20_k49) (bruijn every? 23 24) (close _V0every_Q_lambda12))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k49, env)}),
      VEncodeInt(23l), VEncodeInt(24l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0every_Q_lambda12, env)})
    );
 }
}
static void _V0any_Q_k104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0any_Q_k104" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0any_Q_k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0any_Q_k104, runtime, upenv, 1, argc, _var0) {
  // ((bruijn any? 27 23) (bruijn ##k.149 4 0) (bruijn p 4 1) (bruijn ##x.152 0 0))
V_CALL(VGetArg(upenv, 27-1, 23), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->up->up->vars[1],
      _var0);
 }
}
static void _V0any_Q_k103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0any_Q_k103" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0any_Q_k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0any_Q_k103, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.151 0 0) ((bruijn ##k.149 3 0) #t) ((bruijn cdr 27 1) (close _V0any_Q_k104) (bruijn lst 3 2)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(true));
} else {
V_CALL(VGetArg(upenv, 27-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0any_Q_k104, env)}),
      upenv->up->up->vars[2]);
}
 }
}
static void _V0any_Q_k102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0any_Q_k102" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0any_Q_k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0any_Q_k102, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn p 2 1) (close _V0any_Q_k103) (bruijn ##x.153 0 0))
V_CALL(upenv->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0any_Q_k103, env)}),
      _var0);
 }
}
static void _V0any_Q_k101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0any_Q_k101" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0any_Q_k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0any_Q_k101, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.150 0 0) ((bruijn ##k.149 1 0) #f) ((bruijn car 25 2) (close _V0any_Q_k102) (bruijn lst 1 2)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
} else {
V_CALL(VGetArg(upenv, 25-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0any_Q_k102, env)}),
      upenv->vars[2]);
}
 }
}
static void _V0any_Q_lambda14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0any_Q_lambda14" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0any_Q_lambda14, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0any_Q_lambda14, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 24 5) (close _V0any_Q_k101) (bruijn p 0 1))
V_CALL(VGetArg(upenv, 24-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0any_Q_k101, env)}),
      _var1);
 }
}
static void _V0vanity_V0list_V20_k47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k47" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k47, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0list_V20_k48) (bruijn any? 22 23) (close _V0any_Q_lambda14))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k48, env)}),
      VEncodeInt(22l), VEncodeInt(23l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0any_Q_lambda14, env)})
    );
 }
}
static void _V0split__while_k108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0split__while_k108" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0split__while_k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0split__while_k108, runtime, upenv, 1, argc, _var0) {
  // ((bruijn not 27 12) (bruijn ##k.162 2 0) (bruijn ##x.163 0 0))
V_CALL(VGetArg(upenv, 27-1, 12), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0split__while_k107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0split__while_k107" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0split__while_k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0split__while_k107, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn pred 3 1) (close _V0split__while_k108) (bruijn ##x.164 0 0))
V_CALL(upenv->up->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0split__while_k108, env)}),
      _var0);
 }
}
static void _V0split__while_k106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0split__while_k106" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0split__while_k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0split__while_k106, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.161 1 0) ((bruijn ##k.162 0 0) (bruijn ##p.161 1 0)) ((bruijn car 25 2) (close _V0split__while_k107) (bruijn lst 2 2)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(_var0, runtime,
      upenv->vars[0]);
} else {
V_CALL(VGetArg(upenv, 25-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0split__while_k107, env)}),
      upenv->up->vars[2]);
}
 }
}
static void _V0split__while_k110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0split__while_k110" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0split__while_k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0split__while_k110, runtime, upenv, 1, argc, _var0) {
  // ((bruijn split-while 26 22) (bruijn ##k.156 1 0) (bruijn pred 4 1) (bruijn ##x.157 0 0))
V_CALL(VGetArg(upenv, 26-1, 22), runtime,
      upenv->vars[0],
      upenv->up->up->up->vars[1],
      _var0);
 }
}
static void _V0split__while_lambda16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0split__while_lambda16" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0split__while_lambda16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0split__while_lambda16, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 26 1) (close _V0split__while_k110) (bruijn lst 3 2))
V_CALL(VGetArg(upenv, 26-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0split__while_k110, env)}),
      upenv->up->up->vars[2]);
 }
}
static void _V0split__while_k112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0split__while_k112" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0split__while_k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0split__while_k112, runtime, upenv, 1, argc, _var0) {
  // ((bruijn values 28 14) (bruijn ##k.158 2 0) (bruijn ##x.159 0 0) (bruijn d 2 2))
V_CALL(VGetArg(upenv, 28-1, 14), runtime,
      upenv->up->vars[0],
      _var0,
      upenv->up->vars[2]);
 }
}
static void _V0split__while_k111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0split__while_k111" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0split__while_k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0split__while_k111, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 27 3) (close _V0split__while_k112) (bruijn ##x.160 0 0) (bruijn t 1 1))
V_CALL(VGetArg(upenv, 27-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0split__while_k112, env)}),
      _var0,
      upenv->vars[1]);
 }
}
static void _V0split__while_lambda17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0split__while_lambda17" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0split__while_lambda17, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0split__while_lambda17, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn car 26 2) (close _V0split__while_k111) (bruijn lst 3 2))
V_CALL(VGetArg(upenv, 26-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0split__while_k111, env)}),
      upenv->up->up->vars[2]);
 }
}
static void _V0split__while_k109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0split__while_k109" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0split__while_k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0split__while_k109, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.155 0 0) ((bruijn values 25 14) (bruijn ##k.154 2 0) (quote ()) (bruijn lst 2 2)) ((bruijn call-with-values 25 13) (bruijn ##k.154 2 0) (close _V0split__while_lambda16) (close _V0split__while_lambda17)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 25-1, 14), runtime,
      upenv->up->vars[0],
      VNULL,
      upenv->up->vars[2]);
} else {
V_CALL(VGetArg(upenv, 25-1, 13), runtime,
      upenv->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0split__while_lambda16, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0split__while_lambda17, env)}));
}
 }
}
static void _V0split__while_k105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0split__while_k105" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0split__while_k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0split__while_k105, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0split__while_k106) (close _V0split__while_k109))
V_CALL_FUNC(_V0split__while_k106, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0split__while_k109, env)}));
 }
}
static void _V0split__while_lambda15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0split__while_lambda15" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0split__while_lambda15, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0split__while_lambda15, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 23 5) (close _V0split__while_k105) (bruijn lst 0 2))
V_CALL(VGetArg(upenv, 23-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0split__while_k105, env)}),
      _var2);
 }
}
static void _V0vanity_V0list_V20_k46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k46" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k46, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0list_V20_k47) (bruijn split-while 21 22) (close _V0split__while_lambda15))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k47, env)}),
      VEncodeInt(21l), VEncodeInt(22l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0split__while_lambda15, env)})
    );
 }
}
static void _V0drop__while_k116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0drop__while_k116" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0drop__while_k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0drop__while_k116, runtime, upenv, 1, argc, _var0) {
  // ((bruijn not 26 12) (bruijn ##k.169 2 0) (bruijn ##x.170 0 0))
V_CALL(VGetArg(upenv, 26-1, 12), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0drop__while_k115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0drop__while_k115" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0drop__while_k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0drop__while_k115, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn pred 3 1) (close _V0drop__while_k116) (bruijn ##x.171 0 0))
V_CALL(upenv->up->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0drop__while_k116, env)}),
      _var0);
 }
}
static void _V0drop__while_k114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0drop__while_k114" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0drop__while_k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0drop__while_k114, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.168 1 0) ((bruijn ##k.169 0 0) (bruijn ##p.168 1 0)) ((bruijn car 24 2) (close _V0drop__while_k115) (bruijn lst 2 2)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(_var0, runtime,
      upenv->vars[0]);
} else {
V_CALL(VGetArg(upenv, 24-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0drop__while_k115, env)}),
      upenv->up->vars[2]);
}
 }
}
static void _V0drop__while_k118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0drop__while_k118" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0drop__while_k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0drop__while_k118, runtime, upenv, 1, argc, _var0) {
  // ((bruijn drop-while 24 21) (bruijn ##k.165 3 0) (bruijn pred 3 1) (bruijn ##x.167 0 0))
V_CALL(VGetArg(upenv, 24-1, 21), runtime,
      upenv->up->up->vars[0],
      upenv->up->up->vars[1],
      _var0);
 }
}
static void _V0drop__while_k117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0drop__while_k117" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0drop__while_k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0drop__while_k117, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.166 0 0) ((bruijn ##k.165 2 0) (bruijn lst 2 2)) ((bruijn cdr 24 1) (close _V0drop__while_k118) (bruijn lst 2 2)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->vars[0], runtime,
      upenv->up->vars[2]);
} else {
V_CALL(VGetArg(upenv, 24-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0drop__while_k118, env)}),
      upenv->up->vars[2]);
}
 }
}
static void _V0drop__while_k113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0drop__while_k113" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0drop__while_k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0drop__while_k113, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0drop__while_k114) (close _V0drop__while_k117))
V_CALL_FUNC(_V0drop__while_k114, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0drop__while_k117, env)}));
 }
}
static void _V0drop__while_lambda18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0drop__while_lambda18" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0drop__while_lambda18, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0drop__while_lambda18, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 22 5) (close _V0drop__while_k113) (bruijn lst 0 2))
V_CALL(VGetArg(upenv, 22-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0drop__while_k113, env)}),
      _var2);
 }
}
static void _V0vanity_V0list_V20_k45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k45" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k45, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0list_V20_k46) (bruijn drop-while 20 21) (close _V0drop__while_lambda18))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k46, env)}),
      VEncodeInt(20l), VEncodeInt(21l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0drop__while_lambda18, env)})
    );
 }
}
static void _V0take__while_k122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0take__while_k122" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0take__while_k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0take__while_k122, runtime, upenv, 1, argc, _var0) {
  // ((bruijn not 25 12) (bruijn ##k.178 2 0) (bruijn ##x.179 0 0))
V_CALL(VGetArg(upenv, 25-1, 12), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0take__while_k121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0take__while_k121" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0take__while_k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0take__while_k121, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn pred 3 1) (close _V0take__while_k122) (bruijn ##x.180 0 0))
V_CALL(upenv->up->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0take__while_k122, env)}),
      _var0);
 }
}
static void _V0take__while_k120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0take__while_k120" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0take__while_k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0take__while_k120, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.177 1 0) ((bruijn ##k.178 0 0) (bruijn ##p.177 1 0)) ((bruijn car 23 2) (close _V0take__while_k121) (bruijn lst 2 2)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(_var0, runtime,
      upenv->vars[0]);
} else {
V_CALL(VGetArg(upenv, 23-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0take__while_k121, env)}),
      upenv->up->vars[2]);
}
 }
}
static void _V0take__while_k126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0take__while_k126" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0take__while_k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0take__while_k126, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 26 3) (bruijn ##k.172 5 0) (bruijn ##x.174 2 0) (bruijn ##x.175 0 0))
V_CALL(VGetArg(upenv, 26-1, 3), runtime,
      VGetArg(upenv, 5-1, 0),
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0take__while_k125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0take__while_k125" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0take__while_k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0take__while_k125, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn take-while 24 20) (close _V0take__while_k126) (bruijn pred 4 1) (bruijn ##x.176 0 0))
V_CALL(VGetArg(upenv, 24-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0take__while_k126, env)}),
      upenv->up->up->up->vars[1],
      _var0);
 }
}
static void _V0take__while_k124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0take__while_k124" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0take__while_k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0take__while_k124, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 24 1) (close _V0take__while_k125) (bruijn lst 3 2))
V_CALL(VGetArg(upenv, 24-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0take__while_k125, env)}),
      upenv->up->up->vars[2]);
 }
}
static void _V0take__while_k123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0take__while_k123" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0take__while_k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0take__while_k123, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.173 0 0) ((bruijn ##k.172 2 0) (quote ())) ((bruijn car 23 2) (close _V0take__while_k124) (bruijn lst 2 2)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->vars[0], runtime,
      VNULL);
} else {
V_CALL(VGetArg(upenv, 23-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0take__while_k124, env)}),
      upenv->up->vars[2]);
}
 }
}
static void _V0take__while_k119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0take__while_k119" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0take__while_k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0take__while_k119, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0take__while_k120) (close _V0take__while_k123))
V_CALL_FUNC(_V0take__while_k120, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0take__while_k123, env)}));
 }
}
static void _V0take__while_lambda19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0take__while_lambda19" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0take__while_lambda19, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0take__while_lambda19, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 21 5) (close _V0take__while_k119) (bruijn lst 0 2))
V_CALL(VGetArg(upenv, 21-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0take__while_k119, env)}),
      _var2);
 }
}
static void _V0vanity_V0list_V20_k44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k44" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k44, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0list_V20_k45) (bruijn take-while 19 20) (close _V0take__while_lambda19))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k45, env)}),
      VEncodeInt(19l), VEncodeInt(20l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0take__while_lambda19, env)})
    );
 }
}
static void _V0partition_k128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0partition_k128" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0partition_k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0partition_k128, runtime, upenv, 1, argc, _var0) {
  // ((bruijn partition 22 19) (bruijn ##k.183 1 0) (bruijn pred 3 1) (bruijn ##x.184 0 0))
V_CALL(VGetArg(upenv, 22-1, 19), runtime,
      upenv->vars[0],
      upenv->up->up->vars[1],
      _var0);
 }
}
static void _V0partition_lambda21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0partition_lambda21" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0partition_lambda21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0partition_lambda21, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 22 1) (close _V0partition_k128) (bruijn lst 2 2))
V_CALL(VGetArg(upenv, 22-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0partition_k128, env)}),
      upenv->up->vars[2]);
 }
}
static void _V0partition_k132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0partition_k132" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0partition_k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0partition_k132, runtime, upenv, 1, argc, _var0) {
  // ((bruijn values 26 14) (bruijn ##k.185 4 0) (bruijn ##x.187 0 0) (bruijn r 4 2))
V_CALL(VGetArg(upenv, 26-1, 14), runtime,
      upenv->up->up->up->vars[0],
      _var0,
      upenv->up->up->up->vars[2]);
 }
}
static void _V0partition_k131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0partition_k131" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0partition_k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0partition_k131, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 25 3) (close _V0partition_k132) (bruijn ##x.188 0 0) (bruijn l 3 1))
V_CALL(VGetArg(upenv, 25-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0partition_k132, env)}),
      _var0,
      upenv->up->up->vars[1]);
 }
}
static void _V0partition_k134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0partition_k134" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0partition_k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0partition_k134, runtime, upenv, 1, argc, _var0) {
  // ((bruijn values 26 14) (bruijn ##k.185 4 0) (bruijn l 4 1) (bruijn ##x.189 0 0))
V_CALL(VGetArg(upenv, 26-1, 14), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->up->up->vars[1],
      _var0);
 }
}
static void _V0partition_k133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0partition_k133" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0partition_k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0partition_k133, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 25 3) (close _V0partition_k134) (bruijn ##x.190 0 0) (bruijn r 3 2))
V_CALL(VGetArg(upenv, 25-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0partition_k134, env)}),
      _var0,
      upenv->up->up->vars[2]);
 }
}
static void _V0partition_k130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0partition_k130" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0partition_k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0partition_k130, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.186 0 0) ((bruijn car 24 2) (close _V0partition_k131) (bruijn lst 4 2)) ((bruijn car 24 2) (close _V0partition_k133) (bruijn lst 4 2)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 24-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0partition_k131, env)}),
      upenv->up->up->up->vars[2]);
} else {
V_CALL(VGetArg(upenv, 24-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0partition_k133, env)}),
      upenv->up->up->up->vars[2]);
}
 }
}
static void _V0partition_k129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0partition_k129" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0partition_k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0partition_k129, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn pred 3 1) (close _V0partition_k130) (bruijn ##x.191 0 0))
V_CALL(upenv->up->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0partition_k130, env)}),
      _var0);
 }
}
static void _V0partition_lambda22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0partition_lambda22" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0partition_lambda22, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0partition_lambda22, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn car 22 2) (close _V0partition_k129) (bruijn lst 2 2))
V_CALL(VGetArg(upenv, 22-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0partition_k129, env)}),
      upenv->up->vars[2]);
 }
}
static void _V0partition_k127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0partition_k127" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0partition_k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0partition_k127, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.182 0 0) ((bruijn values 21 14) (bruijn ##k.181 1 0) (quote ()) (quote ())) ((bruijn call-with-values 21 13) (bruijn ##k.181 1 0) (close _V0partition_lambda21) (close _V0partition_lambda22)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 21-1, 14), runtime,
      upenv->vars[0],
      VNULL,
      VNULL);
} else {
V_CALL(VGetArg(upenv, 21-1, 13), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0partition_lambda21, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0partition_lambda22, env)}));
}
 }
}
static void _V0partition_lambda20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0partition_lambda20" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0partition_lambda20, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0partition_lambda20, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 20 5) (close _V0partition_k127) (bruijn lst 0 2))
V_CALL(VGetArg(upenv, 20-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0partition_k127, env)}),
      _var2);
 }
}
static void _V0vanity_V0list_V20_k43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k43" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k43, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0list_V20_k44) (bruijn partition 18 19) (close _V0partition_lambda20))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k44, env)}),
      VEncodeInt(18l), VEncodeInt(19l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0partition_lambda20, env)})
    );
 }
}
static void _V0filter_k140(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0filter_k140" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0filter_k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0filter_k140, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 25 3) (bruijn ##k.192 6 0) (bruijn ##x.195 2 0) (bruijn ##x.196 0 0))
V_CALL(VGetArg(upenv, 25-1, 3), runtime,
      VGetArg(upenv, 6-1, 0),
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0filter_k139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0filter_k139" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0filter_k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0filter_k139, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn filter 23 18) (close _V0filter_k140) (bruijn pred 5 1) (bruijn ##x.197 0 0))
V_CALL(VGetArg(upenv, 23-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0filter_k140, env)}),
      VGetArg(upenv, 5-1, 1),
      _var0);
 }
}
static void _V0filter_k138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0filter_k138" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0filter_k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0filter_k138, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 23 1) (close _V0filter_k139) (bruijn lst 4 2))
V_CALL(VGetArg(upenv, 23-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0filter_k139, env)}),
      upenv->up->up->up->vars[2]);
 }
}
static void _V0filter_k141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0filter_k141" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0filter_k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0filter_k141, runtime, upenv, 1, argc, _var0) {
  // ((bruijn filter 22 18) (bruijn ##k.192 4 0) (bruijn pred 4 1) (bruijn ##x.198 0 0))
V_CALL(VGetArg(upenv, 22-1, 18), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->up->up->vars[1],
      _var0);
 }
}
static void _V0filter_k137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0filter_k137" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0filter_k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0filter_k137, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.194 0 0) ((bruijn car 22 2) (close _V0filter_k138) (bruijn lst 3 2)) ((bruijn cdr 22 1) (close _V0filter_k141) (bruijn lst 3 2)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 22-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0filter_k138, env)}),
      upenv->up->up->vars[2]);
} else {
V_CALL(VGetArg(upenv, 22-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0filter_k141, env)}),
      upenv->up->up->vars[2]);
}
 }
}
static void _V0filter_k136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0filter_k136" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0filter_k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0filter_k136, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn pred 2 1) (close _V0filter_k137) (bruijn ##x.199 0 0))
V_CALL(upenv->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0filter_k137, env)}),
      _var0);
 }
}
static void _V0filter_k135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0filter_k135" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0filter_k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0filter_k135, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.193 0 0) ((bruijn ##k.192 1 0) (bruijn lst 1 2)) ((bruijn car 20 2) (close _V0filter_k136) (bruijn lst 1 2)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      upenv->vars[2]);
} else {
V_CALL(VGetArg(upenv, 20-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0filter_k136, env)}),
      upenv->vars[2]);
}
 }
}
static void _V0filter_lambda23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0filter_lambda23" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0filter_lambda23, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0filter_lambda23, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 19 5) (close _V0filter_k135) (bruijn lst 0 2))
V_CALL(VGetArg(upenv, 19-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0filter_k135, env)}),
      _var2);
 }
}
static void _V0vanity_V0list_V20_k42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k42" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k42, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0list_V20_k43) (bruijn filter 17 18) (close _V0filter_lambda23))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k43, env)}),
      VEncodeInt(17l), VEncodeInt(18l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0filter_lambda23, env)})
    );
 }
}
static void _V0count_k142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0count_k142" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0count_k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0count_k142, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.201 1 0) 0 (bruijn pred 2 1) (bruijn lst 2 2))
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      VEncodeInt(0l),
      upenv->up->vars[1],
      upenv->up->vars[2]);
 }
}
static void _V0loop_k146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k146" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k146, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.208 1 0) ((bruijn ##k.209 0 0) 1) ((bruijn ##k.209 0 0) 0))
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
static void _V0loop_k149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k149" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k149, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 7 1) (bruijn ##k.203 6 0) (bruijn ##x.205 1 0) (bruijn pred 6 2) (bruijn ##x.206 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      upenv->vars[0],
      VGetArg(upenv, 6-1, 2),
      _var0);
 }
}
static void _V0loop_k148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k148" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k148, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 25 1) (close _V0loop_k149) (bruijn lst 5 3))
V_CALL(VGetArg(upenv, 25-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k149, env)}),
      VGetArg(upenv, 5-1, 3));
 }
}
static void _V0loop_k147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k147" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k147, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn + 24 11) (close _V0loop_k148) (bruijn n 4 1) (bruijn ##x.207 0 0))
V_CALL(VGetArg(upenv, 24-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k148, env)}),
      upenv->up->up->up->vars[1],
      _var0);
 }
}
static void _V0loop_k145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k145" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k145, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0loop_k146) (close _V0loop_k147))
V_CALL_FUNC(_V0loop_k146, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k147, env)}));
 }
}
static void _V0loop_k144(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k144" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k144, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn pred 2 2) (close _V0loop_k145) (bruijn ##x.210 0 0))
V_CALL(upenv->up->vars[2], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k145, env)}),
      _var0);
 }
}
static void _V0loop_k143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k143" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k143, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.204 0 0) ((bruijn ##k.203 1 0) (bruijn n 1 1)) ((bruijn car 21 2) (close _V0loop_k144) (bruijn lst 1 3)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      upenv->vars[1]);
} else {
V_CALL(VGetArg(upenv, 21-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k144, env)}),
      upenv->vars[3]);
}
 }
}
static void _V0loop_lambda26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0loop_lambda26" };
 VRecordCall(&dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0loop_lambda26, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda26, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn null? 20 5) (close _V0loop_k143) (bruijn lst 0 3))
V_CALL(VGetArg(upenv, 20-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k143, env)}),
      _var3);
 }
}
static void _V0count_lambda25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0count_lambda25" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0count_lambda25, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0count_k142) (bruijn loop 0 1) (close _V0loop_lambda26))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0count_k142, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda26, env)})
    );
 }
}
static void _V0count_lambda24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0count_lambda24" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0count_lambda24, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0count_lambda24, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0count_lambda25) (bruijn ##k.200 0 0) #f)
V_CALL_FUNC(_V0count_lambda25, env, runtime,
      _var0,
      VEncodeBool(false));
 }
}
static void _V0vanity_V0list_V20_k41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k41" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k41, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0list_V20_k42) (bruijn count 16 17) (close _V0count_lambda24))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k42, env)}),
      VEncodeInt(16l), VEncodeInt(17l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0count_lambda24, env)})
    );
 }
}
static void _V0unzip5_k154(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unzip5_k154" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unzip5_k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unzip5_k154, runtime, upenv, 1, argc, _var0) {
  // ((bruijn values 22 14) (bruijn ##k.211 5 0) (bruijn ##x.212 4 0) (bruijn ##x.213 3 0) (bruijn ##x.214 2 0) (bruijn ##x.215 1 0) (bruijn ##x.216 0 0))
V_CALL(VGetArg(upenv, 22-1, 14), runtime,
      VGetArg(upenv, 5-1, 0),
      upenv->up->up->up->vars[0],
      upenv->up->up->vars[0],
      upenv->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V0unzip5_k155(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unzip5_k155" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unzip5_k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unzip5_k155, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cadddr 23 17) (bruijn ##k.217 1 0) (bruijn ##x.218 0 0))
V_CALL(VGetArg(upenv, 23-1, 17), runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V0unzip5_lambda28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0unzip5_lambda28" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0unzip5_lambda28, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unzip5_lambda28, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn cdr 22 1) (close _V0unzip5_k155) (bruijn e 0 1))
V_CALL(VGetArg(upenv, 22-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unzip5_k155, env)}),
      _var1);
 }
}
static void _V0unzip5_k153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unzip5_k153" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unzip5_k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unzip5_k153, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn map 21 18) (close _V0unzip5_k154) (close _V0unzip5_lambda28) (bruijn lst 4 1))
V_CALL(VGetArg(upenv, 21-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unzip5_k154, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unzip5_lambda28, env)}),
      upenv->up->up->up->vars[1]);
 }
}
static void _V0unzip5_k152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unzip5_k152" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unzip5_k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unzip5_k152, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn map 20 18) (close _V0unzip5_k153) (bruijn cadddr 20 17) (bruijn lst 3 1))
V_CALL(VGetArg(upenv, 20-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unzip5_k153, env)}),
      VGetArg(upenv, 20-1, 17),
      upenv->up->up->vars[1]);
 }
}
static void _V0unzip5_k151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unzip5_k151" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unzip5_k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unzip5_k151, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn map 19 18) (close _V0unzip5_k152) (bruijn caddr 19 16) (bruijn lst 2 1))
V_CALL(VGetArg(upenv, 19-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unzip5_k152, env)}),
      VGetArg(upenv, 19-1, 16),
      upenv->up->vars[1]);
 }
}
static void _V0unzip5_k150(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unzip5_k150" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unzip5_k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unzip5_k150, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn map 18 18) (close _V0unzip5_k151) (bruijn cadr 18 15) (bruijn lst 1 1))
V_CALL(VGetArg(upenv, 18-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unzip5_k151, env)}),
      VGetArg(upenv, 18-1, 15),
      upenv->vars[1]);
 }
}
static void _V0unzip5_lambda27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0unzip5_lambda27" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0unzip5_lambda27, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unzip5_lambda27, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn map 17 18) (close _V0unzip5_k150) (bruijn car 17 2) (bruijn lst 0 1))
V_CALL(VGetArg(upenv, 17-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unzip5_k150, env)}),
      VGetArg(upenv, 17-1, 2),
      _var1);
 }
}
static void _V0vanity_V0list_V20_k40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k40" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k40, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0list_V20_k41) (bruijn unzip5 15 16) (close _V0unzip5_lambda27))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k41, env)}),
      VEncodeInt(15l), VEncodeInt(16l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unzip5_lambda27, env)})
    );
 }
}
static void _V0unzip4_k159(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unzip4_k159" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unzip4_k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unzip4_k159, runtime, upenv, 1, argc, _var0) {
  // ((bruijn values 20 14) (bruijn ##k.219 4 0) (bruijn ##x.220 3 0) (bruijn ##x.221 2 0) (bruijn ##x.222 1 0) (bruijn ##x.223 0 0))
V_CALL(VGetArg(upenv, 20-1, 14), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->up->vars[0],
      upenv->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V0unzip4_k158(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unzip4_k158" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unzip4_k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unzip4_k158, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn map 19 18) (close _V0unzip4_k159) (bruijn cadddr 19 17) (bruijn lst 3 1))
V_CALL(VGetArg(upenv, 19-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unzip4_k159, env)}),
      VGetArg(upenv, 19-1, 17),
      upenv->up->up->vars[1]);
 }
}
static void _V0unzip4_k157(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unzip4_k157" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unzip4_k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unzip4_k157, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn map 18 18) (close _V0unzip4_k158) (bruijn caddr 18 16) (bruijn lst 2 1))
V_CALL(VGetArg(upenv, 18-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unzip4_k158, env)}),
      VGetArg(upenv, 18-1, 16),
      upenv->up->vars[1]);
 }
}
static void _V0unzip4_k156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unzip4_k156" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unzip4_k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unzip4_k156, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn map 17 18) (close _V0unzip4_k157) (bruijn cadr 17 15) (bruijn lst 1 1))
V_CALL(VGetArg(upenv, 17-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unzip4_k157, env)}),
      VGetArg(upenv, 17-1, 15),
      upenv->vars[1]);
 }
}
static void _V0unzip4_lambda29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0unzip4_lambda29" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0unzip4_lambda29, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unzip4_lambda29, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn map 16 18) (close _V0unzip4_k156) (bruijn car 16 2) (bruijn lst 0 1))
V_CALL(VGetArg(upenv, 16-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unzip4_k156, env)}),
      VGetArg(upenv, 16-1, 2),
      _var1);
 }
}
static void _V0vanity_V0list_V20_k39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k39" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k39, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0list_V20_k40) (bruijn unzip4 14 15) (close _V0unzip4_lambda29))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k40, env)}),
      VEncodeInt(14l), VEncodeInt(15l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unzip4_lambda29, env)})
    );
 }
}
static void _V0unzip3_k162(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unzip3_k162" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unzip3_k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unzip3_k162, runtime, upenv, 1, argc, _var0) {
  // ((bruijn values 18 14) (bruijn ##k.224 3 0) (bruijn ##x.225 2 0) (bruijn ##x.226 1 0) (bruijn ##x.227 0 0))
V_CALL(VGetArg(upenv, 18-1, 14), runtime,
      upenv->up->up->vars[0],
      upenv->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V0unzip3_k161(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unzip3_k161" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unzip3_k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unzip3_k161, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn map 17 18) (close _V0unzip3_k162) (bruijn caddr 17 16) (bruijn lst 2 1))
V_CALL(VGetArg(upenv, 17-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unzip3_k162, env)}),
      VGetArg(upenv, 17-1, 16),
      upenv->up->vars[1]);
 }
}
static void _V0unzip3_k160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unzip3_k160" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unzip3_k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unzip3_k160, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn map 16 18) (close _V0unzip3_k161) (bruijn cadr 16 15) (bruijn lst 1 1))
V_CALL(VGetArg(upenv, 16-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unzip3_k161, env)}),
      VGetArg(upenv, 16-1, 15),
      upenv->vars[1]);
 }
}
static void _V0unzip3_lambda30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0unzip3_lambda30" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0unzip3_lambda30, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unzip3_lambda30, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn map 15 18) (close _V0unzip3_k160) (bruijn car 15 2) (bruijn lst 0 1))
V_CALL(VGetArg(upenv, 15-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unzip3_k160, env)}),
      VGetArg(upenv, 15-1, 2),
      _var1);
 }
}
static void _V0vanity_V0list_V20_k38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k38" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k38, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0list_V20_k39) (bruijn unzip3 13 14) (close _V0unzip3_lambda30))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k39, env)}),
      VEncodeInt(13l), VEncodeInt(14l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unzip3_lambda30, env)})
    );
 }
}
static void _V0unzip2_k164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unzip2_k164" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unzip2_k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unzip2_k164, runtime, upenv, 1, argc, _var0) {
  // ((bruijn values 16 14) (bruijn ##k.228 2 0) (bruijn ##x.229 1 0) (bruijn ##x.230 0 0))
V_CALL(VGetArg(upenv, 16-1, 14), runtime,
      upenv->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V0unzip2_k163(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unzip2_k163" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unzip2_k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unzip2_k163, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn map 15 18) (close _V0unzip2_k164) (bruijn cadr 15 15) (bruijn lst 1 1))
V_CALL(VGetArg(upenv, 15-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unzip2_k164, env)}),
      VGetArg(upenv, 15-1, 15),
      upenv->vars[1]);
 }
}
static void _V0unzip2_lambda31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0unzip2_lambda31" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0unzip2_lambda31, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unzip2_lambda31, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn map 14 18) (close _V0unzip2_k163) (bruijn car 14 2) (bruijn lst 0 1))
V_CALL(VGetArg(upenv, 14-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unzip2_k163, env)}),
      VGetArg(upenv, 14-1, 2),
      _var1);
 }
}
static void _V0vanity_V0list_V20_k37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k37" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k37, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0list_V20_k38) (bruijn unzip2 12 13) (close _V0unzip2_lambda31))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k38, env)}),
      VEncodeInt(12l), VEncodeInt(13l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unzip2_lambda31, env)})
    );
 }
}
static void _V0unzip1_lambda32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0unzip1_lambda32" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0unzip1_lambda32, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unzip1_lambda32, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn map 13 18) (bruijn ##k.231 0 0) (bruijn car 13 2) (bruijn lst 0 1))
V_CALL(VGetArg(upenv, 13-1, 18), runtime,
      _var0,
      VGetArg(upenv, 13-1, 2),
      _var1);
 }
}
static void _V0vanity_V0list_V20_k36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k36" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k36, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0list_V20_k37) (bruijn unzip1 11 12) (close _V0unzip1_lambda32))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k37, env)}),
      VEncodeInt(11l), VEncodeInt(12l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unzip1_lambda32, env)})
    );
 }
}
static void _V0zip_lambda33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, ...) {
 static VDebugInfo dbg = { "_V0zip_lambda33" };
 VRecordCall(&dbg);
 if(argc < 1) {
  VError("Not enough arguments to _V0zip_lambda33, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
 V_GC_CHECK2_VARARGS((VFunc)_V0zip_lambda33, runtime, upenv, 1, argc, _var0, _varargs) {
  // ((bruijn apply 12 19) (bruijn ##k.232 0 0) (bruijn map 12 18) (bruijn list 12 20) (bruijn lsts 0 1))
V_CALL(VGetArg(upenv, 12-1, 19), runtime,
      _var0,
      VGetArg(upenv, 12-1, 18),
      VGetArg(upenv, 12-1, 20),
      _varargs);
 }
}
static void _V0vanity_V0list_V20_k35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k35" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k35, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0list_V20_k36) (bruijn zip 10 11) (close _V0zip_lambda33))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k36, env)}),
      VEncodeInt(10l), VEncodeInt(11l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0zip_lambda33, env)})
    );
 }
}
static void _V0concatenate_k168(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0concatenate_k168" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0concatenate_k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0concatenate_k168, runtime, upenv, 1, argc, _var0) {
  // ((bruijn append 15 21) (bruijn ##k.233 4 0) (bruijn ##x.235 2 0) (bruijn ##x.236 0 0))
V_CALL(VGetArg(upenv, 15-1, 21), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0concatenate_k167(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0concatenate_k167" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0concatenate_k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0concatenate_k167, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn concatenate 13 10) (close _V0concatenate_k168) (bruijn ##x.237 0 0))
V_CALL(VGetArg(upenv, 13-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0concatenate_k168, env)}),
      _var0);
 }
}
static void _V0concatenate_k166(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0concatenate_k166" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0concatenate_k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0concatenate_k166, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 13 1) (close _V0concatenate_k167) (bruijn lst-of-lsts 2 1))
V_CALL(VGetArg(upenv, 13-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0concatenate_k167, env)}),
      upenv->up->vars[1]);
 }
}
static void _V0concatenate_k165(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0concatenate_k165" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0concatenate_k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0concatenate_k165, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.234 0 0) ((bruijn ##k.233 1 0) (quote ())) ((bruijn car 12 2) (close _V0concatenate_k166) (bruijn lst-of-lsts 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      VNULL);
} else {
V_CALL(VGetArg(upenv, 12-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0concatenate_k166, env)}),
      upenv->vars[1]);
}
 }
}
static void _V0concatenate_lambda34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0concatenate_lambda34" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0concatenate_lambda34, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0concatenate_lambda34, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn null? 11 5) (close _V0concatenate_k165) (bruijn lst-of-lsts 0 1))
V_CALL(VGetArg(upenv, 11-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0concatenate_k165, env)}),
      _var1);
 }
}
static void _V0vanity_V0list_V20_k34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k34" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k34, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0list_V20_k35) (bruijn concatenate 9 10) (close _V0concatenate_lambda34))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k35, env)}),
      VEncodeInt(9l), VEncodeInt(10l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0concatenate_lambda34, env)})
    );
 }
}
static void _V0fold__right_k172(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0fold__right_k172" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0fold__right_k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0fold__right_k172, runtime, upenv, 1, argc, _var0) {
  // ((bruijn kons 4 1) (bruijn ##k.238 4 0) (bruijn ##x.240 2 0) (bruijn ##x.241 0 0))
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->up->up->up->vars[0],
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0fold__right_k171(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0fold__right_k171" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0fold__right_k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0fold__right_k171, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn fold-right 12 9) (close _V0fold__right_k172) (bruijn knil 3 2) (bruijn ##x.242 0 0))
V_CALL(VGetArg(upenv, 12-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0fold__right_k172, env)}),
      upenv->up->up->vars[2],
      _var0);
 }
}
static void _V0fold__right_k170(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0fold__right_k170" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0fold__right_k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0fold__right_k170, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 12 1) (close _V0fold__right_k171) (bruijn ks 2 3))
V_CALL(VGetArg(upenv, 12-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0fold__right_k171, env)}),
      upenv->up->vars[3]);
 }
}
static void _V0fold__right_k169(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0fold__right_k169" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0fold__right_k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0fold__right_k169, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.239 0 0) ((bruijn ##k.238 1 0) (bruijn knil 1 2)) ((bruijn car 11 2) (close _V0fold__right_k170) (bruijn ks 1 3)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      upenv->vars[2]);
} else {
V_CALL(VGetArg(upenv, 11-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0fold__right_k170, env)}),
      upenv->vars[3]);
}
 }
}
static void _V0fold__right_lambda35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0fold__right_lambda35" };
 VRecordCall(&dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0fold__right_lambda35, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0fold__right_lambda35, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn null? 10 5) (close _V0fold__right_k169) (bruijn ks 0 3))
V_CALL(VGetArg(upenv, 10-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0fold__right_k169, env)}),
      _var3);
 }
}
static void _V0vanity_V0list_V20_k33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k33" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k33, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0list_V20_k34) (bruijn fold-right 8 9) (close _V0fold__right_lambda35))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k34, env)}),
      VEncodeInt(8l), VEncodeInt(9l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0fold__right_lambda35, env)})
    );
 }
}
static void _V0fold_k176(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0fold_k176" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0fold_k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0fold_k176, runtime, upenv, 1, argc, _var0) {
  // ((bruijn fold 12 8) (bruijn ##k.243 4 0) (bruijn kons 4 1) (bruijn ##x.245 1 0) (bruijn ##x.246 0 0))
V_CALL(VGetArg(upenv, 12-1, 8), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->up->up->vars[1],
      upenv->vars[0],
      _var0);
 }
}
static void _V0fold_k175(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0fold_k175" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0fold_k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0fold_k175, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 12 1) (close _V0fold_k176) (bruijn ks 3 3))
V_CALL(VGetArg(upenv, 12-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0fold_k176, env)}),
      upenv->up->up->vars[3]);
 }
}
static void _V0fold_k174(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0fold_k174" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0fold_k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0fold_k174, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn kons 2 1) (close _V0fold_k175) (bruijn ##x.247 0 0) (bruijn knil 2 2))
V_CALL(upenv->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0fold_k175, env)}),
      _var0,
      upenv->up->vars[2]);
 }
}
static void _V0fold_k173(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0fold_k173" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0fold_k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0fold_k173, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.244 0 0) ((bruijn ##k.243 1 0) (bruijn knil 1 2)) ((bruijn car 10 2) (close _V0fold_k174) (bruijn ks 1 3)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      upenv->vars[2]);
} else {
V_CALL(VGetArg(upenv, 10-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0fold_k174, env)}),
      upenv->vars[3]);
}
 }
}
static void _V0fold_lambda36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0fold_lambda36" };
 VRecordCall(&dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0fold_lambda36, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0fold_lambda36, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn null? 9 5) (close _V0fold_k173) (bruijn ks 0 3))
V_CALL(VGetArg(upenv, 9-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0fold_k173, env)}),
      _var3);
 }
}
static void _V0vanity_V0list_V20_k32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k32" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k32, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0list_V20_k33) (bruijn fold 7 8) (close _V0fold_lambda36))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k33, env)}),
      VEncodeInt(7l), VEncodeInt(8l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0fold_lambda36, env)})
    );
 }
}
static void _V0split__at_k179(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0split__at_k179" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0split__at_k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0split__at_k179, runtime, upenv, 1, argc, _var0) {
  // ((bruijn split-at 11 7) (bruijn ##k.250 2 0) (bruijn ##x.251 1 0) (bruijn ##x.252 0 0))
V_CALL(VGetArg(upenv, 11-1, 7), runtime,
      upenv->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V0split__at_k178(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0split__at_k178" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0split__at_k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0split__at_k178, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn - 11 10) (close _V0split__at_k179) (bruijn i 3 2) 1)
V_CALL(VGetArg(upenv, 11-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0split__at_k179, env)}),
      upenv->up->up->vars[2],
      VEncodeInt(1l));
 }
}
static void _V0split__at_lambda38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0split__at_lambda38" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0split__at_lambda38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0split__at_lambda38, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 10 1) (close _V0split__at_k178) (bruijn lst 2 1))
V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0split__at_k178, env)}),
      upenv->up->vars[1]);
 }
}
static void _V0split__at_k181(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0split__at_k181" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0split__at_k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0split__at_k181, runtime, upenv, 1, argc, _var0) {
  // ((bruijn values 12 14) (bruijn ##k.253 2 0) (bruijn ##x.254 0 0) (bruijn d 2 2))
V_CALL(VGetArg(upenv, 12-1, 14), runtime,
      upenv->up->vars[0],
      _var0,
      upenv->up->vars[2]);
 }
}
static void _V0split__at_k180(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0split__at_k180" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0split__at_k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0split__at_k180, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 11 3) (close _V0split__at_k181) (bruijn ##x.255 0 0) (bruijn t 1 1))
V_CALL(VGetArg(upenv, 11-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0split__at_k181, env)}),
      _var0,
      upenv->vars[1]);
 }
}
static void _V0split__at_lambda39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0split__at_lambda39" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0split__at_lambda39, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0split__at_lambda39, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn car 10 2) (close _V0split__at_k180) (bruijn lst 2 1))
V_CALL(VGetArg(upenv, 10-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0split__at_k180, env)}),
      upenv->up->vars[1]);
 }
}
static void _V0split__at_k177(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0split__at_k177" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0split__at_k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0split__at_k177, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.249 0 0) ((bruijn values 9 14) (bruijn ##k.248 1 0) (quote ()) (bruijn lst 1 1)) ((bruijn call-with-values 9 13) (bruijn ##k.248 1 0) (close _V0split__at_lambda38) (close _V0split__at_lambda39)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 9-1, 14), runtime,
      upenv->vars[0],
      VNULL,
      upenv->vars[1]);
} else {
V_CALL(VGetArg(upenv, 9-1, 13), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0split__at_lambda38, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0split__at_lambda39, env)}));
}
 }
}
static void _V0split__at_lambda37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0split__at_lambda37" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0split__at_lambda37, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0split__at_lambda37, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn eq? 8 8) (close _V0split__at_k177) (bruijn i 0 2) 0)
V_CALL(VGetArg(upenv, 8-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0split__at_k177, env)}),
      _var2,
      VEncodeInt(0l));
 }
}
static void _V0vanity_V0list_V20_k31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k31" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k31, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0list_V20_k32) (bruijn split-at 6 7) (close _V0split__at_lambda37))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k32, env)}),
      VEncodeInt(6l), VEncodeInt(7l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0split__at_lambda37, env)})
    );
 }
}
static void _V0drop__right_k183(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0drop__right_k183" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0drop__right_k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0drop__right_k183, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 2 1) (bruijn ##k.257 2 0) (bruijn lst 3 1) (bruijn ##x.259 0 0))
V_CALL(upenv->up->vars[1], runtime,
      upenv->up->vars[0],
      upenv->up->up->vars[1],
      _var0);
 }
}
static void _V0drop__right_k182(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0drop__right_k182" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0drop__right_k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0drop__right_k182, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn length 9 22) (close _V0drop__right_k183) (bruijn lst 2 1))
V_CALL(VGetArg(upenv, 9-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0drop__right_k183, env)}),
      upenv->up->vars[1]);
 }
}
static void _V0loop_k188(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k188" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k188, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 14 3) (bruijn ##k.260 5 0) (bruijn ##x.262 3 0) (bruijn ##x.263 0 0))
V_CALL(VGetArg(upenv, 14-1, 3), runtime,
      VGetArg(upenv, 5-1, 0),
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0loop_k187(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k187" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k187, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn loop 5 1) (close _V0loop_k188) (bruijn ##x.264 1 0) (bruijn ##x.265 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k188, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V0loop_k186(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k186" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k186, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn - 12 10) (close _V0loop_k187) (bruijn len 3 2) 1)
V_CALL(VGetArg(upenv, 12-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k187, env)}),
      upenv->up->up->vars[2],
      VEncodeInt(1l));
 }
}
static void _V0loop_k185(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k185" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k185, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 11 1) (close _V0loop_k186) (bruijn lst 2 1))
V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k186, env)}),
      upenv->up->vars[1]);
 }
}
static void _V0loop_k184(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k184" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k184, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.261 0 0) ((bruijn ##k.260 1 0) (quote ())) ((bruijn car 10 2) (close _V0loop_k185) (bruijn lst 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      VNULL);
} else {
V_CALL(VGetArg(upenv, 10-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k185, env)}),
      upenv->vars[1]);
}
 }
}
static void _V0loop_lambda42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0loop_lambda42" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda42, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda42, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn eq? 9 8) (close _V0loop_k184) (bruijn len 0 2) (bruijn i 2 2))
V_CALL(VGetArg(upenv, 9-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k184, env)}),
      _var2,
      upenv->up->vars[2]);
 }
}
static void _V0drop__right_lambda41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0drop__right_lambda41" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0drop__right_lambda41, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0drop__right_k182) (bruijn loop 0 1) (close _V0loop_lambda42))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0drop__right_k182, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda42, env)})
    );
 }
}
static void _V0drop__right_lambda40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0drop__right_lambda40" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0drop__right_lambda40, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0drop__right_lambda40, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0drop__right_lambda41) (bruijn ##k.256 0 0) #f)
V_CALL_FUNC(_V0drop__right_lambda41, env, runtime,
      _var0,
      VEncodeBool(false));
 }
}
static void _V0vanity_V0list_V20_k30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k30" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k30, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0list_V20_k31) (bruijn drop-right 5 6) (close _V0drop__right_lambda40))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k31, env)}),
      VEncodeInt(5l), VEncodeInt(6l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0drop__right_lambda40, env)})
    );
 }
}
static void _V0take__right_k190(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0take__right_k190" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0take__right_k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0take__right_k190, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 2 1) (bruijn ##k.267 2 0) (bruijn lst 3 1) (bruijn ##x.269 0 0))
V_CALL(upenv->up->vars[1], runtime,
      upenv->up->vars[0],
      upenv->up->up->vars[1],
      _var0);
 }
}
static void _V0take__right_k189(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0take__right_k189" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0take__right_k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0take__right_k189, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn length 8 22) (close _V0take__right_k190) (bruijn lst 2 1))
V_CALL(VGetArg(upenv, 8-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0take__right_k190, env)}),
      upenv->up->vars[1]);
 }
}
static void _V0loop_k193(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k193" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k193, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 4 1) (bruijn ##k.270 3 0) (bruijn ##x.272 1 0) (bruijn ##x.273 0 0))
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->up->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V0loop_k192(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k192" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k192, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn - 10 10) (close _V0loop_k193) (bruijn len 2 2) 1)
V_CALL(VGetArg(upenv, 10-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k193, env)}),
      upenv->up->vars[2],
      VEncodeInt(1l));
 }
}
static void _V0loop_k191(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k191" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k191, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.271 0 0) ((bruijn ##k.270 1 0) (bruijn lst 1 1)) ((bruijn cdr 9 1) (close _V0loop_k192) (bruijn lst 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      upenv->vars[1]);
} else {
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k192, env)}),
      upenv->vars[1]);
}
 }
}
static void _V0loop_lambda45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0loop_lambda45" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda45, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda45, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn eq? 8 8) (close _V0loop_k191) (bruijn len 0 2) (bruijn i 2 2))
V_CALL(VGetArg(upenv, 8-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k191, env)}),
      _var2,
      upenv->up->vars[2]);
 }
}
static void _V0take__right_lambda44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0take__right_lambda44" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0take__right_lambda44, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0take__right_k189) (bruijn loop 0 1) (close _V0loop_lambda45))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0take__right_k189, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda45, env)})
    );
 }
}
static void _V0take__right_lambda43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0take__right_lambda43" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0take__right_lambda43, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0take__right_lambda43, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0take__right_lambda44) (bruijn ##k.266 0 0) #f)
V_CALL_FUNC(_V0take__right_lambda44, env, runtime,
      _var0,
      VEncodeBool(false));
 }
}
static void _V0vanity_V0list_V20_k29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k29" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k29, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0list_V20_k30) (bruijn take-right 4 5) (close _V0take__right_lambda43))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k30, env)}),
      VEncodeInt(4l), VEncodeInt(5l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0take__right_lambda43, env)})
    );
 }
}
static void _V0drop_k196(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0drop_k196" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0drop_k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0drop_k196, runtime, upenv, 1, argc, _var0) {
  // ((bruijn drop 7 4) (bruijn ##k.274 3 0) (bruijn ##x.276 1 0) (bruijn ##x.277 0 0))
V_CALL(VGetArg(upenv, 7-1, 4), runtime,
      upenv->up->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V0drop_k195(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0drop_k195" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0drop_k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0drop_k195, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn - 7 10) (close _V0drop_k196) (bruijn i 2 2) 1)
V_CALL(VGetArg(upenv, 7-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0drop_k196, env)}),
      upenv->up->vars[2],
      VEncodeInt(1l));
 }
}
static void _V0drop_k194(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0drop_k194" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0drop_k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0drop_k194, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.275 0 0) ((bruijn ##k.274 1 0) (bruijn lst 1 1)) ((bruijn cdr 6 1) (close _V0drop_k195) (bruijn lst 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      upenv->vars[1]);
} else {
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0drop_k195, env)}),
      upenv->vars[1]);
}
 }
}
static void _V0drop_lambda46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0drop_lambda46" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0drop_lambda46, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0drop_lambda46, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn eq? 5 8) (close _V0drop_k194) (bruijn i 0 2) 0)
V_CALL(VGetArg(upenv, 5-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0drop_k194, env)}),
      _var2,
      VEncodeInt(0l));
 }
}
static void _V0vanity_V0list_V20_k28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k28" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k28, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0list_V20_k29) (bruijn drop 3 4) (close _V0drop_lambda46))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k29, env)}),
      VEncodeInt(3l), VEncodeInt(4l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0drop_lambda46, env)})
    );
 }
}
static void _V0take_k201(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0take_k201" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0take_k201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0take_k201, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 9 3) (bruijn ##k.278 5 0) (bruijn ##x.280 3 0) (bruijn ##x.281 0 0))
V_CALL(VGetArg(upenv, 9-1, 3), runtime,
      VGetArg(upenv, 5-1, 0),
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0take_k200(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0take_k200" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0take_k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0take_k200, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn take 7 3) (close _V0take_k201) (bruijn ##x.282 1 0) (bruijn ##x.283 0 0))
V_CALL(VGetArg(upenv, 7-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0take_k201, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V0take_k199(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0take_k199" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0take_k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0take_k199, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn - 7 10) (close _V0take_k200) (bruijn i 3 2) 1)
V_CALL(VGetArg(upenv, 7-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0take_k200, env)}),
      upenv->up->up->vars[2],
      VEncodeInt(1l));
 }
}
static void _V0take_k198(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0take_k198" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0take_k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0take_k198, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 6 1) (close _V0take_k199) (bruijn lst 2 1))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0take_k199, env)}),
      upenv->up->vars[1]);
 }
}
static void _V0take_k197(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0take_k197" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0take_k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0take_k197, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.279 0 0) ((bruijn ##k.278 1 0) (quote ())) ((bruijn car 5 2) (close _V0take_k198) (bruijn lst 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      VNULL);
} else {
V_CALL(VGetArg(upenv, 5-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0take_k198, env)}),
      upenv->vars[1]);
}
 }
}
static void _V0take_lambda47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0take_lambda47" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0take_lambda47, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0take_lambda47, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn eq? 4 8) (close _V0take_k197) (bruijn i 0 2) 0)
V_CALL(upenv->up->up->up->vars[8], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0take_k197, env)}),
      _var2,
      VEncodeInt(0l));
 }
}
static void _V0vanity_V0list_V20_k27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k27" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k27, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0list_V20_k28) (bruijn take 2 3) (close _V0take_lambda47))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k28, env)}),
      VEncodeInt(2l), VEncodeInt(3l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0take_lambda47, env)})
    );
 }
}
static void _V0list__tabulate_k202(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0list__tabulate_k202" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0list__tabulate_k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0list__tabulate_k202, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.285 1 0) 0)
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      VEncodeInt(0l));
 }
}
static void _V0loop_k206(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k206" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k206, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 9 3) (bruijn ##k.287 4 0) (bruijn ##x.289 2 0) (bruijn ##x.290 0 0))
V_CALL(VGetArg(upenv, 9-1, 3), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0loop_k205(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k205" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k205, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn loop 4 1) (close _V0loop_k206) (bruijn ##x.291 0 0))
V_CALL(upenv->up->up->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k206, env)}),
      _var0);
 }
}
static void _V0loop_k204(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k204" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k204, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn + 7 11) (close _V0loop_k205) (bruijn i 2 1) 1)
V_CALL(VGetArg(upenv, 7-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k205, env)}),
      upenv->up->vars[1],
      VEncodeInt(1l));
 }
}
static void _V0loop_k203(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k203" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k203, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.288 0 0) ((bruijn ##k.287 1 0) (quote ())) ((bruijn proc 3 2) (close _V0loop_k204) (bruijn i 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      VNULL);
} else {
V_CALL(upenv->up->up->vars[2], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k204, env)}),
      upenv->vars[1]);
}
 }
}
static void _V0loop_lambda50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda50" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda50, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda50, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn eq? 5 8) (close _V0loop_k203) (bruijn i 0 1) (bruijn n 2 1))
V_CALL(VGetArg(upenv, 5-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k203, env)}),
      _var1,
      upenv->up->vars[1]);
 }
}
static void _V0list__tabulate_lambda49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0list__tabulate_lambda49" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0list__tabulate_lambda49, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0list__tabulate_k202) (bruijn loop 0 1) (close _V0loop_lambda50))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0list__tabulate_k202, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda50, env)})
    );
 }
}
static void _V0list__tabulate_lambda48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0list__tabulate_lambda48" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0list__tabulate_lambda48, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0list__tabulate_lambda48, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0list__tabulate_lambda49) (bruijn ##k.284 0 0) #f)
V_CALL_FUNC(_V0list__tabulate_lambda49, env, runtime,
      _var0,
      VEncodeBool(false));
 }
}
static void _V0vanity_V0list_V20_k26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k26" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k26, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0list_V20_k27) (bruijn list-tabulate 1 2) (close _V0list__tabulate_lambda48))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k27, env)}),
      VEncodeInt(1l), VEncodeInt(2l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0list__tabulate_lambda48, env)})
    );
 }
}
static void _V0iota_k207(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iota_k207" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iota_k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iota_k207, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.293 1 0) 0)
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      VEncodeInt(0l));
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k210, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 7 3) (bruijn ##k.295 3 0) (bruijn i 3 1) (bruijn ##x.297 0 0))
V_CALL(VGetArg(upenv, 7-1, 3), runtime,
      upenv->up->up->vars[0],
      upenv->up->up->vars[1],
      _var0);
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k209, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn loop 3 1) (close _V0loop_k210) (bruijn ##x.298 0 0))
V_CALL(upenv->up->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k210, env)}),
      _var0);
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k208, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.296 0 0) ((bruijn ##k.295 1 0) (quote ())) ((bruijn + 5 11) (close _V0loop_k209) (bruijn i 1 1) 1))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      VNULL);
} else {
V_CALL(VGetArg(upenv, 5-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k209, env)}),
      upenv->vars[1],
      VEncodeInt(1l));
}
 }
}
static void _V0loop_lambda53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda53" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda53, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda53, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn eq? 4 8) (close _V0loop_k208) (bruijn i 0 1) (bruijn n 2 1))
V_CALL(upenv->up->up->up->vars[8], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k208, env)}),
      _var1,
      upenv->up->vars[1]);
 }
}
static void _V0iota_lambda52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iota_lambda52" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iota_lambda52, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0iota_k207) (bruijn loop 0 1) (close _V0loop_lambda53))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iota_k207, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda53, env)})
    );
 }
}
static void _V0iota_k211(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iota_k211" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iota_k211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iota_k211, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.300 1 0) 0)
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      VEncodeInt(0l));
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k215, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 8 3) (bruijn ##k.302 4 0) (bruijn ##x.304 2 0) (bruijn ##x.305 0 0))
V_CALL(VGetArg(upenv, 8-1, 3), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->vars[0],
      _var0);
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k214, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn loop 4 1) (close _V0loop_k215) (bruijn ##x.306 0 0))
V_CALL(upenv->up->up->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k215, env)}),
      _var0);
 }
}
static void _V0loop_k213(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k213" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k213, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k213, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn + 6 11) (close _V0loop_k214) (bruijn i 2 1) 1)
V_CALL(VGetArg(upenv, 6-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k214, env)}),
      upenv->up->vars[1],
      VEncodeInt(1l));
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k212, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.303 0 0) ((bruijn ##k.302 1 0) (quote ())) ((bruijn + 5 11) (close _V0loop_k213) (bruijn i 1 1) (bruijn b 3 2)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      VNULL);
} else {
V_CALL(VGetArg(upenv, 5-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k213, env)}),
      upenv->vars[1],
      upenv->up->up->vars[2]);
}
 }
}
static void _V0loop_lambda55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda55" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda55, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda55, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn eq? 4 8) (close _V0loop_k212) (bruijn i 0 1) (bruijn n 2 1))
V_CALL(upenv->up->up->up->vars[8], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k212, env)}),
      _var1,
      upenv->up->vars[1]);
 }
}
static void _V0iota_lambda54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iota_lambda54" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iota_lambda54, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0iota_k211) (bruijn loop 0 1) (close _V0loop_lambda55))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iota_k211, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda55, env)})
    );
 }
}
static void _V0iota_k216(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iota_k216" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iota_k216, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iota_k216, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.308 1 0) 0)
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      VEncodeInt(0l));
 }
}
static void _V0loop_k221(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k221" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k221, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k221, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 9 3) (bruijn ##k.310 5 0) (bruijn ##x.312 2 0) (bruijn ##x.313 0 0))
V_CALL(VGetArg(upenv, 9-1, 3), runtime,
      VGetArg(upenv, 5-1, 0),
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0loop_k220(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k220" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k220, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k220, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn loop 5 1) (close _V0loop_k221) (bruijn ##x.314 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k221, env)}),
      _var0);
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k219, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn + 7 11) (close _V0loop_k220) (bruijn i 3 1) 1)
V_CALL(VGetArg(upenv, 7-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k220, env)}),
      upenv->up->up->vars[1],
      VEncodeInt(1l));
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k218, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn + 6 11) (close _V0loop_k219) (bruijn ##x.315 0 0) (bruijn b 4 2))
V_CALL(VGetArg(upenv, 6-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k219, env)}),
      _var0,
      upenv->up->up->up->vars[2]);
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k217, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.311 0 0) ((bruijn ##k.310 1 0) (quote ())) ((bruijn * 5 23) (close _V0loop_k218) (bruijn s 3 3) (bruijn i 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      VNULL);
} else {
V_CALL(VGetArg(upenv, 5-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k218, env)}),
      upenv->up->up->vars[3],
      upenv->vars[1]);
}
 }
}
static void _V0loop_lambda57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda57" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda57, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda57, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn eq? 4 8) (close _V0loop_k217) (bruijn i 0 1) (bruijn n 2 1))
V_CALL(upenv->up->up->up->vars[8], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k217, env)}),
      _var1,
      upenv->up->vars[1]);
 }
}
static void _V0iota_lambda56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iota_lambda56" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iota_lambda56, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0iota_k216) (bruijn loop 0 1) (close _V0loop_lambda57))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iota_k216, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda57, env)})
    );
 }
}
__attribute__((used)) static void _V20CaseError__V0iota_lambda51(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0iota_lambda51 #t (2 ((close _V0iota_lambda52) (bruijn ##k.292 0 0) #f)) (3 ((close _V0iota_lambda54) (bruijn ##k.299 0 0) #f)) (4 ((close _V0iota_lambda56) (bruijn ##k.307 0 0) #f)))
 VError("Not enough arguments to _V0iota_lambda51, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0iota_lambda51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case0__V0iota_lambda51" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0iota_lambda51, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0iota_lambda52) (bruijn ##k.292 0 0) #f)
V_CALL_FUNC(_V0iota_lambda52, env, runtime,
      _var0,
      VEncodeBool(false));
 }
}
__attribute__((used)) static void _V20Case1__V0iota_lambda51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case1__V0iota_lambda51" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0iota_lambda51, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0iota_lambda54) (bruijn ##k.299 0 0) #f)
V_CALL_FUNC(_V0iota_lambda54, env, runtime,
      _var0,
      VEncodeBool(false));
 }
}
__attribute__((used)) static void _V20Case2__V0iota_lambda51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case2__V0iota_lambda51" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case2__V0iota_lambda51, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((close _V0iota_lambda56) (bruijn ##k.307 0 0) #f)
V_CALL_FUNC(_V0iota_lambda56, env, runtime,
      _var0,
      VEncodeBool(false));
 }
}
void _V0iota_lambda51(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
"_V0iota_lambda51:\n"
"    cmp edx, 2\n"
"    je _V20Case0__V0iota_lambda51\n"
"    cmp edx, 3\n"
"    je _V20Case1__V0iota_lambda51\n"
"    cmp edx, 4\n"
"    je _V20Case2__V0iota_lambda51\n"
"    jmp _V20CaseError__V0iota_lambda51\n"
);
static void _V0vanity_V0list_V20_lambda3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17, VWORD _var18, VWORD _var19, VWORD _var20, VWORD _var21, VWORD _var22, VWORD _var23, VWORD _var24, VWORD _var25, VWORD _var26, VWORD _var27, VWORD _var28, VWORD _var29, VWORD _var30) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_lambda3" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_lambda3, runtime, upenv, 31, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7, _var8, _var9, _var10, _var11, _var12, _var13, _var14, _var15, _var16, _var17, _var18, _var19, _var20, _var21, _var22, _var23, _var24, _var25, _var26, _var27, _var28, _var29, _var30) {
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
  // (set! (close _V0vanity_V0list_V20_k26) (bruijn iota 0 1) (close _V0iota_lambda51))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k26, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iota_lambda51, env)})
    );
 }
}
static void _V0vanity_V0list_V20_lambda2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17, VWORD _var18, VWORD _var19, VWORD _var20, VWORD _var21, VWORD _var22, VWORD _var23) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_lambda2" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_lambda2, runtime, upenv, 24, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7, _var8, _var9, _var10, _var11, _var12, _var13, _var14, _var15, _var16, _var17, _var18, _var19, _var20, _var21, _var22, _var23) {
  struct { VEnv env; VWORD argv[24]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 24; env->var_len = 24; env->up = upenv;
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
  // ((close _V0vanity_V0list_V20_lambda3) (bruijn ##k.2 0 0) #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f)
V_CALL_FUNC(_V0vanity_V0list_V20_lambda3, env, runtime,
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
      VEncodeBool(false));
 }
}
static void _V0vanity_V0list_V20_k25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k25" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k25, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0vanity_V0list_V20_lambda2) (bruijn ##k.1 25 0) (bruijn ##x.316 22 0) (bruijn ##x.317 21 0) (bruijn ##x.318 20 0) (bruijn ##x.319 19 0) (bruijn ##x.320 18 0) (bruijn ##x.321 17 0) (bruijn ##x.322 16 0) (bruijn ##x.323 15 0) (bruijn ##x.324 14 0) (bruijn ##x.325 13 0) (bruijn ##x.326 12 0) (bruijn ##x.327 11 0) (bruijn ##x.328 10 0) (bruijn ##x.329 9 0) (bruijn ##x.330 8 0) (bruijn ##x.331 7 0) (bruijn ##x.332 6 0) (bruijn ##x.333 5 0) (bruijn ##x.334 4 0) (bruijn ##x.335 3 0) (bruijn ##x.336 2 0) (bruijn ##x.337 1 0) (bruijn ##x.338 0 0))
V_CALL_FUNC(_V0vanity_V0list_V20_lambda2, env, runtime,
      VGetArg(upenv, 25-1, 0),
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
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k24, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 22 0) (close _V0vanity_V0list_V20_k25) (quote *))
V_CALL(VGetArg(upenv, 22-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k25, env)}),
      VEncodePointer(&_V0_S.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0list_V20_k23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k23" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k23, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 21 0) (close _V0vanity_V0list_V20_k24) (quote length))
V_CALL(VGetArg(upenv, 21-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k24, env)}),
      VEncodePointer(&_V0length.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0list_V20_k22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k22" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k22, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 20 0) (close _V0vanity_V0list_V20_k23) (quote append))
V_CALL(VGetArg(upenv, 20-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k23, env)}),
      VEncodePointer(&_V0append.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0list_V20_k21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k21" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k21, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 19 0) (close _V0vanity_V0list_V20_k22) (quote list))
V_CALL(VGetArg(upenv, 19-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k22, env)}),
      VEncodePointer(&_V0list.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0list_V20_k20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k20" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k20, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 18 0) (close _V0vanity_V0list_V20_k21) (quote apply))
V_CALL(VGetArg(upenv, 18-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k21, env)}),
      VEncodePointer(&_V0apply.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0list_V20_k19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k19" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k19, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 17 0) (close _V0vanity_V0list_V20_k20) (quote map))
V_CALL(VGetArg(upenv, 17-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k20, env)}),
      VEncodePointer(&_V0map.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0list_V20_k18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k18" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k18, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 16 0) (close _V0vanity_V0list_V20_k19) (quote cadddr))
V_CALL(VGetArg(upenv, 16-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k19, env)}),
      VEncodePointer(&_V0cadddr.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0list_V20_k17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k17" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k17, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 15 0) (close _V0vanity_V0list_V20_k18) (quote caddr))
V_CALL(VGetArg(upenv, 15-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k18, env)}),
      VEncodePointer(&_V0caddr.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0list_V20_k16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k16" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k16, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 14 0) (close _V0vanity_V0list_V20_k17) (quote cadr))
V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k17, env)}),
      VEncodePointer(&_V0cadr.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0list_V20_k15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k15" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k15, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 13 0) (close _V0vanity_V0list_V20_k16) (quote values))
V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k16, env)}),
      VEncodePointer(&_V0values.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0list_V20_k14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k14" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k14, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 12 0) (close _V0vanity_V0list_V20_k15) (quote call-with-values))
V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k15, env)}),
      VEncodePointer(&_V0call__with__values.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0list_V20_k13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k13" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k13, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 11 0) (close _V0vanity_V0list_V20_k14) (quote not))
V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k14, env)}),
      VEncodePointer(&_V0not.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0list_V20_k12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k12" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k12, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 10 0) (close _V0vanity_V0list_V20_k13) (quote +))
V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k13, env)}),
      VEncodePointer(&_V0_P.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0list_V20_k11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k11" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k11, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 9 0) (close _V0vanity_V0list_V20_k12) (quote -))
V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k12, env)}),
      VEncodePointer(&_V0__.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0list_V20_k10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k10" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k10, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 8 0) (close _V0vanity_V0list_V20_k11) (quote =))
V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k11, env)}),
      VEncodePointer(&_V0_E.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0list_V20_k9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k9" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k9, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 7 0) (close _V0vanity_V0list_V20_k10) (quote eq?))
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k10, env)}),
      VEncodePointer(&_V0eq_Q.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0list_V20_k8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k8" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k8, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 6 0) (close _V0vanity_V0list_V20_k9) (quote eqv?))
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k9, env)}),
      VEncodePointer(&_V0eqv_Q.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0list_V20_k7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k7" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k7, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 5 0) (close _V0vanity_V0list_V20_k8) (quote equal?))
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k8, env)}),
      VEncodePointer(&_V0equal_Q.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0list_V20_k6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k6" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k6, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 4 0) (close _V0vanity_V0list_V20_k7) (quote null?))
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k7, env)}),
      VEncodePointer(&_V0null_Q.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0list_V20_k5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k5" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k5, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 3 0) (close _V0vanity_V0list_V20_k6) (quote caar))
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k6, env)}),
      VEncodePointer(&_V0caar.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0list_V20_k4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k4" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k4, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 2 0) (close _V0vanity_V0list_V20_k5) (quote cons))
V_CALL(upenv->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k5, env)}),
      VEncodePointer(&_V0cons.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0list_V20_k3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k3" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k3, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 1 0) (close _V0vanity_V0list_V20_k4) (quote car))
V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k4, env)}),
      VEncodePointer(&_V0car.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0list_V20_k2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k2" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k2, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 0 0) (close _V0vanity_V0list_V20_k3) (quote cdr))
V_CALL(_var0, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k3, env)}),
      VEncodePointer(&_V0cdr.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0list_V20_k1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_k1" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_k1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.make-import (close _V0vanity_V0list_V20_k2) (##string ##string.340) (bruijn ##x.339 0 0))
    V_CALL_FUNC(VMakeImport2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k2, env)}),
      VEncodePointer(&_V10string_D340.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V0vanity_V0list_V20_lambda1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_lambda1" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0list_V20_lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0list_V20_lambda1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0list_V20_k1) (##string ##string.341))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0list_V20_k1, env)}),
      VEncodePointer(&_V10string_D341.sym, VPOINTER_OTHER));
 }
}
VFunc _V0vanity_V0list_V20 = (VFunc)_V0vanity_V0list_V20_lambda1;
