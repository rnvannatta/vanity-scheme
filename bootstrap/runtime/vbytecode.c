#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

#include "vscheme/vruntime.h"
#include "vscheme/vlibrary.h"
#include "wacky_private.h"

void VEvalVasmLambdaTrampoline(V_CORE_ARGS, ...);
void VEvalVasmForeignLambda(V_CORE_ARGS, ...);
void VEvalVasm_Impl(VRuntime * runtime, VVector * tape, int pc, VEnv * env) {
  VWORD stack[256];
  int stackptr = 0;
  for(;;) {
    if(pc < 0 || tape->len <= pc)
      VErrorC(runtime, "eval-vasm: program counter out of bounds~N");
    VPair * ins = VCheckedDecodePair2(runtime, tape->arr[pc], "eval-vasm: malformed instruction");
    char const * name = VCheckedDecodeSymbol2(runtime, ins->first, "eval-vasm: malformed instruction")->buf;
    //printf("%s\n", name);
    if(!strcmp(name, "lambda")) {
      VPair * data = VCheckedDecodePair2(runtime, ins->rest, "eval-vasm: malformed lambda");
      int req_argc = VCheckedDecodeInt2(runtime, data->first, "eval-vasm: malformed lambda");
      if(env->num_vars != req_argc)
        VErrorC(runtime, "not enough arguments to lambda: expected ~D, got ~D~N", req_argc, env->num_vars);
    }
    else if(!strcmp(name, "lambda+")) {
      VPair * data = VCheckedDecodePair2(runtime, ins->rest, "eval-vasm: malformed lambda");
      int req_argc = VCheckedDecodeInt2(runtime, data->first, "eval-vasm: malformed lambda");
      if(env->num_vars < req_argc)
        VErrorC(runtime, "not enough arguments to lambda: expected ~D or more, got ~D~N", req_argc, env->num_vars);
      if(env->num_vars == req_argc) {
        VEnv * newenv = alloca(sizeof(VEnv)+sizeof(VWORD[req_argc+1]));
        VInitEnv(newenv, req_argc+1, req_argc+1, env->up);
        memcpy(newenv->vars, env->vars, sizeof(VWORD[req_argc]));
        newenv->vars[req_argc] = VNULL;
        env = newenv;
      } else {
        int nvars = env->num_vars;
        env->num_vars = req_argc+1;
        VWORD lst = VNULL;
        for(int i = nvars-1; i >= req_argc; i--) {
          VPair * p = alloca(sizeof(VPair));
          *p = VMakePair(env->vars[i], lst);
          lst = VEncodePair(p);
        }
        env->vars[req_argc] = lst;
      }
    }
    else if(!strcmp(name, "case-lambda")) {
      VPair * data1 = VCheckedDecodePair2(runtime, ins->rest, "eval-vasm: malformed case-lambda");
      VPair * data2 = VCheckedDecodePair2(runtime, data1->rest, "eval-vasm: malformed case-lambda");
      int req_argc = VCheckedDecodeInt2(runtime, data1->first, "eval-vasm: malformed case-lambda");
      int fail = VCheckedDecodeInt2(runtime, data2->first, "eval-vasm: malformed case-lambda");
      if(env->num_vars != req_argc)
        pc += fail;
    }
    else if(!strcmp(name, "case-lambda+")) {
      VPair * data1 = VCheckedDecodePair2(runtime, ins->rest, "eval-vasm: malformed case-lambda");
      VPair * data2 = VCheckedDecodePair2(runtime, data1->rest, "eval-vasm: malformed case-lambda");
      int req_argc = VCheckedDecodeInt2(runtime, data1->first, "eval-vasm: malformed case-lambda");
      int fail = VCheckedDecodeInt2(runtime, data2->first, "eval-vasm: malformed case-lambda");
      if(env->num_vars < req_argc) {
        pc += fail;
      } else {
        if(env->num_vars == req_argc) {
          VEnv * newenv = alloca(sizeof(VEnv)+sizeof(VWORD[req_argc+1]));
          VInitEnv(newenv, req_argc+1, req_argc+1, env->up);
          memcpy(newenv->vars, env->vars, sizeof(VWORD[req_argc]));
          newenv->vars[req_argc] = VNULL;
        } else {
          int nvars = env->num_vars;
          env->num_vars = req_argc+1;
          VWORD lst = VNULL;
          for(int i = nvars-1; i >= req_argc; i--) {
            VPair * p = alloca(sizeof(VPair));
            *p = VMakePair(env->vars[i], lst);
            lst = VEncodePair(p);
          }
          env->vars[req_argc] = lst;
        }
      }
    }
    else if(!strcmp(name, "case-lambda-error")) {
      VPair * data1 = VCheckedDecodePair2(runtime, ins->rest, "eval-vasm: malformed case-lambda");
      VPair * data2 = VCheckedDecodePair2(runtime, data1->rest, "eval-vasm: malformed case-lambda");
      VWORD name = data1->first;
      VWORD str = data2->first;
      VErrorC(runtime, "Not enough arguments to ~A, got ~D~N~A", name, env->num_vars, str);
    }
    else if(!strcmp(name, "close")) {
      // need to get closure pc
      VPair * data = VCheckedDecodePair2(runtime, ins->rest, "eval-vasm: malformed close");
      int closure_pc = VCheckedDecodeInt2(runtime, data->first, "eval-vasm: malformed close");
      // then make a dummy closure to hold env
      VEnv * closure_env = alloca(sizeof(VEnv) + sizeof(VWORD[2]));
      VInitEnv(closure_env, 2, 2, env);
      closure_env->vars[0] = VEncodePointer(tape, VPOINTER_OTHER);
      closure_env->vars[1] = VEncodeInt(closure_pc);
      //then push a closure of the trampoline and that env on the stack
      VClosure * closure = alloca(sizeof(VClosure));
      *closure = VMakeClosure2(VEvalVasmLambdaTrampoline, closure_env);
      stack[stackptr++] = VEncodeClosure(closure);
    }
    else if(!strcmp(name, "foreign-function")) {
      // need to get closure pc
      VPair * data = VCheckedDecodePair2(runtime, ins->rest, "eval-vasm: malformed foreign-function");
      int func_pc = VCheckedDecodeInt2(runtime, data->first, "eval-vasm: malformed foreign-function");
      VWORD func = tape->arr[func_pc];

      VPair * data_decl = VCheckedDecodePair2(runtime, func, "eval-vasm: malformed foreign-function");
      VPair * data_lang = VCheckedDecodePair2(runtime, data_decl->rest, "eval-vasm: malformed foreign-function");
      VPair * data_ret = VCheckedDecodePair2(runtime, data_lang->rest, "eval-vasm: malformed foreign-function");
      VPair * data_name = VCheckedDecodePair2(runtime, data_ret->rest, "eval-vasm: malformed foreign-function");

      void * lookup = VLoadFunction(runtime, data_name->first);
      VWORD foreign_func = VEncodeForeignPointer(lookup);

      VEnv * closure_env = alloca(sizeof(VEnv) + sizeof(VWORD[2]));
      VInitEnv(closure_env, 3, 3, NULL);
      closure_env->vars[0] = foreign_func;
      closure_env->vars[1] = data_ret->first;
      closure_env->vars[2] = data_name->rest;
      VClosure * closure = alloca(sizeof(VClosure));
      *closure = VMakeClosure2(VEvalVasmForeignLambda, closure_env);
      stack[stackptr++] = VEncodeClosure(closure);
    }
#if 0
    else if(!strcmp(name, "intrinsic")) {
      // need to get closure pc
      VPair * data = VCheckedDecodePair2(runtime, ins->rest, "eval-vasm: malformed intrinsic");
      int func_pc = VCheckedDecodeInt2(runtime, data->first, "eval-vasm: malformed intrinsic");
      VWORD func = tape->arr[func_pc];

      VPair * data_decl = VCheckedDecodePair2(runtime, func, "eval-vasm: malformed intrinsic");
      VPair * data_name = VCheckedDecodePair2(runtime, data_decl->rest, "eval-vasm: malformed intrinsic");

      void * intrin = VLoadFunction(runtime, data_name->first);

      VClosure * closure = alloca(sizeof(VClosure));
      *closure = VMakeClosure2((VFunc)intrin, NULL);
      stack[stackptr++] = VEncodeClosure(closure);
    }
#endif
    else if(!strcmp(name, "push-set!")) {
      VClosure * closure = alloca(sizeof(VClosure));
      *closure = VMakeClosure2((VFunc)VSetEnvVar2, env);
      stack[stackptr++] = VEncodeClosure(closure);
    }
    else if(!strcmp(name, "bruijn")) {
      VPair * data1 = VCheckedDecodePair2(runtime, ins->rest, "eval-vasm: malformed bruijn");
      VPair * data2 = VCheckedDecodePair2(runtime, data1->rest, "eval-vasm: malformed bruijn");
      int up = VCheckedDecodeInt2(runtime, data1->first, "eval-vasm: malformed bruijn");
      int right = VCheckedDecodeInt2(runtime, data2->first, "eval-vasm: malformed bruijn");
      if(up < 0 || right < 0)
        VErrorC(runtime, "eval-vasm: malformed bruijn~N");
      
      VEnv * tmp = env;
      while(up--)
        tmp = tmp->up;
      if(right >= tmp->num_vars)
        VErrorC(runtime, "eval-vasm: variable access out of bounds ~D ~D~N", right, tmp->num_vars);
      
      stack[stackptr++] = tmp->vars[right];
    }
    else if(!strcmp(name, "lookup")) {
      VPair * data = VCheckedDecodePair2(runtime, ins->rest, "eval-vasm: malformed lookup");
      VBlob * sym = VCheckedDecodeSymbol2(runtime, data->first, "eval-vasm: malformed lookup");
      stack[stackptr++] = VLookupGlobalVarFast2(runtime, sym->buf);
    }
    else if(!strcmp(name, "intrinsic")) {
      VPair * data = VCheckedDecodePair2(runtime, ins->rest, "eval-vasm: malformed intrinsic");
      stack[stackptr++] = data->first;
    }
    else if(!strcmp(name, "push")) {
      VPair * data = VCheckedDecodePair2(runtime, ins->rest, "eval-vasm: malformed push");
      stack[stackptr++] = data->first;
    }
    else if(!strcmp(name, "call")) {
      VPair * data = VCheckedDecodePair2(runtime, ins->rest, "eval-vasm: malformed call");
      int nargs = VCheckedDecodeInt2(runtime, data->first, "eval-vasm: malformed call");
      if(nargs <= 0)
        VErrorC(runtime, "eval-vasm: malformed call: need more than zero args~N");
      int start = stackptr - nargs;
      if(start < 0)
        VErrorC(runtime, "eval-vasm: not enough args for call, have ~D, expecting ~D~N", stackptr, nargs);
      VClosure * f = VDecodeClosureApply2(runtime, stack[start]);
      VEnvironment * environ = alloca(sizeof(VEnvironment)+sizeof(VWORD[nargs-1]));
      *environ = (VEnvironment){
        .base = { .tag = VENVIRONMENT },
        .runtime = runtime,
        .static_chain = f->env,
        .argc = nargs-1,
      };
      memcpy(environ->argv, &stack[start+1], sizeof(VWORD[nargs-1]));
      VSysApply(f->func, environ);
    }
    else if(!strcmp(name, "letrec-begin")) {
      VPair * data = VCheckedDecodePair2(runtime, ins->rest, "eval-vasm: malformed letrec-begin");
      int numvars = VCheckedDecodeInt2(runtime, data->first, "eval-vasm: malformed letrec-end");

      VEnv * newenv = alloca(sizeof(VEnv)+sizeof(VWORD[numvars]));
      VInitEnv(newenv, numvars, numvars, env);
      for(int i = 0; i < numvars; i++) newenv->vars[i] = VFALSE;
      env = newenv;
    }
    else if(!strcmp(name, "letrec-end")) {
      int numvars = env->num_vars;
      int start = stackptr - numvars;
      if(start < 0)
        VErrorC(runtime, "eval-vasm: not enough variables for letrec, have ~D, expecting ~D~N", stackptr, numvars);
      memcpy(env->vars, &stack[start], sizeof(VWORD[numvars]));
      stackptr = start;
    } else if(!strcmp(name, "bf")) {
      if(stackptr <= 0) VErrorC(runtime, "eval-vasm: no variables to pop for bf\n");
      VWORD p = stack[--stackptr];
      if(!VDecodeBool(p)) {
        VPair * data = VCheckedDecodePair2(runtime, ins->rest, "eval-vasm: malformed bf");
        int skip = VCheckedDecodeInt2(runtime, data->first, "eval-vasm: malformed bf");
        pc += skip;
      }
    } else {
      VErrorC(runtime, "eval-vasm: unknown instruction:~S~N", name);
    }
    pc++;
  }
}

