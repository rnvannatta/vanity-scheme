#include "vscheme/vhash.h"
#include "vscheme/vruntime.h"
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
