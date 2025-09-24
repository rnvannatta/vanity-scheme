#ifndef INTERN_PRIVATE_H
#define INTERN_PRIVATE_H
#include "vscheme/vruntime.h"
// Interns the symbol, assuming it is static memory.
// If the symbol was already interned, returns the interned address.
VBlob * VInternSymbol(int hash, VBlob * sym);
// Creates an interned symbol. Fast pre-hashed path.
// Length is excluding null terminal
VBlob * VCreateSymbol(int hash, char const * name, int length);
// Creates an interned symbol. Slow dynamic path for use in read and string->symbol.
// Length is excluding null terminal
VBlob * VCreateSymbolSlow(char const * name, int length);
#endif
