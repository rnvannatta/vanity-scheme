/* Copyright 2023-2024 Richard N Van Natta
 *
 * This file is part of the Vanity Scheme Compiler.
 *
 * The Vanity Scheme Compiler is free software: you can redistribute it
 * and/or modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation, either version 2 of the
 * License, or (at your option) any later version.
 * 
 * The Vanity Scheme Compiler is distributed in the hope that it will be
 * useful, but WITHOUT ANY WARRANTY; without even the implied warranty
 * of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with the Vanity Scheme Compiler.
 *
 * If not, see <https://www.gnu.org/licenses/>.
 *
 * This work is published with additional permission, the Vanity Scheme
 * Runtime Library Exceptions, which should have been included with the
 * Vanity Scheme Compiler.
 *
 * If not, visit <https://github.com/rnvannatta>
 */
#include "vscheme/vruntime.h"
#include "vscheme/vlibrary.h"
#include "vscheme/vinlines.h"
#include <stdarg.h>
static struct { VBlob sym; char bytes[21]; } _V10string_D509 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10string_D508 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[30]; } _V10string_D507 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "_V0vanity_V0pretty__print_V20" };
static struct { VBlob sym; char bytes[33]; } _V10string_D506 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
static struct { VBlob sym; char bytes[33]; } _V10string_D505 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0match_V20" };
static struct { VBlob sym; char bytes[37]; } _V10string_D504 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "_V0vanity_V0compiler_V0variables_V20" };
static struct { VBlob sym; char bytes[31]; } _V10string_D503 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "_V0vanity_V0compiler_V0ffi_V20" };
static struct { VBlob sym; char bytes[36]; } _V10string_D502 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 36 }, "_V0vanity_V0compiler_V0bytecode_V20" };
VWEAK VWORD _V0string_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0string_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "string\?" };
VWEAK VWORD _V0cadar;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0cadar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "cadar" };
VWEAK VWORD _V0cdr;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0cdr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "cdr" };
VWEAK VWORD _V0caar;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0caar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "caar" };
VWEAK VWORD _V0eqv_Q;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0eqv_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "eqv\?" };
VWEAK VWORD _V0pair_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0pair_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "pair\?" };
VWEAK VWORD _V0car;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0car = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "car" };
VWEAK VWORD _V0integer_Q;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0integer_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "integer\?" };
VWEAK VWORD _V0number_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0number_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "number\?" };
VWEAK VWORD _V0char_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0char_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "char\?" };
VWEAK VWORD _V0eq_Q;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0eq_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "eq\?" };
VWEAK VWORD _V0symbol_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0symbol_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "symbol\?" };
VWEAK VWORD _V0gensym;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0gensym = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "gensym" };
VWEAK VWORD _V0call__with__values;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0call__with__values = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "call-with-values" };
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "error" };
VWEAK VWORD _V0call_Wcc;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0call_Wcc = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "call/cc" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
VWEAK VWORD _V0iota;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0iota = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "iota" };
VWEAK VWORD _V0length;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "length" };
VWEAK VWORD _V0sprintf;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0sprintf = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "sprintf" };
VWEAK VWORD _V0string___Gsymbol;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0string___Gsymbol = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "string->symbol" };
VWEAK VWORD _V0compiler__error;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0compiler__error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "compiler-error" };
VWEAK VWORD _V0append;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0append = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "append" };
VWEAK VWORD _V0map;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "map" };
VWEAK VWORD _V0pretty__print;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0pretty__print = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "pretty-print" };
VWEAK VWORD _V0null_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0null_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "null\?" };
VWEAK VWORD _V0not;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0not = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "not" };
VWEAK VWORD _V0reverse;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0reverse = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "reverse" };
VWEAK VWORD _V0print__bytecode;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0print__bytecode = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "print-bytecode" };
static struct { VBlob sym; char bytes[40]; } _V10string_D501 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 40 }, "shared library has toplevel expressions" };
static struct { VBlob sym; char bytes[47]; } _V10string_D500 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 47 }, "bytecode doesn't support foreign functions yet" };
static struct { VBlob sym; char bytes[42]; } _V10string_D499 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 42 }, "bytecode doesn't support foreign declares" };
VWEAK VWORD _V0main;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0main = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "main" };
static struct { VBlob sym; char bytes[13]; } _V10string_D498 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "##toplevel~A" };
static struct { VBlob sym; char bytes[38]; } _V10string_D497 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 38 }, "bytecode doesn't support case lambdas" };
VWEAK VWORD _V0func;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0func = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "func" };
VWEAK VWORD _V0save;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0save = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "save" };
VWEAK VWORD _V0arg__check;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0arg__check = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "arg-check" };
VWEAK VWORD _V0arg__min;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0arg__min = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "arg-min" };
VWEAK VWORD _V0_P;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_P = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "+" };
VWEAK VWORD _V10inline;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V10inline = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "##inline" };
VWEAK VWORD _V0define;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0define = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "define" };
VWEAK VWORD _V0set_B;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "set!" };
static struct { VBlob sym; char bytes[34]; } _V10string_D496 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "print-bytecode: not supported yet" };
VWEAK VWORD _V0if;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0if = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "if" };
static struct { VBlob sym; char bytes[2]; } _V10string_D495 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "L" };
VWEAK VWORD _V0t;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0t = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "t" };
VWEAK VWORD _V0bf;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0bf = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "bf" };
VWEAK VWORD _V0call;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0call = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "call" };
static struct { VBlob sym; char bytes[26]; } _V10string_D494 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "match statement exhausted" };
VWEAK VWORD _V0lookup;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lookup = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "lookup" };
VWEAK VWORD _V10foreign_Dfunction;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10foreign_Dfunction = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##foreign.function" };
static struct { VBlob sym; char bytes[52]; } _V10string_D493 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 52 }, "print-bytecode: foreign functions not supported yet" };
VWEAK VWORD _V0CLOSURE;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0CLOSURE = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "CLOSURE" };
VWEAK VWORD _V0bruijn;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0bruijn = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "bruijn" };
VWEAK VWORD _V0close;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0close = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "close" };
VWEAK VWORD _V0SYMBOL;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0SYMBOL = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "SYMBOL" };
VWEAK VWORD _V10string;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V10string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "##string" };
VWEAK VWORD _V0STRING;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0STRING = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "STRING" };
VWEAK VWORD _V0quote;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0quote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "quote" };
static struct { VBlob sym; char bytes[37]; } _V10string_D492 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "print-bytecode: unknown literal type" };
VWEAK VWORD _V0mov;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0mov = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "mov" };
static struct { VBlob sym; char bytes[60]; } _V10string_D491 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 60 }, "process-literal-declaration: unknown entry in literal table" };
VWEAK VWORD _V0intrinsic;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0intrinsic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "intrinsic" };
VWEAK VWORD _V10intrinsic;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10intrinsic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##intrinsic" };
VWEAK VWORD _V0string;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "string" };
VWEAK VWORD _V0symbol;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0symbol = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "symbol" };
static __attribute__((constructor)) void VDllMain1() {
  _V0string_Q = VEncodePointer(VLookupConstant("_V0string_Q", &_VW_V0string_Q), VPOINTER_OTHER);
  _V0cadar = VEncodePointer(VLookupConstant("_V0cadar", &_VW_V0cadar), VPOINTER_OTHER);
  _V0cdr = VEncodePointer(VLookupConstant("_V0cdr", &_VW_V0cdr), VPOINTER_OTHER);
  _V0caar = VEncodePointer(VLookupConstant("_V0caar", &_VW_V0caar), VPOINTER_OTHER);
  _V0eqv_Q = VEncodePointer(VLookupConstant("_V0eqv_Q", &_VW_V0eqv_Q), VPOINTER_OTHER);
  _V0pair_Q = VEncodePointer(VLookupConstant("_V0pair_Q", &_VW_V0pair_Q), VPOINTER_OTHER);
  _V0car = VEncodePointer(VLookupConstant("_V0car", &_VW_V0car), VPOINTER_OTHER);
  _V0integer_Q = VEncodePointer(VLookupConstant("_V0integer_Q", &_VW_V0integer_Q), VPOINTER_OTHER);
  _V0number_Q = VEncodePointer(VLookupConstant("_V0number_Q", &_VW_V0number_Q), VPOINTER_OTHER);
  _V0char_Q = VEncodePointer(VLookupConstant("_V0char_Q", &_VW_V0char_Q), VPOINTER_OTHER);
  _V0eq_Q = VEncodePointer(VLookupConstant("_V0eq_Q", &_VW_V0eq_Q), VPOINTER_OTHER);
  _V0symbol_Q = VEncodePointer(VLookupConstant("_V0symbol_Q", &_VW_V0symbol_Q), VPOINTER_OTHER);
  _V0gensym = VEncodePointer(VLookupConstant("_V0gensym", &_VW_V0gensym), VPOINTER_OTHER);
  _V0call__with__values = VEncodePointer(VLookupConstant("_V0call__with__values", &_VW_V0call__with__values), VPOINTER_OTHER);
  _V0error = VEncodePointer(VLookupConstant("_V0error", &_VW_V0error), VPOINTER_OTHER);
  _V0call_Wcc = VEncodePointer(VLookupConstant("_V0call_Wcc", &_VW_V0call_Wcc), VPOINTER_OTHER);
  _V0equal_Q = VEncodePointer(VLookupConstant("_V0equal_Q", &_VW_V0equal_Q), VPOINTER_OTHER);
  _V0iota = VEncodePointer(VLookupConstant("_V0iota", &_VW_V0iota), VPOINTER_OTHER);
  _V0length = VEncodePointer(VLookupConstant("_V0length", &_VW_V0length), VPOINTER_OTHER);
  _V0sprintf = VEncodePointer(VLookupConstant("_V0sprintf", &_VW_V0sprintf), VPOINTER_OTHER);
  _V0string___Gsymbol = VEncodePointer(VLookupConstant("_V0string___Gsymbol", &_VW_V0string___Gsymbol), VPOINTER_OTHER);
  _V0compiler__error = VEncodePointer(VLookupConstant("_V0compiler__error", &_VW_V0compiler__error), VPOINTER_OTHER);
  _V0append = VEncodePointer(VLookupConstant("_V0append", &_VW_V0append), VPOINTER_OTHER);
  _V0map = VEncodePointer(VLookupConstant("_V0map", &_VW_V0map), VPOINTER_OTHER);
  _V0pretty__print = VEncodePointer(VLookupConstant("_V0pretty__print", &_VW_V0pretty__print), VPOINTER_OTHER);
  _V0null_Q = VEncodePointer(VLookupConstant("_V0null_Q", &_VW_V0null_Q), VPOINTER_OTHER);
  _V0not = VEncodePointer(VLookupConstant("_V0not", &_VW_V0not), VPOINTER_OTHER);
  _V0reverse = VEncodePointer(VLookupConstant("_V0reverse", &_VW_V0reverse), VPOINTER_OTHER);
  _V0print__bytecode = VEncodePointer(VLookupConstant("_V0print__bytecode", &_VW_V0print__bytecode), VPOINTER_OTHER);
  _V0main = VEncodePointer(VLookupConstant("_V0main", &_VW_V0main), VPOINTER_OTHER);
  _V0func = VEncodePointer(VLookupConstant("_V0func", &_VW_V0func), VPOINTER_OTHER);
  _V0save = VEncodePointer(VLookupConstant("_V0save", &_VW_V0save), VPOINTER_OTHER);
  _V0arg__check = VEncodePointer(VLookupConstant("_V0arg__check", &_VW_V0arg__check), VPOINTER_OTHER);
  _V0arg__min = VEncodePointer(VLookupConstant("_V0arg__min", &_VW_V0arg__min), VPOINTER_OTHER);
  _V0_P = VEncodePointer(VLookupConstant("_V0_P", &_VW_V0_P), VPOINTER_OTHER);
  _V10inline = VEncodePointer(VLookupConstant("_V10inline", &_VW_V10inline), VPOINTER_OTHER);
  _V0define = VEncodePointer(VLookupConstant("_V0define", &_VW_V0define), VPOINTER_OTHER);
  _V0set_B = VEncodePointer(VLookupConstant("_V0set_B", &_VW_V0set_B), VPOINTER_OTHER);
  _V0if = VEncodePointer(VLookupConstant("_V0if", &_VW_V0if), VPOINTER_OTHER);
  _V0t = VEncodePointer(VLookupConstant("_V0t", &_VW_V0t), VPOINTER_OTHER);
  _V0bf = VEncodePointer(VLookupConstant("_V0bf", &_VW_V0bf), VPOINTER_OTHER);
  _V0call = VEncodePointer(VLookupConstant("_V0call", &_VW_V0call), VPOINTER_OTHER);
  _V0lookup = VEncodePointer(VLookupConstant("_V0lookup", &_VW_V0lookup), VPOINTER_OTHER);
  _V10foreign_Dfunction = VEncodePointer(VLookupConstant("_V10foreign_Dfunction", &_VW_V10foreign_Dfunction), VPOINTER_OTHER);
  _V0CLOSURE = VEncodePointer(VLookupConstant("_V0CLOSURE", &_VW_V0CLOSURE), VPOINTER_OTHER);
  _V0bruijn = VEncodePointer(VLookupConstant("_V0bruijn", &_VW_V0bruijn), VPOINTER_OTHER);
  _V0close = VEncodePointer(VLookupConstant("_V0close", &_VW_V0close), VPOINTER_OTHER);
  _V0SYMBOL = VEncodePointer(VLookupConstant("_V0SYMBOL", &_VW_V0SYMBOL), VPOINTER_OTHER);
  _V10string = VEncodePointer(VLookupConstant("_V10string", &_VW_V10string), VPOINTER_OTHER);
  _V0STRING = VEncodePointer(VLookupConstant("_V0STRING", &_VW_V0STRING), VPOINTER_OTHER);
  _V0quote = VEncodePointer(VLookupConstant("_V0quote", &_VW_V0quote), VPOINTER_OTHER);
  _V0mov = VEncodePointer(VLookupConstant("_V0mov", &_VW_V0mov), VPOINTER_OTHER);
  _V0intrinsic = VEncodePointer(VLookupConstant("_V0intrinsic", &_VW_V0intrinsic), VPOINTER_OTHER);
  _V10intrinsic = VEncodePointer(VLookupConstant("_V10intrinsic", &_VW_V10intrinsic), VPOINTER_OTHER);
  _V0string = VEncodePointer(VLookupConstant("_V0string", &_VW_V0string), VPOINTER_OTHER);
  _V0symbol = VEncodePointer(VLookupConstant("_V0symbol", &_VW_V0symbol), VPOINTER_OTHER);
}
static void _V0vanity_V0compiler_V0bytecode_V20_k39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k39, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.108 3 0) (##inline ##sys.cons 'symbol (##inline ##sys.cons (bruijn ##x.111 0 0) '())))
V_CALL(upenv->up->up->vars[0], runtime,
      VInlineCons(
        _V0symbol,
        VInlineCons(
        _var0,
        VNULL)));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k43, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.108 6 0) (##inline ##sys.cons 'string (##inline ##sys.cons (bruijn ##x.114 1 0) (##inline ##sys.cons (bruijn ##x.116 0 0) '()))))
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VInlineCons(
        _V0string,
        VInlineCons(
        upenv->vars[0],
        VInlineCons(
        _var0,
        VNULL))));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k42" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k42, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn car 7 6) (close _V0vanity_V0compiler_V0bytecode_V20_k43) (bruijn lit 5 1))
