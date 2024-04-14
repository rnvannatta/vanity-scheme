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
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D224 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D223 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "_V0vanity_V0compiler_V0getopt_V20" };
VWEAK VWORD _V0cons;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cons = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cons" };
VWEAK VWORD _V0car;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0car = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "car" };
VWEAK VWORD _V0string__ref;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0string__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "string-ref" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
VWEAK VWORD _V0substring;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0substring = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "substring" };
VWEAK VWORD _V0_E;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_E = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "=" };
VWEAK VWORD _V0string__length;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0string__length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "string-length" };
VWEAK VWORD _V0_L;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_L = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "<" };
VWEAK VWORD _V0null_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0null_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "null\?" };
VWEAK VWORD _V0assoc;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0assoc = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "assoc" };
VWEAK VWORD _V0caddr;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0caddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "caddr" };
VWEAK VWORD _V0list;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "list" };
VWEAK VWORD _V0pair_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0pair_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "pair\?" };
VWEAK VWORD _V0cadr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cadr" };
VWEAK VWORD _V0cddr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cddr" };
VWEAK VWORD _V0not;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0not = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "not" };
VWEAK VWORD _V0values;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0values = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "values" };
VWEAK VWORD _V0eq_Q;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0eq_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "eq\?" };
VWEAK VWORD _V0_P;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_P = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "+" };
VWEAK VWORD _V0call__with__values;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0call__with__values = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "call-with-values" };
VWEAK VWORD _V0memq;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0memq = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "memq" };
VWEAK VWORD _V0string___Glist;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0string___Glist = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "string->list" };
VWEAK VWORD _V0string___Gsymbol;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0string___Gsymbol = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "string->symbol" };
VWEAK VWORD _V0string_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0string_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "string\?" };
VWEAK VWORD _V0symbol_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0symbol_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "symbol\?" };
VWEAK VWORD _V0symbol___Gstring;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0symbol___Gstring = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "symbol->string" };
VWEAK VWORD _V0map;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "map" };
VWEAK VWORD _V0cdr;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0cdr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "cdr" };
VWEAK VWORD _V0getopt;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0getopt = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "getopt" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D222 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "-" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D221 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "--" };
static struct { VBlob sym; char bytes[1]; } _V10_Dstring_D220 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 1 }, "" };
static __attribute__((constructor)) void VDllMain1() {
  _V0cons = VEncodePointer(VLookupConstant("_V0cons", &_VW_V0cons), VPOINTER_OTHER);
  _V0car = VEncodePointer(VLookupConstant("_V0car", &_VW_V0car), VPOINTER_OTHER);
  _V0string__ref = VEncodePointer(VLookupConstant("_V0string__ref", &_VW_V0string__ref), VPOINTER_OTHER);
  _V0equal_Q = VEncodePointer(VLookupConstant("_V0equal_Q", &_VW_V0equal_Q), VPOINTER_OTHER);
  _V0substring = VEncodePointer(VLookupConstant("_V0substring", &_VW_V0substring), VPOINTER_OTHER);
  _V0_E = VEncodePointer(VLookupConstant("_V0_E", &_VW_V0_E), VPOINTER_OTHER);
  _V0string__length = VEncodePointer(VLookupConstant("_V0string__length", &_VW_V0string__length), VPOINTER_OTHER);
  _V0_L = VEncodePointer(VLookupConstant("_V0_L", &_VW_V0_L), VPOINTER_OTHER);
  _V0null_Q = VEncodePointer(VLookupConstant("_V0null_Q", &_VW_V0null_Q), VPOINTER_OTHER);
  _V0assoc = VEncodePointer(VLookupConstant("_V0assoc", &_VW_V0assoc), VPOINTER_OTHER);
  _V0caddr = VEncodePointer(VLookupConstant("_V0caddr", &_VW_V0caddr), VPOINTER_OTHER);
  _V0list = VEncodePointer(VLookupConstant("_V0list", &_VW_V0list), VPOINTER_OTHER);
  _V0pair_Q = VEncodePointer(VLookupConstant("_V0pair_Q", &_VW_V0pair_Q), VPOINTER_OTHER);
  _V0cadr = VEncodePointer(VLookupConstant("_V0cadr", &_VW_V0cadr), VPOINTER_OTHER);
  _V0cddr = VEncodePointer(VLookupConstant("_V0cddr", &_VW_V0cddr), VPOINTER_OTHER);
  _V0not = VEncodePointer(VLookupConstant("_V0not", &_VW_V0not), VPOINTER_OTHER);
  _V0values = VEncodePointer(VLookupConstant("_V0values", &_VW_V0values), VPOINTER_OTHER);
  _V0eq_Q = VEncodePointer(VLookupConstant("_V0eq_Q", &_VW_V0eq_Q), VPOINTER_OTHER);
  _V0_P = VEncodePointer(VLookupConstant("_V0_P", &_VW_V0_P), VPOINTER_OTHER);
  _V0call__with__values = VEncodePointer(VLookupConstant("_V0call__with__values", &_VW_V0call__with__values), VPOINTER_OTHER);
  _V0memq = VEncodePointer(VLookupConstant("_V0memq", &_VW_V0memq), VPOINTER_OTHER);
  _V0string___Glist = VEncodePointer(VLookupConstant("_V0string___Glist", &_VW_V0string___Glist), VPOINTER_OTHER);
  _V0string___Gsymbol = VEncodePointer(VLookupConstant("_V0string___Gsymbol", &_VW_V0string___Gsymbol), VPOINTER_OTHER);
  _V0string_Q = VEncodePointer(VLookupConstant("_V0string_Q", &_VW_V0string_Q), VPOINTER_OTHER);
  _V0symbol_Q = VEncodePointer(VLookupConstant("_V0symbol_Q", &_VW_V0symbol_Q), VPOINTER_OTHER);
  _V0symbol___Gstring = VEncodePointer(VLookupConstant("_V0symbol___Gstring", &_VW_V0symbol___Gstring), VPOINTER_OTHER);
  _V0map = VEncodePointer(VLookupConstant("_V0map", &_VW_V0map), VPOINTER_OTHER);
  _V0cdr = VEncodePointer(VLookupConstant("_V0cdr", &_VW_V0cdr), VPOINTER_OTHER);
  _V0getopt = VEncodePointer(VLookupConstant("_V0getopt", &_VW_V0getopt), VPOINTER_OTHER);
}
static void _V10_Ddecode__longopt_D33_k33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecode__longopt_D33_k33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Ddecode__longopt_D33_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecode__longopt_D33_k33, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.decode-longopt.33 3 0) (bruijn ##.k.88 2 0) (bruijn ##.x.90 0 0))
    V_CALL(upenv->up->up->vars[0], runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Ddecode__longopt_D33_k39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecode__longopt_D33_k39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Ddecode__longopt_D33_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecode__longopt_D33_k39, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.decode-longopt.33 8 0) (bruijn ##.k.88 7 0) (bruijn ##.x.92 0 0))
    V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0);
 }
}
static void _V10_Ddecode__longopt_D33_k38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecode__longopt_D33_k38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Ddecode__longopt_D33_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecode__longopt_D33_k38, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.1 11 0) (close _V10_Ddecode__longopt_D33_k39) (bruijn ##.x.93 1 0) (bruijn ##.x.94 0 0))
    V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecode__longopt_D33_k39, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Ddecode__longopt_D33_k37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecode__longopt_D33_k37" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Ddecode__longopt_D33_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecode__longopt_D33_k37, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.28 10 27) (close _V10_Ddecode__longopt_D33_k38) (bruijn ##.longopt.39 5 1))
    V_CALL(VGetArg(upenv, 10-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecode__longopt_D33_k38, env)}),
      VGetArg(upenv, 5-1, 1));
 }
}
static void _V10_Ddecode__longopt_D33_k36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecode__longopt_D33_k36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Ddecode__longopt_D33_k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecode__longopt_D33_k36, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.symbol->string.26 9 25) (close _V10_Ddecode__longopt_D33_k37) (bruijn ##.x.95 0 0))
    V_CALL(VGetArg(upenv, 9-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecode__longopt_D33_k37, env)}),
      _var0);
 }
}
static void _V10_Ddecode__longopt_D33_k45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecode__longopt_D33_k45" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Ddecode__longopt_D33_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecode__longopt_D33_k45, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.list.12 14 11) (bruijn ##.k.88 9 0) (bruijn ##.x.98 2 0) #f (bruijn ##.x.99 0 0))
    V_CALL(VGetArg(upenv, 14-1, 11), runtime,
      VGetArg(upenv, 9-1, 0),
      upenv->up->vars[0],
      VEncodeBool(false),
      _var0);
 }
}
static void _V10_Ddecode__longopt_D33_k44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecode__longopt_D33_k44" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Ddecode__longopt_D33_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecode__longopt_D33_k44, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.string->symbol.23 13 22) (close _V10_Ddecode__longopt_D33_k45) (bruijn ##.x.100 0 0))
    V_CALL(VGetArg(upenv, 13-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecode__longopt_D33_k45, env)}),
      _var0);
 }
}
static void _V10_Ddecode__longopt_D33_k43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecode__longopt_D33_k43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Ddecode__longopt_D33_k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecode__longopt_D33_k43, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.car.2 12 1) (close _V10_Ddecode__longopt_D33_k44) (bruijn ##.longopt.39 7 1))
    V_CALL(VGetArg(upenv, 12-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecode__longopt_D33_k44, env)}),
      VGetArg(upenv, 7-1, 1));
 }
}
static void _V10_Ddecode__longopt_D33_k51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecode__longopt_D33_k51" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Ddecode__longopt_D33_k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecode__longopt_D33_k51, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.list.12 17 11) (bruijn ##.k.88 12 0) (bruijn ##.x.102 3 0) (bruijn ##.x.103 2 0) (bruijn ##.x.104 0 0))
    V_CALL(VGetArg(upenv, 17-1, 11), runtime,
      VGetArg(upenv, 12-1, 0),
      upenv->up->up->vars[0],
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Ddecode__longopt_D33_k50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecode__longopt_D33_k50" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Ddecode__longopt_D33_k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecode__longopt_D33_k50, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.string->symbol.23 16 22) (close _V10_Ddecode__longopt_D33_k51) (bruijn ##.x.105 0 0))
    V_CALL(VGetArg(upenv, 16-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecode__longopt_D33_k51, env)}),
      _var0);
 }
}
static void _V10_Ddecode__longopt_D33_k49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecode__longopt_D33_k49" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Ddecode__longopt_D33_k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecode__longopt_D33_k49, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.car.2 15 1) (close _V10_Ddecode__longopt_D33_k50) (bruijn ##.longopt.39 10 1))
    V_CALL(VGetArg(upenv, 15-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecode__longopt_D33_k50, env)}),
      VGetArg(upenv, 10-1, 1));
 }
}
static void _V10_Ddecode__longopt_D33_k48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecode__longopt_D33_k48" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Ddecode__longopt_D33_k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecode__longopt_D33_k48, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cadr.14 14 13) (close _V10_Ddecode__longopt_D33_k49) (bruijn ##.longopt.39 9 1))
    V_CALL(VGetArg(upenv, 14-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecode__longopt_D33_k49, env)}),
      VGetArg(upenv, 9-1, 1));
 }
}
static void _V10_Ddecode__longopt_D33_k47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecode__longopt_D33_k47" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Ddecode__longopt_D33_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecode__longopt_D33_k47, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.101 0 0) ((bruijn ##.car.2 13 1) (close _V10_Ddecode__longopt_D33_k48) (bruijn ##.longopt.39 8 1)) ((bruijn ##.k.88 8 0) (bruijn ##.longopt.39 8 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 13-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecode__longopt_D33_k48, env)}),
      VGetArg(upenv, 8-1, 1));
} else {
    V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VGetArg(upenv, 8-1, 1));
}
 }
}
static void _V10_Ddecode__longopt_D33_k46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecode__longopt_D33_k46" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Ddecode__longopt_D33_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecode__longopt_D33_k46, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.null?.9 12 8) (close _V10_Ddecode__longopt_D33_k47) (bruijn ##.x.106 0 0))
    V_CALL(VGetArg(upenv, 12-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecode__longopt_D33_k47, env)}),
      _var0);
 }
}
static void _V10_Ddecode__longopt_D33_k42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecode__longopt_D33_k42" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Ddecode__longopt_D33_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecode__longopt_D33_k42, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.97 0 0) ((bruijn ##.car.2 11 1) (close _V10_Ddecode__longopt_D33_k43) (bruijn ##.longopt.39 6 1)) ((bruijn ##.cddr.15 11 14) (close _V10_Ddecode__longopt_D33_k46) (bruijn ##.longopt.39 6 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecode__longopt_D33_k43, env)}),
      VGetArg(upenv, 6-1, 1));
} else {
    V_CALL(VGetArg(upenv, 11-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecode__longopt_D33_k46, env)}),
      VGetArg(upenv, 6-1, 1));
}
 }
}
static void _V10_Ddecode__longopt_D33_k41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecode__longopt_D33_k41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Ddecode__longopt_D33_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecode__longopt_D33_k41, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.null?.9 10 8) (close _V10_Ddecode__longopt_D33_k42) (bruijn ##.x.107 0 0))
    V_CALL(VGetArg(upenv, 10-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecode__longopt_D33_k42, env)}),
      _var0);
 }
}
static void _V10_Ddecode__longopt_D33_k40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecode__longopt_D33_k40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Ddecode__longopt_D33_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecode__longopt_D33_k40, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.96 0 0) ((bruijn ##.list.12 9 11) (bruijn ##.k.88 4 0) (bruijn ##.longopt.39 4 1) #f (bruijn ##.longopt.39 4 1)) ((bruijn ##.cdr.28 9 27) (close _V10_Ddecode__longopt_D33_k41) (bruijn ##.longopt.39 4 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 9-1, 11), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->up->up->vars[1],
      VEncodeBool(false),
      upenv->up->up->up->vars[1]);
} else {
    V_CALL(VGetArg(upenv, 9-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecode__longopt_D33_k41, env)}),
      upenv->up->up->up->vars[1]);
}
 }
}
static void _V10_Ddecode__longopt_D33_k35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecode__longopt_D33_k35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Ddecode__longopt_D33_k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecode__longopt_D33_k35, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.91 0 0) ((bruijn ##.car.2 8 1) (close _V10_Ddecode__longopt_D33_k36) (bruijn ##.longopt.39 3 1)) ((bruijn ##.string?.24 8 23) (close _V10_Ddecode__longopt_D33_k40) (bruijn ##.longopt.39 3 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecode__longopt_D33_k36, env)}),
      upenv->up->up->vars[1]);
} else {
    V_CALL(VGetArg(upenv, 8-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecode__longopt_D33_k40, env)}),
      upenv->up->up->vars[1]);
}
 }
}
static void _V10_Ddecode__longopt_D33_k34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecode__longopt_D33_k34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Ddecode__longopt_D33_k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecode__longopt_D33_k34, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.symbol?.25 7 24) (close _V10_Ddecode__longopt_D33_k35) (bruijn ##.x.108 0 0))
    V_CALL(VGetArg(upenv, 7-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecode__longopt_D33_k35, env)}),
      _var0);
 }
}
static void _V10_Ddecode__longopt_D33_k32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecode__longopt_D33_k32" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Ddecode__longopt_D33_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecode__longopt_D33_k32, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.89 0 0) ((bruijn ##.symbol->string.26 6 25) (close _V10_Ddecode__longopt_D33_k33) (bruijn ##.longopt.39 1 1)) ((bruijn ##.car.2 6 1) (close _V10_Ddecode__longopt_D33_k34) (bruijn ##.longopt.39 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 6-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecode__longopt_D33_k33, env)}),
      upenv->vars[1]);
} else {
    V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecode__longopt_D33_k34, env)}),
      upenv->vars[1]);
}
 }
}
static void _V10_Ddecode__longopt_D33_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Ddecode__longopt_D33_lambda4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V10_Ddecode__longopt_D33_lambda4, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecode__longopt_D33_lambda4, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.symbol?.25 5 24) (close _V10_Ddecode__longopt_D33_k32) (bruijn ##.longopt.39 0 1))
    V_CALL(VGetArg(upenv, 5-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecode__longopt_D33_k32, env)}),
      _var1);
 }
}
static void _V10_Dloop_D44_k61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D44_k61" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dloop_D44_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D44_k61, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.cons.1 17 0) (bruijn ##.k.111 8 0) (bruijn ##.x.114 2 0) (bruijn ##.x.115 0 0))
    V_CALL(VGetArg(upenv, 17-1, 0), runtime,
      VGetArg(upenv, 8-1, 0),
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D44_k60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D44_k60" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dloop_D44_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D44_k60, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iter.38 12 5) (close _V10_Dloop_D44_k61) (bruijn ##.x.116 0 0))
    V_CALL(VGetArg(upenv, 12-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D44_k61, env)}),
      _var0);
 }
}
static void _V10_Dloop_D44_k59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D44_k59" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dloop_D44_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D44_k59, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.28 15 27) (close _V10_Dloop_D44_k60) (bruijn ##.args.40 10 1))
    V_CALL(VGetArg(upenv, 15-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D44_k60, env)}),
      VGetArg(upenv, 10-1, 1));
 }
}
static void _V10_Dloop_D44_k58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D44_k58" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dloop_D44_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D44_k58, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.1 14 0) (close _V10_Dloop_D44_k59) #\? (bruijn ##.x.117 0 0))
    V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D44_k59, env)}),
      VEncodeChar('?'),
      _var0);
 }
}
static void _V10_Dloop_D44_k65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D44_k65" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dloop_D44_k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D44_k65, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.eq?.18 17 17) (bruijn ##.k.144 1 0) (bruijn ##.x.145 0 0) #\:)
    V_CALL(VGetArg(upenv, 17-1, 17), runtime,
      upenv->vars[0],
      _var0,
      VEncodeChar(':'));
 }
}
static void _V10_Dloop_D44_k64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D44_k64" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dloop_D44_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D44_k64, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.143 1 0) ((bruijn ##.cadr.14 16 13) (close _V10_Dloop_D44_k65) (bruijn ##.mem.46 4 0)) ((bruijn ##.k.144 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 16-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D44_k65, env)}),
      upenv->up->up->up->vars[0]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D44_k71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D44_k71" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dloop_D44_k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D44_k71, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.cons.1 21 0) (bruijn ##.k.111 12 0) (bruijn ##.x.119 2 0) (bruijn ##.x.120 0 0))
    V_CALL(VGetArg(upenv, 21-1, 0), runtime,
      VGetArg(upenv, 12-1, 0),
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D44_k70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D44_k70" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dloop_D44_k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D44_k70, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.loop.44 12 0) (close _V10_Dloop_D44_k71) (bruijn ##.x.121 0 0))
    V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D44_k71, env)}),
      _var0);
 }
}
static void _V10_Dloop_D44_k69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D44_k69" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dloop_D44_k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D44_k69, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.+.19 19 18) (close _V10_Dloop_D44_k70) (bruijn ##.i.45 10 1) 1)
    V_CALL(VGetArg(upenv, 19-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D44_k70, env)}),
      VGetArg(upenv, 10-1, 1),
      VEncodeInt(1l));
 }
}
static void _V10_Dloop_D44_k68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D44_k68" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dloop_D44_k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D44_k68, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.1 18 0) (close _V10_Dloop_D44_k69) (bruijn ##.x.122 0 0) #f)
    V_CALL(VGetArg(upenv, 18-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D44_k69, env)}),
      _var0,
      VEncodeBool(false));
 }
}
static void _V10_Dloop_D44_k80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D44_k80" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dloop_D44_k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D44_k80, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.cons.1 26 0) (bruijn ##.k.111 17 0) (bruijn ##.x.124 2 0) (bruijn ##.x.125 0 0))
    V_CALL(VGetArg(upenv, 26-1, 0), runtime,
      VGetArg(upenv, 17-1, 0),
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D44_k79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D44_k79" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dloop_D44_k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D44_k79, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iter.38 21 5) (close _V10_Dloop_D44_k80) (bruijn ##.x.126 0 0))
    V_CALL(VGetArg(upenv, 21-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D44_k80, env)}),
      _var0);
 }
}
static void _V10_Dloop_D44_k78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D44_k78" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dloop_D44_k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D44_k78, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.28 24 27) (close _V10_Dloop_D44_k79) (bruijn ##.args.40 19 1))
    V_CALL(VGetArg(upenv, 24-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D44_k79, env)}),
      VGetArg(upenv, 19-1, 1));
 }
}
static void _V10_Dloop_D44_k77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D44_k77" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dloop_D44_k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D44_k77, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.1 23 0) (close _V10_Dloop_D44_k78) (bruijn ##.x.127 2 0) (bruijn ##.x.128 0 0))
    V_CALL(VGetArg(upenv, 23-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D44_k78, env)}),
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D44_k76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D44_k76" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dloop_D44_k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D44_k76, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.substring.5 22 4) (close _V10_Dloop_D44_k77) (bruijn ##.arg.42 16 0) (bruijn ##.x.129 0 0))
    V_CALL(VGetArg(upenv, 22-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D44_k77, env)}),
      VGetArg(upenv, 16-1, 0),
      _var0);
 }
}
static void _V10_Dloop_D44_k75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D44_k75" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dloop_D44_k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D44_k75, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.+.19 21 18) (close _V10_Dloop_D44_k76) (bruijn ##.i.45 12 1) 1)
    V_CALL(VGetArg(upenv, 21-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D44_k76, env)}),
      VGetArg(upenv, 12-1, 1),
      VEncodeInt(1l));
 }
}
static void _V10_Dloop_D44_k85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D44_k85" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dloop_D44_k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D44_k85, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.list.12 25 11) (bruijn ##.k.111 16 0) (bruijn ##.x.131 0 0))
    V_CALL(VGetArg(upenv, 25-1, 11), runtime,
      VGetArg(upenv, 16-1, 0),
      _var0);
 }
}
static void _V10_Dloop_D44_k84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D44_k84" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dloop_D44_k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D44_k84, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.1 24 0) (close _V10_Dloop_D44_k85) #\: (bruijn ##.x.132 0 0))
    V_CALL(VGetArg(upenv, 24-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D44_k85, env)}),
      VEncodeChar(':'),
      _var0);
 }
}
static void _V10_Dloop_D44_k90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D44_k90" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dloop_D44_k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D44_k90, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.cons.1 28 0) (bruijn ##.k.111 19 0) (bruijn ##.x.133 2 0) (bruijn ##.x.134 0 0))
    V_CALL(VGetArg(upenv, 28-1, 0), runtime,
      VGetArg(upenv, 19-1, 0),
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D44_k89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D44_k89" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dloop_D44_k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D44_k89, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iter.38 23 5) (close _V10_Dloop_D44_k90) (bruijn ##.x.135 0 0))
    V_CALL(VGetArg(upenv, 23-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D44_k90, env)}),
      _var0);
 }
}
static void _V10_Dloop_D44_k88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D44_k88" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dloop_D44_k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D44_k88, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cddr.15 26 14) (close _V10_Dloop_D44_k89) (bruijn ##.args.40 21 1))
    V_CALL(VGetArg(upenv, 26-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D44_k89, env)}),
      VGetArg(upenv, 21-1, 1));
 }
}
static void _V10_Dloop_D44_k87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D44_k87" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dloop_D44_k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D44_k87, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.1 25 0) (close _V10_Dloop_D44_k88) (bruijn ##.x.136 1 0) (bruijn ##.x.137 0 0))
    V_CALL(VGetArg(upenv, 25-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D44_k88, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D44_k86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D44_k86" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dloop_D44_k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D44_k86, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cadr.14 24 13) (close _V10_Dloop_D44_k87) (bruijn ##.args.40 19 1))
    V_CALL(VGetArg(upenv, 24-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D44_k87, env)}),
      VGetArg(upenv, 19-1, 1));
 }
}
static void _V10_Dloop_D44_k83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D44_k83" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dloop_D44_k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D44_k83, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.130 0 0) ((bruijn ##.car.2 23 1) (close _V10_Dloop_D44_k84) (bruijn ##.mem.46 11 0)) ((bruijn ##.car.2 23 1) (close _V10_Dloop_D44_k86) (bruijn ##.mem.46 11 0)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 23-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D44_k84, env)}),
      VGetArg(upenv, 11-1, 0));
} else {
    V_CALL(VGetArg(upenv, 23-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D44_k86, env)}),
      VGetArg(upenv, 11-1, 0));
}
 }
}
static void _V10_Dloop_D44_k82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D44_k82" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dloop_D44_k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D44_k82, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.not.16 22 15) (close _V10_Dloop_D44_k83) (bruijn ##.x.138 0 0))
    V_CALL(VGetArg(upenv, 22-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D44_k83, env)}),
      _var0);
 }
}
static void _V10_Dloop_D44_k81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D44_k81" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dloop_D44_k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D44_k81, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.pair?.13 21 12) (close _V10_Dloop_D44_k82) (bruijn ##.x.139 0 0))
    V_CALL(VGetArg(upenv, 21-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D44_k82, env)}),
      _var0);
 }
}
static void _V10_Dloop_D44_k74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D44_k74" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dloop_D44_k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D44_k74, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.123 0 0) ((bruijn ##.car.2 20 1) (close _V10_Dloop_D44_k75) (bruijn ##.mem.46 8 0)) ((bruijn ##.cdr.28 20 27) (close _V10_Dloop_D44_k81) (bruijn ##.args.40 15 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 20-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D44_k75, env)}),
      VGetArg(upenv, 8-1, 0));
} else {
    V_CALL(VGetArg(upenv, 20-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D44_k81, env)}),
      VGetArg(upenv, 15-1, 1));
}
 }
}
static void _V10_Dloop_D44_k73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D44_k73" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dloop_D44_k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D44_k73, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.not.16 19 15) (close _V10_Dloop_D44_k74) (bruijn ##.x.140 0 0))
    V_CALL(VGetArg(upenv, 19-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D44_k74, env)}),
      _var0);
 }
}
static void _V10_Dloop_D44_k72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D44_k72" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dloop_D44_k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D44_k72, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.=.6 18 5) (close _V10_Dloop_D44_k73) (bruijn ##.len.43 11 0) (bruijn ##.x.141 0 0))
    V_CALL(VGetArg(upenv, 18-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D44_k73, env)}),
      VGetArg(upenv, 11-1, 0),
      _var0);
 }
}
static void _V10_Dloop_D44_k67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D44_k67" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dloop_D44_k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D44_k67, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.118 0 0) ((bruijn ##.car.2 17 1) (close _V10_Dloop_D44_k68) (bruijn ##.mem.46 5 0)) ((bruijn ##.+.19 17 18) (close _V10_Dloop_D44_k72) (bruijn ##.i.45 8 1) 1))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 17-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D44_k68, env)}),
      VGetArg(upenv, 5-1, 0));
} else {
    V_CALL(VGetArg(upenv, 17-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D44_k72, env)}),
      VGetArg(upenv, 8-1, 1),
      VEncodeInt(1l));
}
 }
}
static void _V10_Dloop_D44_k66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D44_k66" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dloop_D44_k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D44_k66, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.not.16 16 15) (close _V10_Dloop_D44_k67) (bruijn ##.x.142 0 0))
    V_CALL(VGetArg(upenv, 16-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D44_k67, env)}),
      _var0);
 }
}
static void _V10_Dloop_D44_k63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D44_k63" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dloop_D44_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D44_k63, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D44_k64) (close _V10_Dloop_D44_k66))
    V_CALL_FUNC(_V10_Dloop_D44_k64, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D44_k66, env)}));
 }
}
static void _V10_Dloop_D44_k62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D44_k62" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dloop_D44_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D44_k62, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.pair?.13 14 12) (close _V10_Dloop_D44_k63) (bruijn ##.x.146 0 0))
    V_CALL(VGetArg(upenv, 14-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D44_k63, env)}),
      _var0);
 }
}
static void _V10_Dloop_D44_k57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D44_k57" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dloop_D44_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D44_k57, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.113 0 0) ((bruijn ##.substring.5 13 4) (close _V10_Dloop_D44_k58) (bruijn ##.arg.42 7 0) (bruijn ##.i.45 4 1)) ((bruijn ##.cdr.28 13 27) (close _V10_Dloop_D44_k62) (bruijn ##.mem.46 1 0)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 13-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D44_k58, env)}),
      VGetArg(upenv, 7-1, 0),
      upenv->up->up->up->vars[1]);
} else {
    V_CALL(VGetArg(upenv, 13-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D44_k62, env)}),
      upenv->vars[0]);
}
 }
}
static void _V10_Dloop_D44_k56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D44_k56" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dloop_D44_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D44_k56, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.not.16 12 15) (close _V10_Dloop_D44_k57) (bruijn ##.mem.46 0 0))
    V_CALL(VGetArg(upenv, 12-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D44_k57, env)}),
      _var0);
 }
}
static void _V10_Dloop_D44_k55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D44_k55" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dloop_D44_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D44_k55, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.memq.21 11 20) (close _V10_Dloop_D44_k56) (bruijn ##.x.147 0 0) (bruijn ##.opts.41 6 2))
    V_CALL(VGetArg(upenv, 11-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D44_k56, env)}),
      _var0,
      VGetArg(upenv, 6-1, 2));
 }
}
static void _V10_Dloop_D44_k91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D44_k91" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dloop_D44_k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D44_k91, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.iter.38 7 5) (bruijn ##.k.111 2 0) (bruijn ##.x.148 0 0))
    V_CALL(VGetArg(upenv, 7-1, 5), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D44_k54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D44_k54" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dloop_D44_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D44_k54, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.112 0 0) ((bruijn ##.string-ref.3 10 2) (close _V10_Dloop_D44_k55) (bruijn ##.arg.42 4 0) (bruijn ##.i.45 1 1)) ((bruijn ##.cdr.28 10 27) (close _V10_Dloop_D44_k91) (bruijn ##.args.40 5 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 10-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D44_k55, env)}),
      upenv->up->up->up->vars[0],
      upenv->vars[1]);
} else {
    V_CALL(VGetArg(upenv, 10-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D44_k91, env)}),
      VGetArg(upenv, 5-1, 1));
}
 }
}
static void _V10_Dloop_D44_lambda6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dloop_D44_lambda6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V10_Dloop_D44_lambda6, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D44_lambda6, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.<.8 9 7) (close _V10_Dloop_D44_k54) (bruijn ##.i.45 0 1) (bruijn ##.len.43 2 0))
    V_CALL(VGetArg(upenv, 9-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D44_k54, env)}),
      _var1,
      upenv->up->vars[0]);
 }
}
static void _V10_Dgetopt__short_D36_k53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgetopt__short_D36_k53" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dgetopt__short_D36_k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgetopt__short_D36_k53, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 1 ((close _V10_Dloop_D44_lambda6)) ((bruijn ##.loop.44 0 0) (bruijn ##.k.110 3 0) 1))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D44_lambda6, env)});
    V_CALL(env->vars[0], runtime,
      upenv->up->up->vars[0],
      VEncodeInt(1l));
    }
 }
}
static void _V10_Dgetopt__short_D36_k52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgetopt__short_D36_k52" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dgetopt__short_D36_k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgetopt__short_D36_k52, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.string-length.7 6 6) (close _V10_Dgetopt__short_D36_k53) (bruijn ##.arg.42 0 0))
    V_CALL(VGetArg(upenv, 6-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgetopt__short_D36_k53, env)}),
      _var0);
 }
}
static void _V10_Dgetopt__short_D36_lambda5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dgetopt__short_D36_lambda5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V10_Dgetopt__short_D36_lambda5, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgetopt__short_D36_lambda5, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.car.2 5 1) (close _V10_Dgetopt__short_D36_k52) (bruijn ##.args.40 0 1))
    V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgetopt__short_D36_k52, env)}),
      _var1);
 }
}
static void _V10_Dloop_D50_k95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D50_k95" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dloop_D50_k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D50_k95, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.values.17 12 16) (bruijn ##.k.151 2 0) (bruijn ##.x.153 0 0) (##string ##.string.220))
    V_CALL(VGetArg(upenv, 12-1, 16), runtime,
      upenv->up->vars[0],
      _var0,
      VEncodePointer(&_V10_Dstring_D220.sym, VPOINTER_OTHER));
 }
}
static void _V10_Dloop_D50_k100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D50_k100" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dloop_D50_k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D50_k100, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.values.17 16 16) (bruijn ##.k.151 6 0) (bruijn ##.x.155 2 0) (bruijn ##.x.156 0 0))
    V_CALL(VGetArg(upenv, 16-1, 16), runtime,
      VGetArg(upenv, 6-1, 0),
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D50_k99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D50_k99" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dloop_D50_k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D50_k99, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.substring.5 15 4) (close _V10_Dloop_D50_k100) (bruijn ##.arg.48 8 0) (bruijn ##.x.157 0 0))
    V_CALL(VGetArg(upenv, 15-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D50_k100, env)}),
      VGetArg(upenv, 8-1, 0),
      _var0);
 }
}
static void _V10_Dloop_D50_k98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D50_k98" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dloop_D50_k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D50_k98, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.+.19 14 18) (close _V10_Dloop_D50_k99) (bruijn ##.i.51 4 1) 1)
    V_CALL(VGetArg(upenv, 14-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D50_k99, env)}),
      upenv->up->up->up->vars[1],
      VEncodeInt(1l));
 }
}
static void _V10_Dloop_D50_k101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D50_k101" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dloop_D50_k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D50_k101, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.50 5 0) (bruijn ##.k.151 4 0) (bruijn ##.x.158 0 0))
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      upenv->up->up->up->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D50_k97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D50_k97" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dloop_D50_k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D50_k97, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.154 0 0) ((bruijn ##.substring.5 13 4) (close _V10_Dloop_D50_k98) (bruijn ##.arg.48 6 0) 0 (bruijn ##.i.51 3 1)) ((bruijn ##.+.19 13 18) (close _V10_Dloop_D50_k101) (bruijn ##.i.51 3 1) 1))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 13-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D50_k98, env)}),
      VGetArg(upenv, 6-1, 0),
      VEncodeInt(0l),
      upenv->up->up->vars[1]);
} else {
    V_CALL(VGetArg(upenv, 13-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D50_k101, env)}),
      upenv->up->up->vars[1],
      VEncodeInt(1l));
}
 }
}
static void _V10_Dloop_D50_k96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D50_k96" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dloop_D50_k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D50_k96, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.eq?.18 12 17) (close _V10_Dloop_D50_k97) (bruijn ##.x.159 0 0) #\=)
    V_CALL(VGetArg(upenv, 12-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D50_k97, env)}),
      _var0,
      VEncodeChar('='));
 }
}
static void _V10_Dloop_D50_k94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D50_k94" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dloop_D50_k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D50_k94, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.152 0 0) ((bruijn ##.substring.5 11 4) (close _V10_Dloop_D50_k95) (bruijn ##.arg.48 4 0) 0 (bruijn ##.i.51 1 1)) ((bruijn ##.string-ref.3 11 2) (close _V10_Dloop_D50_k96) (bruijn ##.arg.48 4 0) (bruijn ##.i.51 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 11-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D50_k95, env)}),
      upenv->up->up->up->vars[0],
      VEncodeInt(0l),
      upenv->vars[1]);
} else {
    V_CALL(VGetArg(upenv, 11-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D50_k96, env)}),
      upenv->up->up->up->vars[0],
      upenv->vars[1]);
}
 }
}
static void _V10_Dloop_D50_lambda9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dloop_D50_lambda9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V10_Dloop_D50_lambda9, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D50_lambda9, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.=.6 10 5) (close _V10_Dloop_D50_k94) (bruijn ##.i.51 0 1) (bruijn ##.len.49 2 0))
    V_CALL(VGetArg(upenv, 10-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D50_k94, env)}),
      _var1,
      upenv->up->vars[0]);
 }
}
static void _V10_Dgetopt__long_D37_k93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgetopt__long_D37_k93" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dgetopt__long_D37_k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgetopt__long_D37_k93, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 1 ((close _V10_Dloop_D50_lambda9)) ((bruijn ##.loop.50 0 0) (bruijn ##.k.150 3 0) 2))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D50_lambda9, env)});
    V_CALL(env->vars[0], runtime,
      upenv->up->up->vars[0],
      VEncodeInt(2l));
    }
 }
}
static void _V10_Dgetopt__long_D37_k92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgetopt__long_D37_k92" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dgetopt__long_D37_k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgetopt__long_D37_k92, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.string-length.7 7 6) (close _V10_Dgetopt__long_D37_k93) (bruijn ##.arg.48 0 0))
    V_CALL(VGetArg(upenv, 7-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgetopt__long_D37_k93, env)}),
      _var0);
 }
}
static void _V10_Dgetopt__long_D37_lambda8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgetopt__long_D37_lambda8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dgetopt__long_D37_lambda8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgetopt__long_D37_lambda8, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.car.2 6 1) (close _V10_Dgetopt__long_D37_k92) (bruijn ##.args.47 1 1))
    V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgetopt__long_D37_k92, env)}),
      upenv->vars[1]);
 }
}
static void _V10_Dgetopt__long_D37_k108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgetopt__long_D37_k108" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dgetopt__long_D37_k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgetopt__long_D37_k108, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.cons.1 13 0) (bruijn ##.k.160 7 0) (bruijn ##.x.162 2 0) (bruijn ##.x.163 0 0))
    V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VGetArg(upenv, 7-1, 0),
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Dgetopt__long_D37_k107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgetopt__long_D37_k107" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dgetopt__long_D37_k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgetopt__long_D37_k107, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iter.38 8 5) (close _V10_Dgetopt__long_D37_k108) (bruijn ##.x.164 0 0))
    V_CALL(VGetArg(upenv, 8-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgetopt__long_D37_k108, env)}),
      _var0);
 }
}
static void _V10_Dgetopt__long_D37_k106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgetopt__long_D37_k106" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dgetopt__long_D37_k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgetopt__long_D37_k106, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.28 11 27) (close _V10_Dgetopt__long_D37_k107) (bruijn ##.args.47 6 1))
    V_CALL(VGetArg(upenv, 11-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgetopt__long_D37_k107, env)}),
      VGetArg(upenv, 6-1, 1));
 }
}
static void _V10_Dgetopt__long_D37_k105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgetopt__long_D37_k105" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dgetopt__long_D37_k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgetopt__long_D37_k105, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.1 10 0) (close _V10_Dgetopt__long_D37_k106) #\? (bruijn ##.x.165 0 0))
    V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgetopt__long_D37_k106, env)}),
      VEncodeChar('?'),
      _var0);
 }
}
static void _V10_Dgetopt__long_D37_k114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgetopt__long_D37_k114" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dgetopt__long_D37_k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgetopt__long_D37_k114, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.cons.1 15 0) (bruijn ##.k.160 9 0) (bruijn ##.x.167 2 0) (bruijn ##.x.168 0 0))
    V_CALL(VGetArg(upenv, 15-1, 0), runtime,
      VGetArg(upenv, 9-1, 0),
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Dgetopt__long_D37_k113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgetopt__long_D37_k113" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dgetopt__long_D37_k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgetopt__long_D37_k113, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iter.38 10 5) (close _V10_Dgetopt__long_D37_k114) (bruijn ##.x.169 0 0))
    V_CALL(VGetArg(upenv, 10-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgetopt__long_D37_k114, env)}),
      _var0);
 }
}
static void _V10_Dgetopt__long_D37_k112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgetopt__long_D37_k112" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dgetopt__long_D37_k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgetopt__long_D37_k112, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.28 13 27) (close _V10_Dgetopt__long_D37_k113) (bruijn ##.args.47 8 1))
    V_CALL(VGetArg(upenv, 13-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgetopt__long_D37_k113, env)}),
      VGetArg(upenv, 8-1, 1));
 }
}
static void _V10_Dgetopt__long_D37_k111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgetopt__long_D37_k111" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dgetopt__long_D37_k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgetopt__long_D37_k111, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.1 12 0) (close _V10_Dgetopt__long_D37_k112) (bruijn ##.x.170 0 0) #f)
    V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgetopt__long_D37_k112, env)}),
      _var0,
      VEncodeBool(false));
 }
}
static void _V10_Dgetopt__long_D37_k120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgetopt__long_D37_k120" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dgetopt__long_D37_k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgetopt__long_D37_k120, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.cons.1 17 0) (bruijn ##.k.160 11 0) (bruijn ##.x.172 2 0) (bruijn ##.x.173 0 0))
    V_CALL(VGetArg(upenv, 17-1, 0), runtime,
      VGetArg(upenv, 11-1, 0),
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Dgetopt__long_D37_k119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgetopt__long_D37_k119" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dgetopt__long_D37_k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgetopt__long_D37_k119, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iter.38 12 5) (close _V10_Dgetopt__long_D37_k120) (bruijn ##.x.174 0 0))
    V_CALL(VGetArg(upenv, 12-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgetopt__long_D37_k120, env)}),
      _var0);
 }
}
static void _V10_Dgetopt__long_D37_k118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgetopt__long_D37_k118" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dgetopt__long_D37_k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgetopt__long_D37_k118, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.28 15 27) (close _V10_Dgetopt__long_D37_k119) (bruijn ##.args.47 10 1))
    V_CALL(VGetArg(upenv, 15-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgetopt__long_D37_k119, env)}),
      VGetArg(upenv, 10-1, 1));
 }
}
static void _V10_Dgetopt__long_D37_k117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgetopt__long_D37_k117" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dgetopt__long_D37_k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgetopt__long_D37_k117, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.1 14 0) (close _V10_Dgetopt__long_D37_k118) (bruijn ##.x.175 0 0) (bruijn ##.val.53 8 2))
    V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgetopt__long_D37_k118, env)}),
      _var0,
      VGetArg(upenv, 8-1, 2));
 }
}
static void _V10_Dgetopt__long_D37_k127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgetopt__long_D37_k127" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dgetopt__long_D37_k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgetopt__long_D37_k127, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.cons.1 20 0) (bruijn ##.k.160 14 0) (bruijn ##.x.177 2 0) (bruijn ##.x.178 0 0))
    V_CALL(VGetArg(upenv, 20-1, 0), runtime,
      VGetArg(upenv, 14-1, 0),
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Dgetopt__long_D37_k126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgetopt__long_D37_k126" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dgetopt__long_D37_k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgetopt__long_D37_k126, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iter.38 15 5) (close _V10_Dgetopt__long_D37_k127) (bruijn ##.x.179 0 0))
    V_CALL(VGetArg(upenv, 15-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgetopt__long_D37_k127, env)}),
      _var0);
 }
}
static void _V10_Dgetopt__long_D37_k125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgetopt__long_D37_k125" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dgetopt__long_D37_k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgetopt__long_D37_k125, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cddr.15 18 14) (close _V10_Dgetopt__long_D37_k126) (bruijn ##.args.47 13 1))
    V_CALL(VGetArg(upenv, 18-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgetopt__long_D37_k126, env)}),
      VGetArg(upenv, 13-1, 1));
 }
}
static void _V10_Dgetopt__long_D37_k124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgetopt__long_D37_k124" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dgetopt__long_D37_k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgetopt__long_D37_k124, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.1 17 0) (close _V10_Dgetopt__long_D37_k125) (bruijn ##.x.180 1 0) (bruijn ##.x.181 0 0))
    V_CALL(VGetArg(upenv, 17-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgetopt__long_D37_k125, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dgetopt__long_D37_k123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgetopt__long_D37_k123" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dgetopt__long_D37_k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgetopt__long_D37_k123, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cadr.14 16 13) (close _V10_Dgetopt__long_D37_k124) (bruijn ##.args.47 11 1))
    V_CALL(VGetArg(upenv, 16-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgetopt__long_D37_k124, env)}),
      VGetArg(upenv, 11-1, 1));
 }
}
static void _V10_Dgetopt__long_D37_k129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgetopt__long_D37_k129" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dgetopt__long_D37_k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgetopt__long_D37_k129, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.list.12 17 11) (bruijn ##.k.160 11 0) (bruijn ##.x.182 0 0))
    V_CALL(VGetArg(upenv, 17-1, 11), runtime,
      VGetArg(upenv, 11-1, 0),
      _var0);
 }
}
static void _V10_Dgetopt__long_D37_k128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgetopt__long_D37_k128" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dgetopt__long_D37_k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgetopt__long_D37_k128, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.1 16 0) (close _V10_Dgetopt__long_D37_k129) #\: (bruijn ##.x.183 0 0))
    V_CALL(VGetArg(upenv, 16-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgetopt__long_D37_k129, env)}),
      VEncodeChar(':'),
      _var0);
 }
}
static void _V10_Dgetopt__long_D37_k122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgetopt__long_D37_k122" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dgetopt__long_D37_k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgetopt__long_D37_k122, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.176 0 0) ((bruijn ##.caddr.11 15 10) (close _V10_Dgetopt__long_D37_k123) (bruijn ##.ass.54 7 0)) ((bruijn ##.caddr.11 15 10) (close _V10_Dgetopt__long_D37_k128) (bruijn ##.ass.54 7 0)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 15-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgetopt__long_D37_k123, env)}),
      VGetArg(upenv, 7-1, 0));
} else {
    V_CALL(VGetArg(upenv, 15-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgetopt__long_D37_k128, env)}),
      VGetArg(upenv, 7-1, 0));
}
 }
}
static void _V10_Dgetopt__long_D37_k121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgetopt__long_D37_k121" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dgetopt__long_D37_k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgetopt__long_D37_k121, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.pair?.13 14 12) (close _V10_Dgetopt__long_D37_k122) (bruijn ##.x.184 0 0))
    V_CALL(VGetArg(upenv, 14-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgetopt__long_D37_k122, env)}),
      _var0);
 }
}
static void _V10_Dgetopt__long_D37_k116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgetopt__long_D37_k116" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dgetopt__long_D37_k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgetopt__long_D37_k116, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.171 0 0) ((bruijn ##.caddr.11 13 10) (close _V10_Dgetopt__long_D37_k117) (bruijn ##.ass.54 5 0)) ((bruijn ##.cdr.28 13 27) (close _V10_Dgetopt__long_D37_k121) (bruijn ##.args.47 8 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 13-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgetopt__long_D37_k117, env)}),
      VGetArg(upenv, 5-1, 0));
} else {
    V_CALL(VGetArg(upenv, 13-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgetopt__long_D37_k121, env)}),
      VGetArg(upenv, 8-1, 1));
}
 }
}
static void _V10_Dgetopt__long_D37_k115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgetopt__long_D37_k115" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dgetopt__long_D37_k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgetopt__long_D37_k115, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.not.16 12 15) (close _V10_Dgetopt__long_D37_k116) (bruijn ##.x.185 0 0))
    V_CALL(VGetArg(upenv, 12-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgetopt__long_D37_k116, env)}),
      _var0);
 }
}
static void _V10_Dgetopt__long_D37_k110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgetopt__long_D37_k110" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dgetopt__long_D37_k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgetopt__long_D37_k110, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.166 0 0) ((bruijn ##.caddr.11 11 10) (close _V10_Dgetopt__long_D37_k111) (bruijn ##.ass.54 3 0)) ((bruijn ##.equal?.4 11 3) (close _V10_Dgetopt__long_D37_k115) (bruijn ##.val.53 5 2) (##string ##.string.220)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 11-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgetopt__long_D37_k111, env)}),
      upenv->up->up->vars[0]);
} else {
    V_CALL(VGetArg(upenv, 11-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgetopt__long_D37_k115, env)}),
      VGetArg(upenv, 5-1, 2),
      VEncodePointer(&_V10_Dstring_D220.sym, VPOINTER_OTHER));
}
 }
}
static void _V10_Dgetopt__long_D37_k109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgetopt__long_D37_k109" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dgetopt__long_D37_k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgetopt__long_D37_k109, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.not.16 10 15) (close _V10_Dgetopt__long_D37_k110) (bruijn ##.x.186 0 0))
    V_CALL(VGetArg(upenv, 10-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgetopt__long_D37_k110, env)}),
      _var0);
 }
}
static void _V10_Dgetopt__long_D37_k104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgetopt__long_D37_k104" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dgetopt__long_D37_k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgetopt__long_D37_k104, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.161 0 0) ((bruijn ##.substring.5 9 4) (close _V10_Dgetopt__long_D37_k105) (bruijn ##.arg.52 3 1) 2) ((bruijn ##.cadr.14 9 13) (close _V10_Dgetopt__long_D37_k109) (bruijn ##.ass.54 1 0)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 9-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgetopt__long_D37_k105, env)}),
      upenv->up->up->vars[1],
      VEncodeInt(2l));
} else {
    V_CALL(VGetArg(upenv, 9-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgetopt__long_D37_k109, env)}),
      upenv->vars[0]);
}
 }
}
static void _V10_Dgetopt__long_D37_k103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgetopt__long_D37_k103" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dgetopt__long_D37_k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgetopt__long_D37_k103, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.not.16 8 15) (close _V10_Dgetopt__long_D37_k104) (bruijn ##.ass.54 0 0))
    V_CALL(VGetArg(upenv, 8-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgetopt__long_D37_k104, env)}),
      _var0);
 }
}
static void _V10_Dgetopt__long_D37_k102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgetopt__long_D37_k102" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dgetopt__long_D37_k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgetopt__long_D37_k102, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.assoc.10 7 9) (close _V10_Dgetopt__long_D37_k103) (bruijn ##.x.187 0 0) (bruijn ##.longs.34 3 1))
    V_CALL(VGetArg(upenv, 7-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgetopt__long_D37_k103, env)}),
      _var0,
      upenv->up->up->vars[1]);
 }
}
static void _V10_Dgetopt__long_D37_lambda10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dgetopt__long_D37_lambda10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V10_Dgetopt__long_D37_lambda10, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgetopt__long_D37_lambda10, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.substring.5 6 4) (close _V10_Dgetopt__long_D37_k102) (bruijn ##.arg.52 0 1) 2)
    V_CALL(VGetArg(upenv, 6-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgetopt__long_D37_k102, env)}),
      _var1,
      VEncodeInt(2l));
 }
}
static void _V10_Dgetopt__long_D37_lambda7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dgetopt__long_D37_lambda7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V10_Dgetopt__long_D37_lambda7, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgetopt__long_D37_lambda7, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.call-with-values.20 5 19) (bruijn ##.k.149 0 0) (close _V10_Dgetopt__long_D37_lambda8) (close _V10_Dgetopt__long_D37_lambda10))
    V_CALL(VGetArg(upenv, 5-1, 19), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgetopt__long_D37_lambda8, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgetopt__long_D37_lambda10, env)}));
 }
}
static void _V10_Diter_D38_k135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Diter_D38_k135" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Diter_D38_k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D38_k135, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.<.8 11 7) (bruijn ##.k.211 2 0) (bruijn ##.x.212 0 0) 2)
    V_CALL(VGetArg(upenv, 11-1, 7), runtime,
      upenv->up->vars[0],
      _var0,
      VEncodeInt(2l));
 }
}
static void _V10_Diter_D38_k134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Diter_D38_k134" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Diter_D38_k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D38_k134, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.string-length.7 10 6) (close _V10_Diter_D38_k135) (bruijn ##.x.213 0 0))
    V_CALL(VGetArg(upenv, 10-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D38_k135, env)}),
      _var0);
 }
}
static void _V10_Diter_D38_k133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Diter_D38_k133" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Diter_D38_k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D38_k133, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.210 1 0) ((bruijn ##.k.211 0 0) (bruijn ##.p.210 1 0)) ((bruijn ##.car.2 9 1) (close _V10_Diter_D38_k134) (bruijn ##.args.55 4 1)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(_var0, runtime,
      upenv->vars[0]);
} else {
    V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D38_k134, env)}),
      upenv->up->up->up->vars[1]);
}
 }
}
static void _V10_Diter_D38_k140(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Diter_D38_k140" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Diter_D38_k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D38_k140, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.cons.1 13 0) (bruijn ##.k.188 8 0) (bruijn ##.x.191 2 0) (bruijn ##.x.192 0 0))
    V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VGetArg(upenv, 8-1, 0),
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Diter_D38_k139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Diter_D38_k139" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Diter_D38_k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D38_k139, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iter.38 8 5) (close _V10_Diter_D38_k140) (bruijn ##.x.193 0 0))
    V_CALL(VGetArg(upenv, 8-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D38_k140, env)}),
      _var0);
 }
}
static void _V10_Diter_D38_k138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Diter_D38_k138" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Diter_D38_k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D38_k138, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.28 11 27) (close _V10_Diter_D38_k139) (bruijn ##.args.55 6 1))
    V_CALL(VGetArg(upenv, 11-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D38_k139, env)}),
      VGetArg(upenv, 6-1, 1));
 }
}
static void _V10_Diter_D38_k137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Diter_D38_k137" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Diter_D38_k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D38_k137, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.1 10 0) (close _V10_Diter_D38_k138) #t (bruijn ##.x.194 0 0))
    V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D38_k138, env)}),
      VEncodeBool(true),
      _var0);
 }
}
static void _V10_Diter_D38_lambda12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Diter_D38_lambda12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V10_Diter_D38_lambda12, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D38_lambda12, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##.cons.1 17 0) (bruijn ##.k.197 0 0) #f (bruijn ##.e.56 0 1))
    V_CALL(VGetArg(upenv, 17-1, 0), runtime,
      _var0,
      VEncodeBool(false),
      _var1);
 }
}
static void _V10_Diter_D38_k147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Diter_D38_k147" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Diter_D38_k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D38_k147, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.27 16 26) (bruijn ##.k.188 11 0) (close _V10_Diter_D38_lambda12) (bruijn ##.x.198 0 0))
    V_CALL(VGetArg(upenv, 16-1, 26), runtime,
      VGetArg(upenv, 11-1, 0),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D38_lambda12, env)}),
      _var0);
 }
}
static void _V10_Diter_D38_k146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Diter_D38_k146" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Diter_D38_k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D38_k146, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.196 0 0) ((bruijn ##.cdr.28 15 27) (close _V10_Diter_D38_k147) (bruijn ##.args.55 10 1)) ((bruijn ##.getopt-long.37 11 4) (bruijn ##.k.188 10 0) (bruijn ##.args.55 10 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 15-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D38_k147, env)}),
      VGetArg(upenv, 10-1, 1));
} else {
    V_CALL(VGetArg(upenv, 11-1, 4), runtime,
      VGetArg(upenv, 10-1, 0),
      VGetArg(upenv, 10-1, 1));
}
 }
}
static void _V10_Diter_D38_k145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Diter_D38_k145" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Diter_D38_k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D38_k145, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.=.6 14 5) (close _V10_Diter_D38_k146) (bruijn ##.x.199 0 0) 2)
    V_CALL(VGetArg(upenv, 14-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D38_k146, env)}),
      _var0,
      VEncodeInt(2l));
 }
}
static void _V10_Diter_D38_k144(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Diter_D38_k144" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Diter_D38_k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D38_k144, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.string-length.7 13 6) (close _V10_Diter_D38_k145) (bruijn ##.x.200 0 0))
    V_CALL(VGetArg(upenv, 13-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D38_k145, env)}),
      _var0);
 }
}
static void _V10_Diter_D38_k154(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Diter_D38_k154" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Diter_D38_k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D38_k154, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.cons.1 19 0) (bruijn ##.k.188 14 0) (bruijn ##.x.202 2 0) (bruijn ##.x.203 0 0))
    V_CALL(VGetArg(upenv, 19-1, 0), runtime,
      VGetArg(upenv, 14-1, 0),
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Diter_D38_k153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Diter_D38_k153" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Diter_D38_k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D38_k153, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iter.38 14 5) (close _V10_Diter_D38_k154) (bruijn ##.x.204 0 0))
    V_CALL(VGetArg(upenv, 14-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D38_k154, env)}),
      _var0);
 }
}
static void _V10_Diter_D38_k152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Diter_D38_k152" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Diter_D38_k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D38_k152, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.28 17 27) (close _V10_Diter_D38_k153) (bruijn ##.args.55 12 1))
    V_CALL(VGetArg(upenv, 17-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D38_k153, env)}),
      VGetArg(upenv, 12-1, 1));
 }
}
static void _V10_Diter_D38_k151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Diter_D38_k151" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Diter_D38_k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D38_k151, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.1 16 0) (close _V10_Diter_D38_k152) #t (bruijn ##.x.205 0 0))
    V_CALL(VGetArg(upenv, 16-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D38_k152, env)}),
      VEncodeBool(true),
      _var0);
 }
}
static void _V10_Diter_D38_k150(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Diter_D38_k150" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Diter_D38_k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D38_k150, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.201 0 0) ((bruijn ##.getopt-short.36 11 3) (bruijn ##.k.188 10 0) (bruijn ##.args.55 10 1) (bruijn ##.opts.35 11 2)) ((bruijn ##.car.2 15 1) (close _V10_Diter_D38_k151) (bruijn ##.args.55 10 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 11-1, 3), runtime,
      VGetArg(upenv, 10-1, 0),
      VGetArg(upenv, 10-1, 1),
      VGetArg(upenv, 11-1, 2));
} else {
    V_CALL(VGetArg(upenv, 15-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D38_k151, env)}),
      VGetArg(upenv, 10-1, 1));
}
 }
}
static void _V10_Diter_D38_k149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Diter_D38_k149" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Diter_D38_k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D38_k149, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.equal?.4 14 3) (close _V10_Diter_D38_k150) (bruijn ##.x.206 0 0) #\-)
    V_CALL(VGetArg(upenv, 14-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D38_k150, env)}),
      _var0,
      VEncodeChar('-'));
 }
}
static void _V10_Diter_D38_k148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Diter_D38_k148" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Diter_D38_k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D38_k148, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.string-ref.3 13 2) (close _V10_Diter_D38_k149) (bruijn ##.x.207 0 0) 0)
    V_CALL(VGetArg(upenv, 13-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D38_k149, env)}),
      _var0,
      VEncodeInt(0l));
 }
}
static void _V10_Diter_D38_k143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Diter_D38_k143" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Diter_D38_k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D38_k143, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.195 0 0) ((bruijn ##.car.2 12 1) (close _V10_Diter_D38_k144) (bruijn ##.args.55 7 1)) ((bruijn ##.car.2 12 1) (close _V10_Diter_D38_k148) (bruijn ##.args.55 7 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 12-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D38_k144, env)}),
      VGetArg(upenv, 7-1, 1));
} else {
    V_CALL(VGetArg(upenv, 12-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D38_k148, env)}),
      VGetArg(upenv, 7-1, 1));
}
 }
}
static void _V10_Diter_D38_k142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Diter_D38_k142" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Diter_D38_k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D38_k142, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.equal?.4 11 3) (close _V10_Diter_D38_k143) (bruijn ##.x.208 0 0) (##string ##.string.221))
    V_CALL(VGetArg(upenv, 11-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D38_k143, env)}),
      _var0,
      VEncodePointer(&_V10_Dstring_D221.sym, VPOINTER_OTHER));
 }
}
static void _V10_Diter_D38_k141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Diter_D38_k141" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Diter_D38_k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D38_k141, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.substring.5 10 4) (close _V10_Diter_D38_k142) (bruijn ##.x.209 0 0) 0 2)
    V_CALL(VGetArg(upenv, 10-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D38_k142, env)}),
      _var0,
      VEncodeInt(0l),
      VEncodeInt(2l));
 }
}
static void _V10_Diter_D38_k136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Diter_D38_k136" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Diter_D38_k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D38_k136, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.190 0 0) ((bruijn ##.car.2 9 1) (close _V10_Diter_D38_k137) (bruijn ##.args.55 4 1)) ((bruijn ##.car.2 9 1) (close _V10_Diter_D38_k141) (bruijn ##.args.55 4 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D38_k137, env)}),
      upenv->up->up->up->vars[1]);
} else {
    V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D38_k141, env)}),
      upenv->up->up->up->vars[1]);
}
 }
}
static void _V10_Diter_D38_k132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Diter_D38_k132" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Diter_D38_k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D38_k132, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D38_k133) (close _V10_Diter_D38_k136))
    V_CALL_FUNC(_V10_Diter_D38_k133, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D38_k136, env)}));
 }
}
static void _V10_Diter_D38_k131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Diter_D38_k131" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Diter_D38_k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D38_k131, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.equal?.4 7 3) (close _V10_Diter_D38_k132) (bruijn ##.x.214 0 0) (##string ##.string.222))
    V_CALL(VGetArg(upenv, 7-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D38_k132, env)}),
      _var0,
      VEncodePointer(&_V10_Dstring_D222.sym, VPOINTER_OTHER));
 }
}
static void _V10_Diter_D38_k130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Diter_D38_k130" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Diter_D38_k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D38_k130, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.189 0 0) ((bruijn ##.k.188 1 0) '()) ((bruijn ##.car.2 6 1) (close _V10_Diter_D38_k131) (bruijn ##.args.55 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VNULL);
} else {
    V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D38_k131, env)}),
      upenv->vars[1]);
}
 }
}
static void _V10_Diter_D38_lambda11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Diter_D38_lambda11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V10_Diter_D38_lambda11, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D38_lambda11, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.null?.9 5 8) (close _V10_Diter_D38_k130) (bruijn ##.args.55 0 1))
    V_CALL(VGetArg(upenv, 5-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D38_k130, env)}),
      _var1);
 }
}
static void _V10_Dgetopt_D29_k157(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgetopt_D29_k157" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dgetopt_D29_k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgetopt_D29_k157, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.iter.38 3 5) (bruijn ##.k.87 5 0) (bruijn ##.x.216 0 0))
    V_CALL(upenv->up->up->vars[5], runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V10_Dgetopt_D29_k156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgetopt_D29_k156" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dgetopt_D29_k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgetopt_D29_k156, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.28 6 27) (close _V10_Dgetopt_D29_k157) (bruijn ##.args.31 4 2))
    V_CALL(VGetArg(upenv, 6-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgetopt_D29_k157, env)}),
      upenv->up->up->up->vars[2]);
 }
}
static void _V10_Dgetopt_D29_k155(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgetopt_D29_k155" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dgetopt_D29_k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgetopt_D29_k155, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V10_Dgetopt_D29_k156) (bruijn ##.longs.34 1 1) (bruijn ##.x.217 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgetopt_D29_k156, env)}),
      VEncodeInt(1l), VEncodeInt(1l),
      _var0
    );
 }
}
static void _V10_Dgetopt_D29_k31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dgetopt_D29_k31" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10_Dgetopt_D29_k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgetopt_D29_k31, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 6 ((close _V10_Ddecode__longopt_D33_lambda4) #f (bruijn ##.x.109 1 0) (close _V10_Dgetopt__short_D36_lambda5) (close _V10_Dgetopt__long_D37_lambda7) (close _V10_Diter_D38_lambda11)) ((bruijn ##.map.27 4 26) (close _V10_Dgetopt_D29_k155) (bruijn ##.decode-longopt.33 0 0) (bruijn ##.longopts.32 2 3)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[6]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 6, 6, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecode__longopt_D33_lambda4, env)});
    env->vars[1] = VEncodeBool(false);
    env->vars[2] = upenv->vars[0];
    env->vars[3] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgetopt__short_D36_lambda5, env)});
    env->vars[4] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgetopt__long_D37_lambda7, env)});
    env->vars[5] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D38_lambda11, env)});
    V_CALL(upenv->up->up->up->vars[26], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgetopt_D29_k155, env)}),
      env->vars[0],
      upenv->up->vars[3]);
    }
 }
}
static void _V10_Dgetopt_D29_lambda3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V10_Dgetopt_D29_lambda3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V10_Dgetopt_D29_lambda3, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgetopt_D29_lambda3, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn ##.string->list.22 2 21) (close _V10_Dgetopt_D29_k31) (bruijn ##.optstring.30 0 1))
    V_CALL(upenv->up->vars[21], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgetopt_D29_k31, env)}),
      _var1);
 }
}
static void _V0vanity_V0compiler_V0getopt_V20_lambda2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17, VWORD _var18, VWORD _var19, VWORD _var20, VWORD _var21, VWORD _var22, VWORD _var23, VWORD _var24, VWORD _var25, VWORD _var26, VWORD _var27) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0getopt_V20_lambda2" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0getopt_V20_lambda2, runtime, upenv, 28, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7, _var8, _var9, _var10, _var11, _var12, _var13, _var14, _var15, _var16, _var17, _var18, _var19, _var20, _var21, _var22, _var23, _var24, _var25, _var26, _var27) {
  struct { VEnv env; VWORD argv[28]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 28, 28, upenv);
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
  // (letrec 1 ((close _V10_Dgetopt_D29_lambda3)) ((bruijn ##.k.58 32 0) (##inline ##vcore.cons (##inline ##vcore.cons 'getopt (bruijn ##.getopt.29 0 0)) '())))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgetopt_D29_lambda3, env)});
    V_CALL(VGetArg(upenv, 32-1, 0), runtime,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0getopt,
        env->vars[0]),
        VNULL));
    }
 }
}
static void _V0vanity_V0compiler_V0getopt_V20_k30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0getopt_V20_k30" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0getopt_V20_k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0getopt_V20_k30, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0getopt_V20_lambda2) (bruijn ##.x.59 27 0) (bruijn ##.x.60 26 0) (bruijn ##.x.61 25 0) (bruijn ##.x.62 24 0) (bruijn ##.x.63 23 0) (bruijn ##.x.64 22 0) (bruijn ##.x.65 21 0) (bruijn ##.x.66 20 0) (bruijn ##.x.67 19 0) (bruijn ##.x.68 18 0) (bruijn ##.x.69 17 0) (bruijn ##.x.70 16 0) (bruijn ##.x.71 15 0) (bruijn ##.x.72 14 0) (bruijn ##.x.73 13 0) (bruijn ##.x.74 12 0) (bruijn ##.x.75 11 0) (bruijn ##.x.76 10 0) (bruijn ##.x.77 9 0) (bruijn ##.x.78 8 0) (bruijn ##.x.79 7 0) (bruijn ##.x.80 6 0) (bruijn ##.x.81 5 0) (bruijn ##.x.82 4 0) (bruijn ##.x.83 3 0) (bruijn ##.x.84 2 0) (bruijn ##.x.85 1 0) (bruijn ##.x.86 0 0))
    V_CALL_FUNC(_V0vanity_V0compiler_V0getopt_V20_lambda2, env, runtime,
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
static void _V0vanity_V0compiler_V0getopt_V20_k29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0getopt_V20_k29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0getopt_V20_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0getopt_V20_k29, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 27 0) (close _V0vanity_V0compiler_V0getopt_V20_k30) 'cdr)
    V_CALL(VGetArg(upenv, 27-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0getopt_V20_k30, env)}),
      _V0cdr);
 }
}
static void _V0vanity_V0compiler_V0getopt_V20_k28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0getopt_V20_k28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0getopt_V20_k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0getopt_V20_k28, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 26 0) (close _V0vanity_V0compiler_V0getopt_V20_k29) 'map)
    V_CALL(VGetArg(upenv, 26-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0getopt_V20_k29, env)}),
      _V0map);
 }
}
static void _V0vanity_V0compiler_V0getopt_V20_k27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0getopt_V20_k27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0getopt_V20_k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0getopt_V20_k27, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 25 0) (close _V0vanity_V0compiler_V0getopt_V20_k28) 'symbol->string)
    V_CALL(VGetArg(upenv, 25-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0getopt_V20_k28, env)}),
      _V0symbol___Gstring);
 }
}
static void _V0vanity_V0compiler_V0getopt_V20_k26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0getopt_V20_k26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0getopt_V20_k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0getopt_V20_k26, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 24 0) (close _V0vanity_V0compiler_V0getopt_V20_k27) 'symbol?)
    V_CALL(VGetArg(upenv, 24-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0getopt_V20_k27, env)}),
      _V0symbol_Q);
 }
}
static void _V0vanity_V0compiler_V0getopt_V20_k25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0getopt_V20_k25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0getopt_V20_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0getopt_V20_k25, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 23 0) (close _V0vanity_V0compiler_V0getopt_V20_k26) 'string?)
    V_CALL(VGetArg(upenv, 23-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0getopt_V20_k26, env)}),
      _V0string_Q);
 }
}
static void _V0vanity_V0compiler_V0getopt_V20_k24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0getopt_V20_k24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0getopt_V20_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0getopt_V20_k24, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 22 0) (close _V0vanity_V0compiler_V0getopt_V20_k25) 'string->symbol)
    V_CALL(VGetArg(upenv, 22-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0getopt_V20_k25, env)}),
      _V0string___Gsymbol);
 }
}
static void _V0vanity_V0compiler_V0getopt_V20_k23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0getopt_V20_k23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0getopt_V20_k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0getopt_V20_k23, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 21 0) (close _V0vanity_V0compiler_V0getopt_V20_k24) 'string->list)
    V_CALL(VGetArg(upenv, 21-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0getopt_V20_k24, env)}),
      _V0string___Glist);
 }
}
static void _V0vanity_V0compiler_V0getopt_V20_k22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0getopt_V20_k22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0getopt_V20_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0getopt_V20_k22, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 20 0) (close _V0vanity_V0compiler_V0getopt_V20_k23) 'memq)
    V_CALL(VGetArg(upenv, 20-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0getopt_V20_k23, env)}),
      _V0memq);
 }
}
static void _V0vanity_V0compiler_V0getopt_V20_k21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0getopt_V20_k21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0getopt_V20_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0getopt_V20_k21, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 19 0) (close _V0vanity_V0compiler_V0getopt_V20_k22) 'call-with-values)
    V_CALL(VGetArg(upenv, 19-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0getopt_V20_k22, env)}),
      _V0call__with__values);
 }
}
static void _V0vanity_V0compiler_V0getopt_V20_k20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0getopt_V20_k20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0getopt_V20_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0getopt_V20_k20, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 18 0) (close _V0vanity_V0compiler_V0getopt_V20_k21) '+)
    V_CALL(VGetArg(upenv, 18-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0getopt_V20_k21, env)}),
      _V0_P);
 }
}
static void _V0vanity_V0compiler_V0getopt_V20_k19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0getopt_V20_k19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0getopt_V20_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0getopt_V20_k19, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 17 0) (close _V0vanity_V0compiler_V0getopt_V20_k20) 'eq?)
    V_CALL(VGetArg(upenv, 17-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0getopt_V20_k20, env)}),
      _V0eq_Q);
 }
}
static void _V0vanity_V0compiler_V0getopt_V20_k18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0getopt_V20_k18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0getopt_V20_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0getopt_V20_k18, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 16 0) (close _V0vanity_V0compiler_V0getopt_V20_k19) 'values)
    V_CALL(VGetArg(upenv, 16-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0getopt_V20_k19, env)}),
      _V0values);
 }
}
static void _V0vanity_V0compiler_V0getopt_V20_k17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0getopt_V20_k17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0getopt_V20_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0getopt_V20_k17, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 15 0) (close _V0vanity_V0compiler_V0getopt_V20_k18) 'not)
    V_CALL(VGetArg(upenv, 15-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0getopt_V20_k18, env)}),
      _V0not);
 }
}
static void _V0vanity_V0compiler_V0getopt_V20_k16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0getopt_V20_k16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0getopt_V20_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0getopt_V20_k16, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 14 0) (close _V0vanity_V0compiler_V0getopt_V20_k17) 'cddr)
    V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0getopt_V20_k17, env)}),
      _V0cddr);
 }
}
static void _V0vanity_V0compiler_V0getopt_V20_k15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0getopt_V20_k15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0getopt_V20_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0getopt_V20_k15, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 13 0) (close _V0vanity_V0compiler_V0getopt_V20_k16) 'cadr)
    V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0getopt_V20_k16, env)}),
      _V0cadr);
 }
}
static void _V0vanity_V0compiler_V0getopt_V20_k14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0getopt_V20_k14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0getopt_V20_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0getopt_V20_k14, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 12 0) (close _V0vanity_V0compiler_V0getopt_V20_k15) 'pair?)
    V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0getopt_V20_k15, env)}),
      _V0pair_Q);
 }
}
static void _V0vanity_V0compiler_V0getopt_V20_k13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0getopt_V20_k13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0getopt_V20_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0getopt_V20_k13, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 11 0) (close _V0vanity_V0compiler_V0getopt_V20_k14) 'list)
    V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0getopt_V20_k14, env)}),
      _V0list);
 }
}
static void _V0vanity_V0compiler_V0getopt_V20_k12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0getopt_V20_k12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0getopt_V20_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0getopt_V20_k12, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 10 0) (close _V0vanity_V0compiler_V0getopt_V20_k13) 'caddr)
    V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0getopt_V20_k13, env)}),
      _V0caddr);
 }
}
static void _V0vanity_V0compiler_V0getopt_V20_k11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0getopt_V20_k11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0getopt_V20_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0getopt_V20_k11, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 9 0) (close _V0vanity_V0compiler_V0getopt_V20_k12) 'assoc)
    V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0getopt_V20_k12, env)}),
      _V0assoc);
 }
}
static void _V0vanity_V0compiler_V0getopt_V20_k10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0getopt_V20_k10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0getopt_V20_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0getopt_V20_k10, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 8 0) (close _V0vanity_V0compiler_V0getopt_V20_k11) 'null?)
    V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0getopt_V20_k11, env)}),
      _V0null_Q);
 }
}
static void _V0vanity_V0compiler_V0getopt_V20_k9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0getopt_V20_k9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0getopt_V20_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0getopt_V20_k9, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 7 0) (close _V0vanity_V0compiler_V0getopt_V20_k10) '<)
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0getopt_V20_k10, env)}),
      _V0_L);
 }
}
static void _V0vanity_V0compiler_V0getopt_V20_k8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0getopt_V20_k8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0getopt_V20_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0getopt_V20_k8, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 6 0) (close _V0vanity_V0compiler_V0getopt_V20_k9) 'string-length)
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0getopt_V20_k9, env)}),
      _V0string__length);
 }
}
static void _V0vanity_V0compiler_V0getopt_V20_k7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0getopt_V20_k7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0getopt_V20_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0getopt_V20_k7, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 5 0) (close _V0vanity_V0compiler_V0getopt_V20_k8) '=)
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0getopt_V20_k8, env)}),
      _V0_E);
 }
}
static void _V0vanity_V0compiler_V0getopt_V20_k6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0getopt_V20_k6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0getopt_V20_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0getopt_V20_k6, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 4 0) (close _V0vanity_V0compiler_V0getopt_V20_k7) 'substring)
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0getopt_V20_k7, env)}),
      _V0substring);
 }
}
static void _V0vanity_V0compiler_V0getopt_V20_k5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0getopt_V20_k5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0getopt_V20_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0getopt_V20_k5, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 3 0) (close _V0vanity_V0compiler_V0getopt_V20_k6) 'equal?)
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0getopt_V20_k6, env)}),
      _V0equal_Q);
 }
}
static void _V0vanity_V0compiler_V0getopt_V20_k4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0getopt_V20_k4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0getopt_V20_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0getopt_V20_k4, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 2 0) (close _V0vanity_V0compiler_V0getopt_V20_k5) 'string-ref)
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0getopt_V20_k5, env)}),
      _V0string__ref);
 }
}
static void _V0vanity_V0compiler_V0getopt_V20_k3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0getopt_V20_k3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0getopt_V20_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0getopt_V20_k3, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 1 0) (close _V0vanity_V0compiler_V0getopt_V20_k4) 'car)
    V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0getopt_V20_k4, env)}),
      _V0car);
 }
}
static void _V0vanity_V0compiler_V0getopt_V20_k2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0getopt_V20_k2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0getopt_V20_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0getopt_V20_k2, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 0 0) (close _V0vanity_V0compiler_V0getopt_V20_k3) 'cons)
    V_CALL(_var0, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0getopt_V20_k3, env)}),
      _V0cons);
 }
}
static void _V0vanity_V0compiler_V0getopt_V20_k1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0getopt_V20_k1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0getopt_V20_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0getopt_V20_k1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.make-import (close _V0vanity_V0compiler_V0getopt_V20_k2) (##string ##.string.223) (bruijn ##.x.219 0 0))
    V_CALL_FUNC(VMakeImport2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0getopt_V20_k2, env)}),
      VEncodePointer(&_V10_Dstring_D223.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0getopt_V20_lambda1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0getopt_V20_lambda1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0getopt_V20_lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0getopt_V20_lambda1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0getopt_V20_k1) (##string ##.string.224))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0getopt_V20_k1, env)}),
      VEncodePointer(&_V10_Dstring_D224.sym, VPOINTER_OTHER));
 }
}
VFunc _V0vanity_V0compiler_V0getopt_V20 = (VFunc)_V0vanity_V0compiler_V0getopt_V20_lambda1;
