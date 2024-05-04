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
#define _GNU_SOURCE
#pragma once
#include "vscheme/vruntime.h"
#include "vsetjmp_private.h"
typedef struct VFiberContext VFiberContext;
typedef struct VFiber VFiber;
typedef struct VStack VStack;
typedef struct VFuture VFuture;

typedef struct VFinalizerEntry VFinalizerEntry;
typedef struct VFinalizerTable {
  // split into a dense table and a hashmap
  // allows us to simply order when finalizers
  // were created in the dense table
  // when finalizers are run the dense table
  // is tombstoned and the table is compacted in order
  // next major gc
  VFinalizerEntry * dense;
  unsigned * table;
  unsigned num_finalizers;
  unsigned dense_size;
  unsigned table_size;
  // from new_finalizers_start to num_finalizers
  // are all the finalizers added since last gc
  unsigned new_finalizers_start;
} VFinalizerTable;

typedef struct VRuntime VRuntime;
typedef struct VRuntime {
  VPublicRuntime public;
  // the heart
  VJmpBuf VRoot;
  // what is preserved when jumping
  VWORD VGCResumeCont;
  VWORD VExitCode;
  // heap info
  bool VForceMajorGC;
  bool VActiveHeap;
  unsigned VGCsSinceMajor;
  void * VHeap;
  void * VHeapPos;
  void * VHeapEnd;
  struct {
    void * begin;
    void * end;
    size_t size;
  } VHeaps[2];
  // mutation info
  unsigned VNumTrackedMutations;
  unsigned VNumUntrackedMutations;
  unsigned VTrackedMutationsSize;
  struct {
    VWORD * container;
    VWORD * slot;
  } * VTrackedMutations;
  // global vars info
  VGlobalEntry * VGlobalTable;
  unsigned VNumGlobals;
  unsigned VNumGlobalSlots;
  bool VGrowSymtable;
  // dynamic variables
  VWORD dynamics;
  VWORD exception_handlers;
  // finalizers
  VFinalizerTable VHeapFinalizers[2];
  // gc info
  unsigned VNumMinorGCs;
  unsigned VNumMajorGCs;
  uint64_t VMinorGCTime;
  uint64_t VMajorGCTime;
  // args
  int VArgc;
  char ** VArgv;
  // parsing
  size_t lex_size;
  char * lex_buf;
  // fibers
  VFiber * my_fiber;
  VFiber * main_fiber;
  VFiberContext * fiber_context;

  VStack * fiber_runtimes;
  VStack * fiber_heaps;

  bool owns_heap[2];
  VFuture * my_future;

  int num_half_reaped_fibers;
  VRuntime ** half_reaped_fibers;
  // misc
  uint64_t gensym_storage;
  uint64_t _Atomic * gensym_index;
  VWORD declare_list;
} VRuntime;

SYSV_CALL void VGetStackInfo(char ** start, size_t * size);