V_CALL(VGetArg(upenv, 7-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k43, env)}),
      VGetArg(upenv, 5-1, 1));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k47" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k47, runtime, upenv, 1, argc, _var0) {
  // ((bruijn eqv? 10 4) (bruijn ##k.123 1 0) (bruijn ##x.124 0 0) '##intrinsic)
V_CALL(VGetArg(upenv, 10-1, 4), runtime,
      upenv->vars[0],
      _var0,
      _V10intrinsic);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k46" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k46, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.122 1 0) ((bruijn caar 9 3) (close _V0vanity_V0compiler_V0bytecode_V20_k47) (bruijn lit 7 1)) ((bruijn ##k.123 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 9-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k47, env)}),
      VGetArg(upenv, 7-1, 1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k50" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k50, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.108 9 0) (##inline ##sys.cons 'intrinsic (##inline ##sys.cons (bruijn ##x.119 1 0) (##inline ##sys.cons (bruijn ##x.121 0 0) '()))))
V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VInlineCons(
        _V0intrinsic,
        VInlineCons(
        upenv->vars[0],
        VInlineCons(
        _var0,
        VNULL))));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k49" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k49, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 10 2) (close _V0vanity_V0compiler_V0bytecode_V20_k50) (bruijn lit 8 1))
V_CALL(VGetArg(upenv, 10-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k50, env)}),
      VGetArg(upenv, 8-1, 1));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k48" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k48, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.117 0 0) ((bruijn cadar 9 1) (close _V0vanity_V0compiler_V0bytecode_V20_k49) (bruijn lit 7 1)) ((bruijn compiler-error 9 21) (bruijn ##k.108 7 0) (##string ##string.491) (bruijn lit 7 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k49, env)}),
      VGetArg(upenv, 7-1, 1));
} else {
V_CALL(VGetArg(upenv, 9-1, 21), runtime,
      VGetArg(upenv, 7-1, 0),
      VEncodePointer(&_V10string_D491.sym, VPOINTER_OTHER),
      VGetArg(upenv, 7-1, 1));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k45" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k45, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0bytecode_V20_k46) (close _V0vanity_V0compiler_V0bytecode_V20_k48))
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k46, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k48, env)}));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k44" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k44, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn pair? 7 5) (close _V0vanity_V0compiler_V0bytecode_V20_k45) (bruijn ##x.125 0 0))
V_CALL(VGetArg(upenv, 7-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k45, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k41, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.112 0 0) ((bruijn cdr 6 2) (close _V0vanity_V0compiler_V0bytecode_V20_k42) (bruijn lit 4 1)) ((bruijn car 6 6) (close _V0vanity_V0compiler_V0bytecode_V20_k44) (bruijn lit 4 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 6-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k42, env)}),
      upenv->up->up->up->vars[1]);
} else {
V_CALL(VGetArg(upenv, 6-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k44, env)}),
      upenv->up->up->up->vars[1]);
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k40, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string? 5 0) (close _V0vanity_V0compiler_V0bytecode_V20_k41) (bruijn ##x.126 0 0))
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k41, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k38, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.109 0 0) ((bruijn car 4 6) (close _V0vanity_V0compiler_V0bytecode_V20_k39) (bruijn lit 2 1)) ((bruijn car 4 6) (close _V0vanity_V0compiler_V0bytecode_V20_k40) (bruijn lit 2 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->up->vars[6], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k39, env)}),
      upenv->up->vars[1]);
} else {
V_CALL(upenv->up->up->up->vars[6], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k40, env)}),
      upenv->up->vars[1]);
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k37" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k37, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn symbol? 3 11) (close _V0vanity_V0compiler_V0bytecode_V20_k38) (bruijn ##x.127 0 0))
V_CALL(upenv->up->up->vars[11], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k38, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_lambda3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_lambda3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_lambda3, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda3, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn car 2 6) (close _V0vanity_V0compiler_V0bytecode_V20_k37) (bruijn lit 0 1))
V_CALL(upenv->up->vars[6], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k37, env)}),
      _var1);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k55" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k55, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.136 0 0) ((bruijn ##k.133 3 0) (bruijn ##p.136 0 0)) ((bruijn eq? 7 10) (bruijn ##k.133 3 0) (bruijn x 5 2) #f))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->vars[0], runtime,
      _var0);
} else {
V_CALL(VGetArg(upenv, 7-1, 10), runtime,
      upenv->up->up->vars[0],
      VGetArg(upenv, 5-1, 2),
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k54" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k54, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.135 0 0) ((bruijn ##k.133 2 0) (bruijn ##p.135 0 0)) ((bruijn eq? 6 10) (close _V0vanity_V0compiler_V0bytecode_V20_k55) (bruijn x 4 2) #t))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->vars[0], runtime,
      _var0);
} else {
V_CALL(VGetArg(upenv, 6-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k55, env)}),
      upenv->up->up->up->vars[2],
      VEncodeBool(true));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k53" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k53, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.134 0 0) ((bruijn ##k.133 1 0) (bruijn ##p.134 0 0)) ((bruijn char? 5 9) (close _V0vanity_V0compiler_V0bytecode_V20_k54) (bruijn x 3 2)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      _var0);
} else {
V_CALL(VGetArg(upenv, 5-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k54, env)}),
      upenv->up->up->vars[2]);
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k52" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k52, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.132 1 0) ((bruijn ##k.133 0 0) (bruijn ##p.132 1 0)) ((bruijn number? 4 8) (close _V0vanity_V0compiler_V0bytecode_V20_k53) (bruijn x 2 2)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(_var0, runtime,
      upenv->vars[0]);
} else {
V_CALL(upenv->up->up->up->vars[8], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k53, env)}),
      upenv->up->vars[2]);
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k56" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k56, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.129 0 0) ((bruijn ##k.128 2 0) (##inline ##sys.cons 'mov (##inline ##sys.cons (bruijn reg 2 1) (##inline ##sys.cons (bruijn x 2 2) '())))) ((bruijn compiler-error 4 21) (bruijn ##k.128 2 0) (##string ##string.492) (bruijn x 2 2)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->vars[0], runtime,
      VInlineCons(
        _V0mov,
        VInlineCons(
        upenv->up->vars[1],
        VInlineCons(
        upenv->up->vars[2],
        VNULL))));
} else {
V_CALL(upenv->up->up->up->vars[21], runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V10string_D492.sym, VPOINTER_OTHER),
      upenv->up->vars[2]);
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k51" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k51, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0bytecode_V20_k52) (close _V0vanity_V0compiler_V0bytecode_V20_k56))
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k52, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k56, env)}));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_lambda4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_lambda4, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda4, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn integer? 2 7) (close _V0vanity_V0compiler_V0bytecode_V20_k51) (bruijn x 0 2))
V_CALL(upenv->up->vars[7], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k51, env)}),
      _var2);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k59" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k59, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.4 0 0)) (if (##inline ##sys.null? (##inline ##sys.car (bruijn ##expr.4 0 0))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.4 0 0))) ((bruijn ##kk.1 5 1) (bruijn ##k.235 2 0) (##inline ##sys.cons 'mov (##inline ##sys.cons (bruijn reg 6 1) (##inline ##sys.cons '() '())))) ((bruijn ##k.235 2 0) #f)) ((bruijn ##k.235 2 0) #f)) ((bruijn ##k.235 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCar(
        _var0)))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->vars[0],
      VInlineCons(
        _V0mov,
        VInlineCons(
        VGetArg(upenv, 6-1, 1),
        VInlineCons(
        VNULL,
        VNULL))));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k58" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k58, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.236 0 0) ((close _V0vanity_V0compiler_V0bytecode_V20_k59) (##inline ##sys.cdr (bruijn ##expr.3 2 0))) ((bruijn ##k.235 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k59, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k57" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k57, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.3 1 0)) ((bruijn equal? 6 16) (close _V0vanity_V0compiler_V0bytecode_V20_k58) 'quote (##inline ##sys.car (bruijn ##expr.3 1 0))) ((bruijn ##k.235 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 6-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k58, env)}),
      _V0quote,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k66" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k66, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.8 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.8 0 0))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.6 3 0))) ((bruijn ##kk.1 10 1) (bruijn ##k.218 5 0) (##inline ##sys.cons 'mov (##inline ##sys.cons (bruijn reg 11 1) (##inline ##sys.cons 'STRING (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.8 0 0)) '()))))) ((bruijn ##k.218 5 0) #f)) ((bruijn ##k.218 5 0) #f)) ((bruijn ##k.218 5 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        upenv->up->up->vars[0])))) {
V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      VInlineCons(
        _V0mov,
        VInlineCons(
        VGetArg(upenv, 11-1, 1),
        VInlineCons(
        _V0STRING,
        VInlineCons(
        VInlineCar(
        _var0),
        VNULL)))));
} else {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
} else {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
} else {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k65" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k65, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.222 0 0) ((close _V0vanity_V0compiler_V0bytecode_V20_k66) (##inline ##sys.cdr (bruijn ##expr.7 1 0))) ((bruijn ##k.218 4 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k66, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k64" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k64, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.7 0 0)) ((bruijn equal? 11 16) (close _V0vanity_V0compiler_V0bytecode_V20_k65) '##string (##inline ##sys.car (bruijn ##expr.7 0 0))) ((bruijn ##k.218 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL(VGetArg(upenv, 11-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k65, env)}),
      _V10string,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k63" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k63, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.6 0 0)) ((close _V0vanity_V0compiler_V0bytecode_V20_k64) (##inline ##sys.car (bruijn ##expr.6 0 0))) ((bruijn ##k.218 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k64, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k62" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k62, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.219 0 0) ((close _V0vanity_V0compiler_V0bytecode_V20_k63) (##inline ##sys.cdr (bruijn ##expr.5 2 0))) ((bruijn ##k.218 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k63, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k61" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k61, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.5 1 0)) ((bruijn equal? 8 16) (close _V0vanity_V0compiler_V0bytecode_V20_k62) 'quote (##inline ##sys.car (bruijn ##expr.5 1 0))) ((bruijn ##k.218 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 8-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k62, env)}),
      _V0quote,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k70" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k70, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.10 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.10 0 0))) ((bruijn ##kk.1 9 1) (bruijn ##k.207 2 0) (##inline ##sys.cons 'mov (##inline ##sys.cons (bruijn reg 10 1) (##inline ##sys.cons 'SYMBOL (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.10 0 0)) '()))))) ((bruijn ##k.207 2 0) #f)) ((bruijn ##k.207 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->vars[0],
      VInlineCons(
        _V0mov,
        VInlineCons(
        VGetArg(upenv, 10-1, 1),
        VInlineCons(
        _V0SYMBOL,
        VInlineCons(
        VInlineCar(
        _var0),
        VNULL)))));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k69" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k69, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.208 0 0) ((close _V0vanity_V0compiler_V0bytecode_V20_k70) (##inline ##sys.cdr (bruijn ##expr.9 2 0))) ((bruijn ##k.207 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k70, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k68" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k68, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.9 1 0)) ((bruijn equal? 10 16) (close _V0vanity_V0compiler_V0bytecode_V20_k69) 'quote (##inline ##sys.car (bruijn ##expr.9 1 0))) ((bruijn ##k.207 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 10-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k69, env)}),
      _V0quote,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k74" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k74, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.12 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.12 0 0))) ((bruijn ##kk.1 11 1) (bruijn ##k.197 2 0) (##inline ##sys.cons 'close (##inline ##sys.cons (bruijn reg 12 1) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.12 0 0)) '())))) ((bruijn ##k.197 2 0) #f)) ((bruijn ##k.197 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      upenv->up->vars[0],
      VInlineCons(
        _V0close,
        VInlineCons(
        VGetArg(upenv, 12-1, 1),
        VInlineCons(
        VInlineCar(
        _var0),
        VNULL))));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k73" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k73, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.198 0 0) ((close _V0vanity_V0compiler_V0bytecode_V20_k74) (##inline ##sys.cdr (bruijn ##expr.11 2 0))) ((bruijn ##k.197 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k74, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k72" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k72, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.11 1 0)) ((bruijn equal? 12 16) (close _V0vanity_V0compiler_V0bytecode_V20_k73) 'close (##inline ##sys.car (bruijn ##expr.11 1 0))) ((bruijn ##k.197 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 12-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k73, env)}),
      _V0close,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k80" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k80, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.16 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.16 0 0))) ((bruijn ##kk.1 15 1) (bruijn ##k.184 4 0) (##inline ##sys.cons 'bruijn (##inline ##sys.cons (bruijn reg 16 1) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.15 1 0)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.16 0 0)) '()))))) ((bruijn ##k.184 4 0) #f)) ((bruijn ##k.184 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 15-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VInlineCons(
        _V0bruijn,
        VInlineCons(
        VGetArg(upenv, 16-1, 1),
        VInlineCons(
        VInlineCar(
        upenv->vars[0]),
        VInlineCons(
        VInlineCar(
        _var0),
        VNULL)))));
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k79" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k79, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.15 0 0)) ((close _V0vanity_V0compiler_V0bytecode_V20_k80) (##inline ##sys.cdr (bruijn ##expr.15 0 0))) ((bruijn ##k.184 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k80, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k78" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k78, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.14 0 0)) ((close _V0vanity_V0compiler_V0bytecode_V20_k79) (##inline ##sys.cdr (bruijn ##expr.14 0 0))) ((bruijn ##k.184 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k79, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k77" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k77, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.185 0 0) ((close _V0vanity_V0compiler_V0bytecode_V20_k78) (##inline ##sys.cdr (bruijn ##expr.13 2 0))) ((bruijn ##k.184 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k78, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k76" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k76, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.13 1 0)) ((bruijn equal? 14 16) (close _V0vanity_V0compiler_V0bytecode_V20_k77) 'bruijn (##inline ##sys.car (bruijn ##expr.13 1 0))) ((bruijn ##k.184 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 14-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k77, env)}),
      _V0bruijn,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k84" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k84, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.18 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.18 0 0))) ((bruijn ##kk.1 15 1) (bruijn ##k.173 2 0) (##inline ##sys.cons 'mov (##inline ##sys.cons (bruijn reg 16 1) (##inline ##sys.cons 'STRING (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.18 0 0)) '()))))) ((bruijn ##k.173 2 0) #f)) ((bruijn ##k.173 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 15-1, 1), runtime,
      upenv->up->vars[0],
      VInlineCons(
        _V0mov,
        VInlineCons(
        VGetArg(upenv, 16-1, 1),
        VInlineCons(
        _V0STRING,
        VInlineCons(
        VInlineCar(
        _var0),
        VNULL)))));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k83" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k83, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.174 0 0) ((close _V0vanity_V0compiler_V0bytecode_V20_k84) (##inline ##sys.cdr (bruijn ##expr.17 2 0))) ((bruijn ##k.173 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k84, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k82" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k82, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.17 1 0)) ((bruijn equal? 16 16) (close _V0vanity_V0compiler_V0bytecode_V20_k83) '##string (##inline ##sys.car (bruijn ##expr.17 1 0))) ((bruijn ##k.173 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 16-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k83, env)}),
      _V10string,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k88" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k88, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.20 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.20 0 0))) ((bruijn ##kk.1 17 1) (bruijn ##k.162 2 0) (##inline ##sys.cons 'mov (##inline ##sys.cons (bruijn reg 18 1) (##inline ##sys.cons 'CLOSURE (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.20 0 0)) '()))))) ((bruijn ##k.162 2 0) #f)) ((bruijn ##k.162 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 17-1, 1), runtime,
      upenv->up->vars[0],
      VInlineCons(
        _V0mov,
        VInlineCons(
        VGetArg(upenv, 18-1, 1),
        VInlineCons(
        _V0CLOSURE,
        VInlineCons(
        VInlineCar(
        _var0),
        VNULL)))));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k87" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k87, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.163 0 0) ((close _V0vanity_V0compiler_V0bytecode_V20_k88) (##inline ##sys.cdr (bruijn ##expr.19 2 0))) ((bruijn ##k.162 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k88, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k86" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k86, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.19 1 0)) ((bruijn equal? 18 16) (close _V0vanity_V0compiler_V0bytecode_V20_k87) '##intrinsic (##inline ##sys.car (bruijn ##expr.19 1 0))) ((bruijn ##k.162 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 18-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k87, env)}),
      _V10intrinsic,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k93" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k93, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.1 20 1) (bruijn ##k.154 3 0) (bruijn ##x.158 0 0))
V_CALL(VGetArg(upenv, 20-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k92" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k92, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.22 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.22 0 0))) ((bruijn compiler-error 22 21) (close _V0vanity_V0compiler_V0bytecode_V20_k93) (##string ##string.493)) ((bruijn ##k.154 2 0) #f)) ((bruijn ##k.154 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 22-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k93, env)}),
      VEncodePointer(&_V10string_D493.sym, VPOINTER_OTHER));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k91" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k91, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.155 0 0) ((close _V0vanity_V0compiler_V0bytecode_V20_k92) (##inline ##sys.cdr (bruijn ##expr.21 2 0))) ((bruijn ##k.154 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k92, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k90" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k90, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.21 1 0)) ((bruijn equal? 20 16) (close _V0vanity_V0compiler_V0bytecode_V20_k91) '##foreign.function (##inline ##sys.car (bruijn ##expr.21 1 0))) ((bruijn ##k.154 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 20-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k91, env)}),
      _V10foreign_Dfunction,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k96" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k96, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.149 1 0) ((bruijn ##k.150 0 0) (##inline ##sys.cons 'lookup (##inline ##sys.cons (bruijn reg 21 1) (##inline ##sys.cons (bruijn x 2 0) '())))) ((bruijn process-literal 22 1) (bruijn ##k.150 0 0) (bruijn reg 21 1) (bruijn expr 21 2)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(_var0, runtime,
      VInlineCons(
        _V0lookup,
        VInlineCons(
        VGetArg(upenv, 21-1, 1),
        VInlineCons(
        upenv->up->vars[0],
        VNULL))));
} else {
V_CALL(VGetArg(upenv, 22-1, 1), runtime,
      _var0,
      VGetArg(upenv, 21-1, 1),
      VGetArg(upenv, 21-1, 2));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k98" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k98, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 24 14) (bruijn ##k.138 21 0) (##string ##string.494))
V_CALL(VGetArg(upenv, 24-1, 14), runtime,
      VGetArg(upenv, 21-1, 0),
      VEncodePointer(&_V10string_D494.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k97" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k97, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##kk.1 20 1) (close _V0vanity_V0compiler_V0bytecode_V20_k98) (bruijn ##x.148 0 0))
V_CALL(VGetArg(upenv, 20-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k98, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k95" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k95, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0bytecode_V20_k96) (close _V0vanity_V0compiler_V0bytecode_V20_k97))
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k96, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k97, env)}));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_lambda16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_lambda16" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda16, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn symbol? 21 11) (close _V0vanity_V0compiler_V0bytecode_V20_k95) (bruijn x 0 0))
V_CALL(VGetArg(upenv, 21-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k95, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k94" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k94, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0bytecode_V20_lambda16) (bruijn ##input.2 16 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_lambda16, env, runtime,
      VGetArg(upenv, 16-1, 0));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_lambda15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_lambda15" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda15, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0bytecode_V20_k90) (close _V0vanity_V0compiler_V0bytecode_V20_k94))
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k90, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k94, env)}));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k89" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k89, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0bytecode_V20_lambda15) (bruijn ##input.2 14 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_lambda15, env, runtime,
      VGetArg(upenv, 14-1, 0));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_lambda14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_lambda14" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda14, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0bytecode_V20_k86) (close _V0vanity_V0compiler_V0bytecode_V20_k89))
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k86, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k89, env)}));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k85" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k85, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0bytecode_V20_lambda14) (bruijn ##input.2 12 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_lambda14, env, runtime,
      VGetArg(upenv, 12-1, 0));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_lambda13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_lambda13" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda13, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0bytecode_V20_k82) (close _V0vanity_V0compiler_V0bytecode_V20_k85))
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k82, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k85, env)}));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k81" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k81, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0bytecode_V20_lambda13) (bruijn ##input.2 10 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_lambda13, env, runtime,
      VGetArg(upenv, 10-1, 0));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_lambda12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_lambda12" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda12, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0bytecode_V20_k76) (close _V0vanity_V0compiler_V0bytecode_V20_k81))
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k76, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k81, env)}));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k75" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k75, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0bytecode_V20_lambda12) (bruijn ##input.2 8 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_lambda12, env, runtime,
      VGetArg(upenv, 8-1, 0));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_lambda11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_lambda11" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda11, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0bytecode_V20_k72) (close _V0vanity_V0compiler_V0bytecode_V20_k75))
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k72, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k75, env)}));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k71" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k71, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0bytecode_V20_lambda11) (bruijn ##input.2 6 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_lambda11, env, runtime,
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_lambda10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_lambda10" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda10, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0bytecode_V20_k68) (close _V0vanity_V0compiler_V0bytecode_V20_k71))
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k68, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k71, env)}));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k67" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k67, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0bytecode_V20_lambda10) (bruijn ##input.2 4 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_lambda10, env, runtime,
      upenv->up->up->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_lambda9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_lambda9" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda9, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0bytecode_V20_k61) (close _V0vanity_V0compiler_V0bytecode_V20_k67))
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k61, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k67, env)}));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k60" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k60, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0bytecode_V20_lambda9) (bruijn ##input.2 2 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_lambda9, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_lambda8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_lambda8" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda8, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0bytecode_V20_k57) (close _V0vanity_V0compiler_V0bytecode_V20_k60))
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k57, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k60, env)}));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_lambda7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_lambda7" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda7, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0bytecode_V20_lambda8) (bruijn ##input.2 0 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_lambda8, env, runtime,
      _var0);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_lambda6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_lambda6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_lambda6, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda6, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0vanity_V0compiler_V0bytecode_V20_lambda7) (bruijn expr 1 2))
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_lambda7, env, runtime,
      upenv->vars[2]);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_lambda5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_lambda5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_lambda5, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda5, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn call/cc 2 15) (bruijn ##k.137 0 0) (close _V0vanity_V0compiler_V0bytecode_V20_lambda6))
V_CALL(upenv->up->vars[15], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda6, env)}));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k101" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k101, runtime, upenv, 1, argc, _var0) {
  // ((bruijn append 5 22) (bruijn ##k.246 3 0) (bruijn ##x.247 0 0) (##inline ##sys.cons (##inline ##sys.cons 'call (##inline ##sys.cons (bruijn len 2 0) '())) '()))
