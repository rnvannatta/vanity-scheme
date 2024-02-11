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
typedef struct VFiberContext VFiberContext;
typedef struct VFiber VFiber;

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
  VFiberContext * fiber_context;
} VRuntime;