// up[0] : tape
// up[1] : pc
// up[2] : a dummy closure containing the closure's env
void VEvalVasmLambdaTrampoline(V_CORE_ARGS, ...) {
  va_list argv;
  va_start(argv, argc);
  V_GC_CHECK2_LIST(VEvalVasmLambdaTrampoline, runtime, statics, argc, argv) {
    VWORD tape = statics->vars[0];
    VWORD pc = statics->vars[1];
    VEnv * upenv = statics->up;

    VEnv * env = alloca(sizeof(VEnv) + sizeof(VWORD[argc]));
    *env = (VEnv){ .base = { .tag = VENV }, .num_vars = argc, .var_len = argc, .up = upenv };
    for(int i = 0; i < argc; i++) {
      env->vars[i] = va_arg(argv, VWORD);
    }
    va_end(argv);

    VEvalVasm_Impl(runtime, VCheckedDecodeVector2(runtime, tape, "eval-lambda-trampoline"), VCheckedDecodeInt2(runtime, pc, "eval-lambda-trampoline"), env);
  }
}

void VEvalVasmForeignLambda(V_CORE_ARGS, ...) {
  V_ARG_MIN3(runtime, "eval-vasm-foreign-lambda", 1, argc);
  va_list argv;
  va_start(argv, argc);
  V_GC_CHECK2_LIST(VEvalVasmForeignLambda, runtime, statics, argc, argv) {
    VWORD k = va_arg(argv, VWORD);

    VWORD func = statics->vars[0];
    VWORD ret = statics->vars[1];
    VWORD arg_types = statics->vars[2];

    VPair args_root = VMakePair(VNULL, VNULL);
    VPair * args_cur = &args_root;
    for(int i = 1; i < argc; i++) {
      VPair * pair = alloca(sizeof(VPair));
      *pair = VMakePair(va_arg(argv, VWORD), VNULL);
      args_cur->rest = VEncodePair(pair);
      args_cur = pair;
    }
    va_end(argv);

    V_CALL_FUNC(VApplyForeignFunctionImpl, NULL, runtime, k, func, ret, arg_types, args_root.rest);
  }
}