V_CALL(VGetArg(upenv, 5-1, 22), runtime,
      upenv->up->up->vars[0],
      _var0,
      VInlineCons(
        VInlineCons(
        _V0call,
        VInlineCons(
        upenv->up->vars[0],
        VNULL)),
        VNULL));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k100" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k100, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn map 4 23) (close _V0vanity_V0compiler_V0bytecode_V20_k101) (bruijn process-atom 3 2) (bruijn ##x.251 0 0) (bruijn expr 2 1))
V_CALL(upenv->up->up->up->vars[23], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k101, env)}),
      upenv->up->up->vars[2],
      _var0,
      upenv->up->vars[1]);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k99" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k99, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn iota 3 17) (close _V0vanity_V0compiler_V0bytecode_V20_k100) (bruijn len 0 0))
V_CALL(upenv->up->up->vars[17], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k100, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_lambda17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_lambda17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_lambda17, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda17, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn length 2 18) (close _V0vanity_V0compiler_V0bytecode_V20_k99) (bruijn expr 0 1))
V_CALL(upenv->up->vars[18], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k99, env)}),
      _var1);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k111" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k111, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.23 12 1) (bruijn ##k.298 9 0) (bruijn ##x.304 0 0))
V_CALL(VGetArg(upenv, 12-1, 1), runtime,
      VGetArg(upenv, 9-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k110" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k110, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn append 14 22) (close _V0vanity_V0compiler_V0bytecode_V20_k111) (##inline ##sys.cons (bruijn ##x.309 2 0) (##inline ##sys.cons (##inline ##sys.cons 'bf (##inline ##sys.cons (bruijn label 3 0) '())) '())) (bruijn ##x.306 1 0) (##inline ##sys.cons (bruijn label 3 0) '()) (bruijn ##x.308 0 0))
V_CALL(VGetArg(upenv, 14-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k111, env)}),
      VInlineCons(
        upenv->up->vars[0],
        VInlineCons(
        VInlineCons(
        _V0bf,
        VInlineCons(
        upenv->up->up->vars[0],
        VNULL)),
        VNULL)),
      upenv->vars[0],
      VInlineCons(
        upenv->up->up->vars[0],
        VNULL),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k109" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k109, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn process-application 12 4) (close _V0vanity_V0compiler_V0bytecode_V20_k110) (##inline ##sys.car (bruijn ##expr.28 3 0)))
V_CALL(VGetArg(upenv, 12-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k110, env)}),
      VInlineCar(
        upenv->up->up->vars[0]));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k108" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k108, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn process-application 11 4) (close _V0vanity_V0compiler_V0bytecode_V20_k109) (##inline ##sys.car (bruijn ##expr.27 3 0)))
