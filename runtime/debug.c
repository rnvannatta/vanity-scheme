#include "vscheme/vhash.h"
#include "vscheme/vruntime.h"
#include "vruntime_private.h"
#define HASHTABLE_IMPL
#include "hashtable.h"

static inline uint64_t ptrhash(void const * dat, size_t size, uint64_t seed) {
  return vhash64_quick(*(uint64_t*)dat);
}
static hashtable(VFunc, VWORD) proc_debugtable = hashtable_create(&proc_debugtable, ptrhash, 0.75, 0);

void VRegisterProcDebugInfo(VFunc f, VWORD v) {
  hashtable_set(&proc_debugtable, f, v);
}

V_BEGIN_FUNC_BASIC(VGetProcDebugInfo, "##get-proc-debug-info", 1, proc)
  VClosure * c = VCheckedDecodeClosure2(runtime, proc, "##get-proc-debug-info");
  VWORD * ret = hashtable_at(&proc_debugtable, c->func);
  return ret ? *ret : VFALSE;
}

V_BEGIN_FUNC_BASIC(VEqHash, "##eq-hash", 1, x)
  uint64_t u = VBits(x);
  return VEncodeInt((uint32_t)vhash64_quick(u));
}

V_BEGIN_FUNC_BASIC(VHashCombine, "##hash-combine", 2, x, y)
  uint64_t a = VBits(x);
  uint64_t b = VBits(y);
  return VEncodeInt((uint32_t)vhash64(a, b));
}

V_BEGIN_FUNC_BASIC(VHashBlob, "##hash-blob", 1, x)
  VBlob * blob = VCheckedDecodeBlob2(runtime, x, "##hash-blob");
  uint64_t seed = blob->base.tag;
  return VEncodeInt((uint32_t)vhash(blob->buf, blob->len, seed));
}

V_BEGIN_FUNC_BASIC(VClosureRef, "##closure-ref", 3, proc, _i, _j)
  VClosure * c = VCheckedDecodeClosure2(runtime, proc, "##closure-ref");
  int i = VCheckedDecodeInt2(runtime, _i, "##closure-ref");
  int j = VCheckedDecodeInt2(runtime, _j, "##closure-ref");
  VEnv * e = c->env;
  while(e && i) {
    e = e->up;
    i--;
  }

  if(i == 0 && e && j < e->num_vars)
    return e->vars[j];

  VErrorC(runtime, "##closure-ref: indices out of range: ~A ~A", _i, _j);
  return VVOID;
}

V_BEGIN_FUNC_BASIC(VClosureSet, "##closure-set!", 4, proc, _i, _j, val)
  VClosure * c = VCheckedDecodeClosure2(runtime, proc, "##closure-set!");
  int i = VCheckedDecodeInt2(runtime, _i, "##closure-set!");
  int j = VCheckedDecodeInt2(runtime, _j, "##closure-set!");
  VEnv * e = c->env;
  while(e && i) {
    e = e->up;
    i--;
  }

  if(i == 0 && e && j < e->num_vars) {
    e->vars[j] = val;
    VTrackMutation(runtime, e, &e->vars[j], val);
    return VVOID;
  }

  VErrorC(runtime, "##closure-set!: indices out of range: ~A ~A", _i, _j);
  return VVOID;
}

V_BEGIN_FUNC_BASIC(VClosureEnvDepth, "##closure-env-depth", 1, proc)
  VClosure * c = VCheckedDecodeClosure2(runtime, proc, "##closure-env-depth");
  int i = 0;
  VEnv * e = c->env;
  while(e) {
    i++;
    e = e->up;
  }
  return VEncodeInt(i);
}

V_BEGIN_FUNC_BASIC(VClosureEnvFrameLength, "##closure-env-frame-length", 2, proc, _i)
  VClosure * c = VCheckedDecodeClosure2(runtime, proc, "##closure-env-frame-length");
  int i = VCheckedDecodeInt2(runtime, _i, "##closure-env-frame-length");
  VEnv * e = c->env;
  while(e && i) {
    e = e->up;
    i--;
  }
  if(i == 0 && e)
    return VEncodeInt(e->num_vars);

  VErrorC(runtime, "##closure-env-frame-length: index out of range: ~A", _i);
  return VVOID;
}

V_BEGIN_FUNC(VSignalingProcedure, "##signaling-procedure", 1, k)
  VClosure * loc = runtime->exception_location;
  if(!loc)
    V_BOUNCE(k, runtime, VFALSE);
  VClosure proc = VMakeClosure2(loc->func, loc->env->up);
  V_BOUNCE(k, runtime, VEncodeClosure(&proc));
}

V_BEGIN_FUNC(VSignalingArguments, "##signaling-arguments", 1, k)
  VClosure * loc = runtime->exception_location;
  if(!loc)
    V_BOUNCE(k, runtime, VFALSE);
  int len = loc->env->num_vars;

  VVector * vec = V_ALLOCA_VECTOR2(&runtime, runtime, len);
  if(!vec) VGarbageCollect2Func(runtime, (VFunc)VSignalingArguments, 1, k);
  vec->base = VMakeSmallObject(VVECTOR);
  vec->len = len;
  for(int i = 0; i < len; i++)
    vec->arr[i] = loc->env->vars[i];

  V_CALL(k, runtime, VEncodePointer(vec, VPOINTER_OTHER));
}
