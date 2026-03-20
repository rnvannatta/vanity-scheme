#include <stdint.h>
#include <stdbool.h>
#include <stdatomic.h>
#ifdef __x86_64__
# include <x86intrin.h>
# include <cpuid.h>
# ifdef _WIN32
#   define WIN32_LEAN_AND_MEAN
#   include <windows.h>
# else
#   include <time.h>
# endif
#elif defined(__EMSCRIPTEN__)
#include <emscripten/emscripten.h>
#include <time.h>
#endif

#ifdef __linux__
#define BEST_MONOTONIC_CLOCK CLOCK_MONOTONIC_RAW
#else
#define BEST_MONOTONIC_CLOCK CLOCK_MONOTONIC
#endif

static uint64_t jiffy_epoch;
#ifdef __x86_64__
enum {
#ifdef JIFFY_NO_RDTSC
  DISABLE_RDTSC = 1
#else
  DISABLE_RDTSC = 0
#endif
};
static bool use_tsc;
static _Atomic uint64_t jiffies_per_sec;
static bool has_invariant_tsc(void) {
  if(DISABLE_RDTSC)
    return false;

  unsigned int eax, ebx, ecx, edx;

  if (__get_cpuid_max(0x80000000, NULL) < 0x80000007)
      return 0;

  __cpuid(0x80000007, eax, ebx, ecx, edx);

  return edx & (1u << 8);
}
#ifdef _WIN32
static LARGE_INTEGER qpc_epoch;
#else
static struct timespec gettime_epoch;
#endif
#endif

static uint64_t current_jiffy_fallback();
__attribute__((constructor))
static void init_jiffies(void) {
#ifdef __x86_64__
  use_tsc = has_invariant_tsc();
  if(use_tsc) {
#ifdef _WIN64
    QueryPerformanceCounter(&qpc_epoch);
    jiffy_epoch = __rdtscp(&(unsigned int){0});
    _mm_lfence();
#else
    clock_gettime(BEST_MONOTONIC_CLOCK, &gettime_epoch);
    jiffy_epoch = __rdtscp(&(unsigned int){0});
    _mm_lfence();
#endif
    return;
  }
#endif
  jiffy_epoch = current_jiffy_fallback();
}

static uint64_t one_billion = 1000ull * 1000 * 1000;
static uint64_t current_jiffy_fallback() {
  (void)one_billion;
#if defined(__EMSCRIPTEN__)
  double d = emscripten_get_now();
  uint64_t ret = d * 1000;
#elif defined(__unix__)
  struct timespec nanotime;
  // using clock monotonic to avoid skew? the adjustments are allegedly gentle
  clock_gettime(BEST_MONOTONIC_CLOCK, &nanotime);
  uint64_t ret = nanotime.tv_nsec + one_billion * nanotime.tv_sec;
#elif defined(_WIN64)
  LARGE_INTEGER ticks;
  QueryPerformanceCounter(&ticks);
  uint64_t ret = ticks.QuadPart;
#else
  uint64_t ret = 0;
#endif
  return ret - jiffy_epoch;
}

static uint64_t jiffies_per_second_fallback() {
#if defined(__EMSCRIPTEN__)
  return 1000 * 1000;
#elif defined(__unix__)
  return one_billion;
#elif defined(_WIN64)
  LARGE_INTEGER ticks_per_second;
  QueryPerformanceFrequency(&ticks_per_second);
  return ticks_per_second.QuadPart;
#endif
  return 0;
}

#ifdef __x86_64__
uint64_t current_jiffy_tsc(void) {
  unsigned int aux;
  uint64_t now = __rdtscp(&aux);
  asm volatile ("" ::: "memory");
  // not necessary because the cas on x86 is always seq cst
  //_mm_lfence();
  uint64_t delta = now - jiffy_epoch;

  static _Atomic uint64_t last;
  uint64_t prev = atomic_load_explicit(&last, memory_order_relaxed);
  while(1) {
    uint64_t ret = (delta > prev) ? delta : prev;
    // xchg is always seq cst so meh. the seq cst is load bearing for rdtscp though
    if (atomic_compare_exchange_weak_explicit(
          &last, &prev, ret,
          memory_order_seq_cst,
          memory_order_seq_cst)) {
      return ret;
    }
  }
}

const double ONE_BILLION = 1000000000.;

// My CPU (Zen+) does not support the CPUID leaf that has TSC frequency info
// That is a surprisingly recent leaf.
uint64_t jiffies_per_second_tsc(void) {
  uint64_t jps = atomic_load_explicit(&jiffies_per_sec, memory_order_relaxed);
  if(!jps) {
    double elapsed_ns;
    uint64_t jiffy_now;
#ifdef _WIN64
    LARGE_INTEGER qpc_now, qpc_freq;
    QueryPerformanceFrequency(&qpc_freq);
    do {
      QueryPerformanceCounter(&qpc_now);
      jiffy_now = __rdtscp(&(unsigned int){0});
      _mm_lfence();

      elapsed_ns = (double)(qpc_now.QuadPart - qpc_epoch.QuadPart) * ONE_BILLION / (double)qpc_freq.QuadPart;
    } while(elapsed_ns < 0.1 *  ONE_BILLION);
#else
    struct timespec gettime_now;
    do {
      asm volatile ("" ::: "memory");
      clock_gettime(BEST_MONOTONIC_CLOCK, &gettime_now);
      jiffy_now = __rdtscp(&(unsigned int){0});
      _mm_lfence();
      asm volatile ("" ::: "memory");
      
      elapsed_ns = (gettime_now.tv_sec - gettime_epoch.tv_sec) * 1000000000ull
                   + (gettime_now.tv_nsec - gettime_epoch.tv_nsec);
    } while(elapsed_ns < 0.1 * ONE_BILLION);
#endif
    jps = (jiffy_now - jiffy_epoch) * ONE_BILLION / elapsed_ns;
    // technically possible for multiple calls to jiffies_per_second to return different results
    // but meh. a pretty benign race, just some fluctuation in low order bits.
    atomic_store_explicit(&jiffies_per_sec, jps, memory_order_relaxed);
  }

  return jps;
}
#endif

uint64_t current_jiffy(void) {
#ifdef __x86_64__
  if(use_tsc)
    return current_jiffy_tsc();
#endif
  return current_jiffy_fallback();
}
uint64_t jiffies_per_second(void) {
#ifdef __x86_64__
  if(use_tsc)
    return jiffies_per_second_tsc();
#endif
  return jiffies_per_second_fallback();
}


#ifdef JIFFY_TEST
#ifdef __unix__
#include <unistd.h>
#endif
#include <stdio.h>
int main() {
#ifdef __x86_64__
  printf("invariant tsc?: %d\n", has_invariant_tsc());
#endif
  uint64_t a, b, c, d;
  //usleep(1000 * 100);
  a = current_jiffy();
  uint64_t jps = jiffies_per_second();
  b = current_jiffy();
  //jps = jiffies_per_second();
  c = current_jiffy();
#ifdef _WIN64
  Sleep(1000);
#else
  sleep(1);
#endif
  d = current_jiffy();
  printf("jiffies per: %llu\n", jps);
  printf("a: %llu\n", a);
  printf("b: %llu\n", b);
  printf("c: %llu\n", c);
  printf("(c - b) / jps: %.20f\n", 1000 * 1000 * 1000.0 * (c - b) / (double)jps);
  printf("(d - c) / jps: %.20f\n", (d - c) / (double)jps);
}
#endif