V_CALL(VGetArg(upenv, 11-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k109, env)}),
      VInlineCar(
        upenv->up->up->vars[0]));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k107" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k107, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn process-atom 10 2) (close _V0vanity_V0compiler_V0bytecode_V20_k108) 't (##inline ##sys.car (bruijn ##expr.26 3 0)))
V_CALL(VGetArg(upenv, 10-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k108, env)}),
      _V0t,
      VInlineCar(
        upenv->up->up->vars[0]));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k106" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k106, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.28 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.28 0 0))) ((bruijn gensym 10 12) (close _V0vanity_V0compiler_V0bytecode_V20_k107) (##string ##string.495)) ((bruijn ##k.298 4 0) #f)) ((bruijn ##k.298 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 10-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k107, env)}),
      VEncodePointer(&_V10string_D495.sym, VPOINTER_OTHER));
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k105" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k105, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.27 0 0)) ((close _V0vanity_V0compiler_V0bytecode_V20_k106) (##inline ##sys.cdr (bruijn ##expr.27 0 0))) ((bruijn ##k.298 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k106, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k104" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k104, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.26 0 0)) ((close _V0vanity_V0compiler_V0bytecode_V20_k105) (##inline ##sys.cdr (bruijn ##expr.26 0 0))) ((bruijn ##k.298 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k105, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k103" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k103, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.299 0 0) ((close _V0vanity_V0compiler_V0bytecode_V20_k104) (##inline ##sys.cdr (bruijn ##expr.25 2 0))) ((bruijn ##k.298 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k104, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k102" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k102, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.25 1 0)) ((bruijn equal? 6 16) (close _V0vanity_V0compiler_V0bytecode_V20_k103) 'if (##inline ##sys.car (bruijn ##expr.25 1 0))) ((bruijn ##k.298 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 6-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k103, env)}),
      _V0if,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k118" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k118, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.23 10 1) (bruijn ##k.288 5 0) (bruijn ##x.294 0 0))
V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k117" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k117, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.32 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.32 0 0))) ((bruijn compiler-error 12 21) (close _V0vanity_V0compiler_V0bytecode_V20_k118) (##string ##string.496)) ((bruijn ##k.288 4 0) #f)) ((bruijn ##k.288 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 12-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k118, env)}),
      VEncodePointer(&_V10string_D496.sym, VPOINTER_OTHER));
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k116" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k116, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.31 0 0)) ((close _V0vanity_V0compiler_V0bytecode_V20_k117) (##inline ##sys.cdr (bruijn ##expr.31 0 0))) ((bruijn ##k.288 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k117, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k115" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k115, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.30 0 0)) ((close _V0vanity_V0compiler_V0bytecode_V20_k116) (##inline ##sys.cdr (bruijn ##expr.30 0 0))) ((bruijn ##k.288 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k116, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k114" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k114, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.289 0 0) ((close _V0vanity_V0compiler_V0bytecode_V20_k115) (##inline ##sys.cdr (bruijn ##expr.29 2 0))) ((bruijn ##k.288 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k115, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k113" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k113, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.29 1 0)) ((bruijn equal? 8 16) (close _V0vanity_V0compiler_V0bytecode_V20_k114) 'set! (##inline ##sys.car (bruijn ##expr.29 1 0))) ((bruijn ##k.288 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 8-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k114, env)}),
      _V0set_B,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k125" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k125, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.23 12 1) (bruijn ##k.278 5 0) (bruijn ##x.284 0 0))
V_CALL(VGetArg(upenv, 12-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k124" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k124, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.36 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.36 0 0))) ((bruijn compiler-error 14 21) (close _V0vanity_V0compiler_V0bytecode_V20_k125) (##string ##string.496)) ((bruijn ##k.278 4 0) #f)) ((bruijn ##k.278 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 14-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k125, env)}),
      VEncodePointer(&_V10string_D496.sym, VPOINTER_OTHER));
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k123" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k123, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.35 0 0)) ((close _V0vanity_V0compiler_V0bytecode_V20_k124) (##inline ##sys.cdr (bruijn ##expr.35 0 0))) ((bruijn ##k.278 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k124, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k122" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k122, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.34 0 0)) ((close _V0vanity_V0compiler_V0bytecode_V20_k123) (##inline ##sys.cdr (bruijn ##expr.34 0 0))) ((bruijn ##k.278 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k123, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k121" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k121, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.279 0 0) ((close _V0vanity_V0compiler_V0bytecode_V20_k122) (##inline ##sys.cdr (bruijn ##expr.33 2 0))) ((bruijn ##k.278 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k122, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k120" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k120, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.33 1 0)) ((bruijn equal? 10 16) (close _V0vanity_V0compiler_V0bytecode_V20_k121) 'define (##inline ##sys.car (bruijn ##expr.33 1 0))) ((bruijn ##k.278 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 10-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k121, env)}),
      _V0define,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k129" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k129, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.40 4 1) (bruijn ##k.271 1 0) (bruijn ##expr.42 2 1) (bruijn ##x.272 0 0))
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[1],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k128" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k128, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.42 1 1))) ((bruijn reverse 17 27) (close _V0vanity_V0compiler_V0bytecode_V20_k129) (bruijn ##xs.39 1 2)) ((bruijn ##k.271 0 0) #f))
if(VDecodeBool(
VInlineNot(
        VInlinePairP(
        upenv->vars[1])))) {
V_CALL(VGetArg(upenv, 17-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k129, env)}),
      upenv->vars[2]);
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k132" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k132, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.40 7 1) (bruijn ##k.265 2 0) (bruijn ##expr.42 5 1) (bruijn ##x.267 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k131" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k131, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 20 27) (close _V0vanity_V0compiler_V0bytecode_V20_k132) (bruijn ##xs.39 4 2))
V_CALL(VGetArg(upenv, 20-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k132, env)}),
      upenv->up->up->up->vars[2]);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_lambda29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_lambda29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_lambda29, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda29, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##kk.41 0 1) (close _V0vanity_V0compiler_V0bytecode_V20_k131) (##inline ##sys.cdr (bruijn ##expr.42 3 1)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.42 3 1)) (bruijn ##xs.39 3 2)))