static void VEvalVasmToplevelImpl(V_CORE_ARGS, VWORD k, VWORD tape, VWORD pc) {
  V_ARG_CHECK3(runtime, "eval-vasm-toplevel", 3, argc);
  V_GC_CHECK2_VARARGS((VFunc)VEvalVasmToplevelImpl, runtime, statics, 3, argc, k, tape, pc) {
    struct { VEnv env; VWORD word; } container = {
      .env = { .base = { .tag = VENV }, .num_vars = 1, .var_len = 1, .up = NULL },
      .word = k
    };
    VEvalVasm_Impl(runtime, VCheckedDecodeVector2(runtime, tape, "eval-vasm"), VCheckedDecodeInt2(runtime, pc, "eval-vasm"), &container.env);
  }
}
void (*VEvalVasmToplevel)(V_CORE_ARGS, VWORD k, VWORD tape, VWORD pc) = VEvalVasmToplevelImpl;

static void VMakeVasmLambdaImpl(V_CORE_ARGS, VWORD k, VWORD tape, VWORD pc) {
  V_ARG_CHECK3(runtime, "make-vasm-lambda", 3, argc);
  V_GC_CHECK2_VARARGS((VFunc)VEvalVasmToplevelImpl, runtime, statics, 3, argc, k, tape, pc) {
    // make a dummy closure to hold env
    VEnv * closure_env = alloca(sizeof(VEnv) + sizeof(VWORD[2]));
    VInitEnv(closure_env, 2, 2, NULL);
    closure_env->vars[0] = tape;
    closure_env->vars[1] = pc;
    //then push a closure of the trampoline and that env on the stack
    VClosure * closure = alloca(sizeof(VClosure));
    *closure = VMakeClosure2(VEvalVasmLambdaTrampoline, closure_env);
    V_CALL(k, runtime, VEncodeClosure(closure));
  }
}
void (*VMakeVasmLambda)(V_CORE_ARGS, VWORD k, VWORD tape, VWORD pc) = VMakeVasmLambdaImpl;
