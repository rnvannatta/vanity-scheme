#ifndef V_HASH_H
#define V_HASH_H
#include <stdint.h>
#include <stddef.h>

#if __cplusplus
extern "C" {
#endif

/* Copyright 2023 Melissa O'Neill, Wang Yi, Austin Appleby, & Richard Van Natta
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the “Software”), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to * permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED “AS IS”, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

/*
 * This is a vendored blend of a few permissive hashing and rng libraries:
 *
 *    PCG Random by Melissa O'Neill http://www.pcg-random.org/ (MIT)
 *    Wyhash by Wang Yi https://github.com/wangyi-fudan/wyhash (Public Domain)
 *    Murmur3 by Austin Appleby https://github.com/aappleby/smhasher (Public Domain)
 * 
 * There are very few changes to the base libraries and it's a thin wrapper over
 * them. As a consequence, this derivative cocktail is licensed under MIT.
 */

/** Non-cryptographic hash. Seed can be any value including zero. Uses
 *  wyhash with default salting. Note that it does unaligned reads and
 *  uses 128 bit multiplication.
 */
static inline uint64_t vhash(const void *dat, size_t len, uint64_t seed);
/** Non-cryptographic small-value hash. Seed can be any value including zero. Can
 *  be used to fold together hashes ie in hashing a linked list. Uses wyhash64 with
 *  default salting.
 */
static inline uint64_t vhash64(uint64_t x, uint64_t seed);
/** Non-cryptographic and invertible bit mixer. Can be used to quickly hash small
 *  values. Uses a variant of the murmur3 finalizer.
 */
static inline uint64_t vhash64_quick(uint64_t x);

typedef struct vrandom_state vrandom_state;
/** Initialize an rng state. Seed and streamid can be any value. The top bit of streamid
 *  is ignored. Streamid is used to provide multiple rngs from the
 *  same seed, ie for multithreading.
 */
static inline void vsrandom(vrandom_state * state, uint64_t seed, uint64_t streamid);
/** Returns a random uniform integer in the range from 0 to UINT32_MAX, inclusively, and
 *  advances the rng state once. Uses the excellent pcg-random32 function. Thread unsafe.
 */
static inline uint32_t vrandom(vrandom_state * state);
/** Returns a random uniform integer in the range from 0 to bounds-1, inclusively, and advances
 *  the rng state once. Uses the excellent pcg-random32 function. Very thread unsafe.
 */
static inline uint32_t vrandom_bounded(vrandom_state * state, uint64_t bounds);
/** Returns a random uniform double in the range from 0 to 1, inclusively, and advances the
 *  rng state once. Uses the excellent pcg-random32 function. Granularity is currently 2^-32. 
 */
static inline double vrandom_double(vrandom_state * state);
/** Efficiently advances the rng state n steps in log(n) time. To go backwards, pass a signed
 *  int and let the rng state wraparound.
 */
static inline void vrandom_advance(vrandom_state * state, uint64_t n);

#if __cplusplus
}
#endif

#endif
#ifndef WYHASH_FINAL_VERSION_4_2
#define WYHASH_FINAL_VERSION_4_2

// This is free and unencumbered software released into the public domain under The Unlicense (http://unlicense.org/)
// main repo: https://github.com/wangyi-fudan/wyhash
// author: 王一 Wang Yi <godspeed_china@yeah.net>
// contributors: Reini Urban, Dietrich Epp, Joshua Haberman, Tommy Ettinger, Daniel Lemire, Otmar Ertl, cocowalla, leo-yuriev, Diego Barrios Romero, paulie-g, dumblob, Yann Collet, ivte-ms, hyb, James Z.M. Gao, easyaspi314 (Devin), TheOneric

/* quick example:
   string s="fjsakfdsjkf";
   uint64_t hash=wyhash(s.c_str(), s.size(), 0, _wyp);
*/

//includes
#include <stdint.h>
#include <string.h>
#if defined(_MSC_VER) && defined(_M_X64)
  #include <intrin.h>
  #pragma intrinsic(_umul128)
#endif

#if __cplusplus
extern "C" {
#endif

//128bit multiply function
static inline uint64_t _wyrot(uint64_t x) { return (x>>32)|(x<<32); }
static inline void _wymum(uint64_t *A, uint64_t *B){
#ifdef __SIZEOF_INT128__
  __uint128_t r=*A; r*=*B; 
  *A=(uint64_t)r; *B=(uint64_t)(r>>64);
#elif defined(_MSC_VER) && defined(_M_X64)
  *A=_umul128(*A,*B,B);
#else
  uint64_t ha=*A>>32, hb=*B>>32, la=(uint32_t)*A, lb=(uint32_t)*B, hi, lo;
  uint64_t rh=ha*hb, rm0=ha*lb, rm1=hb*la, rl=la*lb, t=rl+(rm0<<32), c=t<rl;
  lo=t+(rm1<<32); c+=lo<t; hi=rh+(rm0>>32)+(rm1>>32)+c;
  *A=lo;  *B=hi;
#endif
}

//multiply and xor mix function, aka MUM
static inline uint64_t _wymix(uint64_t A, uint64_t B){ _wymum(&A,&B); return A^B; }

//endian macros
#ifndef WYHASH_LITTLE_ENDIAN
  #if defined(_WIN32) || defined(__LITTLE_ENDIAN__) || (defined(__BYTE_ORDER__) && __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__)
    #define WYHASH_LITTLE_ENDIAN 1
  #elif defined(__BIG_ENDIAN__) || (defined(__BYTE_ORDER__) && __BYTE_ORDER__ == __ORDER_BIG_ENDIAN__)
    #define WYHASH_LITTLE_ENDIAN 0
  #else
    #warning could not determine endianness! Falling back to little endian.
    #define WYHASH_LITTLE_ENDIAN 1
  #endif
#endif

//read functions
#if (WYHASH_LITTLE_ENDIAN)
static inline uint64_t _wyr8(const uint8_t *p) { uint64_t v; memcpy(&v, p, 8); return v;}
static inline uint64_t _wyr4(const uint8_t *p) { uint32_t v; memcpy(&v, p, 4); return v;}
#elif defined(__GNUC__) || defined(__INTEL_COMPILER) || defined(__clang__)
static inline uint64_t _wyr8(const uint8_t *p) { uint64_t v; memcpy(&v, p, 8); return __builtin_bswap64(v);}
static inline uint64_t _wyr4(const uint8_t *p) { uint32_t v; memcpy(&v, p, 4); return __builtin_bswap32(v);}
#elif defined(_MSC_VER)
static inline uint64_t _wyr8(const uint8_t *p) { uint64_t v; memcpy(&v, p, 8); return _byteswap_uint64(v);}
static inline uint64_t _wyr4(const uint8_t *p) { uint32_t v; memcpy(&v, p, 4); return _byteswap_ulong(v);}
#else
static inline uint64_t _wyr8(const uint8_t *p) {
  uint64_t v; memcpy(&v, p, 8);
  return (((v >> 56) & 0xff)| ((v >> 40) & 0xff00)| ((v >> 24) & 0xff0000)| ((v >>  8) & 0xff000000)| ((v <<  8) & 0xff00000000)| ((v << 24) & 0xff0000000000)| ((v << 40) & 0xff000000000000)| ((v << 56) & 0xff00000000000000));
}
static inline uint64_t _wyr4(const uint8_t *p) {
  uint32_t v; memcpy(&v, p, 4);
  return (((v >> 24) & 0xff)| ((v >>  8) & 0xff00)| ((v <<  8) & 0xff0000)| ((v << 24) & 0xff000000));
}
#endif
static inline uint64_t _wyr3(const uint8_t *p, size_t k) { return (((uint64_t)p[0])<<16)|(((uint64_t)p[k>>1])<<8)|p[k-1];}
//wyhash main function
static inline uint64_t wyhash(const void *key, size_t len, uint64_t seed, const uint64_t *secret){
  const uint8_t *p=(const uint8_t *)key; seed^=_wymix(seed^secret[0],secret[1]);	uint64_t	a,	b;
  if(len<=16){
    if(len>=4){ a=(_wyr4(p)<<32)|_wyr4(p+((len>>3)<<2)); b=(_wyr4(p+len-4)<<32)|_wyr4(p+len-4-((len>>3)<<2)); }
    else if(len>0){ a=_wyr3(p,len); b=0;}
    else a=b=0;
  }
  else{
    size_t i=len; 
    if(i>=48){
      uint64_t see1=seed, see2=seed;
      do{
        seed=_wymix(_wyr8(p)^secret[1],_wyr8(p+8)^seed);
        see1=_wymix(_wyr8(p+16)^secret[2],_wyr8(p+24)^see1);
        see2=_wymix(_wyr8(p+32)^secret[3],_wyr8(p+40)^see2);
        p+=48; i-=48;
      }while(i>=48);
      seed^=see1^see2;
    }
    while(i>16){  seed=_wymix(_wyr8(p)^secret[1],_wyr8(p+8)^seed);  i-=16; p+=16;  }
    a=_wyr8(p+i-16);  b=_wyr8(p+i-8);
  }
  a^=secret[1]; b^=seed;  _wymum(&a,&b);
  return  _wymix(a^secret[0]^len,b^secret[1]);
}

//the default secret parameters
static const uint64_t _wyp[4] = {0x2d358dccaa6c78a5ull, 0x8bb84b93962eacc9ull, 0x4b33a62ed433d4a3ull, 0x4d5a2da51de1aa47ull};

//a useful 64bit-64bit mix function to produce deterministic pseudo random numbers that can pass BigCrush and PractRand
static inline uint64_t wyhash64(uint64_t A, uint64_t B){ A^=_wyp[0]; B^=_wyp[1]; _wymum(&A,&B); return _wymix(A^_wyp[0],B^_wyp[1]);}

/* The Unlicense
This is free and unencumbered software released into the public domain.

Anyone is free to copy, modify, publish, use, compile, sell, or
distribute this software, either in source code form or as a compiled
binary, for any purpose, commercial or non-commercial, and by any
means.

In jurisdictions that recognize copyright laws, the author or authors
of this software dedicate any and all copyright interest in the
software to the public domain. We make this dedication for the benefit
of the public at large and to the detriment of our heirs and
successors. We intend this dedication to be an overt act of
relinquishment in perpetuity of all present and future rights to this
software under copyright law.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR
OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
OTHER DEALINGS IN THE SOFTWARE.

For more information, please refer to <http://unlicense.org/>
*/

#if __cplusplus
}
#endif

#endif
#ifndef PCG_VARIANTS_H_INCLUDED
#define PCG_VARIANTS_H_INCLUDED 1
/*
 * PCG Random Number Generation for C.
 *
 * Copyright 2014-2019 Melissa O'Neill <oneill@pcg-random.org>,
 *                     and the PCG Project contributors.
 *
 * SPDX-License-Identifier: (Apache-2.0 OR MIT)
 *
 * Licensed under the Apache License, Version 2.0 (provided in
 * LICENSE-APACHE.txt and at http://www.apache.org/licenses/LICENSE-2.0)
 * or under the MIT license (provided in LICENSE-MIT.txt and at
 * http://opensource.org/licenses/MIT), at your option. This file may not
 * be copied, modified, or distributed except according to those terms.
 *
 * Distributed on an "AS IS" BASIS, WITHOUT WARRANTY OF ANY KIND, either
 * express or implied.  See your chosen license for details.
 *
 * For additional information about the PCG random number generation scheme,
 * visit http://www.pcg-random.org/.
 */

/*
 * This code is derived from the canonical C++ PCG implementation, which
 * has many additional features and is preferable if you can use C++ in
 * your project.
 *
 * Much of the derivation was performed mechanically.  In particular, the
 * output functions were generated by compiling the C++ output functions
 * into LLVM bitcode and then transforming that using the LLVM C backend
 * (from https://github.com/draperlaboratory/llvm-cbe), and then
 * postprocessing and hand editing the output.
 *
 * Much of the remaining code was generated by C-preprocessor metaprogramming.
 */


#include <inttypes.h>

#if __SIZEOF_INT128__
    typedef __uint128_t pcg128_t;
    #define PCG_128BIT_CONSTANT(high,low) \
            ((((pcg128_t)high) << 64) + low)
    #define PCG_HAS_128BIT_OPS 1
#endif

#if __GNUC_GNU_INLINE__  &&  !defined(__cplusplus)
    #error Nonstandard GNU inlining semantics. Compile with -std=c99 or better.
    /* We could instead use macros PCG_INLINE and PCG_EXTERN_INLINE
       but better to just reject ancient C code. */
#endif

