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
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D94 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D93 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
VWEAK VWORD _V0eof__object_Q;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0eof__object_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "eof-object\?" };
VWEAK VWORD _V0read;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0read = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "read" };
VWEAK VWORD _V0open__input__file;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0open__input__file = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "open-input-file" };
VWEAK VWORD _V0string__append;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0string__append = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "string-append" };
VWEAK VWORD _V0not;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0not = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "not" };
VWEAK VWORD _V0for__each;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0for__each = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "for-each" };
VWEAK VWORD _V0display;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0display = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "display" };
VWEAK VWORD _V0write;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0write = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "write" };
VWEAK VWORD _V0newline;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0newline = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "newline" };
VWEAK VWORD _V0exit;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0exit = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "exit" };
VWEAK VWORD _V0current__error__port;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0current__error__port = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "current-error-port" };
VWEAK VWORD _V0null_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0null_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "null\?" };
VWEAK VWORD _V0car;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0car = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "car" };
VWEAK VWORD _V0cons;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cons = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cons" };
VWEAK VWORD _V0cdr;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0cdr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "cdr" };
VWEAK VWORD _V0filter;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0filter = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "filter" };
VWEAK VWORD _V0gensym;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0gensym = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "gensym" };
VWEAK VWORD _V0compiler__error;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0compiler__error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "compiler-error" };
VWEAK VWORD _V0search__open__input__file;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V0search__open__input__file = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "search-open-input-file" };
VWEAK VWORD _V0read__all;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0read__all = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "read-all" };
VWEAK VWORD _V40_V10vcore_Dgensym;VWEAK VClosure _VW_V40_V10vcore_Dgensym = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VGensym, NULL };
static struct { VBlob sym; char bytes[19]; } _V10_Dstring_D92 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, "vsc: fatal error: " };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D91 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, ":" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D90 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, " " };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D89 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "/" };
static __attribute__((constructor)) void VDllMain1() {
  _V0eof__object_Q = VEncodePointer(VLookupConstant("_V0eof__object_Q", &_VW_V0eof__object_Q), VPOINTER_OTHER);
  _V0read = VEncodePointer(VLookupConstant("_V0read", &_VW_V0read), VPOINTER_OTHER);
  _V0open__input__file = VEncodePointer(VLookupConstant("_V0open__input__file", &_VW_V0open__input__file), VPOINTER_OTHER);
  _V0string__append = VEncodePointer(VLookupConstant("_V0string__append", &_VW_V0string__append), VPOINTER_OTHER);
  _V0not = VEncodePointer(VLookupConstant("_V0not", &_VW_V0not), VPOINTER_OTHER);
  _V0for__each = VEncodePointer(VLookupConstant("_V0for__each", &_VW_V0for__each), VPOINTER_OTHER);
  _V0display = VEncodePointer(VLookupConstant("_V0display", &_VW_V0display), VPOINTER_OTHER);
  _V0write = VEncodePointer(VLookupConstant("_V0write", &_VW_V0write), VPOINTER_OTHER);
  _V0newline = VEncodePointer(VLookupConstant("_V0newline", &_VW_V0newline), VPOINTER_OTHER);
  _V0exit = VEncodePointer(VLookupConstant("_V0exit", &_VW_V0exit), VPOINTER_OTHER);
  _V0current__error__port = VEncodePointer(VLookupConstant("_V0current__error__port", &_VW_V0current__error__port), VPOINTER_OTHER);
  _V0null_Q = VEncodePointer(VLookupConstant("_V0null_Q", &_VW_V0null_Q), VPOINTER_OTHER);
  _V0car = VEncodePointer(VLookupConstant("_V0car", &_VW_V0car), VPOINTER_OTHER);
  _V0cons = VEncodePointer(VLookupConstant("_V0cons", &_VW_V0cons), VPOINTER_OTHER);
  _V0cdr = VEncodePointer(VLookupConstant("_V0cdr", &_VW_V0cdr), VPOINTER_OTHER);
  _V0filter = VEncodePointer(VLookupConstant("_V0filter", &_VW_V0filter), VPOINTER_OTHER);
  _V0gensym = VEncodePointer(VLookupConstant("_V0gensym", &_VW_V0gensym), VPOINTER_OTHER);
  _V0compiler__error = VEncodePointer(VLookupConstant("_V0compiler__error", &_VW_V0compiler__error), VPOINTER_OTHER);
  _V0search__open__input__file = VEncodePointer(VLookupConstant("_V0search__open__input__file", &_VW_V0search__open__input__file), VPOINTER_OTHER);
  _V0read__all = VEncodePointer(VLookupConstant("_V0read__all", &_VW_V0read__all), VPOINTER_OTHER);
  _V40_V10vcore_Dgensym = VEncodePointer(VLookupConstant("_V40_V10vcore_Dgensym", &_VW_V40_V10vcore_Dgensym), VPOINTER_CLOSURE);
}
static void _V10_Dread__all_D16_k20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dread__all_D16_k20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dread__all_D16_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dread__all_D16_k20, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.cons.14 5 13) (bruijn ##.k.51 3 0) (bruijn ##.expr.22 2 0) (bruijn ##.x.53 0 0))
    V_CALL(VGetArg(upenv, 5-1, 13), runtime,
      upenv->up->up->vars[0],
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Dread__all_D16_k19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dread__all_D16_k19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dread__all_D16_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dread__all_D16_k19, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.52 0 0) ((bruijn ##.k.51 2 0) '()) ((bruijn ##.read-all.16 3 0) (close _V10_Dread__all_D16_k20) (bruijn ##.port.21 2 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->vars[0], runtime,
      VNULL);
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dread__all_D16_k20, env)}),
      upenv->up->vars[1]);
}
 }
}
static void _V10_Dread__all_D16_k18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dread__all_D16_k18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dread__all_D16_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dread__all_D16_k18, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.eof-object?.1 3 0) (close _V10_Dread__all_D16_k19) (bruijn ##.expr.22 0 0))
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dread__all_D16_k19, env)}),
      _var0);
 }
}
static void _V10_Dread__all_D16_lambda3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dread__all_D16_lambda3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V10_Dread__all_D16_lambda3, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dread__all_D16_lambda3, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.read.2 2 1) (close _V10_Dread__all_D16_k18) (bruijn ##.port.21 0 1))
    V_CALL(upenv->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dread__all_D16_k18, env)}),
      _var1);
 }
}
static void _V10_Dloop_D25_k25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D25_k25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dloop_D25_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D25_k25, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.25 6 0) (bruijn ##.k.55 5 0) (bruijn ##.x.57 0 0))
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V10_Dloop_D25_k24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D25_k24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dloop_D25_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D25_k24, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.fd.27 0 0) ((bruijn ##.k.55 4 0) (bruijn ##.fd.27 0 0)) ((bruijn ##.cdr.15 8 14) (close _V10_Dloop_D25_k25) (bruijn ##.paths.26 4 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      _var0);
} else {
    V_CALL(VGetArg(upenv, 8-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D25_k25, env)}),
      upenv->up->up->up->vars[1]);
}
 }
}
static void _V10_Dloop_D25_k23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D25_k23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dloop_D25_k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D25_k23, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.open-input-file.3 7 2) (close _V10_Dloop_D25_k24) (bruijn ##.x.58 0 0))
    V_CALL(VGetArg(upenv, 7-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D25_k24, env)}),
      _var0);
 }
}
static void _V10_Dloop_D25_k22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D25_k22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dloop_D25_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D25_k22, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.string-append.4 6 3) (close _V10_Dloop_D25_k23) (bruijn ##.x.59 0 0) (##string ##.string.89) (bruijn ##.file.23 4 1))
    V_CALL(VGetArg(upenv, 6-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D25_k23, env)}),
      _var0,
      VEncodePointer(&_V10_Dstring_D89.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[1]);
 }
}
static void _V10_Dloop_D25_k21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D25_k21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dloop_D25_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D25_k21, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.56 0 0) ((bruijn ##.k.55 1 0) #f) ((bruijn ##.car.13 5 12) (close _V10_Dloop_D25_k22) (bruijn ##.paths.26 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
} else {
    V_CALL(VGetArg(upenv, 5-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D25_k22, env)}),
      upenv->vars[1]);
}
 }
}
static void _V10_Dloop_D25_lambda5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dloop_D25_lambda5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V10_Dloop_D25_lambda5, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D25_lambda5, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.null?.12 4 11) (close _V10_Dloop_D25_k21) (bruijn ##.paths.26 0 1))
    V_CALL(upenv->up->up->up->vars[11], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D25_k21, env)}),
      _var1);
 }
}
static void _V10_Dsearch__open__input__file_D17_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dsearch__open__input__file_D17_lambda4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V10_Dsearch__open__input__file_D17_lambda4, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsearch__open__input__file_D17_lambda4, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (letrec 1 ((close _V10_Dloop_D25_lambda5)) ((bruijn ##.loop.25 0 0) (bruijn ##.k.54 1 0) (bruijn ##.paths.24 1 2)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D25_lambda5, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      upenv->vars[2]);
    }
 }
}
static void _V10_Dcompiler__error_D18_k33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dcompiler__error_D18_k33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dcompiler__error_D18_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcompiler__error_D18_k33, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.write.8 11 7) (bruijn ##.k.68 1 0) (bruijn ##.irritant.31 1 1) (bruijn ##.err.30 8 0))
    V_CALL(VGetArg(upenv, 11-1, 7), runtime,
      upenv->vars[0],
      upenv->vars[1],
      VGetArg(upenv, 8-1, 0));
 }
}
static void _V10_Dcompiler__error_D18_lambda7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dcompiler__error_D18_lambda7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V10_Dcompiler__error_D18_lambda7, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcompiler__error_D18_lambda7, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.display.7 10 6) (close _V10_Dcompiler__error_D18_k33) (##string ##.string.90) (bruijn ##.err.30 7 0))
    V_CALL(VGetArg(upenv, 10-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcompiler__error_D18_k33, env)}),
      VEncodePointer(&_V10_Dstring_D90.sym, VPOINTER_OTHER),
      VGetArg(upenv, 7-1, 0));
 }
}
static void _V10_Dcompiler__error_D18_k32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dcompiler__error_D18_k32" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dcompiler__error_D18_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcompiler__error_D18_k32, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.for-each.6 9 5) (bruijn ##.k.66 1 0) (close _V10_Dcompiler__error_D18_lambda7) (bruijn ##.irritants.29 7 2))
    V_CALL(VGetArg(upenv, 9-1, 5), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcompiler__error_D18_lambda7, env)}),
      VGetArg(upenv, 7-1, 2));
 }
}
static void _V10_Dcompiler__error_D18_k31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dcompiler__error_D18_k31" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dcompiler__error_D18_k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcompiler__error_D18_k31, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.65 1 0) ((bruijn ##.display.7 8 6) (close _V10_Dcompiler__error_D18_k32) (##string ##.string.91) (bruijn ##.err.30 5 0)) ((bruijn ##.k.66 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 8-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcompiler__error_D18_k32, env)}),
      VEncodePointer(&_V10_Dstring_D91.sym, VPOINTER_OTHER),
      VGetArg(upenv, 5-1, 0));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dcompiler__error_D18_k35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dcompiler__error_D18_k35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dcompiler__error_D18_k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcompiler__error_D18_k35, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.exit.10 9 9) (bruijn ##.k.60 7 0) 1)
    V_CALL(VGetArg(upenv, 9-1, 9), runtime,
      VGetArg(upenv, 7-1, 0),
      VEncodeInt(1l));
 }
}
static void _V10_Dcompiler__error_D18_k34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dcompiler__error_D18_k34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dcompiler__error_D18_k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcompiler__error_D18_k34, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.newline.9 8 8) (close _V10_Dcompiler__error_D18_k35) (bruijn ##.err.30 5 0))
    V_CALL(VGetArg(upenv, 8-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcompiler__error_D18_k35, env)}),
      VGetArg(upenv, 5-1, 0));
 }
}
static void _V10_Dcompiler__error_D18_k30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dcompiler__error_D18_k30" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dcompiler__error_D18_k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcompiler__error_D18_k30, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcompiler__error_D18_k31) (close _V10_Dcompiler__error_D18_k34))
    V_CALL_FUNC(_V10_Dcompiler__error_D18_k31, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcompiler__error_D18_k34, env)}));
 }
}
static void _V10_Dcompiler__error_D18_k29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dcompiler__error_D18_k29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dcompiler__error_D18_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcompiler__error_D18_k29, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.not.5 6 4) (close _V10_Dcompiler__error_D18_k30) (bruijn ##.x.70 0 0))
    V_CALL(VGetArg(upenv, 6-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcompiler__error_D18_k30, env)}),
      _var0);
 }
}
static void _V10_Dcompiler__error_D18_k28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dcompiler__error_D18_k28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dcompiler__error_D18_k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcompiler__error_D18_k28, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.null?.12 5 11) (close _V10_Dcompiler__error_D18_k29) (bruijn ##.irritants.29 3 2))
    V_CALL(VGetArg(upenv, 5-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcompiler__error_D18_k29, env)}),
      upenv->up->up->vars[2]);
 }
}
static void _V10_Dcompiler__error_D18_k27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dcompiler__error_D18_k27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dcompiler__error_D18_k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcompiler__error_D18_k27, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.display.7 4 6) (close _V10_Dcompiler__error_D18_k28) (bruijn ##.msg.28 2 1) (bruijn ##.err.30 1 0))
    V_CALL(upenv->up->up->up->vars[6], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcompiler__error_D18_k28, env)}),
      upenv->up->vars[1],
      upenv->vars[0]);
 }
}
static void _V10_Dcompiler__error_D18_k26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dcompiler__error_D18_k26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dcompiler__error_D18_k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcompiler__error_D18_k26, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.display.7 3 6) (close _V10_Dcompiler__error_D18_k27) (##string ##.string.92) (bruijn ##.err.30 0 0))
    V_CALL(upenv->up->up->vars[6], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcompiler__error_D18_k27, env)}),
      VEncodePointer(&_V10_Dstring_D92.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V10_Dcompiler__error_D18_lambda6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, ...) {
 static VDebugInfo dbg = { "_V10_Dcompiler__error_D18_lambda6" };
 VRecordCall2(runtime, &dbg);
 if(argc < 2) {
  VError("Not enough arguments to _V10_Dcompiler__error_D18_lambda6, got ~D~N"
  "-- expected 2 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcompiler__error_D18_lambda6, runtime, upenv, 2, argc, _var0, _var1, _varargs) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _varargs;
  // ((bruijn ##.current-error-port.11 2 10) (close _V10_Dcompiler__error_D18_k26))
    V_CALL(upenv->up->vars[10], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcompiler__error_D18_k26, env)}));
 }
}
static void _V10_Dfilter_D19_k41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dfilter_D19_k41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dfilter_D19_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfilter_D19_k41, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.cons.14 8 13) (bruijn ##.k.71 6 0) (bruijn ##.x.74 2 0) (bruijn ##.x.75 0 0))
    V_CALL(VGetArg(upenv, 8-1, 13), runtime,
      VGetArg(upenv, 6-1, 0),
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Dfilter_D19_k40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dfilter_D19_k40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dfilter_D19_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfilter_D19_k40, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.filter.19 6 3) (close _V10_Dfilter_D19_k41) (bruijn ##.p.32 5 1) (bruijn ##.x.76 0 0))
    V_CALL(VGetArg(upenv, 6-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfilter_D19_k41, env)}),
      VGetArg(upenv, 5-1, 1),
      _var0);
 }
}
static void _V10_Dfilter_D19_k39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dfilter_D19_k39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dfilter_D19_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfilter_D19_k39, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.15 6 14) (close _V10_Dfilter_D19_k40) (bruijn ##.lst.33 4 2))
    V_CALL(VGetArg(upenv, 6-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfilter_D19_k40, env)}),
      upenv->up->up->up->vars[2]);
 }
}
static void _V10_Dfilter_D19_k42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dfilter_D19_k42" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dfilter_D19_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfilter_D19_k42, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.filter.19 5 3) (bruijn ##.k.71 4 0) (bruijn ##.p.32 4 1) (bruijn ##.x.77 0 0))
    V_CALL(VGetArg(upenv, 5-1, 3), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->up->up->vars[1],
      _var0);
 }
}
static void _V10_Dfilter_D19_k38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dfilter_D19_k38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dfilter_D19_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfilter_D19_k38, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.73 0 0) ((bruijn ##.car.13 5 12) (close _V10_Dfilter_D19_k39) (bruijn ##.lst.33 3 2)) ((bruijn ##.cdr.15 5 14) (close _V10_Dfilter_D19_k42) (bruijn ##.lst.33 3 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 5-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfilter_D19_k39, env)}),
      upenv->up->up->vars[2]);
} else {
    V_CALL(VGetArg(upenv, 5-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfilter_D19_k42, env)}),
      upenv->up->up->vars[2]);
}
 }
}
static void _V10_Dfilter_D19_k37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dfilter_D19_k37" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dfilter_D19_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfilter_D19_k37, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.p.32 2 1) (close _V10_Dfilter_D19_k38) (bruijn ##.x.78 0 0))
    V_CALL(upenv->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfilter_D19_k38, env)}),
      _var0);
 }
}
static void _V10_Dfilter_D19_k36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dfilter_D19_k36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dfilter_D19_k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfilter_D19_k36, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.72 0 0) ((bruijn ##.k.71 1 0) '()) ((bruijn ##.car.13 3 12) (close _V10_Dfilter_D19_k37) (bruijn ##.lst.33 1 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VNULL);
} else {
    V_CALL(upenv->up->up->vars[12], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfilter_D19_k37, env)}),
      upenv->vars[2]);
}
 }
}
static void _V10_Dfilter_D19_lambda8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dfilter_D19_lambda8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V10_Dfilter_D19_lambda8, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfilter_D19_lambda8, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.null?.12 2 11) (close _V10_Dfilter_D19_k36) (bruijn ##.lst.33 0 2))
    V_CALL(upenv->up->vars[11], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfilter_D19_k36, env)}),
      _var2);
 }
}
static void _V0vanity_V0compiler_V0utils_V20_lambda2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0utils_V20_lambda2" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0utils_V20_lambda2, runtime, upenv, 15, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7, _var8, _var9, _var10, _var11, _var12, _var13, _var14) {
  struct { VEnv env; VWORD argv[15]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 15, 15, upenv);
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
  // (letrec 5 ((close _V10_Dread__all_D16_lambda3) (close _V10_Dsearch__open__input__file_D17_lambda4) (close _V10_Dcompiler__error_D18_lambda6) (close _V10_Dfilter_D19_lambda8) (##intrinsic ##vcore.gensym)) ((bruijn ##.k.35 19 0) (##inline ##vcore.cons (##inline ##vcore.cons 'read-all (bruijn ##.read-all.16 0 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'search-open-input-file (bruijn ##.search-open-input-file.17 0 1)) (##inline ##vcore.cons (##inline ##vcore.cons 'compiler-error (bruijn ##.compiler-error.18 0 2)) (##inline ##vcore.cons (##inline ##vcore.cons 'gensym (bruijn ##.gensym.20 0 4)) (##inline ##vcore.cons (##inline ##vcore.cons 'filter (bruijn ##.filter.19 0 3)) '())))))))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[5]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 5, 5, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dread__all_D16_lambda3, env)});
    env->vars[1] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsearch__open__input__file_D17_lambda4, env)});
    env->vars[2] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcompiler__error_D18_lambda6, env)});
    env->vars[3] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfilter_D19_lambda8, env)});
    env->vars[4] = _V40_V10vcore_Dgensym;
    V_CALL(VGetArg(upenv, 19-1, 0), runtime,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0read__all,
        env->vars[0]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0search__open__input__file,
        env->vars[1]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0compiler__error,
        env->vars[2]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0gensym,
        env->vars[4]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0filter,
        env->vars[3]),
        VNULL))))));
    }
 }
}
static void _V0vanity_V0compiler_V0utils_V20_k17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0utils_V20_k17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0utils_V20_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0utils_V20_k17, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0utils_V20_lambda2) (bruijn ##.x.36 14 0) (bruijn ##.x.37 13 0) (bruijn ##.x.38 12 0) (bruijn ##.x.39 11 0) (bruijn ##.x.40 10 0) (bruijn ##.x.41 9 0) (bruijn ##.x.42 8 0) (bruijn ##.x.43 7 0) (bruijn ##.x.44 6 0) (bruijn ##.x.45 5 0) (bruijn ##.x.46 4 0) (bruijn ##.x.47 3 0) (bruijn ##.x.48 2 0) (bruijn ##.x.49 1 0) (bruijn ##.x.50 0 0))
    V_CALL_FUNC(_V0vanity_V0compiler_V0utils_V20_lambda2, env, runtime,
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
static void _V0vanity_V0compiler_V0utils_V20_k16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0utils_V20_k16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0utils_V20_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0utils_V20_k16, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 14 0) (close _V0vanity_V0compiler_V0utils_V20_k17) 'cdr)
    V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0utils_V20_k17, env)}),
      _V0cdr);
 }
}
static void _V0vanity_V0compiler_V0utils_V20_k15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0utils_V20_k15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0utils_V20_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0utils_V20_k15, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 13 0) (close _V0vanity_V0compiler_V0utils_V20_k16) 'cons)
    V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0utils_V20_k16, env)}),
      _V0cons);
 }
}
static void _V0vanity_V0compiler_V0utils_V20_k14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0utils_V20_k14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0utils_V20_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0utils_V20_k14, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 12 0) (close _V0vanity_V0compiler_V0utils_V20_k15) 'car)
    V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0utils_V20_k15, env)}),
      _V0car);
 }
}
static void _V0vanity_V0compiler_V0utils_V20_k13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0utils_V20_k13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0utils_V20_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0utils_V20_k13, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 11 0) (close _V0vanity_V0compiler_V0utils_V20_k14) 'null?)
    V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0utils_V20_k14, env)}),
      _V0null_Q);
 }
}
static void _V0vanity_V0compiler_V0utils_V20_k12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0utils_V20_k12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0utils_V20_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0utils_V20_k12, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 10 0) (close _V0vanity_V0compiler_V0utils_V20_k13) 'current-error-port)
    V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0utils_V20_k13, env)}),
      _V0current__error__port);
 }
}
static void _V0vanity_V0compiler_V0utils_V20_k11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0utils_V20_k11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0utils_V20_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0utils_V20_k11, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 9 0) (close _V0vanity_V0compiler_V0utils_V20_k12) 'exit)
    V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0utils_V20_k12, env)}),
      _V0exit);
 }
}
static void _V0vanity_V0compiler_V0utils_V20_k10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0utils_V20_k10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0utils_V20_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0utils_V20_k10, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 8 0) (close _V0vanity_V0compiler_V0utils_V20_k11) 'newline)
    V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0utils_V20_k11, env)}),
      _V0newline);
 }
}
static void _V0vanity_V0compiler_V0utils_V20_k9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0utils_V20_k9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0utils_V20_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0utils_V20_k9, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 7 0) (close _V0vanity_V0compiler_V0utils_V20_k10) 'write)
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0utils_V20_k10, env)}),
      _V0write);
 }
}
static void _V0vanity_V0compiler_V0utils_V20_k8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0utils_V20_k8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0utils_V20_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0utils_V20_k8, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 6 0) (close _V0vanity_V0compiler_V0utils_V20_k9) 'display)
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0utils_V20_k9, env)}),
      _V0display);
 }
}
static void _V0vanity_V0compiler_V0utils_V20_k7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0utils_V20_k7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0utils_V20_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0utils_V20_k7, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 5 0) (close _V0vanity_V0compiler_V0utils_V20_k8) 'for-each)
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0utils_V20_k8, env)}),
      _V0for__each);
 }
}
static void _V0vanity_V0compiler_V0utils_V20_k6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0utils_V20_k6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0utils_V20_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0utils_V20_k6, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 4 0) (close _V0vanity_V0compiler_V0utils_V20_k7) 'not)
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0utils_V20_k7, env)}),
      _V0not);
 }
}
static void _V0vanity_V0compiler_V0utils_V20_k5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0utils_V20_k5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0utils_V20_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0utils_V20_k5, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 3 0) (close _V0vanity_V0compiler_V0utils_V20_k6) 'string-append)
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0utils_V20_k6, env)}),
      _V0string__append);
 }
}
static void _V0vanity_V0compiler_V0utils_V20_k4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0utils_V20_k4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0utils_V20_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0utils_V20_k4, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 2 0) (close _V0vanity_V0compiler_V0utils_V20_k5) 'open-input-file)
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0utils_V20_k5, env)}),
      _V0open__input__file);
 }
}
static void _V0vanity_V0compiler_V0utils_V20_k3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0utils_V20_k3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0utils_V20_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0utils_V20_k3, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 1 0) (close _V0vanity_V0compiler_V0utils_V20_k4) 'read)
    V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0utils_V20_k4, env)}),
      _V0read);
 }
}
static void _V0vanity_V0compiler_V0utils_V20_k2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0utils_V20_k2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0utils_V20_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0utils_V20_k2, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 0 0) (close _V0vanity_V0compiler_V0utils_V20_k3) 'eof-object?)
    V_CALL(_var0, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0utils_V20_k3, env)}),
      _V0eof__object_Q);
 }
}
static void _V0vanity_V0compiler_V0utils_V20_k1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0utils_V20_k1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0utils_V20_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0utils_V20_k1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.make-import (close _V0vanity_V0compiler_V0utils_V20_k2) (##string ##.string.93) (bruijn ##.x.88 0 0))
    V_CALL_FUNC(VMakeImport2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0utils_V20_k2, env)}),
      VEncodePointer(&_V10_Dstring_D93.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0utils_V20_lambda1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0utils_V20_lambda1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0utils_V20_lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0utils_V20_lambda1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0utils_V20_k1) (##string ##.string.94))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0utils_V20_k1, env)}),
      VEncodePointer(&_V10_Dstring_D94.sym, VPOINTER_OTHER));
 }
}
VFunc _V0vanity_V0compiler_V0utils_V20 = (VFunc)_V0vanity_V0compiler_V0utils_V20_lambda1;
