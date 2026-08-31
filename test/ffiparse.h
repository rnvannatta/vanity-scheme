#pragma once
#include <stddef.h>

// integer constant expressions
enum {
  NEG = -1,
  SHL = 1 << 10,
  SHR = 1024 >> 3,
  MASK = (0xFFu | 0x100) & ~3,
  TERN = 0 ? 7 : 42,
  CMP = (3 <= 4) + (5 == 5) + (2 != 2),
  PREC = 2 + 3 * 4,
  PREC2 = (2 + 3) * 4,
  SUFF = 100L,
  HEXSUFF = 0x10UL,
  DIV = -7 / 2,
  MOD = 7 % 4,
  XOR = 5 ^ 3,
  LOG = (1 && 2) + (0 || 8 > 2) + !5 + !0,
  WRAP = 0xFFFFFFFFFFFFFFFF & 0xFF,
  WRAP2 = -1 == 0xFFFFFFFFFFFFFFFFULL,
  WIDE = 1LL << 40 >> 32,
};

// (void) parameter lists
int rand(void);
void srand(unsigned int seed);

// enum constants usable in later integer constant expressions
enum { BASE = 4, TWICE = BASE * 2, NEXT };
enum { OTHER = TWICE + NEXT };

// [static n] can reference enum constants; strings must have n chars counting the nul
int strncmp(const char a[static BASE], const char b[static 1], size_t n);

void * malloc(size_t);
void free(void *);

// extern variables become getter/setter shims
extern int opterr;