#if __cplusplus
extern "C" {
#endif

/*
 * Rotate helper functions.
 */

static inline uint8_t pcg_rotr_8(uint8_t value, unsigned int rot)
{
    rot &= 7;
    return (value >> rot) | (value << ((- rot) & 7));
}

static inline uint16_t pcg_rotr_16(uint16_t value, unsigned int rot)
{
    rot &= 15;
    return (value >> rot) | (value << ((- rot) & 15));
}

static inline uint32_t pcg_rotr_32(uint32_t value, unsigned int rot)
{
    rot &= 31;
    return (value >> rot) | (value << ((- rot) & 31));
}

static inline uint64_t pcg_rotr_64(uint64_t value, unsigned int rot)
{
    rot &= 63;
    return (value >> rot) | (value << ((- rot) & 63));
}

#if PCG_HAS_128BIT_OPS
static inline pcg128_t pcg_rotr_128(pcg128_t value, unsigned int rot)
{
    rot &= 127;
    return (value >> rot) | (value << ((- rot) & 127));
}
#endif

/*
 * Output functions.  These are the core of the PCG generation scheme.
 */

/* XSH RS */

static inline uint8_t pcg_output_xsh_rs_16_8(uint16_t state)
{
    return (uint8_t)(((state >> 7u) ^ state) >> ((state >> 14u) + 3u));
}

static inline uint16_t pcg_output_xsh_rs_32_16(uint32_t state)
{
    return (uint16_t)(((state >> 11u) ^ state) >> ((state >> 30u) + 11u));
}

static inline uint32_t pcg_output_xsh_rs_64_32(uint64_t state)
{

    return (uint32_t)(((state >> 22u) ^ state) >> ((state >> 61u) + 22u));
}

#if PCG_HAS_128BIT_OPS
static inline uint64_t pcg_output_xsh_rs_128_64(pcg128_t state)
{
    return (uint64_t)(((state >> 43u) ^ state) >> ((state >> 124u) + 45u));
}
#endif

/* XSH RR */

static inline uint8_t pcg_output_xsh_rr_16_8(uint16_t state)
{
    return pcg_rotr_8(((state >> 5u) ^ state) >> 5u, state >> 13u);
}

static inline uint16_t pcg_output_xsh_rr_32_16(uint32_t state)
{
    return pcg_rotr_16(((state >> 10u) ^ state) >> 12u, state >> 28u);
}

static inline uint32_t pcg_output_xsh_rr_64_32(uint64_t state)
{
    return pcg_rotr_32(((state >> 18u) ^ state) >> 27u, state >> 59u);
}

#if PCG_HAS_128BIT_OPS
static inline uint64_t pcg_output_xsh_rr_128_64(pcg128_t state)
{
    return pcg_rotr_64(((state >> 35u) ^ state) >> 58u, state >> 122u);
}
#endif

/* RXS M XS */

static inline uint8_t pcg_output_rxs_m_xs_8_8(uint8_t state)
{
    uint8_t word = ((state >> ((state >> 6u) + 2u)) ^ state) * 217u;
    return (word >> 6u) ^ word;
}

static inline uint16_t pcg_output_rxs_m_xs_16_16(uint16_t state)
{
    uint16_t word = ((state >> ((state >> 13u) + 3u)) ^ state) * 62169u;
    return (word >> 11u) ^ word;
}

static inline uint32_t pcg_output_rxs_m_xs_32_32(uint32_t state)
{
    uint32_t word = ((state >> ((state >> 28u) + 4u)) ^ state) * 277803737u;
    return (word >> 22u) ^ word;
}

static inline uint64_t pcg_output_rxs_m_xs_64_64(uint64_t state)
{
    uint64_t word = ((state >> ((state >> 59u) + 5u)) ^ state)
                    * 12605985483714917081ull;
    return (word >> 43u) ^ word;
}

#if PCG_HAS_128BIT_OPS
static inline pcg128_t pcg_output_rxs_m_xs_128_128(pcg128_t state)
{
    pcg128_t word = ((state >> ((state >> 122u) + 6u)) ^ state)
                       * (PCG_128BIT_CONSTANT(17766728186571221404ULL,
                                              12605985483714917081ULL));
    /* 327738287884841127335028083622016905945 */
    return (word >> 86u) ^ word;
}
#endif

/* RXS M */

static inline uint8_t pcg_output_rxs_m_16_8(uint16_t state)
{
    return (((state >> ((state >> 13u) + 3u)) ^ state) * 62169u) >> 8u;
}

static inline uint16_t pcg_output_rxs_m_32_16(uint32_t state)
{
    return (((state >> ((state >> 28u) + 4u)) ^ state) * 277803737u) >> 16u;
}

static inline uint32_t pcg_output_rxs_m_64_32(uint64_t state)
{
    return (((state >> ((state >> 59u) + 5u)) ^ state)
               * 12605985483714917081ull) >> 32u;
}

#if PCG_HAS_128BIT_OPS
static inline uint64_t pcg_output_rxs_m_128_64(pcg128_t state)
{
    return (((state >> ((state >> 122u) + 6u)) ^ state)
               * (PCG_128BIT_CONSTANT(17766728186571221404ULL,
                                      12605985483714917081ULL))) >> 64u;
    /* 327738287884841127335028083622016905945 */
}
#endif

/* XSL RR (only defined for >= 64 bits) */

static inline uint32_t pcg_output_xsl_rr_64_32(uint64_t state)
{
    return pcg_rotr_32(((uint32_t)(state >> 32u)) ^ (uint32_t)state,
                       state >> 59u);
}

#if PCG_HAS_128BIT_OPS
static inline uint64_t pcg_output_xsl_rr_128_64(pcg128_t state)
{
    return pcg_rotr_64(((uint64_t)(state >> 64u)) ^ (uint64_t)state,
                       state >> 122u);
}
#endif

/* XSL RR RR (only defined for >= 64 bits) */

static inline uint64_t pcg_output_xsl_rr_rr_64_64(uint64_t state)
{
    uint32_t rot1 = (uint32_t)(state >> 59u);
    uint32_t high = (uint32_t)(state >> 32u);
    uint32_t low  = (uint32_t)state;
    uint32_t xored = high ^ low;
    uint32_t newlow  = pcg_rotr_32(xored, rot1);
    uint32_t newhigh = pcg_rotr_32(high, newlow & 31u);
    return (((uint64_t)newhigh) << 32u) | newlow;
}

#if PCG_HAS_128BIT_OPS
static inline pcg128_t pcg_output_xsl_rr_rr_128_128(pcg128_t state)
{
    uint32_t rot1 = (uint32_t)(state >> 122u);
    uint64_t high = (uint64_t)(state >> 64u);
    uint64_t low  = (uint64_t)state;
    uint64_t xored = high ^ low;
    uint64_t newlow  = pcg_rotr_64(xored, rot1);
    uint64_t newhigh = pcg_rotr_64(high, newlow & 63u);
    return (((pcg128_t)newhigh) << 64u) | newlow;
}
#endif

#define PCG_DEFAULT_MULTIPLIER_8   141U
#define PCG_DEFAULT_MULTIPLIER_16  12829U
#define PCG_DEFAULT_MULTIPLIER_32  747796405U
#define PCG_DEFAULT_MULTIPLIER_64  6364136223846793005ULL

#define PCG_DEFAULT_INCREMENT_8    77U
#define PCG_DEFAULT_INCREMENT_16   47989U
#define PCG_DEFAULT_INCREMENT_32   2891336453U
#define PCG_DEFAULT_INCREMENT_64   1442695040888963407ULL

#if PCG_HAS_128BIT_OPS
#define PCG_DEFAULT_MULTIPLIER_128 \
        PCG_128BIT_CONSTANT(2549297995355413924ULL,4865540595714422341ULL)
#define PCG_DEFAULT_INCREMENT_128  \
        PCG_128BIT_CONSTANT(6364136223846793005ULL,1442695040888963407ULL)
#endif

/*
 * Static initialization constants (if you can't call srandom for some
 * bizarre reason).
 */

#define PCG_STATE_ONESEQ_8_INITIALIZER      { 0xd7U }
#define PCG_STATE_ONESEQ_16_INITIALIZER     { 0x20dfU }
#define PCG_STATE_ONESEQ_32_INITIALIZER     { 0x46b56677U }
#define PCG_STATE_ONESEQ_64_INITIALIZER     { 0x4d595df4d0f33173ULL }
#if PCG_HAS_128BIT_OPS
#define PCG_STATE_ONESEQ_128_INITIALIZER                                       \
    { PCG_128BIT_CONSTANT(0xb8dc10e158a92392ULL, 0x98046df007ec0a53ULL) }
#endif

#define PCG_STATE_UNIQUE_8_INITIALIZER      PCG_STATE_ONESEQ_8_INITIALIZER
#define PCG_STATE_UNIQUE_16_INITIALIZER     PCG_STATE_ONESEQ_16_INITIALIZER
#define PCG_STATE_UNIQUE_32_INITIALIZER     PCG_STATE_ONESEQ_32_INITIALIZER
#define PCG_STATE_UNIQUE_64_INITIALIZER     PCG_STATE_ONESEQ_64_INITIALIZER
#if PCG_HAS_128BIT_OPS
#define PCG_STATE_UNIQUE_128_INITIALIZER    PCG_STATE_ONESEQ_128_INITIALIZER
#endif

#define PCG_STATE_MCG_8_INITIALIZER         { 0xe5U }
#define PCG_STATE_MCG_16_INITIALIZER        { 0xa5e5U }
#define PCG_STATE_MCG_32_INITIALIZER        { 0xd15ea5e5U }
#define PCG_STATE_MCG_64_INITIALIZER        { 0xcafef00dd15ea5e5ULL }
#if PCG_HAS_128BIT_OPS
#define PCG_STATE_MCG_128_INITIALIZER                                          \
    { PCG_128BIT_CONSTANT(0x0000000000000000ULL, 0xcafef00dd15ea5e5ULL) }
#endif

#define PCG_STATE_SETSEQ_8_INITIALIZER      { 0x9bU, 0xdbU }
#define PCG_STATE_SETSEQ_16_INITIALIZER     { 0xe39bU, 0x5bdbU }
#define PCG_STATE_SETSEQ_32_INITIALIZER     { 0xec02d89bU, 0x94b95bdbU }
#define PCG_STATE_SETSEQ_64_INITIALIZER                                        \
    { 0x853c49e6748fea9bULL, 0xda3e39cb94b95bdbULL }
#if PCG_HAS_128BIT_OPS
#define PCG_STATE_SETSEQ_128_INITIALIZER                                       \
    { PCG_128BIT_CONSTANT(0x979c9a98d8462005ULL, 0x7d3e9cb6cfe0549bULL),       \
      PCG_128BIT_CONSTANT(0x0000000000000001ULL, 0xda3e39cb94b95bdbULL) }
#endif

/* Representations for the oneseq, mcg, and unique variants */

struct pcg_state_8 {
    uint8_t state;
};

struct pcg_state_16 {
    uint16_t state;
};

struct pcg_state_32 {
    uint32_t state;
};

struct pcg_state_64 {
    uint64_t state;
};

#if PCG_HAS_128BIT_OPS
struct pcg_state_128 {
    pcg128_t state;
};
#endif

/* Representations setseq variants */

struct pcg_state_setseq_8 {
    uint8_t state;
    uint8_t inc;
};

struct pcg_state_setseq_16 {
    uint16_t state;
    uint16_t inc;
};

struct pcg_state_setseq_32 {
    uint32_t state;
    uint32_t inc;
};

struct pcg_state_setseq_64 {
    uint64_t state;
    uint64_t inc;
};

#if PCG_HAS_128BIT_OPS
struct pcg_state_setseq_128 {
    pcg128_t state;
    pcg128_t inc;
};
#endif

/* Multi-step advance functions (jump-ahead, jump-back) */

extern uint8_t pcg_advance_lcg_8(uint8_t state, uint8_t delta, uint8_t cur_mult,
                                 uint8_t cur_plus);
extern uint16_t pcg_advance_lcg_16(uint16_t state, uint16_t delta,
                                   uint16_t cur_mult, uint16_t cur_plus);
extern uint32_t pcg_advance_lcg_32(uint32_t state, uint32_t delta,
                                   uint32_t cur_mult, uint32_t cur_plus);
static inline uint64_t pcg_advance_lcg_64(uint64_t state, uint64_t delta,
                                   uint64_t cur_mult, uint64_t cur_plus);

#if PCG_HAS_128BIT_OPS
extern pcg128_t pcg_advance_lcg_128(pcg128_t state, pcg128_t delta,
                                    pcg128_t cur_mult, pcg128_t cur_plus);
#endif

/* Functions to advance the underlying LCG, one version for each size and
 * each style.  These functions are considered semi-private.  There is rarely
 * a good reason to call them directly.
 */

static inline void pcg_oneseq_8_step_r(struct pcg_state_8* rng)
{
    rng->state = rng->state * PCG_DEFAULT_MULTIPLIER_8
                 + PCG_DEFAULT_INCREMENT_8;
}

static inline void pcg_oneseq_8_advance_r(struct pcg_state_8* rng, uint8_t delta)
{
    rng->state = pcg_advance_lcg_8(rng->state, delta, PCG_DEFAULT_MULTIPLIER_8,
                                   PCG_DEFAULT_INCREMENT_8);
}

static inline void pcg_mcg_8_step_r(struct pcg_state_8* rng)
{
    rng->state = rng->state * PCG_DEFAULT_MULTIPLIER_8;
}

static inline void pcg_mcg_8_advance_r(struct pcg_state_8* rng, uint8_t delta)
{
    rng->state
        = pcg_advance_lcg_8(rng->state, delta, PCG_DEFAULT_MULTIPLIER_8, 0u);
}

static inline void pcg_unique_8_step_r(struct pcg_state_8* rng)
{
    rng->state = rng->state * PCG_DEFAULT_MULTIPLIER_8
                 + (uint8_t)(((intptr_t)rng) | 1u);
}

static inline void pcg_unique_8_advance_r(struct pcg_state_8* rng, uint8_t delta)
{
    rng->state = pcg_advance_lcg_8(rng->state, delta, PCG_DEFAULT_MULTIPLIER_8,
                                   (uint8_t)(((intptr_t)rng) | 1u));
}

static inline void pcg_setseq_8_step_r(struct pcg_state_setseq_8* rng)
{
    rng->state = rng->state * PCG_DEFAULT_MULTIPLIER_8 + rng->inc;
}

static inline void pcg_setseq_8_advance_r(struct pcg_state_setseq_8* rng,
                                   uint8_t delta)
{
    rng->state = pcg_advance_lcg_8(rng->state, delta, PCG_DEFAULT_MULTIPLIER_8,
                                   rng->inc);
}

static inline void pcg_oneseq_16_step_r(struct pcg_state_16* rng)
{
    rng->state = rng->state * PCG_DEFAULT_MULTIPLIER_16
                 + PCG_DEFAULT_INCREMENT_16;
}

static inline void pcg_oneseq_16_advance_r(struct pcg_state_16* rng, uint16_t delta)
{
    rng->state = pcg_advance_lcg_16(
        rng->state, delta, PCG_DEFAULT_MULTIPLIER_16, PCG_DEFAULT_INCREMENT_16);
}

static inline void pcg_mcg_16_step_r(struct pcg_state_16* rng)
{
    rng->state = rng->state * PCG_DEFAULT_MULTIPLIER_16;
}

static inline void pcg_mcg_16_advance_r(struct pcg_state_16* rng, uint16_t delta)
{
    rng->state
        = pcg_advance_lcg_16(rng->state, delta, PCG_DEFAULT_MULTIPLIER_16, 0u);
}

static inline void pcg_unique_16_step_r(struct pcg_state_16* rng)
{
    rng->state = rng->state * PCG_DEFAULT_MULTIPLIER_16
                 + (uint16_t)(((intptr_t)rng) | 1u);
}

static inline void pcg_unique_16_advance_r(struct pcg_state_16* rng, uint16_t delta)
{
    rng->state
        = pcg_advance_lcg_16(rng->state, delta, PCG_DEFAULT_MULTIPLIER_16,
                             (uint16_t)(((intptr_t)rng) | 1u));
}

static inline void pcg_setseq_16_step_r(struct pcg_state_setseq_16* rng)
{
    rng->state = rng->state * PCG_DEFAULT_MULTIPLIER_16 + rng->inc;
}

static inline void pcg_setseq_16_advance_r(struct pcg_state_setseq_16* rng,
                                    uint16_t delta)
{
    rng->state = pcg_advance_lcg_16(rng->state, delta,
                                    PCG_DEFAULT_MULTIPLIER_16, rng->inc);
}

static inline void pcg_oneseq_32_step_r(struct pcg_state_32* rng)
{
    rng->state = rng->state * PCG_DEFAULT_MULTIPLIER_32
                 + PCG_DEFAULT_INCREMENT_32;
}

static inline void pcg_oneseq_32_advance_r(struct pcg_state_32* rng, uint32_t delta)
{
    rng->state = pcg_advance_lcg_32(
        rng->state, delta, PCG_DEFAULT_MULTIPLIER_32, PCG_DEFAULT_INCREMENT_32);
}

static inline void pcg_mcg_32_step_r(struct pcg_state_32* rng)
{
    rng->state = rng->state * PCG_DEFAULT_MULTIPLIER_32;
}

static inline void pcg_mcg_32_advance_r(struct pcg_state_32* rng, uint32_t delta)
{
    rng->state
        = pcg_advance_lcg_32(rng->state, delta, PCG_DEFAULT_MULTIPLIER_32, 0u);
}

static inline void pcg_unique_32_step_r(struct pcg_state_32* rng)
{
    rng->state = rng->state * PCG_DEFAULT_MULTIPLIER_32
                 + (uint32_t)(((intptr_t)rng) | 1u);
}

static inline void pcg_unique_32_advance_r(struct pcg_state_32* rng, uint32_t delta)
{
    rng->state
        = pcg_advance_lcg_32(rng->state, delta, PCG_DEFAULT_MULTIPLIER_32,
                             (uint32_t)(((intptr_t)rng) | 1u));
}

static inline void pcg_setseq_32_step_r(struct pcg_state_setseq_32* rng)
{
    rng->state = rng->state * PCG_DEFAULT_MULTIPLIER_32 + rng->inc;
}

static inline void pcg_setseq_32_advance_r(struct pcg_state_setseq_32* rng,
                                    uint32_t delta)
{
    rng->state = pcg_advance_lcg_32(rng->state, delta,
                                    PCG_DEFAULT_MULTIPLIER_32, rng->inc);
}

static inline void pcg_oneseq_64_step_r(struct pcg_state_64* rng)
{
    rng->state = rng->state * PCG_DEFAULT_MULTIPLIER_64
                 + PCG_DEFAULT_INCREMENT_64;
}

static inline void pcg_oneseq_64_advance_r(struct pcg_state_64* rng, uint64_t delta)
{
    rng->state = pcg_advance_lcg_64(
        rng->state, delta, PCG_DEFAULT_MULTIPLIER_64, PCG_DEFAULT_INCREMENT_64);
}

static inline void pcg_mcg_64_step_r(struct pcg_state_64* rng)
{
    rng->state = rng->state * PCG_DEFAULT_MULTIPLIER_64;
}

static inline void pcg_mcg_64_advance_r(struct pcg_state_64* rng, uint64_t delta)
{
    rng->state
        = pcg_advance_lcg_64(rng->state, delta, PCG_DEFAULT_MULTIPLIER_64, 0u);
}

static inline void pcg_unique_64_step_r(struct pcg_state_64* rng)
{
    rng->state = rng->state * PCG_DEFAULT_MULTIPLIER_64
                 + (uint64_t)(((intptr_t)rng) | 1u);
}

static inline void pcg_unique_64_advance_r(struct pcg_state_64* rng, uint64_t delta)
{
    rng->state
        = pcg_advance_lcg_64(rng->state, delta, PCG_DEFAULT_MULTIPLIER_64,
                             (uint64_t)(((intptr_t)rng) | 1u));
}

static inline void pcg_setseq_64_step_r(struct pcg_state_setseq_64* rng)
{
    rng->state = rng->state * PCG_DEFAULT_MULTIPLIER_64 + rng->inc;
}

static inline void pcg_setseq_64_advance_r(struct pcg_state_setseq_64* rng,
                                    uint64_t delta)
{
    rng->state = pcg_advance_lcg_64(rng->state, delta,
                                    PCG_DEFAULT_MULTIPLIER_64, rng->inc);
}

#if PCG_HAS_128BIT_OPS
static inline void pcg_oneseq_128_step_r(struct pcg_state_128* rng)
{
    rng->state = rng->state * PCG_DEFAULT_MULTIPLIER_128
                 + PCG_DEFAULT_INCREMENT_128;
}
#endif

#if PCG_HAS_128BIT_OPS
static inline void pcg_oneseq_128_advance_r(struct pcg_state_128* rng, pcg128_t delta)
{
    rng->state
        = pcg_advance_lcg_128(rng->state, delta, PCG_DEFAULT_MULTIPLIER_128,
                              PCG_DEFAULT_INCREMENT_128);
}
#endif

#if PCG_HAS_128BIT_OPS
static inline void pcg_mcg_128_step_r(struct pcg_state_128* rng)
{
    rng->state = rng->state * PCG_DEFAULT_MULTIPLIER_128;
}
#endif

#if PCG_HAS_128BIT_OPS
static inline void pcg_mcg_128_advance_r(struct pcg_state_128* rng, pcg128_t delta)
{
    rng->state = pcg_advance_lcg_128(rng->state, delta,
                                     PCG_DEFAULT_MULTIPLIER_128, 0u);
}
#endif

#if PCG_HAS_128BIT_OPS
static inline void pcg_unique_128_step_r(struct pcg_state_128* rng)
{
    rng->state = rng->state * PCG_DEFAULT_MULTIPLIER_128
                 + (pcg128_t)(((intptr_t)rng) | 1u);
}
#endif

#if PCG_HAS_128BIT_OPS
static inline void pcg_unique_128_advance_r(struct pcg_state_128* rng, pcg128_t delta)
{
    rng->state
        = pcg_advance_lcg_128(rng->state, delta, PCG_DEFAULT_MULTIPLIER_128,
                              (pcg128_t)(((intptr_t)rng) | 1u));
}
#endif

#if PCG_HAS_128BIT_OPS
static inline void pcg_setseq_128_step_r(struct pcg_state_setseq_128* rng)
{
    rng->state = rng->state * PCG_DEFAULT_MULTIPLIER_128 + rng->inc;
}
#endif

#if PCG_HAS_128BIT_OPS
static inline void pcg_setseq_128_advance_r(struct pcg_state_setseq_128* rng,
                                     pcg128_t delta)
{
    rng->state = pcg_advance_lcg_128(rng->state, delta,
                                     PCG_DEFAULT_MULTIPLIER_128, rng->inc);
}
#endif

/* Functions to seed the RNG state, one version for each size and each
 * style.  Unlike the step functions, regular users can and should call
 * these functions.
 */

static inline void pcg_oneseq_8_srandom_r(struct pcg_state_8* rng, uint8_t initstate)
{
    rng->state = 0U;
    pcg_oneseq_8_step_r(rng);
    rng->state += initstate;
    pcg_oneseq_8_step_r(rng);
}

static inline void pcg_mcg_8_srandom_r(struct pcg_state_8* rng, uint8_t initstate)
{
    rng->state = initstate | 1u;
}

static inline void pcg_unique_8_srandom_r(struct pcg_state_8* rng, uint8_t initstate)
{
    rng->state = 0U;
    pcg_unique_8_step_r(rng);
    rng->state += initstate;
    pcg_unique_8_step_r(rng);
}

static inline void pcg_setseq_8_srandom_r(struct pcg_state_setseq_8* rng,
                                   uint8_t initstate, uint8_t initseq)
{
    rng->state = 0U;
    rng->inc = (initseq << 1u) | 1u;
    pcg_setseq_8_step_r(rng);
    rng->state += initstate;
    pcg_setseq_8_step_r(rng);
}

static inline void pcg_oneseq_16_srandom_r(struct pcg_state_16* rng,
                                    uint16_t initstate)
{
    rng->state = 0U;
    pcg_oneseq_16_step_r(rng);
    rng->state += initstate;
    pcg_oneseq_16_step_r(rng);
}

static inline void pcg_mcg_16_srandom_r(struct pcg_state_16* rng, uint16_t initstate)
{
    rng->state = initstate | 1u;
}

static inline void pcg_unique_16_srandom_r(struct pcg_state_16* rng,
                                    uint16_t initstate)
{
    rng->state = 0U;
    pcg_unique_16_step_r(rng);
    rng->state += initstate;
    pcg_unique_16_step_r(rng);
}

static inline void pcg_setseq_16_srandom_r(struct pcg_state_setseq_16* rng,
                                    uint16_t initstate, uint16_t initseq)
{
    rng->state = 0U;
    rng->inc = (initseq << 1u) | 1u;
    pcg_setseq_16_step_r(rng);
    rng->state += initstate;
    pcg_setseq_16_step_r(rng);
}

static inline void pcg_oneseq_32_srandom_r(struct pcg_state_32* rng,
                                    uint32_t initstate)
{
    rng->state = 0U;
    pcg_oneseq_32_step_r(rng);
    rng->state += initstate;
    pcg_oneseq_32_step_r(rng);
}

static inline void pcg_mcg_32_srandom_r(struct pcg_state_32* rng, uint32_t initstate)
{
    rng->state = initstate | 1u;
}

static inline void pcg_unique_32_srandom_r(struct pcg_state_32* rng,
                                    uint32_t initstate)
{
    rng->state = 0U;
    pcg_unique_32_step_r(rng);
    rng->state += initstate;
    pcg_unique_32_step_r(rng);
}

static inline void pcg_setseq_32_srandom_r(struct pcg_state_setseq_32* rng,
                                    uint32_t initstate, uint32_t initseq)
{
    rng->state = 0U;
    rng->inc = (initseq << 1u) | 1u;
    pcg_setseq_32_step_r(rng);
    rng->state += initstate;
    pcg_setseq_32_step_r(rng);
}

static inline void pcg_oneseq_64_srandom_r(struct pcg_state_64* rng,
                                    uint64_t initstate)
{
    rng->state = 0U;
    pcg_oneseq_64_step_r(rng);
    rng->state += initstate;
    pcg_oneseq_64_step_r(rng);
}

static inline void pcg_mcg_64_srandom_r(struct pcg_state_64* rng, uint64_t initstate)
{
    rng->state = initstate | 1u;
}

static inline void pcg_unique_64_srandom_r(struct pcg_state_64* rng,
                                    uint64_t initstate)
{
    rng->state = 0U;
    pcg_unique_64_step_r(rng);
    rng->state += initstate;
    pcg_unique_64_step_r(rng);
}

static inline void pcg_setseq_64_srandom_r(struct pcg_state_setseq_64* rng,
                                    uint64_t initstate, uint64_t initseq)
{
    rng->state = 0U;
    rng->inc = (initseq << 1u) | 1u;
    pcg_setseq_64_step_r(rng);
    rng->state += initstate;
    pcg_setseq_64_step_r(rng);
}

#if PCG_HAS_128BIT_OPS
static inline void pcg_oneseq_128_srandom_r(struct pcg_state_128* rng,
                                     pcg128_t initstate)
{
    rng->state = 0U;
    pcg_oneseq_128_step_r(rng);
    rng->state += initstate;
    pcg_oneseq_128_step_r(rng);
}
#endif

#if PCG_HAS_128BIT_OPS
static inline void pcg_mcg_128_srandom_r(struct pcg_state_128* rng, pcg128_t initstate)
{
    rng->state = initstate | 1u;
}
#endif

#if PCG_HAS_128BIT_OPS
static inline void pcg_unique_128_srandom_r(struct pcg_state_128* rng,
                                     pcg128_t initstate)
{
    rng->state = 0U;
    pcg_unique_128_step_r(rng);
    rng->state += initstate;
    pcg_unique_128_step_r(rng);
}
#endif

#if PCG_HAS_128BIT_OPS
static inline void pcg_setseq_128_srandom_r(struct pcg_state_setseq_128* rng,
                                     pcg128_t initstate, pcg128_t initseq)
{
    rng->state = 0U;
    rng->inc = (initseq << 1u) | 1u;
    pcg_setseq_128_step_r(rng);
    rng->state += initstate;
    pcg_setseq_128_step_r(rng);
}
#endif

/* Now, finally we create each of the individual generators. We provide
 * a random_r function that provides a random number of the appropriate
 * type (using the full range of the type) and a boundedrand_r version
 * that provides
 *
 * Implementation notes for boundedrand_r:
 *
 *     To avoid bias, we need to make the range of the RNG a multiple of
 *     bound, which we do by dropping output less than a threshold.
 *     Let's consider a 32-bit case...  A naive scheme to calculate the
 *     threshold would be to do
 *
 *         uint32_t threshold = 0x100000000ull % bound;
 *
 *     but 64-bit div/mod is slower than 32-bit div/mod (especially on
 *     32-bit platforms).  In essence, we do
 *
 *         uint32_t threshold = (0x100000000ull-bound) % bound;
 *
 *     because this version will calculate the same modulus, but the LHS
 *     value is less than 2^32.
 *
 *     (Note that using modulo is only wise for good RNGs, poorer RNGs
 *     such as raw LCGs do better using a technique based on division.)
 *     Empricical tests show that division is preferable to modulus for
 *     reducting the range of an RNG.  It's faster, and sometimes it can
 *     even be statistically prefereable.
 */

/* Generation functions for XSH RS */

static inline uint8_t pcg_oneseq_16_xsh_rs_8_random_r(struct pcg_state_16* rng)
{
    uint16_t oldstate = rng->state;
    pcg_oneseq_16_step_r(rng);
    return pcg_output_xsh_rs_16_8(oldstate);
}

static inline uint8_t pcg_oneseq_16_xsh_rs_8_boundedrand_r(struct pcg_state_16* rng,
                                                    uint8_t bound)
{
    uint8_t threshold = ((uint8_t)(-bound)) % bound;
    for (;;) {
        uint8_t r = pcg_oneseq_16_xsh_rs_8_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

static inline uint16_t pcg_oneseq_32_xsh_rs_16_random_r(struct pcg_state_32* rng)
{
    uint32_t oldstate = rng->state;
    pcg_oneseq_32_step_r(rng);
    return pcg_output_xsh_rs_32_16(oldstate);
}

static inline uint16_t pcg_oneseq_32_xsh_rs_16_boundedrand_r(struct pcg_state_32* rng,
                                                      uint16_t bound)
{
    uint16_t threshold = ((uint16_t)(-bound)) % bound;
    for (;;) {
        uint16_t r = pcg_oneseq_32_xsh_rs_16_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

static inline uint32_t pcg_oneseq_64_xsh_rs_32_random_r(struct pcg_state_64* rng)
{
    uint64_t oldstate = rng->state;
    pcg_oneseq_64_step_r(rng);
    return pcg_output_xsh_rs_64_32(oldstate);
}

static inline uint32_t pcg_oneseq_64_xsh_rs_32_boundedrand_r(struct pcg_state_64* rng,
                                                      uint32_t bound)
{
    uint32_t threshold = -bound % bound;
    for (;;) {
        uint32_t r = pcg_oneseq_64_xsh_rs_32_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

#if PCG_HAS_128BIT_OPS
static inline uint64_t pcg_oneseq_128_xsh_rs_64_random_r(struct pcg_state_128* rng)
{
    pcg_oneseq_128_step_r(rng);
    return pcg_output_xsh_rs_128_64(rng->state);
}
#endif

#if PCG_HAS_128BIT_OPS
static inline uint64_t
pcg_oneseq_128_xsh_rs_64_boundedrand_r(struct pcg_state_128* rng,
                                       uint64_t bound)
{
    uint64_t threshold = -bound % bound;
    for (;;) {
        uint64_t r = pcg_oneseq_128_xsh_rs_64_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}
#endif

static inline uint8_t pcg_unique_16_xsh_rs_8_random_r(struct pcg_state_16* rng)
{
    uint16_t oldstate = rng->state;
    pcg_unique_16_step_r(rng);
    return pcg_output_xsh_rs_16_8(oldstate);
}

static inline uint8_t pcg_unique_16_xsh_rs_8_boundedrand_r(struct pcg_state_16* rng,
                                                    uint8_t bound)
{
    uint8_t threshold = ((uint8_t)(-bound)) % bound;
    for (;;) {
        uint8_t r = pcg_unique_16_xsh_rs_8_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

static inline uint16_t pcg_unique_32_xsh_rs_16_random_r(struct pcg_state_32* rng)
{
    uint32_t oldstate = rng->state;
    pcg_unique_32_step_r(rng);
    return pcg_output_xsh_rs_32_16(oldstate);
}

static inline uint16_t pcg_unique_32_xsh_rs_16_boundedrand_r(struct pcg_state_32* rng,
                                                      uint16_t bound)
{
    uint16_t threshold = ((uint16_t)(-bound)) % bound;
    for (;;) {
        uint16_t r = pcg_unique_32_xsh_rs_16_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

static inline uint32_t pcg_unique_64_xsh_rs_32_random_r(struct pcg_state_64* rng)
{
    uint64_t oldstate = rng->state;
    pcg_unique_64_step_r(rng);
    return pcg_output_xsh_rs_64_32(oldstate);
}

static inline uint32_t pcg_unique_64_xsh_rs_32_boundedrand_r(struct pcg_state_64* rng,
                                                      uint32_t bound)
{
    uint32_t threshold = -bound % bound;
    for (;;) {
        uint32_t r = pcg_unique_64_xsh_rs_32_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

#if PCG_HAS_128BIT_OPS
static inline uint64_t pcg_unique_128_xsh_rs_64_random_r(struct pcg_state_128* rng)
{
    pcg_unique_128_step_r(rng);
    return pcg_output_xsh_rs_128_64(rng->state);
}
#endif

#if PCG_HAS_128BIT_OPS
static inline uint64_t
pcg_unique_128_xsh_rs_64_boundedrand_r(struct pcg_state_128* rng,
                                       uint64_t bound)
{
    uint64_t threshold = -bound % bound;
    for (;;) {
        uint64_t r = pcg_unique_128_xsh_rs_64_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}
#endif

static inline uint8_t pcg_setseq_16_xsh_rs_8_random_r(struct pcg_state_setseq_16* rng)
{
    uint16_t oldstate = rng->state;
    pcg_setseq_16_step_r(rng);
    return pcg_output_xsh_rs_16_8(oldstate);
}

static inline uint8_t
pcg_setseq_16_xsh_rs_8_boundedrand_r(struct pcg_state_setseq_16* rng,
                                     uint8_t bound)
{
    uint8_t threshold = ((uint8_t)(-bound)) % bound;
    for (;;) {
        uint8_t r = pcg_setseq_16_xsh_rs_8_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

static inline uint16_t
pcg_setseq_32_xsh_rs_16_random_r(struct pcg_state_setseq_32* rng)
{
    uint32_t oldstate = rng->state;
    pcg_setseq_32_step_r(rng);
    return pcg_output_xsh_rs_32_16(oldstate);
}

static inline uint16_t
pcg_setseq_32_xsh_rs_16_boundedrand_r(struct pcg_state_setseq_32* rng,
                                      uint16_t bound)
{
    uint16_t threshold = ((uint16_t)(-bound)) % bound;
    for (;;) {
        uint16_t r = pcg_setseq_32_xsh_rs_16_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

static inline uint32_t
pcg_setseq_64_xsh_rs_32_random_r(struct pcg_state_setseq_64* rng)
{
    uint64_t oldstate = rng->state;
    pcg_setseq_64_step_r(rng);
    return pcg_output_xsh_rs_64_32(oldstate);
}

static inline uint32_t
pcg_setseq_64_xsh_rs_32_boundedrand_r(struct pcg_state_setseq_64* rng,
                                      uint32_t bound)
{
    uint32_t threshold = -bound % bound;
    for (;;) {
        uint32_t r = pcg_setseq_64_xsh_rs_32_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

#if PCG_HAS_128BIT_OPS
static inline uint64_t
pcg_setseq_128_xsh_rs_64_random_r(struct pcg_state_setseq_128* rng)
{
    pcg_setseq_128_step_r(rng);
    return pcg_output_xsh_rs_128_64(rng->state);
}
#endif

#if PCG_HAS_128BIT_OPS
static inline uint64_t
pcg_setseq_128_xsh_rs_64_boundedrand_r(struct pcg_state_setseq_128* rng,
                                       uint64_t bound)
{
    uint64_t threshold = -bound % bound;
    for (;;) {
        uint64_t r = pcg_setseq_128_xsh_rs_64_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}
#endif

static inline uint8_t pcg_mcg_16_xsh_rs_8_random_r(struct pcg_state_16* rng)
{
    uint16_t oldstate = rng->state;
    pcg_mcg_16_step_r(rng);
    return pcg_output_xsh_rs_16_8(oldstate);
}

static inline uint8_t pcg_mcg_16_xsh_rs_8_boundedrand_r(struct pcg_state_16* rng,
                                                 uint8_t bound)
{
    uint8_t threshold = ((uint8_t)(-bound)) % bound;
    for (;;) {
        uint8_t r = pcg_mcg_16_xsh_rs_8_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

static inline uint16_t pcg_mcg_32_xsh_rs_16_random_r(struct pcg_state_32* rng)
{
    uint32_t oldstate = rng->state;
    pcg_mcg_32_step_r(rng);
    return pcg_output_xsh_rs_32_16(oldstate);
}

static inline uint16_t pcg_mcg_32_xsh_rs_16_boundedrand_r(struct pcg_state_32* rng,
                                                   uint16_t bound)
{
    uint16_t threshold = ((uint16_t)(-bound)) % bound;
    for (;;) {
        uint16_t r = pcg_mcg_32_xsh_rs_16_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

static inline uint32_t pcg_mcg_64_xsh_rs_32_random_r(struct pcg_state_64* rng)
{
    uint64_t oldstate = rng->state;
    pcg_mcg_64_step_r(rng);
    return pcg_output_xsh_rs_64_32(oldstate);
}

static inline uint32_t pcg_mcg_64_xsh_rs_32_boundedrand_r(struct pcg_state_64* rng,
                                                   uint32_t bound)
{
    uint32_t threshold = -bound % bound;
    for (;;) {
        uint32_t r = pcg_mcg_64_xsh_rs_32_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

#if PCG_HAS_128BIT_OPS
static inline uint64_t pcg_mcg_128_xsh_rs_64_random_r(struct pcg_state_128* rng)
{
    pcg_mcg_128_step_r(rng);
    return pcg_output_xsh_rs_128_64(rng->state);
}
#endif

#if PCG_HAS_128BIT_OPS
static inline uint64_t pcg_mcg_128_xsh_rs_64_boundedrand_r(struct pcg_state_128* rng,
                                                    uint64_t bound)
{
    uint64_t threshold = -bound % bound;
    for (;;) {
        uint64_t r = pcg_mcg_128_xsh_rs_64_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}
#endif

/* Generation functions for XSH RR */

static inline uint8_t pcg_oneseq_16_xsh_rr_8_random_r(struct pcg_state_16* rng)
{
    uint16_t oldstate = rng->state;
    pcg_oneseq_16_step_r(rng);
    return pcg_output_xsh_rr_16_8(oldstate);
}

static inline uint8_t pcg_oneseq_16_xsh_rr_8_boundedrand_r(struct pcg_state_16* rng,
                                                    uint8_t bound)
{
    uint8_t threshold = ((uint8_t)(-bound)) % bound;
    for (;;) {
        uint8_t r = pcg_oneseq_16_xsh_rr_8_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

static inline uint16_t pcg_oneseq_32_xsh_rr_16_random_r(struct pcg_state_32* rng)
{
    uint32_t oldstate = rng->state;
    pcg_oneseq_32_step_r(rng);
    return pcg_output_xsh_rr_32_16(oldstate);
}

static inline uint16_t pcg_oneseq_32_xsh_rr_16_boundedrand_r(struct pcg_state_32* rng,
                                                      uint16_t bound)
{
    uint16_t threshold = ((uint16_t)(-bound)) % bound;
    for (;;) {
        uint16_t r = pcg_oneseq_32_xsh_rr_16_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

static inline uint32_t pcg_oneseq_64_xsh_rr_32_random_r(struct pcg_state_64* rng)
{
    uint64_t oldstate = rng->state;
    pcg_oneseq_64_step_r(rng);
    return pcg_output_xsh_rr_64_32(oldstate);
}

static inline uint32_t pcg_oneseq_64_xsh_rr_32_boundedrand_r(struct pcg_state_64* rng,
                                                      uint32_t bound)
{
    uint32_t threshold = -bound % bound;
    for (;;) {
        uint32_t r = pcg_oneseq_64_xsh_rr_32_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

#if PCG_HAS_128BIT_OPS
static inline uint64_t pcg_oneseq_128_xsh_rr_64_random_r(struct pcg_state_128* rng)
{
    pcg_oneseq_128_step_r(rng);
    return pcg_output_xsh_rr_128_64(rng->state);
}
#endif

#if PCG_HAS_128BIT_OPS
static inline uint64_t
pcg_oneseq_128_xsh_rr_64_boundedrand_r(struct pcg_state_128* rng,
                                       uint64_t bound)
{
    uint64_t threshold = -bound % bound;
    for (;;) {
        uint64_t r = pcg_oneseq_128_xsh_rr_64_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}
#endif

static inline uint8_t pcg_unique_16_xsh_rr_8_random_r(struct pcg_state_16* rng)
{
    uint16_t oldstate = rng->state;
    pcg_unique_16_step_r(rng);
    return pcg_output_xsh_rr_16_8(oldstate);
}

static inline uint8_t pcg_unique_16_xsh_rr_8_boundedrand_r(struct pcg_state_16* rng,
                                                    uint8_t bound)
{
    uint8_t threshold = ((uint8_t)(-bound)) % bound;
    for (;;) {
        uint8_t r = pcg_unique_16_xsh_rr_8_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

static inline uint16_t pcg_unique_32_xsh_rr_16_random_r(struct pcg_state_32* rng)
{
    uint32_t oldstate = rng->state;
    pcg_unique_32_step_r(rng);
    return pcg_output_xsh_rr_32_16(oldstate);
}

static inline uint16_t pcg_unique_32_xsh_rr_16_boundedrand_r(struct pcg_state_32* rng,
                                                      uint16_t bound)
{
    uint16_t threshold = ((uint16_t)(-bound)) % bound;
    for (;;) {
        uint16_t r = pcg_unique_32_xsh_rr_16_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

static inline uint32_t pcg_unique_64_xsh_rr_32_random_r(struct pcg_state_64* rng)
{
    uint64_t oldstate = rng->state;
    pcg_unique_64_step_r(rng);
    return pcg_output_xsh_rr_64_32(oldstate);
}

static inline uint32_t pcg_unique_64_xsh_rr_32_boundedrand_r(struct pcg_state_64* rng,
                                                      uint32_t bound)
{
    uint32_t threshold = -bound % bound;
    for (;;) {
        uint32_t r = pcg_unique_64_xsh_rr_32_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

#if PCG_HAS_128BIT_OPS
static inline uint64_t pcg_unique_128_xsh_rr_64_random_r(struct pcg_state_128* rng)
{
    pcg_unique_128_step_r(rng);
    return pcg_output_xsh_rr_128_64(rng->state);
}
#endif

#if PCG_HAS_128BIT_OPS
static inline uint64_t
pcg_unique_128_xsh_rr_64_boundedrand_r(struct pcg_state_128* rng,
                                       uint64_t bound)
{
    uint64_t threshold = -bound % bound;
    for (;;) {
        uint64_t r = pcg_unique_128_xsh_rr_64_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}
#endif

static inline uint8_t pcg_setseq_16_xsh_rr_8_random_r(struct pcg_state_setseq_16* rng)
{
    uint16_t oldstate = rng->state;
    pcg_setseq_16_step_r(rng);
    return pcg_output_xsh_rr_16_8(oldstate);
}

static inline uint8_t
pcg_setseq_16_xsh_rr_8_boundedrand_r(struct pcg_state_setseq_16* rng,
                                     uint8_t bound)
{
    uint8_t threshold = ((uint8_t)(-bound)) % bound;
    for (;;) {
        uint8_t r = pcg_setseq_16_xsh_rr_8_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

static inline uint16_t
pcg_setseq_32_xsh_rr_16_random_r(struct pcg_state_setseq_32* rng)
{
    uint32_t oldstate = rng->state;
    pcg_setseq_32_step_r(rng);
    return pcg_output_xsh_rr_32_16(oldstate);
}

static inline uint16_t
pcg_setseq_32_xsh_rr_16_boundedrand_r(struct pcg_state_setseq_32* rng,
                                      uint16_t bound)
{
    uint16_t threshold = ((uint16_t)(-bound)) % bound;
    for (;;) {
        uint16_t r = pcg_setseq_32_xsh_rr_16_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

static inline uint32_t
pcg_setseq_64_xsh_rr_32_random_r(struct pcg_state_setseq_64* rng)
{
    uint64_t oldstate = rng->state;
    pcg_setseq_64_step_r(rng);
    return pcg_output_xsh_rr_64_32(oldstate);
}

static inline uint32_t
pcg_setseq_64_xsh_rr_32_boundedrand_r(struct pcg_state_setseq_64* rng,
                                      uint32_t bound)
{
    uint32_t threshold = -bound % bound;
    for (;;) {
        uint32_t r = pcg_setseq_64_xsh_rr_32_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

#if PCG_HAS_128BIT_OPS
static inline uint64_t
pcg_setseq_128_xsh_rr_64_random_r(struct pcg_state_setseq_128* rng)
{
    pcg_setseq_128_step_r(rng);
    return pcg_output_xsh_rr_128_64(rng->state);
}
#endif

#if PCG_HAS_128BIT_OPS
static inline uint64_t
pcg_setseq_128_xsh_rr_64_boundedrand_r(struct pcg_state_setseq_128* rng,
                                       uint64_t bound)
{
    uint64_t threshold = -bound % bound;
    for (;;) {
        uint64_t r = pcg_setseq_128_xsh_rr_64_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}
#endif

static inline uint8_t pcg_mcg_16_xsh_rr_8_random_r(struct pcg_state_16* rng)
{
    uint16_t oldstate = rng->state;
    pcg_mcg_16_step_r(rng);
    return pcg_output_xsh_rr_16_8(oldstate);
}

static inline uint8_t pcg_mcg_16_xsh_rr_8_boundedrand_r(struct pcg_state_16* rng,
                                                 uint8_t bound)
{
    uint8_t threshold = ((uint8_t)(-bound)) % bound;
    for (;;) {
        uint8_t r = pcg_mcg_16_xsh_rr_8_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

static inline uint16_t pcg_mcg_32_xsh_rr_16_random_r(struct pcg_state_32* rng)
{
    uint32_t oldstate = rng->state;
    pcg_mcg_32_step_r(rng);
    return pcg_output_xsh_rr_32_16(oldstate);
}

static inline uint16_t pcg_mcg_32_xsh_rr_16_boundedrand_r(struct pcg_state_32* rng,
                                                   uint16_t bound)
{
    uint16_t threshold = ((uint16_t)(-bound)) % bound;
    for (;;) {
        uint16_t r = pcg_mcg_32_xsh_rr_16_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

static inline uint32_t pcg_mcg_64_xsh_rr_32_random_r(struct pcg_state_64* rng)
{
    uint64_t oldstate = rng->state;
    pcg_mcg_64_step_r(rng);
    return pcg_output_xsh_rr_64_32(oldstate);
}

static inline uint32_t pcg_mcg_64_xsh_rr_32_boundedrand_r(struct pcg_state_64* rng,
                                                   uint32_t bound)
{
    uint32_t threshold = -bound % bound;
    for (;;) {
        uint32_t r = pcg_mcg_64_xsh_rr_32_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

#if PCG_HAS_128BIT_OPS
static inline uint64_t pcg_mcg_128_xsh_rr_64_random_r(struct pcg_state_128* rng)
{
    pcg_mcg_128_step_r(rng);
    return pcg_output_xsh_rr_128_64(rng->state);
}
#endif

#if PCG_HAS_128BIT_OPS
static inline uint64_t pcg_mcg_128_xsh_rr_64_boundedrand_r(struct pcg_state_128* rng,
                                                    uint64_t bound)
{
    uint64_t threshold = -bound % bound;
    for (;;) {
        uint64_t r = pcg_mcg_128_xsh_rr_64_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}
#endif

/* Generation functions for RXS M XS (no MCG versions because they
 * don't make sense when you want to use the entire state)
 */

static inline uint8_t pcg_oneseq_8_rxs_m_xs_8_random_r(struct pcg_state_8* rng)
{
    uint8_t oldstate = rng->state;
    pcg_oneseq_8_step_r(rng);
    return pcg_output_rxs_m_xs_8_8(oldstate);
}

static inline uint8_t pcg_oneseq_8_rxs_m_xs_8_boundedrand_r(struct pcg_state_8* rng,
                                                     uint8_t bound)
{
    uint8_t threshold = ((uint8_t)(-bound)) % bound;
    for (;;) {
        uint8_t r = pcg_oneseq_8_rxs_m_xs_8_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

static inline uint16_t pcg_oneseq_16_rxs_m_xs_16_random_r(struct pcg_state_16* rng)
{
    uint16_t oldstate = rng->state;
    pcg_oneseq_16_step_r(rng);
    return pcg_output_rxs_m_xs_16_16(oldstate);
}

static inline uint16_t
pcg_oneseq_16_rxs_m_xs_16_boundedrand_r(struct pcg_state_16* rng,
                                        uint16_t bound)
{
    uint16_t threshold = ((uint16_t)(-bound)) % bound;
    for (;;) {
        uint16_t r = pcg_oneseq_16_rxs_m_xs_16_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

static inline uint32_t pcg_oneseq_32_rxs_m_xs_32_random_r(struct pcg_state_32* rng)
{
    uint32_t oldstate = rng->state;
    pcg_oneseq_32_step_r(rng);
    return pcg_output_rxs_m_xs_32_32(oldstate);
}

static inline uint32_t
pcg_oneseq_32_rxs_m_xs_32_boundedrand_r(struct pcg_state_32* rng,
                                        uint32_t bound)
{
    uint32_t threshold = -bound % bound;
    for (;;) {
        uint32_t r = pcg_oneseq_32_rxs_m_xs_32_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

static inline uint64_t pcg_oneseq_64_rxs_m_xs_64_random_r(struct pcg_state_64* rng)
{
    uint64_t oldstate = rng->state;
    pcg_oneseq_64_step_r(rng);
    return pcg_output_rxs_m_xs_64_64(oldstate);
}

static inline uint64_t
pcg_oneseq_64_rxs_m_xs_64_boundedrand_r(struct pcg_state_64* rng,
                                        uint64_t bound)
{
    uint64_t threshold = -bound % bound;
    for (;;) {
        uint64_t r = pcg_oneseq_64_rxs_m_xs_64_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

#if PCG_HAS_128BIT_OPS
static inline pcg128_t pcg_oneseq_128_rxs_m_xs_128_random_r(struct pcg_state_128* rng)
{
    pcg_oneseq_128_step_r(rng);
    return pcg_output_rxs_m_xs_128_128(rng->state);
}
#endif

#if PCG_HAS_128BIT_OPS
static inline pcg128_t
pcg_oneseq_128_rxs_m_xs_128_boundedrand_r(struct pcg_state_128* rng,
                                          pcg128_t bound)
{
    pcg128_t threshold = -bound % bound;
    for (;;) {
        pcg128_t r = pcg_oneseq_128_rxs_m_xs_128_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}
#endif

static inline uint16_t pcg_unique_16_rxs_m_xs_16_random_r(struct pcg_state_16* rng)
{
    uint16_t oldstate = rng->state;
    pcg_unique_16_step_r(rng);
    return pcg_output_rxs_m_xs_16_16(oldstate);
}

static inline uint16_t
pcg_unique_16_rxs_m_xs_16_boundedrand_r(struct pcg_state_16* rng,
                                        uint16_t bound)
{
    uint16_t threshold = ((uint16_t)(-bound)) % bound;
    for (;;) {
        uint16_t r = pcg_unique_16_rxs_m_xs_16_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

static inline uint32_t pcg_unique_32_rxs_m_xs_32_random_r(struct pcg_state_32* rng)
{
    uint32_t oldstate = rng->state;
    pcg_unique_32_step_r(rng);
    return pcg_output_rxs_m_xs_32_32(oldstate);
}

static inline uint32_t
pcg_unique_32_rxs_m_xs_32_boundedrand_r(struct pcg_state_32* rng,
                                        uint32_t bound)
{
    uint32_t threshold = -bound % bound;
    for (;;) {
        uint32_t r = pcg_unique_32_rxs_m_xs_32_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

static inline uint64_t pcg_unique_64_rxs_m_xs_64_random_r(struct pcg_state_64* rng)
{
    uint64_t oldstate = rng->state;
    pcg_unique_64_step_r(rng);
    return pcg_output_rxs_m_xs_64_64(oldstate);
}

static inline uint64_t
pcg_unique_64_rxs_m_xs_64_boundedrand_r(struct pcg_state_64* rng,
                                        uint64_t bound)
{
    uint64_t threshold = -bound % bound;
    for (;;) {
        uint64_t r = pcg_unique_64_rxs_m_xs_64_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

#if PCG_HAS_128BIT_OPS
static inline pcg128_t pcg_unique_128_rxs_m_xs_128_random_r(struct pcg_state_128* rng)
{
    pcg_unique_128_step_r(rng);
    return pcg_output_rxs_m_xs_128_128(rng->state);
}
#endif

#if PCG_HAS_128BIT_OPS
static inline pcg128_t
pcg_unique_128_rxs_m_xs_128_boundedrand_r(struct pcg_state_128* rng,
                                          pcg128_t bound)
{
    pcg128_t threshold = -bound % bound;
    for (;;) {
        pcg128_t r = pcg_unique_128_rxs_m_xs_128_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}
#endif

static inline uint8_t pcg_setseq_8_rxs_m_xs_8_random_r(struct pcg_state_setseq_8* rng)
{
    uint8_t oldstate = rng->state;
    pcg_setseq_8_step_r(rng);
    return pcg_output_rxs_m_xs_8_8(oldstate);
}

static inline uint8_t
pcg_setseq_8_rxs_m_xs_8_boundedrand_r(struct pcg_state_setseq_8* rng,
                                      uint8_t bound)
{
    uint8_t threshold = ((uint8_t)(-bound)) % bound;
    for (;;) {
        uint8_t r = pcg_setseq_8_rxs_m_xs_8_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

static inline uint16_t
pcg_setseq_16_rxs_m_xs_16_random_r(struct pcg_state_setseq_16* rng)
{
    uint16_t oldstate = rng->state;
    pcg_setseq_16_step_r(rng);
    return pcg_output_rxs_m_xs_16_16(oldstate);
}

static inline uint16_t
pcg_setseq_16_rxs_m_xs_16_boundedrand_r(struct pcg_state_setseq_16* rng,
                                        uint16_t bound)
{
    uint16_t threshold = ((uint16_t)(-bound)) % bound;
    for (;;) {
        uint16_t r = pcg_setseq_16_rxs_m_xs_16_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

static inline uint32_t
pcg_setseq_32_rxs_m_xs_32_random_r(struct pcg_state_setseq_32* rng)
{
    uint32_t oldstate = rng->state;
    pcg_setseq_32_step_r(rng);
    return pcg_output_rxs_m_xs_32_32(oldstate);
}

static inline uint32_t
pcg_setseq_32_rxs_m_xs_32_boundedrand_r(struct pcg_state_setseq_32* rng,
                                        uint32_t bound)
{
    uint32_t threshold = -bound % bound;
    for (;;) {
        uint32_t r = pcg_setseq_32_rxs_m_xs_32_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

static inline uint64_t
pcg_setseq_64_rxs_m_xs_64_random_r(struct pcg_state_setseq_64* rng)
{
    uint64_t oldstate = rng->state;
    pcg_setseq_64_step_r(rng);
    return pcg_output_rxs_m_xs_64_64(oldstate);
}

static inline uint64_t
pcg_setseq_64_rxs_m_xs_64_boundedrand_r(struct pcg_state_setseq_64* rng,
                                        uint64_t bound)
{
    uint64_t threshold = -bound % bound;
    for (;;) {
        uint64_t r = pcg_setseq_64_rxs_m_xs_64_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

#if PCG_HAS_128BIT_OPS
static inline pcg128_t
pcg_setseq_128_rxs_m_xs_128_random_r(struct pcg_state_setseq_128* rng)
{
    pcg_setseq_128_step_r(rng);
    return pcg_output_rxs_m_xs_128_128(rng->state);
}
#endif

#if PCG_HAS_128BIT_OPS
static inline pcg128_t
pcg_setseq_128_rxs_m_xs_128_boundedrand_r(struct pcg_state_setseq_128* rng,
                                          pcg128_t bound)
{
    pcg128_t threshold = -bound % bound;
    for (;;) {
        pcg128_t r = pcg_setseq_128_rxs_m_xs_128_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}
#endif

/* Generation functions for RXS M */

static inline uint8_t pcg_oneseq_16_rxs_m_8_random_r(struct pcg_state_16* rng)
{
    uint16_t oldstate = rng->state;
    pcg_oneseq_16_step_r(rng);
    return pcg_output_rxs_m_16_8(oldstate);
}

static inline uint8_t pcg_oneseq_16_rxs_m_8_boundedrand_r(struct pcg_state_16* rng,
                                                   uint8_t bound)
{
    uint8_t threshold = ((uint8_t)(-bound)) % bound;
    for (;;) {
        uint8_t r = pcg_oneseq_16_rxs_m_8_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

static inline uint16_t pcg_oneseq_32_rxs_m_16_random_r(struct pcg_state_32* rng)
{
    uint32_t oldstate = rng->state;
    pcg_oneseq_32_step_r(rng);
    return pcg_output_rxs_m_32_16(oldstate);
}

static inline uint16_t pcg_oneseq_32_rxs_m_16_boundedrand_r(struct pcg_state_32* rng,
                                                     uint16_t bound)
{
    uint16_t threshold = ((uint16_t)(-bound)) % bound;
    for (;;) {
        uint16_t r = pcg_oneseq_32_rxs_m_16_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

static inline uint32_t pcg_oneseq_64_rxs_m_32_random_r(struct pcg_state_64* rng)
{
    uint64_t oldstate = rng->state;
    pcg_oneseq_64_step_r(rng);
    return pcg_output_rxs_m_64_32(oldstate);
}

static inline uint32_t pcg_oneseq_64_rxs_m_32_boundedrand_r(struct pcg_state_64* rng,
                                                     uint32_t bound)
{
    uint32_t threshold = -bound % bound;
    for (;;) {
        uint32_t r = pcg_oneseq_64_rxs_m_32_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

#if PCG_HAS_128BIT_OPS
static inline uint64_t pcg_oneseq_128_rxs_m_64_random_r(struct pcg_state_128* rng)
{
    pcg_oneseq_128_step_r(rng);
    return pcg_output_rxs_m_128_64(rng->state);
}
#endif

#if PCG_HAS_128BIT_OPS
static inline uint64_t pcg_oneseq_128_rxs_m_64_boundedrand_r(struct pcg_state_128* rng,
                                                      uint64_t bound)
{
    uint64_t threshold = -bound % bound;
    for (;;) {
        uint64_t r = pcg_oneseq_128_rxs_m_64_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}
#endif

static inline uint8_t pcg_unique_16_rxs_m_8_random_r(struct pcg_state_16* rng)
{
    uint16_t oldstate = rng->state;
    pcg_unique_16_step_r(rng);
    return pcg_output_rxs_m_16_8(oldstate);
}

static inline uint8_t pcg_unique_16_rxs_m_8_boundedrand_r(struct pcg_state_16* rng,
                                                   uint8_t bound)
{
    uint8_t threshold = ((uint8_t)(-bound)) % bound;
    for (;;) {
        uint8_t r = pcg_unique_16_rxs_m_8_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

static inline uint16_t pcg_unique_32_rxs_m_16_random_r(struct pcg_state_32* rng)
{
    uint32_t oldstate = rng->state;
    pcg_unique_32_step_r(rng);
    return pcg_output_rxs_m_32_16(oldstate);
}

static inline uint16_t pcg_unique_32_rxs_m_16_boundedrand_r(struct pcg_state_32* rng,
                                                     uint16_t bound)
{
    uint16_t threshold = ((uint16_t)(-bound)) % bound;
    for (;;) {
        uint16_t r = pcg_unique_32_rxs_m_16_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

static inline uint32_t pcg_unique_64_rxs_m_32_random_r(struct pcg_state_64* rng)
{
    uint64_t oldstate = rng->state;
    pcg_unique_64_step_r(rng);
    return pcg_output_rxs_m_64_32(oldstate);
}

static inline uint32_t pcg_unique_64_rxs_m_32_boundedrand_r(struct pcg_state_64* rng,
                                                     uint32_t bound)
{
    uint32_t threshold = -bound % bound;
    for (;;) {
        uint32_t r = pcg_unique_64_rxs_m_32_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

#if PCG_HAS_128BIT_OPS
static inline uint64_t pcg_unique_128_rxs_m_64_random_r(struct pcg_state_128* rng)
{
    pcg_unique_128_step_r(rng);
    return pcg_output_rxs_m_128_64(rng->state);
}
#endif

#if PCG_HAS_128BIT_OPS
static inline uint64_t pcg_unique_128_rxs_m_64_boundedrand_r(struct pcg_state_128* rng,
                                                      uint64_t bound)
{
    uint64_t threshold = -bound % bound;
    for (;;) {
        uint64_t r = pcg_unique_128_rxs_m_64_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}
#endif

static inline uint8_t pcg_setseq_16_rxs_m_8_random_r(struct pcg_state_setseq_16* rng)
{
    uint16_t oldstate = rng->state;
    pcg_setseq_16_step_r(rng);
    return pcg_output_rxs_m_16_8(oldstate);
}

static inline uint8_t
pcg_setseq_16_rxs_m_8_boundedrand_r(struct pcg_state_setseq_16* rng,
                                    uint8_t bound)
{
    uint8_t threshold = ((uint8_t)(-bound)) % bound;
    for (;;) {
        uint8_t r = pcg_setseq_16_rxs_m_8_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

static inline uint16_t pcg_setseq_32_rxs_m_16_random_r(struct pcg_state_setseq_32* rng)
{
    uint32_t oldstate = rng->state;
    pcg_setseq_32_step_r(rng);
    return pcg_output_rxs_m_32_16(oldstate);
}

static inline uint16_t
pcg_setseq_32_rxs_m_16_boundedrand_r(struct pcg_state_setseq_32* rng,
                                     uint16_t bound)
{
    uint16_t threshold = ((uint16_t)(-bound)) % bound;
    for (;;) {
        uint16_t r = pcg_setseq_32_rxs_m_16_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

static inline uint32_t pcg_setseq_64_rxs_m_32_random_r(struct pcg_state_setseq_64* rng)
{
    uint64_t oldstate = rng->state;
    pcg_setseq_64_step_r(rng);
    return pcg_output_rxs_m_64_32(oldstate);
}

static inline uint32_t
pcg_setseq_64_rxs_m_32_boundedrand_r(struct pcg_state_setseq_64* rng,
                                     uint32_t bound)
{
    uint32_t threshold = -bound % bound;
    for (;;) {
        uint32_t r = pcg_setseq_64_rxs_m_32_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

#if PCG_HAS_128BIT_OPS
static inline uint64_t
pcg_setseq_128_rxs_m_64_random_r(struct pcg_state_setseq_128* rng)
{
    pcg_setseq_128_step_r(rng);
    return pcg_output_rxs_m_128_64(rng->state);
}
#endif

#if PCG_HAS_128BIT_OPS
static inline uint64_t
pcg_setseq_128_rxs_m_64_boundedrand_r(struct pcg_state_setseq_128* rng,
                                      uint64_t bound)
{
    uint64_t threshold = -bound % bound;
    for (;;) {
        uint64_t r = pcg_setseq_128_rxs_m_64_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}
#endif

static inline uint8_t pcg_mcg_16_rxs_m_8_random_r(struct pcg_state_16* rng)
{
    uint16_t oldstate = rng->state;
    pcg_mcg_16_step_r(rng);
    return pcg_output_rxs_m_16_8(oldstate);
}

static inline uint8_t pcg_mcg_16_rxs_m_8_boundedrand_r(struct pcg_state_16* rng,
                                                uint8_t bound)
{
    uint8_t threshold = ((uint8_t)(-bound)) % bound;
    for (;;) {
        uint8_t r = pcg_mcg_16_rxs_m_8_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

static inline uint16_t pcg_mcg_32_rxs_m_16_random_r(struct pcg_state_32* rng)
{
    uint32_t oldstate = rng->state;
    pcg_mcg_32_step_r(rng);
    return pcg_output_rxs_m_32_16(oldstate);
}

static inline uint16_t pcg_mcg_32_rxs_m_16_boundedrand_r(struct pcg_state_32* rng,
                                                  uint16_t bound)
{
    uint16_t threshold = ((uint16_t)(-bound)) % bound;
    for (;;) {
        uint16_t r = pcg_mcg_32_rxs_m_16_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

static inline uint32_t pcg_mcg_64_rxs_m_32_random_r(struct pcg_state_64* rng)
{
    uint64_t oldstate = rng->state;
    pcg_mcg_64_step_r(rng);
    return pcg_output_rxs_m_64_32(oldstate);
}

static inline uint32_t pcg_mcg_64_rxs_m_32_boundedrand_r(struct pcg_state_64* rng,
                                                  uint32_t bound)
{
    uint32_t threshold = -bound % bound;
    for (;;) {
        uint32_t r = pcg_mcg_64_rxs_m_32_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

#if PCG_HAS_128BIT_OPS
static inline uint64_t pcg_mcg_128_rxs_m_64_random_r(struct pcg_state_128* rng)
{
    pcg_mcg_128_step_r(rng);
    return pcg_output_rxs_m_128_64(rng->state);
}
#endif

#if PCG_HAS_128BIT_OPS
static inline uint64_t pcg_mcg_128_rxs_m_64_boundedrand_r(struct pcg_state_128* rng,
                                                   uint64_t bound)
{
    uint64_t threshold = -bound % bound;
    for (;;) {
        uint64_t r = pcg_mcg_128_rxs_m_64_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}
#endif

/* Generation functions for XSL RR (only defined for "large" types) */

static inline uint32_t pcg_oneseq_64_xsl_rr_32_random_r(struct pcg_state_64* rng)
{
    uint64_t oldstate = rng->state;
    pcg_oneseq_64_step_r(rng);
    return pcg_output_xsl_rr_64_32(oldstate);
}

static inline uint32_t pcg_oneseq_64_xsl_rr_32_boundedrand_r(struct pcg_state_64* rng,
                                                      uint32_t bound)
{
    uint32_t threshold = -bound % bound;
    for (;;) {
        uint32_t r = pcg_oneseq_64_xsl_rr_32_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

#if PCG_HAS_128BIT_OPS
static inline uint64_t pcg_oneseq_128_xsl_rr_64_random_r(struct pcg_state_128* rng)
{
    pcg_oneseq_128_step_r(rng);
    return pcg_output_xsl_rr_128_64(rng->state);
}
#endif

#if PCG_HAS_128BIT_OPS
static inline uint64_t
pcg_oneseq_128_xsl_rr_64_boundedrand_r(struct pcg_state_128* rng,
                                       uint64_t bound)
{
    uint64_t threshold = -bound % bound;
    for (;;) {
        uint64_t r = pcg_oneseq_128_xsl_rr_64_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}
#endif

static inline uint32_t pcg_unique_64_xsl_rr_32_random_r(struct pcg_state_64* rng)
{
    uint64_t oldstate = rng->state;
    pcg_unique_64_step_r(rng);
    return pcg_output_xsl_rr_64_32(oldstate);
}

static inline uint32_t pcg_unique_64_xsl_rr_32_boundedrand_r(struct pcg_state_64* rng,
                                                      uint32_t bound)
{
    uint32_t threshold = -bound % bound;
    for (;;) {
        uint32_t r = pcg_unique_64_xsl_rr_32_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

#if PCG_HAS_128BIT_OPS
static inline uint64_t pcg_unique_128_xsl_rr_64_random_r(struct pcg_state_128* rng)
{
    pcg_unique_128_step_r(rng);
    return pcg_output_xsl_rr_128_64(rng->state);
}
#endif

#if PCG_HAS_128BIT_OPS
static inline uint64_t
pcg_unique_128_xsl_rr_64_boundedrand_r(struct pcg_state_128* rng,
                                       uint64_t bound)
{
    uint64_t threshold = -bound % bound;
    for (;;) {
        uint64_t r = pcg_unique_128_xsl_rr_64_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}
#endif

static inline uint32_t
pcg_setseq_64_xsl_rr_32_random_r(struct pcg_state_setseq_64* rng)
{
    uint64_t oldstate = rng->state;
    pcg_setseq_64_step_r(rng);
    return pcg_output_xsl_rr_64_32(oldstate);
}

static inline uint32_t
pcg_setseq_64_xsl_rr_32_boundedrand_r(struct pcg_state_setseq_64* rng,
                                      uint32_t bound)
{
    uint32_t threshold = -bound % bound;
    for (;;) {
        uint32_t r = pcg_setseq_64_xsl_rr_32_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

#if PCG_HAS_128BIT_OPS
static inline uint64_t
pcg_setseq_128_xsl_rr_64_random_r(struct pcg_state_setseq_128* rng)
{
    pcg_setseq_128_step_r(rng);
    return pcg_output_xsl_rr_128_64(rng->state);
}
#endif

#if PCG_HAS_128BIT_OPS
static inline uint64_t
pcg_setseq_128_xsl_rr_64_boundedrand_r(struct pcg_state_setseq_128* rng,
                                       uint64_t bound)
{
    uint64_t threshold = -bound % bound;
    for (;;) {
        uint64_t r = pcg_setseq_128_xsl_rr_64_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}
#endif

static inline uint32_t pcg_mcg_64_xsl_rr_32_random_r(struct pcg_state_64* rng)
{
    uint64_t oldstate = rng->state;
    pcg_mcg_64_step_r(rng);
    return pcg_output_xsl_rr_64_32(oldstate);
}

static inline uint32_t pcg_mcg_64_xsl_rr_32_boundedrand_r(struct pcg_state_64* rng,
                                                   uint32_t bound)
{
    uint32_t threshold = -bound % bound;
    for (;;) {
        uint32_t r = pcg_mcg_64_xsl_rr_32_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

#if PCG_HAS_128BIT_OPS
static inline uint64_t pcg_mcg_128_xsl_rr_64_random_r(struct pcg_state_128* rng)
{
    pcg_mcg_128_step_r(rng);
    return pcg_output_xsl_rr_128_64(rng->state);
}
#endif

#if PCG_HAS_128BIT_OPS
static inline uint64_t pcg_mcg_128_xsl_rr_64_boundedrand_r(struct pcg_state_128* rng,
                                                    uint64_t bound)
{
    uint64_t threshold = -bound % bound;
    for (;;) {
        uint64_t r = pcg_mcg_128_xsl_rr_64_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}
#endif

/* Generation functions for XSL RR RR (only defined for "large" types) */

static inline uint64_t pcg_oneseq_64_xsl_rr_rr_64_random_r(struct pcg_state_64* rng)
{
    uint64_t oldstate = rng->state;
    pcg_oneseq_64_step_r(rng);
    return pcg_output_xsl_rr_rr_64_64(oldstate);
}

static inline uint64_t
pcg_oneseq_64_xsl_rr_rr_64_boundedrand_r(struct pcg_state_64* rng,
                                         uint64_t bound)
{
    uint64_t threshold = -bound % bound;
    for (;;) {
        uint64_t r = pcg_oneseq_64_xsl_rr_rr_64_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

#if PCG_HAS_128BIT_OPS
static inline pcg128_t pcg_oneseq_128_xsl_rr_rr_128_random_r(struct pcg_state_128* rng)
{
    pcg_oneseq_128_step_r(rng);
    return pcg_output_xsl_rr_rr_128_128(rng->state);
}
#endif

#if PCG_HAS_128BIT_OPS
static inline pcg128_t
pcg_oneseq_128_xsl_rr_rr_128_boundedrand_r(struct pcg_state_128* rng,
                                           pcg128_t bound)
{
    pcg128_t threshold = -bound % bound;
    for (;;) {
        pcg128_t r = pcg_oneseq_128_xsl_rr_rr_128_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}
#endif

static inline uint64_t pcg_unique_64_xsl_rr_rr_64_random_r(struct pcg_state_64* rng)
{
    uint64_t oldstate = rng->state;
    pcg_unique_64_step_r(rng);
    return pcg_output_xsl_rr_rr_64_64(oldstate);
}

static inline uint64_t
pcg_unique_64_xsl_rr_rr_64_boundedrand_r(struct pcg_state_64* rng,
                                         uint64_t bound)
{
    uint64_t threshold = -bound % bound;
    for (;;) {
        uint64_t r = pcg_unique_64_xsl_rr_rr_64_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

#if PCG_HAS_128BIT_OPS
static inline pcg128_t pcg_unique_128_xsl_rr_rr_128_random_r(struct pcg_state_128* rng)
{
    pcg_unique_128_step_r(rng);
    return pcg_output_xsl_rr_rr_128_128(rng->state);
}
#endif

#if PCG_HAS_128BIT_OPS
static inline pcg128_t
pcg_unique_128_xsl_rr_rr_128_boundedrand_r(struct pcg_state_128* rng,
                                           pcg128_t bound)
{
    pcg128_t threshold = -bound % bound;
    for (;;) {
        pcg128_t r = pcg_unique_128_xsl_rr_rr_128_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}
#endif

static inline uint64_t
pcg_setseq_64_xsl_rr_rr_64_random_r(struct pcg_state_setseq_64* rng)
{
    uint64_t oldstate = rng->state;
    pcg_setseq_64_step_r(rng);
    return pcg_output_xsl_rr_rr_64_64(oldstate);
}

static inline uint64_t
pcg_setseq_64_xsl_rr_rr_64_boundedrand_r(struct pcg_state_setseq_64* rng,
                                         uint64_t bound)
{
    uint64_t threshold = -bound % bound;
    for (;;) {
        uint64_t r = pcg_setseq_64_xsl_rr_rr_64_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

#if PCG_HAS_128BIT_OPS
static inline pcg128_t
pcg_setseq_128_xsl_rr_rr_128_random_r(struct pcg_state_setseq_128* rng)
{
    pcg_setseq_128_step_r(rng);
    return pcg_output_xsl_rr_rr_128_128(rng->state);
}
#endif

#if PCG_HAS_128BIT_OPS
static inline pcg128_t
pcg_setseq_128_xsl_rr_rr_128_boundedrand_r(struct pcg_state_setseq_128* rng,
                                           pcg128_t bound)
{
    pcg128_t threshold = -bound % bound;
    for (;;) {
        pcg128_t r = pcg_setseq_128_xsl_rr_rr_128_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}
#endif

/*** Typedefs */
typedef struct pcg_state_setseq_64      pcg32_random_t;
typedef struct pcg_state_64             pcg32s_random_t;
typedef struct pcg_state_64             pcg32u_random_t;
typedef struct pcg_state_64             pcg32f_random_t;
/*** random_r */
#define pcg32_random_r                  pcg_setseq_64_xsh_rr_32_random_r
#define pcg32s_random_r                 pcg_oneseq_64_xsh_rr_32_random_r
#define pcg32u_random_r                 pcg_unique_64_xsh_rr_32_random_r
#define pcg32f_random_r                 pcg_mcg_64_xsh_rs_32_random_r
/*** boundedrand_r */
#define pcg32_boundedrand_r             pcg_setseq_64_xsh_rr_32_boundedrand_r
#define pcg32s_boundedrand_r            pcg_oneseq_64_xsh_rr_32_boundedrand_r
#define pcg32u_boundedrand_r            pcg_unique_64_xsh_rr_32_boundedrand_r
#define pcg32f_boundedrand_r            pcg_mcg_64_xsh_rs_32_boundedrand_r
/*** srandom_r */
#define pcg32_srandom_r                 pcg_setseq_64_srandom_r
#define pcg32s_srandom_r                pcg_oneseq_64_srandom_r
#define pcg32u_srandom_r                pcg_unique_64_srandom_r
#define pcg32f_srandom_r                pcg_mcg_64_srandom_r
/*** advance_r */
#define pcg32_advance_r                 pcg_setseq_64_advance_r
#define pcg32s_advance_r                pcg_oneseq_64_advance_r
#define pcg32u_advance_r                pcg_unique_64_advance_r
#define pcg32f_advance_r                pcg_mcg_64_advance_r

#if PCG_HAS_128BIT_OPS
/*** Typedefs */
typedef struct pcg_state_setseq_128     pcg64_random_t;
typedef struct pcg_state_128            pcg64s_random_t;
typedef struct pcg_state_128            pcg64u_random_t;
typedef struct pcg_state_128            pcg64f_random_t;
/*** random_r */
#define pcg64_random_r                  pcg_setseq_128_xsl_rr_64_random_r
#define pcg64s_random_r                 pcg_oneseq_128_xsl_rr_64_random_r
#define pcg64u_random_r                 pcg_unique_128_xsl_rr_64_random_r
#define pcg64f_random_r                 pcg_mcg_128_xsl_rr_64_random_r
/*** boundedrand_r */
#define pcg64_boundedrand_r             pcg_setseq_128_xsl_rr_64_boundedrand_r
#define pcg64s_boundedrand_r            pcg_oneseq_128_xsl_rr_64_boundedrand_r
#define pcg64u_boundedrand_r            pcg_unique_128_xsl_rr_64_boundedrand_r
#define pcg64f_boundedrand_r            pcg_mcg_128_xsl_rr_64_boundedrand_r
/*** srandom_r */
#define pcg64_srandom_r                 pcg_setseq_128_srandom_r
#define pcg64s_srandom_r                pcg_oneseq_128_srandom_r
#define pcg64u_srandom_r                pcg_unique_128_srandom_r
#define pcg64f_srandom_r                pcg_mcg_128_srandom_r
/*** advance_r */
#define pcg64_advance_r                 pcg_setseq_128_advance_r
#define pcg64s_advance_r                pcg_oneseq_128_advance_r
#define pcg64u_advance_r                pcg_unique_128_advance_r
#define pcg64f_advance_r                pcg_mcg_128_advance_r
#endif

/*** Typedefs */
typedef struct pcg_state_8              pcg8si_random_t;
typedef struct pcg_state_16             pcg16si_random_t;
typedef struct pcg_state_32             pcg32si_random_t;
typedef struct pcg_state_64             pcg64si_random_t;
/*** random_r */
#define pcg8si_random_r                 pcg_oneseq_8_rxs_m_xs_8_random_r
#define pcg16si_random_r                pcg_oneseq_16_rxs_m_xs_16_random_r
#define pcg32si_random_r                pcg_oneseq_32_rxs_m_xs_32_random_r
#define pcg64si_random_r                pcg_oneseq_64_rxs_m_xs_64_random_r
/*** boundedrand_r */
#define pcg8si_boundedrand_r            pcg_oneseq_8_rxs_m_xs_8_boundedrand_r
#define pcg16si_boundedrand_r           pcg_oneseq_16_rxs_m_xs_16_boundedrand_r
#define pcg32si_boundedrand_r           pcg_oneseq_32_rxs_m_xs_32_boundedrand_r
#define pcg64si_boundedrand_r           pcg_oneseq_64_rxs_m_xs_64_boundedrand_r
/*** srandom_r */
#define pcg8si_srandom_r                pcg_oneseq_8_srandom_r
#define pcg16si_srandom_r               pcg_oneseq_16_srandom_r
#define pcg32si_srandom_r               pcg_oneseq_32_srandom_r
#define pcg64si_srandom_r               pcg_oneseq_64_srandom_r
/*** advance_r */
#define pcg8si_advance_r                pcg_oneseq_8_advance_r
#define pcg16si_advance_r               pcg_oneseq_16_advance_r
#define pcg32si_advance_r               pcg_oneseq_32_advance_r
#define pcg64si_advance_r               pcg_oneseq_64_advance_r

#if PCG_HAS_128BIT_OPS
typedef struct pcg_state_128        pcg128si_random_t;
#define pcg128si_random_r           pcg_oneseq_128_rxs_m_xs_128_random_r
#define pcg128si_boundedrand_r      pcg_oneseq_128_rxs_m_xs_128_boundedrand_r
#define pcg128si_srandom_r          pcg_oneseq_128_srandom_r
#define pcg128si_advance_r          pcg_oneseq_128_advance_r
#endif

/*** Typedefs */
typedef struct pcg_state_setseq_8       pcg8i_random_t;
typedef struct pcg_state_setseq_16      pcg16i_random_t;
typedef struct pcg_state_setseq_32      pcg32i_random_t;
typedef struct pcg_state_setseq_64      pcg64i_random_t;
/*** random_r */
#define pcg8i_random_r                  pcg_setseq_8_rxs_m_xs_8_random_r
#define pcg16i_random_r                 pcg_setseq_16_rxs_m_xs_16_random_r
#define pcg32i_random_r                 pcg_setseq_32_rxs_m_xs_32_random_r
#define pcg64i_random_r                 pcg_setseq_64_rxs_m_xs_64_random_r
/*** boundedrand_r */
#define pcg8i_boundedrand_r             pcg_setseq_8_rxs_m_xs_8_boundedrand_r
#define pcg16i_boundedrand_r            pcg_setseq_16_rxs_m_xs_16_boundedrand_r
#define pcg32i_boundedrand_r            pcg_setseq_32_rxs_m_xs_32_boundedrand_r
#define pcg64i_boundedrand_r            pcg_setseq_64_rxs_m_xs_64_boundedrand_r
/*** srandom_r */
#define pcg8i_srandom_r                 pcg_setseq_8_srandom_r
#define pcg16i_srandom_r                pcg_setseq_16_srandom_r
#define pcg32i_srandom_r                pcg_setseq_32_srandom_r
#define pcg64i_srandom_r                pcg_setseq_64_srandom_r
/*** advance_r */
#define pcg8i_advance_r                 pcg_setseq_8_advance_r
#define pcg16i_advance_r                pcg_setseq_16_advance_r
#define pcg32i_advance_r                pcg_setseq_32_advance_r
#define pcg64i_advance_r                pcg_setseq_64_advance_r

#if PCG_HAS_128BIT_OPS
typedef struct pcg_state_setseq_128   pcg128i_random_t;
#define pcg128i_random_r              pcg_setseq_128_rxs_m_xs_128_random_r
#define pcg128i_boundedrand_r         pcg_setseq_128_rxs_m_xs_128_boundedrand_r
#define pcg128i_srandom_r             pcg_setseq_128_srandom_r
#define pcg128i_advance_r             pcg_setseq_128_advance_r
#endif

/*
 * Static initialization constants (if you can't call srandom for some
 * bizarre reason).
 */

#define PCG32_INITIALIZER       PCG_STATE_SETSEQ_64_INITIALIZER
#define PCG32U_INITIALIZER      PCG_STATE_UNIQUE_64_INITIALIZER
#define PCG32S_INITIALIZER      PCG_STATE_ONESEQ_64_INITIALIZER
#define PCG32F_INITIALIZER      PCG_STATE_MCG_64_INITIALIZER

#if PCG_HAS_128BIT_OPS
#define PCG64_INITIALIZER       PCG_STATE_SETSEQ_128_INITIALIZER
#define PCG64U_INITIALIZER      PCG_STATE_UNIQUE_128_INITIALIZER
#define PCG64S_INITIALIZER      PCG_STATE_ONESEQ_128_INITIALIZER
#define PCG64F_INITIALIZER      PCG_STATE_MCG_128_INITIALIZER
#endif

#define PCG8SI_INITIALIZER      PCG_STATE_ONESEQ_8_INITIALIZER
#define PCG16SI_INITIALIZER     PCG_STATE_ONESEQ_16_INITIALIZER
#define PCG32SI_INITIALIZER     PCG_STATE_ONESEQ_32_INITIALIZER
#define PCG64SI_INITIALIZER     PCG_STATE_ONESEQ_64_INITIALIZER
#if PCG_HAS_128BIT_OPS
#define PCG128SI_INITIALIZER    PCG_STATE_ONESEQ_128_INITIALIZER
#endif

#define PCG8I_INITIALIZER       PCG_STATE_SETSEQ_8_INITIALIZER
#define PCG16I_INITIALIZER      PCG_STATE_SETSEQ_16_INITIALIZER
#define PCG32I_INITIALIZER      PCG_STATE_SETSEQ_32_INITIALIZER
#define PCG64I_INITIALIZER      PCG_STATE_SETSEQ_64_INITIALIZER
#if PCG_HAS_128BIT_OPS
#define PCG128I_INITIALIZER     PCG_STATE_SETSEQ_128_INITIALIZER
#endif

static inline uint64_t pcg_advance_lcg_64(uint64_t state, uint64_t delta, uint64_t cur_mult, uint64_t cur_plus) {
  //
  // For some reason it's not included in the pcg header file even though it's tiny.
  uint64_t acc_mult = 1u;
  uint64_t acc_plus = 0u;
  while(delta > 0) {
    if(delta & 1) {
      acc_mult *= cur_mult;
      acc_plus = acc_plus * cur_mult + cur_plus;
    }
    cur_plus = (cur_mult + 1) * cur_plus;
    cur_mult *= cur_mult;
    delta /= 2;
  }
  return acc_mult * state + acc_plus;
}

#if __cplusplus
}
#endif

#endif /* PCG_VARIANTS_H_INCLUDED */

#ifndef V_HASH_IMPL_H
#define V_HASH_IMPL_H 1
#include <stdint.h>

#if __cplusplus
extern "C" {
#endif

static inline uint64_t vhash(const void *dat, size_t len, uint64_t seed) {
  return wyhash(dat, len, seed, _wyp);
}

static inline uint64_t vhash64(uint64_t x, uint64_t seed) {
  return wyhash64(x, seed);
}

static inline uint64_t vhash64_quick(uint64_t x) {
  // Murmur3 based mixer optimized for low entropy keys
  // Mix 13 from https://zimbry.blogspot.com/2011/09/better-bit-mixing-improving-on.html
  // This is actually considerably better than the base murmurhash
  // Note that this function is invertible.
  uint64_t magic1 = 0xbf58476d1ce4e5b9ull;
  uint64_t magic2 = 0x94d049bb133111ebull;

  uint64_t shift1 = 30;
  uint64_t shift2 = 27;
  uint64_t shift3 = 31;

  x ^= (x >> shift1);
  x *= magic1;
  x ^= (x >> shift2);
  x *= magic2;
  x ^= (x >> shift3);

  return x;
}

struct vrandom_state {
  pcg32_random_t state;
};

static inline void vsrandom(vrandom_state * state, uint64_t seed, uint64_t streamid) {
  return pcg32_srandom_r(&state->state, seed, streamid);
}
static inline uint32_t vrandom(vrandom_state * state) {
  return pcg32_random_r(&state->state);
}
static inline uint32_t vrandom_bounded(vrandom_state * state, uint64_t bounds) {
  return pcg32_boundedrand_r(&state->state, bounds); 
}

static inline double vrandom_double(vrandom_state * state) {
  return (double)vrandom(state) * 0x1.0p-32;
}

static inline void vrandom_advance(vrandom_state * state, uint64_t n) {
  pcg32_advance_r(&state->state, n);
}

#if __cplusplus
}
#endif

#endif