V_CALL(_var1, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k131, env)}),
      VInlineCdr(
        upenv->up->up->vars[1]),
      VInlineCons(
        VInlineCar(
        upenv->up->up->vars[1]),
        upenv->up->up->vars[2]));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_lambda28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_lambda28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_lambda28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda28, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 18 15) (bruijn ##k.264 0 0) (close _V0vanity_V0compiler_V0bytecode_V20_lambda29))
V_CALL(VGetArg(upenv, 18-1, 15), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda29, env)}));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k130" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k130, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call-with-values 17 13) (bruijn ##k.262 1 0) (close _V0vanity_V0compiler_V0bytecode_V20_lambda28) (bruijn loop 2 0))
V_CALL(VGetArg(upenv, 17-1, 13), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda28, env)}),
      upenv->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_lambda27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_lambda27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_lambda27, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda27, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0vanity_V0compiler_V0bytecode_V20_k128) (close _V0vanity_V0compiler_V0bytecode_V20_k130))
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k128, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k130, env)}));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_lambda26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_lambda26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_lambda26, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda26, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V0vanity_V0compiler_V0bytecode_V20_lambda27)) ((bruijn loop 0 0) (bruijn ##k.261 1 0) (##inline ##sys.cdr (bruijn ##expr.37 4 0)) '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda27, env)});
V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VInlineCdr(
        upenv->up->up->up->vars[0]),
      VNULL);
    }
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_lambda25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_lambda25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_lambda25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda25, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 13 15) (bruijn ##k.260 0 0) (close _V0vanity_V0compiler_V0bytecode_V20_lambda26))
V_CALL(VGetArg(upenv, 13-1, 15), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda26, env)}));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k133" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k133, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.23 11 1) (bruijn ##k.274 1 0) (bruijn ##x.276 0 0))
V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_lambda30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_lambda30" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_lambda30, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda30, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((bruijn process-combination 12 3) (close _V0vanity_V0compiler_V0bytecode_V20_k133) (bruijn expr 11 1)) ((bruijn ##k.274 0 0) #f))
if(VDecodeBool(
VInlineNullP(
        _var1))) {
V_CALL(VGetArg(upenv, 12-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k133, env)}),
      VGetArg(upenv, 11-1, 1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k127" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k127, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.37 1 0)) ((bruijn call-with-values 12 13) (bruijn ##k.259 0 0) (close _V0vanity_V0compiler_V0bytecode_V20_lambda25) (close _V0vanity_V0compiler_V0bytecode_V20_lambda30)) ((bruijn ##k.259 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 12-1, 13), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda25, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda30, env)}));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k134" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k134, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 12 14) (bruijn ##k.253 9 0) (##string ##string.494))
V_CALL(VGetArg(upenv, 12-1, 14), runtime,
      VGetArg(upenv, 9-1, 0),
      VEncodePointer(&_V10string_D494.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_lambda24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_lambda24" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda24, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0bytecode_V20_k127) (close _V0vanity_V0compiler_V0bytecode_V20_k134))
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k127, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k134, env)}));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k126" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k126, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0bytecode_V20_lambda24) (bruijn ##input.24 6 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_lambda24, env, runtime,
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_lambda23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_lambda23" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda23, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0bytecode_V20_k120) (close _V0vanity_V0compiler_V0bytecode_V20_k126))
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k120, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k126, env)}));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k119" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k119, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0bytecode_V20_lambda23) (bruijn ##input.24 4 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_lambda23, env, runtime,
      upenv->up->up->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_lambda22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_lambda22" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda22, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0bytecode_V20_k113) (close _V0vanity_V0compiler_V0bytecode_V20_k119))
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k113, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k119, env)}));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k112" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k112, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0bytecode_V20_lambda22) (bruijn ##input.24 2 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_lambda22, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_lambda21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_lambda21" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda21, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0bytecode_V20_k102) (close _V0vanity_V0compiler_V0bytecode_V20_k112))
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k102, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k112, env)}));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_lambda20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_lambda20" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda20, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0bytecode_V20_lambda21) (bruijn ##input.24 0 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_lambda21, env, runtime,
      _var0);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_lambda19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_lambda19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_lambda19, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda19, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0vanity_V0compiler_V0bytecode_V20_lambda20) (bruijn expr 1 1))
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_lambda20, env, runtime,
      upenv->vars[1]);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_lambda18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_lambda18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_lambda18, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda18, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 2 15) (bruijn ##k.252 0 0) (close _V0vanity_V0compiler_V0bytecode_V20_lambda19))
V_CALL(upenv->up->vars[15], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda19, env)}));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k137" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k137, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.46 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.46 0 0))) ((bruijn ##kk.43 5 1) (bruijn ##k.388 2 0) #t) ((bruijn ##k.388 2 0) #f)) ((bruijn ##k.388 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->vars[0],
      VEncodeBool(true));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k136" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k136, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.389 0 0) ((close _V0vanity_V0compiler_V0bytecode_V20_k137) (##inline ##sys.cdr (bruijn ##expr.45 2 0))) ((bruijn ##k.388 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k137, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k135" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k135, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.45 1 0)) ((bruijn equal? 6 16) (close _V0vanity_V0compiler_V0bytecode_V20_k136) 'close (##inline ##sys.car (bruijn ##expr.45 1 0))) ((bruijn ##k.388 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 6-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k136, env)}),
      _V0close,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k140(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k140" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k140, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.385 0 0) ((bruijn ##kk.43 6 1) (bruijn ##k.384 1 0) #f) ((bruijn ##k.384 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      upenv->vars[0],
      VEncodeBool(false));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k139" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k139, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.47 1 0)) ((bruijn equal? 8 16) (close _V0vanity_V0compiler_V0bytecode_V20_k140) 'quote (##inline ##sys.car (bruijn ##expr.47 1 0))) ((bruijn ##k.384 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 8-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k140, env)}),
      _V0quote,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k143" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k143, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.381 0 0) ((bruijn ##kk.43 8 1) (bruijn ##k.380 1 0) #f) ((bruijn ##k.380 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      upenv->vars[0],
      VEncodeBool(false));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k142" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k142, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.48 1 0)) ((bruijn equal? 10 16) (close _V0vanity_V0compiler_V0bytecode_V20_k143) 'bruijn (##inline ##sys.car (bruijn ##expr.48 1 0))) ((bruijn ##k.380 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 10-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k143, env)}),
      _V0bruijn,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k146" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k146, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.377 0 0) ((bruijn ##kk.43 10 1) (bruijn ##k.376 1 0) #f) ((bruijn ##k.376 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      upenv->vars[0],
      VEncodeBool(false));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k145" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k145, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.49 1 0)) ((bruijn equal? 12 16) (close _V0vanity_V0compiler_V0bytecode_V20_k146) '##string (##inline ##sys.car (bruijn ##expr.49 1 0))) ((bruijn ##k.376 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 12-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k146, env)}),
      _V10string,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k155(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k155" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k155, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.372 0 0) ((bruijn ##k.371 1 0) (bruijn ##p.372 0 0)) ((bruijn closes? 20 5) (bruijn ##k.371 1 0) (##inline ##sys.car (bruijn ##expr.53 3 0))))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      _var0);
} else {
V_CALL(VGetArg(upenv, 20-1, 5), runtime,
      upenv->vars[0],
      VInlineCar(
        upenv->up->up->vars[0]));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k154(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k154" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k154, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.370 1 0) ((bruijn ##k.371 0 0) (bruijn ##p.370 1 0)) ((bruijn closes? 19 5) (close _V0vanity_V0compiler_V0bytecode_V20_k155) (##inline ##sys.car (bruijn ##expr.52 3 0))))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(_var0, runtime,
      upenv->vars[0]);
} else {
V_CALL(VGetArg(upenv, 19-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k155, env)}),
      VInlineCar(
        upenv->up->up->vars[0]));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k156" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k156, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.43 17 1) (bruijn ##k.363 6 0) (bruijn ##x.369 0 0))
V_CALL(VGetArg(upenv, 17-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k153" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k153, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0bytecode_V20_k154) (close _V0vanity_V0compiler_V0bytecode_V20_k156))
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k154, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k156, env)}));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k152" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k152, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.53 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.53 0 0))) ((bruijn closes? 17 5) (close _V0vanity_V0compiler_V0bytecode_V20_k153) (##inline ##sys.car (bruijn ##expr.51 2 0))) ((bruijn ##k.363 4 0) #f)) ((bruijn ##k.363 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 17-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k153, env)}),
      VInlineCar(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k151" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k151, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.52 0 0)) ((close _V0vanity_V0compiler_V0bytecode_V20_k152) (##inline ##sys.cdr (bruijn ##expr.52 0 0))) ((bruijn ##k.363 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k152, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k150(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k150" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k150, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.51 0 0)) ((close _V0vanity_V0compiler_V0bytecode_V20_k151) (##inline ##sys.cdr (bruijn ##expr.51 0 0))) ((bruijn ##k.363 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k151, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k149" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k149, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.364 0 0) ((close _V0vanity_V0compiler_V0bytecode_V20_k150) (##inline ##sys.cdr (bruijn ##expr.50 2 0))) ((bruijn ##k.363 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k150, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k148" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k148, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.50 1 0)) ((bruijn equal? 14 16) (close _V0vanity_V0compiler_V0bytecode_V20_k149) 'if (##inline ##sys.car (bruijn ##expr.50 1 0))) ((bruijn ##k.363 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 14-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k149, env)}),
      _V0if,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k162(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k162" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k162, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.57 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.57 0 0))) ((bruijn ##kk.43 17 1) (bruijn ##k.354 4 0) #t) ((bruijn ##k.354 4 0) #f)) ((bruijn ##k.354 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 17-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VEncodeBool(true));
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k161(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k161" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k161, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.56 0 0)) ((close _V0vanity_V0compiler_V0bytecode_V20_k162) (##inline ##sys.cdr (bruijn ##expr.56 0 0))) ((bruijn ##k.354 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k162, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k160" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k160, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.55 0 0)) ((close _V0vanity_V0compiler_V0bytecode_V20_k161) (##inline ##sys.cdr (bruijn ##expr.55 0 0))) ((bruijn ##k.354 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k161, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k159(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k159" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k159, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.355 0 0) ((close _V0vanity_V0compiler_V0bytecode_V20_k160) (##inline ##sys.cdr (bruijn ##expr.54 2 0))) ((bruijn ##k.354 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k160, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k158(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k158" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k158, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.54 1 0)) ((bruijn equal? 16 16) (close _V0vanity_V0compiler_V0bytecode_V20_k159) 'set! (##inline ##sys.car (bruijn ##expr.54 1 0))) ((bruijn ##k.354 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 16-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k159, env)}),
      _V0set_B,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k168(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k168" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k168, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.61 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.61 0 0))) ((bruijn ##kk.43 19 1) (bruijn ##k.345 4 0) #t) ((bruijn ##k.345 4 0) #f)) ((bruijn ##k.345 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 19-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VEncodeBool(true));
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k167(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k167" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k167, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.60 0 0)) ((close _V0vanity_V0compiler_V0bytecode_V20_k168) (##inline ##sys.cdr (bruijn ##expr.60 0 0))) ((bruijn ##k.345 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k168, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k166(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k166" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k166, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.59 0 0)) ((close _V0vanity_V0compiler_V0bytecode_V20_k167) (##inline ##sys.cdr (bruijn ##expr.59 0 0))) ((bruijn ##k.345 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k167, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k165(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k165" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k165, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.346 0 0) ((close _V0vanity_V0compiler_V0bytecode_V20_k166) (##inline ##sys.cdr (bruijn ##expr.58 2 0))) ((bruijn ##k.345 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k166, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k164" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k164, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.58 1 0)) ((bruijn equal? 18 16) (close _V0vanity_V0compiler_V0bytecode_V20_k165) 'define (##inline ##sys.car (bruijn ##expr.58 1 0))) ((bruijn ##k.345 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 18-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k165, env)}),
      _V0define,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k173(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k173" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k173, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.43 20 1) (bruijn ##k.339 3 0) (bruijn ##x.342 0 0))
V_CALL(VGetArg(upenv, 20-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k172(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k172" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k172, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.63 0 0)) ((bruijn closes? 21 5) (close _V0vanity_V0compiler_V0bytecode_V20_k173) (##inline ##sys.cdr (bruijn ##expr.63 0 0))) ((bruijn ##k.339 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL(VGetArg(upenv, 21-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k173, env)}),
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k171(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k171" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k171, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.340 0 0) ((close _V0vanity_V0compiler_V0bytecode_V20_k172) (##inline ##sys.cdr (bruijn ##expr.62 2 0))) ((bruijn ##k.339 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k172, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k170(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k170" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k170, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.62 1 0)) ((bruijn equal? 20 16) (close _V0vanity_V0compiler_V0bytecode_V20_k171) '##inline (##inline ##sys.car (bruijn ##expr.62 1 0))) ((bruijn ##k.339 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 20-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k171, env)}),
      _V10inline,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k176(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k176" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k176, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.43 20 1) (bruijn ##k.334 1 0) (bruijn ##x.336 0 0))
V_CALL(VGetArg(upenv, 20-1, 1), runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k175(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k175" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k175, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.64 1 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.64 1 0))) ((bruijn closes? 21 5) (close _V0vanity_V0compiler_V0bytecode_V20_k176) (##inline ##sys.car (bruijn ##expr.64 1 0))) ((bruijn ##k.334 0 0) #f)) ((bruijn ##k.334 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        upenv->vars[0])))) {
V_CALL(VGetArg(upenv, 21-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k176, env)}),
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k180(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k180" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k180, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.331 1 0) ((bruijn ##k.332 0 0) (bruijn ##p.331 1 0)) ((bruijn closes? 25 5) (bruijn ##k.332 0 0) (##inline ##sys.cdr (bruijn ##expr.65 3 0))))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(_var0, runtime,
      upenv->vars[0]);
} else {
V_CALL(VGetArg(upenv, 25-1, 5), runtime,
      _var0,
      VInlineCdr(
        upenv->up->up->vars[0]));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k181(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k181" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k181, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.43 23 1) (bruijn ##k.329 2 0) (bruijn ##x.330 0 0))
V_CALL(VGetArg(upenv, 23-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k179(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k179" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k179, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0bytecode_V20_k180) (close _V0vanity_V0compiler_V0bytecode_V20_k181))
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k180, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k181, env)}));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k178(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k178" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k178, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.65 1 0)) ((bruijn closes? 23 5) (close _V0vanity_V0compiler_V0bytecode_V20_k179) (##inline ##sys.car (bruijn ##expr.65 1 0))) ((bruijn ##k.329 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 23-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k179, env)}),
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k183(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k183" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k183, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 26 14) (bruijn ##k.316 23 0) (##string ##string.494))
V_CALL(VGetArg(upenv, 26-1, 14), runtime,
      VGetArg(upenv, 23-1, 0),
      VEncodePointer(&_V10string_D494.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_lambda44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_lambda44" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda44, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##kk.43 22 1) (close _V0vanity_V0compiler_V0bytecode_V20_k183) #f)
V_CALL(VGetArg(upenv, 22-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k183, env)}),
      VEncodeBool(false));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k182(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k182" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k182, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0bytecode_V20_lambda44) (bruijn ##input.44 20 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_lambda44, env, runtime,
      VGetArg(upenv, 20-1, 0));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_lambda43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_lambda43" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda43, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0bytecode_V20_k178) (close _V0vanity_V0compiler_V0bytecode_V20_k182))
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k178, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k182, env)}));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k177(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k177" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k177, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0bytecode_V20_lambda43) (bruijn ##input.44 18 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_lambda43, env, runtime,
      VGetArg(upenv, 18-1, 0));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_lambda42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_lambda42" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda42, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0bytecode_V20_k175) (close _V0vanity_V0compiler_V0bytecode_V20_k177))
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k175, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k177, env)}));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k174(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k174" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k174, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0bytecode_V20_lambda42) (bruijn ##input.44 16 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_lambda42, env, runtime,
      VGetArg(upenv, 16-1, 0));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_lambda41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_lambda41" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda41, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0bytecode_V20_k170) (close _V0vanity_V0compiler_V0bytecode_V20_k174))
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k170, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k174, env)}));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k169(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k169" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k169, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0bytecode_V20_lambda41) (bruijn ##input.44 14 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_lambda41, env, runtime,
      VGetArg(upenv, 14-1, 0));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_lambda40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_lambda40" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda40, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0bytecode_V20_k164) (close _V0vanity_V0compiler_V0bytecode_V20_k169))
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k164, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k169, env)}));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k163(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k163" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k163, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0bytecode_V20_lambda40) (bruijn ##input.44 12 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_lambda40, env, runtime,
      VGetArg(upenv, 12-1, 0));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_lambda39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_lambda39" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda39, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0bytecode_V20_k158) (close _V0vanity_V0compiler_V0bytecode_V20_k163))
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k158, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k163, env)}));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k157(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k157" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k157, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0bytecode_V20_lambda39) (bruijn ##input.44 10 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_lambda39, env, runtime,
      VGetArg(upenv, 10-1, 0));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_lambda38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_lambda38" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda38, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0bytecode_V20_k148) (close _V0vanity_V0compiler_V0bytecode_V20_k157))
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k148, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k157, env)}));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k147" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k147, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0bytecode_V20_lambda38) (bruijn ##input.44 8 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_lambda38, env, runtime,
      VGetArg(upenv, 8-1, 0));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_lambda37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_lambda37" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda37, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0bytecode_V20_k145) (close _V0vanity_V0compiler_V0bytecode_V20_k147))
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k145, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k147, env)}));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k144(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k144" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k144, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0bytecode_V20_lambda37) (bruijn ##input.44 6 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_lambda37, env, runtime,
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_lambda36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_lambda36" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda36, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0bytecode_V20_k142) (close _V0vanity_V0compiler_V0bytecode_V20_k144))
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k142, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k144, env)}));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k141" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k141, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0bytecode_V20_lambda36) (bruijn ##input.44 4 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_lambda36, env, runtime,
      upenv->up->up->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_lambda35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_lambda35" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda35, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0bytecode_V20_k139) (close _V0vanity_V0compiler_V0bytecode_V20_k141))
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k139, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k141, env)}));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k138" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k138, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0bytecode_V20_lambda35) (bruijn ##input.44 2 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_lambda35, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_lambda34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_lambda34" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda34, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0bytecode_V20_k135) (close _V0vanity_V0compiler_V0bytecode_V20_k138))
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k135, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k138, env)}));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_lambda33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_lambda33" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda33, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0bytecode_V20_lambda34) (bruijn ##input.44 0 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_lambda34, env, runtime,
      _var0);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_lambda32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_lambda32" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_lambda32, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda32, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0vanity_V0compiler_V0bytecode_V20_lambda33) (bruijn expr 1 1))
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_lambda33, env, runtime,
      upenv->vars[1]);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_lambda31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_lambda31" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_lambda31, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda31, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 2 15) (bruijn ##k.315 0 0) (close _V0vanity_V0compiler_V0bytecode_V20_lambda32))
