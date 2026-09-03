#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

#include "vscheme/vruntime.h"
#include "vscheme/vlibrary.h"
#include "wacky_private.h"

void VEvalVasmLambdaTrampoline(V_CORE_ARGS, ...);
void VEvalVasmForeignLambda(V_CORE_ARGS, ...);
V_DECLARE_FUNC(VEvalVasmForeignVariable, k, val);
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
      if(VIsEq(data->first, VFALSE)) {
        env = env->up;
      } else {
        int req_argc = VCheckedDecodeInt2(runtime, data->first, "eval-vasm: malformed lambda");
        if(env->num_vars != req_argc)
          VErrorC(runtime, "not enough arguments to lambda: expected ~D, got ~D~N", req_argc, env->num_vars);
      }
    }
    else if(!strcmp(name, "lambda+")) {
      VPair * data = VCheckedDecodePair2(runtime, ins->rest, "eval-vasm: malformed lambda");
      int req_argc = VCheckedDecodeInt2(runtime, data->first, "eval-vasm: malformed lambda");
      if(env->num_vars < req_argc)
        VErrorC(runtime, "not enough arguments to lambda: expected ~D or more, got ~D~N", req_argc, env->num_vars);
      if(env->num_vars == req_argc) {
        VEnv * newenv = VAlloca(runtime, sizeof(VEnv)+sizeof(VWORD[req_argc+1]));
        VInitEnv(newenv, req_argc+1, req_argc+1, env->up);
        memcpy(newenv->vars, env->vars, sizeof(VWORD[req_argc]));
        newenv->vars[req_argc] = VNULL;
        env = newenv;
      } else {
        int nvars = env->num_vars;
        env->num_vars = req_argc+1;
        VWORD lst = VNULL;
        for(int i = nvars-1; i >= req_argc; i--) {
          VPair * p = VAlloca(runtime, sizeof(VPair));
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
          VEnv * newenv = VAlloca(runtime, sizeof(VEnv)+sizeof(VWORD[req_argc+1]));
          VInitEnv(newenv, req_argc+1, req_argc+1, env->up);
          memcpy(newenv->vars, env->vars, sizeof(VWORD[req_argc]));
          newenv->vars[req_argc] = VNULL;
        } else {
          int nvars = env->num_vars;
          env->num_vars = req_argc+1;
          VWORD lst = VNULL;
          for(int i = nvars-1; i >= req_argc; i--) {
            VPair * p = VAlloca(runtime, sizeof(VPair));
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

      VEnv * closure_env = env;
      if(!VIsEq(data->rest, VNULL)) {
        VPair * path_node = VCheckedDecodePair2(runtime, data->rest, "eval-vasm: malformed close");
        VWORD path = path_node->first;
        char * name = VCheckedDecodeString2(runtime, path, "eval-vasm: malformed close")->buf;

        // wrong mangle for FindStaticEnv, close is currently getting the static var mangle, not the library mangle
        VEnv ** place = VFindStaticEnv(name);
        if(!place) VErrorC(runtime, "eval-vasm: tried to make a closure over an unregistered library: ~A", path);
        closure_env = *place;
      }

      // then make a dummy closure to hold env
      VEnv * trampoline_env = VAlloca(runtime, sizeof(VEnv) + sizeof(VWORD[2]));
      VInitEnv(trampoline_env, 2, 2, closure_env);
      trampoline_env->vars[0] = VEncodePointer(tape, VPOINTER_OTHER);
      trampoline_env->vars[1] = VEncodeInt(closure_pc);
      //then push a closure of the trampoline and that env on the stack
      VClosure * closure = VAlloca(runtime, sizeof(VClosure));
      *closure = VMakeClosure2(VEvalVasmLambdaTrampoline, trampoline_env);
      stack[stackptr++] = VEncodeClosure(closure);
    }
    else if(!strcmp(name, "foreign-function")) {
      // need to get closure pc
      VPair * data = VCheckedDecodePair2(runtime, ins->rest, "eval-vasm: malformed foreign-function");
      int func_pc = VCheckedDecodeInt2(runtime, data->first, "eval-vasm: malformed foreign-function");
      VWORD func = tape->arr[func_pc];

      VPair * data_decl = VCheckedDecodePair2(runtime, func, "eval-vasm: malformed foreign-function");
      char const * decl_kind = VCheckedDecodeSymbol2(runtime, data_decl->first, "eval-vasm: malformed foreign-function")->buf;
      VPair * data_lang = VCheckedDecodePair2(runtime, data_decl->rest, "eval-vasm: malformed foreign-function");
      VClosure * closure = VAlloca(runtime, sizeof(VClosure));
      if(!strcmp(decl_kind, "declare-foreign-variable")) {
        // (declare-foreign-variable lang enc-tag dec-tag name const?)
        // dec-tag is #f for const variables
        VPair * data_enc = VCheckedDecodePair2(runtime, data_lang->rest, "eval-vasm: malformed foreign-variable");
        VPair * data_dec = VCheckedDecodePair2(runtime, data_enc->rest, "eval-vasm: malformed foreign-variable");
        VPair * data_name = VCheckedDecodePair2(runtime, data_dec->rest, "eval-vasm: malformed foreign-variable");

        // dlsym also resolves data symbols to their address
        void * lookup = VLoadFunction(runtime, data_name->first);

        VEnv * closure_env = VAlloca(runtime, sizeof(VEnv) + sizeof(VWORD[3]));
        VInitEnv(closure_env, 3, 3, NULL);
        closure_env->vars[0] = VEncodeForeignPointer(lookup);
        closure_env->vars[1] = data_enc->first;
        closure_env->vars[2] = data_dec->first;
        *closure = VMakeClosure2((VFunc)VEvalVasmForeignVariable, closure_env);
      } else {
        VPair * data_ret = VCheckedDecodePair2(runtime, data_lang->rest, "eval-vasm: malformed foreign-function");
        VPair * data_name = VCheckedDecodePair2(runtime, data_ret->rest, "eval-vasm: malformed foreign-function");

        void * lookup = VLoadFunction(runtime, data_name->first);
        VWORD foreign_func = VEncodeForeignPointer(lookup);

        VEnv * closure_env = VAlloca(runtime, sizeof(VEnv) + sizeof(VWORD[3]));
        VInitEnv(closure_env, 3, 3, NULL);
        closure_env->vars[0] = foreign_func;
        closure_env->vars[1] = data_ret->first;
        closure_env->vars[2] = data_name->rest;
        *closure = VMakeClosure2(VEvalVasmForeignLambda, closure_env);
      }
      stack[stackptr++] = VEncodeClosure(closure);
    }
    else if(!strcmp(name, "push-set!")) {
      VClosure * closure = VAlloca(runtime, sizeof(VClosure));
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
      VEnvironment * environ = VAlloca(runtime, sizeof(VEnvironment)+sizeof(VWORD[nargs-1]));
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

      VEnv * newenv = VAlloca(runtime, sizeof(VEnv)+sizeof(VWORD[numvars]));
      VInitEnv(newenv, numvars, numvars, env);
      for(int i = 0; i < numvars; i++) newenv->vars[i] = VFALSE;
      env = newenv;

      if(!VIsEq(data->rest, VNULL)) {
        VPair * path_node = VCheckedDecodePair2(runtime, data->rest, "eval-vasm: malformed letrec-begin");
        char * name = VCheckedDecodeString2(runtime, path_node->first, "eval-vasm: malformed letrec-begin")->buf;

        VEnv ** envplace = malloc(sizeof(VEnv*));
        *envplace = env;
        VRegisterStaticEnv(name, envplace);
        VSetStaticEnvCleanup(name);
      }
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

    VEnv * env = VAlloca(runtime, sizeof(VEnv) + sizeof(VWORD[argc]));
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
      VPair * pair = VAlloca(runtime, sizeof(VPair));
      *pair = VMakePair(va_arg(argv, VWORD), VNULL);
      args_cur->rest = VEncodePair(pair);
      args_cur = pair;
    }
    va_end(argv);

    V_CALL_FUNC(VApplyForeignFunctionImpl, NULL, runtime, k, func, ret, arg_types, args_root.rest);
  }
}

// extern variable shims: 0 scheme args reads the C variable, 1 arg writes it.
// closure env is {var-ptr, enc-tag, dec-tag}, dec-tag #f meaning const.
// tags are the same symbols the compiled path's encoder/decoder tables use,
// except pointer setters only take foreign-pointer: the usual argument
// decoders hand out blob interiors, and unlike a call argument a stored
// pointer outlives the next gc, which moves blobs
V_BEGIN_FUNC_RANGE(VEvalVasmForeignVariable, "foreign-variable", 1, 2, k, val)
  void * ptr = (void*)VDecodePointer(statics->vars[0]);
  if(argc == 2) {
    VWORD dec_tag = statics->vars[2];
    if(VIsEq(dec_tag, VFALSE))
      VErrorC(runtime, "foreign-variable: cannot write const variable~N");
    char const * dec = VCheckedDecodeSymbol2(runtime, dec_tag, "foreign-variable")->buf;
    if(!strcmp(dec, "_Bool")) *(_Bool*)ptr = VCheckedDecodeBool2(runtime, val, "foreign-variable");
    else if(!strcmp(dec, "char")) *(char*)ptr = VCheckedDecodeChar2(runtime, val, "foreign-variable");
    else if(!strcmp(dec, "signed-char")) *(signed char*)ptr = VCheckedDecodeSignedChar2(runtime, val, "foreign-variable");
    else if(!strcmp(dec, "unsigned-char")) *(unsigned char*)ptr = VCheckedDecodeUnsignedChar2(runtime, val, "foreign-variable");
    else if(!strcmp(dec, "short")) *(short*)ptr = VCheckedDecodeShort2(runtime, val, "foreign-variable");
    else if(!strcmp(dec, "unsigned-short")) *(unsigned short*)ptr = VCheckedDecodeUnsignedShort2(runtime, val, "foreign-variable");
    else if(!strcmp(dec, "int")) *(int*)ptr = VCheckedDecodeInt2(runtime, val, "foreign-variable");
    else if(!strcmp(dec, "unsigned-int")) *(unsigned*)ptr = VCheckedDecodeInt2(runtime, val, "foreign-variable");
    else if(!strcmp(dec, "float")) *(float*)ptr = VCheckedDecodeNumber2(runtime, val, "foreign-variable");
    else if(!strcmp(dec, "double")) *(double*)ptr = VCheckedDecodeNumber2(runtime, val, "foreign-variable");
    else if(!strcmp(dec, "foreign-pointer")) *(void**)ptr = VCheckedDecodeForeignPointer2(runtime, val, "foreign-variable");
    else if(!strcmp(dec, "VWORD")) *(VWORD*)ptr = VCheckedDecodeVWORD2(runtime, val, "foreign-variable");
    else VErrorC(runtime, "foreign-variable: unknown type: ~Z~N", dec);
    V_CALL(k, runtime, VVOID);
  } else {
    char const * enc = VCheckedDecodeSymbol2(runtime, statics->vars[1], "foreign-variable")->buf;
    VWORD ret;
    if(!strcmp(enc, "_Bool")) ret = VEncodeBool(*(_Bool*)ptr);
    else if(!strcmp(enc, "char")) ret = VEncodeChar(*(char*)ptr);
    else if(!strcmp(enc, "signed-char")) ret = VEncodeInt(*(signed char*)ptr);
    else if(!strcmp(enc, "unsigned-char")) ret = VEncodeInt(*(unsigned char*)ptr);
    else if(!strcmp(enc, "short")) ret = VEncodeInt(*(short*)ptr);
    else if(!strcmp(enc, "unsigned-short")) ret = VEncodeInt(*(unsigned short*)ptr);
    else if(!strcmp(enc, "int")) ret = VEncodeInt(*(int*)ptr);
    else if(!strcmp(enc, "unsigned-int")) ret = VEncodeInt(*(unsigned*)ptr);
    else if(!strcmp(enc, "float")) ret = VEncodeDouble(*(float*)ptr);
    else if(!strcmp(enc, "double")) ret = VEncodeDouble(*(double*)ptr);
    else if(!strcmp(enc, "void-pointer")) ret = VEncodeForeignPointer(*(void**)ptr);
    else if(!strcmp(enc, "VWORD")) ret = *(VWORD*)ptr;
    else { VErrorC(runtime, "foreign-variable: unknown type: ~Z~N", enc); ret = VVOID; }
    V_CALL(k, runtime, ret);
  }
V_END_FUNC

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
    VEnv * closure_env = VAlloca(runtime, sizeof(VEnv) + sizeof(VWORD[2]));
    VInitEnv(closure_env, 2, 2, NULL);
    closure_env->vars[0] = tape;
    closure_env->vars[1] = pc;
    //then push a closure of the trampoline and that env on the stack
    VClosure * closure = VAlloca(runtime, sizeof(VClosure));
    *closure = VMakeClosure2(VEvalVasmLambdaTrampoline, closure_env);
    V_CALL(k, runtime, VEncodeClosure(closure));
  }
}
void (*VMakeVasmLambda)(V_CORE_ARGS, VWORD k, VWORD tape, VWORD pc) = VMakeVasmLambdaImpl;
