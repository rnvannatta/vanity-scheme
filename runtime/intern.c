#include <assert.h>
#include <limits.h>
#include <stdatomic.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include "vscheme/vruntime.h"
#include "vscheme/vlibrary.h"
#include "vscheme/vmemory.h"
#include "vscheme/vhash.h"
#include "intern_private.h"

#define XXH_INLINE_ALL
#include "xxhash.h"

#if INTPTR_MAX == 0x7fffffffffffffff
#define VANITY64
#elif INTPTR_MAX == 0x7fffffff
#else
#error "Unknown pointer size"
#endif

typedef struct SymbolEntry {
  int hash;
  VBlob * sym;
} SymbolEntry;

#ifdef VANITY64
#define symhash symhash64
enum { POOL_SIZE = 4088, };
#else
#define symhash symhash32
enum { POOL_SIZE = 4092, };
#endif

static _Atomic int intern_busy;
VMemoryPool symbol_pool = {
  .page_offset = POOL_SIZE,
  .page_size = POOL_SIZE,
};
_Static_assert(sizeof(VAllocPage)+POOL_SIZE == 4096, "intern pool isn't exactly a page");

static float load_factor = 0.75f;
static int size;
static int capacity;
static int log_buckets;
static int hash_mask;
static SymbolEntry * intern_table;
int symhash64(char const * name, int size) {
  return (int)(uint32_t)XXH64(name, size, 0);
}
int symhash32(char const * name, int size) {
  return (int)(uint32_t)XXH32(name, size, 0);
}

static VBlob * FindSymbol(int hash, char const * name) {
  int cur = hash & hash_mask;
  VBlob * ret = NULL;
  for(int i = 0; i < capacity; i++) {
    if(intern_table[cur].hash == hash
       && !strcmp(intern_table[cur].sym->buf, name)) {
      ret = intern_table[cur].sym;
      break;
    }
    if(!intern_table[cur].sym)
      break;
    cur++;
    cur &= hash_mask;
  }
  return ret;
}

static void InsertSymbol(int hash, VBlob * sym);
static void GrowTable() {
  int old_capacity = capacity;
  if(!capacity) {
    capacity = 256;
    log_buckets = 8;
    hash_mask = 255;
  }
  capacity *= 2;
  log_buckets++;
  hash_mask = capacity - 1;

  size_t num_bytes = sizeof(SymbolEntry[capacity]);
  SymbolEntry * old_table = intern_table;
  SymbolEntry * new_table = malloc(num_bytes);
  memset(new_table, 0, num_bytes);
  intern_table = new_table;
  size = 0;
  for(int i = 0; i < old_capacity; i++) {
    if(old_table[i].sym) {
      InsertSymbol(old_table[i].hash, old_table[i].sym);
    }
  }
  free(old_table);
}

static void InsertSymbol(int hash, VBlob * sym) {
  //fprintf(stderr, "intern: inserting symbol %s with hash %d\n", sym->buf, hash);
  assert("symbol intern table full" && size < INT_MAX);

  if(size >= capacity * load_factor)
    GrowTable();

  int cur = hash & hash_mask;
  for(int i = 0; i < capacity; i++) {
    if(!intern_table[cur].sym) {
      intern_table[cur].hash = hash;
      intern_table[cur].sym = sym;
      size++;
      return;
    }
    cur++;
    cur &= hash_mask;
  }
  assert("symbol interning failure" && 0);
}

static void VLock(_Atomic int * lock) {
  for(;;) {
    if(!atomic_exchange(lock, 1))
      break;
    while(atomic_load(lock))
      ;
  }
}
static void VUnlock(_Atomic int * lock) {
  assert(atomic_exchange(lock, 0));
}

// Public facing functions:

// Assumes the symbol is in static memory.
VBlob * VInternSymbol(int hash, VBlob * sym) {
  VLock(&intern_busy);
  VBlob * ret = FindSymbol(hash, sym->buf);
  if(ret)
    goto done;
  ret = sym;
  InsertSymbol(hash, ret);
done:
  VUnlock(&intern_busy);
  return ret;
}

VBlob * VCreateSymbol(int hash, char const * name, int length) {
  VLock(&intern_busy);
  VBlob * ret = FindSymbol(hash, name);
  if(ret)
    goto done;
  VBlob * sym = VPoolAlloc(&symbol_pool, sizeof(VBlob)+length+1);
  VFillBlob(sym, VSYMBOL, length+1, name);
  ret = sym;
  InsertSymbol(hash, ret);
done:
  VUnlock(&intern_busy);
  return ret;
}

VBlob * VCreateSymbolSlow(char const * name, int length) {
  return VCreateSymbol(symhash(name, length), name, length);
}

V_BEGIN_FUNC_BASIC(VInternHash, "intern-hash", 1, _sym)
  VBlob * sym = VCheckedDecodeBlob2(runtime, _sym, "intern-hash");
  int hash;
  hash = symhash(sym->buf, sym->len-1);

  if(sym->base.tag != VSYMBOL && sym->base.tag != VSTRING)
    VErrorC(runtime, "intern-hash: not a symbol: ~A", _sym);
  return VEncodeInt(hash);
V_END_FUNC

V_BEGIN_FUNC_BASIC(VInternHash2, "intern-hash2", 2, _sym, _64)
  VBlob * sym = VCheckedDecodeBlob2(runtime, _sym, "intern-hash2");
  int hash;
  if(VDecodeBool(_64))
    hash = symhash64(sym->buf, sym->len-1);
  else
    hash = symhash32(sym->buf, sym->len-1);

  if(sym->base.tag != VSYMBOL && sym->base.tag != VSTRING)
    VErrorC(runtime, "intern-hash: not a symbol: ~A", _sym);
  return VEncodeInt(hash);
V_END_FUNC