V_CALL(upenv->up->vars[15], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda32, env)}));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k184(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k184" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k184, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn variadic? 1 4) ((bruijn ##k.412 0 0) (##inline ##sys.qcons '+ '())) ((bruijn ##k.412 0 0) '()))
if(VDecodeBool(
upenv->vars[4])) {
V_CALL(_var0, runtime,
      VInlineCons(
        _V0_P,
        VNULL));
} else {
V_CALL(_var0, runtime,
      VNULL);
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k187(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k187" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k187, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn variadic? 3 4) ((bruijn ##k.411 0 0) 'arg-min) ((bruijn ##k.411 0 0) 'arg-check))
if(VDecodeBool(
upenv->up->up->vars[4])) {
V_CALL(_var0, runtime,
      _V0arg__min);
} else {
V_CALL(_var0, runtime,
      _V0arg__check);
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k188(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k188" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k188, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.407 1 0) (##inline ##sys.cons (##inline ##sys.cons (bruijn ##x.409 0 0) (##inline ##sys.cons (bruijn num 3 3) '())) '()))
V_CALL(upenv->vars[0], runtime,
      VInlineCons(
        VInlineCons(
        _var0,
        VInlineCons(
        upenv->up->up->vars[3],
        VNULL)),
        VNULL));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k186(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k186" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k186, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn check-args? 2 2) ((close _V0vanity_V0compiler_V0bytecode_V20_k187) (close _V0vanity_V0compiler_V0bytecode_V20_k188)) ((bruijn ##k.407 0 0) '()))
if(VDecodeBool(
upenv->up->vars[2])) {
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k187, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k188, env)}));
} else {
V_CALL(_var0, runtime,
      VNULL);
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k191(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k191" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k191, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.404 1 0) ((bruijn ##k.405 0 0) (##inline ##sys.qcons (##inline ##sys.qcons 'save '()) '())) ((bruijn ##k.405 0 0) '()))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(_var0, runtime,
      VInlineCons(
        VInlineCons(
        _V0save,
        VNULL),
        VNULL));
} else {
V_CALL(_var0, runtime,
      VNULL);
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k195(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k195" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k195, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.394 7 0) (##inline ##sys.cons 'func (##inline ##sys.cons (bruijn name 7 1) (##inline ##sys.cons (bruijn num 7 3) (bruijn ##x.397 0 0)))))
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VInlineCons(
        _V0func,
        VInlineCons(
        VGetArg(upenv, 7-1, 1),
        VInlineCons(
        VGetArg(upenv, 7-1, 3),
        _var0))));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k194(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k194" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k194, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn append 8 22) (close _V0vanity_V0compiler_V0bytecode_V20_k195) (bruijn ##x.398 5 0) (##inline ##sys.cons (bruijn ##x.400 0 0) '()))
V_CALL(VGetArg(upenv, 8-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k195, env)}),
      VGetArg(upenv, 5-1, 0),
      VInlineCons(
        _var0,
        VNULL));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k193(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k193" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k193, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn append 7 22) (close _V0vanity_V0compiler_V0bytecode_V20_k194) (bruijn ##x.401 3 0) (bruijn ##x.402 1 0) (bruijn ##x.403 0 0))
V_CALL(VGetArg(upenv, 7-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k194, env)}),
      upenv->up->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k192(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k192" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k192, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn process-application 5 4) (close _V0vanity_V0compiler_V0bytecode_V20_k193) (bruijn body 4 5))
V_CALL(VGetArg(upenv, 5-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k193, env)}),
      upenv->up->up->up->vars[5]);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k190(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k190" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k190, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0bytecode_V20_k191) (close _V0vanity_V0compiler_V0bytecode_V20_k192))
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k191, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k192, env)}));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k189(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k189" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k189, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn closes? 3 5) (close _V0vanity_V0compiler_V0bytecode_V20_k190) (bruijn body 2 5))
V_CALL(upenv->up->up->vars[5], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k190, env)}),
      upenv->up->vars[5]);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k185(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k185" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k185, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0bytecode_V20_k186) (close _V0vanity_V0compiler_V0bytecode_V20_k189))
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k186, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k189, env)}));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_lambda45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_lambda45" };
 VRecordCall2(runtime, &dbg);
 if(argc != 7) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_lambda45, got ~D~N"
  "-- expected 7~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda45, runtime, upenv, 7, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6) {
  struct { VEnv env; VWORD argv[7]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 7, 7, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  env->vars[5] = _var5;
  env->vars[6] = _var6;
  // ((close _V0vanity_V0compiler_V0bytecode_V20_k184) (close _V0vanity_V0compiler_V0bytecode_V20_k185))
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k184, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k185, env)}));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k201(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k201" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k201, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.66 8 1) (bruijn ##k.433 5 0) (bruijn ##x.440 0 0))
V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k200(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k200" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k200, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.72 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.72 0 0))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.70 2 0))) ((bruijn process-fun-single 9 6) (close _V0vanity_V0compiler_V0bytecode_V20_k201) (##inline ##sys.car (bruijn ##expr.68 5 0)) (##inline ##sys.car (bruijn ##expr.69 3 0)) (##inline ##sys.car (bruijn ##expr.71 1 0)) #f (##inline ##sys.car (bruijn ##expr.72 0 0)) #f) ((bruijn ##k.433 4 0) #f)) ((bruijn ##k.433 4 0) #f)) ((bruijn ##k.433 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        upenv->up->vars[0])))) {
V_CALL(VGetArg(upenv, 9-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k201, env)}),
      VInlineCar(
        VGetArg(upenv, 5-1, 0)),
      VInlineCar(
        upenv->up->up->vars[0]),
      VInlineCar(
        upenv->vars[0]),
      VEncodeBool(false),
      VInlineCar(
        _var0),
      VEncodeBool(false));
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k199(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k199" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k199, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.71 0 0)) ((close _V0vanity_V0compiler_V0bytecode_V20_k200) (##inline ##sys.cdr (bruijn ##expr.71 0 0))) ((bruijn ##k.433 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k200, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k198(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k198" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k198, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.70 0 0)) ((close _V0vanity_V0compiler_V0bytecode_V20_k199) (##inline ##sys.car (bruijn ##expr.70 0 0))) ((bruijn ##k.433 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k199, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k197(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k197" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k197, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.69 0 0)) ((close _V0vanity_V0compiler_V0bytecode_V20_k198) (##inline ##sys.cdr (bruijn ##expr.69 0 0))) ((bruijn ##k.433 1 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k198, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k196(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k196" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k196, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.68 1 0)) ((close _V0vanity_V0compiler_V0bytecode_V20_k197) (##inline ##sys.cdr (bruijn ##expr.68 1 0))) ((bruijn ##k.433 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k197, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k210(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k210" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k210, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k210, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.66 12 1) (bruijn ##k.419 7 0) (bruijn ##x.428 0 0))
V_CALL(VGetArg(upenv, 12-1, 1), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k209(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k209" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k209, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.78 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.78 0 0))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.75 4 0))) ((bruijn process-fun-single 13 6) (close _V0vanity_V0compiler_V0bytecode_V20_k210) (##inline ##sys.car (bruijn ##expr.73 7 0)) (##inline ##sys.car (bruijn ##expr.74 5 0)) (##inline ##sys.car (bruijn ##expr.76 3 0)) #t (##inline ##sys.car (bruijn ##expr.78 0 0)) #f) ((bruijn ##k.419 6 0) #f)) ((bruijn ##k.419 6 0) #f)) ((bruijn ##k.419 6 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        upenv->up->up->up->vars[0])))) {
V_CALL(VGetArg(upenv, 13-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k210, env)}),
      VInlineCar(
        VGetArg(upenv, 7-1, 0)),
      VInlineCar(
        VGetArg(upenv, 5-1, 0)),
      VInlineCar(
        upenv->up->up->vars[0]),
      VEncodeBool(true),
      VInlineCar(
        _var0),
      VEncodeBool(false));
} else {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false));
}
} else {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false));
}
} else {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k208(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k208" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k208, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k208, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.424 0 0) ((close _V0vanity_V0compiler_V0bytecode_V20_k209) (##inline ##sys.cdr (bruijn ##expr.77 1 0))) ((bruijn ##k.419 5 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k209, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
} else {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k207(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k207" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k207, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.77 0 0)) ((bruijn equal? 12 16) (close _V0vanity_V0compiler_V0bytecode_V20_k208) '+ (##inline ##sys.car (bruijn ##expr.77 0 0))) ((bruijn ##k.419 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL(VGetArg(upenv, 12-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k208, env)}),
      _V0_P,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k206(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k206" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k206, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.76 0 0)) ((close _V0vanity_V0compiler_V0bytecode_V20_k207) (##inline ##sys.cdr (bruijn ##expr.76 0 0))) ((bruijn ##k.419 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k207, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k205(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k205" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k205, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.75 0 0)) ((close _V0vanity_V0compiler_V0bytecode_V20_k206) (##inline ##sys.car (bruijn ##expr.75 0 0))) ((bruijn ##k.419 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k206, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k204(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k204" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k204, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.74 0 0)) ((close _V0vanity_V0compiler_V0bytecode_V20_k205) (##inline ##sys.cdr (bruijn ##expr.74 0 0))) ((bruijn ##k.419 1 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k205, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k203(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k203" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k203, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.73 1 0)) ((close _V0vanity_V0compiler_V0bytecode_V20_k204) (##inline ##sys.cdr (bruijn ##expr.73 1 0))) ((bruijn ##k.419 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k204, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k212(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k212" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k212, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k212, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.66 6 1) (bruijn ##k.414 6 0) (bruijn ##x.417 0 0))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k211(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k211" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k211, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn compiler-error 8 21) (close _V0vanity_V0compiler_V0bytecode_V20_k212) (##string ##string.497))
V_CALL(VGetArg(upenv, 8-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k212, env)}),
      VEncodePointer(&_V10string_D497.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_lambda50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_lambda50" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda50, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0bytecode_V20_k203) (close _V0vanity_V0compiler_V0bytecode_V20_k211))
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k203, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k211, env)}));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k202(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k202" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k202, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0bytecode_V20_lambda50) (bruijn ##input.67 2 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_lambda50, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_lambda49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_lambda49" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda49, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0bytecode_V20_k196) (close _V0vanity_V0compiler_V0bytecode_V20_k202))
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k196, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k202, env)}));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_lambda48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_lambda48" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda48, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0bytecode_V20_lambda49) (bruijn ##input.67 0 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_lambda49, env, runtime,
      _var0);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_lambda47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_lambda47" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_lambda47, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda47, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0vanity_V0compiler_V0bytecode_V20_lambda48) (bruijn fun 1 1))
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_lambda48, env, runtime,
      upenv->vars[1]);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_lambda46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_lambda46" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_lambda46, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda46, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 2 15) (bruijn ##k.413 0 0) (close _V0vanity_V0compiler_V0bytecode_V20_lambda47))
