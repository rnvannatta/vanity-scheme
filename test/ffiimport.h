#pragma once
#include <stddef.h>

// duplicate declares are ignored
typedef int myint;
typedef int myint;
typedef myint hell;
typedef hell myint;

enum { A, B, C, D = 0xFF, E };

// duplicate declares are ignored
float sqrtf(float), fabsf(float);
float sqrtf(float), fabsf(float);
void * malloc(size_t);
void free(void *);
myint memcmp(const void*, const void*, size_t);
myint strcmp(const char*, const char*);
