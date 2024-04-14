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
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D220 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D219 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "_V0vanity_V0pretty__print_V20" };
VWEAK VWORD _V0close__port;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0close__port = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "close-port" };
VWEAK VWORD _V0get__output__string;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0get__output__string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "get-output-string" };
VWEAK VWORD _V0string__length;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0string__length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "string-length" };
VWEAK VWORD _V0open__output__string;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0open__output__string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "open-output-string" };
VWEAK VWORD _V0call_Wcc;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0call_Wcc = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "call/cc" };
VWEAK VWORD _V0_G;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_G = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, ">" };
VWEAK VWORD _V0assv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0assv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "assv" };
VWEAK VWORD _V0write;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0write = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "write" };
VWEAK VWORD _V0eqv_Q;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0eqv_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "eqv\?" };
VWEAK VWORD _V0cadr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cadr" };
VWEAK VWORD _V0display;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0display = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "display" };
VWEAK VWORD _V0pair_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0pair_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "pair\?" };
VWEAK VWORD _V0newline;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0newline = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "newline" };
VWEAK VWORD _V0__;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0__ = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "-" };
VWEAK VWORD _V0max;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0max = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "max" };
VWEAK VWORD _V0memv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0memv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "memv" };
VWEAK VWORD _V0not;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0not = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "not" };
VWEAK VWORD _V0null_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0null_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "null\?" };
VWEAK VWORD _V0cdr;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0cdr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "cdr" };
VWEAK VWORD _V0_P;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_P = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "+" };
VWEAK VWORD _V0car;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0car = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "car" };
VWEAK VWORD _V0pretty__print;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0pretty__print = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "pretty-print" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D218 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "(" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D217 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, ". " };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D216 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, " " };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D215 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, ")" };
VWEAK VWORD _V0letrec_S;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0letrec_S = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "letrec*" };
VWEAK VWORD _V0let_S;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0let_S = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "let*" };
VWEAK VWORD _V0letrec;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0letrec = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "letrec" };
VWEAK VWORD _V0let;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0let = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "let" };
VWEAK VWORD _V0if;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0if = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "if" };
VWEAK VWORD _V0continuation;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0continuation = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "continuation" };
VWEAK VWORD _V0lambda;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "lambda" };
VWEAK VWORD _V0set_B;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "set!" };
VWEAK VWORD _V0define;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0define = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "define" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D214 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, ",@" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D213 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "," };
VWEAK VWORD _V0unquote;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0unquote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "unquote" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D212 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "`" };
VWEAK VWORD _V0quasiquote;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0quasiquote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "quasiquote" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D211 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "'" };
VWEAK VWORD _V0quote;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0quote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "quote" };
VWEAK VWORD _V0unquote__splicing;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0unquote__splicing = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "unquote-splicing" };
static __attribute__((constructor)) void VDllMain1() {
  _V0close__port = VEncodePointer(VLookupConstant("_V0close__port", &_VW_V0close__port), VPOINTER_OTHER);
  _V0get__output__string = VEncodePointer(VLookupConstant("_V0get__output__string", &_VW_V0get__output__string), VPOINTER_OTHER);
  _V0string__length = VEncodePointer(VLookupConstant("_V0string__length", &_VW_V0string__length), VPOINTER_OTHER);
  _V0open__output__string = VEncodePointer(VLookupConstant("_V0open__output__string", &_VW_V0open__output__string), VPOINTER_OTHER);
  _V0call_Wcc = VEncodePointer(VLookupConstant("_V0call_Wcc", &_VW_V0call_Wcc), VPOINTER_OTHER);
  _V0_G = VEncodePointer(VLookupConstant("_V0_G", &_VW_V0_G), VPOINTER_OTHER);
  _V0assv = VEncodePointer(VLookupConstant("_V0assv", &_VW_V0assv), VPOINTER_OTHER);
  _V0write = VEncodePointer(VLookupConstant("_V0write", &_VW_V0write), VPOINTER_OTHER);
  _V0eqv_Q = VEncodePointer(VLookupConstant("_V0eqv_Q", &_VW_V0eqv_Q), VPOINTER_OTHER);
  _V0cadr = VEncodePointer(VLookupConstant("_V0cadr", &_VW_V0cadr), VPOINTER_OTHER);
  _V0display = VEncodePointer(VLookupConstant("_V0display", &_VW_V0display), VPOINTER_OTHER);
  _V0pair_Q = VEncodePointer(VLookupConstant("_V0pair_Q", &_VW_V0pair_Q), VPOINTER_OTHER);
  _V0newline = VEncodePointer(VLookupConstant("_V0newline", &_VW_V0newline), VPOINTER_OTHER);
  _V0__ = VEncodePointer(VLookupConstant("_V0__", &_VW_V0__), VPOINTER_OTHER);
  _V0max = VEncodePointer(VLookupConstant("_V0max", &_VW_V0max), VPOINTER_OTHER);
  _V0memv = VEncodePointer(VLookupConstant("_V0memv", &_VW_V0memv), VPOINTER_OTHER);
  _V0not = VEncodePointer(VLookupConstant("_V0not", &_VW_V0not), VPOINTER_OTHER);
  _V0null_Q = VEncodePointer(VLookupConstant("_V0null_Q", &_VW_V0null_Q), VPOINTER_OTHER);
  _V0cdr = VEncodePointer(VLookupConstant("_V0cdr", &_VW_V0cdr), VPOINTER_OTHER);
  _V0_P = VEncodePointer(VLookupConstant("_V0_P", &_VW_V0_P), VPOINTER_OTHER);
  _V0car = VEncodePointer(VLookupConstant("_V0car", &_VW_V0car), VPOINTER_OTHER);
  _V0pretty__print = VEncodePointer(VLookupConstant("_V0pretty__print", &_VW_V0pretty__print), VPOINTER_OTHER);
  _V0letrec_S = VEncodePointer(VLookupConstant("_V0letrec_S", &_VW_V0letrec_S), VPOINTER_OTHER);
  _V0let_S = VEncodePointer(VLookupConstant("_V0let_S", &_VW_V0let_S), VPOINTER_OTHER);
  _V0letrec = VEncodePointer(VLookupConstant("_V0letrec", &_VW_V0letrec), VPOINTER_OTHER);
  _V0let = VEncodePointer(VLookupConstant("_V0let", &_VW_V0let), VPOINTER_OTHER);
  _V0if = VEncodePointer(VLookupConstant("_V0if", &_VW_V0if), VPOINTER_OTHER);
  _V0continuation = VEncodePointer(VLookupConstant("_V0continuation", &_VW_V0continuation), VPOINTER_OTHER);
  _V0lambda = VEncodePointer(VLookupConstant("_V0lambda", &_VW_V0lambda), VPOINTER_OTHER);
  _V0set_B = VEncodePointer(VLookupConstant("_V0set_B", &_VW_V0set_B), VPOINTER_OTHER);
  _V0define = VEncodePointer(VLookupConstant("_V0define", &_VW_V0define), VPOINTER_OTHER);
  _V0unquote = VEncodePointer(VLookupConstant("_V0unquote", &_VW_V0unquote), VPOINTER_OTHER);
  _V0quasiquote = VEncodePointer(VLookupConstant("_V0quasiquote", &_VW_V0quasiquote), VPOINTER_OTHER);
  _V0quote = VEncodePointer(VLookupConstant("_V0quote", &_VW_V0quote), VPOINTER_OTHER);
  _V0unquote__splicing = VEncodePointer(VLookupConstant("_V0unquote__splicing", &_VW_V0unquote__splicing), VPOINTER_OTHER);
}
static void _V10_Dprint__indent_D23_k26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dprint__indent_D23_k26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__indent_D23_k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__indent_D23_k26, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.print-indent.23 4 0) (bruijn ##.k.89 3 0) (bruijn ##.x.92 0 0))
    V_CALL(upenv->up->up->up->vars[0], runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V10_Dprint__indent_D23_k25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dprint__indent_D23_k25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__indent_D23_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__indent_D23_k25, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.-.15 4 13) (close _V10_Dprint__indent_D23_k26) (bruijn ##.i.31 2 1) 1)
    V_CALL(upenv->up->up->up->vars[13], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__indent_D23_k26, env)}),
      upenv->up->vars[1],
      VEncodeInt(1l));
 }
}
static void _V10_Dprint__indent_D23_k24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dprint__indent_D23_k24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__indent_D23_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__indent_D23_k24, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.90 0 0) ((bruijn ##.display.12 3 10) (close _V10_Dprint__indent_D23_k25) #\space) ((bruijn ##.k.89 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->vars[10], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__indent_D23_k25, env)}),
      VEncodeChar(' '));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dprint__indent_D23_lambda3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dprint__indent_D23_lambda3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__indent_D23_lambda3, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__indent_D23_lambda3, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.>.7 2 5) (close _V10_Dprint__indent_D23_k24) (bruijn ##.i.31 0 1) 0)
    V_CALL(upenv->up->vars[5], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__indent_D23_k24, env)}),
      _var1,
      VEncodeInt(0l));
 }
}
static void _V10_Datom_Q_D24_k27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Datom_Q_D24_k27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Datom_Q_D24_k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Datom_Q_D24_k27, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.not.18 3 16) (bruijn ##.k.93 1 0) (bruijn ##.x.94 0 0))
    V_CALL(upenv->up->up->vars[16], runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Datom_Q_D24_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Datom_Q_D24_lambda4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Datom_Q_D24_lambda4, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Datom_Q_D24_lambda4, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.pair?.13 2 11) (close _V10_Datom_Q_D24_k27) (bruijn ##.expr.32 0 1))
    V_CALL(upenv->up->vars[11], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Datom_Q_D24_k27, env)}),
      _var1);
 }
}
static void _V10_Dlengthof__atom_D25_k32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlengthof__atom_D25_k32" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlengthof__atom_D25_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlengthof__atom_D25_k32, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.95 5 0) (bruijn ##.len.35 1 0))
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      upenv->vars[0]);
 }
}
static void _V10_Dlengthof__atom_D25_k31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlengthof__atom_D25_k31" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlengthof__atom_D25_k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlengthof__atom_D25_k31, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.close-port.2 6 0) (close _V10_Dlengthof__atom_D25_k32) (bruijn ##.port.34 3 0))
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlengthof__atom_D25_k32, env)}),
      upenv->up->up->vars[0]);
 }
}
static void _V10_Dlengthof__atom_D25_k30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlengthof__atom_D25_k30" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlengthof__atom_D25_k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlengthof__atom_D25_k30, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.string-length.4 5 2) (close _V10_Dlengthof__atom_D25_k31) (bruijn ##.x.98 0 0))
    V_CALL(VGetArg(upenv, 5-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlengthof__atom_D25_k31, env)}),
      _var0);
 }
}
static void _V10_Dlengthof__atom_D25_k29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlengthof__atom_D25_k29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlengthof__atom_D25_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlengthof__atom_D25_k29, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.get-output-string.3 4 1) (close _V10_Dlengthof__atom_D25_k30) (bruijn ##.port.34 1 0))
    V_CALL(upenv->up->up->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlengthof__atom_D25_k30, env)}),
      upenv->vars[0]);
 }
}
static void _V10_Dlengthof__atom_D25_k28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlengthof__atom_D25_k28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlengthof__atom_D25_k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlengthof__atom_D25_k28, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.write.9 3 7) (close _V10_Dlengthof__atom_D25_k29) (bruijn ##.expr.33 1 1) (bruijn ##.port.34 0 0))
    V_CALL(upenv->up->up->vars[7], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlengthof__atom_D25_k29, env)}),
      upenv->vars[1],
      _var0);
 }
}
static void _V10_Dlengthof__atom_D25_lambda5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dlengthof__atom_D25_lambda5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlengthof__atom_D25_lambda5, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlengthof__atom_D25_lambda5, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.open-output-string.5 2 3) (close _V10_Dlengthof__atom_D25_k28))
    V_CALL(upenv->up->vars[3], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlengthof__atom_D25_k28, env)}));
 }
}
static void _V10_Dloop_D42_k37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D42_k37" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D42_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D42_k37, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.+.21 12 19) (bruijn ##.k.102 5 0) (bruijn ##.n.44 5 2) (bruijn ##.x.106 0 0) 3)
    V_CALL(VGetArg(upenv, 12-1, 19), runtime,
      VGetArg(upenv, 5-1, 0),
      VGetArg(upenv, 5-1, 2),
      _var0,
      VEncodeInt(3l));
 }
}
static void _V10_Dloop_D42_k41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D42_k41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D42_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D42_k41, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.42 9 0) (bruijn ##.k.102 8 0) (bruijn ##.x.107 3 0) (bruijn ##.x.108 0 0))
    V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VGetArg(upenv, 8-1, 0),
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D42_k40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D42_k40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D42_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D42_k40, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.+.21 14 19) (close _V10_Dloop_D42_k41) (bruijn ##.n.44 7 2) (bruijn ##.x.109 0 0) 1)
    V_CALL(VGetArg(upenv, 14-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D42_k41, env)}),
      VGetArg(upenv, 7-1, 2),
      _var0,
      VEncodeInt(1l));
 }
}
static void _V10_Dloop_D42_k39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D42_k39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D42_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D42_k39, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.lengthof.40 9 1) (close _V10_Dloop_D42_k40) (bruijn ##.x.110 0 0))
    V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D42_k40, env)}),
      _var0);
 }
}
static void _V10_Dloop_D42_k38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D42_k38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D42_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D42_k38, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.car.22 12 20) (close _V10_Dloop_D42_k39) (bruijn ##.expr.43 5 1))
    V_CALL(VGetArg(upenv, 12-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D42_k39, env)}),
      VGetArg(upenv, 5-1, 1));
 }
}
static void _V10_Dloop_D42_k36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D42_k36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D42_k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D42_k36, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.105 0 0) ((bruijn ##.lengthof.40 7 1) (close _V10_Dloop_D42_k37) (bruijn ##.expr.43 4 1)) ((bruijn ##.cdr.20 11 18) (close _V10_Dloop_D42_k38) (bruijn ##.expr.43 4 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D42_k37, env)}),
      upenv->up->up->up->vars[1]);
} else {
    V_CALL(VGetArg(upenv, 11-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D42_k38, env)}),
      upenv->up->up->up->vars[1]);
}
 }
}
static void _V10_Dloop_D42_k35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D42_k35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D42_k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D42_k35, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.not.18 10 16) (close _V10_Dloop_D42_k36) (bruijn ##.x.111 0 0))
    V_CALL(VGetArg(upenv, 10-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D42_k36, env)}),
      _var0);
 }
}
static void _V10_Dloop_D42_k34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D42_k34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D42_k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D42_k34, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.104 0 0) ((bruijn ##.k.102 2 0) (bruijn ##.n.44 2 2)) ((bruijn ##.pair?.13 9 11) (close _V10_Dloop_D42_k35) (bruijn ##.expr.43 2 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->vars[0], runtime,
      upenv->up->vars[2]);
} else {
    V_CALL(VGetArg(upenv, 9-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D42_k35, env)}),
      upenv->up->vars[1]);
}
 }
}
static void _V10_Dloop_D42_k33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D42_k33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D42_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D42_k33, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.103 0 0) ((bruijn ##.return.38 5 1) (bruijn ##.k.102 1 0) #f) ((bruijn ##.null?.19 8 17) (close _V10_Dloop_D42_k34) (bruijn ##.expr.43 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->vars[0],
      VEncodeBool(false));
} else {
    V_CALL(VGetArg(upenv, 8-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D42_k34, env)}),
      upenv->vars[1]);
}
 }
}
static void _V10_Dloop_D42_lambda9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dloop_D42_lambda9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D42_lambda9, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D42_lambda9, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.>.7 7 5) (close _V10_Dloop_D42_k33) (bruijn ##.n.44 0 2) (bruijn ##.cutoff.37 5 2))
    V_CALL(VGetArg(upenv, 7-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D42_k33, env)}),
      _var2,
      VGetArg(upenv, 5-1, 2));
 }
}
static void _V10_Dlengthof__list_D39_lambda8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dlengthof__list_D39_lambda8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlengthof__list_D39_lambda8, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlengthof__list_D39_lambda8, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D42_lambda9)) ((bruijn ##.loop.42 0 0) (bruijn ##.k.101 1 0) (bruijn ##.expr.41 1 1) 1))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D42_lambda9, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      upenv->vars[1],
      VEncodeInt(1l));
    }
 }
}
static void _V10_Dlengthof_D40_k47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlengthof_D40_k47" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlengthof_D40_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlengthof_D40_k47, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.118 1 0) ((bruijn ##.k.119 0 0) 2) ((bruijn ##.k.119 0 0) 1))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(_var0, runtime,
      VEncodeInt(2l));
} else {
    V_CALL(_var0, runtime,
      VEncodeInt(1l));
}
 }
}
static void _V10_Dlengthof_D40_k50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlengthof_D40_k50" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlengthof_D40_k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlengthof_D40_k50, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.+.21 13 19) (bruijn ##.k.112 8 0) (bruijn ##.x.115 2 0) (bruijn ##.x.116 0 0))
    V_CALL(VGetArg(upenv, 13-1, 19), runtime,
      VGetArg(upenv, 8-1, 0),
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Dlengthof_D40_k49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlengthof_D40_k49" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlengthof_D40_k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlengthof_D40_k49, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.lengthof.40 8 1) (close _V10_Dlengthof_D40_k50) (bruijn ##.x.117 0 0))
    V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlengthof_D40_k50, env)}),
      _var0);
 }
}
static void _V10_Dlengthof_D40_k48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlengthof_D40_k48" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlengthof_D40_k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlengthof_D40_k48, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cadr.11 11 9) (close _V10_Dlengthof_D40_k49) (bruijn ##.expr.45 6 1))
    V_CALL(VGetArg(upenv, 11-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlengthof_D40_k49, env)}),
      VGetArg(upenv, 6-1, 1));
 }
}
static void _V10_Dlengthof_D40_k46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlengthof_D40_k46" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlengthof_D40_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlengthof_D40_k46, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dlengthof_D40_k47) (close _V10_Dlengthof_D40_k48))
    V_CALL_FUNC(_V10_Dlengthof_D40_k47, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlengthof_D40_k48, env)}));
 }
}
static void _V10_Dlengthof_D40_k45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlengthof_D40_k45" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlengthof_D40_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlengthof_D40_k45, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.eqv?.10 9 8) (close _V10_Dlengthof_D40_k46) (bruijn ##.x.120 0 0) 'unquote-splicing)
    V_CALL(VGetArg(upenv, 9-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlengthof_D40_k46, env)}),
      _var0,
      _V0unquote__splicing);
 }
}
static void _V10_Dlengthof_D40_k44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlengthof_D40_k44" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlengthof_D40_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlengthof_D40_k44, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.114 0 0) ((bruijn ##.car.22 8 20) (close _V10_Dlengthof_D40_k45) (bruijn ##.expr.45 3 1)) ((bruijn ##.lengthof-list.39 4 0) (bruijn ##.k.112 3 0) (bruijn ##.expr.45 3 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 8-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlengthof_D40_k45, env)}),
      upenv->up->up->vars[1]);
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      upenv->up->up->vars[0],
      upenv->up->up->vars[1]);
}
 }
}
static void _V10_Dlengthof_D40_k43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlengthof_D40_k43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlengthof_D40_k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlengthof_D40_k43, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.113 0 0) ((bruijn ##.lengthof-atom.25 6 2) (bruijn ##.k.112 2 0) (bruijn ##.expr.45 2 1)) ((bruijn ##.quotation?.27 6 4) (close _V10_Dlengthof_D40_k44) (bruijn ##.expr.45 2 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 6-1, 2), runtime,
      upenv->up->vars[0],
      upenv->up->vars[1]);
} else {
    V_CALL(VGetArg(upenv, 6-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlengthof_D40_k44, env)}),
      upenv->up->vars[1]);
}
 }
}
static void _V10_Dlengthof_D40_k42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlengthof_D40_k42" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlengthof_D40_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlengthof_D40_k42, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.not.18 6 16) (close _V10_Dlengthof_D40_k43) (bruijn ##.x.121 0 0))
    V_CALL(VGetArg(upenv, 6-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlengthof_D40_k43, env)}),
      _var0);
 }
}
static void _V10_Dlengthof_D40_lambda10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dlengthof_D40_lambda10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlengthof_D40_lambda10, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlengthof_D40_lambda10, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.pair?.13 5 11) (close _V10_Dlengthof_D40_k42) (bruijn ##.expr.45 0 1))
    V_CALL(VGetArg(upenv, 5-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlengthof_D40_k42, env)}),
      _var1);
 }
}
static void _V10_Dshort_Q_D26_k52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dshort_Q_D26_k52" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dshort_Q_D26_k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dshort_Q_D26_k52, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.122 0 0) ((bruijn ##.return.38 3 1) (bruijn ##.k.100 3 0) #f) ((bruijn ##.k.100 3 0) #t))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->vars[1], runtime,
      upenv->up->up->vars[0],
      VEncodeBool(false));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(true));
}
 }
}
static void _V10_Dshort_Q_D26_k51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dshort_Q_D26_k51" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dshort_Q_D26_k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dshort_Q_D26_k51, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.>.7 5 5) (close _V10_Dshort_Q_D26_k52) (bruijn ##.len.46 0 0) (bruijn ##.cutoff.37 3 2))
    V_CALL(VGetArg(upenv, 5-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dshort_Q_D26_k52, env)}),
      _var0,
      upenv->up->up->vars[2]);
 }
}
static void _V10_Dshort_Q_D26_lambda7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dshort_Q_D26_lambda7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dshort_Q_D26_lambda7, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dshort_Q_D26_lambda7, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 2 ((close _V10_Dlengthof__list_D39_lambda8) (close _V10_Dlengthof_D40_lambda10)) ((bruijn ##.lengthof.40 0 1) (close _V10_Dshort_Q_D26_k51) (bruijn ##.expr.36 2 1)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[2]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 2, 2, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlengthof__list_D39_lambda8, env)});
    env->vars[1] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlengthof_D40_lambda10, env)});
    V_CALL(env->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dshort_Q_D26_k51, env)}),
      upenv->up->vars[1]);
    }
 }
}
static void _V10_Dshort_Q_D26_lambda6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dshort_Q_D26_lambda6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dshort_Q_D26_lambda6, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dshort_Q_D26_lambda6, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.call/cc.6 2 4) (bruijn ##.k.99 0 0) (close _V10_Dshort_Q_D26_lambda7))
    V_CALL(upenv->up->vars[4], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dshort_Q_D26_lambda7, env)}));
 }
}
static void _V10_Dquotation_Q_D27_k54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dquotation_Q_D27_k54" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dquotation_Q_D27_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dquotation_Q_D27_k54, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.ret.48 0 0) ((bruijn ##.cdr.20 4 18) (bruijn ##.k.123 2 0) (bruijn ##.ret.48 0 0)) ((bruijn ##.k.123 2 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->up->vars[18], runtime,
      upenv->up->vars[0],
      _var0);
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dquotation_Q_D27_k53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dquotation_Q_D27_k53" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dquotation_Q_D27_k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dquotation_Q_D27_k53, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.assv.8 3 6) (close _V10_Dquotation_Q_D27_k54) (bruijn ##.x.124 0 0) (##inline ##vcore.qcons (##inline ##vcore.qcons 'quote '(##string ##.string.211)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'quasiquote '(##string ##.string.212)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'unquote '(##string ##.string.213)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'unquote-splicing '(##string ##.string.214)) '())))))
    V_CALL(upenv->up->up->vars[6], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dquotation_Q_D27_k54, env)}),
      _var0,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0quote,
        VEncodePointer(&_V10_Dstring_D211.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0quasiquote,
        VEncodePointer(&_V10_Dstring_D212.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unquote,
        VEncodePointer(&_V10_Dstring_D213.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unquote__splicing,
        VEncodePointer(&_V10_Dstring_D214.sym, VPOINTER_OTHER)),
        VNULL)))));
 }
}
static void _V10_Dquotation_Q_D27_lambda11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dquotation_Q_D27_lambda11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dquotation_Q_D27_lambda11, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dquotation_Q_D27_lambda11, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.car.22 2 20) (close _V10_Dquotation_Q_D27_k53) (bruijn ##.expr.47 0 1))
    V_CALL(upenv->up->vars[20], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dquotation_Q_D27_k53, env)}),
      _var1);
 }
}
static void _V10_Dpretty__print_D28_k55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpretty__print_D28_k55" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpretty__print_D28_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpretty__print_D28_k55, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.newline.14 3 12) (bruijn ##.k.133 1 0))
    V_CALL(upenv->up->up->vars[12], runtime,
      upenv->vars[0]);
 }
}
static void _V10_Dpretty__print_D28_lambda12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dpretty__print_D28_lambda12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpretty__print_D28_lambda12, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpretty__print_D28_lambda12, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.pretty-print-impl.30 1 7) (close _V10_Dpretty__print_D28_k55) (bruijn ##.expr.49 0 1) 0 #t 40)
    V_CALL(upenv->vars[7], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpretty__print_D28_k55, env)}),
      _var1,
      VEncodeInt(0l),
      VEncodeBool(true),
      VEncodeInt(40l));
 }
}
static void _V10_Djoin__line_Q_D29_k56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Djoin__line_Q_D29_k56" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Djoin__line_Q_D29_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Djoin__line_Q_D29_k56, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.ret.51 0 0) ((bruijn ##.cdr.20 3 18) (bruijn ##.k.135 1 0) (bruijn ##.ret.51 0 0)) ((bruijn ##.k.135 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->vars[18], runtime,
      upenv->vars[0],
      _var0);
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Djoin__line_Q_D29_lambda13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Djoin__line_Q_D29_lambda13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Djoin__line_Q_D29_lambda13, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Djoin__line_Q_D29_lambda13, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.assv.8 2 6) (close _V10_Djoin__line_Q_D29_k56) (bruijn ##.form.50 0 1) (##inline ##vcore.qcons (##inline ##vcore.qcons 'define '2) (##inline ##vcore.qcons (##inline ##vcore.qcons 'set! '2) (##inline ##vcore.qcons (##inline ##vcore.qcons 'lambda '2) (##inline ##vcore.qcons (##inline ##vcore.qcons 'continuation '2) (##inline ##vcore.qcons (##inline ##vcore.qcons 'if '4) (##inline ##vcore.qcons (##inline ##vcore.qcons 'let '2) (##inline ##vcore.qcons (##inline ##vcore.qcons 'letrec '2) (##inline ##vcore.qcons (##inline ##vcore.qcons 'let* '2) (##inline ##vcore.qcons (##inline ##vcore.qcons 'letrec* '2) '()))))))))))
    V_CALL(upenv->up->vars[6], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Djoin__line_Q_D29_k56, env)}),
      _var1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0define,
        VEncodeInt(2l)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0set_B,
        VEncodeInt(2l)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0lambda,
        VEncodeInt(2l)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0continuation,
        VEncodeInt(2l)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0if,
        VEncodeInt(4l)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0let,
        VEncodeInt(2l)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0letrec,
        VEncodeInt(2l)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0let_S,
        VEncodeInt(2l)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0letrec_S,
        VEncodeInt(2l)),
        VNULL))))))))));
 }
}
static void _V10_Dpretty__print__impl_D30_k57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpretty__print__impl_D30_k57" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpretty__print__impl_D30_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpretty__print__impl_D30_k57, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.indent-this?.54 1 3) ((bruijn ##.print-indent.23 2 0) (bruijn ##.k.208 0 0) (bruijn ##.indent.53 1 2)) ((bruijn ##.k.208 0 0) #f))
if(VDecodeBool(
upenv->vars[3])) {
    V_CALL(upenv->up->vars[0], runtime,
      _var0,
      upenv->vars[2]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpretty__print__impl_D30_k67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpretty__print__impl_D30_k67" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpretty__print__impl_D30_k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpretty__print__impl_D30_k67, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.162 1 0) ((bruijn ##.k.163 0 0) 2) ((bruijn ##.k.163 0 0) 1))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(_var0, runtime,
      VEncodeInt(2l));
} else {
    V_CALL(_var0, runtime,
      VEncodeInt(1l));
}
 }
}
static void _V10_Dpretty__print__impl_D30_k69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpretty__print__impl_D30_k69" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpretty__print__impl_D30_k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpretty__print__impl_D30_k69, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.pretty-print-impl.30 13 7) (bruijn ##.k.154 12 0) (bruijn ##.x.159 4 0) (bruijn ##.x.160 0 0) #f 40)
    V_CALL(VGetArg(upenv, 13-1, 7), runtime,
      VGetArg(upenv, 12-1, 0),
      upenv->up->up->up->vars[0],
      _var0,
      VEncodeBool(false),
      VEncodeInt(40l));
 }
}
static void _V10_Dpretty__print__impl_D30_k68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpretty__print__impl_D30_k68" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpretty__print__impl_D30_k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpretty__print__impl_D30_k68, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.+.21 13 19) (close _V10_Dpretty__print__impl_D30_k69) (bruijn ##.indent.53 11 2) (bruijn ##.x.161 0 0))
    V_CALL(VGetArg(upenv, 13-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpretty__print__impl_D30_k69, env)}),
      VGetArg(upenv, 11-1, 2),
      _var0);
 }
}
static void _V10_Dpretty__print__impl_D30_k66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpretty__print__impl_D30_k66" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpretty__print__impl_D30_k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpretty__print__impl_D30_k66, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpretty__print__impl_D30_k67) (close _V10_Dpretty__print__impl_D30_k68))
    V_CALL_FUNC(_V10_Dpretty__print__impl_D30_k67, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpretty__print__impl_D30_k68, env)}));
 }
}
static void _V10_Dpretty__print__impl_D30_k65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpretty__print__impl_D30_k65" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpretty__print__impl_D30_k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpretty__print__impl_D30_k65, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.eqv?.10 11 8) (close _V10_Dpretty__print__impl_D30_k66) (bruijn ##.x.164 0 0) 'unquote-splicing)
    V_CALL(VGetArg(upenv, 11-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpretty__print__impl_D30_k66, env)}),
      _var0,
      _V0unquote__splicing);
 }
}
static void _V10_Dpretty__print__impl_D30_k64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpretty__print__impl_D30_k64" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpretty__print__impl_D30_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpretty__print__impl_D30_k64, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.car.22 10 20) (close _V10_Dpretty__print__impl_D30_k65) (bruijn ##.expr.52 8 1))
    V_CALL(VGetArg(upenv, 10-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpretty__print__impl_D30_k65, env)}),
      VGetArg(upenv, 8-1, 1));
 }
}
static void _V10_Dpretty__print__impl_D30_k63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpretty__print__impl_D30_k63" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpretty__print__impl_D30_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpretty__print__impl_D30_k63, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cadr.11 9 9) (close _V10_Dpretty__print__impl_D30_k64) (bruijn ##.expr.52 7 1))
    V_CALL(VGetArg(upenv, 9-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpretty__print__impl_D30_k64, env)}),
      VGetArg(upenv, 7-1, 1));
 }
}
static void _V10_Dpretty__print__impl_D30_lambda15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpretty__print__impl_D30_lambda15" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpretty__print__impl_D30_lambda15, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.display.12 8 10) (close _V10_Dpretty__print__impl_D30_k63) (bruijn ##.q.57 0 0))
    V_CALL(VGetArg(upenv, 8-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpretty__print__impl_D30_k63, env)}),
      _var0);
 }
}
static void _V10_Dpretty__print__impl_D30_k78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpretty__print__impl_D30_k78" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpretty__print__impl_D30_k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpretty__print__impl_D30_k78, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.+.21 16 19) (bruijn ##.k.201 2 0) 2 (bruijn ##.x.202 0 0))
    V_CALL(VGetArg(upenv, 16-1, 19), runtime,
      upenv->up->vars[0],
      VEncodeInt(2l),
      _var0);
 }
}
static void _V10_Dpretty__print__impl_D30_k77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpretty__print__impl_D30_k77" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpretty__print__impl_D30_k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpretty__print__impl_D30_k77, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.lengthof-atom.25 14 2) (close _V10_Dpretty__print__impl_D30_k78) (bruijn ##.x.203 0 0))
    V_CALL(VGetArg(upenv, 14-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpretty__print__impl_D30_k78, env)}),
      _var0);
 }
}
static void _V10_Dpretty__print__impl_D30_k76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpretty__print__impl_D30_k76" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpretty__print__impl_D30_k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpretty__print__impl_D30_k76, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.join-line.58 1 0) ((bruijn ##.car.22 14 20) (close _V10_Dpretty__print__impl_D30_k77) (bruijn ##.expr.52 12 1)) ((bruijn ##.k.201 0 0) 1))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 14-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpretty__print__impl_D30_k77, env)}),
      VGetArg(upenv, 12-1, 1));
} else {
    V_CALL(_var0, runtime,
      VEncodeInt(1l));
}
 }
}
static void _V10_Dpretty__print__impl_D30_k80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpretty__print__impl_D30_k80" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpretty__print__impl_D30_k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpretty__print__impl_D30_k80, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.join-line.58 2 0) ((bruijn ##.k.200 0 0) (bruijn ##.join-line.58 2 0)) ((bruijn ##.k.200 0 0) 1))
if(VDecodeBool(
upenv->up->vars[0])) {
    V_CALL(_var0, runtime,
      upenv->up->vars[0]);
} else {
    V_CALL(_var0, runtime,
      VEncodeInt(1l));
}
 }
}
static void _V10_Dloop_D61_k84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D61_k84" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D61_k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D61_k84, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.first-elem.63 3 2) ((bruijn ##.k.192 0 0) (bruijn ##.join-line.58 7 0)) ((bruijn ##.k.192 0 0) #f))
if(VDecodeBool(
upenv->up->up->vars[2])) {
    V_CALL(_var0, runtime,
      VGetArg(upenv, 7-1, 0));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D61_k86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D61_k86" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D61_k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D61_k86, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.190 1 0) ((bruijn ##.display.12 21 10) (bruijn ##.k.191 0 0) (##string ##.string.216)) ((bruijn ##.newline.14 21 12) (bruijn ##.k.191 0 0)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 21-1, 10), runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D216.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 21-1, 12), runtime,
      _var0);
}
 }
}
static void _V10_Dloop_D61_k88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D61_k88" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D61_k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D61_k88, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.first-elem.63 5 2) ((bruijn ##.k.189 0 0) (bruijn ##.first-indent.59 8 0)) ((bruijn ##.k.189 0 0) (bruijn ##.new-indent.60 7 0)))
if(VDecodeBool(
VGetArg(upenv, 5-1, 2))) {
    V_CALL(_var0, runtime,
      VGetArg(upenv, 8-1, 0));
} else {
    V_CALL(_var0, runtime,
      VGetArg(upenv, 7-1, 0));
}
 }
}
static void _V10_Dloop_D61_k91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D61_k91" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D61_k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D61_k91, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.memv.17 24 15) (bruijn ##.k.184 1 0) (bruijn ##.x.185 0 0) (##inline ##vcore.qcons 'define (##inline ##vcore.qcons 'lambda (##inline ##vcore.qcons 'continuation '()))))
    V_CALL(VGetArg(upenv, 24-1, 15), runtime,
      upenv->vars[0],
      _var0,
      VInlineCons2(runtime,
        _V0define,
        VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        _V0continuation,
        VNULL))));
 }
}
static void _V10_Dloop_D61_k90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D61_k90" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D61_k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D61_k90, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.first-elem.63 6 2) ((bruijn ##.car.22 23 20) (close _V10_Dloop_D61_k91) (bruijn ##.expr.52 21 1)) ((bruijn ##.k.184 0 0) #f))
if(VDecodeBool(
VGetArg(upenv, 6-1, 2))) {
    V_CALL(VGetArg(upenv, 23-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D61_k91, env)}),
      VGetArg(upenv, 21-1, 1));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D61_k95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D61_k95" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D61_k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D61_k95, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.max.16 26 14) (bruijn ##.k.181 2 0) 40 (bruijn ##.x.182 0 0))
    V_CALL(VGetArg(upenv, 26-1, 14), runtime,
      upenv->up->vars[0],
      VEncodeInt(40l),
      _var0);
 }
}
static void _V10_Dloop_D61_k94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D61_k94" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D61_k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D61_k94, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.-.15 25 13) (close _V10_Dloop_D61_k95) 80 (bruijn ##.x.183 0 0))
    V_CALL(VGetArg(upenv, 25-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D61_k95, env)}),
      VEncodeInt(80l),
      _var0);
 }
}
static void _V10_Dloop_D61_k93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D61_k93" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D61_k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D61_k93, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.180 1 0) ((bruijn ##.+.21 24 19) (close _V10_Dloop_D61_k94) (bruijn ##.indent.53 22 2) (bruijn ##.new-indent.60 9 0)) ((bruijn ##.k.181 0 0) 40))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 24-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D61_k94, env)}),
      VGetArg(upenv, 22-1, 2),
      VGetArg(upenv, 9-1, 0));
} else {
    V_CALL(_var0, runtime,
      VEncodeInt(40l));
}
 }
}
static void _V10_Dloop_D61_k99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D61_k99" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D61_k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D61_k99, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.first-elem.63 11 2) ((bruijn ##.k.179 0 0) (bruijn ##.join-line.58 15 0)) ((bruijn ##.k.179 0 0) #f))
if(VDecodeBool(
VGetArg(upenv, 11-1, 2))) {
    V_CALL(_var0, runtime,
      VGetArg(upenv, 15-1, 0));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D61_k103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D61_k103" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D61_k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D61_k103, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.61 15 0) (bruijn ##.k.167 14 0) (bruijn ##.x.172 0 0) #f)
    V_CALL(VGetArg(upenv, 15-1, 0), runtime,
      VGetArg(upenv, 14-1, 0),
      _var0,
      VEncodeBool(false));
 }
}
static void _V10_Dloop_D61_k102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D61_k102" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D61_k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D61_k102, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.20 30 18) (close _V10_Dloop_D61_k103) (bruijn ##.rest.62 13 1))
    V_CALL(VGetArg(upenv, 30-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D61_k103, env)}),
      VGetArg(upenv, 13-1, 1));
 }
}
static void _V10_Dloop_D61_k101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D61_k101" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D61_k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D61_k101, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.pretty-print-impl.30 28 7) (close _V10_Dloop_D61_k102) (bruijn ##.x.175 3 0) (bruijn ##.x.176 2 0) (bruijn ##.x.177 0 0) (bruijn ##.short-threshold.65 4 1))
    V_CALL(VGetArg(upenv, 28-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D61_k102, env)}),
      upenv->up->up->vars[0],
      upenv->up->vars[0],
      _var0,
      upenv->up->up->up->vars[1]);
 }
}
static void _V10_Dloop_D61_k100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D61_k100" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D61_k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D61_k100, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.not.18 28 16) (close _V10_Dloop_D61_k101) (bruijn ##.x.178 0 0))
    V_CALL(VGetArg(upenv, 28-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D61_k101, env)}),
      _var0);
 }
}
static void _V10_Dloop_D61_k98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D61_k98" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D61_k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D61_k98, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D61_k99) (close _V10_Dloop_D61_k100))
    V_CALL_FUNC(_V10_Dloop_D61_k99, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D61_k100, env)}));
 }
}
static void _V10_Dloop_D61_k97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D61_k97" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D61_k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D61_k97, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.+.21 26 19) (close _V10_Dloop_D61_k98) (bruijn ##.indent.53 24 2) (bruijn ##.new-indent.64 1 0))
    V_CALL(VGetArg(upenv, 26-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D61_k98, env)}),
      VGetArg(upenv, 24-1, 2),
      upenv->vars[0]);
 }
}
static void _V10_Dloop_D61_lambda17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dloop_D61_lambda17" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D61_lambda17, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.car.22 25 20) (close _V10_Dloop_D61_k97) (bruijn ##.rest.62 8 1))
    V_CALL(VGetArg(upenv, 25-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D61_k97, env)}),
      VGetArg(upenv, 8-1, 1));
 }
}
static void _V10_Dloop_D61_k96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D61_k96" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D61_k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D61_k96, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D61_lambda17) (bruijn ##.x.173 2 0) (bruijn ##.x.174 0 0))
    V_CALL_FUNC(_V10_Dloop_D61_lambda17, env, runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D61_k92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D61_k92" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D61_k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D61_k92, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D61_k93) (close _V10_Dloop_D61_k96))
    V_CALL_FUNC(_V10_Dloop_D61_k93, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D61_k96, env)}));
 }
}
static void _V10_Dloop_D61_k89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D61_k89" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D61_k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D61_k89, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D61_k90) (close _V10_Dloop_D61_k92))
    V_CALL_FUNC(_V10_Dloop_D61_k90, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D61_k92, env)}));
 }
}
static void _V10_Dloop_D61_k87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D61_k87" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D61_k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D61_k87, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D61_k88) (close _V10_Dloop_D61_k89))
    V_CALL_FUNC(_V10_Dloop_D61_k88, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D61_k89, env)}));
 }
}
static void _V10_Dloop_D61_k85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D61_k85" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D61_k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D61_k85, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D61_k86) (close _V10_Dloop_D61_k87))
    V_CALL_FUNC(_V10_Dloop_D61_k86, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D61_k87, env)}));
 }
}
static void _V10_Dloop_D61_k109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D61_k109" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D61_k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D61_k109, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.display.12 25 10) (bruijn ##.k.167 8 0) (##string ##.string.215))
    V_CALL(VGetArg(upenv, 25-1, 10), runtime,
      VGetArg(upenv, 8-1, 0),
      VEncodePointer(&_V10_Dstring_D215.sym, VPOINTER_OTHER));
 }
}
static void _V10_Dloop_D61_k108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D61_k108" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D61_k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D61_k108, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.pretty-print-impl.30 23 7) (close _V10_Dloop_D61_k109) (bruijn ##.rest.62 7 1) (bruijn ##.x.197 0 0) #f 40)
    V_CALL(VGetArg(upenv, 23-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D61_k109, env)}),
      VGetArg(upenv, 7-1, 1),
      _var0,
      VEncodeBool(false),
      VEncodeInt(40l));
 }
}
static void _V10_Dloop_D61_k107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D61_k107" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D61_k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D61_k107, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.+.21 23 19) (close _V10_Dloop_D61_k108) (bruijn ##.indent.53 21 2) 3)
    V_CALL(VGetArg(upenv, 23-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D61_k108, env)}),
      VGetArg(upenv, 21-1, 2),
      VEncodeInt(3l));
 }
}
static void _V10_Dloop_D61_k106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D61_k106" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D61_k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D61_k106, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.display.12 22 10) (close _V10_Dloop_D61_k107) (##string ##.string.217))
    V_CALL(VGetArg(upenv, 22-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D61_k107, env)}),
      VEncodePointer(&_V10_Dstring_D217.sym, VPOINTER_OTHER));
 }
}
static void _V10_Dloop_D61_k105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D61_k105" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D61_k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D61_k105, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.print-indent.23 20 0) (close _V10_Dloop_D61_k106) (bruijn ##.x.198 0 0))
    V_CALL(VGetArg(upenv, 20-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D61_k106, env)}),
      _var0);
 }
}
static void _V10_Dloop_D61_k104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D61_k104" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D61_k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D61_k104, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.+.21 20 19) (close _V10_Dloop_D61_k105) (bruijn ##.indent.53 18 2) 1)
    V_CALL(VGetArg(upenv, 20-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D61_k105, env)}),
      VGetArg(upenv, 18-1, 2),
      VEncodeInt(1l));
 }
}
static void _V10_Dloop_D61_k83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D61_k83" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D61_k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D61_k83, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.169 0 0) ((close _V10_Dloop_D61_k84) (close _V10_Dloop_D61_k85)) ((bruijn ##.display.12 19 10) (close _V10_Dloop_D61_k104) #\newline))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dloop_D61_k84, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D61_k85, env)}));
} else {
    V_CALL(VGetArg(upenv, 19-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D61_k104, env)}),
      VEncodeChar('\n'));
}
 }
}
static void _V10_Dloop_D61_k82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D61_k82" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D61_k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D61_k82, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.168 0 0) ((bruijn ##.display.12 18 10) (bruijn ##.k.167 1 0) (##string ##.string.215)) ((bruijn ##.pair?.13 18 11) (close _V10_Dloop_D61_k83) (bruijn ##.rest.62 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 18-1, 10), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10_Dstring_D215.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 18-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D61_k83, env)}),
      upenv->vars[1]);
}
 }
}
static void _V10_Dloop_D61_lambda16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dloop_D61_lambda16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D61_lambda16, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D61_lambda16, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.null?.19 17 17) (close _V10_Dloop_D61_k82) (bruijn ##.rest.62 0 1))
    V_CALL(VGetArg(upenv, 17-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D61_k82, env)}),
      _var1);
 }
}
static void _V10_Dpretty__print__impl_D30_k110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpretty__print__impl_D30_k110" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpretty__print__impl_D30_k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpretty__print__impl_D30_k110, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.61 1 0) (bruijn ##.k.154 15 0) (bruijn ##.x.199 0 0) #t)
    V_CALL(upenv->vars[0], runtime,
      VGetArg(upenv, 15-1, 0),
      _var0,
      VEncodeBool(true));
 }
}
static void _V10_Dpretty__print__impl_D30_k81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpretty__print__impl_D30_k81" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpretty__print__impl_D30_k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpretty__print__impl_D30_k81, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 1 ((close _V10_Dloop_D61_lambda16)) ((bruijn ##.cdr.20 16 18) (close _V10_Dpretty__print__impl_D30_k110) (bruijn ##.expr.52 14 1)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D61_lambda16, env)});
    V_CALL(VGetArg(upenv, 16-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpretty__print__impl_D30_k110, env)}),
      VGetArg(upenv, 14-1, 1));
    }
 }
}
static void _V10_Dpretty__print__impl_D30_k79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpretty__print__impl_D30_k79" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpretty__print__impl_D30_k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpretty__print__impl_D30_k79, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpretty__print__impl_D30_k80) (close _V10_Dpretty__print__impl_D30_k81))
    V_CALL_FUNC(_V10_Dpretty__print__impl_D30_k80, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpretty__print__impl_D30_k81, env)}));
 }
}
static void _V10_Dpretty__print__impl_D30_k75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpretty__print__impl_D30_k75" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpretty__print__impl_D30_k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpretty__print__impl_D30_k75, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpretty__print__impl_D30_k76) (close _V10_Dpretty__print__impl_D30_k79))
    V_CALL_FUNC(_V10_Dpretty__print__impl_D30_k76, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpretty__print__impl_D30_k79, env)}));
 }
}
static void _V10_Dpretty__print__impl_D30_k74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpretty__print__impl_D30_k74" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpretty__print__impl_D30_k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpretty__print__impl_D30_k74, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.join-line?.29 11 6) (close _V10_Dpretty__print__impl_D30_k75) (bruijn ##.x.204 0 0))
    V_CALL(VGetArg(upenv, 11-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpretty__print__impl_D30_k75, env)}),
      _var0);
 }
}
static void _V10_Dpretty__print__impl_D30_k73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpretty__print__impl_D30_k73" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpretty__print__impl_D30_k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpretty__print__impl_D30_k73, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.car.22 11 20) (close _V10_Dpretty__print__impl_D30_k74) (bruijn ##.expr.52 9 1))
    V_CALL(VGetArg(upenv, 11-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpretty__print__impl_D30_k74, env)}),
      VGetArg(upenv, 9-1, 1));
 }
}
static void _V10_Dpretty__print__impl_D30_k72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpretty__print__impl_D30_k72" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpretty__print__impl_D30_k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpretty__print__impl_D30_k72, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.pretty-print-impl.30 9 7) (close _V10_Dpretty__print__impl_D30_k73) (bruijn ##.x.205 1 0) (bruijn ##.x.206 0 0) #f 40)
    V_CALL(VGetArg(upenv, 9-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpretty__print__impl_D30_k73, env)}),
      upenv->vars[0],
      _var0,
      VEncodeBool(false),
      VEncodeInt(40l));
 }
}
static void _V10_Dpretty__print__impl_D30_k71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpretty__print__impl_D30_k71" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpretty__print__impl_D30_k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpretty__print__impl_D30_k71, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.+.21 9 19) (close _V10_Dpretty__print__impl_D30_k72) (bruijn ##.indent.53 7 2) 1)
    V_CALL(VGetArg(upenv, 9-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpretty__print__impl_D30_k72, env)}),
      VGetArg(upenv, 7-1, 2),
      VEncodeInt(1l));
 }
}
static void _V10_Dpretty__print__impl_D30_k70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpretty__print__impl_D30_k70" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpretty__print__impl_D30_k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpretty__print__impl_D30_k70, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.car.22 8 20) (close _V10_Dpretty__print__impl_D30_k71) (bruijn ##.expr.52 6 1))
    V_CALL(VGetArg(upenv, 8-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpretty__print__impl_D30_k71, env)}),
      VGetArg(upenv, 6-1, 1));
 }
}
static void _V10_Dpretty__print__impl_D30_k62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpretty__print__impl_D30_k62" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpretty__print__impl_D30_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpretty__print__impl_D30_k62, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.x.0.56 0 0) ((close _V10_Dpretty__print__impl_D30_lambda15) (bruijn ##.x.0.56 0 0)) ((bruijn ##.display.12 7 10) (close _V10_Dpretty__print__impl_D30_k70) (##string ##.string.218)))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dpretty__print__impl_D30_lambda15, env, runtime,
      _var0);
} else {
    V_CALL(VGetArg(upenv, 7-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpretty__print__impl_D30_k70, env)}),
      VEncodePointer(&_V10_Dstring_D218.sym, VPOINTER_OTHER));
}
 }
}
static void _V10_Dpretty__print__impl_D30_k61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpretty__print__impl_D30_k61" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpretty__print__impl_D30_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpretty__print__impl_D30_k61, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.157 0 0) ((bruijn ##.write.9 6 7) (bruijn ##.k.154 4 0) (bruijn ##.expr.52 4 1)) ((bruijn ##.quotation?.27 5 4) (close _V10_Dpretty__print__impl_D30_k62) (bruijn ##.expr.52 4 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 6-1, 7), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->up->up->vars[1]);
} else {
    V_CALL(VGetArg(upenv, 5-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpretty__print__impl_D30_k62, env)}),
      upenv->up->up->up->vars[1]);
}
 }
}
static void _V10_Dpretty__print__impl_D30_k60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpretty__print__impl_D30_k60" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpretty__print__impl_D30_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpretty__print__impl_D30_k60, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.156 0 0) ((bruijn ##.write.9 5 7) (bruijn ##.k.154 3 0) (bruijn ##.expr.52 3 1)) ((bruijn ##.short?.26 4 3) (close _V10_Dpretty__print__impl_D30_k61) (bruijn ##.expr.52 3 1) (bruijn ##.short-threshold.55 3 4)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 5-1, 7), runtime,
      upenv->up->up->vars[0],
      upenv->up->up->vars[1]);
} else {
    V_CALL(upenv->up->up->up->vars[3], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpretty__print__impl_D30_k61, env)}),
      upenv->up->up->vars[1],
      upenv->up->up->vars[4]);
}
 }
}
static void _V10_Dpretty__print__impl_D30_k59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpretty__print__impl_D30_k59" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpretty__print__impl_D30_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpretty__print__impl_D30_k59, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.not.18 4 16) (close _V10_Dpretty__print__impl_D30_k60) (bruijn ##.x.207 0 0))
    V_CALL(upenv->up->up->up->vars[16], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpretty__print__impl_D30_k60, env)}),
      _var0);
 }
}
static void _V10_Dpretty__print__impl_D30_k58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dpretty__print__impl_D30_k58" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpretty__print__impl_D30_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpretty__print__impl_D30_k58, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.pair?.13 3 11) (close _V10_Dpretty__print__impl_D30_k59) (bruijn ##.expr.52 1 1))
    V_CALL(upenv->up->up->vars[11], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpretty__print__impl_D30_k59, env)}),
      upenv->vars[1]);
 }
}
static void _V10_Dpretty__print__impl_D30_lambda14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 static VDebugInfo dbg = { "_V10_Dpretty__print__impl_D30_lambda14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 5) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpretty__print__impl_D30_lambda14, got ~D~N"
  "-- expected 5~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpretty__print__impl_D30_lambda14, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 5, 5, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // ((close _V10_Dpretty__print__impl_D30_k57) (close _V10_Dpretty__print__impl_D30_k58))
    V_CALL_FUNC(_V10_Dpretty__print__impl_D30_k57, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpretty__print__impl_D30_k58, env)}));
 }
}
static void _V0vanity_V0pretty__print_V20_lambda2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17, VWORD _var18, VWORD _var19, VWORD _var20) {
 static VDebugInfo dbg = { "_V0vanity_V0pretty__print_V20_lambda2" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0pretty__print_V20_lambda2, runtime, upenv, 21, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7, _var8, _var9, _var10, _var11, _var12, _var13, _var14, _var15, _var16, _var17, _var18, _var19, _var20) {
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
  // (letrec 8 ((close _V10_Dprint__indent_D23_lambda3) (close _V10_Datom_Q_D24_lambda4) (close _V10_Dlengthof__atom_D25_lambda5) (close _V10_Dshort_Q_D26_lambda6) (close _V10_Dquotation_Q_D27_lambda11) (close _V10_Dpretty__print_D28_lambda12) (close _V10_Djoin__line_Q_D29_lambda13) (close _V10_Dpretty__print__impl_D30_lambda14)) ((bruijn ##.k.67 25 0) (##inline ##vcore.cons (##inline ##vcore.cons 'pretty-print (bruijn ##.pretty-print.28 0 5)) '())))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[8]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 8, 8, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__indent_D23_lambda3, env)});
    env->vars[1] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Datom_Q_D24_lambda4, env)});
    env->vars[2] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlengthof__atom_D25_lambda5, env)});
    env->vars[3] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dshort_Q_D26_lambda6, env)});
    env->vars[4] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dquotation_Q_D27_lambda11, env)});
    env->vars[5] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpretty__print_D28_lambda12, env)});
    env->vars[6] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Djoin__line_Q_D29_lambda13, env)});
    env->vars[7] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpretty__print__impl_D30_lambda14, env)});
    V_CALL(VGetArg(upenv, 25-1, 0), runtime,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0pretty__print,
        env->vars[5]),
        VNULL));
    }
 }
}
static void _V0vanity_V0pretty__print_V20_k23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0pretty__print_V20_k23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0pretty__print_V20_k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0pretty__print_V20_k23, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0pretty__print_V20_lambda2) (bruijn ##.x.68 20 0) (bruijn ##.x.69 19 0) (bruijn ##.x.70 18 0) (bruijn ##.x.71 17 0) (bruijn ##.x.72 16 0) (bruijn ##.x.73 15 0) (bruijn ##.x.74 14 0) (bruijn ##.x.75 13 0) (bruijn ##.x.76 12 0) (bruijn ##.x.77 11 0) (bruijn ##.x.78 10 0) (bruijn ##.x.79 9 0) (bruijn ##.x.80 8 0) (bruijn ##.x.81 7 0) (bruijn ##.x.82 6 0) (bruijn ##.x.83 5 0) (bruijn ##.x.84 4 0) (bruijn ##.x.85 3 0) (bruijn ##.x.86 2 0) (bruijn ##.x.87 1 0) (bruijn ##.x.88 0 0))
    V_CALL_FUNC(_V0vanity_V0pretty__print_V20_lambda2, env, runtime,
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
static void _V0vanity_V0pretty__print_V20_k22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0pretty__print_V20_k22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0pretty__print_V20_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0pretty__print_V20_k22, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.1 20 0) (close _V0vanity_V0pretty__print_V20_k23) 'car)
    V_CALL(VGetArg(upenv, 20-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0pretty__print_V20_k23, env)}),
      _V0car);
 }
}
static void _V0vanity_V0pretty__print_V20_k21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0pretty__print_V20_k21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0pretty__print_V20_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0pretty__print_V20_k21, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.1 19 0) (close _V0vanity_V0pretty__print_V20_k22) '+)
    V_CALL(VGetArg(upenv, 19-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0pretty__print_V20_k22, env)}),
      _V0_P);
 }
}
static void _V0vanity_V0pretty__print_V20_k20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0pretty__print_V20_k20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0pretty__print_V20_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0pretty__print_V20_k20, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.1 18 0) (close _V0vanity_V0pretty__print_V20_k21) 'cdr)
    V_CALL(VGetArg(upenv, 18-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0pretty__print_V20_k21, env)}),
      _V0cdr);
 }
}
static void _V0vanity_V0pretty__print_V20_k19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0pretty__print_V20_k19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0pretty__print_V20_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0pretty__print_V20_k19, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.1 17 0) (close _V0vanity_V0pretty__print_V20_k20) 'null?)
    V_CALL(VGetArg(upenv, 17-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0pretty__print_V20_k20, env)}),
      _V0null_Q);
 }
}
static void _V0vanity_V0pretty__print_V20_k18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0pretty__print_V20_k18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0pretty__print_V20_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0pretty__print_V20_k18, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.1 16 0) (close _V0vanity_V0pretty__print_V20_k19) 'not)
    V_CALL(VGetArg(upenv, 16-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0pretty__print_V20_k19, env)}),
      _V0not);
 }
}
static void _V0vanity_V0pretty__print_V20_k17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0pretty__print_V20_k17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0pretty__print_V20_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0pretty__print_V20_k17, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.1 15 0) (close _V0vanity_V0pretty__print_V20_k18) 'memv)
    V_CALL(VGetArg(upenv, 15-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0pretty__print_V20_k18, env)}),
      _V0memv);
 }
}
static void _V0vanity_V0pretty__print_V20_k16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0pretty__print_V20_k16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0pretty__print_V20_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0pretty__print_V20_k16, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.1 14 0) (close _V0vanity_V0pretty__print_V20_k17) 'max)
    V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0pretty__print_V20_k17, env)}),
      _V0max);
 }
}
static void _V0vanity_V0pretty__print_V20_k15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0pretty__print_V20_k15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0pretty__print_V20_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0pretty__print_V20_k15, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.1 13 0) (close _V0vanity_V0pretty__print_V20_k16) '-)
    V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0pretty__print_V20_k16, env)}),
      _V0__);
 }
}
static void _V0vanity_V0pretty__print_V20_k14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0pretty__print_V20_k14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0pretty__print_V20_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0pretty__print_V20_k14, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.1 12 0) (close _V0vanity_V0pretty__print_V20_k15) 'newline)
    V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0pretty__print_V20_k15, env)}),
      _V0newline);
 }
}
static void _V0vanity_V0pretty__print_V20_k13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0pretty__print_V20_k13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0pretty__print_V20_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0pretty__print_V20_k13, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.1 11 0) (close _V0vanity_V0pretty__print_V20_k14) 'pair?)
    V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0pretty__print_V20_k14, env)}),
      _V0pair_Q);
 }
}
static void _V0vanity_V0pretty__print_V20_k12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0pretty__print_V20_k12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0pretty__print_V20_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0pretty__print_V20_k12, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.1 10 0) (close _V0vanity_V0pretty__print_V20_k13) 'display)
    V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0pretty__print_V20_k13, env)}),
      _V0display);
 }
}
static void _V0vanity_V0pretty__print_V20_k11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0pretty__print_V20_k11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0pretty__print_V20_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0pretty__print_V20_k11, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.1 9 0) (close _V0vanity_V0pretty__print_V20_k12) 'cadr)
    V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0pretty__print_V20_k12, env)}),
      _V0cadr);
 }
}
static void _V0vanity_V0pretty__print_V20_k10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0pretty__print_V20_k10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0pretty__print_V20_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0pretty__print_V20_k10, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.1 8 0) (close _V0vanity_V0pretty__print_V20_k11) 'eqv?)
    V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0pretty__print_V20_k11, env)}),
      _V0eqv_Q);
 }
}
static void _V0vanity_V0pretty__print_V20_k9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0pretty__print_V20_k9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0pretty__print_V20_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0pretty__print_V20_k9, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.1 7 0) (close _V0vanity_V0pretty__print_V20_k10) 'write)
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0pretty__print_V20_k10, env)}),
      _V0write);
 }
}
static void _V0vanity_V0pretty__print_V20_k8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0pretty__print_V20_k8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0pretty__print_V20_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0pretty__print_V20_k8, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.1 6 0) (close _V0vanity_V0pretty__print_V20_k9) 'assv)
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0pretty__print_V20_k9, env)}),
      _V0assv);
 }
}
static void _V0vanity_V0pretty__print_V20_k7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0pretty__print_V20_k7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0pretty__print_V20_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0pretty__print_V20_k7, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.1 5 0) (close _V0vanity_V0pretty__print_V20_k8) '>)
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0pretty__print_V20_k8, env)}),
      _V0_G);
 }
}
static void _V0vanity_V0pretty__print_V20_k6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0pretty__print_V20_k6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0pretty__print_V20_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0pretty__print_V20_k6, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.1 4 0) (close _V0vanity_V0pretty__print_V20_k7) 'call/cc)
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0pretty__print_V20_k7, env)}),
      _V0call_Wcc);
 }
}
static void _V0vanity_V0pretty__print_V20_k5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0pretty__print_V20_k5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0pretty__print_V20_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0pretty__print_V20_k5, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.1 3 0) (close _V0vanity_V0pretty__print_V20_k6) 'open-output-string)
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0pretty__print_V20_k6, env)}),
      _V0open__output__string);
 }
}
static void _V0vanity_V0pretty__print_V20_k4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0pretty__print_V20_k4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0pretty__print_V20_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0pretty__print_V20_k4, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.1 2 0) (close _V0vanity_V0pretty__print_V20_k5) 'string-length)
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0pretty__print_V20_k5, env)}),
      _V0string__length);
 }
}
static void _V0vanity_V0pretty__print_V20_k3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0pretty__print_V20_k3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0pretty__print_V20_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0pretty__print_V20_k3, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.1 1 0) (close _V0vanity_V0pretty__print_V20_k4) 'get-output-string)
    V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0pretty__print_V20_k4, env)}),
      _V0get__output__string);
 }
}
static void _V0vanity_V0pretty__print_V20_k2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0pretty__print_V20_k2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0pretty__print_V20_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0pretty__print_V20_k2, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.1 0 0) (close _V0vanity_V0pretty__print_V20_k3) 'close-port)
    V_CALL(_var0, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0pretty__print_V20_k3, env)}),
      _V0close__port);
 }
}
static void _V0vanity_V0pretty__print_V20_k1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0pretty__print_V20_k1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0pretty__print_V20_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0pretty__print_V20_k1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.make-import (close _V0vanity_V0pretty__print_V20_k2) (##string ##.string.219) (bruijn ##.x.210 0 0))
    V_CALL_FUNC(VMakeImport2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0pretty__print_V20_k2, env)}),
      VEncodePointer(&_V10_Dstring_D219.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V0vanity_V0pretty__print_V20_lambda1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0pretty__print_V20_lambda1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0pretty__print_V20_lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0pretty__print_V20_lambda1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0pretty__print_V20_k1) (##string ##.string.220))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0pretty__print_V20_k1, env)}),
      VEncodePointer(&_V10_Dstring_D220.sym, VPOINTER_OTHER));
 }
}
VFunc _V0vanity_V0pretty__print_V20 = (VFunc)_V0vanity_V0pretty__print_V20_lambda1;