V_CALL(upenv->up->vars[15], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda47, env)}));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k215(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k215" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k215, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.443 3 0) (##inline ##sys.cons 'func (##inline ##sys.cons (bruijn ##x.445 1 0) (##inline ##sys.cons '1 (##inline ##sys.cons (bruijn ##x.448 0 0) '())))))
V_CALL(upenv->up->up->vars[0], runtime,
      VInlineCons(
        _V0func,
        VInlineCons(
        upenv->vars[0],
        VInlineCons(
        VEncodeInt(1l),
        VInlineCons(
        _var0,
        VNULL)))));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k214(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k214" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k214, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k214, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn process-application 3 4) (close _V0vanity_V0compiler_V0bytecode_V20_k215) (bruijn expr 2 2))
V_CALL(upenv->up->up->vars[4], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k215, env)}),
      upenv->up->vars[2]);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k213(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k213" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k213, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k213, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string->symbol 3 20) (close _V0vanity_V0compiler_V0bytecode_V20_k214) (bruijn ##x.449 0 0))
V_CALL(upenv->up->up->vars[20], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k214, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_lambda51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_lambda51" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_lambda51, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda51, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn sprintf 2 19) (close _V0vanity_V0compiler_V0bytecode_V20_k213) (##string ##string.498) (bruijn i 0 1))
V_CALL(upenv->up->vars[19], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k213, env)}),
      VEncodePointer(&_V10string_D498.sym, VPOINTER_OTHER),
      _var1);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k221(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k221" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k221, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k221, runtime, upenv, 1, argc, _var0) {
  // ((bruijn append 8 22) (bruijn ##k.450 6 0) (bruijn ##x.451 3 0) (##inline ##sys.cons (##inline ##sys.cons 'main (bruijn ##x.454 0 0)) '()))
V_CALL(VGetArg(upenv, 8-1, 22), runtime,
      VGetArg(upenv, 6-1, 0),
      upenv->up->up->vars[0],
      VInlineCons(
        VInlineCons(
        _V0main,
        _var0),
        VNULL));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k222(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k222" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k222, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k222, runtime, upenv, 1, argc, _var0) {
  // ((bruijn string->symbol 9 20) (bruijn ##k.455 1 0) (bruijn ##x.456 0 0))
V_CALL(VGetArg(upenv, 9-1, 20), runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_lambda53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_lambda53" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_lambda53, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda53, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn sprintf 8 19) (close _V0vanity_V0compiler_V0bytecode_V20_k222) (##string ##string.498) (bruijn i 0 1))
V_CALL(VGetArg(upenv, 8-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k222, env)}),
      VEncodePointer(&_V10string_D498.sym, VPOINTER_OTHER),
      _var1);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k220(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k220" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k220, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k220, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn map 7 23) (close _V0vanity_V0compiler_V0bytecode_V20_k221) (close _V0vanity_V0compiler_V0bytecode_V20_lambda53) (bruijn ##x.457 0 0))
V_CALL(VGetArg(upenv, 7-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k221, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda53, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k219(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k219" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k219, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k219, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn iota 6 17) (close _V0vanity_V0compiler_V0bytecode_V20_k220) (bruijn ##x.458 0 0))
V_CALL(VGetArg(upenv, 6-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k220, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k218(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k218" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k218, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k218, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn length 5 18) (close _V0vanity_V0compiler_V0bytecode_V20_k219) (bruijn toplevels 3 1))
V_CALL(VGetArg(upenv, 5-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k219, env)}),
      upenv->up->up->vars[1]);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k217(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k217" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k217, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k217, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn map 4 23) (close _V0vanity_V0compiler_V0bytecode_V20_k218) (bruijn process-toplevel 3 8) (bruijn ##x.459 0 0) (bruijn toplevels 2 1))
V_CALL(upenv->up->up->up->vars[23], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k218, env)}),
      upenv->up->up->vars[8],
      _var0,
      upenv->up->vars[1]);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k216(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k216" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k216, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k216, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn iota 3 17) (close _V0vanity_V0compiler_V0bytecode_V20_k217) (bruijn ##x.460 0 0))
V_CALL(upenv->up->up->vars[17], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k217, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_lambda52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_lambda52" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_lambda52, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda52, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn length 2 18) (close _V0vanity_V0compiler_V0bytecode_V20_k216) (bruijn toplevels 0 1))
V_CALL(upenv->up->vars[18], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k216, env)}),
      _var1);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k228(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k228" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k228, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k228, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.479 1 0) ((bruijn compiler-error 9 21) (bruijn ##k.480 0 0) (##string ##string.499)) ((bruijn ##k.480 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 9-1, 21), runtime,
      _var0,
      VEncodePointer(&_V10string_D499.sym, VPOINTER_OTHER));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k232(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k232" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k232, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k232, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.476 1 0) ((bruijn compiler-error 12 21) (bruijn ##k.477 0 0) (##string ##string.500)) ((bruijn ##k.477 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 12-1, 21), runtime,
      _var0,
      VEncodePointer(&_V10string_D500.sym, VPOINTER_OTHER));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k234(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k234" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k234, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k234, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn shared? 11 2) ((bruijn ##k.475 0 0) (bruijn print-main? 7 0)) ((bruijn ##k.475 0 0) #f))
if(VDecodeBool(
VGetArg(upenv, 11-1, 2))) {
V_CALL(_var0, runtime,
      VGetArg(upenv, 7-1, 0));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k236(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k236" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k236, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k236, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.473 1 0) ((bruijn compiler-error 14 21) (bruijn ##k.474 0 0) (##string ##string.501)) ((bruijn ##k.474 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 14-1, 21), runtime,
      _var0,
      VEncodePointer(&_V10string_D501.sym, VPOINTER_OTHER));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k240(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k240" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k240, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k240, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn print-main? 11 0) ((bruijn process-main 16 9) (bruijn ##k.472 0 0) (bruijn toplevels 15 7)) ((bruijn ##k.472 0 0) '()))
if(VDecodeBool(
VGetArg(upenv, 11-1, 0))) {
V_CALL(VGetArg(upenv, 16-1, 9), runtime,
      _var0,
      VGetArg(upenv, 15-1, 7));
} else {
V_CALL(_var0, runtime,
      VNULL);
}
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k243(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k243" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k243, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k243, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.461 17 0) (bruijn print-main? 13 0))
V_CALL(VGetArg(upenv, 17-1, 0), runtime,
      VGetArg(upenv, 13-1, 0));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k242(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k242" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k242, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k242, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn pretty-print 18 24) (close _V0vanity_V0compiler_V0bytecode_V20_k243) (bruijn ##x.468 0 0))
V_CALL(VGetArg(upenv, 18-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k243, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k241(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k241" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k241, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k241, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn append 17 22) (close _V0vanity_V0compiler_V0bytecode_V20_k242) (bruijn ##x.469 2 0) (bruijn ##x.470 1 0) (bruijn ##x.471 0 0))
V_CALL(VGetArg(upenv, 17-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k242, env)}),
      upenv->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k239(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k239" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k239, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k239, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0bytecode_V20_k240) (close _V0vanity_V0compiler_V0bytecode_V20_k241))
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k240, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k241, env)}));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k238(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k238" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k238, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k238, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn map 15 23) (close _V0vanity_V0compiler_V0bytecode_V20_k239) (bruijn process-function 14 7) (bruijn functions 9 1))
V_CALL(VGetArg(upenv, 15-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k239, env)}),
      VGetArg(upenv, 14-1, 7),
      VGetArg(upenv, 9-1, 1));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k237(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k237" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k237, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k237, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn map 14 23) (close _V0vanity_V0compiler_V0bytecode_V20_k238) (bruijn process-literal-declaration 13 0) (bruijn literal-table 12 3))
V_CALL(VGetArg(upenv, 14-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k238, env)}),
      VGetArg(upenv, 13-1, 0),
      VGetArg(upenv, 12-1, 3));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k235(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k235" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k235, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k235, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0bytecode_V20_k236) (close _V0vanity_V0compiler_V0bytecode_V20_k237))
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k236, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k237, env)}));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k233(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k233" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k233, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k233, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0bytecode_V20_k234) (close _V0vanity_V0compiler_V0bytecode_V20_k235))
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k234, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k235, env)}));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k231(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k231" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k231, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k231, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0bytecode_V20_k232) (close _V0vanity_V0compiler_V0bytecode_V20_k233))
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k232, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k233, env)}));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k230(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k230" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k230, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k230, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn not 10 26) (close _V0vanity_V0compiler_V0bytecode_V20_k231) (bruijn ##x.478 0 0))
V_CALL(VGetArg(upenv, 10-1, 26), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k231, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k229(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k229" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k229, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k229, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn null? 9 25) (close _V0vanity_V0compiler_V0bytecode_V20_k230) (bruijn foreign-functions 7 4))
V_CALL(VGetArg(upenv, 9-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k230, env)}),
      VGetArg(upenv, 7-1, 4));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k227(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k227" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k227, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k227, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0bytecode_V20_k228) (close _V0vanity_V0compiler_V0bytecode_V20_k229))
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_k228, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k229, env)}));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k226(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k226" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k226, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k226, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn not 7 26) (close _V0vanity_V0compiler_V0bytecode_V20_k227) (bruijn ##x.481 0 0))
V_CALL(VGetArg(upenv, 7-1, 26), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k227, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_lambda55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_lambda55" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda55, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn null? 6 25) (close _V0vanity_V0compiler_V0bytecode_V20_k226) (bruijn declares 4 6))
V_CALL(VGetArg(upenv, 6-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k226, env)}),
      upenv->up->up->up->vars[6]);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k225(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k225" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k225, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k225, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0bytecode_V20_lambda55) (bruijn ##x.462 1 0) (bruijn ##x.463 0 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_lambda55, env, runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k224(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k224" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k224, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k224, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 4 27) (close _V0vanity_V0compiler_V0bytecode_V20_k225) (bruijn functions 2 5))
