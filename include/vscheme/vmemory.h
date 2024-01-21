/*
 * Copyright 2023-2024 Richard N Van Natta
 *
 * This file is part of the Vanity Scheme Runtime.
 *
 * The Vanity Scheme Runtime is free software: you can redistribute it
 * and/or modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation, either version
 * 2.1 of the License, or (at your option) any later version.
 * 
 * The Vanity Scheme Runtime is distributed in the hope that it will be
 * useful, but WITHOUT ANY WARRANTY; without even the implied warranty
 * of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with the Vanity Scheme Runtime.
 *
 * If not, see <https://www.gnu.org/licenses/>.
 *
 * This work is published with additional permission, the Vanity Scheme
 * Runtime Library Exceptions, which should have been included with the
 * Vanity Scheme Compiler.
 *
 * If not, visit <https://github.com/rnvannatta>
 */
 
#pragma once
#include "vruntime.h"

typedef struct VAllocPage {
  struct VAllocPage * next;
  _Alignas(sizeof(void*)) char buf[];
} VAllocPage;

typedef struct VMemoryPool {
  unsigned page_offset;
  unsigned page_size;
  VAllocPage * page;
} VMemoryPool;

static inline void * VPoolAlloc(VMemoryPool * pool, size_t size) {
  size_t bump_size = ((size + sizeof(void*) - 1)/sizeof(void*)) * sizeof(void*);
  if(pool->page_offset + size <= pool->page_size) {
    char * ret = pool->page->buf + pool->page_offset;
    pool->page_offset += bump_size;
    return ret;
  }
  assert(size < pool->page_size);
  
  VAllocPage * page = malloc(sizeof(VAllocPage) + pool->page_size);
  page->next = pool->page;
  pool->page = page;

  pool->page_offset = bump_size;
  return page->buf;
}

static inline VMemoryPool VCreateMemoryPool(unsigned page_size) {
  return (VMemoryPool) {
    .page_offset = page_size,
    .page_size = page_size,
    .page = NULL,
  };
}

static inline void VDestroyMemoryPool(VMemoryPool * pool) {
  VAllocPage * cur = pool->page;
  while(cur) {
    VAllocPage * next = cur->next;
    free(cur);
    cur = next;
  }
  pool->page = NULL;
  pool->page_offset = pool->page_size;
}

static inline VWORD VPoolCons(VMemoryPool * pool, VWORD a, VWORD b) {
  VPair * p = VPoolAlloc(pool, sizeof(VPair));
  *p = VMakePair(a, b);
  return VEncodePair(p);
}
static inline VWORD VPoolClosure(VMemoryPool * pool, VFunc f, VEnv * env) {
  VClosure * k = VPoolAlloc(pool, sizeof(VClosure));
  *k = VMakeClosure2(f, env);
  return VEncodeClosure(k);
}
static inline VWORD VPoolString(VMemoryPool * pool, char const * str) {
  unsigned len = strlen(str)+1;
  VBlob * b = VPoolAlloc(pool, sizeof(VBlob) + len);
  VFillBlob(b, VSTRING, len, str);
  return VEncodePointer(b, VPOINTER_OTHER);
}
static inline VWORD VPoolSymbol(VMemoryPool * pool, char const * str) {
  unsigned len = strlen(str)+1;
  VBlob * b = VPoolAlloc(pool, sizeof(VBlob) + len);
  VFillBlob(b, VSYMBOL, len, str);
  return VEncodePointer(b, VPOINTER_OTHER);
}
