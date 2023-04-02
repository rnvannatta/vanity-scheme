/*
 * Copyright 2023 Richard N Van Natta
 *
 * This file is part of the Vanity Scheme Runtime.
 *
 * The Vanity Scheme Runtime is free software: you can redistribute it
 * and/or modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation, either version
 * 3 of the License, or (at your option) any later version.
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
 * This work is published with additional permission under GNU GPL
 * Version 3.0 Section 7, the Vanity Scheme Macro Exceptions, which
 * should have been included with the Vanity Scheme Runtime.
 *
 * If not, visit <https://github.com/rnvannatta>
 */
#pragma once
#include <stddef.h>

typedef unsigned long hash64;

static inline hash64 hash64_to_hash48(hash64 h) {
  return (h >> 16) ^ ((h << 16) >> 16);
}

static inline hash64 hash64_seed() {
  return 14695981039346656037ul;
}

static inline hash64 char_hash64(hash64 seed, unsigned char c) {
  return (seed ^ c) * 1099511628211ul;
}

static inline hash64 string_hash64(hash64 seed, char const * buf, size_t len) {
  for(size_t i = 0; i < len; i++)
    seed = char_hash64(seed, buf[i]);
  return seed;
}

static inline hash64 uint64_hash64(hash64 seed, unsigned long i) {
  for(size_t i = 0; i < 8; i++) {
    seed = char_hash64(seed, i & 0xFF);
    i >>= 8;
  }
  return seed;
}

static inline hash64 uint48_hash64(hash64 seed, unsigned long i) {
  for(size_t i = 0; i < 8; i++) {
    seed = char_hash64(seed, i & 0xFF);
    i >>= 8;
  }
  return seed;
}

static inline hash64 merge_hash64(hash64 a, hash64 b) {
  return uint64_hash64(uint64_hash64(hash64_seed(), a), b);
}

static inline hash64 merge_hash48(hash64 a, hash64 b) {
  return hash64_to_hash48(uint48_hash64(uint48_hash64(hash64_seed(), a), b));
}