V_CALL(upenv->up->up->up->vars[27], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k225, env)}),
      upenv->up->vars[5]);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k223(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k223" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k223, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k223, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn not 3 26) (close _V0vanity_V0compiler_V0bytecode_V20_k224) (bruijn ##x.482 0 0))
V_CALL(upenv->up->up->vars[26], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k224, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_lambda54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_lambda54" };
 VRecordCall2(runtime, &dbg);
 if(argc != 8) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_lambda54, got ~D~N"
  "-- expected 8~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda54, runtime, upenv, 8, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7) {
  struct { VEnv env; VWORD argv[8]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 8, 8, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  env->vars[5] = _var5;
  env->vars[6] = _var6;
  env->vars[7] = _var7;
  // ((bruijn null? 2 25) (close _V0vanity_V0compiler_V0bytecode_V20_k223) (bruijn toplevels 0 7))
V_CALL(upenv->up->vars[25], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k223, env)}),
      _var7);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_lambda2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17, VWORD _var18, VWORD _var19, VWORD _var20, VWORD _var21, VWORD _var22, VWORD _var23, VWORD _var24, VWORD _var25, VWORD _var26, VWORD _var27) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_lambda2" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda2, runtime, upenv, 28, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7, _var8, _var9, _var10, _var11, _var12, _var13, _var14, _var15, _var16, _var17, _var18, _var19, _var20, _var21, _var22, _var23, _var24, _var25, _var26, _var27) {
  struct { VEnv env; VWORD argv[28]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 28, 28, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  env->vars[5] = _var5;
  env->vars[6] = _var6;
  env->vars[7] = _var7;
  env->vars[8] = _var8;
  env->vars[9] = _var9;
  env->vars[10] = _var10;
  env->vars[11] = _var11;
  env->vars[12] = _var12;
  env->vars[13] = _var13;
  env->vars[14] = _var14;
  env->vars[15] = _var15;
  env->vars[16] = _var16;
  env->vars[17] = _var17;
  env->vars[18] = _var18;
  env->vars[19] = _var19;
  env->vars[20] = _var20;
  env->vars[21] = _var21;
  env->vars[22] = _var22;
  env->vars[23] = _var23;
  env->vars[24] = _var24;
  env->vars[25] = _var25;
  env->vars[26] = _var26;
  env->vars[27] = _var27;
  // (letrec 11 ((close _V0vanity_V0compiler_V0bytecode_V20_lambda3) (close _V0vanity_V0compiler_V0bytecode_V20_lambda4) (close _V0vanity_V0compiler_V0bytecode_V20_lambda5) (close _V0vanity_V0compiler_V0bytecode_V20_lambda17) (close _V0vanity_V0compiler_V0bytecode_V20_lambda18) (close _V0vanity_V0compiler_V0bytecode_V20_lambda31) (close _V0vanity_V0compiler_V0bytecode_V20_lambda45) (close _V0vanity_V0compiler_V0bytecode_V20_lambda46) (close _V0vanity_V0compiler_V0bytecode_V20_lambda51) (close _V0vanity_V0compiler_V0bytecode_V20_lambda52) (close _V0vanity_V0compiler_V0bytecode_V20_lambda54)) ((bruijn ##k.79 38 0) (##inline ##sys.cons (##inline ##sys.cons 'print-bytecode (bruijn print-bytecode 0 10)) '())))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[11]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 11, 11, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda3, env)});
    env->vars[1] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda4, env)});
    env->vars[2] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda5, env)});
    env->vars[3] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda17, env)});
    env->vars[4] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda18, env)});
    env->vars[5] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda31, env)});
    env->vars[6] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda45, env)});
    env->vars[7] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda46, env)});
    env->vars[8] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda51, env)});
    env->vars[9] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda52, env)});
    env->vars[10] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda54, env)});
V_CALL(VGetArg(upenv, 38-1, 0), runtime,
      VInlineCons(
        VInlineCons(
        _V0print__bytecode,
        env->vars[10]),
        VNULL));
    }
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k36, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0bytecode_V20_lambda2) (bruijn ##x.80 27 0) (bruijn ##x.81 26 0) (bruijn ##x.82 25 0) (bruijn ##x.83 24 0) (bruijn ##x.84 23 0) (bruijn ##x.85 22 0) (bruijn ##x.86 21 0) (bruijn ##x.87 20 0) (bruijn ##x.88 19 0) (bruijn ##x.89 18 0) (bruijn ##x.90 17 0) (bruijn ##x.91 16 0) (bruijn ##x.92 15 0) (bruijn ##x.93 14 0) (bruijn ##x.94 13 0) (bruijn ##x.95 12 0) (bruijn ##x.96 11 0) (bruijn ##x.97 10 0) (bruijn ##x.98 9 0) (bruijn ##x.99 8 0) (bruijn ##x.100 7 0) (bruijn ##x.101 6 0) (bruijn ##x.102 5 0) (bruijn ##x.103 4 0) (bruijn ##x.104 3 0) (bruijn ##x.105 2 0) (bruijn ##x.106 1 0) (bruijn ##x.107 0 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0bytecode_V20_lambda2, env, runtime,
      VGetArg(upenv, 27-1, 0),
      VGetArg(upenv, 26-1, 0),
      VGetArg(upenv, 25-1, 0),
      VGetArg(upenv, 24-1, 0),
      VGetArg(upenv, 23-1, 0),
      VGetArg(upenv, 22-1, 0),
      VGetArg(upenv, 21-1, 0),
      VGetArg(upenv, 20-1, 0),
      VGetArg(upenv, 19-1, 0),
      VGetArg(upenv, 18-1, 0),
      VGetArg(upenv, 17-1, 0),
      VGetArg(upenv, 16-1, 0),
      VGetArg(upenv, 15-1, 0),
      VGetArg(upenv, 14-1, 0),
      VGetArg(upenv, 13-1, 0),
      VGetArg(upenv, 12-1, 0),
      VGetArg(upenv, 11-1, 0),
      VGetArg(upenv, 10-1, 0),
      VGetArg(upenv, 9-1, 0),
      VGetArg(upenv, 8-1, 0),
      VGetArg(upenv, 7-1, 0),
      VGetArg(upenv, 6-1, 0),
      VGetArg(upenv, 5-1, 0),
      upenv->up->up->up->vars[0],
      upenv->up->up->vars[0],
      upenv->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k35, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 27 0) (close _V0vanity_V0compiler_V0bytecode_V20_k36) 'reverse)
V_CALL(VGetArg(upenv, 27-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k36, env)}),
      _V0reverse);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k34, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 26 0) (close _V0vanity_V0compiler_V0bytecode_V20_k35) 'not)
V_CALL(VGetArg(upenv, 26-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k35, env)}),
      _V0not);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k33, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 25 0) (close _V0vanity_V0compiler_V0bytecode_V20_k34) 'null?)
V_CALL(VGetArg(upenv, 25-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k34, env)}),
      _V0null_Q);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k32" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k32, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 24 0) (close _V0vanity_V0compiler_V0bytecode_V20_k33) 'pretty-print)
V_CALL(VGetArg(upenv, 24-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k33, env)}),
      _V0pretty__print);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k31" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k31, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 23 0) (close _V0vanity_V0compiler_V0bytecode_V20_k32) 'map)
V_CALL(VGetArg(upenv, 23-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k32, env)}),
      _V0map);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k30" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k30, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 22 0) (close _V0vanity_V0compiler_V0bytecode_V20_k31) 'append)
V_CALL(VGetArg(upenv, 22-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k31, env)}),
      _V0append);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k29, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 21 0) (close _V0vanity_V0compiler_V0bytecode_V20_k30) 'compiler-error)
V_CALL(VGetArg(upenv, 21-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k30, env)}),
      _V0compiler__error);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k28, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 20 0) (close _V0vanity_V0compiler_V0bytecode_V20_k29) 'string->symbol)
V_CALL(VGetArg(upenv, 20-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k29, env)}),
      _V0string___Gsymbol);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k27, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 19 0) (close _V0vanity_V0compiler_V0bytecode_V20_k28) 'sprintf)
V_CALL(VGetArg(upenv, 19-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k28, env)}),
      _V0sprintf);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k26, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 18 0) (close _V0vanity_V0compiler_V0bytecode_V20_k27) 'length)
V_CALL(VGetArg(upenv, 18-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k27, env)}),
      _V0length);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k25, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 17 0) (close _V0vanity_V0compiler_V0bytecode_V20_k26) 'iota)
V_CALL(VGetArg(upenv, 17-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k26, env)}),
      _V0iota);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k24, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 16 0) (close _V0vanity_V0compiler_V0bytecode_V20_k25) 'equal?)
V_CALL(VGetArg(upenv, 16-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k25, env)}),
      _V0equal_Q);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k23, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 15 0) (close _V0vanity_V0compiler_V0bytecode_V20_k24) 'call/cc)
V_CALL(VGetArg(upenv, 15-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k24, env)}),
      _V0call_Wcc);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k22, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 14 0) (close _V0vanity_V0compiler_V0bytecode_V20_k23) 'error)
V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k23, env)}),
      _V0error);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k21, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 13 0) (close _V0vanity_V0compiler_V0bytecode_V20_k22) 'call-with-values)
V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k22, env)}),
      _V0call__with__values);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k20, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 12 0) (close _V0vanity_V0compiler_V0bytecode_V20_k21) 'gensym)
V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k21, env)}),
      _V0gensym);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k19, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 11 0) (close _V0vanity_V0compiler_V0bytecode_V20_k20) 'symbol?)
V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k20, env)}),
      _V0symbol_Q);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k18, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 10 0) (close _V0vanity_V0compiler_V0bytecode_V20_k19) 'eq?)
V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k19, env)}),
      _V0eq_Q);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k17, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 9 0) (close _V0vanity_V0compiler_V0bytecode_V20_k18) 'char?)
V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k18, env)}),
      _V0char_Q);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k16, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 8 0) (close _V0vanity_V0compiler_V0bytecode_V20_k17) 'number?)
V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k17, env)}),
      _V0number_Q);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k15, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 7 0) (close _V0vanity_V0compiler_V0bytecode_V20_k16) 'integer?)
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k16, env)}),
      _V0integer_Q);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k14, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 6 0) (close _V0vanity_V0compiler_V0bytecode_V20_k15) 'car)
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k15, env)}),
      _V0car);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k13, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 5 0) (close _V0vanity_V0compiler_V0bytecode_V20_k14) 'pair?)
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k14, env)}),
      _V0pair_Q);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k12, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 4 0) (close _V0vanity_V0compiler_V0bytecode_V20_k13) 'eqv?)
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k13, env)}),
      _V0eqv_Q);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k11, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 3 0) (close _V0vanity_V0compiler_V0bytecode_V20_k12) 'caar)
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k12, env)}),
      _V0caar);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k10, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 2 0) (close _V0vanity_V0compiler_V0bytecode_V20_k11) 'cdr)
V_CALL(upenv->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k11, env)}),
      _V0cdr);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k9, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 1 0) (close _V0vanity_V0compiler_V0bytecode_V20_k10) 'cadar)
V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k10, env)}),
      _V0cadar);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k8, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 0 0) (close _V0vanity_V0compiler_V0bytecode_V20_k9) 'string?)
V_CALL(_var0, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k9, env)}),
      _V0string_Q);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k7, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.make-import (close _V0vanity_V0compiler_V0bytecode_V20_k8) (##string ##string.502) (bruijn ##x.484 6 0) (bruijn ##x.485 5 0) (bruijn ##x.486 4 0) (bruijn ##x.487 3 0) (bruijn ##x.488 2 0) (bruijn ##x.489 1 0) (bruijn ##x.490 0 0))
    V_CALL_FUNC(VMakeImport2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k8, env)}),
      VEncodePointer(&_V10string_D502.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 0),
      VGetArg(upenv, 5-1, 0),
      upenv->up->up->up->vars[0],
      upenv->up->up->vars[0],
      upenv->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k6, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0bytecode_V20_k7) (##string ##string.503))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k7, env)}),
      VEncodePointer(&_V10string_D503.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k5, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0bytecode_V20_k6) (##string ##string.504))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k6, env)}),
      VEncodePointer(&_V10string_D504.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k4, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0bytecode_V20_k5) (##string ##string.505))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k5, env)}),
      VEncodePointer(&_V10string_D505.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k3, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0bytecode_V20_k4) (##string ##string.506))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k4, env)}),
      VEncodePointer(&_V10string_D506.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k2, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0bytecode_V20_k3) (##string ##string.507))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k3, env)}),
      VEncodePointer(&_V10string_D507.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_k1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_k1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0bytecode_V20_k2) (##string ##string.508))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k2, env)}),
      VEncodePointer(&_V10string_D508.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0bytecode_V20_lambda1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0bytecode_V20_lambda1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0bytecode_V20_k1) (##string ##string.509))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_k1, env)}),
      VEncodePointer(&_V10string_D509.sym, VPOINTER_OTHER));
 }
}
VFunc _V0vanity_V0compiler_V0bytecode_V20 = (VFunc)_V0vanity_V0compiler_V0bytecode_V20_lambda1;
