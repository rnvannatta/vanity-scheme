#include "vscheme/vruntime.h"
#include "vscheme/vlibrary.h"
#include "vscheme/vinlines.h"
#include <stdarg.h>
struct { VBlob sym; char bytes[4]; } _V0ack = { { VSYMBOL, 4 }, "ack" };
static struct { VBlob sym; char bytes[14]; } _V10string_D13 = { { VSTRING, 14 }, "Hello, World!" };
VClosure _V40_V10sys_Dnext = { VCLOSURE, (VFunc)VNext2, NULL };
static void global_k1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 //printf("k1\n");
 if(argc != 1) {
  VError("Not enough arguments to global_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k1, runtime, upenv, 1, argc, _var0) {
  // (##sys.display-word (##intrinsic ##sys.next) (##string ##string.13) (bruijn ##x.1 0 0))
    V_CALL_FUNC(VDisplay2, NULL, runtime,
      VEncodePointer(&_V40_V10sys_Dnext, VPOINTER_CLOSURE),
      VEncodePointer(&_V10string_D13.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void global_k2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 //printf("k2\n");
 if(argc != 1) {
  VError("Not enough arguments to global_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k2, runtime, upenv, 1, argc, _var0) {
  // (##sys.newline (##intrinsic ##sys.next) (bruijn ##x.2 0 0))
    V_CALL_FUNC(VNewline2, NULL, runtime,
      VEncodePointer(&_V40_V10sys_Dnext, VPOINTER_CLOSURE),
      _var0);
 }
}
static void _V0ack_k3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 //printf("k3\n");
 if(argc != 1) {
  VError("Not enough arguments to _V0ack_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ack_k3, runtime, upenv, 1, argc, _var0) {
  // (ack (bruijn ##k.3 1 0) (bruijn ##x.6 0 0) 1)
V_CALL(VLookupGlobalVarFast("ack"), runtime,
      upenv->vars[0],
      _var0,
      VEncodeInt(1l));
 }
}
static void _V0ack_k6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 //printf("k6\n");
 if(argc != 1) {
  VError("Not enough arguments to _V0ack_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ack_k6, runtime, upenv, 1, argc, _var0) {
  // (ack (bruijn ##k.3 3 0) (bruijn ##x.7 2 0) (bruijn ##x.8 0 0))
V_CALL(VLookupGlobalVarFast("ack"), runtime,
      upenv->up->up->vars[0],
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0ack_k5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 //printf("k5\n");
 if(argc != 1) {
  VError("Not enough arguments to _V0ack_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ack_k5, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (ack (close _V0ack_k6) (bruijn m 2 1) (bruijn ##x.9 0 0))
V_CALL(VLookupGlobalVarFast("ack"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0ack_k6, env)}),
      upenv->up->vars[1],
      _var0);
 }
}
static void _V0ack_k4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 //printf("k4\n");
 if(argc != 1) {
  VError("Not enough arguments to _V0ack_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ack_k4, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##sys.- (close _V0ack_k5) (bruijn n 1 2) 1)
    V_CALL_FUNC(VSub2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0ack_k5, env)}),
      upenv->vars[2],
      VEncodeInt(1l));
 }
}
static void _V0ack_lambda1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 //printf("lambda1\n");
 if(argc != 3) {
  VError("Not enough arguments to _V0ack_lambda1, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  //printf("%d\n", argc);
 V_GC_CHECK2_VARARGS((VFunc)_V0ack_lambda1, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##sys.eq? (bruijn m 0 1) 0) (##sys.+ (bruijn ##k.3 0 0) (bruijn n 0 2) 1) (if (##inline ##sys.eq? (bruijn n 0 2) 0) (##sys.- (close _V0ack_k3) (bruijn m 0 1) 1) (##sys.- (close _V0ack_k4) (bruijn m 0 1) 1)))
if(VDecodeBool(
VInlineEq(
        _var1,
        VEncodeInt(0l)))) {
    V_CALL_FUNC(VAdd2, NULL, runtime,
      _var0,
      _var2,
      VEncodeInt(1l));
} else {
if(VDecodeBool(
VInlineEq(
        _var2,
        VEncodeInt(0l)))) {
    V_CALL_FUNC(VSub2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0ack_k3, env)}),
      _var1,
      VEncodeInt(1l));
} else {
    V_CALL_FUNC(VSub2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0ack_k4, env)}),
      _var1,
      VEncodeInt(1l));
}
}
 }
}
static void global_k8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 //printf("k8\n");
 if(argc != 1) {
  VError("Not enough arguments to global_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k8, runtime, upenv, 1, argc, _var0) {
  // (##sys.display-word (##intrinsic ##sys.next) (bruijn ##x.10 1 0) (bruijn ##x.11 0 0))
    V_CALL_FUNC(VDisplay2, NULL, runtime,
      VEncodePointer(&_V40_V10sys_Dnext, VPOINTER_CLOSURE),
      upenv->vars[0],
      _var0);
 }
}
static void global_k7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 //printf("k7\n");
 if(argc != 1) {
  VError("Not enough arguments to global_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k7, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##sys.stdout->port (close global_k8))
    V_CALL_FUNC(VStdoutPort, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k8, env)}));
 }
}
static void global_k9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 //printf("k9\n");
 if(argc != 1) {
  VError("Not enough arguments to global_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)global_k9, runtime, upenv, 1, argc, _var0) {
  // (##sys.newline (##intrinsic ##sys.next) (bruijn ##x.12 0 0))
    V_CALL_FUNC(VNewline2, NULL, runtime,
      VEncodePointer(&_V40_V10sys_Dnext, VPOINTER_CLOSURE),
      _var0);
 }
}
void toplevel0() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC(VStdoutPort, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k1, env)}));
}
void toplevel1() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC(VStdoutPort, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k2, env)}));
}
void toplevel2() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)VNext2,NULL)}),
      VEncodePointer(&_V0ack.sym, VPOINTER_OTHER),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0ack_lambda1, env)})
    );
}
void toplevel3() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
V_CALL(VLookupGlobalVarFast("ack"), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k7, env)}),
      VEncodeInt(3l),
      VEncodeInt(9l));
}
void toplevel4() {
    VEnv * env = NULL;
    VRuntime * runtime = NULL;
    V_CALL_FUNC(VStdoutPort, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)global_k9, env)}));
}
int main(int argc, char ** argv) {
  void (*toplevels[])() = {
    toplevel0,    toplevel1,    toplevel2,    toplevel3,    toplevel4,
  };
  VArgc = argc; VArgv = argv;
  return VStart(sizeof toplevels / sizeof *toplevels, toplevels);
}
