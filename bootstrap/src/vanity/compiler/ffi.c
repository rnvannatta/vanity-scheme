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
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1735 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1734 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D1733 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D1732 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "_V0vanity_V0compiler_V0config_V20" };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D1731 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "_V0vanity_V0compiler_V0ffi_V20" };
VWEAK VWORD _V0memv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0memv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "memv" };
VWEAK VWORD _V0symbol_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0symbol_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "symbol\?" };
VWEAK VWORD _V0list;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "list" };
VWEAK VWORD _V0map;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "map" };
VWEAK VWORD _V0string___Gsymbol;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0string___Gsymbol = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "string->symbol" };
VWEAK VWORD _V0caar;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0caar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "caar" };
VWEAK VWORD _V0caddar;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0caddar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "caddar" };
VWEAK VWORD _V0member;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0member = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "member" };
VWEAK VWORD _V0cadar;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0cadar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "cadar" };
VWEAK VWORD _V0symbol___Gstring;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0symbol___Gstring = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "symbol->string" };
VWEAK VWORD _V0string__copy;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0string__copy = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "string-copy" };
VWEAK VWORD _V0cdadr;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0cdadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "cdadr" };
VWEAK VWORD _V0caddr;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0caddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "caddr" };
VWEAK VWORD _V0cdddr;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0cdddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "cdddr" };
VWEAK VWORD _V0null_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0null_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "null\?" };
VWEAK VWORD _V0file__exists_Q;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0file__exists_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "file-exists\?" };
VWEAK VWORD _V0install__root;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0install__root = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "install-root" };
VWEAK VWORD _V0platform;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0platform = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "platform" };
VWEAK VWORD _V0gcc__path;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0gcc__path = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "gcc-path" };
VWEAK VWORD _V0open__input__process;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0open__input__process = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "open-input-process" };
VWEAK VWORD _V0cons;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cons = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cons" };
VWEAK VWORD _V0close__port;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0close__port = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "close-port" };
VWEAK VWORD _V0not;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0not = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "not" };
VWEAK VWORD _V0string_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0string_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "string\?" };
VWEAK VWORD _V0compiler__error;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0compiler__error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "compiler-error" };
VWEAK VWORD _V0sprintf;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0sprintf = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "sprintf" };
VWEAK VWORD _V0cadr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cadr" };
VWEAK VWORD _V0assv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0assv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "assv" };
VWEAK VWORD _V0iota;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0iota = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "iota" };
VWEAK VWORD _V0length;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "length" };
VWEAK VWORD _V0printf;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0printf = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "printf" };
VWEAK VWORD _V0eqv_Q;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0eqv_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "eqv\?" };
VWEAK VWORD _V0cdr;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0cdr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "cdr" };
VWEAK VWORD _V0for__each;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0for__each = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "for-each" };
VWEAK VWORD _V0car;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0car = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "car" };
VWEAK VWORD _V0pair_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0pair_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "pair\?" };
VWEAK VWORD _V0_P;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_P = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "+" };
VWEAK VWORD _V0call__with__values;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0call__with__values = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "call-with-values" };
VWEAK VWORD _V0call_Wcc;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0call_Wcc = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "call/cc" };
VWEAK VWORD _V0reverse;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0reverse = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "reverse" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "error" };
VWEAK VWORD _V0get__foreign__decoder;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0get__foreign__decoder = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "get-foreign-decoder" };
VWEAK VWORD _V0get__foreign__encoder;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0get__foreign__encoder = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "get-foreign-encoder" };
VWEAK VWORD _V0resolve__foreign__import;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V0resolve__foreign__import = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "resolve-foreign-import" };
VWEAK VWORD _V0print__foreign__function;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V0print__foreign__function = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "print-foreign-function" };
VWEAK VWORD _V0validate__foreign__function;VWEAK struct { VBlob sym; char bytes[26]; } _VW_V0validate__foreign__function = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 26 }, "validate-foreign-function" };
VWEAK VWORD _V0mangle__foreign__function;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V0mangle__foreign__function = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "mangle-foreign-function" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1730 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "~A;~N" };
static struct { VBlob sym; char bytes[46]; } _V10_Dstring_D1729 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 46 }, "static void _V30~A_shim(V_CORE_ARGS, VWORD _k" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D1728 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, ", VWORD _arg~A" };
static struct { VBlob sym; char bytes[43]; } _V10_Dstring_D1727 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 43 }, "  V_ARG_CHECK3(runtime, \"~A\", ~A, argc);~N" };
static struct { VBlob sym; char bytes[62]; } _V10_Dstring_D1726 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 62 }, "  V_GC_CHECK2_VARARGS((VFunc)~A, runtime, statics, ~A, ~A, _k" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D1725 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, ", _arg~A" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1724 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, ") {~N" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1723 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "));~N" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D1722 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "  }~N}~N" };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D1721 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "  V_CALL(_k, runtime, _ret);~N" };
static struct { VBlob sym; char bytes[32]; } _V10_Dstring_D1720 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 32 }, "  V_CALL(_k, runtime, VVOID);~N" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1719 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, ", " };
static struct { VBlob sym; char bytes[24]; } _V10_Dstring_D1718 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "    VWORD _ret = ~A(~A(" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D1717 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "(~A(" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D1716 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "~A(runtime, _arg~A, \"~A\")" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1715 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "VCheckedDecodeVWORD2" };
static struct { VBlob sym; char bytes[22]; } _V10_Dstring_D1714 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "VCheckedDecodeNumber2" };
static struct { VBlob sym; char bytes[19]; } _V10_Dstring_D1713 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, "VCheckedDecodeInt2" };
static struct { VBlob sym; char bytes[29]; } _V10_Dstring_D1712 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 29 }, "VCheckedDecodeUnsignedShort2" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1711 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "VCheckedDecodeShort2" };
static struct { VBlob sym; char bytes[28]; } _V10_Dstring_D1710 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 28 }, "VCheckedDecodeUnsignedChar2" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D1709 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "VCheckedDecodeSignedChar2" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D1708 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "VCheckedDecodeChar2" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D1707 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "VCheckedDecodeBool2" };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D1706 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "VCheckedDecodeForeignPointer2" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D1705 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "VCheckedDecodeS8Ptr" };
VWEAK VWORD _V0s8__pointer;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0s8__pointer = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "s8-pointer" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D1704 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "VCheckedDecodeU8Ptr" };
VWEAK VWORD _V0u8__pointer;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0u8__pointer = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "u8-pointer" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1703 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "VCheckedDecodeS16Ptr" };
VWEAK VWORD _V0s16__pointer;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0s16__pointer = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "s16-pointer" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1702 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "VCheckedDecodeU16Ptr" };
VWEAK VWORD _V0u16__pointer;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0u16__pointer = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "u16-pointer" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1701 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "VCheckedDecodeS32Ptr" };
VWEAK VWORD _V0s32__pointer;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0s32__pointer = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "s32-pointer" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1700 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "VCheckedDecodeF64Ptr" };
VWEAK VWORD _V0f64__pointer;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0f64__pointer = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "f64-pointer" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1699 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "VCheckedDecodeF32Ptr" };
VWEAK VWORD _V0f32__pointer;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0f32__pointer = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "f32-pointer" };
static struct { VBlob sym; char bytes[23]; } _V10_Dstring_D1698 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, "VCheckedDecodeVoidPtr2" };
static struct { VBlob sym; char bytes[28]; } _V10_Dstring_D1697 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 28 }, "VCheckedDecodeConstVoidPtr2" };
VWEAK VWORD _V0const__void__pointer;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0const__void__pointer = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "const-void-pointer" };
static struct { VBlob sym; char bytes[28]; } _V10_Dstring_D1696 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 28 }, "VCheckedDecodeConstCString2" };
VWEAK VWORD _V0const__c__string;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0const__c__string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "const-c-string" };
static struct { VBlob sym; char bytes[23]; } _V10_Dstring_D1695 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, "VCheckedDecodeCString2" };
VWEAK VWORD _V0c__string;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0c__string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "c-string" };
VWEAK VWORD _V0VWORD;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0VWORD = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "VWORD" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D1694 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VEncodeDouble" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D1693 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VEncodeInt" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D1692 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VEncodeChar" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D1691 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VEncodeBool" };
static struct { VBlob sym; char bytes[22]; } _V10_Dstring_D1690 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "VEncodeForeignPointer" };
VWEAK VWORD _V0void__pointer;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0void__pointer = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "void-pointer" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D1689 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "_V30~A_shim" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1688 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "VForeignParseHeaderC" };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D1687 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "Invalid foreign import syntax" };
VWEAK VWORD _V10foreign_Dimport;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V10foreign_Dimport = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "##foreign.import" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D1686 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "#include <~A>\n" };
VWEAK VWORD _V10foreign_Ddeclare;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10foreign_Ddeclare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##foreign.declare" };
static struct { VBlob sym; char bytes[22]; } _V10_Dstring_D1685 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "File must be a string" };
VWEAK VWORD _V0windows;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0windows = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "windows" };
static struct { VBlob sym; char bytes[73]; } _V10_Dstring_D1684 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 73 }, "\"~A\" -E -P -undef -std=c11 -nostdinc -D__VANITY__ -w \"~A\" -I \"~A/~A/~A/\"" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1683 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "include/vscheme/stdc" };
static struct { VBlob sym; char bytes[75]; } _V10_Dstring_D1682 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 75 }, "\"\"~A\" -E -P -undef -std=c11 -nostdinc -D__VANITY__ -w \"~A\" -I \"~A/~A/~A/\"\"" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D1681 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "VExePath" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D1680 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "~A/../" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1679 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "~A/~A" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D1678 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "Unable to open header file" };
static struct { VBlob sym; char bytes[19]; } _V10_Dstring_D1677 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, "VForeignParseDeclC" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1676 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "VForeignReleaseParse" };
static struct { VBlob sym; char bytes[32]; } _V10_Dstring_D1675 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 32 }, "Invalid foreign function syntax" };
static struct { VBlob sym; char bytes[38]; } _V10_Dstring_D1674 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 38 }, "Unsupported foreign function language" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D1673 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "Declaration is not a single function" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D1672 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "naked_declaration" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D1671 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "unknown entry in ffi table" };
static struct { VBlob sym; char bytes[40]; } _V10_Dstring_D1670 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 40 }, "variable redeclared as different symbol" };
static struct { VBlob sym; char bytes[1]; } _V10_Dstring_D1669 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 1 }, "" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D1668 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "C" };
VWEAK VWORD _V10foreign_Dfunction;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10foreign_Dfunction = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##foreign.function" };
VWEAK VWORD _V0define;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0define = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "define" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D1667 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "typedef" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D1666 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "declaration" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D1665 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "toplevel" };
VWEAK VWORD _V0enum;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0enum = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "enum" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D1664 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "Unsupported C declaration" };
static struct { VBlob sym; char bytes[43]; } _V10_Dstring_D1663 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 43 }, "Unsupported arg type in C foreign-function" };
static struct { VBlob sym; char bytes[38]; } _V10_Dstring_D1662 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 38 }, "Not a simple function declaration: ~A" };
static struct { VBlob sym; char bytes[46]; } _V10_Dstring_D1661 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 46 }, "Unsupported return type in C foreign-function" };
static struct { VBlob sym; char bytes[22]; } _V10_Dstring_D1660 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "Unsupported C typedef" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1659 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "Not a simple typedef" };
VWEAK VWORD _V0restrict;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0restrict = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "restrict" };
VWEAK VWORD _V0static;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0static = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "static" };
static struct { VBlob sym; char bytes[40]; } _V10_Dstring_D1658 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 40 }, "Can only have one type in a declaration" };
static struct { VBlob sym; char bytes[43]; } _V10_Dstring_D1657 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 43 }, "Multiple storage specifiers in declaration" };
static struct { VBlob sym; char bytes[44]; } _V10_Dstring_D1656 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 44 }, "Unexpected storage specifier in declaration" };
VWEAK VWORD _V0extern;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0extern = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "extern" };
VWEAK VWORD _V0register;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0register = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "register" };
VWEAK VWORD _V0auto;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0auto = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "auto" };
VWEAK VWORD _V0volatile;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0volatile = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "volatile" };
VWEAK VWORD _V0signed;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0signed = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "signed" };
VWEAK VWORD _V0unsigned;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0unsigned = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "unsigned" };
VWEAK VWORD _V0longs;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0longs = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "longs" };
VWEAK VWORD _V0special;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0special = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "special" };
static struct { VBlob sym; char bytes[29]; } _V10_Dstring_D1655 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 29 }, "unsupported type combination" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D1654 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "enum" };
VWEAK VWORD _V0unsigned__short;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0unsigned__short = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "unsigned-short" };
VWEAK VWORD _V0short;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0short = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "short" };
VWEAK VWORD _V0unsigned__long__long;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0unsigned__long__long = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "unsigned-long-long" };
VWEAK VWORD _V0long__long;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0long__long = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "long-long" };
VWEAK VWORD _V0unsigned__long;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0unsigned__long = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "unsigned-long" };
VWEAK VWORD _V0long;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0long = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "long" };
VWEAK VWORD _V0unsigned__int;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0unsigned__int = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "unsigned-int" };
VWEAK VWORD _V0int;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0int = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "int" };
VWEAK VWORD _V0signed__char;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0signed__char = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "signed-char" };
VWEAK VWORD _V0unsigned__char;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0unsigned__char = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "unsigned-char" };
VWEAK VWORD _V0char;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0char = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "char" };
VWEAK VWORD _V0typedef;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0typedef = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "typedef" };
static struct { VBlob sym; char bytes[17]; } _V10_Dstring_D1653 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "unknown typename" };
VWEAK VWORD _V0_UBool;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0_UBool = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "_Bool" };
VWEAK VWORD _V0double;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0double = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "double" };
VWEAK VWORD _V0float;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0float = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "float" };
VWEAK VWORD _V0void;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0void = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "void" };
VWEAK VWORD _V0variable;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0variable = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "variable" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D1652 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "match statement exhausted" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D1651 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "static-array" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1650 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "array" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D1649 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "pointer" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D1648 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "parameter_list" };
VWEAK VWORD _V0function;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0function = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "function" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D1647 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "function" };
VWEAK VWORD _V0array;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0array = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "array" };
VWEAK VWORD _V0pointer;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0pointer = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "pointer" };
VWEAK VWORD _V0const;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0const = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "const" };
static __attribute__((constructor)) void VDllMain1() {
  _V0memv = VEncodePointer(VLookupConstant("_V0memv", &_VW_V0memv), VPOINTER_OTHER);
  _V0symbol_Q = VEncodePointer(VLookupConstant("_V0symbol_Q", &_VW_V0symbol_Q), VPOINTER_OTHER);
  _V0list = VEncodePointer(VLookupConstant("_V0list", &_VW_V0list), VPOINTER_OTHER);
  _V0map = VEncodePointer(VLookupConstant("_V0map", &_VW_V0map), VPOINTER_OTHER);
  _V0string___Gsymbol = VEncodePointer(VLookupConstant("_V0string___Gsymbol", &_VW_V0string___Gsymbol), VPOINTER_OTHER);
  _V0caar = VEncodePointer(VLookupConstant("_V0caar", &_VW_V0caar), VPOINTER_OTHER);
  _V0caddar = VEncodePointer(VLookupConstant("_V0caddar", &_VW_V0caddar), VPOINTER_OTHER);
  _V0member = VEncodePointer(VLookupConstant("_V0member", &_VW_V0member), VPOINTER_OTHER);
  _V0cadar = VEncodePointer(VLookupConstant("_V0cadar", &_VW_V0cadar), VPOINTER_OTHER);
  _V0symbol___Gstring = VEncodePointer(VLookupConstant("_V0symbol___Gstring", &_VW_V0symbol___Gstring), VPOINTER_OTHER);
  _V0string__copy = VEncodePointer(VLookupConstant("_V0string__copy", &_VW_V0string__copy), VPOINTER_OTHER);
  _V0cdadr = VEncodePointer(VLookupConstant("_V0cdadr", &_VW_V0cdadr), VPOINTER_OTHER);
  _V0caddr = VEncodePointer(VLookupConstant("_V0caddr", &_VW_V0caddr), VPOINTER_OTHER);
  _V0cdddr = VEncodePointer(VLookupConstant("_V0cdddr", &_VW_V0cdddr), VPOINTER_OTHER);
  _V0null_Q = VEncodePointer(VLookupConstant("_V0null_Q", &_VW_V0null_Q), VPOINTER_OTHER);
  _V0file__exists_Q = VEncodePointer(VLookupConstant("_V0file__exists_Q", &_VW_V0file__exists_Q), VPOINTER_OTHER);
  _V0install__root = VEncodePointer(VLookupConstant("_V0install__root", &_VW_V0install__root), VPOINTER_OTHER);
  _V0platform = VEncodePointer(VLookupConstant("_V0platform", &_VW_V0platform), VPOINTER_OTHER);
  _V0gcc__path = VEncodePointer(VLookupConstant("_V0gcc__path", &_VW_V0gcc__path), VPOINTER_OTHER);
  _V0open__input__process = VEncodePointer(VLookupConstant("_V0open__input__process", &_VW_V0open__input__process), VPOINTER_OTHER);
  _V0cons = VEncodePointer(VLookupConstant("_V0cons", &_VW_V0cons), VPOINTER_OTHER);
  _V0close__port = VEncodePointer(VLookupConstant("_V0close__port", &_VW_V0close__port), VPOINTER_OTHER);
  _V0not = VEncodePointer(VLookupConstant("_V0not", &_VW_V0not), VPOINTER_OTHER);
  _V0string_Q = VEncodePointer(VLookupConstant("_V0string_Q", &_VW_V0string_Q), VPOINTER_OTHER);
  _V0compiler__error = VEncodePointer(VLookupConstant("_V0compiler__error", &_VW_V0compiler__error), VPOINTER_OTHER);
  _V0sprintf = VEncodePointer(VLookupConstant("_V0sprintf", &_VW_V0sprintf), VPOINTER_OTHER);
  _V0cadr = VEncodePointer(VLookupConstant("_V0cadr", &_VW_V0cadr), VPOINTER_OTHER);
  _V0assv = VEncodePointer(VLookupConstant("_V0assv", &_VW_V0assv), VPOINTER_OTHER);
  _V0iota = VEncodePointer(VLookupConstant("_V0iota", &_VW_V0iota), VPOINTER_OTHER);
  _V0length = VEncodePointer(VLookupConstant("_V0length", &_VW_V0length), VPOINTER_OTHER);
  _V0printf = VEncodePointer(VLookupConstant("_V0printf", &_VW_V0printf), VPOINTER_OTHER);
  _V0eqv_Q = VEncodePointer(VLookupConstant("_V0eqv_Q", &_VW_V0eqv_Q), VPOINTER_OTHER);
  _V0cdr = VEncodePointer(VLookupConstant("_V0cdr", &_VW_V0cdr), VPOINTER_OTHER);
  _V0for__each = VEncodePointer(VLookupConstant("_V0for__each", &_VW_V0for__each), VPOINTER_OTHER);
  _V0car = VEncodePointer(VLookupConstant("_V0car", &_VW_V0car), VPOINTER_OTHER);
  _V0pair_Q = VEncodePointer(VLookupConstant("_V0pair_Q", &_VW_V0pair_Q), VPOINTER_OTHER);
  _V0_P = VEncodePointer(VLookupConstant("_V0_P", &_VW_V0_P), VPOINTER_OTHER);
  _V0call__with__values = VEncodePointer(VLookupConstant("_V0call__with__values", &_VW_V0call__with__values), VPOINTER_OTHER);
  _V0call_Wcc = VEncodePointer(VLookupConstant("_V0call_Wcc", &_VW_V0call_Wcc), VPOINTER_OTHER);
  _V0reverse = VEncodePointer(VLookupConstant("_V0reverse", &_VW_V0reverse), VPOINTER_OTHER);
  _V0equal_Q = VEncodePointer(VLookupConstant("_V0equal_Q", &_VW_V0equal_Q), VPOINTER_OTHER);
  _V0error = VEncodePointer(VLookupConstant("_V0error", &_VW_V0error), VPOINTER_OTHER);
  _V0get__foreign__decoder = VEncodePointer(VLookupConstant("_V0get__foreign__decoder", &_VW_V0get__foreign__decoder), VPOINTER_OTHER);
  _V0get__foreign__encoder = VEncodePointer(VLookupConstant("_V0get__foreign__encoder", &_VW_V0get__foreign__encoder), VPOINTER_OTHER);
  _V0resolve__foreign__import = VEncodePointer(VLookupConstant("_V0resolve__foreign__import", &_VW_V0resolve__foreign__import), VPOINTER_OTHER);
  _V0print__foreign__function = VEncodePointer(VLookupConstant("_V0print__foreign__function", &_VW_V0print__foreign__function), VPOINTER_OTHER);
  _V0validate__foreign__function = VEncodePointer(VLookupConstant("_V0validate__foreign__function", &_VW_V0validate__foreign__function), VPOINTER_OTHER);
  _V0mangle__foreign__function = VEncodePointer(VLookupConstant("_V0mangle__foreign__function", &_VW_V0mangle__foreign__function), VPOINTER_OTHER);
  _V0s8__pointer = VEncodePointer(VLookupConstant("_V0s8__pointer", &_VW_V0s8__pointer), VPOINTER_OTHER);
  _V0u8__pointer = VEncodePointer(VLookupConstant("_V0u8__pointer", &_VW_V0u8__pointer), VPOINTER_OTHER);
  _V0s16__pointer = VEncodePointer(VLookupConstant("_V0s16__pointer", &_VW_V0s16__pointer), VPOINTER_OTHER);
  _V0u16__pointer = VEncodePointer(VLookupConstant("_V0u16__pointer", &_VW_V0u16__pointer), VPOINTER_OTHER);
  _V0s32__pointer = VEncodePointer(VLookupConstant("_V0s32__pointer", &_VW_V0s32__pointer), VPOINTER_OTHER);
  _V0f64__pointer = VEncodePointer(VLookupConstant("_V0f64__pointer", &_VW_V0f64__pointer), VPOINTER_OTHER);
  _V0f32__pointer = VEncodePointer(VLookupConstant("_V0f32__pointer", &_VW_V0f32__pointer), VPOINTER_OTHER);
  _V0const__void__pointer = VEncodePointer(VLookupConstant("_V0const__void__pointer", &_VW_V0const__void__pointer), VPOINTER_OTHER);
  _V0const__c__string = VEncodePointer(VLookupConstant("_V0const__c__string", &_VW_V0const__c__string), VPOINTER_OTHER);
  _V0c__string = VEncodePointer(VLookupConstant("_V0c__string", &_VW_V0c__string), VPOINTER_OTHER);
  _V0VWORD = VEncodePointer(VLookupConstant("_V0VWORD", &_VW_V0VWORD), VPOINTER_OTHER);
  _V0void__pointer = VEncodePointer(VLookupConstant("_V0void__pointer", &_VW_V0void__pointer), VPOINTER_OTHER);
  _V10foreign_Dimport = VEncodePointer(VLookupConstant("_V10foreign_Dimport", &_VW_V10foreign_Dimport), VPOINTER_OTHER);
  _V10foreign_Ddeclare = VEncodePointer(VLookupConstant("_V10foreign_Ddeclare", &_VW_V10foreign_Ddeclare), VPOINTER_OTHER);
  _V0windows = VEncodePointer(VLookupConstant("_V0windows", &_VW_V0windows), VPOINTER_OTHER);
  _V10foreign_Dfunction = VEncodePointer(VLookupConstant("_V10foreign_Dfunction", &_VW_V10foreign_Dfunction), VPOINTER_OTHER);
  _V0define = VEncodePointer(VLookupConstant("_V0define", &_VW_V0define), VPOINTER_OTHER);
  _V0enum = VEncodePointer(VLookupConstant("_V0enum", &_VW_V0enum), VPOINTER_OTHER);
  _V0restrict = VEncodePointer(VLookupConstant("_V0restrict", &_VW_V0restrict), VPOINTER_OTHER);
  _V0static = VEncodePointer(VLookupConstant("_V0static", &_VW_V0static), VPOINTER_OTHER);
  _V0extern = VEncodePointer(VLookupConstant("_V0extern", &_VW_V0extern), VPOINTER_OTHER);
  _V0register = VEncodePointer(VLookupConstant("_V0register", &_VW_V0register), VPOINTER_OTHER);
  _V0auto = VEncodePointer(VLookupConstant("_V0auto", &_VW_V0auto), VPOINTER_OTHER);
  _V0volatile = VEncodePointer(VLookupConstant("_V0volatile", &_VW_V0volatile), VPOINTER_OTHER);
  _V0signed = VEncodePointer(VLookupConstant("_V0signed", &_VW_V0signed), VPOINTER_OTHER);
  _V0unsigned = VEncodePointer(VLookupConstant("_V0unsigned", &_VW_V0unsigned), VPOINTER_OTHER);
  _V0longs = VEncodePointer(VLookupConstant("_V0longs", &_VW_V0longs), VPOINTER_OTHER);
  _V0special = VEncodePointer(VLookupConstant("_V0special", &_VW_V0special), VPOINTER_OTHER);
  _V0unsigned__short = VEncodePointer(VLookupConstant("_V0unsigned__short", &_VW_V0unsigned__short), VPOINTER_OTHER);
  _V0short = VEncodePointer(VLookupConstant("_V0short", &_VW_V0short), VPOINTER_OTHER);
  _V0unsigned__long__long = VEncodePointer(VLookupConstant("_V0unsigned__long__long", &_VW_V0unsigned__long__long), VPOINTER_OTHER);
  _V0long__long = VEncodePointer(VLookupConstant("_V0long__long", &_VW_V0long__long), VPOINTER_OTHER);
  _V0unsigned__long = VEncodePointer(VLookupConstant("_V0unsigned__long", &_VW_V0unsigned__long), VPOINTER_OTHER);
  _V0long = VEncodePointer(VLookupConstant("_V0long", &_VW_V0long), VPOINTER_OTHER);
  _V0unsigned__int = VEncodePointer(VLookupConstant("_V0unsigned__int", &_VW_V0unsigned__int), VPOINTER_OTHER);
  _V0int = VEncodePointer(VLookupConstant("_V0int", &_VW_V0int), VPOINTER_OTHER);
  _V0signed__char = VEncodePointer(VLookupConstant("_V0signed__char", &_VW_V0signed__char), VPOINTER_OTHER);
  _V0unsigned__char = VEncodePointer(VLookupConstant("_V0unsigned__char", &_VW_V0unsigned__char), VPOINTER_OTHER);
  _V0char = VEncodePointer(VLookupConstant("_V0char", &_VW_V0char), VPOINTER_OTHER);
  _V0typedef = VEncodePointer(VLookupConstant("_V0typedef", &_VW_V0typedef), VPOINTER_OTHER);
  _V0_UBool = VEncodePointer(VLookupConstant("_V0_UBool", &_VW_V0_UBool), VPOINTER_OTHER);
  _V0double = VEncodePointer(VLookupConstant("_V0double", &_VW_V0double), VPOINTER_OTHER);
  _V0float = VEncodePointer(VLookupConstant("_V0float", &_VW_V0float), VPOINTER_OTHER);
  _V0void = VEncodePointer(VLookupConstant("_V0void", &_VW_V0void), VPOINTER_OTHER);
  _V0variable = VEncodePointer(VLookupConstant("_V0variable", &_VW_V0variable), VPOINTER_OTHER);
  _V0function = VEncodePointer(VLookupConstant("_V0function", &_VW_V0function), VPOINTER_OTHER);
  _V0array = VEncodePointer(VLookupConstant("_V0array", &_VW_V0array), VPOINTER_OTHER);
  _V0pointer = VEncodePointer(VLookupConstant("_V0pointer", &_VW_V0pointer), VPOINTER_OTHER);
  _V0const = VEncodePointer(VLookupConstant("_V0const", &_VW_V0const), VPOINTER_OTHER);
}
static void _V10_Ddrop__const_D243_k50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddrop__const_D243_k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddrop__const_D243_k50, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##vcore.pair? (bruijn ##.expr.3.250 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.3.250 0 0))) ((bruijn ##.kk.0.247 5 1) (bruijn ##.k.624 2 0) (##inline ##vcore.car (bruijn ##.expr.3.250 0 0))) ((bruijn ##.k.624 2 0) #f)) ((bruijn ##.k.624 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->vars[0],
      VInlineCar2(runtime,
        _var0));
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
static void _V10_Ddrop__const_D243_k49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddrop__const_D243_k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddrop__const_D243_k49, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.625 0 0) ((close _V10_Ddrop__const_D243_k50) (##inline ##vcore.cdr (bruijn ##.expr.2.249 2 0))) ((bruijn ##.k.624 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Ddrop__const_D243_k50, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddrop__const_D243_k48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddrop__const_D243_k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddrop__const_D243_k48, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.2.249 1 0)) ((bruijn ##.equal?.220 8 40) (close _V10_Ddrop__const_D243_k49) 'const (##inline ##vcore.car (bruijn ##.expr.2.249 1 0))) ((bruijn ##.k.624 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 8-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddrop__const_D243_k49, env)}),
      _V0const,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddrop__const_D243_k51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddrop__const_D243_k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddrop__const_D243_k51, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.0.247 3 1) (bruijn ##.k.621 3 0) (bruijn ##.x.246 4 1))
    V_CALL(upenv->up->up->vars[1], runtime,
      upenv->up->up->vars[0],
      upenv->up->up->up->vars[1]);
 }
}
static void _V10_Ddrop__const_D243_lambda7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddrop__const_D243_lambda7, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Ddrop__const_D243_k48) (close _V10_Ddrop__const_D243_k51))
    V_CALL_FUNC(_V10_Ddrop__const_D243_k48, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddrop__const_D243_k51, env)}));
 }
}
static void _V10_Ddrop__const_D243_lambda6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddrop__const_D243_lambda6, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Ddrop__const_D243_lambda7) (bruijn ##.input.1.248 0 0))
    V_CALL_FUNC(_V10_Ddrop__const_D243_lambda7, env, runtime,
      _var0);
 }
}
static void _V10_Ddrop__const_D243_lambda5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddrop__const_D243_lambda5, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddrop__const_D243_lambda5, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Ddrop__const_D243_lambda6) (bruijn ##.x.246 1 1))
    V_CALL_FUNC(_V10_Ddrop__const_D243_lambda6, env, runtime,
      upenv->vars[1]);
 }
}
static void _V10_Ddrop__const_D243_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddrop__const_D243_lambda4, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddrop__const_D243_lambda4, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.call/cc.218 4 38) (bruijn ##.k.620 0 0) (close _V10_Ddrop__const_D243_lambda5))
    V_CALL(upenv->up->up->up->vars[38], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddrop__const_D243_lambda5, env)}));
 }
}
static void _V10_Dreduce__args_D244_k60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__args_D244_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__args_D244_k60, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.cons.200 13 20) (bruijn ##.k.630 9 0) (bruijn ##.x.632 2 0) (bruijn ##.x.633 0 0))
    V_CALL(VGetArg(upenv, 13-1, 20), runtime,
      VGetArg(upenv, 9-1, 0),
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Dreduce__args_D244_k59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__args_D244_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__args_D244_k59, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reduce-args.244 9 1) (close _V10_Dreduce__args_D244_k60) (bruijn ##.x.634 0 0))
    V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__args_D244_k60, env)}),
      _var0);
 }
}
static void _V10_Dreduce__args_D244_k58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__args_D244_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__args_D244_k58, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.212 11 32) (close _V10_Dreduce__args_D244_k59) (bruijn ##.args.252 7 1))
    V_CALL(VGetArg(upenv, 11-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__args_D244_k59, env)}),
      VGetArg(upenv, 7-1, 1));
 }
}
static void _V10_Dreduce__args_D244_k65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__args_D244_k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__args_D244_k65, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.4.254 7 1) (bruijn ##.k.638 4 0) (bruijn ##.x.643 0 0))
    V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->up->up->vars[0],
      _var0);
 }
}
static void _V10_Dreduce__args_D244_k64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__args_D244_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__args_D244_k64, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.8.259 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.8.259 0 0))) ((bruijn ##.list.182 17 2) (close _V10_Dreduce__args_D244_k65) 'pointer (##inline ##vcore.car (bruijn ##.expr.8.259 0 0))) ((bruijn ##.k.638 3 0) #f)) ((bruijn ##.k.638 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 17-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__args_D244_k65, env)}),
      _V0pointer,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dreduce__args_D244_k63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__args_D244_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__args_D244_k63, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.7.257 0 0)) ((close _V10_Dreduce__args_D244_k64) (##inline ##vcore.cdr (bruijn ##.expr.7.257 0 0))) ((bruijn ##.k.638 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dreduce__args_D244_k64, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dreduce__args_D244_k62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__args_D244_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__args_D244_k62, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.639 0 0) ((close _V10_Dreduce__args_D244_k63) (##inline ##vcore.cdr (bruijn ##.expr.6.256 2 0))) ((bruijn ##.k.638 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dreduce__args_D244_k63, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dreduce__args_D244_k61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__args_D244_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__args_D244_k61, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.6.256 1 0)) ((bruijn ##.equal?.220 14 40) (close _V10_Dreduce__args_D244_k62) 'array (##inline ##vcore.car (bruijn ##.expr.6.256 1 0))) ((bruijn ##.k.638 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 14-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__args_D244_k62, env)}),
      _V0array,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dreduce__args_D244_k66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__args_D244_k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__args_D244_k66, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.4.254 3 1) (bruijn ##.k.635 3 0) (bruijn ##.arg.253 4 0))
    V_CALL(upenv->up->up->vars[1], runtime,
      upenv->up->up->vars[0],
      upenv->up->up->up->vars[0]);
 }
}
static void _V10_Dreduce__args_D244_lambda11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__args_D244_lambda11, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dreduce__args_D244_k61) (close _V10_Dreduce__args_D244_k66))
    V_CALL_FUNC(_V10_Dreduce__args_D244_k61, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__args_D244_k66, env)}));
 }
}
static void _V10_Dreduce__args_D244_lambda10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__args_D244_lambda10, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dreduce__args_D244_lambda11) (bruijn ##.input.5.255 0 0))
    V_CALL_FUNC(_V10_Dreduce__args_D244_lambda11, env, runtime,
      _var0);
 }
}
static void _V10_Dreduce__args_D244_lambda9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__args_D244_lambda9, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__args_D244_lambda9, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dreduce__args_D244_lambda10) (bruijn ##.arg.253 1 0))
    V_CALL_FUNC(_V10_Dreduce__args_D244_lambda10, env, runtime,
      upenv->vars[0]);
 }
}
static void _V10_Dreduce__args_D244_k57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__args_D244_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__args_D244_k57, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call/cc.218 10 38) (close _V10_Dreduce__args_D244_k58) (close _V10_Dreduce__args_D244_lambda9))
    V_CALL(VGetArg(upenv, 10-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__args_D244_k58, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__args_D244_lambda9, env)}));
 }
}
static void _V10_Dreduce__args_D244_k56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__args_D244_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__args_D244_k56, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cadr.206 9 26) (close _V10_Dreduce__args_D244_k57) (bruijn ##.x.646 0 0))
    V_CALL(VGetArg(upenv, 9-1, 26), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__args_D244_k57, env)}),
      _var0);
 }
}
static void _V10_Dreduce__args_D244_k55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__args_D244_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__args_D244_k55, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reduce-declare.222 7 0) (close _V10_Dreduce__args_D244_k56) (bruijn ##.x.647 1 0) (bruijn ##.x.648 0 0) (bruijn ##.table.242 6 3))
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__args_D244_k56, env)}),
      upenv->vars[0],
      _var0,
      VGetArg(upenv, 6-1, 3));
 }
}
static void _V10_Dreduce__args_D244_k54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__args_D244_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__args_D244_k54, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cadar.188 7 8) (close _V10_Dreduce__args_D244_k55) (bruijn ##.args.252 3 1))
    V_CALL(VGetArg(upenv, 7-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__args_D244_k55, env)}),
      upenv->up->up->vars[1]);
 }
}
static void _V10_Dreduce__args_D244_k53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__args_D244_k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__args_D244_k53, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reduce-type.224 5 2) (close _V10_Dreduce__args_D244_k54) (bruijn ##.x.649 0 0) (bruijn ##.table.242 4 3) #f)
    V_CALL(VGetArg(upenv, 5-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__args_D244_k54, env)}),
      _var0,
      upenv->up->up->up->vars[3],
      VEncodeBool(false));
 }
}
static void _V10_Dreduce__args_D244_k52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__args_D244_k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__args_D244_k52, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.631 0 0) ((bruijn ##.k.630 1 0) '()) ((bruijn ##.caar.185 5 5) (close _V10_Dreduce__args_D244_k53) (bruijn ##.args.252 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VNULL);
} else {
    V_CALL(VGetArg(upenv, 5-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__args_D244_k53, env)}),
      upenv->vars[1]);
}
 }
}
static void _V10_Dreduce__args_D244_lambda8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__args_D244_lambda8, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__args_D244_lambda8, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.null?.194 4 14) (close _V10_Dreduce__args_D244_k52) (bruijn ##.args.252 0 1))
    V_CALL(upenv->up->up->up->vars[14], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__args_D244_k52, env)}),
      _var1);
 }
}
static void _V10_Dreduce__declare__loop_D245_k69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D245_k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D245_k69, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.748 1 0) (##vcore.blob=? (bruijn ##.k.749 0 0) (##string ##.string.1647) (##inline ##vcore.car (bruijn ##.expr.11.265 3 0))) ((bruijn ##.k.749 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL_FUNC(VBlobEqv2, NULL, runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D1647.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        upenv->up->up->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dreduce__declare__loop_D245_k72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D245_k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D245_k72, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.9.263 7 1) (bruijn ##.k.739 4 0) (##inline ##vcore.cons 'function (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.12.266 1 0)) (##inline ##vcore.cons (bruijn ##.x.746 0 0) '()))))
    V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VInlineCons2(runtime,
        _V0function,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->vars[0]),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
 }
}
static void _V10_Dreduce__declare__loop_D245_k71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D245_k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D245_k71, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.12.266 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.12.266 0 0))) ((bruijn ##.drop-const.243 8 0) (close _V10_Dreduce__declare__loop_D245_k72) (bruijn ##.ret.261 7 1)) ((bruijn ##.k.739 3 0) #f)) ((bruijn ##.k.739 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D245_k72, env)}),
      VGetArg(upenv, 7-1, 1));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dreduce__declare__loop_D245_k70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D245_k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D245_k70, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.740 0 0) ((close _V10_Dreduce__declare__loop_D245_k71) (##inline ##vcore.cdr (bruijn ##.expr.11.265 3 0))) ((bruijn ##.k.739 2 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dreduce__declare__loop_D245_k71, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->up->vars[0]));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dreduce__declare__loop_D245_k68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D245_k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D245_k68, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dreduce__declare__loop_D245_k69) (close _V10_Dreduce__declare__loop_D245_k70))
    V_CALL_FUNC(_V10_Dreduce__declare__loop_D245_k69, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D245_k70, env)}));
 }
}
static void _V10_Dreduce__declare__loop_D245_k67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D245_k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D245_k67, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.11.265 1 0)) (##vcore.string? (close _V10_Dreduce__declare__loop_D245_k68) (##inline ##vcore.car (bruijn ##.expr.11.265 1 0))) ((bruijn ##.k.739 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(VStringP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D245_k68, env)}),
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dreduce__declare__loop_D245_k76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D245_k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D245_k76, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.734 1 0) (##vcore.blob=? (bruijn ##.k.735 0 0) (##string ##.string.1647) (##inline ##vcore.car (bruijn ##.expr.13.268 3 0))) ((bruijn ##.k.735 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL_FUNC(VBlobEqv2, NULL, runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D1647.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        upenv->up->up->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dreduce__declare__loop_D245_k82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D245_k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D245_k82, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.730 1 0) (##vcore.blob=? (bruijn ##.k.731 0 0) (##string ##.string.1648) (##inline ##vcore.car (bruijn ##.expr.16.272 2 0))) ((bruijn ##.k.731 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL_FUNC(VBlobEqv2, NULL, runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D1648.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D275_k85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D275_k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D275_k85, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.19.274 4 1) (bruijn ##.k.717 1 0) (bruijn ##.expr.21.276 2 1) (bruijn ##.x.718 0 0))
    V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[1],
      _var0);
 }
}
static void _V10_Dloop_D275_k84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D275_k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D275_k84, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.21.276 1 1))) ((bruijn ##.reverse.219 22 39) (close _V10_Dloop_D275_k85) (bruijn ##.args.18.277 1 2)) ((bruijn ##.k.717 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        upenv->vars[1])))) {
    V_CALL(VGetArg(upenv, 22-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D275_k85, env)}),
      upenv->vars[2]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D275_k88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D275_k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D275_k88, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.19.274 7 1) (bruijn ##.k.711 2 0) (bruijn ##.expr.21.276 5 1) (bruijn ##.x.713 0 0))
    V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      _var0);
 }
}
static void _V10_Dloop_D275_k87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D275_k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D275_k87, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.219 25 39) (close _V10_Dloop_D275_k88) (bruijn ##.args.18.277 4 2))
    V_CALL(VGetArg(upenv, 25-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D275_k88, env)}),
      upenv->up->up->up->vars[2]);
 }
}
static void _V10_Dloop_D275_lambda21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D275_lambda21, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D275_lambda21, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.kk.20.278 0 1) (close _V10_Dloop_D275_k87) (##inline ##vcore.cdr (bruijn ##.expr.21.276 3 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.21.276 3 1)) (bruijn ##.args.18.277 3 2)))
    V_CALL(_var1, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D275_k87, env)}),
      VInlineCdr2(runtime,
        upenv->up->up->vars[1]),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->up->up->vars[1]),
        upenv->up->up->vars[2]));
 }
}
static void _V10_Dloop_D275_lambda20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D275_lambda20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D275_lambda20, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call/cc.218 23 38) (bruijn ##.k.710 0 0) (close _V10_Dloop_D275_lambda21))
    V_CALL(VGetArg(upenv, 23-1, 38), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D275_lambda21, env)}));
 }
}
static void _V10_Dloop_D275_k86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D275_k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D275_k86, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call-with-values.217 22 37) (bruijn ##.k.708 1 0) (close _V10_Dloop_D275_lambda20) (bruijn ##.loop.275 2 0))
    V_CALL(VGetArg(upenv, 22-1, 37), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D275_lambda20, env)}),
      upenv->up->vars[0]);
 }
}
static void _V10_Dloop_D275_lambda19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D275_lambda19, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D275_lambda19, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V10_Dloop_D275_k84) (close _V10_Dloop_D275_k86))
    V_CALL_FUNC(_V10_Dloop_D275_k84, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D275_k86, env)}));
 }
}
static void _V10_Dreduce__declare__loop_D245_lambda18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D245_lambda18, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D245_lambda18, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D275_lambda19)) ((bruijn ##.loop.275 0 0) (bruijn ##.k.707 1 0) (##inline ##vcore.cdr (bruijn ##.expr.16.272 5 0)) '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D275_lambda19, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VInlineCdr2(runtime,
        VGetArg(upenv, 5-1, 0)),
      VNULL);
    }
 }
}
static void _V10_Dreduce__declare__loop_D245_lambda17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D245_lambda17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D245_lambda17, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call/cc.218 18 38) (bruijn ##.k.706 0 0) (close _V10_Dreduce__declare__loop_D245_lambda18))
    V_CALL(VGetArg(upenv, 18-1, 38), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D245_lambda18, env)}));
 }
}
static void _V10_Dreduce__declare__loop_D245_k91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D245_k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D245_k91, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.9.263 16 1) (bruijn ##.k.720 3 0) (##inline ##vcore.cons 'function (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.14.269 8 0)) (##inline ##vcore.cons (bruijn ##.x.726 2 0) (bruijn ##.x.727 0 0)))))
    V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      upenv->up->up->vars[0],
      VInlineCons2(runtime,
        _V0function,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(upenv, 8-1, 0)),
        VInlineCons2(runtime,
        upenv->up->vars[0],
        _var0))));
 }
}
static void _V10_Dreduce__declare__loop_D245_k90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D245_k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D245_k90, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.183 20 3) (close _V10_Dreduce__declare__loop_D245_k91) (bruijn ##.drop-const.243 17 0) (bruijn ##.x.728 0 0))
    V_CALL(VGetArg(upenv, 20-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D245_k91, env)}),
      VGetArg(upenv, 17-1, 0),
      _var0);
 }
}
static void _V10_Dreduce__declare__loop_D245_k89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D245_k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D245_k89, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reduce-args.244 16 1) (close _V10_Dreduce__declare__loop_D245_k90) (bruijn ##.args.281 1 2))
    V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D245_k90, env)}),
      upenv->vars[2]);
 }
}
static void _V10_Dreduce__declare__loop_D245_lambda22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D245_lambda22, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D245_lambda22, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.280 0 1)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.15.271 4 0))) ((bruijn ##.drop-const.243 15 0) (close _V10_Dreduce__declare__loop_D245_k89) (bruijn ##.ret.261 14 1)) ((bruijn ##.k.720 0 0) #f)) ((bruijn ##.k.720 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->up->up->up->vars[0])))) {
    V_CALL(VGetArg(upenv, 15-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D245_k89, env)}),
      VGetArg(upenv, 14-1, 1));
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
static void _V10_Dreduce__declare__loop_D245_k83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D245_k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D245_k83, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.705 0 0) ((bruijn ##.call-with-values.217 17 37) (bruijn ##.k.700 7 0) (close _V10_Dreduce__declare__loop_D245_lambda17) (close _V10_Dreduce__declare__loop_D245_lambda22)) ((bruijn ##.k.700 7 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 17-1, 37), runtime,
      VGetArg(upenv, 7-1, 0),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D245_lambda17, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D245_lambda22, env)}));
} else {
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dreduce__declare__loop_D245_k81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D245_k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D245_k81, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dreduce__declare__loop_D245_k82) (close _V10_Dreduce__declare__loop_D245_k83))
    V_CALL_FUNC(_V10_Dreduce__declare__loop_D245_k82, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D245_k83, env)}));
 }
}
static void _V10_Dreduce__declare__loop_D245_k80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D245_k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D245_k80, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.16.272 0 0)) (##vcore.string? (close _V10_Dreduce__declare__loop_D245_k81) (##inline ##vcore.car (bruijn ##.expr.16.272 0 0))) ((bruijn ##.k.700 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(VStringP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D245_k81, env)}),
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dreduce__declare__loop_D245_k79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D245_k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D245_k79, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.15.271 0 0)) ((close _V10_Dreduce__declare__loop_D245_k80) (##inline ##vcore.car (bruijn ##.expr.15.271 0 0))) ((bruijn ##.k.700 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dreduce__declare__loop_D245_k80, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dreduce__declare__loop_D245_k78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D245_k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D245_k78, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.14.269 0 0)) ((close _V10_Dreduce__declare__loop_D245_k79) (##inline ##vcore.cdr (bruijn ##.expr.14.269 0 0))) ((bruijn ##.k.700 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dreduce__declare__loop_D245_k79, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dreduce__declare__loop_D245_k77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D245_k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D245_k77, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.701 0 0) ((close _V10_Dreduce__declare__loop_D245_k78) (##inline ##vcore.cdr (bruijn ##.expr.13.268 3 0))) ((bruijn ##.k.700 2 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dreduce__declare__loop_D245_k78, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->up->vars[0]));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dreduce__declare__loop_D245_k75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D245_k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D245_k75, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dreduce__declare__loop_D245_k76) (close _V10_Dreduce__declare__loop_D245_k77))
    V_CALL_FUNC(_V10_Dreduce__declare__loop_D245_k76, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D245_k77, env)}));
 }
}
static void _V10_Dreduce__declare__loop_D245_k74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D245_k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D245_k74, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.13.268 1 0)) (##vcore.string? (close _V10_Dreduce__declare__loop_D245_k75) (##inline ##vcore.car (bruijn ##.expr.13.268 1 0))) ((bruijn ##.k.700 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(VStringP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D245_k75, env)}),
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dreduce__declare__loop_D245_k95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D245_k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D245_k95, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.695 1 0) (##vcore.blob=? (bruijn ##.k.696 0 0) (##string ##.string.1649) (##inline ##vcore.car (bruijn ##.expr.22.282 3 0))) ((bruijn ##.k.696 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL_FUNC(VBlobEqv2, NULL, runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D1649.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        upenv->up->up->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dreduce__declare__loop_D245_k99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D245_k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D245_k99, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.9.263 12 1) (bruijn ##.k.688 5 0) (bruijn ##.x.692 0 0))
    V_CALL(VGetArg(upenv, 12-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V10_Dreduce__declare__loop_D245_k98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D245_k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D245_k98, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reduce-declare-loop.245 13 2) (close _V10_Dreduce__declare__loop_D245_k99) (bruijn ##.x.693 0 0) (##inline ##vcore.car (bruijn ##.expr.23.283 1 0)))
    V_CALL(VGetArg(upenv, 13-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D245_k99, env)}),
      _var0,
      VInlineCar2(runtime,
        upenv->vars[0]));
 }
}
static void _V10_Dreduce__declare__loop_D245_k97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D245_k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D245_k97, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.23.283 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.23.283 0 0))) ((bruijn ##.list.182 15 2) (close _V10_Dreduce__declare__loop_D245_k98) 'pointer (bruijn ##.ret.261 11 1)) ((bruijn ##.k.688 3 0) #f)) ((bruijn ##.k.688 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 15-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D245_k98, env)}),
      _V0pointer,
      VGetArg(upenv, 11-1, 1));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dreduce__declare__loop_D245_k96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D245_k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D245_k96, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.689 0 0) ((close _V10_Dreduce__declare__loop_D245_k97) (##inline ##vcore.cdr (bruijn ##.expr.22.282 3 0))) ((bruijn ##.k.688 2 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dreduce__declare__loop_D245_k97, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->up->vars[0]));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dreduce__declare__loop_D245_k94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D245_k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D245_k94, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dreduce__declare__loop_D245_k95) (close _V10_Dreduce__declare__loop_D245_k96))
    V_CALL_FUNC(_V10_Dreduce__declare__loop_D245_k95, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D245_k96, env)}));
 }
}
static void _V10_Dreduce__declare__loop_D245_k93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D245_k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D245_k93, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.22.282 1 0)) (##vcore.string? (close _V10_Dreduce__declare__loop_D245_k94) (##inline ##vcore.car (bruijn ##.expr.22.282 1 0))) ((bruijn ##.k.688 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(VStringP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D245_k94, env)}),
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dreduce__declare__loop_D245_k103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D245_k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D245_k103, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.683 1 0) (##vcore.blob=? (bruijn ##.k.684 0 0) (##string ##.string.1650) (##inline ##vcore.car (bruijn ##.expr.24.285 3 0))) ((bruijn ##.k.684 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL_FUNC(VBlobEqv2, NULL, runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D1650.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        upenv->up->up->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dreduce__declare__loop_D245_k108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D245_k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D245_k108, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.9.263 15 1) (bruijn ##.k.675 6 0) (bruijn ##.x.680 0 0))
    V_CALL(VGetArg(upenv, 15-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0);
 }
}
static void _V10_Dreduce__declare__loop_D245_k107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D245_k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D245_k107, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reduce-declare-loop.245 16 2) (close _V10_Dreduce__declare__loop_D245_k108) (bruijn ##.x.681 0 0) (##inline ##vcore.car (bruijn ##.expr.25.286 2 0)))
    V_CALL(VGetArg(upenv, 16-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D245_k108, env)}),
      _var0,
      VInlineCar2(runtime,
        upenv->up->vars[0]));
 }
}
static void _V10_Dreduce__declare__loop_D245_k106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D245_k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D245_k106, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.26.288 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.26.288 0 0))) ((bruijn ##.list.182 18 2) (close _V10_Dreduce__declare__loop_D245_k107) 'array (##inline ##vcore.car (bruijn ##.expr.26.288 0 0)) (bruijn ##.ret.261 14 1)) ((bruijn ##.k.675 4 0) #f)) ((bruijn ##.k.675 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 18-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D245_k107, env)}),
      _V0array,
      VInlineCar2(runtime,
        _var0),
      VGetArg(upenv, 14-1, 1));
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
static void _V10_Dreduce__declare__loop_D245_k105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D245_k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D245_k105, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.25.286 0 0)) ((close _V10_Dreduce__declare__loop_D245_k106) (##inline ##vcore.cdr (bruijn ##.expr.25.286 0 0))) ((bruijn ##.k.675 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dreduce__declare__loop_D245_k106, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dreduce__declare__loop_D245_k104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D245_k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D245_k104, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.676 0 0) ((close _V10_Dreduce__declare__loop_D245_k105) (##inline ##vcore.cdr (bruijn ##.expr.24.285 3 0))) ((bruijn ##.k.675 2 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dreduce__declare__loop_D245_k105, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->up->vars[0]));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dreduce__declare__loop_D245_k102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D245_k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D245_k102, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dreduce__declare__loop_D245_k103) (close _V10_Dreduce__declare__loop_D245_k104))
    V_CALL_FUNC(_V10_Dreduce__declare__loop_D245_k103, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D245_k104, env)}));
 }
}
static void _V10_Dreduce__declare__loop_D245_k101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D245_k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D245_k101, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.24.285 1 0)) (##vcore.string? (close _V10_Dreduce__declare__loop_D245_k102) (##inline ##vcore.car (bruijn ##.expr.24.285 1 0))) ((bruijn ##.k.675 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(VStringP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D245_k102, env)}),
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dreduce__declare__loop_D245_k112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D245_k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D245_k112, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.670 1 0) (##vcore.blob=? (bruijn ##.k.671 0 0) (##string ##.string.1651) (##inline ##vcore.car (bruijn ##.expr.27.290 3 0))) ((bruijn ##.k.671 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL_FUNC(VBlobEqv2, NULL, runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D1651.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        upenv->up->up->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dreduce__declare__loop_D245_k117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D245_k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D245_k117, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.9.263 17 1) (bruijn ##.k.662 6 0) (bruijn ##.x.667 0 0))
    V_CALL(VGetArg(upenv, 17-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0);
 }
}
static void _V10_Dreduce__declare__loop_D245_k116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D245_k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D245_k116, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reduce-declare-loop.245 18 2) (close _V10_Dreduce__declare__loop_D245_k117) (bruijn ##.x.668 0 0) (##inline ##vcore.car (bruijn ##.expr.28.291 2 0)))
    V_CALL(VGetArg(upenv, 18-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D245_k117, env)}),
      _var0,
      VInlineCar2(runtime,
        upenv->up->vars[0]));
 }
}
static void _V10_Dreduce__declare__loop_D245_k115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D245_k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D245_k115, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.29.293 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.29.293 0 0))) ((bruijn ##.list.182 20 2) (close _V10_Dreduce__declare__loop_D245_k116) 'array (##inline ##vcore.car (bruijn ##.expr.29.293 0 0)) (bruijn ##.ret.261 16 1)) ((bruijn ##.k.662 4 0) #f)) ((bruijn ##.k.662 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 20-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D245_k116, env)}),
      _V0array,
      VInlineCar2(runtime,
        _var0),
      VGetArg(upenv, 16-1, 1));
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
static void _V10_Dreduce__declare__loop_D245_k114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D245_k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D245_k114, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.28.291 0 0)) ((close _V10_Dreduce__declare__loop_D245_k115) (##inline ##vcore.cdr (bruijn ##.expr.28.291 0 0))) ((bruijn ##.k.662 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dreduce__declare__loop_D245_k115, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dreduce__declare__loop_D245_k113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D245_k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D245_k113, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.663 0 0) ((close _V10_Dreduce__declare__loop_D245_k114) (##inline ##vcore.cdr (bruijn ##.expr.27.290 3 0))) ((bruijn ##.k.662 2 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dreduce__declare__loop_D245_k114, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->up->vars[0]));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dreduce__declare__loop_D245_k111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D245_k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D245_k111, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dreduce__declare__loop_D245_k112) (close _V10_Dreduce__declare__loop_D245_k113))
    V_CALL_FUNC(_V10_Dreduce__declare__loop_D245_k112, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D245_k113, env)}));
 }
}
static void _V10_Dreduce__declare__loop_D245_k110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D245_k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D245_k110, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.27.290 1 0)) (##vcore.string? (close _V10_Dreduce__declare__loop_D245_k111) (##inline ##vcore.car (bruijn ##.expr.27.290 1 0))) ((bruijn ##.k.662 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(VStringP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D245_k111, env)}),
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dreduce__declare__loop_D245_k119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D245_k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D245_k119, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.error.221 18 41) (bruijn ##.k.651 13 0) (##string ##.string.1652))
    V_CALL(VGetArg(upenv, 18-1, 41), runtime,
      VGetArg(upenv, 13-1, 0),
      VEncodePointer(&_V10_Dstring_D1652.sym, VPOINTER_OTHER));
 }
}
static void _V10_Dreduce__declare__loop_D245_lambda26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D245_lambda26, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.kk.9.263 12 1) (close _V10_Dreduce__declare__loop_D245_k119) (##inline ##vcore.cons 'variable (##inline ##vcore.cons (bruijn ##.ret.261 13 1) (##inline ##vcore.cons (bruijn ##.expr.295 0 0) '()))))
    V_CALL(VGetArg(upenv, 12-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D245_k119, env)}),
      VInlineCons2(runtime,
        _V0variable,
        VInlineCons2(runtime,
        VGetArg(upenv, 13-1, 1),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
 }
}
static void _V10_Dreduce__declare__loop_D245_k118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D245_k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D245_k118, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dreduce__declare__loop_D245_lambda26) (bruijn ##.input.10.264 10 0))
    V_CALL_FUNC(_V10_Dreduce__declare__loop_D245_lambda26, env, runtime,
      VGetArg(upenv, 10-1, 0));
 }
}
static void _V10_Dreduce__declare__loop_D245_lambda25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D245_lambda25, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dreduce__declare__loop_D245_k110) (close _V10_Dreduce__declare__loop_D245_k118))
    V_CALL_FUNC(_V10_Dreduce__declare__loop_D245_k110, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D245_k118, env)}));
 }
}
static void _V10_Dreduce__declare__loop_D245_k109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D245_k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D245_k109, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dreduce__declare__loop_D245_lambda25) (bruijn ##.input.10.264 8 0))
    V_CALL_FUNC(_V10_Dreduce__declare__loop_D245_lambda25, env, runtime,
      VGetArg(upenv, 8-1, 0));
 }
}
static void _V10_Dreduce__declare__loop_D245_lambda24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D245_lambda24, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dreduce__declare__loop_D245_k101) (close _V10_Dreduce__declare__loop_D245_k109))
    V_CALL_FUNC(_V10_Dreduce__declare__loop_D245_k101, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D245_k109, env)}));
 }
}
static void _V10_Dreduce__declare__loop_D245_k100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D245_k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D245_k100, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dreduce__declare__loop_D245_lambda24) (bruijn ##.input.10.264 6 0))
    V_CALL_FUNC(_V10_Dreduce__declare__loop_D245_lambda24, env, runtime,
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V10_Dreduce__declare__loop_D245_lambda23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D245_lambda23, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dreduce__declare__loop_D245_k93) (close _V10_Dreduce__declare__loop_D245_k100))
    V_CALL_FUNC(_V10_Dreduce__declare__loop_D245_k93, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D245_k100, env)}));
 }
}
static void _V10_Dreduce__declare__loop_D245_k92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D245_k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D245_k92, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dreduce__declare__loop_D245_lambda23) (bruijn ##.input.10.264 4 0))
    V_CALL_FUNC(_V10_Dreduce__declare__loop_D245_lambda23, env, runtime,
      upenv->up->up->up->vars[0]);
 }
}
static void _V10_Dreduce__declare__loop_D245_lambda16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D245_lambda16, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dreduce__declare__loop_D245_k74) (close _V10_Dreduce__declare__loop_D245_k92))
    V_CALL_FUNC(_V10_Dreduce__declare__loop_D245_k74, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D245_k92, env)}));
 }
}
static void _V10_Dreduce__declare__loop_D245_k73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D245_k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D245_k73, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dreduce__declare__loop_D245_lambda16) (bruijn ##.input.10.264 2 0))
    V_CALL_FUNC(_V10_Dreduce__declare__loop_D245_lambda16, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V10_Dreduce__declare__loop_D245_lambda15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D245_lambda15, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dreduce__declare__loop_D245_k67) (close _V10_Dreduce__declare__loop_D245_k73))
    V_CALL_FUNC(_V10_Dreduce__declare__loop_D245_k67, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D245_k73, env)}));
 }
}
static void _V10_Dreduce__declare__loop_D245_lambda14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D245_lambda14, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dreduce__declare__loop_D245_lambda15) (bruijn ##.input.10.264 0 0))
    V_CALL_FUNC(_V10_Dreduce__declare__loop_D245_lambda15, env, runtime,
      _var0);
 }
}
static void _V10_Dreduce__declare__loop_D245_lambda13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D245_lambda13, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D245_lambda13, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dreduce__declare__loop_D245_lambda14) (bruijn ##.decl.262 1 2))
    V_CALL_FUNC(_V10_Dreduce__declare__loop_D245_lambda14, env, runtime,
      upenv->vars[2]);
 }
}
static void _V10_Dreduce__declare__loop_D245_lambda12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D245_lambda12, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D245_lambda12, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.call/cc.218 4 38) (bruijn ##.k.650 0 0) (close _V10_Dreduce__declare__loop_D245_lambda13))
    V_CALL(upenv->up->up->up->vars[38], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D245_lambda13, env)}));
 }
}
static void _V10_Dreduce__declare_D222_lambda3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare_D222_lambda3, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare_D222_lambda3, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (letrec 3 ((close _V10_Ddrop__const_D243_lambda4) (close _V10_Dreduce__args_D244_lambda8) (close _V10_Dreduce__declare__loop_D245_lambda12)) ((bruijn ##.reduce-declare-loop.245 0 2) (bruijn ##.k.619 1 0) (bruijn ##.ret.240 1 1) (bruijn ##.decl.241 1 2)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[3]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 3, 3, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddrop__const_D243_lambda4, env)});
    env->vars[1] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__args_D244_lambda8, env)});
    env->vars[2] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D245_lambda12, env)});
    V_CALL(env->vars[2], runtime,
      upenv->vars[0],
      upenv->vars[1],
      upenv->vars[2]);
    }
 }
}
static void _V10_Dfind__typedef_D223_k122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__typedef_D223_k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfind__typedef_D223_k122, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.not.202 5 22) (bruijn ##.k.763 1 0) (bruijn ##.x.764 0 0))
    V_CALL(VGetArg(upenv, 5-1, 22), runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dfind__typedef_D223_k121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__typedef_D223_k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfind__typedef_D223_k121, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.762 1 0) ((bruijn ##.memv.180 4 0) (close _V10_Dfind__typedef_D223_k122) (bruijn ##.special.296 2 1) (##inline ##vcore.qcons 'void (##inline ##vcore.qcons 'float (##inline ##vcore.qcons 'double (##inline ##vcore.qcons '_Bool '()))))) ((bruijn ##.k.763 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__typedef_D223_k122, env)}),
      upenv->up->vars[1],
      VInlineCons2(runtime,
        _V0void,
        VInlineCons2(runtime,
        _V0float,
        VInlineCons2(runtime,
        _V0double,
        VInlineCons2(runtime,
        _V0_UBool,
        VNULL)))));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D298_k128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D298_k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D298_k128, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.eqv?.211 11 31) (bruijn ##.k.759 1 0) (bruijn ##.x.760 0 0) (bruijn ##.special.296 9 1))
    V_CALL(VGetArg(upenv, 11-1, 31), runtime,
      upenv->vars[0],
      _var0,
      VGetArg(upenv, 9-1, 1));
 }
}
static void _V10_Dloop_D298_k127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D298_k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D298_k127, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.758 1 0) ((bruijn ##.cadar.188 10 8) (close _V10_Dloop_D298_k128) (bruijn ##.table.299 4 1)) ((bruijn ##.k.759 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 10-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D298_k128, env)}),
      upenv->up->up->up->vars[1]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D298_k130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D298_k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D298_k130, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.298 6 0) (bruijn ##.k.754 5 0) (bruijn ##.x.757 0 0))
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V10_Dloop_D298_k129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D298_k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D298_k129, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.756 0 0) ((bruijn ##.caddar.186 10 6) (bruijn ##.k.754 4 0) (bruijn ##.table.299 4 1)) ((bruijn ##.cdr.212 10 32) (close _V10_Dloop_D298_k130) (bruijn ##.table.299 4 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 10-1, 6), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->up->up->vars[1]);
} else {
    V_CALL(VGetArg(upenv, 10-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D298_k130, env)}),
      upenv->up->up->up->vars[1]);
}
 }
}
static void _V10_Dloop_D298_k126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D298_k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D298_k126, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D298_k127) (close _V10_Dloop_D298_k129))
    V_CALL_FUNC(_V10_Dloop_D298_k127, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D298_k129, env)}));
 }
}
static void _V10_Dloop_D298_k125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D298_k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D298_k125, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.eqv?.211 8 31) (close _V10_Dloop_D298_k126) (bruijn ##.x.761 0 0) 'typedef)
    V_CALL(VGetArg(upenv, 8-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D298_k126, env)}),
      _var0,
      _V0typedef);
 }
}
static void _V10_Dloop_D298_k124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D298_k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D298_k124, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.755 0 0) ((bruijn ##.compiler-error.204 7 24) (bruijn ##.k.754 1 0) (##string ##.string.1653) (bruijn ##.special.296 5 1)) ((bruijn ##.caar.185 7 5) (close _V10_Dloop_D298_k125) (bruijn ##.table.299 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 7-1, 24), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10_Dstring_D1653.sym, VPOINTER_OTHER),
      VGetArg(upenv, 5-1, 1));
} else {
    V_CALL(VGetArg(upenv, 7-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D298_k125, env)}),
      upenv->vars[1]);
}
 }
}
static void _V10_Dloop_D298_lambda28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D298_lambda28, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D298_lambda28, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.null?.194 6 14) (close _V10_Dloop_D298_k124) (bruijn ##.table.299 0 1))
    V_CALL(VGetArg(upenv, 6-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D298_k124, env)}),
      _var1);
 }
}
static void _V10_Dfind__typedef_D223_k123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__typedef_D223_k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfind__typedef_D223_k123, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.753 0 0) (letrec 1 ((close _V10_Dloop_D298_lambda28)) ((bruijn ##.loop.298 0 0) (bruijn ##.k.752 3 0) (bruijn ##.table.297 3 2))) ((bruijn ##.k.752 2 0) #f))
if(VDecodeBool(
_var0)) {
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D298_lambda28, env)});
    V_CALL(env->vars[0], runtime,
      upenv->up->up->vars[0],
      upenv->up->up->vars[2]);
    }
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dfind__typedef_D223_k120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__typedef_D223_k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfind__typedef_D223_k120, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dfind__typedef_D223_k121) (close _V10_Dfind__typedef_D223_k123))
    V_CALL_FUNC(_V10_Dfind__typedef_D223_k121, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__typedef_D223_k123, env)}));
 }
}
static void _V10_Dfind__typedef_D223_lambda27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__typedef_D223_lambda27, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfind__typedef_D223_lambda27, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.symbol?.181 2 1) (close _V10_Dfind__typedef_D223_k120) (bruijn ##.special.296 0 1))
    V_CALL(upenv->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__typedef_D223_k120, env)}),
      _var1);
 }
}
static void _V10_Ddecide_D303_k136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k136, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##vcore.pair? (bruijn ##.expr.37.313 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.37.313 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.37.313 0 0))) ((bruijn ##.kk.31.307 8 1) (bruijn ##.k.986 5 0) 'char) ((bruijn ##.k.986 5 0) #f)) ((bruijn ##.k.986 5 0) #f)) ((bruijn ##.k.986 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _V0char);
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
static void _V10_Ddecide_D303_k135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k135, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.36.312 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.36.312 0 0))) ((close _V10_Ddecide_D303_k136) (##inline ##vcore.cdr (bruijn ##.expr.36.312 0 0))) ((bruijn ##.k.986 4 0) #f)) ((bruijn ##.k.986 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Ddecide_D303_k136, env, runtime,
      VInlineCdr2(runtime,
        _var0));
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
static void _V10_Ddecide_D303_k134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k134, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.35.311 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.35.311 0 0))) ((close _V10_Ddecide_D303_k135) (##inline ##vcore.cdr (bruijn ##.expr.35.311 0 0))) ((bruijn ##.k.986 3 0) #f)) ((bruijn ##.k.986 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Ddecide_D303_k135, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D303_k133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k133, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.34.310 0 0)) (if (##inline ##vcore.eq? 0 (##inline ##vcore.car (bruijn ##.expr.34.310 0 0))) ((close _V10_Ddecide_D303_k134) (##inline ##vcore.cdr (bruijn ##.expr.34.310 0 0))) ((bruijn ##.k.986 2 0) #f)) ((bruijn ##.k.986 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(0l),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Ddecide_D303_k134, env, runtime,
      VInlineCdr2(runtime,
        _var0));
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
static void _V10_Ddecide_D303_k132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k132, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.987 0 0) ((close _V10_Ddecide_D303_k133) (##inline ##vcore.cdr (bruijn ##.expr.33.309 2 0))) ((bruijn ##.k.986 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Ddecide_D303_k133, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D303_k131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k131, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.33.309 1 0)) ((bruijn ##.equal?.220 8 40) (close _V10_Ddecide_D303_k132) 'char (##inline ##vcore.car (bruijn ##.expr.33.309 1 0))) ((bruijn ##.k.986 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 8-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D303_k132, env)}),
      _V0char,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D303_k143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k143, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##vcore.pair? (bruijn ##.expr.42.318 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.42.318 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.42.318 0 0))) ((bruijn ##.kk.31.307 10 1) (bruijn ##.k.968 5 0) 'unsigned-char) ((bruijn ##.k.968 5 0) #f)) ((bruijn ##.k.968 5 0) #f)) ((bruijn ##.k.968 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _V0unsigned__char);
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
static void _V10_Ddecide_D303_k142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k142, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.41.317 0 0)) (if (##inline ##vcore.eq? #t (##inline ##vcore.car (bruijn ##.expr.41.317 0 0))) ((close _V10_Ddecide_D303_k143) (##inline ##vcore.cdr (bruijn ##.expr.41.317 0 0))) ((bruijn ##.k.968 4 0) #f)) ((bruijn ##.k.968 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(true),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Ddecide_D303_k143, env, runtime,
      VInlineCdr2(runtime,
        _var0));
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
static void _V10_Ddecide_D303_k141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k141, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.40.316 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.40.316 0 0))) ((close _V10_Ddecide_D303_k142) (##inline ##vcore.cdr (bruijn ##.expr.40.316 0 0))) ((bruijn ##.k.968 3 0) #f)) ((bruijn ##.k.968 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Ddecide_D303_k142, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D303_k140(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k140, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.39.315 0 0)) (if (##inline ##vcore.eq? 0 (##inline ##vcore.car (bruijn ##.expr.39.315 0 0))) ((close _V10_Ddecide_D303_k141) (##inline ##vcore.cdr (bruijn ##.expr.39.315 0 0))) ((bruijn ##.k.968 2 0) #f)) ((bruijn ##.k.968 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(0l),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Ddecide_D303_k141, env, runtime,
      VInlineCdr2(runtime,
        _var0));
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
static void _V10_Ddecide_D303_k139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k139, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.969 0 0) ((close _V10_Ddecide_D303_k140) (##inline ##vcore.cdr (bruijn ##.expr.38.314 2 0))) ((bruijn ##.k.968 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Ddecide_D303_k140, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D303_k138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k138, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.38.314 1 0)) ((bruijn ##.equal?.220 10 40) (close _V10_Ddecide_D303_k139) 'char (##inline ##vcore.car (bruijn ##.expr.38.314 1 0))) ((bruijn ##.k.968 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 10-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D303_k139, env)}),
      _V0char,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D303_k150(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k150, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##vcore.pair? (bruijn ##.expr.47.323 0 0)) (if (##inline ##vcore.eq? #t (##inline ##vcore.car (bruijn ##.expr.47.323 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.47.323 0 0))) ((bruijn ##.kk.31.307 12 1) (bruijn ##.k.950 5 0) 'signed-char) ((bruijn ##.k.950 5 0) #f)) ((bruijn ##.k.950 5 0) #f)) ((bruijn ##.k.950 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(true),
        VInlineCar2(runtime,
        _var0)))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 12-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _V0signed__char);
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
static void _V10_Ddecide_D303_k149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k149, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.46.322 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.46.322 0 0))) ((close _V10_Ddecide_D303_k150) (##inline ##vcore.cdr (bruijn ##.expr.46.322 0 0))) ((bruijn ##.k.950 4 0) #f)) ((bruijn ##.k.950 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Ddecide_D303_k150, env, runtime,
      VInlineCdr2(runtime,
        _var0));
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
static void _V10_Ddecide_D303_k148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k148, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.45.321 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.45.321 0 0))) ((close _V10_Ddecide_D303_k149) (##inline ##vcore.cdr (bruijn ##.expr.45.321 0 0))) ((bruijn ##.k.950 3 0) #f)) ((bruijn ##.k.950 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Ddecide_D303_k149, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D303_k147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k147, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.44.320 0 0)) (if (##inline ##vcore.eq? 0 (##inline ##vcore.car (bruijn ##.expr.44.320 0 0))) ((close _V10_Ddecide_D303_k148) (##inline ##vcore.cdr (bruijn ##.expr.44.320 0 0))) ((bruijn ##.k.950 2 0) #f)) ((bruijn ##.k.950 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(0l),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Ddecide_D303_k148, env, runtime,
      VInlineCdr2(runtime,
        _var0));
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
static void _V10_Ddecide_D303_k146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k146, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.951 0 0) ((close _V10_Ddecide_D303_k147) (##inline ##vcore.cdr (bruijn ##.expr.43.319 2 0))) ((bruijn ##.k.950 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Ddecide_D303_k147, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D303_k145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k145, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.43.319 1 0)) ((bruijn ##.equal?.220 12 40) (close _V10_Ddecide_D303_k146) 'char (##inline ##vcore.car (bruijn ##.expr.43.319 1 0))) ((bruijn ##.k.950 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 12-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D303_k146, env)}),
      _V0char,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D303_k157(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k157, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##vcore.pair? (bruijn ##.expr.52.328 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.52.328 0 0))) ((bruijn ##.kk.31.307 14 1) (bruijn ##.k.934 5 0) 'int) ((bruijn ##.k.934 5 0) #f)) ((bruijn ##.k.934 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 14-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _V0int);
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
static void _V10_Ddecide_D303_k156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k156, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.51.327 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.51.327 0 0))) ((close _V10_Ddecide_D303_k157) (##inline ##vcore.cdr (bruijn ##.expr.51.327 0 0))) ((bruijn ##.k.934 4 0) #f)) ((bruijn ##.k.934 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Ddecide_D303_k157, env, runtime,
      VInlineCdr2(runtime,
        _var0));
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
static void _V10_Ddecide_D303_k155(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k155, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.50.326 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.50.326 0 0))) ((close _V10_Ddecide_D303_k156) (##inline ##vcore.cdr (bruijn ##.expr.50.326 0 0))) ((bruijn ##.k.934 3 0) #f)) ((bruijn ##.k.934 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Ddecide_D303_k156, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D303_k154(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k154, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.49.325 0 0)) (if (##inline ##vcore.eq? 0 (##inline ##vcore.car (bruijn ##.expr.49.325 0 0))) ((close _V10_Ddecide_D303_k155) (##inline ##vcore.cdr (bruijn ##.expr.49.325 0 0))) ((bruijn ##.k.934 2 0) #f)) ((bruijn ##.k.934 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(0l),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Ddecide_D303_k155, env, runtime,
      VInlineCdr2(runtime,
        _var0));
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
static void _V10_Ddecide_D303_k153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k153, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.935 0 0) ((close _V10_Ddecide_D303_k154) (##inline ##vcore.cdr (bruijn ##.expr.48.324 2 0))) ((bruijn ##.k.934 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Ddecide_D303_k154, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D303_k152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k152, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.48.324 1 0)) ((bruijn ##.equal?.220 14 40) (close _V10_Ddecide_D303_k153) 'int (##inline ##vcore.car (bruijn ##.expr.48.324 1 0))) ((bruijn ##.k.934 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 14-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D303_k153, env)}),
      _V0int,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D303_k164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k164, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##vcore.pair? (bruijn ##.expr.57.333 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.57.333 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.57.333 0 0))) ((bruijn ##.kk.31.307 16 1) (bruijn ##.k.916 5 0) 'unsigned-int) ((bruijn ##.k.916 5 0) #f)) ((bruijn ##.k.916 5 0) #f)) ((bruijn ##.k.916 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _V0unsigned__int);
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
static void _V10_Ddecide_D303_k163(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k163, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.56.332 0 0)) (if (##inline ##vcore.eq? #t (##inline ##vcore.car (bruijn ##.expr.56.332 0 0))) ((close _V10_Ddecide_D303_k164) (##inline ##vcore.cdr (bruijn ##.expr.56.332 0 0))) ((bruijn ##.k.916 4 0) #f)) ((bruijn ##.k.916 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(true),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Ddecide_D303_k164, env, runtime,
      VInlineCdr2(runtime,
        _var0));
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
static void _V10_Ddecide_D303_k162(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k162, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.55.331 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.55.331 0 0))) ((close _V10_Ddecide_D303_k163) (##inline ##vcore.cdr (bruijn ##.expr.55.331 0 0))) ((bruijn ##.k.916 3 0) #f)) ((bruijn ##.k.916 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Ddecide_D303_k163, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D303_k161(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k161, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.54.330 0 0)) (if (##inline ##vcore.eq? 0 (##inline ##vcore.car (bruijn ##.expr.54.330 0 0))) ((close _V10_Ddecide_D303_k162) (##inline ##vcore.cdr (bruijn ##.expr.54.330 0 0))) ((bruijn ##.k.916 2 0) #f)) ((bruijn ##.k.916 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(0l),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Ddecide_D303_k162, env, runtime,
      VInlineCdr2(runtime,
        _var0));
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
static void _V10_Ddecide_D303_k160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k160, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.917 0 0) ((close _V10_Ddecide_D303_k161) (##inline ##vcore.cdr (bruijn ##.expr.53.329 2 0))) ((bruijn ##.k.916 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Ddecide_D303_k161, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D303_k159(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k159, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.53.329 1 0)) ((bruijn ##.equal?.220 16 40) (close _V10_Ddecide_D303_k160) 'int (##inline ##vcore.car (bruijn ##.expr.53.329 1 0))) ((bruijn ##.k.916 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 16-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D303_k160, env)}),
      _V0int,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D303_k171(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k171, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##vcore.pair? (bruijn ##.expr.62.338 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.62.338 0 0))) ((bruijn ##.kk.31.307 18 1) (bruijn ##.k.900 5 0) 'long) ((bruijn ##.k.900 5 0) #f)) ((bruijn ##.k.900 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 18-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _V0long);
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
static void _V10_Ddecide_D303_k170(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k170, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.61.337 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.61.337 0 0))) ((close _V10_Ddecide_D303_k171) (##inline ##vcore.cdr (bruijn ##.expr.61.337 0 0))) ((bruijn ##.k.900 4 0) #f)) ((bruijn ##.k.900 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Ddecide_D303_k171, env, runtime,
      VInlineCdr2(runtime,
        _var0));
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
static void _V10_Ddecide_D303_k169(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k169, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.60.336 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.60.336 0 0))) ((close _V10_Ddecide_D303_k170) (##inline ##vcore.cdr (bruijn ##.expr.60.336 0 0))) ((bruijn ##.k.900 3 0) #f)) ((bruijn ##.k.900 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Ddecide_D303_k170, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D303_k168(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k168, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.59.335 0 0)) (if (##inline ##vcore.eq? 1 (##inline ##vcore.car (bruijn ##.expr.59.335 0 0))) ((close _V10_Ddecide_D303_k169) (##inline ##vcore.cdr (bruijn ##.expr.59.335 0 0))) ((bruijn ##.k.900 2 0) #f)) ((bruijn ##.k.900 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(1l),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Ddecide_D303_k169, env, runtime,
      VInlineCdr2(runtime,
        _var0));
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
static void _V10_Ddecide_D303_k167(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k167, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.901 0 0) ((close _V10_Ddecide_D303_k168) (##inline ##vcore.cdr (bruijn ##.expr.58.334 2 0))) ((bruijn ##.k.900 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Ddecide_D303_k168, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D303_k166(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k166, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.58.334 1 0)) ((bruijn ##.equal?.220 18 40) (close _V10_Ddecide_D303_k167) 'int (##inline ##vcore.car (bruijn ##.expr.58.334 1 0))) ((bruijn ##.k.900 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 18-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D303_k167, env)}),
      _V0int,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D303_k178(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k178, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##vcore.pair? (bruijn ##.expr.67.343 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.67.343 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.67.343 0 0))) ((bruijn ##.kk.31.307 20 1) (bruijn ##.k.882 5 0) 'unsigned-long) ((bruijn ##.k.882 5 0) #f)) ((bruijn ##.k.882 5 0) #f)) ((bruijn ##.k.882 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 20-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _V0unsigned__long);
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
static void _V10_Ddecide_D303_k177(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k177, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.66.342 0 0)) (if (##inline ##vcore.eq? #t (##inline ##vcore.car (bruijn ##.expr.66.342 0 0))) ((close _V10_Ddecide_D303_k178) (##inline ##vcore.cdr (bruijn ##.expr.66.342 0 0))) ((bruijn ##.k.882 4 0) #f)) ((bruijn ##.k.882 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(true),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Ddecide_D303_k178, env, runtime,
      VInlineCdr2(runtime,
        _var0));
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
static void _V10_Ddecide_D303_k176(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k176, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.65.341 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.65.341 0 0))) ((close _V10_Ddecide_D303_k177) (##inline ##vcore.cdr (bruijn ##.expr.65.341 0 0))) ((bruijn ##.k.882 3 0) #f)) ((bruijn ##.k.882 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Ddecide_D303_k177, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D303_k175(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k175, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.64.340 0 0)) (if (##inline ##vcore.eq? 1 (##inline ##vcore.car (bruijn ##.expr.64.340 0 0))) ((close _V10_Ddecide_D303_k176) (##inline ##vcore.cdr (bruijn ##.expr.64.340 0 0))) ((bruijn ##.k.882 2 0) #f)) ((bruijn ##.k.882 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(1l),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Ddecide_D303_k176, env, runtime,
      VInlineCdr2(runtime,
        _var0));
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
static void _V10_Ddecide_D303_k174(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k174, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.883 0 0) ((close _V10_Ddecide_D303_k175) (##inline ##vcore.cdr (bruijn ##.expr.63.339 2 0))) ((bruijn ##.k.882 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Ddecide_D303_k175, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D303_k173(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k173, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.63.339 1 0)) ((bruijn ##.equal?.220 20 40) (close _V10_Ddecide_D303_k174) 'int (##inline ##vcore.car (bruijn ##.expr.63.339 1 0))) ((bruijn ##.k.882 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 20-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D303_k174, env)}),
      _V0int,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D303_k185(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k185, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##vcore.pair? (bruijn ##.expr.72.348 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.72.348 0 0))) ((bruijn ##.kk.31.307 22 1) (bruijn ##.k.866 5 0) 'long-long) ((bruijn ##.k.866 5 0) #f)) ((bruijn ##.k.866 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 22-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _V0long__long);
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
static void _V10_Ddecide_D303_k184(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k184, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.71.347 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.71.347 0 0))) ((close _V10_Ddecide_D303_k185) (##inline ##vcore.cdr (bruijn ##.expr.71.347 0 0))) ((bruijn ##.k.866 4 0) #f)) ((bruijn ##.k.866 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Ddecide_D303_k185, env, runtime,
      VInlineCdr2(runtime,
        _var0));
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
static void _V10_Ddecide_D303_k183(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k183, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.70.346 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.70.346 0 0))) ((close _V10_Ddecide_D303_k184) (##inline ##vcore.cdr (bruijn ##.expr.70.346 0 0))) ((bruijn ##.k.866 3 0) #f)) ((bruijn ##.k.866 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Ddecide_D303_k184, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D303_k182(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k182, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.69.345 0 0)) (if (##inline ##vcore.eq? 2 (##inline ##vcore.car (bruijn ##.expr.69.345 0 0))) ((close _V10_Ddecide_D303_k183) (##inline ##vcore.cdr (bruijn ##.expr.69.345 0 0))) ((bruijn ##.k.866 2 0) #f)) ((bruijn ##.k.866 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(2l),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Ddecide_D303_k183, env, runtime,
      VInlineCdr2(runtime,
        _var0));
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
static void _V10_Ddecide_D303_k181(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k181, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.867 0 0) ((close _V10_Ddecide_D303_k182) (##inline ##vcore.cdr (bruijn ##.expr.68.344 2 0))) ((bruijn ##.k.866 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Ddecide_D303_k182, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D303_k180(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k180, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.68.344 1 0)) ((bruijn ##.equal?.220 22 40) (close _V10_Ddecide_D303_k181) 'int (##inline ##vcore.car (bruijn ##.expr.68.344 1 0))) ((bruijn ##.k.866 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 22-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D303_k181, env)}),
      _V0int,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D303_k192(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k192, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##vcore.pair? (bruijn ##.expr.77.353 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.77.353 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.77.353 0 0))) ((bruijn ##.kk.31.307 24 1) (bruijn ##.k.848 5 0) 'unsigned-long-long) ((bruijn ##.k.848 5 0) #f)) ((bruijn ##.k.848 5 0) #f)) ((bruijn ##.k.848 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 24-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _V0unsigned__long__long);
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
static void _V10_Ddecide_D303_k191(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k191, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.76.352 0 0)) (if (##inline ##vcore.eq? #t (##inline ##vcore.car (bruijn ##.expr.76.352 0 0))) ((close _V10_Ddecide_D303_k192) (##inline ##vcore.cdr (bruijn ##.expr.76.352 0 0))) ((bruijn ##.k.848 4 0) #f)) ((bruijn ##.k.848 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(true),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Ddecide_D303_k192, env, runtime,
      VInlineCdr2(runtime,
        _var0));
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
static void _V10_Ddecide_D303_k190(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k190, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.75.351 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.75.351 0 0))) ((close _V10_Ddecide_D303_k191) (##inline ##vcore.cdr (bruijn ##.expr.75.351 0 0))) ((bruijn ##.k.848 3 0) #f)) ((bruijn ##.k.848 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Ddecide_D303_k191, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D303_k189(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k189, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.74.350 0 0)) (if (##inline ##vcore.eq? 2 (##inline ##vcore.car (bruijn ##.expr.74.350 0 0))) ((close _V10_Ddecide_D303_k190) (##inline ##vcore.cdr (bruijn ##.expr.74.350 0 0))) ((bruijn ##.k.848 2 0) #f)) ((bruijn ##.k.848 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(2l),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Ddecide_D303_k190, env, runtime,
      VInlineCdr2(runtime,
        _var0));
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
static void _V10_Ddecide_D303_k188(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k188, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.849 0 0) ((close _V10_Ddecide_D303_k189) (##inline ##vcore.cdr (bruijn ##.expr.73.349 2 0))) ((bruijn ##.k.848 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Ddecide_D303_k189, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D303_k187(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k187, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.73.349 1 0)) ((bruijn ##.equal?.220 24 40) (close _V10_Ddecide_D303_k188) 'int (##inline ##vcore.car (bruijn ##.expr.73.349 1 0))) ((bruijn ##.k.848 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 24-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D303_k188, env)}),
      _V0int,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D303_k199(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k199, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##vcore.pair? (bruijn ##.expr.82.358 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.82.358 0 0))) ((bruijn ##.kk.31.307 26 1) (bruijn ##.k.832 5 0) 'short) ((bruijn ##.k.832 5 0) #f)) ((bruijn ##.k.832 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 26-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _V0short);
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
static void _V10_Ddecide_D303_k198(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k198, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.81.357 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.81.357 0 0))) ((close _V10_Ddecide_D303_k199) (##inline ##vcore.cdr (bruijn ##.expr.81.357 0 0))) ((bruijn ##.k.832 4 0) #f)) ((bruijn ##.k.832 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Ddecide_D303_k199, env, runtime,
      VInlineCdr2(runtime,
        _var0));
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
static void _V10_Ddecide_D303_k197(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k197, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.80.356 0 0)) (if (##inline ##vcore.eq? #t (##inline ##vcore.car (bruijn ##.expr.80.356 0 0))) ((close _V10_Ddecide_D303_k198) (##inline ##vcore.cdr (bruijn ##.expr.80.356 0 0))) ((bruijn ##.k.832 3 0) #f)) ((bruijn ##.k.832 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(true),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Ddecide_D303_k198, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D303_k196(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k196, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.79.355 0 0)) (if (##inline ##vcore.eq? 0 (##inline ##vcore.car (bruijn ##.expr.79.355 0 0))) ((close _V10_Ddecide_D303_k197) (##inline ##vcore.cdr (bruijn ##.expr.79.355 0 0))) ((bruijn ##.k.832 2 0) #f)) ((bruijn ##.k.832 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(0l),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Ddecide_D303_k197, env, runtime,
      VInlineCdr2(runtime,
        _var0));
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
static void _V10_Ddecide_D303_k195(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k195, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.833 0 0) ((close _V10_Ddecide_D303_k196) (##inline ##vcore.cdr (bruijn ##.expr.78.354 2 0))) ((bruijn ##.k.832 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Ddecide_D303_k196, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D303_k194(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k194, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.78.354 1 0)) ((bruijn ##.equal?.220 26 40) (close _V10_Ddecide_D303_k195) 'int (##inline ##vcore.car (bruijn ##.expr.78.354 1 0))) ((bruijn ##.k.832 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 26-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D303_k195, env)}),
      _V0int,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D303_k206(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k206, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##vcore.pair? (bruijn ##.expr.87.363 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.87.363 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.87.363 0 0))) ((bruijn ##.kk.31.307 28 1) (bruijn ##.k.814 5 0) 'unsigned-short) ((bruijn ##.k.814 5 0) #f)) ((bruijn ##.k.814 5 0) #f)) ((bruijn ##.k.814 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 28-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _V0unsigned__short);
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
static void _V10_Ddecide_D303_k205(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k205, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.86.362 0 0)) (if (##inline ##vcore.eq? #t (##inline ##vcore.car (bruijn ##.expr.86.362 0 0))) ((close _V10_Ddecide_D303_k206) (##inline ##vcore.cdr (bruijn ##.expr.86.362 0 0))) ((bruijn ##.k.814 4 0) #f)) ((bruijn ##.k.814 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(true),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Ddecide_D303_k206, env, runtime,
      VInlineCdr2(runtime,
        _var0));
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
static void _V10_Ddecide_D303_k204(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k204, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.85.361 0 0)) (if (##inline ##vcore.eq? #t (##inline ##vcore.car (bruijn ##.expr.85.361 0 0))) ((close _V10_Ddecide_D303_k205) (##inline ##vcore.cdr (bruijn ##.expr.85.361 0 0))) ((bruijn ##.k.814 3 0) #f)) ((bruijn ##.k.814 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(true),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Ddecide_D303_k205, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D303_k203(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k203, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.84.360 0 0)) (if (##inline ##vcore.eq? 0 (##inline ##vcore.car (bruijn ##.expr.84.360 0 0))) ((close _V10_Ddecide_D303_k204) (##inline ##vcore.cdr (bruijn ##.expr.84.360 0 0))) ((bruijn ##.k.814 2 0) #f)) ((bruijn ##.k.814 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(0l),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Ddecide_D303_k204, env, runtime,
      VInlineCdr2(runtime,
        _var0));
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
static void _V10_Ddecide_D303_k202(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k202, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.815 0 0) ((close _V10_Ddecide_D303_k203) (##inline ##vcore.cdr (bruijn ##.expr.83.359 2 0))) ((bruijn ##.k.814 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Ddecide_D303_k203, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D303_k201(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k201, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.83.359 1 0)) ((bruijn ##.equal?.220 28 40) (close _V10_Ddecide_D303_k202) 'int (##inline ##vcore.car (bruijn ##.expr.83.359 1 0))) ((bruijn ##.k.814 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 28-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D303_k202, env)}),
      _V0int,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D303_k216(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k216, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k216, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.equal?.220 38 40) (bruijn ##.k.806 1 0) (bruijn ##.x.807 0 0) (##string ##.string.1654))
    V_CALL(VGetArg(upenv, 38-1, 40), runtime,
      upenv->vars[0],
      _var0,
      VEncodePointer(&_V10_Dstring_D1654.sym, VPOINTER_OTHER));
 }
}
static void _V10_Ddecide_D303_k215(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k215, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.805 1 0) ((bruijn ##.car.214 37 34) (close _V10_Ddecide_D303_k216) (bruijn ##.special.365 6 0)) ((bruijn ##.k.806 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 37-1, 34), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D303_k216, env)}),
      VGetArg(upenv, 6-1, 0));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D303_lambda45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_lambda45, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.804 2 0) (bruijn ##.x.371 0 0))
    V_CALL(upenv->up->vars[0], runtime,
      _var0);
 }
}
static void _V10_Ddecide_D303_k219(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k219, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k219, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.x.93.370 0 0) ((close _V10_Ddecide_D303_lambda45) (bruijn ##.x.93.370 0 0)) ((bruijn ##.k.804 1 0) (bruijn ##.special.365 8 0)))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Ddecide_D303_lambda45, env, runtime,
      _var0);
} else {
    V_CALL(upenv->vars[0], runtime,
      VGetArg(upenv, 8-1, 0));
}
 }
}
static void _V10_Ddecide_D303_k218(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k218, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k218, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.803 1 0) ((bruijn ##.k.804 0 0) 'unsigned-int) ((bruijn ##.find-typedef.223 37 1) (close _V10_Ddecide_D303_k219) (bruijn ##.special.365 7 0) (bruijn ##.table.301 36 2)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(_var0, runtime,
      _V0unsigned__int);
} else {
    V_CALL(VGetArg(upenv, 37-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D303_k219, env)}),
      VGetArg(upenv, 7-1, 0),
      VGetArg(upenv, 36-1, 2));
}
 }
}
static void _V10_Ddecide_D303_k220(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k220, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k220, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.31.307 33 1) (bruijn ##.k.792 8 0) (bruijn ##.x.802 0 0))
    V_CALL(VGetArg(upenv, 33-1, 1), runtime,
      VGetArg(upenv, 8-1, 0),
      _var0);
 }
}
static void _V10_Ddecide_D303_k217(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k217, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k217, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Ddecide_D303_k218) (close _V10_Ddecide_D303_k220))
    V_CALL_FUNC(_V10_Ddecide_D303_k218, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D303_k220, env)}));
 }
}
static void _V10_Ddecide_D303_k214(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k214, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k214, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Ddecide_D303_k215) (close _V10_Ddecide_D303_k217))
    V_CALL_FUNC(_V10_Ddecide_D303_k215, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D303_k217, env)}));
 }
}
static void _V10_Ddecide_D303_k213(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k213, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k213, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.92.369 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.92.369 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.92.369 0 0))) ((bruijn ##.pair?.215 35 35) (close _V10_Ddecide_D303_k214) (bruijn ##.special.365 4 0)) ((bruijn ##.k.792 5 0) #f)) ((bruijn ##.k.792 5 0) #f)) ((bruijn ##.k.792 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 35-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D303_k214, env)}),
      upenv->up->up->up->vars[0]);
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
static void _V10_Ddecide_D303_k212(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k212, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k212, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.91.368 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.91.368 0 0))) ((close _V10_Ddecide_D303_k213) (##inline ##vcore.cdr (bruijn ##.expr.91.368 0 0))) ((bruijn ##.k.792 4 0) #f)) ((bruijn ##.k.792 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Ddecide_D303_k213, env, runtime,
      VInlineCdr2(runtime,
        _var0));
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
static void _V10_Ddecide_D303_k211(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k211, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.90.367 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.90.367 0 0))) ((close _V10_Ddecide_D303_k212) (##inline ##vcore.cdr (bruijn ##.expr.90.367 0 0))) ((bruijn ##.k.792 3 0) #f)) ((bruijn ##.k.792 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Ddecide_D303_k212, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D303_k210(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k210, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k210, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.89.366 0 0)) (if (##inline ##vcore.eq? 0 (##inline ##vcore.car (bruijn ##.expr.89.366 0 0))) ((close _V10_Ddecide_D303_k211) (##inline ##vcore.cdr (bruijn ##.expr.89.366 0 0))) ((bruijn ##.k.792 2 0) #f)) ((bruijn ##.k.792 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(0l),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Ddecide_D303_k211, env, runtime,
      VInlineCdr2(runtime,
        _var0));
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
static void _V10_Ddecide_D303_k209(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k209, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Ddecide_D303_k210) (##inline ##vcore.cdr (bruijn ##.expr.88.364 2 0)))
    V_CALL_FUNC(_V10_Ddecide_D303_k210, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
 }
}
static void _V10_Ddecide_D303_k208(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k208, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k208, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.88.364 1 0)) ((close _V10_Ddecide_D303_k209) (##inline ##vcore.car (bruijn ##.expr.88.364 1 0))) ((bruijn ##.k.792 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(_V10_Ddecide_D303_k209, env, runtime,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D303_k223(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k223, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k223, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.31.307 27 1) (bruijn ##.k.771 27 0) (bruijn ##.x.784 0 0))
    V_CALL(VGetArg(upenv, 27-1, 1), runtime,
      VGetArg(upenv, 27-1, 0),
      _var0);
 }
}
static void _V10_Ddecide_D303_k222(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k222, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k222, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.compiler-error.204 31 24) (close _V10_Ddecide_D303_k223) (##string ##.string.1655) (bruijn ##.x.785 0 0))
    V_CALL(VGetArg(upenv, 31-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D303_k223, env)}),
      VEncodePointer(&_V10_Dstring_D1655.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V10_Ddecide_D303_k221(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k221, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k221, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.183 30 3) (close _V10_Ddecide_D303_k222) (bruijn ##.list.182 30 2) (bruijn ##.args.306 26 1) (##inline ##vcore.qcons 'special (##inline ##vcore.qcons 'longs (##inline ##vcore.qcons 'short (##inline ##vcore.qcons 'unsigned (##inline ##vcore.qcons 'signed '()))))))
    V_CALL(VGetArg(upenv, 30-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D303_k222, env)}),
      VGetArg(upenv, 30-1, 2),
      VGetArg(upenv, 26-1, 1),
      VInlineCons2(runtime,
        _V0special,
        VInlineCons2(runtime,
        _V0longs,
        VInlineCons2(runtime,
        _V0short,
        VInlineCons2(runtime,
        _V0unsigned,
        VInlineCons2(runtime,
        _V0signed,
        VNULL))))));
 }
}
static void _V10_Ddecide_D303_lambda44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_lambda44, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Ddecide_D303_k208) (close _V10_Ddecide_D303_k221))
    V_CALL_FUNC(_V10_Ddecide_D303_k208, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D303_k221, env)}));
 }
}
static void _V10_Ddecide_D303_k207(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k207, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Ddecide_D303_lambda44) (bruijn ##.input.32.308 22 0))
    V_CALL_FUNC(_V10_Ddecide_D303_lambda44, env, runtime,
      VGetArg(upenv, 22-1, 0));
 }
}
static void _V10_Ddecide_D303_lambda43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_lambda43, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Ddecide_D303_k201) (close _V10_Ddecide_D303_k207))
    V_CALL_FUNC(_V10_Ddecide_D303_k201, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D303_k207, env)}));
 }
}
static void _V10_Ddecide_D303_k200(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k200, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Ddecide_D303_lambda43) (bruijn ##.input.32.308 20 0))
    V_CALL_FUNC(_V10_Ddecide_D303_lambda43, env, runtime,
      VGetArg(upenv, 20-1, 0));
 }
}
static void _V10_Ddecide_D303_lambda42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_lambda42, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Ddecide_D303_k194) (close _V10_Ddecide_D303_k200))
    V_CALL_FUNC(_V10_Ddecide_D303_k194, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D303_k200, env)}));
 }
}
static void _V10_Ddecide_D303_k193(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k193, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Ddecide_D303_lambda42) (bruijn ##.input.32.308 18 0))
    V_CALL_FUNC(_V10_Ddecide_D303_lambda42, env, runtime,
      VGetArg(upenv, 18-1, 0));
 }
}
static void _V10_Ddecide_D303_lambda41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_lambda41, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Ddecide_D303_k187) (close _V10_Ddecide_D303_k193))
    V_CALL_FUNC(_V10_Ddecide_D303_k187, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D303_k193, env)}));
 }
}
static void _V10_Ddecide_D303_k186(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k186, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Ddecide_D303_lambda41) (bruijn ##.input.32.308 16 0))
    V_CALL_FUNC(_V10_Ddecide_D303_lambda41, env, runtime,
      VGetArg(upenv, 16-1, 0));
 }
}
static void _V10_Ddecide_D303_lambda40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_lambda40, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Ddecide_D303_k180) (close _V10_Ddecide_D303_k186))
    V_CALL_FUNC(_V10_Ddecide_D303_k180, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D303_k186, env)}));
 }
}
static void _V10_Ddecide_D303_k179(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k179, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Ddecide_D303_lambda40) (bruijn ##.input.32.308 14 0))
    V_CALL_FUNC(_V10_Ddecide_D303_lambda40, env, runtime,
      VGetArg(upenv, 14-1, 0));
 }
}
static void _V10_Ddecide_D303_lambda39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_lambda39, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Ddecide_D303_k173) (close _V10_Ddecide_D303_k179))
    V_CALL_FUNC(_V10_Ddecide_D303_k173, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D303_k179, env)}));
 }
}
static void _V10_Ddecide_D303_k172(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k172, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Ddecide_D303_lambda39) (bruijn ##.input.32.308 12 0))
    V_CALL_FUNC(_V10_Ddecide_D303_lambda39, env, runtime,
      VGetArg(upenv, 12-1, 0));
 }
}
static void _V10_Ddecide_D303_lambda38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_lambda38, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Ddecide_D303_k166) (close _V10_Ddecide_D303_k172))
    V_CALL_FUNC(_V10_Ddecide_D303_k166, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D303_k172, env)}));
 }
}
static void _V10_Ddecide_D303_k165(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k165, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Ddecide_D303_lambda38) (bruijn ##.input.32.308 10 0))
    V_CALL_FUNC(_V10_Ddecide_D303_lambda38, env, runtime,
      VGetArg(upenv, 10-1, 0));
 }
}
static void _V10_Ddecide_D303_lambda37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_lambda37, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Ddecide_D303_k159) (close _V10_Ddecide_D303_k165))
    V_CALL_FUNC(_V10_Ddecide_D303_k159, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D303_k165, env)}));
 }
}
static void _V10_Ddecide_D303_k158(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k158, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Ddecide_D303_lambda37) (bruijn ##.input.32.308 8 0))
    V_CALL_FUNC(_V10_Ddecide_D303_lambda37, env, runtime,
      VGetArg(upenv, 8-1, 0));
 }
}
static void _V10_Ddecide_D303_lambda36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_lambda36, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Ddecide_D303_k152) (close _V10_Ddecide_D303_k158))
    V_CALL_FUNC(_V10_Ddecide_D303_k152, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D303_k158, env)}));
 }
}
static void _V10_Ddecide_D303_k151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k151, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Ddecide_D303_lambda36) (bruijn ##.input.32.308 6 0))
    V_CALL_FUNC(_V10_Ddecide_D303_lambda36, env, runtime,
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V10_Ddecide_D303_lambda35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_lambda35, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Ddecide_D303_k145) (close _V10_Ddecide_D303_k151))
    V_CALL_FUNC(_V10_Ddecide_D303_k145, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D303_k151, env)}));
 }
}
static void _V10_Ddecide_D303_k144(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k144, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Ddecide_D303_lambda35) (bruijn ##.input.32.308 4 0))
    V_CALL_FUNC(_V10_Ddecide_D303_lambda35, env, runtime,
      upenv->up->up->up->vars[0]);
 }
}
static void _V10_Ddecide_D303_lambda34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_lambda34, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Ddecide_D303_k138) (close _V10_Ddecide_D303_k144))
    V_CALL_FUNC(_V10_Ddecide_D303_k138, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D303_k144, env)}));
 }
}
static void _V10_Ddecide_D303_k137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_k137, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Ddecide_D303_lambda34) (bruijn ##.input.32.308 2 0))
    V_CALL_FUNC(_V10_Ddecide_D303_lambda34, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V10_Ddecide_D303_lambda33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_lambda33, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Ddecide_D303_k131) (close _V10_Ddecide_D303_k137))
    V_CALL_FUNC(_V10_Ddecide_D303_k131, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D303_k137, env)}));
 }
}
static void _V10_Ddecide_D303_lambda32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_lambda32, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Ddecide_D303_lambda33) (bruijn ##.input.32.308 0 0))
    V_CALL_FUNC(_V10_Ddecide_D303_lambda33, env, runtime,
      _var0);
 }
}
static void _V10_Ddecide_D303_lambda31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_lambda31, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_lambda31, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Ddecide_D303_lambda32) (bruijn ##.args.306 1 1))
    V_CALL_FUNC(_V10_Ddecide_D303_lambda32, env, runtime,
      upenv->vars[1]);
 }
}
static void _V10_Ddecide_D303_lambda30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, ...) {
 if(argc < 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D303_lambda30, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D303_lambda30, runtime, upenv, 1, argc, _var0, _varargs) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _varargs;
  // ((bruijn ##.call/cc.218 4 38) (bruijn ##.k.770 0 0) (close _V10_Ddecide_D303_lambda31))
    V_CALL(upenv->up->up->up->vars[38], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D303_lambda31, env)}));
 }
}
static void _V10_Dappend__const_D304_lambda46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dappend__const_D304_lambda46, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dappend__const_D304_lambda46, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // (if (bruijn ##.const?.372 0 1) ((bruijn ##.list.182 4 2) (bruijn ##.k.1003 0 0) 'const (bruijn ##.type.373 0 2)) ((bruijn ##.k.1003 0 0) (bruijn ##.type.373 0 2)))
if(VDecodeBool(
_var1)) {
    V_CALL(upenv->up->up->up->vars[2], runtime,
      _var0,
      _V0const,
      _var2);
} else {
    V_CALL(_var0, runtime,
      _var2);
}
 }
}
static void _V10_Dmaybe__string___Gsymbol_D305_k224(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmaybe__string___Gsymbol_D305_k224, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmaybe__string___Gsymbol_D305_k224, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1005 0 0) ((bruijn ##.string->symbol.184 5 4) (bruijn ##.k.1004 1 0) (bruijn ##.x.374 1 1)) ((bruijn ##.k.1004 1 0) (bruijn ##.x.374 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 5-1, 4), runtime,
      upenv->vars[0],
      upenv->vars[1]);
} else {
    V_CALL(upenv->vars[0], runtime,
      upenv->vars[1]);
}
 }
}
static void _V10_Dmaybe__string___Gsymbol_D305_lambda47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmaybe__string___Gsymbol_D305_lambda47, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmaybe__string___Gsymbol_D305_lambda47, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.string?.203 4 23) (close _V10_Dmaybe__string___Gsymbol_D305_k224) (bruijn ##.x.374 0 1))
    V_CALL(upenv->up->up->up->vars[23], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmaybe__string___Gsymbol_D305_k224, env)}),
      _var1);
 }
}
static void _V10_Dloop_D375_k226(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D375_k226, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D375_k226, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.special.378 2 3) ((bruijn ##.k.1010 0 0) (bruijn ##.special.378 2 3)) ((bruijn ##.k.1010 0 0) 'int))
if(VDecodeBool(
upenv->up->vars[3])) {
    V_CALL(_var0, runtime,
      upenv->up->vars[3]);
} else {
    V_CALL(_var0, runtime,
      _V0int);
}
 }
}
static void _V10_Dloop_D375_k228(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D375_k228, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D375_k228, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.append-const.304 5 1) (bruijn ##.k.1006 3 0) (bruijn ##.const.379 3 4) (bruijn ##.x.1008 0 0))
    V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->up->vars[0],
      upenv->up->up->vars[4],
      _var0);
 }
}
static void _V10_Dloop_D375_k227(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D375_k227, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D375_k227, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.decide.303 4 0) (close _V10_Dloop_D375_k228) (bruijn ##.x.1009 0 0) (bruijn ##.longs.380 2 5) (bruijn ##.short.381 2 6) (bruijn ##.unsigned.382 2 7) (bruijn ##.signed.383 2 8))
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D375_k228, env)}),
      _var0,
      upenv->up->vars[5],
      upenv->up->vars[6],
      upenv->up->vars[7],
      upenv->up->vars[8]);
 }
}
static void _V10_Dloop_D375_k231(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D375_k231, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D375_k231, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.375 5 0) (bruijn ##.k.1006 4 0) (bruijn ##.x.1012 0 0) (bruijn ##.storage.377 4 2) (bruijn ##.special.378 4 3) #t (bruijn ##.longs.380 4 5) (bruijn ##.short.381 4 6) (bruijn ##.unsigned.382 4 7) (bruijn ##.signed.383 4 8))
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      upenv->up->up->up->vars[0],
      _var0,
      upenv->up->up->up->vars[2],
      upenv->up->up->up->vars[3],
      VEncodeBool(true),
      upenv->up->up->up->vars[5],
      upenv->up->up->up->vars[6],
      upenv->up->up->up->vars[7],
      upenv->up->up->up->vars[8]);
 }
}
static void _V10_Dloop_D375_k233(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D375_k233, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D375_k233, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1041 1 0) ((bruijn ##.k.1042 0 0) (bruijn ##.p.1041 1 0)) ((bruijn ##.eqv?.211 10 31) (bruijn ##.k.1042 0 0) (bruijn ##.x.30.384 3 0) 'volatile))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(_var0, runtime,
      upenv->vars[0]);
} else {
    V_CALL(VGetArg(upenv, 10-1, 31), runtime,
      _var0,
      upenv->up->up->vars[0],
      _V0volatile);
}
 }
}
static void _V10_Dloop_D375_k235(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D375_k235, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D375_k235, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.375 7 0) (bruijn ##.k.1006 6 0) (bruijn ##.x.1014 0 0) (bruijn ##.storage.377 6 2) (bruijn ##.special.378 6 3) (bruijn ##.const.379 6 4) (bruijn ##.longs.380 6 5) (bruijn ##.short.381 6 6) (bruijn ##.unsigned.382 6 7) (bruijn ##.signed.383 6 8))
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0,
      VGetArg(upenv, 6-1, 2),
      VGetArg(upenv, 6-1, 3),
      VGetArg(upenv, 6-1, 4),
      VGetArg(upenv, 6-1, 5),
      VGetArg(upenv, 6-1, 6),
      VGetArg(upenv, 6-1, 7),
      VGetArg(upenv, 6-1, 8));
 }
}
static void _V10_Dloop_D375_k240(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D375_k240, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D375_k240, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1040 0 0) ((bruijn ##.k.1037 3 0) (bruijn ##.p.1040 0 0)) ((bruijn ##.eqv?.211 15 31) (bruijn ##.k.1037 3 0) (bruijn ##.x.30.384 8 0) 'auto))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->vars[0], runtime,
      _var0);
} else {
    V_CALL(VGetArg(upenv, 15-1, 31), runtime,
      upenv->up->up->vars[0],
      VGetArg(upenv, 8-1, 0),
      _V0auto);
}
 }
}
static void _V10_Dloop_D375_k239(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D375_k239, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D375_k239, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1039 0 0) ((bruijn ##.k.1037 2 0) (bruijn ##.p.1039 0 0)) ((bruijn ##.eqv?.211 14 31) (close _V10_Dloop_D375_k240) (bruijn ##.x.30.384 7 0) 'register))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->vars[0], runtime,
      _var0);
} else {
    V_CALL(VGetArg(upenv, 14-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D375_k240, env)}),
      VGetArg(upenv, 7-1, 0),
      _V0register);
}
 }
}
static void _V10_Dloop_D375_k238(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D375_k238, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D375_k238, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1038 0 0) ((bruijn ##.k.1037 1 0) (bruijn ##.p.1038 0 0)) ((bruijn ##.eqv?.211 13 31) (close _V10_Dloop_D375_k239) (bruijn ##.x.30.384 6 0) 'typedef))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      _var0);
} else {
    V_CALL(VGetArg(upenv, 13-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D375_k239, env)}),
      VGetArg(upenv, 6-1, 0),
      _V0typedef);
}
 }
}
static void _V10_Dloop_D375_k237(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D375_k237, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D375_k237, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1036 1 0) ((bruijn ##.k.1037 0 0) (bruijn ##.p.1036 1 0)) ((bruijn ##.eqv?.211 12 31) (close _V10_Dloop_D375_k238) (bruijn ##.x.30.384 5 0) 'extern))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(_var0, runtime,
      upenv->vars[0]);
} else {
    V_CALL(VGetArg(upenv, 12-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D375_k238, env)}),
      VGetArg(upenv, 5-1, 0),
      _V0extern);
}
 }
}
static void _V10_Dloop_D375_k243(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D375_k243, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D375_k243, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1022 1 0) ((bruijn ##.compiler-error.204 14 24) (bruijn ##.k.1023 0 0) (##string ##.string.1656)) ((bruijn ##.car.214 14 34) (bruijn ##.k.1023 0 0) (bruijn ##.t.376 9 1)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 14-1, 24), runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D1656.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 14-1, 34), runtime,
      _var0,
      VGetArg(upenv, 9-1, 1));
}
 }
}
static void _V10_Dloop_D375_k246(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D375_k246, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D375_k246, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.compiler-error.204 16 24) (bruijn ##.k.1020 1 0) (##string ##.string.1657) (bruijn ##.storage.377 11 2) (bruijn ##.x.1021 0 0))
    V_CALL(VGetArg(upenv, 16-1, 24), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10_Dstring_D1657.sym, VPOINTER_OTHER),
      VGetArg(upenv, 11-1, 2),
      _var0);
 }
}
static void _V10_Dloop_D375_k245(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D375_k245, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D375_k245, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.storage.377 10 2) ((bruijn ##.car.214 15 34) (close _V10_Dloop_D375_k246) (bruijn ##.t.376 10 1)) ((bruijn ##.k.1020 0 0) #f))
if(VDecodeBool(
VGetArg(upenv, 10-1, 2))) {
    V_CALL(VGetArg(upenv, 15-1, 34), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D375_k246, env)}),
      VGetArg(upenv, 10-1, 1));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D375_k249(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D375_k249, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D375_k249, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.375 13 0) (bruijn ##.k.1006 12 0) (bruijn ##.x.1018 1 0) (bruijn ##.x.1019 0 0) (bruijn ##.special.378 12 3) (bruijn ##.const.379 12 4) (bruijn ##.longs.380 12 5) (bruijn ##.short.381 12 6) (bruijn ##.unsigned.382 12 7) (bruijn ##.signed.383 12 8))
    V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VGetArg(upenv, 12-1, 0),
      upenv->vars[0],
      _var0,
      VGetArg(upenv, 12-1, 3),
      VGetArg(upenv, 12-1, 4),
      VGetArg(upenv, 12-1, 5),
      VGetArg(upenv, 12-1, 6),
      VGetArg(upenv, 12-1, 7),
      VGetArg(upenv, 12-1, 8));
 }
}
static void _V10_Dloop_D375_k248(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D375_k248, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D375_k248, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.car.214 16 34) (close _V10_Dloop_D375_k249) (bruijn ##.t.376 11 1))
    V_CALL(VGetArg(upenv, 16-1, 34), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D375_k249, env)}),
      VGetArg(upenv, 11-1, 1));
 }
}
static void _V10_Dloop_D375_k247(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D375_k247, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D375_k247, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.212 15 32) (close _V10_Dloop_D375_k248) (bruijn ##.t.376 10 1))
    V_CALL(VGetArg(upenv, 15-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D375_k248, env)}),
      VGetArg(upenv, 10-1, 1));
 }
}
static void _V10_Dloop_D375_k244(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D375_k244, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D375_k244, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D375_k245) (close _V10_Dloop_D375_k247))
    V_CALL_FUNC(_V10_Dloop_D375_k245, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D375_k247, env)}));
 }
}
static void _V10_Dloop_D375_k242(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D375_k242, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D375_k242, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D375_k243) (close _V10_Dloop_D375_k244))
    V_CALL_FUNC(_V10_Dloop_D375_k243, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D375_k244, env)}));
 }
}
static void _V10_Dloop_D375_k252(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D375_k252, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D375_k252, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.375 11 0) (bruijn ##.k.1006 10 0) (bruijn ##.x.1025 1 0) (bruijn ##.storage.377 10 2) (bruijn ##.special.378 10 3) (bruijn ##.const.379 10 4) (bruijn ##.x.1026 0 0) (bruijn ##.short.381 10 6) (bruijn ##.unsigned.382 10 7) (bruijn ##.signed.383 10 8))
    V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VGetArg(upenv, 10-1, 0),
      upenv->vars[0],
      VGetArg(upenv, 10-1, 2),
      VGetArg(upenv, 10-1, 3),
      VGetArg(upenv, 10-1, 4),
      _var0,
      VGetArg(upenv, 10-1, 6),
      VGetArg(upenv, 10-1, 7),
      VGetArg(upenv, 10-1, 8));
 }
}
static void _V10_Dloop_D375_k251(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D375_k251, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D375_k251, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.+.216 14 36) (close _V10_Dloop_D375_k252) (bruijn ##.longs.380 9 5) 1)
    V_CALL(VGetArg(upenv, 14-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D375_k252, env)}),
      VGetArg(upenv, 9-1, 5),
      VEncodeInt(1l));
 }
}
static void _V10_Dloop_D375_k254(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D375_k254, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D375_k254, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.375 11 0) (bruijn ##.k.1006 10 0) (bruijn ##.x.1028 0 0) (bruijn ##.storage.377 10 2) (bruijn ##.special.378 10 3) (bruijn ##.const.379 10 4) (bruijn ##.longs.380 10 5) #t (bruijn ##.unsigned.382 10 7) (bruijn ##.signed.383 10 8))
    V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VGetArg(upenv, 10-1, 0),
      _var0,
      VGetArg(upenv, 10-1, 2),
      VGetArg(upenv, 10-1, 3),
      VGetArg(upenv, 10-1, 4),
      VGetArg(upenv, 10-1, 5),
      VEncodeBool(true),
      VGetArg(upenv, 10-1, 7),
      VGetArg(upenv, 10-1, 8));
 }
}
static void _V10_Dloop_D375_k256(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D375_k256, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D375_k256, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.375 12 0) (bruijn ##.k.1006 11 0) (bruijn ##.x.1030 0 0) (bruijn ##.storage.377 11 2) (bruijn ##.special.378 11 3) (bruijn ##.const.379 11 4) (bruijn ##.longs.380 11 5) (bruijn ##.short.381 11 6) #t (bruijn ##.signed.383 11 8))
    V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VGetArg(upenv, 11-1, 0),
      _var0,
      VGetArg(upenv, 11-1, 2),
      VGetArg(upenv, 11-1, 3),
      VGetArg(upenv, 11-1, 4),
      VGetArg(upenv, 11-1, 5),
      VGetArg(upenv, 11-1, 6),
      VEncodeBool(true),
      VGetArg(upenv, 11-1, 8));
 }
}
static void _V10_Dloop_D375_k258(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D375_k258, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D375_k258, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.375 13 0) (bruijn ##.k.1006 12 0) (bruijn ##.x.1032 0 0) (bruijn ##.storage.377 12 2) (bruijn ##.special.378 12 3) (bruijn ##.const.379 12 4) (bruijn ##.longs.380 12 5) (bruijn ##.short.381 12 6) (bruijn ##.unsigned.382 12 7) #t)
    V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VGetArg(upenv, 12-1, 0),
      _var0,
      VGetArg(upenv, 12-1, 2),
      VGetArg(upenv, 12-1, 3),
      VGetArg(upenv, 12-1, 4),
      VGetArg(upenv, 12-1, 5),
      VGetArg(upenv, 12-1, 6),
      VGetArg(upenv, 12-1, 7),
      VEncodeBool(true));
 }
}
static void _V10_Dloop_D375_k259(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D375_k259, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D375_k259, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.compiler-error.204 17 24) (bruijn ##.k.1006 12 0) (##string ##.string.1658) (bruijn ##.x.1033 0 0) (bruijn ##.special.378 12 3))
    V_CALL(VGetArg(upenv, 17-1, 24), runtime,
      VGetArg(upenv, 12-1, 0),
      VEncodePointer(&_V10_Dstring_D1658.sym, VPOINTER_OTHER),
      _var0,
      VGetArg(upenv, 12-1, 3));
 }
}
static void _V10_Dloop_D375_k261(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D375_k261, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D375_k261, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.375 14 0) (bruijn ##.k.1006 13 0) (bruijn ##.x.1034 1 0) (bruijn ##.storage.377 13 2) (bruijn ##.x.1035 0 0) (bruijn ##.const.379 13 4) (bruijn ##.longs.380 13 5) (bruijn ##.short.381 13 6) (bruijn ##.unsigned.382 13 7) (bruijn ##.signed.383 13 8))
    V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VGetArg(upenv, 13-1, 0),
      upenv->vars[0],
      VGetArg(upenv, 13-1, 2),
      _var0,
      VGetArg(upenv, 13-1, 4),
      VGetArg(upenv, 13-1, 5),
      VGetArg(upenv, 13-1, 6),
      VGetArg(upenv, 13-1, 7),
      VGetArg(upenv, 13-1, 8));
 }
}
static void _V10_Dloop_D375_k260(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D375_k260, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D375_k260, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.car.214 17 34) (close _V10_Dloop_D375_k261) (bruijn ##.t.376 12 1))
    V_CALL(VGetArg(upenv, 17-1, 34), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D375_k261, env)}),
      VGetArg(upenv, 12-1, 1));
 }
}
static void _V10_Dloop_D375_k257(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D375_k257, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D375_k257, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1031 0 0) ((bruijn ##.cdr.212 16 32) (close _V10_Dloop_D375_k258) (bruijn ##.t.376 11 1)) (if (bruijn ##.special.378 11 3) ((bruijn ##.car.214 16 34) (close _V10_Dloop_D375_k259) (bruijn ##.t.376 11 1)) ((bruijn ##.cdr.212 16 32) (close _V10_Dloop_D375_k260) (bruijn ##.t.376 11 1))))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 16-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D375_k258, env)}),
      VGetArg(upenv, 11-1, 1));
} else {
if(VDecodeBool(
VGetArg(upenv, 11-1, 3))) {
    V_CALL(VGetArg(upenv, 16-1, 34), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D375_k259, env)}),
      VGetArg(upenv, 11-1, 1));
} else {
    V_CALL(VGetArg(upenv, 16-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D375_k260, env)}),
      VGetArg(upenv, 11-1, 1));
}
}
 }
}
static void _V10_Dloop_D375_k255(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D375_k255, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D375_k255, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1029 0 0) ((bruijn ##.cdr.212 15 32) (close _V10_Dloop_D375_k256) (bruijn ##.t.376 10 1)) ((bruijn ##.eqv?.211 15 31) (close _V10_Dloop_D375_k257) (bruijn ##.x.30.384 8 0) 'signed))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 15-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D375_k256, env)}),
      VGetArg(upenv, 10-1, 1));
} else {
    V_CALL(VGetArg(upenv, 15-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D375_k257, env)}),
      VGetArg(upenv, 8-1, 0),
      _V0signed);
}
 }
}
static void _V10_Dloop_D375_k253(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D375_k253, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D375_k253, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1027 0 0) ((bruijn ##.cdr.212 14 32) (close _V10_Dloop_D375_k254) (bruijn ##.t.376 9 1)) ((bruijn ##.eqv?.211 14 31) (close _V10_Dloop_D375_k255) (bruijn ##.x.30.384 7 0) 'unsigned))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 14-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D375_k254, env)}),
      VGetArg(upenv, 9-1, 1));
} else {
    V_CALL(VGetArg(upenv, 14-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D375_k255, env)}),
      VGetArg(upenv, 7-1, 0),
      _V0unsigned);
}
 }
}
static void _V10_Dloop_D375_k250(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D375_k250, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D375_k250, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1024 0 0) ((bruijn ##.cdr.212 13 32) (close _V10_Dloop_D375_k251) (bruijn ##.t.376 8 1)) ((bruijn ##.eqv?.211 13 31) (close _V10_Dloop_D375_k253) (bruijn ##.x.30.384 6 0) 'short))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 13-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D375_k251, env)}),
      VGetArg(upenv, 8-1, 1));
} else {
    V_CALL(VGetArg(upenv, 13-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D375_k253, env)}),
      VGetArg(upenv, 6-1, 0),
      _V0short);
}
 }
}
static void _V10_Dloop_D375_k241(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D375_k241, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D375_k241, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1015 0 0) ((bruijn ##.not.202 12 22) (close _V10_Dloop_D375_k242) (bruijn ##.storage-declaration?.302 10 3)) ((bruijn ##.eqv?.211 12 31) (close _V10_Dloop_D375_k250) (bruijn ##.x.30.384 5 0) 'long))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 12-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D375_k242, env)}),
      VGetArg(upenv, 10-1, 3));
} else {
    V_CALL(VGetArg(upenv, 12-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D375_k250, env)}),
      VGetArg(upenv, 5-1, 0),
      _V0long);
}
 }
}
static void _V10_Dloop_D375_k236(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D375_k236, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D375_k236, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D375_k237) (close _V10_Dloop_D375_k241))
    V_CALL_FUNC(_V10_Dloop_D375_k237, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D375_k241, env)}));
 }
}
static void _V10_Dloop_D375_k234(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D375_k234, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D375_k234, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1013 0 0) ((bruijn ##.cdr.212 10 32) (close _V10_Dloop_D375_k235) (bruijn ##.t.376 5 1)) ((bruijn ##.eqv?.211 10 31) (close _V10_Dloop_D375_k236) (bruijn ##.x.30.384 3 0) 'static))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 10-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D375_k235, env)}),
      VGetArg(upenv, 5-1, 1));
} else {
    V_CALL(VGetArg(upenv, 10-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D375_k236, env)}),
      upenv->up->up->vars[0],
      _V0static);
}
 }
}
static void _V10_Dloop_D375_k232(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D375_k232, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D375_k232, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D375_k233) (close _V10_Dloop_D375_k234))
    V_CALL_FUNC(_V10_Dloop_D375_k233, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D375_k234, env)}));
 }
}
static void _V10_Dloop_D375_k230(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D375_k230, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D375_k230, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1011 0 0) ((bruijn ##.cdr.212 8 32) (close _V10_Dloop_D375_k231) (bruijn ##.t.376 3 1)) ((bruijn ##.eqv?.211 8 31) (close _V10_Dloop_D375_k232) (bruijn ##.x.30.384 1 0) 'restrict))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 8-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D375_k231, env)}),
      upenv->up->up->vars[1]);
} else {
    V_CALL(VGetArg(upenv, 8-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D375_k232, env)}),
      upenv->vars[0],
      _V0restrict);
}
 }
}
static void _V10_Dloop_D375_k229(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D375_k229, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D375_k229, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.eqv?.211 7 31) (close _V10_Dloop_D375_k230) (bruijn ##.x.30.384 0 0) 'const)
    V_CALL(VGetArg(upenv, 7-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D375_k230, env)}),
      _var0,
      _V0const);
 }
}
static void _V10_Dloop_D375_k225(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D375_k225, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D375_k225, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1007 0 0) ((close _V10_Dloop_D375_k226) (close _V10_Dloop_D375_k227)) ((bruijn ##.car.214 6 34) (close _V10_Dloop_D375_k229) (bruijn ##.t.376 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dloop_D375_k226, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D375_k227, env)}));
} else {
    V_CALL(VGetArg(upenv, 6-1, 34), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D375_k229, env)}),
      upenv->vars[1]);
}
 }
}
static void _V10_Dloop_D375_lambda48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8) {
 if(argc != 9) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D375_lambda48, got ~D~N"
  "-- expected 9~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D375_lambda48, runtime, upenv, 9, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7, _var8) {
  struct { VEnv env; VWORD argv[9]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 9, 9, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  env->vars[5] = _var5;
  env->vars[6] = _var6;
  env->vars[7] = _var7;
  env->vars[8] = _var8;
  // ((bruijn ##.null?.194 5 14) (close _V10_Dloop_D375_k225) (bruijn ##.t.376 0 1))
    V_CALL(VGetArg(upenv, 5-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D375_k225, env)}),
      _var1);
 }
}
static void _V10_Dreduce__type_D224_k262(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__type_D224_k262, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__type_D224_k262, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.375 1 0) (bruijn ##.k.769 3 0) (bruijn ##.x.1043 0 0) #f #f #f 0 #f #f #f)
    V_CALL(upenv->vars[0], runtime,
      upenv->up->up->vars[0],
      _var0,
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeInt(0l),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false));
 }
}
static void _V10_Dreduce__type_D224_lambda29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__type_D224_lambda29, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__type_D224_lambda29, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (letrec 3 ((close _V10_Ddecide_D303_lambda30) (close _V10_Dappend__const_D304_lambda46) (close _V10_Dmaybe__string___Gsymbol_D305_lambda47)) (letrec 1 ((close _V10_Dloop_D375_lambda48)) ((bruijn ##.map.183 4 3) (close _V10_Dreduce__type_D224_k262) (bruijn ##.maybe-string->symbol.305 1 2) (bruijn ##.t.300 2 1))))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[3]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 3, 3, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D303_lambda30, env)});
    env->vars[1] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dappend__const_D304_lambda46, env)});
    env->vars[2] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmaybe__string___Gsymbol_D305_lambda47, env)});
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D375_lambda48, env)});
    V_CALL(upenv->up->up->up->vars[3], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__type_D224_k262, env)}),
      upenv->vars[2],
      upenv->up->vars[1]);
    }
    }
 }
}
static void _V10_Dunwrap__typedef_D225_k271(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__typedef_D225_k271, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__typedef_D225_k271, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1059 1 0) ((bruijn ##.compiler-error.204 14 24) (bruijn ##.k.1060 0 0) (##string ##.string.1659) (bruijn ##.expr.388 11 0)) ((bruijn ##.k.1060 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 14-1, 24), runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D1659.sym, VPOINTER_OTHER),
      VGetArg(upenv, 11-1, 0));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dunwrap__typedef_D225_k273(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__typedef_D225_k273, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__typedef_D225_k273, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.94.389 11 1) (bruijn ##.k.1049 8 0) (##inline ##vcore.cons 'typedef (##inline ##vcore.cons (bruijn ##.x.1057 0 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.97.392 6 0)) '()))))
    V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      VGetArg(upenv, 8-1, 0),
      VInlineCons2(runtime,
        _V0typedef,
        VInlineCons2(runtime,
        _var0,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(upenv, 6-1, 0)),
        VNULL))));
 }
}
static void _V10_Dunwrap__typedef_D225_k272(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__typedef_D225_k272, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__typedef_D225_k272, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.string->symbol.184 14 4) (close _V10_Dunwrap__typedef_D225_k273) (bruijn ##.name.395 3 0))
    V_CALL(VGetArg(upenv, 14-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__typedef_D225_k273, env)}),
      upenv->up->up->vars[0]);
 }
}
static void _V10_Dunwrap__typedef_D225_k270(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__typedef_D225_k270, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__typedef_D225_k270, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dunwrap__typedef_D225_k271) (close _V10_Dunwrap__typedef_D225_k272))
    V_CALL_FUNC(_V10_Dunwrap__typedef_D225_k271, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__typedef_D225_k272, env)}));
 }
}
static void _V10_Dunwrap__typedef_D225_k269(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__typedef_D225_k269, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__typedef_D225_k269, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.not.202 12 22) (close _V10_Dunwrap__typedef_D225_k270) (bruijn ##.x.1061 0 0))
    V_CALL(VGetArg(upenv, 12-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__typedef_D225_k270, env)}),
      _var0);
 }
}
static void _V10_Dunwrap__typedef_D225_k268(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__typedef_D225_k268, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__typedef_D225_k268, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.98.394 1 0))) ((bruijn ##.string?.203 11 23) (close _V10_Dunwrap__typedef_D225_k269) (bruijn ##.name.395 0 0)) ((bruijn ##.k.1049 4 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    V_CALL(VGetArg(upenv, 11-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__typedef_D225_k269, env)}),
      _var0);
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dunwrap__typedef_D225_k267(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__typedef_D225_k267, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__typedef_D225_k267, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.98.394 0 0)) ((close _V10_Dunwrap__typedef_D225_k268) (##inline ##vcore.car (bruijn ##.expr.98.394 0 0))) ((bruijn ##.k.1049 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dunwrap__typedef_D225_k268, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dunwrap__typedef_D225_k266(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__typedef_D225_k266, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__typedef_D225_k266, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.97.392 0 0)) ((close _V10_Dunwrap__typedef_D225_k267) (##inline ##vcore.cdr (bruijn ##.expr.97.392 0 0))) ((bruijn ##.k.1049 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dunwrap__typedef_D225_k267, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dunwrap__typedef_D225_k265(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__typedef_D225_k265, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__typedef_D225_k265, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1050 0 0) ((close _V10_Dunwrap__typedef_D225_k266) (##inline ##vcore.cdr (bruijn ##.expr.96.391 2 0))) ((bruijn ##.k.1049 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dunwrap__typedef_D225_k266, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dunwrap__typedef_D225_k264(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__typedef_D225_k264, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__typedef_D225_k264, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.96.391 1 0)) ((bruijn ##.equal?.220 7 40) (close _V10_Dunwrap__typedef_D225_k265) 'variable (##inline ##vcore.car (bruijn ##.expr.96.391 1 0))) ((bruijn ##.k.1049 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 7-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__typedef_D225_k265, env)}),
      _V0variable,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dunwrap__typedef_D225_k275(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__typedef_D225_k275, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__typedef_D225_k275, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.94.389 4 1) (bruijn ##.k.1045 4 0) (bruijn ##.x.1047 0 0))
    V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->up->up->up->vars[0],
      _var0);
 }
}
static void _V10_Dunwrap__typedef_D225_k274(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__typedef_D225_k274, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__typedef_D225_k274, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.compiler-error.204 7 24) (close _V10_Dunwrap__typedef_D225_k275) (##string ##.string.1660) (bruijn ##.expr.388 4 0))
    V_CALL(VGetArg(upenv, 7-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__typedef_D225_k275, env)}),
      VEncodePointer(&_V10_Dstring_D1660.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[0]);
 }
}
static void _V10_Dunwrap__typedef_D225_lambda52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__typedef_D225_lambda52, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dunwrap__typedef_D225_k264) (close _V10_Dunwrap__typedef_D225_k274))
    V_CALL_FUNC(_V10_Dunwrap__typedef_D225_k264, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__typedef_D225_k274, env)}));
 }
}
static void _V10_Dunwrap__typedef_D225_lambda51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__typedef_D225_lambda51, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dunwrap__typedef_D225_lambda52) (bruijn ##.input.95.390 0 0))
    V_CALL_FUNC(_V10_Dunwrap__typedef_D225_lambda52, env, runtime,
      _var0);
 }
}
static void _V10_Dunwrap__typedef_D225_lambda50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__typedef_D225_lambda50, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__typedef_D225_lambda50, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dunwrap__typedef_D225_lambda51) (bruijn ##.expr.388 1 0))
    V_CALL_FUNC(_V10_Dunwrap__typedef_D225_lambda51, env, runtime,
      upenv->vars[0]);
 }
}
static void _V10_Dunwrap__typedef_D225_k263(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__typedef_D225_k263, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__typedef_D225_k263, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call/cc.218 3 38) (bruijn ##.k.1044 1 0) (close _V10_Dunwrap__typedef_D225_lambda50))
    V_CALL(upenv->up->up->vars[38], runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__typedef_D225_lambda50, env)}));
 }
}
static void _V10_Dunwrap__typedef_D225_lambda49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__typedef_D225_lambda49, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__typedef_D225_lambda49, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn ##.reduce-declare.222 1 0) (close _V10_Dunwrap__typedef_D225_k263) (bruijn ##.ret.385 0 1) (bruijn ##.decl.386 0 2) (bruijn ##.table.387 0 3))
    V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__typedef_D225_k263, env)}),
      _var1,
      _var2,
      _var3);
 }
}
static void _V10_Dunwrap__function_D226_k286(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D226_k286, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__function_D226_k286, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1086 1 0) ((bruijn ##.compiler-error.204 16 24) (bruijn ##.k.1087 0 0) (##string ##.string.1661) (bruijn ##.expr.399 13 0)) ((bruijn ##.k.1087 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 16-1, 24), runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D1661.sym, VPOINTER_OTHER),
      VGetArg(upenv, 13-1, 0));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dunwrap__function_D226_k290(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D226_k290, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__function_D226_k290, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1083 1 0) ((bruijn ##.compiler-error.204 19 24) (bruijn ##.k.1084 0 0) (##string ##.string.1662) (bruijn ##.expr.399 16 0)) ((bruijn ##.k.1084 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 19-1, 24), runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D1662.sym, VPOINTER_OTHER),
      VGetArg(upenv, 16-1, 0));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dunwrap__function_D226_k293(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D226_k293, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__function_D226_k293, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.99.400 17 1) (bruijn ##.k.1069 14 0) (##inline ##vcore.cons 'function (##inline ##vcore.cons (bruijn ##.x.1078 0 0) (##inline ##vcore.cons (bruijn ##.ret.406 9 0) (bruijn ##.args.407 8 0)))))
    V_CALL(VGetArg(upenv, 17-1, 1), runtime,
      VGetArg(upenv, 14-1, 0),
      VInlineCons2(runtime,
        _V0function,
        VInlineCons2(runtime,
        _var0,
        VInlineCons2(runtime,
        VGetArg(upenv, 9-1, 0),
        VGetArg(upenv, 8-1, 0)))));
 }
}
static void _V10_Dunwrap__function_D226_k292(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D226_k292, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__function_D226_k292, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.string->symbol.184 20 4) (close _V10_Dunwrap__function_D226_k293) (bruijn ##.name.404 10 0))
    V_CALL(VGetArg(upenv, 20-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__function_D226_k293, env)}),
      VGetArg(upenv, 10-1, 0));
 }
}
static void _V10_Dunwrap__function_D226_k295(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D226_k295, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__function_D226_k295, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1081 0 0) ((bruijn ##.compiler-error.204 22 24) (bruijn ##.k.1080 2 0) (##string ##.string.1663) (bruijn ##.name.404 12 0) (bruijn ##.arg.408 2 1)) ((bruijn ##.k.1080 2 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 22-1, 24), runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1663.sym, VPOINTER_OTHER),
      VGetArg(upenv, 12-1, 0),
      upenv->up->vars[1]);
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dunwrap__function_D226_k294(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D226_k294, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__function_D226_k294, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.not.202 21 22) (close _V10_Dunwrap__function_D226_k295) (bruijn ##.x.1082 0 0))
    V_CALL(VGetArg(upenv, 21-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__function_D226_k295, env)}),
      _var0);
 }
}
static void _V10_Dunwrap__function_D226_lambda57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D226_lambda57, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__function_D226_lambda57, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.get-foreign-decoder.238 19 16) (close _V10_Dunwrap__function_D226_k294) (bruijn ##.arg.408 0 1))
    V_CALL(VGetArg(upenv, 19-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__function_D226_k294, env)}),
      _var1);
 }
}
static void _V10_Dunwrap__function_D226_k291(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D226_k291, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__function_D226_k291, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.for-each.213 19 33) (close _V10_Dunwrap__function_D226_k292) (close _V10_Dunwrap__function_D226_lambda57) (bruijn ##.args.407 6 0))
    V_CALL(VGetArg(upenv, 19-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__function_D226_k292, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__function_D226_lambda57, env)}),
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V10_Dunwrap__function_D226_k289(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D226_k289, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__function_D226_k289, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dunwrap__function_D226_k290) (close _V10_Dunwrap__function_D226_k291))
    V_CALL_FUNC(_V10_Dunwrap__function_D226_k290, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__function_D226_k291, env)}));
 }
}
static void _V10_Dunwrap__function_D226_k288(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D226_k288, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__function_D226_k288, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.not.202 17 22) (close _V10_Dunwrap__function_D226_k289) (bruijn ##.x.1085 0 0))
    V_CALL(VGetArg(upenv, 17-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__function_D226_k289, env)}),
      _var0);
 }
}
static void _V10_Dunwrap__function_D226_k287(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D226_k287, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__function_D226_k287, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.string?.203 16 23) (close _V10_Dunwrap__function_D226_k288) (bruijn ##.name.404 6 0))
    V_CALL(VGetArg(upenv, 16-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__function_D226_k288, env)}),
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V10_Dunwrap__function_D226_k285(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D226_k285, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__function_D226_k285, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dunwrap__function_D226_k286) (close _V10_Dunwrap__function_D226_k287))
    V_CALL_FUNC(_V10_Dunwrap__function_D226_k286, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__function_D226_k287, env)}));
 }
}
static void _V10_Dunwrap__function_D226_k284(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D226_k284, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__function_D226_k284, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.not.202 14 22) (close _V10_Dunwrap__function_D226_k285) (bruijn ##.x.1088 0 0))
    V_CALL(VGetArg(upenv, 14-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__function_D226_k285, env)}),
      _var0);
 }
}
static void _V10_Dunwrap__function_D226_k283(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D226_k283, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__function_D226_k283, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.get-foreign-encoder.237 12 15) (close _V10_Dunwrap__function_D226_k284) (bruijn ##.ret.406 1 0))
    V_CALL(VGetArg(upenv, 12-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__function_D226_k284, env)}),
      upenv->vars[0]);
 }
}
static void _V10_Dunwrap__function_D226_k282(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D226_k282, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__function_D226_k282, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dunwrap__function_D226_k283) (##inline ##vcore.cdr (bruijn ##.expr.103.405 1 0)))
    V_CALL_FUNC(_V10_Dunwrap__function_D226_k283, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
 }
}
static void _V10_Dunwrap__function_D226_k281(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D226_k281, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__function_D226_k281, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.103.405 0 0)) ((close _V10_Dunwrap__function_D226_k282) (##inline ##vcore.car (bruijn ##.expr.103.405 0 0))) ((bruijn ##.k.1069 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dunwrap__function_D226_k282, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dunwrap__function_D226_k280(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D226_k280, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__function_D226_k280, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dunwrap__function_D226_k281) (##inline ##vcore.cdr (bruijn ##.expr.102.403 1 0)))
    V_CALL_FUNC(_V10_Dunwrap__function_D226_k281, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
 }
}
static void _V10_Dunwrap__function_D226_k279(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D226_k279, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__function_D226_k279, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.102.403 0 0)) ((close _V10_Dunwrap__function_D226_k280) (##inline ##vcore.car (bruijn ##.expr.102.403 0 0))) ((bruijn ##.k.1069 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dunwrap__function_D226_k280, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dunwrap__function_D226_k278(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D226_k278, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__function_D226_k278, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1070 0 0) ((close _V10_Dunwrap__function_D226_k279) (##inline ##vcore.cdr (bruijn ##.expr.101.402 2 0))) ((bruijn ##.k.1069 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dunwrap__function_D226_k279, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dunwrap__function_D226_k277(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D226_k277, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__function_D226_k277, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.101.402 1 0)) ((bruijn ##.equal?.220 7 40) (close _V10_Dunwrap__function_D226_k278) 'function (##inline ##vcore.car (bruijn ##.expr.101.402 1 0))) ((bruijn ##.k.1069 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 7-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__function_D226_k278, env)}),
      _V0function,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dunwrap__function_D226_k297(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D226_k297, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__function_D226_k297, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.99.400 4 1) (bruijn ##.k.1065 4 0) (bruijn ##.x.1067 0 0))
    V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->up->up->up->vars[0],
      _var0);
 }
}
static void _V10_Dunwrap__function_D226_k296(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D226_k296, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__function_D226_k296, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.compiler-error.204 7 24) (close _V10_Dunwrap__function_D226_k297) (##string ##.string.1664) (bruijn ##.expr.399 4 0))
    V_CALL(VGetArg(upenv, 7-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__function_D226_k297, env)}),
      VEncodePointer(&_V10_Dstring_D1664.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[0]);
 }
}
static void _V10_Dunwrap__function_D226_lambda56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__function_D226_lambda56, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dunwrap__function_D226_k277) (close _V10_Dunwrap__function_D226_k296))
    V_CALL_FUNC(_V10_Dunwrap__function_D226_k277, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__function_D226_k296, env)}));
 }
}
static void _V10_Dunwrap__function_D226_lambda55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__function_D226_lambda55, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dunwrap__function_D226_lambda56) (bruijn ##.input.100.401 0 0))
    V_CALL_FUNC(_V10_Dunwrap__function_D226_lambda56, env, runtime,
      _var0);
 }
}
static void _V10_Dunwrap__function_D226_lambda54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D226_lambda54, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__function_D226_lambda54, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dunwrap__function_D226_lambda55) (bruijn ##.expr.399 1 0))
    V_CALL_FUNC(_V10_Dunwrap__function_D226_lambda55, env, runtime,
      upenv->vars[0]);
 }
}
static void _V10_Dunwrap__function_D226_k276(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D226_k276, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__function_D226_k276, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call/cc.218 3 38) (bruijn ##.k.1064 1 0) (close _V10_Dunwrap__function_D226_lambda54))
    V_CALL(upenv->up->up->vars[38], runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__function_D226_lambda54, env)}));
 }
}
static void _V10_Dunwrap__function_D226_lambda53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D226_lambda53, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__function_D226_lambda53, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn ##.reduce-declare.222 1 0) (close _V10_Dunwrap__function_D226_k276) (bruijn ##.ret.396 0 1) (bruijn ##.decl.397 0 2) (bruijn ##.table.398 0 3))
    V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__function_D226_k276, env)}),
      _var1,
      _var2,
      _var3);
 }
}
static void _V10_Dunwrap__enums__iter_D411_k300(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__enums__iter_D411_k300, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__enums__iter_D411_k300, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1101 1 0) ((bruijn ##.cadar.188 7 8) (bruijn ##.k.1102 0 0) (bruijn ##.enums.412 3 1)) ((bruijn ##.k.1102 0 0) (bruijn ##.val.413 3 2)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 7-1, 8), runtime,
      _var0,
      upenv->up->up->vars[1]);
} else {
    V_CALL(_var0, runtime,
      upenv->up->up->vars[2]);
}
 }
}
static void _V10_Dunwrap__enums__iter_D411_k306(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__enums__iter_D411_k306, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__enums__iter_D411_k306, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.unwrap-enums-iter.411 9 0) (bruijn ##.k.1091 8 0) (bruijn ##.x.1093 4 0) (bruijn ##.x.1094 3 0) (bruijn ##.x.1095 0 0))
    V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VGetArg(upenv, 8-1, 0),
      upenv->up->up->up->vars[0],
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V10_Dunwrap__enums__iter_D411_k305(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__enums__iter_D411_k305, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__enums__iter_D411_k305, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.200 11 20) (close _V10_Dunwrap__enums__iter_D411_k306) (##inline ##vcore.cons 'enum (##inline ##vcore.cons (bruijn ##.x.1098 0 0) (##inline ##vcore.cons (bruijn ##.val.415 4 0) '()))) (bruijn ##.table.414 7 3))
    V_CALL(VGetArg(upenv, 11-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__enums__iter_D411_k306, env)}),
      VInlineCons2(runtime,
        _V0enum,
        VInlineCons2(runtime,
        _var0,
        VInlineCons2(runtime,
        upenv->up->up->up->vars[0],
        VNULL))),
      VGetArg(upenv, 7-1, 3));
 }
}
static void _V10_Dunwrap__enums__iter_D411_k304(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__enums__iter_D411_k304, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__enums__iter_D411_k304, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.string->symbol.184 10 4) (close _V10_Dunwrap__enums__iter_D411_k305) (bruijn ##.x.1100 0 0))
    V_CALL(VGetArg(upenv, 10-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__enums__iter_D411_k305, env)}),
      _var0);
 }
}
static void _V10_Dunwrap__enums__iter_D411_k303(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__enums__iter_D411_k303, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__enums__iter_D411_k303, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.caar.185 9 5) (close _V10_Dunwrap__enums__iter_D411_k304) (bruijn ##.enums.412 5 1))
    V_CALL(VGetArg(upenv, 9-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__enums__iter_D411_k304, env)}),
      VGetArg(upenv, 5-1, 1));
 }
}
static void _V10_Dunwrap__enums__iter_D411_k302(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__enums__iter_D411_k302, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__enums__iter_D411_k302, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.+.216 8 36) (close _V10_Dunwrap__enums__iter_D411_k303) (bruijn ##.val.415 1 0) 1)
    V_CALL(VGetArg(upenv, 8-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__enums__iter_D411_k303, env)}),
      upenv->vars[0],
      VEncodeInt(1l));
 }
}
static void _V10_Dunwrap__enums__iter_D411_k301(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__enums__iter_D411_k301, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__enums__iter_D411_k301, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.212 7 32) (close _V10_Dunwrap__enums__iter_D411_k302) (bruijn ##.enums.412 3 1))
    V_CALL(VGetArg(upenv, 7-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__enums__iter_D411_k302, env)}),
      upenv->up->up->vars[1]);
 }
}
static void _V10_Dunwrap__enums__iter_D411_k299(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__enums__iter_D411_k299, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__enums__iter_D411_k299, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dunwrap__enums__iter_D411_k300) (close _V10_Dunwrap__enums__iter_D411_k301))
    V_CALL_FUNC(_V10_Dunwrap__enums__iter_D411_k300, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__enums__iter_D411_k301, env)}));
 }
}
static void _V10_Dunwrap__enums__iter_D411_k298(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__enums__iter_D411_k298, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__enums__iter_D411_k298, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1092 0 0) ((bruijn ##.k.1091 1 0) (bruijn ##.table.414 1 3)) ((bruijn ##.cadar.188 5 8) (close _V10_Dunwrap__enums__iter_D411_k299) (bruijn ##.enums.412 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      upenv->vars[3]);
} else {
    V_CALL(VGetArg(upenv, 5-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__enums__iter_D411_k299, env)}),
      upenv->vars[1]);
}
 }
}
static void _V10_Dunwrap__enums__iter_D411_lambda59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__enums__iter_D411_lambda59, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__enums__iter_D411_lambda59, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn ##.null?.194 4 14) (close _V10_Dunwrap__enums__iter_D411_k298) (bruijn ##.enums.412 0 1))
    V_CALL(upenv->up->up->up->vars[14], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__enums__iter_D411_k298, env)}),
      _var1);
 }
}
static void _V10_Dloop_D416_k311(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D416_k311, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D416_k311, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.equal?.220 10 40) (bruijn ##.k.1108 1 0) (bruijn ##.x.1109 0 0) (##string ##.string.1654))
    V_CALL(VGetArg(upenv, 10-1, 40), runtime,
      upenv->vars[0],
      _var0,
      VEncodePointer(&_V10_Dstring_D1654.sym, VPOINTER_OTHER));
 }
}
static void _V10_Dloop_D416_k310(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D416_k310, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D416_k310, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1107 1 0) ((bruijn ##.caar.185 9 5) (close _V10_Dloop_D416_k311) (bruijn ##.ret.417 4 1)) ((bruijn ##.k.1108 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 9-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D416_k311, env)}),
      upenv->up->up->up->vars[1]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D416_k313(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D416_k313, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D416_k313, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.enums.418 0 0) ((bruijn ##.unwrap-enums-iter.411 7 0) (bruijn ##.k.1103 5 0) (bruijn ##.enums.418 0 0) 0 (bruijn ##.table.410 8 2)) ((bruijn ##.k.1103 5 0) (bruijn ##.table.410 8 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0,
      VEncodeInt(0l),
      VGetArg(upenv, 8-1, 2));
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VGetArg(upenv, 8-1, 2));
}
 }
}
static void _V10_Dloop_D416_k314(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D416_k314, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D416_k314, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.416 6 0) (bruijn ##.k.1103 5 0) (bruijn ##.x.1106 0 0))
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V10_Dloop_D416_k312(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D416_k312, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D416_k312, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1105 0 0) ((bruijn ##.caddar.186 9 6) (close _V10_Dloop_D416_k313) (bruijn ##.ret.417 4 1)) ((bruijn ##.cdr.212 9 32) (close _V10_Dloop_D416_k314) (bruijn ##.ret.417 4 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 9-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D416_k313, env)}),
      upenv->up->up->up->vars[1]);
} else {
    V_CALL(VGetArg(upenv, 9-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D416_k314, env)}),
      upenv->up->up->up->vars[1]);
}
 }
}
static void _V10_Dloop_D416_k309(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D416_k309, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D416_k309, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D416_k310) (close _V10_Dloop_D416_k312))
    V_CALL_FUNC(_V10_Dloop_D416_k310, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D416_k312, env)}));
 }
}
static void _V10_Dloop_D416_k308(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D416_k308, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D416_k308, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.pair?.215 7 35) (close _V10_Dloop_D416_k309) (bruijn ##.x.1110 0 0))
    V_CALL(VGetArg(upenv, 7-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D416_k309, env)}),
      _var0);
 }
}
static void _V10_Dloop_D416_k307(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D416_k307, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D416_k307, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1104 0 0) ((bruijn ##.k.1103 1 0) (bruijn ##.table.410 4 2)) ((bruijn ##.car.214 6 34) (close _V10_Dloop_D416_k308) (bruijn ##.ret.417 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      upenv->up->up->up->vars[2]);
} else {
    V_CALL(VGetArg(upenv, 6-1, 34), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D416_k308, env)}),
      upenv->vars[1]);
}
 }
}
static void _V10_Dloop_D416_lambda60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D416_lambda60, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D416_lambda60, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.null?.194 5 14) (close _V10_Dloop_D416_k307) (bruijn ##.ret.417 0 1))
    V_CALL(VGetArg(upenv, 5-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D416_k307, env)}),
      _var1);
 }
}
static void _V10_Dunwrap__enums_D227_lambda58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__enums_D227_lambda58, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__enums_D227_lambda58, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (letrec 1 ((close _V10_Dunwrap__enums__iter_D411_lambda59)) (letrec 1 ((close _V10_Dloop_D416_lambda60)) ((bruijn ##.loop.416 0 0) (bruijn ##.k.1090 2 0) (bruijn ##.ret.409 2 1))))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__enums__iter_D411_lambda59, env)});
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D416_lambda60, env)});
    V_CALL(env->vars[0], runtime,
      upenv->up->vars[0],
      upenv->up->vars[1]);
    }
    }
 }
}
static void _V10_Dunwrap__declares_D228_k317(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D228_k317, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__declares_D228_k317, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1148 1 0) (##vcore.blob=? (bruijn ##.k.1149 0 0) (##string ##.string.1665) (##inline ##vcore.car (bruijn ##.expr.106.423 3 0))) ((bruijn ##.k.1149 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL_FUNC(VBlobEqv2, NULL, runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D1665.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        upenv->up->up->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dunwrap__declares_D228_k318(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D228_k318, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__declares_D228_k318, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1145 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.106.423 3 0))) ((bruijn ##.kk.104.421 5 1) (bruijn ##.k.1144 2 0) (bruijn ##.table.420 6 2)) ((bruijn ##.k.1144 2 0) #f)) ((bruijn ##.k.1144 2 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->up->up->vars[0])))) {
    V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 6-1, 2));
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
static void _V10_Dunwrap__declares_D228_k316(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D228_k316, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__declares_D228_k316, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dunwrap__declares_D228_k317) (close _V10_Dunwrap__declares_D228_k318))
    V_CALL_FUNC(_V10_Dunwrap__declares_D228_k317, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__declares_D228_k318, env)}));
 }
}
static void _V10_Dunwrap__declares_D228_k315(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D228_k315, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__declares_D228_k315, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.106.423 1 0)) (##vcore.string? (close _V10_Dunwrap__declares_D228_k316) (##inline ##vcore.car (bruijn ##.expr.106.423 1 0))) ((bruijn ##.k.1144 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(VStringP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__declares_D228_k316, env)}),
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dunwrap__declares_D228_k322(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D228_k322, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__declares_D228_k322, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1139 1 0) (##vcore.blob=? (bruijn ##.k.1140 0 0) (##string ##.string.1665) (##inline ##vcore.car (bruijn ##.expr.107.424 3 0))) ((bruijn ##.k.1140 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL_FUNC(VBlobEqv2, NULL, runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D1665.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        upenv->up->up->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dunwrap__declares_D228_k327(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D228_k327, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__declares_D228_k327, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1135 1 0) (##vcore.blob=? (bruijn ##.k.1136 0 0) (##string ##.string.1666) (##inline ##vcore.car (bruijn ##.expr.109.426 2 0))) ((bruijn ##.k.1136 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL_FUNC(VBlobEqv2, NULL, runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D1666.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D434_k337(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D434_k337, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D434_k337, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.unwrap-typedef.225 25 3) (bruijn ##.k.1132 1 0) (bruijn ##.ret.433 6 2) (bruijn ##.x.1133 0 0) (bruijn ##.table.436 4 2))
    V_CALL(VGetArg(upenv, 25-1, 3), runtime,
      upenv->vars[0],
      VGetArg(upenv, 6-1, 2),
      _var0,
      upenv->up->up->up->vars[2]);
 }
}
static void _V10_Dloop_D434_k338(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D434_k338, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D434_k338, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.unwrap-function.226 25 4) (bruijn ##.k.1132 1 0) (bruijn ##.ret.433 6 2) (bruijn ##.x.1134 0 0) (bruijn ##.table.436 4 2))
    V_CALL(VGetArg(upenv, 25-1, 4), runtime,
      upenv->vars[0],
      VGetArg(upenv, 6-1, 2),
      _var0,
      upenv->up->up->up->vars[2]);
 }
}
static void _V10_Dloop_D434_k336(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D434_k336, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D434_k336, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.typedef?.431 5 0) ((bruijn ##.car.214 25 34) (close _V10_Dloop_D434_k337) (bruijn ##.mydecls.435 3 1)) ((bruijn ##.car.214 25 34) (close _V10_Dloop_D434_k338) (bruijn ##.mydecls.435 3 1)))
if(VDecodeBool(
VGetArg(upenv, 5-1, 0))) {
    V_CALL(VGetArg(upenv, 25-1, 34), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D434_k337, env)}),
      upenv->up->up->vars[1]);
} else {
    V_CALL(VGetArg(upenv, 25-1, 34), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D434_k338, env)}),
      upenv->up->up->vars[1]);
}
 }
}
static void _V10_Dloop_D434_k340(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D434_k340, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D434_k340, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.434 5 0) (bruijn ##.k.1126 4 0) (bruijn ##.x.1129 2 0) (bruijn ##.x.1130 0 0))
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D434_k339(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D434_k339, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D434_k339, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.200 25 20) (close _V10_Dloop_D434_k340) (bruijn ##.x.1131 0 0) (bruijn ##.table.436 3 2))
    V_CALL(VGetArg(upenv, 25-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D434_k340, env)}),
      _var0,
      upenv->up->up->vars[2]);
 }
}
static void _V10_Dloop_D434_k335(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D434_k335, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D434_k335, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D434_k336) (close _V10_Dloop_D434_k339))
    V_CALL_FUNC(_V10_Dloop_D434_k336, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D434_k339, env)}));
 }
}
static void _V10_Dloop_D434_k334(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D434_k334, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D434_k334, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1127 0 0) ((bruijn ##.unwrap-declares.228 22 6) (bruijn ##.k.1126 1 0) (##inline ##vcore.cons '(##string ##.string.1665) (##inline ##vcore.cdr (bruijn ##.expr.108.425 12 0))) (bruijn ##.table.436 1 2)) ((bruijn ##.cdr.212 23 32) (close _V10_Dloop_D434_k335) (bruijn ##.mydecls.435 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 22-1, 6), runtime,
      upenv->vars[0],
      VInlineCons2(runtime,
        VEncodePointer(&_V10_Dstring_D1665.sym, VPOINTER_OTHER),
        VInlineCdr2(runtime,
        VGetArg(upenv, 12-1, 0))),
      upenv->vars[2]);
} else {
    V_CALL(VGetArg(upenv, 23-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D434_k335, env)}),
      upenv->vars[1]);
}
 }
}
static void _V10_Dloop_D434_lambda67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D434_lambda67, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D434_lambda67, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.null?.194 22 14) (close _V10_Dloop_D434_k334) (bruijn ##.mydecls.435 0 1))
    V_CALL(VGetArg(upenv, 22-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D434_k334, env)}),
      _var1);
 }
}
static void _V10_Dunwrap__declares_D228_k341(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D228_k341, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__declares_D228_k341, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.104.421 19 1) (bruijn ##.k.1116 14 0) (bruijn ##.x.1122 0 0))
    V_CALL(VGetArg(upenv, 19-1, 1), runtime,
      VGetArg(upenv, 14-1, 0),
      _var0);
 }
}
static void _V10_Dunwrap__declares_D228_lambda66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__declares_D228_lambda66, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (letrec 1 ((close _V10_Dloop_D434_lambda67)) ((bruijn ##.loop.434 0 0) (close _V10_Dunwrap__declares_D228_k341) (##inline ##vcore.cdr (bruijn ##.expr.110.427 6 0)) (bruijn ##.table.432 1 1)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D434_lambda67, env)});
    V_CALL(env->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__declares_D228_k341, env)}),
      VInlineCdr2(runtime,
        VGetArg(upenv, 6-1, 0)),
      upenv->vars[1]);
    }
 }
}
static void _V10_Dunwrap__declares_D228_k333(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D228_k333, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__declares_D228_k333, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dunwrap__declares_D228_lambda66) (bruijn ##.x.1123 2 0) (bruijn ##.x.1124 1 0) (bruijn ##.x.1125 0 0))
    V_CALL_FUNC(_V10_Dunwrap__declares_D228_lambda66, env, runtime,
      upenv->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dunwrap__declares_D228_k332(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D228_k332, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__declares_D228_k332, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reduce-type.224 17 2) (close _V10_Dunwrap__declares_D228_k333) (bruijn ##.ret.428 2 0) (bruijn ##.table.420 16 2) #t)
    V_CALL(VGetArg(upenv, 17-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__declares_D228_k333, env)}),
      upenv->up->vars[0],
      VGetArg(upenv, 16-1, 2),
      VEncodeBool(true));
 }
}
static void _V10_Dunwrap__declares_D228_k331(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D228_k331, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__declares_D228_k331, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.unwrap-enums.227 16 5) (close _V10_Dunwrap__declares_D228_k332) (bruijn ##.ret.428 1 0) (bruijn ##.table.420 15 2))
    V_CALL(VGetArg(upenv, 16-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__declares_D228_k332, env)}),
      upenv->vars[0],
      VGetArg(upenv, 15-1, 2));
 }
}
static void _V10_Dunwrap__declares_D228_k330(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D228_k330, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__declares_D228_k330, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.member.187 16 7) (close _V10_Dunwrap__declares_D228_k331) (##string ##.string.1667) (bruijn ##.ret.428 0 0))
    V_CALL(VGetArg(upenv, 16-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__declares_D228_k331, env)}),
      VEncodePointer(&_V10_Dstring_D1667.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V10_Dunwrap__declares_D228_k329(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D228_k329, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__declares_D228_k329, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.110.427 0 0)) ((close _V10_Dunwrap__declares_D228_k330) (##inline ##vcore.car (bruijn ##.expr.110.427 0 0))) ((bruijn ##.k.1116 7 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dunwrap__declares_D228_k330, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dunwrap__declares_D228_k328(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D228_k328, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__declares_D228_k328, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1120 0 0) ((close _V10_Dunwrap__declares_D228_k329) (##inline ##vcore.cdr (bruijn ##.expr.109.426 2 0))) ((bruijn ##.k.1116 6 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dunwrap__declares_D228_k329, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dunwrap__declares_D228_k326(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D228_k326, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__declares_D228_k326, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dunwrap__declares_D228_k327) (close _V10_Dunwrap__declares_D228_k328))
    V_CALL_FUNC(_V10_Dunwrap__declares_D228_k327, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__declares_D228_k328, env)}));
 }
}
static void _V10_Dunwrap__declares_D228_k325(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D228_k325, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__declares_D228_k325, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.109.426 0 0)) (##vcore.string? (close _V10_Dunwrap__declares_D228_k326) (##inline ##vcore.car (bruijn ##.expr.109.426 0 0))) ((bruijn ##.k.1116 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(VStringP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__declares_D228_k326, env)}),
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dunwrap__declares_D228_k324(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D228_k324, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__declares_D228_k324, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.108.425 0 0)) ((close _V10_Dunwrap__declares_D228_k325) (##inline ##vcore.car (bruijn ##.expr.108.425 0 0))) ((bruijn ##.k.1116 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dunwrap__declares_D228_k325, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dunwrap__declares_D228_k323(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D228_k323, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__declares_D228_k323, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1117 0 0) ((close _V10_Dunwrap__declares_D228_k324) (##inline ##vcore.cdr (bruijn ##.expr.107.424 3 0))) ((bruijn ##.k.1116 2 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dunwrap__declares_D228_k324, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->up->vars[0]));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dunwrap__declares_D228_k321(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D228_k321, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__declares_D228_k321, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dunwrap__declares_D228_k322) (close _V10_Dunwrap__declares_D228_k323))
    V_CALL_FUNC(_V10_Dunwrap__declares_D228_k322, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__declares_D228_k323, env)}));
 }
}
static void _V10_Dunwrap__declares_D228_k320(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D228_k320, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__declares_D228_k320, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.107.424 1 0)) (##vcore.string? (close _V10_Dunwrap__declares_D228_k321) (##inline ##vcore.car (bruijn ##.expr.107.424 1 0))) ((bruijn ##.k.1116 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(VStringP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__declares_D228_k321, env)}),
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dunwrap__declares_D228_k342(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D228_k342, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__declares_D228_k342, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.error.221 8 41) (bruijn ##.k.1112 5 0) (##string ##.string.1652))
    V_CALL(VGetArg(upenv, 8-1, 41), runtime,
      VGetArg(upenv, 5-1, 0),
      VEncodePointer(&_V10_Dstring_D1652.sym, VPOINTER_OTHER));
 }
}
static void _V10_Dunwrap__declares_D228_lambda65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__declares_D228_lambda65, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dunwrap__declares_D228_k320) (close _V10_Dunwrap__declares_D228_k342))
    V_CALL_FUNC(_V10_Dunwrap__declares_D228_k320, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__declares_D228_k342, env)}));
 }
}
static void _V10_Dunwrap__declares_D228_k319(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D228_k319, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__declares_D228_k319, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dunwrap__declares_D228_lambda65) (bruijn ##.input.105.422 2 0))
    V_CALL_FUNC(_V10_Dunwrap__declares_D228_lambda65, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V10_Dunwrap__declares_D228_lambda64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__declares_D228_lambda64, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dunwrap__declares_D228_k315) (close _V10_Dunwrap__declares_D228_k319))
    V_CALL_FUNC(_V10_Dunwrap__declares_D228_k315, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__declares_D228_k319, env)}));
 }
}
static void _V10_Dunwrap__declares_D228_lambda63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__declares_D228_lambda63, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dunwrap__declares_D228_lambda64) (bruijn ##.input.105.422 0 0))
    V_CALL_FUNC(_V10_Dunwrap__declares_D228_lambda64, env, runtime,
      _var0);
 }
}
static void _V10_Dunwrap__declares_D228_lambda62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D228_lambda62, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__declares_D228_lambda62, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dunwrap__declares_D228_lambda63) (bruijn ##.parse.419 1 1))
    V_CALL_FUNC(_V10_Dunwrap__declares_D228_lambda63, env, runtime,
      upenv->vars[1]);
 }
}
static void _V10_Dunwrap__declares_D228_lambda61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D228_lambda61, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__declares_D228_lambda61, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.call/cc.218 2 38) (bruijn ##.k.1111 0 0) (close _V10_Dunwrap__declares_D228_lambda62))
    V_CALL(upenv->up->vars[38], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__declares_D228_lambda62, env)}));
 }
}
static void _V10_Dduplicate__mismatch_D439_k347(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dduplicate__mismatch_D439_k347, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dduplicate__mismatch_D439_k347, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.duplicate-mismatch.439 6 0) (bruijn ##.k.1153 5 0) (bruijn ##.x.440 5 1) (bruijn ##.entry.441 5 2) (bruijn ##.x.1156 0 0) (bruijn ##.err-proc.443 5 4))
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VGetArg(upenv, 5-1, 0),
      VGetArg(upenv, 5-1, 1),
      VGetArg(upenv, 5-1, 2),
      _var0,
      VGetArg(upenv, 5-1, 4));
 }
}
static void _V10_Dduplicate__mismatch_D439_k351(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dduplicate__mismatch_D439_k351, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dduplicate__mismatch_D439_k351, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.err-proc.443 8 4) (bruijn ##.k.1153 8 0) (bruijn ##.x.1158 0 0))
    V_CALL(VGetArg(upenv, 8-1, 4), runtime,
      VGetArg(upenv, 8-1, 0),
      _var0);
 }
}
static void _V10_Dduplicate__mismatch_D439_k350(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dduplicate__mismatch_D439_k350, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dduplicate__mismatch_D439_k350, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1157 0 0) ((bruijn ##.car.214 11 34) (close _V10_Dduplicate__mismatch_D439_k351) (bruijn ##.table.442 7 3)) ((bruijn ##.k.1153 7 0) #t))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 11-1, 34), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dduplicate__mismatch_D439_k351, env)}),
      VGetArg(upenv, 7-1, 3));
} else {
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeBool(true));
}
 }
}
static void _V10_Dduplicate__mismatch_D439_k349(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dduplicate__mismatch_D439_k349, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dduplicate__mismatch_D439_k349, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.not.202 10 22) (close _V10_Dduplicate__mismatch_D439_k350) (bruijn ##.x.1159 0 0))
    V_CALL(VGetArg(upenv, 10-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dduplicate__mismatch_D439_k350, env)}),
      _var0);
 }
}
static void _V10_Dduplicate__mismatch_D439_k348(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dduplicate__mismatch_D439_k348, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dduplicate__mismatch_D439_k348, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.equal?.220 9 40) (close _V10_Dduplicate__mismatch_D439_k349) (bruijn ##.entry.441 5 2) (bruijn ##.x.1160 0 0))
    V_CALL(VGetArg(upenv, 9-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dduplicate__mismatch_D439_k349, env)}),
      VGetArg(upenv, 5-1, 2),
      _var0);
 }
}
static void _V10_Dduplicate__mismatch_D439_k346(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dduplicate__mismatch_D439_k346, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dduplicate__mismatch_D439_k346, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1155 0 0) ((bruijn ##.cdr.212 8 32) (close _V10_Dduplicate__mismatch_D439_k347) (bruijn ##.table.442 4 3)) ((bruijn ##.car.214 8 34) (close _V10_Dduplicate__mismatch_D439_k348) (bruijn ##.table.442 4 3)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 8-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dduplicate__mismatch_D439_k347, env)}),
      upenv->up->up->up->vars[3]);
} else {
    V_CALL(VGetArg(upenv, 8-1, 34), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dduplicate__mismatch_D439_k348, env)}),
      upenv->up->up->up->vars[3]);
}
 }
}
static void _V10_Dduplicate__mismatch_D439_k345(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dduplicate__mismatch_D439_k345, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dduplicate__mismatch_D439_k345, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.not.202 7 22) (close _V10_Dduplicate__mismatch_D439_k346) (bruijn ##.x.1161 0 0))
    V_CALL(VGetArg(upenv, 7-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dduplicate__mismatch_D439_k346, env)}),
      _var0);
 }
}
static void _V10_Dduplicate__mismatch_D439_k344(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dduplicate__mismatch_D439_k344, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dduplicate__mismatch_D439_k344, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.eqv?.211 6 31) (close _V10_Dduplicate__mismatch_D439_k345) (bruijn ##.x.440 2 1) (bruijn ##.x.1162 0 0))
    V_CALL(VGetArg(upenv, 6-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dduplicate__mismatch_D439_k345, env)}),
      upenv->up->vars[1],
      _var0);
 }
}
static void _V10_Dduplicate__mismatch_D439_k343(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dduplicate__mismatch_D439_k343, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dduplicate__mismatch_D439_k343, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1154 0 0) ((bruijn ##.k.1153 1 0) #f) ((bruijn ##.cadar.188 5 8) (close _V10_Dduplicate__mismatch_D439_k344) (bruijn ##.table.442 1 3)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
} else {
    V_CALL(VGetArg(upenv, 5-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dduplicate__mismatch_D439_k344, env)}),
      upenv->vars[3]);
}
 }
}
static void _V10_Dduplicate__mismatch_D439_lambda69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 if(argc != 5) {
  VErrorC(runtime, "Not enough arguments to _V10_Dduplicate__mismatch_D439_lambda69, got ~D~N"
  "-- expected 5~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dduplicate__mismatch_D439_lambda69, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 5, 5, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // ((bruijn ##.null?.194 4 14) (close _V10_Dduplicate__mismatch_D439_k343) (bruijn ##.table.442 0 3))
    V_CALL(upenv->up->up->up->vars[14], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dduplicate__mismatch_D439_k343, env)}),
      _var3);
 }
}
static void _V10_Dtable___Gdefines_D229_k363(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D229_k363, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D229_k363, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.table->defines.229 16 7) (bruijn ##.k.1210 1 0) (bruijn ##.x.1211 0 0) (bruijn ##.acc.438 15 2))
    V_CALL(VGetArg(upenv, 16-1, 7), runtime,
      upenv->vars[0],
      _var0,
      VGetArg(upenv, 15-1, 2));
 }
}
static void _V10_Dtable___Gdefines_D229_k366(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D229_k366, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D229_k366, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.table->defines.229 18 7) (bruijn ##.k.1210 3 0) (bruijn ##.x.1212 2 0) (bruijn ##.x.1213 0 0))
    V_CALL(VGetArg(upenv, 18-1, 7), runtime,
      upenv->up->up->vars[0],
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Dtable___Gdefines_D229_k365(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D229_k365, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D229_k365, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.200 18 20) (close _V10_Dtable___Gdefines_D229_k366) (##inline ##vcore.cons 'define (##inline ##vcore.cons (bruijn ##.name.448 7 0) (##inline ##vcore.cons (##inline ##vcore.cons '##foreign.function (##inline ##vcore.cons '(##string ##.string.1668) (##inline ##vcore.cons '(##string ##.string.1669) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.115.449 6 0)) (##inline ##vcore.cons (bruijn ##.x.1222 0 0) (##inline ##vcore.cdr (bruijn ##.expr.115.449 6 0))))))) '()))) (bruijn ##.acc.438 16 2))
    V_CALL(VGetArg(upenv, 18-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D229_k366, env)}),
      VInlineCons2(runtime,
        _V0define,
        VInlineCons2(runtime,
        VGetArg(upenv, 7-1, 0),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10foreign_Dfunction,
        VInlineCons2(runtime,
        VEncodePointer(&_V10_Dstring_D1668.sym, VPOINTER_OTHER),
        VInlineCons2(runtime,
        VEncodePointer(&_V10_Dstring_D1669.sym, VPOINTER_OTHER),
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(upenv, 6-1, 0)),
        VInlineCons2(runtime,
        _var0,
        VInlineCdr2(runtime,
        VGetArg(upenv, 6-1, 0))))))),
        VNULL))),
      VGetArg(upenv, 16-1, 2));
 }
}
static void _V10_Dtable___Gdefines_D229_k364(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D229_k364, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D229_k364, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.symbol->string.189 17 9) (close _V10_Dtable___Gdefines_D229_k365) (bruijn ##.name.448 6 0))
    V_CALL(VGetArg(upenv, 17-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D229_k365, env)}),
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V10_Dtable___Gdefines_D229_k362(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D229_k362, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D229_k362, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1209 1 0) ((bruijn ##.cdr.212 16 32) (close _V10_Dtable___Gdefines_D229_k363) (bruijn ##.table.437 14 1)) ((bruijn ##.cdr.212 16 32) (close _V10_Dtable___Gdefines_D229_k364) (bruijn ##.table.437 14 1)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 16-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D229_k363, env)}),
      VGetArg(upenv, 14-1, 1));
} else {
    V_CALL(VGetArg(upenv, 16-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D229_k364, env)}),
      VGetArg(upenv, 14-1, 1));
}
 }
}
static void _V10_Dtable___Gdefines_D229_k367(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D229_k367, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D229_k367, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.111.444 11 1) (bruijn ##.k.1204 8 0) (bruijn ##.x.1208 0 0))
    V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      VGetArg(upenv, 8-1, 0),
      _var0);
 }
}
static void _V10_Dtable___Gdefines_D229_k361(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D229_k361, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D229_k361, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dtable___Gdefines_D229_k362) (close _V10_Dtable___Gdefines_D229_k367))
    V_CALL_FUNC(_V10_Dtable___Gdefines_D229_k362, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D229_k367, env)}));
 }
}
static void _V10_Dtable___Gdefines_D229_k368(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D229_k368, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D229_k368, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.compiler-error.204 16 24) (bruijn ##.k.1225 1 0) (##string ##.string.1670) (bruijn ##.x.1226 0 0) (bruijn ##.conflict.452 1 1))
    V_CALL(VGetArg(upenv, 16-1, 24), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10_Dstring_D1670.sym, VPOINTER_OTHER),
      _var0,
      upenv->vars[1]);
 }
}
static void _V10_Dtable___Gdefines_D229_lambda72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D229_lambda72, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D229_lambda72, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.car.214 15 34) (close _V10_Dtable___Gdefines_D229_k368) (bruijn ##.table.437 13 1))
    V_CALL(VGetArg(upenv, 15-1, 34), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D229_k368, env)}),
      VGetArg(upenv, 13-1, 1));
 }
}
static void _V10_Dtable___Gdefines_D229_k360(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D229_k360, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D229_k360, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.duplicate-mismatch.439 11 0) (close _V10_Dtable___Gdefines_D229_k361) (bruijn ##.name.448 3 0) (bruijn ##.x.1223 1 0) (bruijn ##.x.1224 0 0) (close _V10_Dtable___Gdefines_D229_lambda72))
    V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D229_k361, env)}),
      upenv->up->up->vars[0],
      upenv->vars[0],
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D229_lambda72, env)}));
 }
}
static void _V10_Dtable___Gdefines_D229_k359(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D229_k359, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D229_k359, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.212 13 32) (close _V10_Dtable___Gdefines_D229_k360) (bruijn ##.table.437 11 1))
    V_CALL(VGetArg(upenv, 13-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D229_k360, env)}),
      VGetArg(upenv, 11-1, 1));
 }
}
static void _V10_Dtable___Gdefines_D229_k358(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D229_k358, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D229_k358, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.115.449 0 0)) ((bruijn ##.car.214 12 34) (close _V10_Dtable___Gdefines_D229_k359) (bruijn ##.table.437 10 1)) ((bruijn ##.k.1204 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL(VGetArg(upenv, 12-1, 34), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D229_k359, env)}),
      VGetArg(upenv, 10-1, 1));
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dtable___Gdefines_D229_k357(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D229_k357, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D229_k357, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dtable___Gdefines_D229_k358) (##inline ##vcore.cdr (bruijn ##.expr.114.447 1 0)))
    V_CALL_FUNC(_V10_Dtable___Gdefines_D229_k358, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
 }
}
static void _V10_Dtable___Gdefines_D229_k356(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D229_k356, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D229_k356, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.114.447 0 0)) ((close _V10_Dtable___Gdefines_D229_k357) (##inline ##vcore.car (bruijn ##.expr.114.447 0 0))) ((bruijn ##.k.1204 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dtable___Gdefines_D229_k357, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dtable___Gdefines_D229_k355(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D229_k355, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D229_k355, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1205 0 0) ((close _V10_Dtable___Gdefines_D229_k356) (##inline ##vcore.cdr (bruijn ##.expr.113.446 2 0))) ((bruijn ##.k.1204 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dtable___Gdefines_D229_k356, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dtable___Gdefines_D229_k354(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D229_k354, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D229_k354, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.113.446 1 0)) ((bruijn ##.equal?.220 8 40) (close _V10_Dtable___Gdefines_D229_k355) 'function (##inline ##vcore.car (bruijn ##.expr.113.446 1 0))) ((bruijn ##.k.1204 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 8-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D229_k355, env)}),
      _V0function,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dtable___Gdefines_D229_k379(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D229_k379, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D229_k379, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.111.444 14 1) (bruijn ##.k.1186 9 0) (bruijn ##.x.1191 0 0))
    V_CALL(VGetArg(upenv, 14-1, 1), runtime,
      VGetArg(upenv, 9-1, 0),
      _var0);
 }
}
static void _V10_Dtable___Gdefines_D229_k378(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D229_k378, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D229_k378, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.table->defines.229 17 7) (close _V10_Dtable___Gdefines_D229_k379) (bruijn ##.x.1193 1 0) (bruijn ##.x.1194 0 0))
    V_CALL(VGetArg(upenv, 17-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D229_k379, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dtable___Gdefines_D229_k377(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D229_k377, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D229_k377, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.200 17 20) (close _V10_Dtable___Gdefines_D229_k378) (##inline ##vcore.cons 'define (##inline ##vcore.cons (bruijn ##.name.455 4 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.118.456 3 0)) '()))) (bruijn ##.acc.438 15 2))
    V_CALL(VGetArg(upenv, 17-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D229_k378, env)}),
      VInlineCons2(runtime,
        _V0define,
        VInlineCons2(runtime,
        upenv->up->up->up->vars[0],
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->up->up->vars[0]),
        VNULL))),
      VGetArg(upenv, 15-1, 2));
 }
}
static void _V10_Dtable___Gdefines_D229_k376(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D229_k376, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D229_k376, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.212 16 32) (close _V10_Dtable___Gdefines_D229_k377) (bruijn ##.table.437 14 1))
    V_CALL(VGetArg(upenv, 16-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D229_k377, env)}),
      VGetArg(upenv, 14-1, 1));
 }
}
static void _V10_Dtable___Gdefines_D229_k380(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D229_k380, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D229_k380, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.compiler-error.204 17 24) (bruijn ##.k.1199 1 0) (##string ##.string.1670) (bruijn ##.x.1200 0 0) (bruijn ##.conflict.458 1 1))
    V_CALL(VGetArg(upenv, 17-1, 24), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10_Dstring_D1670.sym, VPOINTER_OTHER),
      _var0,
      upenv->vars[1]);
 }
}
static void _V10_Dtable___Gdefines_D229_lambda74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D229_lambda74, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D229_lambda74, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.car.214 16 34) (close _V10_Dtable___Gdefines_D229_k380) (bruijn ##.table.437 14 1))
    V_CALL(VGetArg(upenv, 16-1, 34), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D229_k380, env)}),
      VGetArg(upenv, 14-1, 1));
 }
}
static void _V10_Dtable___Gdefines_D229_k375(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D229_k375, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D229_k375, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.duplicate-mismatch.439 12 0) (close _V10_Dtable___Gdefines_D229_k376) (bruijn ##.name.455 2 0) #f (bruijn ##.x.1198 0 0) (close _V10_Dtable___Gdefines_D229_lambda74))
    V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D229_k376, env)}),
      upenv->up->vars[0],
      VEncodeBool(false),
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D229_lambda74, env)}));
 }
}
static void _V10_Dtable___Gdefines_D229_k374(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D229_k374, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D229_k374, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.118.456 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.118.456 0 0))) ((bruijn ##.cdr.212 14 32) (close _V10_Dtable___Gdefines_D229_k375) (bruijn ##.table.437 12 1)) ((bruijn ##.k.1186 4 0) #f)) ((bruijn ##.k.1186 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 14-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D229_k375, env)}),
      VGetArg(upenv, 12-1, 1));
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
static void _V10_Dtable___Gdefines_D229_k373(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D229_k373, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D229_k373, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dtable___Gdefines_D229_k374) (##inline ##vcore.cdr (bruijn ##.expr.117.454 1 0)))
    V_CALL_FUNC(_V10_Dtable___Gdefines_D229_k374, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
 }
}
static void _V10_Dtable___Gdefines_D229_k372(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D229_k372, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D229_k372, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.117.454 0 0)) ((close _V10_Dtable___Gdefines_D229_k373) (##inline ##vcore.car (bruijn ##.expr.117.454 0 0))) ((bruijn ##.k.1186 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dtable___Gdefines_D229_k373, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dtable___Gdefines_D229_k371(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D229_k371, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D229_k371, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1187 0 0) ((close _V10_Dtable___Gdefines_D229_k372) (##inline ##vcore.cdr (bruijn ##.expr.116.453 2 0))) ((bruijn ##.k.1186 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dtable___Gdefines_D229_k372, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dtable___Gdefines_D229_k370(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D229_k370, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D229_k370, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.116.453 1 0)) ((bruijn ##.equal?.220 10 40) (close _V10_Dtable___Gdefines_D229_k371) 'enum (##inline ##vcore.car (bruijn ##.expr.116.453 1 0))) ((bruijn ##.k.1186 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 10-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D229_k371, env)}),
      _V0enum,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dtable___Gdefines_D229_k390(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D229_k390, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D229_k390, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.111.444 15 1) (bruijn ##.k.1171 8 0) (bruijn ##.x.1176 0 0))
    V_CALL(VGetArg(upenv, 15-1, 1), runtime,
      VGetArg(upenv, 8-1, 0),
      _var0);
 }
}
static void _V10_Dtable___Gdefines_D229_k389(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D229_k389, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D229_k389, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.table->defines.229 18 7) (close _V10_Dtable___Gdefines_D229_k390) (bruijn ##.x.1178 0 0) (bruijn ##.acc.438 17 2))
    V_CALL(VGetArg(upenv, 18-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D229_k390, env)}),
      _var0,
      VGetArg(upenv, 17-1, 2));
 }
}
static void _V10_Dtable___Gdefines_D229_k388(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D229_k388, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D229_k388, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.212 18 32) (close _V10_Dtable___Gdefines_D229_k389) (bruijn ##.table.437 16 1))
    V_CALL(VGetArg(upenv, 18-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D229_k389, env)}),
      VGetArg(upenv, 16-1, 1));
 }
}
static void _V10_Dtable___Gdefines_D229_k391(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D229_k391, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D229_k391, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.compiler-error.204 19 24) (bruijn ##.k.1181 1 0) (##string ##.string.1670) (bruijn ##.x.1182 0 0) (bruijn ##.conflict.464 1 1))
    V_CALL(VGetArg(upenv, 19-1, 24), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10_Dstring_D1670.sym, VPOINTER_OTHER),
      _var0,
      upenv->vars[1]);
 }
}
static void _V10_Dtable___Gdefines_D229_lambda76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D229_lambda76, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D229_lambda76, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.car.214 18 34) (close _V10_Dtable___Gdefines_D229_k391) (bruijn ##.table.437 16 1))
    V_CALL(VGetArg(upenv, 18-1, 34), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D229_k391, env)}),
      VGetArg(upenv, 16-1, 1));
 }
}
static void _V10_Dtable___Gdefines_D229_k387(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D229_k387, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D229_k387, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.duplicate-mismatch.439 14 0) (close _V10_Dtable___Gdefines_D229_k388) (##inline ##vcore.car (bruijn ##.expr.120.460 3 0)) (bruijn ##.x.1179 1 0) (bruijn ##.x.1180 0 0) (close _V10_Dtable___Gdefines_D229_lambda76))
    V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D229_k388, env)}),
      VInlineCar2(runtime,
        upenv->up->up->vars[0]),
      upenv->vars[0],
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D229_lambda76, env)}));
 }
}
static void _V10_Dtable___Gdefines_D229_k386(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D229_k386, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D229_k386, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.212 16 32) (close _V10_Dtable___Gdefines_D229_k387) (bruijn ##.table.437 14 1))
    V_CALL(VGetArg(upenv, 16-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D229_k387, env)}),
      VGetArg(upenv, 14-1, 1));
 }
}
static void _V10_Dtable___Gdefines_D229_k385(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D229_k385, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D229_k385, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.121.462 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.121.462 0 0))) ((bruijn ##.car.214 15 34) (close _V10_Dtable___Gdefines_D229_k386) (bruijn ##.table.437 13 1)) ((bruijn ##.k.1171 3 0) #f)) ((bruijn ##.k.1171 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 15-1, 34), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D229_k386, env)}),
      VGetArg(upenv, 13-1, 1));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dtable___Gdefines_D229_k384(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D229_k384, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D229_k384, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.120.460 0 0)) ((close _V10_Dtable___Gdefines_D229_k385) (##inline ##vcore.cdr (bruijn ##.expr.120.460 0 0))) ((bruijn ##.k.1171 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dtable___Gdefines_D229_k385, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dtable___Gdefines_D229_k383(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D229_k383, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D229_k383, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1172 0 0) ((close _V10_Dtable___Gdefines_D229_k384) (##inline ##vcore.cdr (bruijn ##.expr.119.459 2 0))) ((bruijn ##.k.1171 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dtable___Gdefines_D229_k384, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dtable___Gdefines_D229_k382(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D229_k382, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D229_k382, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.119.459 1 0)) ((bruijn ##.equal?.220 12 40) (close _V10_Dtable___Gdefines_D229_k383) 'typedef (##inline ##vcore.car (bruijn ##.expr.119.459 1 0))) ((bruijn ##.k.1171 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 12-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D229_k383, env)}),
      _V0typedef,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dtable___Gdefines_D229_k394(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D229_k394, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D229_k394, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.111.444 9 1) (bruijn ##.k.1164 9 0) (bruijn ##.x.1168 0 0))
    V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      VGetArg(upenv, 9-1, 0),
      _var0);
 }
}
static void _V10_Dtable___Gdefines_D229_k393(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D229_k393, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D229_k393, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.compiler-error.204 13 24) (close _V10_Dtable___Gdefines_D229_k394) (##string ##.string.1671) (bruijn ##.x.1169 0 0))
    V_CALL(VGetArg(upenv, 13-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D229_k394, env)}),
      VEncodePointer(&_V10_Dstring_D1671.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V10_Dtable___Gdefines_D229_k392(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D229_k392, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D229_k392, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.car.214 12 34) (close _V10_Dtable___Gdefines_D229_k393) (bruijn ##.table.437 10 1))
    V_CALL(VGetArg(upenv, 12-1, 34), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D229_k393, env)}),
      VGetArg(upenv, 10-1, 1));
 }
}
static void _V10_Dtable___Gdefines_D229_lambda75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D229_lambda75, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dtable___Gdefines_D229_k382) (close _V10_Dtable___Gdefines_D229_k392))
    V_CALL_FUNC(_V10_Dtable___Gdefines_D229_k382, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D229_k392, env)}));
 }
}
static void _V10_Dtable___Gdefines_D229_k381(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D229_k381, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D229_k381, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dtable___Gdefines_D229_lambda75) (bruijn ##.input.112.445 4 0))
    V_CALL_FUNC(_V10_Dtable___Gdefines_D229_lambda75, env, runtime,
      upenv->up->up->up->vars[0]);
 }
}
static void _V10_Dtable___Gdefines_D229_lambda73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D229_lambda73, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dtable___Gdefines_D229_k370) (close _V10_Dtable___Gdefines_D229_k381))
    V_CALL_FUNC(_V10_Dtable___Gdefines_D229_k370, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D229_k381, env)}));
 }
}
static void _V10_Dtable___Gdefines_D229_k369(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D229_k369, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D229_k369, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dtable___Gdefines_D229_lambda73) (bruijn ##.input.112.445 2 0))
    V_CALL_FUNC(_V10_Dtable___Gdefines_D229_lambda73, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V10_Dtable___Gdefines_D229_lambda71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D229_lambda71, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dtable___Gdefines_D229_k354) (close _V10_Dtable___Gdefines_D229_k369))
    V_CALL_FUNC(_V10_Dtable___Gdefines_D229_k354, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D229_k369, env)}));
 }
}
static void _V10_Dtable___Gdefines_D229_k353(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D229_k353, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D229_k353, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dtable___Gdefines_D229_lambda71) (bruijn ##.input.112.445 0 0))
    V_CALL_FUNC(_V10_Dtable___Gdefines_D229_lambda71, env, runtime,
      _var0);
 }
}
static void _V10_Dtable___Gdefines_D229_lambda70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D229_lambda70, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D229_lambda70, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.car.214 5 34) (close _V10_Dtable___Gdefines_D229_k353) (bruijn ##.table.437 3 1))
    V_CALL(VGetArg(upenv, 5-1, 34), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D229_k353, env)}),
      upenv->up->up->vars[1]);
 }
}
static void _V10_Dtable___Gdefines_D229_k352(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D229_k352, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D229_k352, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1163 0 0) ((bruijn ##.k.1152 2 0) (bruijn ##.acc.438 2 2)) ((bruijn ##.call/cc.218 4 38) (bruijn ##.k.1152 2 0) (close _V10_Dtable___Gdefines_D229_lambda70)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->vars[0], runtime,
      upenv->up->vars[2]);
} else {
    V_CALL(upenv->up->up->up->vars[38], runtime,
      upenv->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D229_lambda70, env)}));
}
 }
}
static void _V10_Dtable___Gdefines_D229_lambda68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D229_lambda68, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D229_lambda68, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (letrec 1 ((close _V10_Dduplicate__mismatch_D439_lambda69)) ((bruijn ##.null?.194 3 14) (close _V10_Dtable___Gdefines_D229_k352) (bruijn ##.table.437 1 1)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dduplicate__mismatch_D439_lambda69, env)});
    V_CALL(upenv->up->up->vars[14], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D229_k352, env)}),
      upenv->vars[1]);
    }
 }
}
static void _V10_Ddeep__copy_D230_k400(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddeep__copy_D230_k400, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddeep__copy_D230_k400, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.cons.200 8 20) (bruijn ##.k.1228 6 0) (bruijn ##.x.1231 2 0) (bruijn ##.x.1232 0 0))
    V_CALL(VGetArg(upenv, 8-1, 20), runtime,
      VGetArg(upenv, 6-1, 0),
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Ddeep__copy_D230_k399(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddeep__copy_D230_k399, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddeep__copy_D230_k399, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.deep-copy.230 6 8) (close _V10_Ddeep__copy_D230_k400) (bruijn ##.x.1233 0 0))
    V_CALL(VGetArg(upenv, 6-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddeep__copy_D230_k400, env)}),
      _var0);
 }
}
static void _V10_Ddeep__copy_D230_k398(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddeep__copy_D230_k398, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddeep__copy_D230_k398, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.212 6 32) (close _V10_Ddeep__copy_D230_k399) (bruijn ##.x.465 4 1))
    V_CALL(VGetArg(upenv, 6-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddeep__copy_D230_k399, env)}),
      upenv->up->up->up->vars[1]);
 }
}
static void _V10_Ddeep__copy_D230_k397(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddeep__copy_D230_k397, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddeep__copy_D230_k397, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.deep-copy.230 4 8) (close _V10_Ddeep__copy_D230_k398) (bruijn ##.x.1234 0 0))
    V_CALL(upenv->up->up->up->vars[8], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddeep__copy_D230_k398, env)}),
      _var0);
 }
}
static void _V10_Ddeep__copy_D230_k396(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddeep__copy_D230_k396, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddeep__copy_D230_k396, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1230 0 0) ((bruijn ##.car.214 4 34) (close _V10_Ddeep__copy_D230_k397) (bruijn ##.x.465 2 1)) ((bruijn ##.k.1228 2 0) (bruijn ##.x.465 2 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->up->vars[34], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddeep__copy_D230_k397, env)}),
      upenv->up->vars[1]);
} else {
    V_CALL(upenv->up->vars[0], runtime,
      upenv->up->vars[1]);
}
 }
}
static void _V10_Ddeep__copy_D230_k395(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddeep__copy_D230_k395, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddeep__copy_D230_k395, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1229 0 0) ((bruijn ##.string-copy.190 3 10) (bruijn ##.k.1228 1 0) (bruijn ##.x.465 1 1)) ((bruijn ##.pair?.215 3 35) (close _V10_Ddeep__copy_D230_k396) (bruijn ##.x.465 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->vars[10], runtime,
      upenv->vars[0],
      upenv->vars[1]);
} else {
    V_CALL(upenv->up->up->vars[35], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddeep__copy_D230_k396, env)}),
      upenv->vars[1]);
}
 }
}
static void _V10_Ddeep__copy_D230_lambda77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddeep__copy_D230_lambda77, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddeep__copy_D230_lambda77, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.string?.203 2 23) (close _V10_Ddeep__copy_D230_k395) (bruijn ##.x.465 0 1))
    V_CALL(upenv->up->vars[23], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddeep__copy_D230_k395, env)}),
      _var1);
 }
}
static void _V10_Dis__one__decl_D469_k405(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D469_k405, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dis__one__decl_D469_k405, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1273 1 0) (##vcore.blob=? (bruijn ##.k.1274 0 0) (##string ##.string.1665) (##inline ##vcore.car (bruijn ##.expr.134.473 3 0))) ((bruijn ##.k.1274 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL_FUNC(VBlobEqv2, NULL, runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D1665.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        upenv->up->up->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dis__one__decl_D469_k410(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D469_k410, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dis__one__decl_D469_k410, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1269 1 0) (##vcore.blob=? (bruijn ##.k.1270 0 0) (##string ##.string.1666) (##inline ##vcore.car (bruijn ##.expr.136.475 2 0))) ((bruijn ##.k.1270 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL_FUNC(VBlobEqv2, NULL, runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D1666.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dis__one__decl_D469_k414(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D469_k414, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dis__one__decl_D469_k414, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.132.471 12 1) (bruijn ##.k.1257 9 0) (bruijn ##.x.1266 0 0))
    V_CALL(VGetArg(upenv, 12-1, 1), runtime,
      VGetArg(upenv, 9-1, 0),
      _var0);
 }
}
static void _V10_Dis__one__decl_D469_k413(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D469_k413, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dis__one__decl_D469_k413, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.138.478 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.138.478 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.135.474 5 0))) ((bruijn ##.cdadr.191 18 11) (close _V10_Dis__one__decl_D469_k414) (bruijn ##.parse.470 12 1)) ((bruijn ##.k.1257 8 0) #f)) ((bruijn ##.k.1257 8 0) #f)) ((bruijn ##.k.1257 8 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        VGetArg(upenv, 5-1, 0))))) {
    V_CALL(VGetArg(upenv, 18-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dis__one__decl_D469_k414, env)}),
      VGetArg(upenv, 12-1, 1));
} else {
    V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dis__one__decl_D469_k412(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D469_k412, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dis__one__decl_D469_k412, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.137.476 0 0)) ((close _V10_Dis__one__decl_D469_k413) (##inline ##vcore.cdr (bruijn ##.expr.137.476 0 0))) ((bruijn ##.k.1257 7 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dis__one__decl_D469_k413, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dis__one__decl_D469_k411(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D469_k411, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dis__one__decl_D469_k411, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1261 0 0) ((close _V10_Dis__one__decl_D469_k412) (##inline ##vcore.cdr (bruijn ##.expr.136.475 2 0))) ((bruijn ##.k.1257 6 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dis__one__decl_D469_k412, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dis__one__decl_D469_k409(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D469_k409, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dis__one__decl_D469_k409, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dis__one__decl_D469_k410) (close _V10_Dis__one__decl_D469_k411))
    V_CALL_FUNC(_V10_Dis__one__decl_D469_k410, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dis__one__decl_D469_k411, env)}));
 }
}
static void _V10_Dis__one__decl_D469_k408(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D469_k408, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dis__one__decl_D469_k408, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.136.475 0 0)) (##vcore.string? (close _V10_Dis__one__decl_D469_k409) (##inline ##vcore.car (bruijn ##.expr.136.475 0 0))) ((bruijn ##.k.1257 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(VStringP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dis__one__decl_D469_k409, env)}),
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dis__one__decl_D469_k407(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D469_k407, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dis__one__decl_D469_k407, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.135.474 0 0)) ((close _V10_Dis__one__decl_D469_k408) (##inline ##vcore.car (bruijn ##.expr.135.474 0 0))) ((bruijn ##.k.1257 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dis__one__decl_D469_k408, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dis__one__decl_D469_k406(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D469_k406, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dis__one__decl_D469_k406, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1258 0 0) ((close _V10_Dis__one__decl_D469_k407) (##inline ##vcore.cdr (bruijn ##.expr.134.473 3 0))) ((bruijn ##.k.1257 2 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dis__one__decl_D469_k407, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->up->vars[0]));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dis__one__decl_D469_k404(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D469_k404, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dis__one__decl_D469_k404, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dis__one__decl_D469_k405) (close _V10_Dis__one__decl_D469_k406))
    V_CALL_FUNC(_V10_Dis__one__decl_D469_k405, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dis__one__decl_D469_k406, env)}));
 }
}
static void _V10_Dis__one__decl_D469_k403(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D469_k403, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dis__one__decl_D469_k403, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.134.473 1 0)) (##vcore.string? (close _V10_Dis__one__decl_D469_k404) (##inline ##vcore.car (bruijn ##.expr.134.473 1 0))) ((bruijn ##.k.1257 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(VStringP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dis__one__decl_D469_k404, env)}),
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dis__one__decl_D469_k418(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D469_k418, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dis__one__decl_D469_k418, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1252 1 0) (##vcore.blob=? (bruijn ##.k.1253 0 0) (##string ##.string.1672) (##inline ##vcore.car (bruijn ##.expr.139.479 3 0))) ((bruijn ##.k.1253 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL_FUNC(VBlobEqv2, NULL, runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D1672.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        upenv->up->up->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dis__one__decl_D469_k422(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D469_k422, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dis__one__decl_D469_k422, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.132.471 10 1) (bruijn ##.k.1245 5 0) (bruijn ##.x.1250 0 0))
    V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V10_Dis__one__decl_D469_k421(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D469_k421, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dis__one__decl_D469_k421, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.141.482 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.141.482 0 0))) ((bruijn ##.cdr.212 16 32) (close _V10_Dis__one__decl_D469_k422) (bruijn ##.parse.470 10 1)) ((bruijn ##.k.1245 4 0) #f)) ((bruijn ##.k.1245 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 16-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dis__one__decl_D469_k422, env)}),
      VGetArg(upenv, 10-1, 1));
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
static void _V10_Dis__one__decl_D469_k420(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D469_k420, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dis__one__decl_D469_k420, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.140.480 0 0)) ((close _V10_Dis__one__decl_D469_k421) (##inline ##vcore.cdr (bruijn ##.expr.140.480 0 0))) ((bruijn ##.k.1245 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dis__one__decl_D469_k421, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dis__one__decl_D469_k419(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D469_k419, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dis__one__decl_D469_k419, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1246 0 0) ((close _V10_Dis__one__decl_D469_k420) (##inline ##vcore.cdr (bruijn ##.expr.139.479 3 0))) ((bruijn ##.k.1245 2 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dis__one__decl_D469_k420, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->up->vars[0]));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dis__one__decl_D469_k417(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D469_k417, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dis__one__decl_D469_k417, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dis__one__decl_D469_k418) (close _V10_Dis__one__decl_D469_k419))
    V_CALL_FUNC(_V10_Dis__one__decl_D469_k418, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dis__one__decl_D469_k419, env)}));
 }
}
static void _V10_Dis__one__decl_D469_k416(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D469_k416, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dis__one__decl_D469_k416, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.139.479 1 0)) (##vcore.string? (close _V10_Dis__one__decl_D469_k417) (##inline ##vcore.car (bruijn ##.expr.139.479 1 0))) ((bruijn ##.k.1245 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(VStringP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dis__one__decl_D469_k417, env)}),
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dis__one__decl_D469_k424(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D469_k424, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dis__one__decl_D469_k424, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.132.471 6 1) (bruijn ##.k.1239 6 0) #f)
    V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      VEncodeBool(false));
 }
}
static void _V10_Dis__one__decl_D469_k423(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D469_k423, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dis__one__decl_D469_k423, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.compiler-error.204 12 24) (close _V10_Dis__one__decl_D469_k424) (##string ##.string.1673) (bruijn ##.parse.470 6 1))
    V_CALL(VGetArg(upenv, 12-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dis__one__decl_D469_k424, env)}),
      VEncodePointer(&_V10_Dstring_D1673.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 1));
 }
}
static void _V10_Dis__one__decl_D469_lambda83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dis__one__decl_D469_lambda83, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dis__one__decl_D469_k416) (close _V10_Dis__one__decl_D469_k423))
    V_CALL_FUNC(_V10_Dis__one__decl_D469_k416, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dis__one__decl_D469_k423, env)}));
 }
}
static void _V10_Dis__one__decl_D469_k415(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D469_k415, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dis__one__decl_D469_k415, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dis__one__decl_D469_lambda83) (bruijn ##.input.133.472 2 0))
    V_CALL_FUNC(_V10_Dis__one__decl_D469_lambda83, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V10_Dis__one__decl_D469_lambda82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dis__one__decl_D469_lambda82, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dis__one__decl_D469_k403) (close _V10_Dis__one__decl_D469_k415))
    V_CALL_FUNC(_V10_Dis__one__decl_D469_k403, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dis__one__decl_D469_k415, env)}));
 }
}
static void _V10_Dis__one__decl_D469_lambda81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dis__one__decl_D469_lambda81, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dis__one__decl_D469_lambda82) (bruijn ##.input.133.472 0 0))
    V_CALL_FUNC(_V10_Dis__one__decl_D469_lambda82, env, runtime,
      _var0);
 }
}
static void _V10_Dis__one__decl_D469_lambda80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D469_lambda80, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dis__one__decl_D469_lambda80, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dis__one__decl_D469_lambda81) (bruijn ##.parse.470 1 1))
    V_CALL_FUNC(_V10_Dis__one__decl_D469_lambda81, env, runtime,
      upenv->vars[1]);
 }
}
static void _V10_Dis__one__decl_D469_lambda79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D469_lambda79, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dis__one__decl_D469_lambda79, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.call/cc.218 6 38) (bruijn ##.k.1238 0 0) (close _V10_Dis__one__decl_D469_lambda80))
    V_CALL(VGetArg(upenv, 6-1, 38), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dis__one__decl_D469_lambda80, env)}));
 }
}
static void _V10_Dvalidate__foreign__function_D231_k429(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D231_k429, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalidate__foreign__function_D231_k429, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##vcore.pair? (bruijn ##.expr.127.490 0 0)) (if (##inline ##vcore.pair? (##inline ##vcore.cdr (bruijn ##.expr.127.490 0 0))) ((bruijn ##.kk.122.483 7 1) (bruijn ##.k.1308 4 0) (bruijn ##.expr.466 11 1)) ((bruijn ##.k.1308 4 0) #f)) ((bruijn ##.k.1308 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlinePairP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 11-1, 1));
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
static void _V10_Dvalidate__foreign__function_D231_k428(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D231_k428, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalidate__foreign__function_D231_k428, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.126.488 0 0)) ((close _V10_Dvalidate__foreign__function_D231_k429) (##inline ##vcore.cdr (bruijn ##.expr.126.488 0 0))) ((bruijn ##.k.1308 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dvalidate__foreign__function_D231_k429, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dvalidate__foreign__function_D231_k427(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D231_k427, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalidate__foreign__function_D231_k427, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.125.486 0 0)) ((close _V10_Dvalidate__foreign__function_D231_k428) (##inline ##vcore.cdr (bruijn ##.expr.125.486 0 0))) ((bruijn ##.k.1308 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dvalidate__foreign__function_D231_k428, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dvalidate__foreign__function_D231_k426(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D231_k426, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalidate__foreign__function_D231_k426, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1309 0 0) ((close _V10_Dvalidate__foreign__function_D231_k427) (##inline ##vcore.cdr (bruijn ##.expr.124.485 2 0))) ((bruijn ##.k.1308 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dvalidate__foreign__function_D231_k427, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dvalidate__foreign__function_D231_k425(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D231_k425, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalidate__foreign__function_D231_k425, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.124.485 1 0)) ((bruijn ##.equal?.220 9 40) (close _V10_Dvalidate__foreign__function_D231_k426) '##foreign.function (##inline ##vcore.car (bruijn ##.expr.124.485 1 0))) ((bruijn ##.k.1308 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 9-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D231_k426, env)}),
      _V10foreign_Dfunction,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dvalidate__foreign__function_D231_k439(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D231_k439, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalidate__foreign__function_D231_k439, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1302 1 0) ((bruijn ##.compiler-error.204 19 24) (bruijn ##.k.1303 0 0) (##string ##.string.1674) (bruijn ##.lang.497 5 0)) ((bruijn ##.k.1303 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 19-1, 24), runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D1674.sym, VPOINTER_OTHER),
      VGetArg(upenv, 5-1, 0));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dvalidate__foreign__function_D231_k451(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D231_k451, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalidate__foreign__function_D231_k451, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.122.483 24 1) (bruijn ##.k.1282 19 0) (##inline ##vcore.cons '##foreign.function (##inline ##vcore.cons '(##string ##.string.1668) (##inline ##vcore.cons (bruijn ##.decl.499 14 0) (##inline ##vcore.cons (bruijn ##.x.1293 2 0) (##inline ##vcore.cons (bruijn ##.x.1295 1 0) (bruijn ##.x.1296 0 0)))))))
    V_CALL(VGetArg(upenv, 24-1, 1), runtime,
      VGetArg(upenv, 19-1, 0),
      VInlineCons2(runtime,
        _V10foreign_Dfunction,
        VInlineCons2(runtime,
        VEncodePointer(&_V10_Dstring_D1668.sym, VPOINTER_OTHER),
        VInlineCons2(runtime,
        VGetArg(upenv, 14-1, 0),
        VInlineCons2(runtime,
        upenv->up->vars[0],
        VInlineCons2(runtime,
        upenv->vars[0],
        _var0))))));
 }
}
static void _V10_Dvalidate__foreign__function_D231_k450(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D231_k450, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalidate__foreign__function_D231_k450, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdddr.193 29 13) (close _V10_Dvalidate__foreign__function_D231_k451) (bruijn ##.ff.501 2 0))
    V_CALL(VGetArg(upenv, 29-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D231_k451, env)}),
      upenv->up->vars[0]);
 }
}
static void _V10_Dvalidate__foreign__function_D231_k449(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D231_k449, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalidate__foreign__function_D231_k449, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cadr.206 28 26) (close _V10_Dvalidate__foreign__function_D231_k450) (bruijn ##.ff.501 1 0))
    V_CALL(VGetArg(upenv, 28-1, 26), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D231_k450, env)}),
      upenv->vars[0]);
 }
}
static void _V10_Dvalidate__foreign__function_D231_k448(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D231_k448, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalidate__foreign__function_D231_k448, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.caddr.192 27 12) (close _V10_Dvalidate__foreign__function_D231_k449) (bruijn ##.ff.501 0 0))
    V_CALL(VGetArg(upenv, 27-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D231_k449, env)}),
      _var0);
 }
}
static void _V10_Dvalidate__foreign__function_D231_k447(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D231_k447, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalidate__foreign__function_D231_k447, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.unwrap-function.226 25 4) (close _V10_Dvalidate__foreign__function_D231_k448) (bruijn ##.x.1297 1 0) (bruijn ##.x.1298 0 0) '())
    V_CALL(VGetArg(upenv, 25-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D231_k448, env)}),
      upenv->vars[0],
      _var0,
      VNULL);
 }
}
static void _V10_Dvalidate__foreign__function_D231_k446(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D231_k446, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalidate__foreign__function_D231_k446, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cadr.206 25 26) (close _V10_Dvalidate__foreign__function_D231_k447) (bruijn ##.parse.500 3 0))
    V_CALL(VGetArg(upenv, 25-1, 26), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D231_k447, env)}),
      upenv->up->up->vars[0]);
 }
}
static void _V10_Dvalidate__foreign__function_D231_k445(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D231_k445, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalidate__foreign__function_D231_k445, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reduce-type.224 23 2) (close _V10_Dvalidate__foreign__function_D231_k446) (bruijn ##.x.1299 0 0) '() #t)
    V_CALL(VGetArg(upenv, 23-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D231_k446, env)}),
      _var0,
      VNULL,
      VEncodeBool(true));
 }
}
static void _V10_Dvalidate__foreign__function_D231_k444(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D231_k444, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalidate__foreign__function_D231_k444, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.car.214 23 34) (close _V10_Dvalidate__foreign__function_D231_k445) (bruijn ##.parse.500 1 0))
    V_CALL(VGetArg(upenv, 23-1, 34), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D231_k445, env)}),
      upenv->vars[0]);
 }
}
static void _V10_Dvalidate__foreign__function_D231_k443(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D231_k443, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalidate__foreign__function_D231_k443, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.release-parse.468 17 1) (close _V10_Dvalidate__foreign__function_D231_k444))
    V_CALL(VGetArg(upenv, 17-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D231_k444, env)}));
 }
}
static void _V10_Dvalidate__foreign__function_D231_k442(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D231_k442, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalidate__foreign__function_D231_k442, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.is-one-decl.469 16 2) (close _V10_Dvalidate__foreign__function_D231_k443) (bruijn ##.x.1300 0 0))
    V_CALL(VGetArg(upenv, 16-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D231_k443, env)}),
      _var0);
 }
}
static void _V10_Dvalidate__foreign__function_D231_k441(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D231_k441, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalidate__foreign__function_D231_k441, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.deep-copy.230 19 8) (close _V10_Dvalidate__foreign__function_D231_k442) (bruijn ##.x.1301 0 0))
    V_CALL(VGetArg(upenv, 19-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D231_k442, env)}),
      _var0);
 }
}
static void _V10_Dvalidate__foreign__function_D231_k440(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D231_k440, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalidate__foreign__function_D231_k440, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.parse-decl-c.467 14 0) (close _V10_Dvalidate__foreign__function_D231_k441) (bruijn ##.decl.499 3 0))
    V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D231_k441, env)}),
      upenv->up->up->vars[0]);
 }
}
static void _V10_Dvalidate__foreign__function_D231_k438(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D231_k438, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalidate__foreign__function_D231_k438, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dvalidate__foreign__function_D231_k439) (close _V10_Dvalidate__foreign__function_D231_k440))
    V_CALL_FUNC(_V10_Dvalidate__foreign__function_D231_k439, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D231_k440, env)}));
 }
}
static void _V10_Dvalidate__foreign__function_D231_k437(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D231_k437, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalidate__foreign__function_D231_k437, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.not.202 17 22) (close _V10_Dvalidate__foreign__function_D231_k438) (bruijn ##.x.1304 0 0))
    V_CALL(VGetArg(upenv, 17-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D231_k438, env)}),
      _var0);
 }
}
static void _V10_Dvalidate__foreign__function_D231_k436(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D231_k436, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalidate__foreign__function_D231_k436, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.131.498 1 0))) ((bruijn ##.equal?.220 16 40) (close _V10_Dvalidate__foreign__function_D231_k437) (bruijn ##.lang.497 2 0) (##string ##.string.1668)) ((bruijn ##.k.1282 5 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    V_CALL(VGetArg(upenv, 16-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D231_k437, env)}),
      upenv->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1668.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dvalidate__foreign__function_D231_k435(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D231_k435, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalidate__foreign__function_D231_k435, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.131.498 0 0)) ((close _V10_Dvalidate__foreign__function_D231_k436) (##inline ##vcore.car (bruijn ##.expr.131.498 0 0))) ((bruijn ##.k.1282 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dvalidate__foreign__function_D231_k436, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dvalidate__foreign__function_D231_k434(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D231_k434, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalidate__foreign__function_D231_k434, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dvalidate__foreign__function_D231_k435) (##inline ##vcore.cdr (bruijn ##.expr.130.496 1 0)))
    V_CALL_FUNC(_V10_Dvalidate__foreign__function_D231_k435, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
 }
}
static void _V10_Dvalidate__foreign__function_D231_k433(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D231_k433, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalidate__foreign__function_D231_k433, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.130.496 0 0)) ((close _V10_Dvalidate__foreign__function_D231_k434) (##inline ##vcore.car (bruijn ##.expr.130.496 0 0))) ((bruijn ##.k.1282 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dvalidate__foreign__function_D231_k434, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dvalidate__foreign__function_D231_k432(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D231_k432, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalidate__foreign__function_D231_k432, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1283 0 0) ((close _V10_Dvalidate__foreign__function_D231_k433) (##inline ##vcore.cdr (bruijn ##.expr.129.495 2 0))) ((bruijn ##.k.1282 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dvalidate__foreign__function_D231_k433, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dvalidate__foreign__function_D231_k431(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D231_k431, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalidate__foreign__function_D231_k431, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.129.495 1 0)) ((bruijn ##.equal?.220 11 40) (close _V10_Dvalidate__foreign__function_D231_k432) '##foreign.function (##inline ##vcore.car (bruijn ##.expr.129.495 1 0))) ((bruijn ##.k.1282 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 11-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D231_k432, env)}),
      _V10foreign_Dfunction,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dvalidate__foreign__function_D231_k453(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D231_k453, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalidate__foreign__function_D231_k453, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.122.483 6 1) (bruijn ##.k.1277 6 0) (bruijn ##.x.1280 0 0))
    V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0);
 }
}
static void _V10_Dvalidate__foreign__function_D231_k452(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D231_k452, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalidate__foreign__function_D231_k452, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.compiler-error.204 11 24) (close _V10_Dvalidate__foreign__function_D231_k453) (##string ##.string.1675) (bruijn ##.expr.466 9 1))
    V_CALL(VGetArg(upenv, 11-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D231_k453, env)}),
      VEncodePointer(&_V10_Dstring_D1675.sym, VPOINTER_OTHER),
      VGetArg(upenv, 9-1, 1));
 }
}
static void _V10_Dvalidate__foreign__function_D231_lambda87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalidate__foreign__function_D231_lambda87, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dvalidate__foreign__function_D231_k431) (close _V10_Dvalidate__foreign__function_D231_k452))
    V_CALL_FUNC(_V10_Dvalidate__foreign__function_D231_k431, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D231_k452, env)}));
 }
}
static void _V10_Dvalidate__foreign__function_D231_k430(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D231_k430, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalidate__foreign__function_D231_k430, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dvalidate__foreign__function_D231_lambda87) (bruijn ##.input.123.484 2 0))
    V_CALL_FUNC(_V10_Dvalidate__foreign__function_D231_lambda87, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V10_Dvalidate__foreign__function_D231_lambda86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalidate__foreign__function_D231_lambda86, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dvalidate__foreign__function_D231_k425) (close _V10_Dvalidate__foreign__function_D231_k430))
    V_CALL_FUNC(_V10_Dvalidate__foreign__function_D231_k425, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D231_k430, env)}));
 }
}
static void _V10_Dvalidate__foreign__function_D231_lambda85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalidate__foreign__function_D231_lambda85, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dvalidate__foreign__function_D231_lambda86) (bruijn ##.input.123.484 0 0))
    V_CALL_FUNC(_V10_Dvalidate__foreign__function_D231_lambda86, env, runtime,
      _var0);
 }
}
static void _V10_Dvalidate__foreign__function_D231_lambda84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D231_lambda84, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalidate__foreign__function_D231_lambda84, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dvalidate__foreign__function_D231_lambda85) (bruijn ##.expr.466 4 1))
    V_CALL_FUNC(_V10_Dvalidate__foreign__function_D231_lambda85, env, runtime,
      upenv->up->up->up->vars[1]);
 }
}
static void _V10_Dvalidate__foreign__function_D231_k402(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D231_k402, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalidate__foreign__function_D231_k402, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 3 ((bruijn ##.x.1236 2 0) (bruijn ##.x.1237 1 0) (close _V10_Dis__one__decl_D469_lambda79)) ((bruijn ##.call/cc.218 5 38) (bruijn ##.k.1235 3 0) (close _V10_Dvalidate__foreign__function_D231_lambda84)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[3]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 3, 3, upenv);
    env->vars[0] = upenv->up->vars[0];
    env->vars[1] = upenv->vars[0];
    env->vars[2] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dis__one__decl_D469_lambda79, env)});
    V_CALL(VGetArg(upenv, 5-1, 38), runtime,
      upenv->up->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D231_lambda84, env)}));
    }
 }
}
static void _V10_Dvalidate__foreign__function_D231_k401(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D231_k401, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalidate__foreign__function_D231_k401, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.function (close _V10_Dvalidate__foreign__function_D231_k402) (##string ##.string.1676))
    V_CALL_FUNC(VFunction2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D231_k402, env)}),
      VEncodePointer(&_V10_Dstring_D1676.sym, VPOINTER_OTHER));
 }
}
static void _V10_Dvalidate__foreign__function_D231_lambda78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D231_lambda78, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalidate__foreign__function_D231_lambda78, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (##vcore.function (close _V10_Dvalidate__foreign__function_D231_k401) (##string ##.string.1677))
    V_CALL_FUNC(VFunction2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D231_k401, env)}),
      VEncodePointer(&_V10_Dstring_D1677.sym, VPOINTER_OTHER));
 }
}
static void _V10_Dfind__file_D232_k458(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__file_D232_k458, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfind__file_D232_k458, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.find-file.232 6 10) (bruijn ##.k.1315 5 0) (bruijn ##.file.502 5 1) (bruijn ##.x.1318 0 0))
    V_CALL(VGetArg(upenv, 6-1, 10), runtime,
      VGetArg(upenv, 5-1, 0),
      VGetArg(upenv, 5-1, 1),
      _var0);
 }
}
static void _V10_Dfind__file_D232_k457(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__file_D232_k457, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfind__file_D232_k457, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1317 0 0) ((bruijn ##.k.1315 4 0) (bruijn ##.path.504 1 0)) ((bruijn ##.cdr.212 6 32) (close _V10_Dfind__file_D232_k458) (bruijn ##.paths.503 4 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      upenv->vars[0]);
} else {
    V_CALL(VGetArg(upenv, 6-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__file_D232_k458, env)}),
      upenv->up->up->up->vars[2]);
}
 }
}
static void _V10_Dfind__file_D232_k456(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__file_D232_k456, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfind__file_D232_k456, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.file-exists?.195 5 15) (close _V10_Dfind__file_D232_k457) (bruijn ##.path.504 0 0) 4)
    V_CALL(VGetArg(upenv, 5-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__file_D232_k457, env)}),
      _var0,
      VEncodeInt(4l));
 }
}
static void _V10_Dfind__file_D232_k455(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__file_D232_k455, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfind__file_D232_k455, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.sprintf.205 4 25) (close _V10_Dfind__file_D232_k456) (##string ##.string.1679) (bruijn ##.x.1319 0 0) (bruijn ##.file.502 2 1))
    V_CALL(upenv->up->up->up->vars[25], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__file_D232_k456, env)}),
      VEncodePointer(&_V10_Dstring_D1679.sym, VPOINTER_OTHER),
      _var0,
      upenv->up->vars[1]);
 }
}
static void _V10_Dfind__file_D232_k454(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__file_D232_k454, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfind__file_D232_k454, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1316 0 0) ((bruijn ##.compiler-error.204 3 24) (bruijn ##.k.1315 1 0) (##string ##.string.1678) (bruijn ##.file.502 1 1)) ((bruijn ##.car.214 3 34) (close _V10_Dfind__file_D232_k455) (bruijn ##.paths.503 1 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->vars[24], runtime,
      upenv->vars[0],
      VEncodePointer(&_V10_Dstring_D1678.sym, VPOINTER_OTHER),
      upenv->vars[1]);
} else {
    V_CALL(upenv->up->up->vars[34], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__file_D232_k455, env)}),
      upenv->vars[2]);
}
 }
}
static void _V10_Dfind__file_D232_lambda88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__file_D232_lambda88, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfind__file_D232_lambda88, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.null?.194 2 14) (close _V10_Dfind__file_D232_k454) (bruijn ##.paths.503 0 2))
    V_CALL(upenv->up->vars[14], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__file_D232_k454, env)}),
      _var2);
 }
}
static void _V10_Dget__install__root_D233_k460(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__install__root_D233_k460, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__install__root_D233_k460, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.sprintf.205 4 25) (bruijn ##.k.1320 2 0) (##string ##.string.1680) (bruijn ##.x.1321 0 0))
    V_CALL(upenv->up->up->up->vars[25], runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1680.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V10_Dget__install__root_D233_k459(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__install__root_D233_k459, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__install__root_D233_k459, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.1322 0 0) (close _V10_Dget__install__root_D233_k460))
    V_CALL(_var0, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__install__root_D233_k460, env)}));
 }
}
static void _V10_Dget__install__root_D233_lambda89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__install__root_D233_lambda89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__install__root_D233_lambda89, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.install-root.196 2 16) ((bruijn ##.k.1320 0 0) (bruijn ##.install-root.196 2 16)) (##vcore.function (close _V10_Dget__install__root_D233_k459) (##string ##.string.1681)))
if(VDecodeBool(
upenv->up->vars[16])) {
    V_CALL(_var0, runtime,
      upenv->up->vars[16]);
} else {
    V_CALL_FUNC(VFunction2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__install__root_D233_k459, env)}),
      VEncodePointer(&_V10_Dstring_D1681.sym, VPOINTER_OTHER));
}
 }
}
static void _V10_Dmake__preprocess__command_D234_k462(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmake__preprocess__command_D234_k462, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmake__preprocess__command_D234_k462, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.sprintf.205 4 25) (bruijn ##.k.1323 2 0) (##string ##.string.1682) (bruijn ##.gcc-path.198 4 18) (bruijn ##.file.505 2 1) (bruijn ##.x.1325 0 0) (##string ##.string.1683) (bruijn ##.architecture.506 2 2))
    V_CALL(upenv->up->up->up->vars[25], runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1682.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[18],
      upenv->up->vars[1],
      _var0,
      VEncodePointer(&_V10_Dstring_D1683.sym, VPOINTER_OTHER),
      upenv->up->vars[2]);
 }
}
static void _V10_Dmake__preprocess__command_D234_k463(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmake__preprocess__command_D234_k463, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmake__preprocess__command_D234_k463, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.sprintf.205 4 25) (bruijn ##.k.1323 2 0) (##string ##.string.1684) (bruijn ##.gcc-path.198 4 18) (bruijn ##.file.505 2 1) (bruijn ##.x.1326 0 0) (##string ##.string.1683) (bruijn ##.architecture.506 2 2))
    V_CALL(upenv->up->up->up->vars[25], runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1684.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[18],
      upenv->up->vars[1],
      _var0,
      VEncodePointer(&_V10_Dstring_D1683.sym, VPOINTER_OTHER),
      upenv->up->vars[2]);
 }
}
static void _V10_Dmake__preprocess__command_D234_k461(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmake__preprocess__command_D234_k461, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmake__preprocess__command_D234_k461, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1324 0 0) ((bruijn ##.get-install-root.233 2 11) (close _V10_Dmake__preprocess__command_D234_k462)) ((bruijn ##.get-install-root.233 2 11) (close _V10_Dmake__preprocess__command_D234_k463)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->vars[11], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmake__preprocess__command_D234_k462, env)}));
} else {
    V_CALL(upenv->up->vars[11], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmake__preprocess__command_D234_k463, env)}));
}
 }
}
static void _V10_Dmake__preprocess__command_D234_lambda90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmake__preprocess__command_D234_lambda90, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmake__preprocess__command_D234_lambda90, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.eqv?.211 2 31) (close _V10_Dmake__preprocess__command_D234_k461) (bruijn ##.platform.197 2 17) 'windows)
    V_CALL(upenv->up->vars[31], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmake__preprocess__command_D234_k461, env)}),
      upenv->up->vars[17],
      _V0windows);
 }
}
static void _V10_Dresolve__foreign__import_D235_k473(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D235_k473, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dresolve__foreign__import_D235_k473, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1354 1 0) ((bruijn ##.compiler-error.204 16 24) (bruijn ##.k.1355 0 0) (##string ##.string.1674) (bruijn ##.expr.507 14 1)) ((bruijn ##.k.1355 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 16-1, 24), runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D1674.sym, VPOINTER_OTHER),
      VGetArg(upenv, 14-1, 1));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dresolve__foreign__import_D235_k477(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D235_k477, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dresolve__foreign__import_D235_k477, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1351 1 0) ((bruijn ##.compiler-error.204 19 24) (bruijn ##.k.1352 0 0) (##string ##.string.1685) (bruijn ##.expr.507 17 1)) ((bruijn ##.k.1352 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 19-1, 24), runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D1685.sym, VPOINTER_OTHER),
      VGetArg(upenv, 17-1, 1));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dresolve__foreign__import_D235_k489(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D235_k489, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dresolve__foreign__import_D235_k489, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.142.512 24 1) (bruijn ##.k.1334 21 0) (bruijn ##.x.1339 0 0))
    V_CALL(VGetArg(upenv, 24-1, 1), runtime,
      VGetArg(upenv, 21-1, 0),
      _var0);
 }
}
static void _V10_Dresolve__foreign__import_D235_k488(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D235_k488, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dresolve__foreign__import_D235_k488, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.200 29 20) (close _V10_Dresolve__foreign__import_D235_k489) (##inline ##vcore.cons '##foreign.declare (##inline ##vcore.cons (bruijn ##.x.1348 2 0) '())) (bruijn ##.x.1345 0 0))
    V_CALL(VGetArg(upenv, 29-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D235_k489, env)}),
      VInlineCons2(runtime,
        _V10foreign_Ddeclare,
        VInlineCons2(runtime,
        upenv->up->vars[0],
        VNULL)),
      _var0);
 }
}
static void _V10_Dresolve__foreign__import_D235_k487(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D235_k487, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dresolve__foreign__import_D235_k487, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.table->defines.229 27 7) (close _V10_Dresolve__foreign__import_D235_k488) (bruijn ##.x.1346 0 0) '())
    V_CALL(VGetArg(upenv, 27-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D235_k488, env)}),
      _var0,
      VNULL);
 }
}
static void _V10_Dresolve__foreign__import_D235_k486(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D235_k486, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dresolve__foreign__import_D235_k486, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.unwrap-declares.228 26 6) (close _V10_Dresolve__foreign__import_D235_k487) (bruijn ##.parse.521 3 0) '())
    V_CALL(VGetArg(upenv, 26-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D235_k487, env)}),
      upenv->up->up->vars[0],
      VNULL);
 }
}
static void _V10_Dresolve__foreign__import_D235_k485(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D235_k485, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dresolve__foreign__import_D235_k485, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.sprintf.205 26 25) (close _V10_Dresolve__foreign__import_D235_k486) (##string ##.string.1686) (bruijn ##.file.518 13 0))
    V_CALL(VGetArg(upenv, 26-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D235_k486, env)}),
      VEncodePointer(&_V10_Dstring_D1686.sym, VPOINTER_OTHER),
      VGetArg(upenv, 13-1, 0));
 }
}
static void _V10_Dresolve__foreign__import_D235_k484(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D235_k484, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dresolve__foreign__import_D235_k484, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.close-port.201 25 21) (close _V10_Dresolve__foreign__import_D235_k485) (bruijn ##.fd.520 3 0))
    V_CALL(VGetArg(upenv, 25-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D235_k485, env)}),
      upenv->up->up->vars[0]);
 }
}
static void _V10_Dresolve__foreign__import_D235_k483(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D235_k483, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dresolve__foreign__import_D235_k483, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.release-parse.511 19 1) (close _V10_Dresolve__foreign__import_D235_k484))
    V_CALL(VGetArg(upenv, 19-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D235_k484, env)}));
 }
}
static void _V10_Dresolve__foreign__import_D235_k482(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D235_k482, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dresolve__foreign__import_D235_k482, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.deep-copy.230 22 8) (close _V10_Dresolve__foreign__import_D235_k483) (bruijn ##.x.1349 0 0))
    V_CALL(VGetArg(upenv, 22-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D235_k483, env)}),
      _var0);
 }
}
static void _V10_Dresolve__foreign__import_D235_k481(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D235_k481, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dresolve__foreign__import_D235_k481, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.parse-header-c.510 17 0) (close _V10_Dresolve__foreign__import_D235_k482) (bruijn ##.fd.520 0 0))
    V_CALL(VGetArg(upenv, 17-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D235_k482, env)}),
      _var0);
 }
}
static void _V10_Dresolve__foreign__import_D235_k480(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D235_k480, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dresolve__foreign__import_D235_k480, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.open-input-process.199 21 19) (close _V10_Dresolve__foreign__import_D235_k481) (bruijn ##.cmd.519 0 0))
    V_CALL(VGetArg(upenv, 21-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D235_k481, env)}),
      _var0);
 }
}
static void _V10_Dresolve__foreign__import_D235_k479(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D235_k479, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dresolve__foreign__import_D235_k479, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.make-preprocess-command.234 19 12) (close _V10_Dresolve__foreign__import_D235_k480) (bruijn ##.x.1350 0 0) (bruijn ##.architecture.509 18 3))
    V_CALL(VGetArg(upenv, 19-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D235_k480, env)}),
      _var0,
      VGetArg(upenv, 18-1, 3));
 }
}
static void _V10_Dresolve__foreign__import_D235_k478(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D235_k478, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dresolve__foreign__import_D235_k478, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.find-file.232 18 10) (close _V10_Dresolve__foreign__import_D235_k479) (bruijn ##.file.518 6 0) (bruijn ##.paths.508 17 2))
    V_CALL(VGetArg(upenv, 18-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D235_k479, env)}),
      VGetArg(upenv, 6-1, 0),
      VGetArg(upenv, 17-1, 2));
 }
}
static void _V10_Dresolve__foreign__import_D235_k476(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D235_k476, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dresolve__foreign__import_D235_k476, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dresolve__foreign__import_D235_k477) (close _V10_Dresolve__foreign__import_D235_k478))
    V_CALL_FUNC(_V10_Dresolve__foreign__import_D235_k477, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D235_k478, env)}));
 }
}
static void _V10_Dresolve__foreign__import_D235_k475(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D235_k475, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dresolve__foreign__import_D235_k475, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.not.202 17 22) (close _V10_Dresolve__foreign__import_D235_k476) (bruijn ##.x.1353 0 0))
    V_CALL(VGetArg(upenv, 17-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D235_k476, env)}),
      _var0);
 }
}
static void _V10_Dresolve__foreign__import_D235_k474(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D235_k474, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dresolve__foreign__import_D235_k474, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.string?.203 16 23) (close _V10_Dresolve__foreign__import_D235_k475) (bruijn ##.file.518 3 0))
    V_CALL(VGetArg(upenv, 16-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D235_k475, env)}),
      upenv->up->up->vars[0]);
 }
}
static void _V10_Dresolve__foreign__import_D235_k472(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D235_k472, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dresolve__foreign__import_D235_k472, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dresolve__foreign__import_D235_k473) (close _V10_Dresolve__foreign__import_D235_k474))
    V_CALL_FUNC(_V10_Dresolve__foreign__import_D235_k473, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D235_k474, env)}));
 }
}
static void _V10_Dresolve__foreign__import_D235_k471(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D235_k471, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dresolve__foreign__import_D235_k471, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.not.202 14 22) (close _V10_Dresolve__foreign__import_D235_k472) (bruijn ##.x.1356 0 0))
    V_CALL(VGetArg(upenv, 14-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D235_k472, env)}),
      _var0);
 }
}
static void _V10_Dresolve__foreign__import_D235_k470(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D235_k470, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dresolve__foreign__import_D235_k470, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.146.517 1 0))) ((bruijn ##.equal?.220 13 40) (close _V10_Dresolve__foreign__import_D235_k471) (##inline ##vcore.car (bruijn ##.expr.145.515 2 0)) (##string ##.string.1668)) ((bruijn ##.k.1334 4 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    V_CALL(VGetArg(upenv, 13-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D235_k471, env)}),
      VInlineCar2(runtime,
        upenv->up->vars[0]),
      VEncodePointer(&_V10_Dstring_D1668.sym, VPOINTER_OTHER));
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dresolve__foreign__import_D235_k469(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D235_k469, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dresolve__foreign__import_D235_k469, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.146.517 0 0)) ((close _V10_Dresolve__foreign__import_D235_k470) (##inline ##vcore.car (bruijn ##.expr.146.517 0 0))) ((bruijn ##.k.1334 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dresolve__foreign__import_D235_k470, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dresolve__foreign__import_D235_k468(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D235_k468, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dresolve__foreign__import_D235_k468, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.145.515 0 0)) ((close _V10_Dresolve__foreign__import_D235_k469) (##inline ##vcore.cdr (bruijn ##.expr.145.515 0 0))) ((bruijn ##.k.1334 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dresolve__foreign__import_D235_k469, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dresolve__foreign__import_D235_k467(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D235_k467, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dresolve__foreign__import_D235_k467, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1335 0 0) ((close _V10_Dresolve__foreign__import_D235_k468) (##inline ##vcore.cdr (bruijn ##.expr.144.514 2 0))) ((bruijn ##.k.1334 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dresolve__foreign__import_D235_k468, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dresolve__foreign__import_D235_k466(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D235_k466, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dresolve__foreign__import_D235_k466, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.144.514 1 0)) ((bruijn ##.equal?.220 9 40) (close _V10_Dresolve__foreign__import_D235_k467) '##foreign.import (##inline ##vcore.car (bruijn ##.expr.144.514 1 0))) ((bruijn ##.k.1334 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 9-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D235_k467, env)}),
      _V10foreign_Dimport,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dresolve__foreign__import_D235_k491(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D235_k491, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dresolve__foreign__import_D235_k491, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.142.512 4 1) (bruijn ##.k.1330 4 0) (bruijn ##.x.1332 0 0))
    V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->up->up->up->vars[0],
      _var0);
 }
}
static void _V10_Dresolve__foreign__import_D235_k490(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D235_k490, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dresolve__foreign__import_D235_k490, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.compiler-error.204 9 24) (close _V10_Dresolve__foreign__import_D235_k491) (##string ##.string.1687) (bruijn ##.expr.507 7 1))
    V_CALL(VGetArg(upenv, 9-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D235_k491, env)}),
      VEncodePointer(&_V10_Dstring_D1687.sym, VPOINTER_OTHER),
      VGetArg(upenv, 7-1, 1));
 }
}
static void _V10_Dresolve__foreign__import_D235_lambda94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dresolve__foreign__import_D235_lambda94, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dresolve__foreign__import_D235_k466) (close _V10_Dresolve__foreign__import_D235_k490))
    V_CALL_FUNC(_V10_Dresolve__foreign__import_D235_k466, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D235_k490, env)}));
 }
}
static void _V10_Dresolve__foreign__import_D235_lambda93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dresolve__foreign__import_D235_lambda93, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dresolve__foreign__import_D235_lambda94) (bruijn ##.input.143.513 0 0))
    V_CALL_FUNC(_V10_Dresolve__foreign__import_D235_lambda94, env, runtime,
      _var0);
 }
}
static void _V10_Dresolve__foreign__import_D235_lambda92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D235_lambda92, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dresolve__foreign__import_D235_lambda92, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dresolve__foreign__import_D235_lambda93) (bruijn ##.expr.507 4 1))
    V_CALL_FUNC(_V10_Dresolve__foreign__import_D235_lambda93, env, runtime,
      upenv->up->up->up->vars[1]);
 }
}
static void _V10_Dresolve__foreign__import_D235_k465(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D235_k465, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dresolve__foreign__import_D235_k465, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 2 ((bruijn ##.x.1328 2 0) (bruijn ##.x.1329 1 0)) ((bruijn ##.call/cc.218 5 38) (bruijn ##.k.1327 3 0) (close _V10_Dresolve__foreign__import_D235_lambda92)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[2]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 2, 2, upenv);
    env->vars[0] = upenv->up->vars[0];
    env->vars[1] = upenv->vars[0];
    V_CALL(VGetArg(upenv, 5-1, 38), runtime,
      upenv->up->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D235_lambda92, env)}));
    }
 }
}
static void _V10_Dresolve__foreign__import_D235_k464(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D235_k464, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dresolve__foreign__import_D235_k464, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.function (close _V10_Dresolve__foreign__import_D235_k465) (##string ##.string.1676))
    V_CALL_FUNC(VFunction2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D235_k465, env)}),
      VEncodePointer(&_V10_Dstring_D1676.sym, VPOINTER_OTHER));
 }
}
static void _V10_Dresolve__foreign__import_D235_lambda91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D235_lambda91, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dresolve__foreign__import_D235_lambda91, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (##vcore.function (close _V10_Dresolve__foreign__import_D235_k464) (##string ##.string.1688))
    V_CALL_FUNC(VFunction2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D235_k464, env)}),
      VEncodePointer(&_V10_Dstring_D1688.sym, VPOINTER_OTHER));
 }
}
static void _V10_Dmangle__foreign__function_D236_lambda95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmangle__foreign__function_D236_lambda95, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmangle__foreign__function_D236_lambda95, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##.sprintf.205 2 25) (bruijn ##.k.1359 0 0) (##string ##.string.1689) (bruijn ##.name.522 0 1))
    V_CALL(upenv->up->vars[25], runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D1689.sym, VPOINTER_OTHER),
      _var1);
 }
}
static void _V10_Dget__foreign__encoder_D237_k494(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__encoder_D237_k494, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__encoder_D237_k494, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.eqv?.211 5 31) (bruijn ##.k.1387 1 0) (bruijn ##.x.1388 0 0) 'pointer)
    V_CALL(VGetArg(upenv, 5-1, 31), runtime,
      upenv->vars[0],
      _var0,
      _V0pointer);
 }
}
static void _V10_Dget__foreign__encoder_D237_k493(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__encoder_D237_k493, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__encoder_D237_k493, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1386 1 0) ((bruijn ##.car.214 4 34) (close _V10_Dget__foreign__encoder_D237_k494) (bruijn ##.type.523 2 1)) ((bruijn ##.k.1387 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(upenv->up->up->up->vars[34], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__encoder_D237_k494, env)}),
      upenv->up->vars[1]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dget__foreign__encoder_D237_k495(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__encoder_D237_k495, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__encoder_D237_k495, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1361 0 0) ((bruijn ##.k.1360 2 0) (##inline ##vcore.qcons 'void-pointer '(##string ##.string.1690))) ((bruijn ##.assv.207 4 27) (bruijn ##.k.1360 2 0) (bruijn ##.type.523 2 1) (##inline ##vcore.qcons (##inline ##vcore.qcons 'void '#t) (##inline ##vcore.qcons (##inline ##vcore.qcons '_Bool '(##string ##.string.1691)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'char '(##string ##.string.1692)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'signed-char '(##string ##.string.1693)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'unsigned-char '(##string ##.string.1693)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'short '(##string ##.string.1693)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'unsigned-short '(##string ##.string.1693)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'int '(##string ##.string.1693)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'unsigned-int '(##string ##.string.1693)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'double '(##string ##.string.1694)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'float '(##string ##.string.1694)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'VWORD '(##string ##.string.1669)) '()))))))))))))))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->vars[0], runtime,
      VInlineCons2(runtime,
        _V0void__pointer,
        VEncodePointer(&_V10_Dstring_D1690.sym, VPOINTER_OTHER)));
} else {
    V_CALL(upenv->up->up->up->vars[27], runtime,
      upenv->up->vars[0],
      upenv->up->vars[1],
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0void,
        VEncodeBool(true)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0_UBool,
        VEncodePointer(&_V10_Dstring_D1691.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0char,
        VEncodePointer(&_V10_Dstring_D1692.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0signed__char,
        VEncodePointer(&_V10_Dstring_D1693.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unsigned__char,
        VEncodePointer(&_V10_Dstring_D1693.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0short,
        VEncodePointer(&_V10_Dstring_D1693.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unsigned__short,
        VEncodePointer(&_V10_Dstring_D1693.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0int,
        VEncodePointer(&_V10_Dstring_D1693.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unsigned__int,
        VEncodePointer(&_V10_Dstring_D1693.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0double,
        VEncodePointer(&_V10_Dstring_D1694.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0float,
        VEncodePointer(&_V10_Dstring_D1694.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0VWORD,
        VEncodePointer(&_V10_Dstring_D1669.sym, VPOINTER_OTHER)),
        VNULL)))))))))))));
}
 }
}
static void _V10_Dget__foreign__encoder_D237_k492(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__encoder_D237_k492, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__encoder_D237_k492, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dget__foreign__encoder_D237_k493) (close _V10_Dget__foreign__encoder_D237_k495))
    V_CALL_FUNC(_V10_Dget__foreign__encoder_D237_k493, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__encoder_D237_k495, env)}));
 }
}
static void _V10_Dget__foreign__encoder_D237_lambda96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__encoder_D237_lambda96, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__encoder_D237_lambda96, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.pair?.215 2 35) (close _V10_Dget__foreign__encoder_D237_k492) (bruijn ##.type.523 0 1))
    V_CALL(upenv->up->vars[35], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__encoder_D237_k492, env)}),
      _var1);
 }
}
static void _V10_Dget__foreign__decoder_D238_k498(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k498, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k498, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.eqv?.211 5 31) (bruijn ##.k.1561 1 0) (bruijn ##.x.1562 0 0) 'pointer)
    V_CALL(VGetArg(upenv, 5-1, 31), runtime,
      upenv->vars[0],
      _var0,
      _V0pointer);
 }
}
static void _V10_Dget__foreign__decoder_D238_k497(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k497, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k497, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1560 1 0) ((bruijn ##.car.214 4 34) (close _V10_Dget__foreign__decoder_D238_k498) (bruijn ##.type.524 2 1)) ((bruijn ##.k.1561 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(upenv->up->up->up->vars[34], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D238_k498, env)}),
      upenv->up->vars[1]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dget__foreign__decoder_D238_k502(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k502, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k502, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1525 1 0) ((bruijn ##.kk.147.525 3 1) (bruijn ##.k.1526 0 0) (##inline ##vcore.qcons 'c-string '(##string ##.string.1695))) ((bruijn ##.k.1526 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(upenv->up->up->vars[1], runtime,
      _var0,
      VInlineCons2(runtime,
        _V0c__string,
        VEncodePointer(&_V10_Dstring_D1695.sym, VPOINTER_OTHER)));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dget__foreign__decoder_D238_k507(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k507, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k507, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1519 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.150.528 1 0))) ((bruijn ##.kk.147.525 8 1) (bruijn ##.k.1516 3 0) (##inline ##vcore.qcons 'const-c-string '(##string ##.string.1696))) ((bruijn ##.k.1516 3 0) #f)) ((bruijn ##.k.1516 3 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      upenv->up->up->vars[0],
      VInlineCons2(runtime,
        _V0const__c__string,
        VEncodePointer(&_V10_Dstring_D1696.sym, VPOINTER_OTHER)));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dget__foreign__decoder_D238_k506(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k506, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k506, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.150.528 0 0)) ((bruijn ##.equal?.220 12 40) (close _V10_Dget__foreign__decoder_D238_k507) 'char (##inline ##vcore.car (bruijn ##.expr.150.528 0 0))) ((bruijn ##.k.1516 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL(VGetArg(upenv, 12-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D238_k507, env)}),
      _V0char,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dget__foreign__decoder_D238_k505(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k505, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k505, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1517 0 0) ((close _V10_Dget__foreign__decoder_D238_k506) (##inline ##vcore.cdr (bruijn ##.expr.149.527 2 0))) ((bruijn ##.k.1516 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dget__foreign__decoder_D238_k506, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dget__foreign__decoder_D238_k504(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k504, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k504, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.149.527 1 0)) ((bruijn ##.equal?.220 10 40) (close _V10_Dget__foreign__decoder_D238_k505) 'const (##inline ##vcore.car (bruijn ##.expr.149.527 1 0))) ((bruijn ##.k.1516 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 10-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D238_k505, env)}),
      _V0const,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dget__foreign__decoder_D238_k512(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k512, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k512, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1509 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.152.530 1 0))) ((bruijn ##.kk.147.525 10 1) (bruijn ##.k.1506 3 0) (##inline ##vcore.qcons 'const-void-pointer '(##string ##.string.1697))) ((bruijn ##.k.1506 3 0) #f)) ((bruijn ##.k.1506 3 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      upenv->up->up->vars[0],
      VInlineCons2(runtime,
        _V0const__void__pointer,
        VEncodePointer(&_V10_Dstring_D1697.sym, VPOINTER_OTHER)));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dget__foreign__decoder_D238_k511(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k511, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k511, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.152.530 0 0)) ((bruijn ##.equal?.220 14 40) (close _V10_Dget__foreign__decoder_D238_k512) 'void (##inline ##vcore.car (bruijn ##.expr.152.530 0 0))) ((bruijn ##.k.1506 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL(VGetArg(upenv, 14-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D238_k512, env)}),
      _V0void,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dget__foreign__decoder_D238_k510(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k510, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k510, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1507 0 0) ((close _V10_Dget__foreign__decoder_D238_k511) (##inline ##vcore.cdr (bruijn ##.expr.151.529 2 0))) ((bruijn ##.k.1506 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dget__foreign__decoder_D238_k511, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dget__foreign__decoder_D238_k509(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k509, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k509, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.151.529 1 0)) ((bruijn ##.equal?.220 12 40) (close _V10_Dget__foreign__decoder_D238_k510) 'const (##inline ##vcore.car (bruijn ##.expr.151.529 1 0))) ((bruijn ##.k.1506 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 12-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D238_k510, env)}),
      _V0const,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dget__foreign__decoder_D238_k515(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k515, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k515, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1502 1 0) ((bruijn ##.kk.147.525 9 1) (bruijn ##.k.1503 0 0) (##inline ##vcore.qcons 'void-pointer '(##string ##.string.1698))) ((bruijn ##.k.1503 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      _var0,
      VInlineCons2(runtime,
        _V0void__pointer,
        VEncodePointer(&_V10_Dstring_D1698.sym, VPOINTER_OTHER)));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dget__foreign__decoder_D238_k518(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k518, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k518, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1499 1 0) ((bruijn ##.kk.147.525 11 1) (bruijn ##.k.1500 0 0) (##inline ##vcore.qcons 'f32-pointer '(##string ##.string.1699))) ((bruijn ##.k.1500 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      _var0,
      VInlineCons2(runtime,
        _V0f32__pointer,
        VEncodePointer(&_V10_Dstring_D1699.sym, VPOINTER_OTHER)));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dget__foreign__decoder_D238_k521(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k521, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k521, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1496 1 0) ((bruijn ##.kk.147.525 13 1) (bruijn ##.k.1497 0 0) (##inline ##vcore.qcons 'f64-pointer '(##string ##.string.1700))) ((bruijn ##.k.1497 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 13-1, 1), runtime,
      _var0,
      VInlineCons2(runtime,
        _V0f64__pointer,
        VEncodePointer(&_V10_Dstring_D1700.sym, VPOINTER_OTHER)));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dget__foreign__decoder_D238_k524(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k524, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k524, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1493 1 0) ((bruijn ##.kk.147.525 15 1) (bruijn ##.k.1494 0 0) (##inline ##vcore.qcons 's32-pointer '(##string ##.string.1701))) ((bruijn ##.k.1494 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 15-1, 1), runtime,
      _var0,
      VInlineCons2(runtime,
        _V0s32__pointer,
        VEncodePointer(&_V10_Dstring_D1701.sym, VPOINTER_OTHER)));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dget__foreign__decoder_D238_k527(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k527, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k527, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1490 1 0) ((bruijn ##.kk.147.525 17 1) (bruijn ##.k.1491 0 0) (##inline ##vcore.qcons 'u16-pointer '(##string ##.string.1702))) ((bruijn ##.k.1491 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 17-1, 1), runtime,
      _var0,
      VInlineCons2(runtime,
        _V0u16__pointer,
        VEncodePointer(&_V10_Dstring_D1702.sym, VPOINTER_OTHER)));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dget__foreign__decoder_D238_k530(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k530, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k530, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1487 1 0) ((bruijn ##.kk.147.525 19 1) (bruijn ##.k.1488 0 0) (##inline ##vcore.qcons 's16-pointer '(##string ##.string.1703))) ((bruijn ##.k.1488 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 19-1, 1), runtime,
      _var0,
      VInlineCons2(runtime,
        _V0s16__pointer,
        VEncodePointer(&_V10_Dstring_D1703.sym, VPOINTER_OTHER)));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dget__foreign__decoder_D238_k533(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k533, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k533, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1484 1 0) ((bruijn ##.kk.147.525 21 1) (bruijn ##.k.1485 0 0) (##inline ##vcore.qcons 'u8-pointer '(##string ##.string.1704))) ((bruijn ##.k.1485 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 21-1, 1), runtime,
      _var0,
      VInlineCons2(runtime,
        _V0u8__pointer,
        VEncodePointer(&_V10_Dstring_D1704.sym, VPOINTER_OTHER)));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dget__foreign__decoder_D238_k536(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k536, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k536, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1481 1 0) ((bruijn ##.kk.147.525 23 1) (bruijn ##.k.1482 0 0) (##inline ##vcore.qcons 's8-pointer '(##string ##.string.1705))) ((bruijn ##.k.1482 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 23-1, 1), runtime,
      _var0,
      VInlineCons2(runtime,
        _V0s8__pointer,
        VEncodePointer(&_V10_Dstring_D1705.sym, VPOINTER_OTHER)));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dget__foreign__decoder_D238_k541(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k541, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k541, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1475 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.154.532 1 0))) ((bruijn ##.kk.147.525 28 1) (bruijn ##.k.1472 3 0) (##inline ##vcore.qcons 'f32-pointer '(##string ##.string.1699))) ((bruijn ##.k.1472 3 0) #f)) ((bruijn ##.k.1472 3 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    V_CALL(VGetArg(upenv, 28-1, 1), runtime,
      upenv->up->up->vars[0],
      VInlineCons2(runtime,
        _V0f32__pointer,
        VEncodePointer(&_V10_Dstring_D1699.sym, VPOINTER_OTHER)));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dget__foreign__decoder_D238_k540(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k540, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k540, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.154.532 0 0)) ((bruijn ##.equal?.220 32 40) (close _V10_Dget__foreign__decoder_D238_k541) 'float (##inline ##vcore.car (bruijn ##.expr.154.532 0 0))) ((bruijn ##.k.1472 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL(VGetArg(upenv, 32-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D238_k541, env)}),
      _V0float,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dget__foreign__decoder_D238_k539(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k539, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k539, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1473 0 0) ((close _V10_Dget__foreign__decoder_D238_k540) (##inline ##vcore.cdr (bruijn ##.expr.153.531 2 0))) ((bruijn ##.k.1472 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dget__foreign__decoder_D238_k540, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dget__foreign__decoder_D238_k538(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k538, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k538, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.153.531 1 0)) ((bruijn ##.equal?.220 30 40) (close _V10_Dget__foreign__decoder_D238_k539) 'const (##inline ##vcore.car (bruijn ##.expr.153.531 1 0))) ((bruijn ##.k.1472 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 30-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D238_k539, env)}),
      _V0const,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dget__foreign__decoder_D238_k546(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k546, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k546, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1465 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.156.534 1 0))) ((bruijn ##.kk.147.525 30 1) (bruijn ##.k.1462 3 0) (##inline ##vcore.qcons 'f64-pointer '(##string ##.string.1700))) ((bruijn ##.k.1462 3 0) #f)) ((bruijn ##.k.1462 3 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    V_CALL(VGetArg(upenv, 30-1, 1), runtime,
      upenv->up->up->vars[0],
      VInlineCons2(runtime,
        _V0f64__pointer,
        VEncodePointer(&_V10_Dstring_D1700.sym, VPOINTER_OTHER)));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dget__foreign__decoder_D238_k545(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k545, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k545, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.156.534 0 0)) ((bruijn ##.equal?.220 34 40) (close _V10_Dget__foreign__decoder_D238_k546) 'double (##inline ##vcore.car (bruijn ##.expr.156.534 0 0))) ((bruijn ##.k.1462 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL(VGetArg(upenv, 34-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D238_k546, env)}),
      _V0double,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dget__foreign__decoder_D238_k544(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k544, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k544, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1463 0 0) ((close _V10_Dget__foreign__decoder_D238_k545) (##inline ##vcore.cdr (bruijn ##.expr.155.533 2 0))) ((bruijn ##.k.1462 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dget__foreign__decoder_D238_k545, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dget__foreign__decoder_D238_k543(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k543, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k543, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.155.533 1 0)) ((bruijn ##.equal?.220 32 40) (close _V10_Dget__foreign__decoder_D238_k544) 'const (##inline ##vcore.car (bruijn ##.expr.155.533 1 0))) ((bruijn ##.k.1462 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 32-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D238_k544, env)}),
      _V0const,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dget__foreign__decoder_D238_k551(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k551, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k551, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1455 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.158.536 1 0))) ((bruijn ##.kk.147.525 32 1) (bruijn ##.k.1452 3 0) (##inline ##vcore.qcons 's32-pointer '(##string ##.string.1701))) ((bruijn ##.k.1452 3 0) #f)) ((bruijn ##.k.1452 3 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    V_CALL(VGetArg(upenv, 32-1, 1), runtime,
      upenv->up->up->vars[0],
      VInlineCons2(runtime,
        _V0s32__pointer,
        VEncodePointer(&_V10_Dstring_D1701.sym, VPOINTER_OTHER)));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dget__foreign__decoder_D238_k550(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k550, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k550, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.158.536 0 0)) ((bruijn ##.equal?.220 36 40) (close _V10_Dget__foreign__decoder_D238_k551) 'int (##inline ##vcore.car (bruijn ##.expr.158.536 0 0))) ((bruijn ##.k.1452 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL(VGetArg(upenv, 36-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D238_k551, env)}),
      _V0int,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dget__foreign__decoder_D238_k549(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k549, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k549, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1453 0 0) ((close _V10_Dget__foreign__decoder_D238_k550) (##inline ##vcore.cdr (bruijn ##.expr.157.535 2 0))) ((bruijn ##.k.1452 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dget__foreign__decoder_D238_k550, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dget__foreign__decoder_D238_k548(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k548, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k548, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.157.535 1 0)) ((bruijn ##.equal?.220 34 40) (close _V10_Dget__foreign__decoder_D238_k549) 'const (##inline ##vcore.car (bruijn ##.expr.157.535 1 0))) ((bruijn ##.k.1452 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 34-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D238_k549, env)}),
      _V0const,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dget__foreign__decoder_D238_k556(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k556, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k556, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1445 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.160.538 1 0))) ((bruijn ##.kk.147.525 34 1) (bruijn ##.k.1442 3 0) (##inline ##vcore.qcons 'u16-pointer '(##string ##.string.1702))) ((bruijn ##.k.1442 3 0) #f)) ((bruijn ##.k.1442 3 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    V_CALL(VGetArg(upenv, 34-1, 1), runtime,
      upenv->up->up->vars[0],
      VInlineCons2(runtime,
        _V0u16__pointer,
        VEncodePointer(&_V10_Dstring_D1702.sym, VPOINTER_OTHER)));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dget__foreign__decoder_D238_k555(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k555, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k555, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.160.538 0 0)) ((bruijn ##.equal?.220 38 40) (close _V10_Dget__foreign__decoder_D238_k556) 'unsigned-short (##inline ##vcore.car (bruijn ##.expr.160.538 0 0))) ((bruijn ##.k.1442 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL(VGetArg(upenv, 38-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D238_k556, env)}),
      _V0unsigned__short,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dget__foreign__decoder_D238_k554(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k554, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k554, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1443 0 0) ((close _V10_Dget__foreign__decoder_D238_k555) (##inline ##vcore.cdr (bruijn ##.expr.159.537 2 0))) ((bruijn ##.k.1442 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dget__foreign__decoder_D238_k555, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dget__foreign__decoder_D238_k553(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k553, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k553, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.159.537 1 0)) ((bruijn ##.equal?.220 36 40) (close _V10_Dget__foreign__decoder_D238_k554) 'const (##inline ##vcore.car (bruijn ##.expr.159.537 1 0))) ((bruijn ##.k.1442 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 36-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D238_k554, env)}),
      _V0const,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dget__foreign__decoder_D238_k561(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k561, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k561, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1435 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.162.540 1 0))) ((bruijn ##.kk.147.525 36 1) (bruijn ##.k.1432 3 0) (##inline ##vcore.qcons 's16-pointer '(##string ##.string.1703))) ((bruijn ##.k.1432 3 0) #f)) ((bruijn ##.k.1432 3 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    V_CALL(VGetArg(upenv, 36-1, 1), runtime,
      upenv->up->up->vars[0],
      VInlineCons2(runtime,
        _V0s16__pointer,
        VEncodePointer(&_V10_Dstring_D1703.sym, VPOINTER_OTHER)));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dget__foreign__decoder_D238_k560(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k560, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k560, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.162.540 0 0)) ((bruijn ##.equal?.220 40 40) (close _V10_Dget__foreign__decoder_D238_k561) 'short (##inline ##vcore.car (bruijn ##.expr.162.540 0 0))) ((bruijn ##.k.1432 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL(VGetArg(upenv, 40-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D238_k561, env)}),
      _V0short,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dget__foreign__decoder_D238_k559(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k559, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k559, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1433 0 0) ((close _V10_Dget__foreign__decoder_D238_k560) (##inline ##vcore.cdr (bruijn ##.expr.161.539 2 0))) ((bruijn ##.k.1432 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dget__foreign__decoder_D238_k560, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dget__foreign__decoder_D238_k558(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k558, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k558, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.161.539 1 0)) ((bruijn ##.equal?.220 38 40) (close _V10_Dget__foreign__decoder_D238_k559) 'const (##inline ##vcore.car (bruijn ##.expr.161.539 1 0))) ((bruijn ##.k.1432 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 38-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D238_k559, env)}),
      _V0const,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dget__foreign__decoder_D238_k566(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k566, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k566, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1425 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.164.542 1 0))) ((bruijn ##.kk.147.525 38 1) (bruijn ##.k.1422 3 0) (##inline ##vcore.qcons 'u8-pointer '(##string ##.string.1704))) ((bruijn ##.k.1422 3 0) #f)) ((bruijn ##.k.1422 3 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    V_CALL(VGetArg(upenv, 38-1, 1), runtime,
      upenv->up->up->vars[0],
      VInlineCons2(runtime,
        _V0u8__pointer,
        VEncodePointer(&_V10_Dstring_D1704.sym, VPOINTER_OTHER)));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dget__foreign__decoder_D238_k565(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k565, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k565, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.164.542 0 0)) ((bruijn ##.equal?.220 42 40) (close _V10_Dget__foreign__decoder_D238_k566) 'unsigned-char (##inline ##vcore.car (bruijn ##.expr.164.542 0 0))) ((bruijn ##.k.1422 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL(VGetArg(upenv, 42-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D238_k566, env)}),
      _V0unsigned__char,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dget__foreign__decoder_D238_k564(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k564, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k564, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1423 0 0) ((close _V10_Dget__foreign__decoder_D238_k565) (##inline ##vcore.cdr (bruijn ##.expr.163.541 2 0))) ((bruijn ##.k.1422 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dget__foreign__decoder_D238_k565, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dget__foreign__decoder_D238_k563(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k563, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k563, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.163.541 1 0)) ((bruijn ##.equal?.220 40 40) (close _V10_Dget__foreign__decoder_D238_k564) 'const (##inline ##vcore.car (bruijn ##.expr.163.541 1 0))) ((bruijn ##.k.1422 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 40-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D238_k564, env)}),
      _V0const,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dget__foreign__decoder_D238_k571(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k571, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k571, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1415 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.166.544 1 0))) ((bruijn ##.kk.147.525 40 1) (bruijn ##.k.1412 3 0) (##inline ##vcore.qcons 's8-pointer '(##string ##.string.1705))) ((bruijn ##.k.1412 3 0) #f)) ((bruijn ##.k.1412 3 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    V_CALL(VGetArg(upenv, 40-1, 1), runtime,
      upenv->up->up->vars[0],
      VInlineCons2(runtime,
        _V0s8__pointer,
        VEncodePointer(&_V10_Dstring_D1705.sym, VPOINTER_OTHER)));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dget__foreign__decoder_D238_k570(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k570, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k570, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.166.544 0 0)) ((bruijn ##.equal?.220 44 40) (close _V10_Dget__foreign__decoder_D238_k571) 'signed-char (##inline ##vcore.car (bruijn ##.expr.166.544 0 0))) ((bruijn ##.k.1412 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL(VGetArg(upenv, 44-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D238_k571, env)}),
      _V0signed__char,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dget__foreign__decoder_D238_k569(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k569, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k569, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1413 0 0) ((close _V10_Dget__foreign__decoder_D238_k570) (##inline ##vcore.cdr (bruijn ##.expr.165.543 2 0))) ((bruijn ##.k.1412 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dget__foreign__decoder_D238_k570, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dget__foreign__decoder_D238_k568(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k568, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k568, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.165.543 1 0)) ((bruijn ##.equal?.220 42 40) (close _V10_Dget__foreign__decoder_D238_k569) 'const (##inline ##vcore.car (bruijn ##.expr.165.543 1 0))) ((bruijn ##.k.1412 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 42-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D238_k569, env)}),
      _V0const,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dget__foreign__decoder_D238_k572(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k572, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k572, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.147.525 37 1) (bruijn ##.k.1391 37 0) (##inline ##vcore.qcons 'void-pointer '(##string ##.string.1706)))
    V_CALL(VGetArg(upenv, 37-1, 1), runtime,
      VGetArg(upenv, 37-1, 0),
      VInlineCons2(runtime,
        _V0void__pointer,
        VEncodePointer(&_V10_Dstring_D1706.sym, VPOINTER_OTHER)));
 }
}
static void _V10_Dget__foreign__decoder_D238_lambda107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_lambda107, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dget__foreign__decoder_D238_k568) (close _V10_Dget__foreign__decoder_D238_k572))
    V_CALL_FUNC(_V10_Dget__foreign__decoder_D238_k568, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D238_k572, env)}));
 }
}
static void _V10_Dget__foreign__decoder_D238_k567(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k567, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k567, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dget__foreign__decoder_D238_lambda107) (bruijn ##.input.148.526 34 0))
    V_CALL_FUNC(_V10_Dget__foreign__decoder_D238_lambda107, env, runtime,
      VGetArg(upenv, 34-1, 0));
 }
}
static void _V10_Dget__foreign__decoder_D238_lambda106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_lambda106, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dget__foreign__decoder_D238_k563) (close _V10_Dget__foreign__decoder_D238_k567))
    V_CALL_FUNC(_V10_Dget__foreign__decoder_D238_k563, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D238_k567, env)}));
 }
}
static void _V10_Dget__foreign__decoder_D238_k562(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k562, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k562, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dget__foreign__decoder_D238_lambda106) (bruijn ##.input.148.526 32 0))
    V_CALL_FUNC(_V10_Dget__foreign__decoder_D238_lambda106, env, runtime,
      VGetArg(upenv, 32-1, 0));
 }
}
static void _V10_Dget__foreign__decoder_D238_lambda105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_lambda105, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dget__foreign__decoder_D238_k558) (close _V10_Dget__foreign__decoder_D238_k562))
    V_CALL_FUNC(_V10_Dget__foreign__decoder_D238_k558, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D238_k562, env)}));
 }
}
static void _V10_Dget__foreign__decoder_D238_k557(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k557, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k557, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dget__foreign__decoder_D238_lambda105) (bruijn ##.input.148.526 30 0))
    V_CALL_FUNC(_V10_Dget__foreign__decoder_D238_lambda105, env, runtime,
      VGetArg(upenv, 30-1, 0));
 }
}
static void _V10_Dget__foreign__decoder_D238_lambda104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_lambda104, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dget__foreign__decoder_D238_k553) (close _V10_Dget__foreign__decoder_D238_k557))
    V_CALL_FUNC(_V10_Dget__foreign__decoder_D238_k553, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D238_k557, env)}));
 }
}
static void _V10_Dget__foreign__decoder_D238_k552(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k552, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k552, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dget__foreign__decoder_D238_lambda104) (bruijn ##.input.148.526 28 0))
    V_CALL_FUNC(_V10_Dget__foreign__decoder_D238_lambda104, env, runtime,
      VGetArg(upenv, 28-1, 0));
 }
}
static void _V10_Dget__foreign__decoder_D238_lambda103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_lambda103, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dget__foreign__decoder_D238_k548) (close _V10_Dget__foreign__decoder_D238_k552))
    V_CALL_FUNC(_V10_Dget__foreign__decoder_D238_k548, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D238_k552, env)}));
 }
}
static void _V10_Dget__foreign__decoder_D238_k547(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k547, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k547, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dget__foreign__decoder_D238_lambda103) (bruijn ##.input.148.526 26 0))
    V_CALL_FUNC(_V10_Dget__foreign__decoder_D238_lambda103, env, runtime,
      VGetArg(upenv, 26-1, 0));
 }
}
static void _V10_Dget__foreign__decoder_D238_lambda102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_lambda102, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dget__foreign__decoder_D238_k543) (close _V10_Dget__foreign__decoder_D238_k547))
    V_CALL_FUNC(_V10_Dget__foreign__decoder_D238_k543, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D238_k547, env)}));
 }
}
static void _V10_Dget__foreign__decoder_D238_k542(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k542, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k542, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dget__foreign__decoder_D238_lambda102) (bruijn ##.input.148.526 24 0))
    V_CALL_FUNC(_V10_Dget__foreign__decoder_D238_lambda102, env, runtime,
      VGetArg(upenv, 24-1, 0));
 }
}
static void _V10_Dget__foreign__decoder_D238_lambda101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_lambda101, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dget__foreign__decoder_D238_k538) (close _V10_Dget__foreign__decoder_D238_k542))
    V_CALL_FUNC(_V10_Dget__foreign__decoder_D238_k538, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D238_k542, env)}));
 }
}
static void _V10_Dget__foreign__decoder_D238_k537(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k537, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k537, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dget__foreign__decoder_D238_lambda101) (bruijn ##.input.148.526 22 0))
    V_CALL_FUNC(_V10_Dget__foreign__decoder_D238_lambda101, env, runtime,
      VGetArg(upenv, 22-1, 0));
 }
}
static void _V10_Dget__foreign__decoder_D238_k535(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k535, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k535, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dget__foreign__decoder_D238_k536) (close _V10_Dget__foreign__decoder_D238_k537))
    V_CALL_FUNC(_V10_Dget__foreign__decoder_D238_k536, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D238_k537, env)}));
 }
}
static void _V10_Dget__foreign__decoder_D238_k534(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k534, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k534, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.equal?.220 26 40) (close _V10_Dget__foreign__decoder_D238_k535) 'signed-char (bruijn ##.input.148.526 20 0))
    V_CALL(VGetArg(upenv, 26-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D238_k535, env)}),
      _V0signed__char,
      VGetArg(upenv, 20-1, 0));
 }
}
static void _V10_Dget__foreign__decoder_D238_k532(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k532, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k532, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dget__foreign__decoder_D238_k533) (close _V10_Dget__foreign__decoder_D238_k534))
    V_CALL_FUNC(_V10_Dget__foreign__decoder_D238_k533, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D238_k534, env)}));
 }
}
static void _V10_Dget__foreign__decoder_D238_k531(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k531, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k531, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.equal?.220 24 40) (close _V10_Dget__foreign__decoder_D238_k532) 'unsigned-char (bruijn ##.input.148.526 18 0))
    V_CALL(VGetArg(upenv, 24-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D238_k532, env)}),
      _V0unsigned__char,
      VGetArg(upenv, 18-1, 0));
 }
}
static void _V10_Dget__foreign__decoder_D238_k529(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k529, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k529, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dget__foreign__decoder_D238_k530) (close _V10_Dget__foreign__decoder_D238_k531))
    V_CALL_FUNC(_V10_Dget__foreign__decoder_D238_k530, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D238_k531, env)}));
 }
}
static void _V10_Dget__foreign__decoder_D238_k528(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k528, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k528, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.equal?.220 22 40) (close _V10_Dget__foreign__decoder_D238_k529) 'short (bruijn ##.input.148.526 16 0))
    V_CALL(VGetArg(upenv, 22-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D238_k529, env)}),
      _V0short,
      VGetArg(upenv, 16-1, 0));
 }
}
static void _V10_Dget__foreign__decoder_D238_k526(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k526, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k526, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dget__foreign__decoder_D238_k527) (close _V10_Dget__foreign__decoder_D238_k528))
    V_CALL_FUNC(_V10_Dget__foreign__decoder_D238_k527, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D238_k528, env)}));
 }
}
static void _V10_Dget__foreign__decoder_D238_k525(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k525, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k525, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.equal?.220 20 40) (close _V10_Dget__foreign__decoder_D238_k526) 'unsigned-short (bruijn ##.input.148.526 14 0))
    V_CALL(VGetArg(upenv, 20-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D238_k526, env)}),
      _V0unsigned__short,
      VGetArg(upenv, 14-1, 0));
 }
}
static void _V10_Dget__foreign__decoder_D238_k523(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k523, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k523, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dget__foreign__decoder_D238_k524) (close _V10_Dget__foreign__decoder_D238_k525))
    V_CALL_FUNC(_V10_Dget__foreign__decoder_D238_k524, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D238_k525, env)}));
 }
}
static void _V10_Dget__foreign__decoder_D238_k522(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k522, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k522, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.equal?.220 18 40) (close _V10_Dget__foreign__decoder_D238_k523) 'int (bruijn ##.input.148.526 12 0))
    V_CALL(VGetArg(upenv, 18-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D238_k523, env)}),
      _V0int,
      VGetArg(upenv, 12-1, 0));
 }
}
static void _V10_Dget__foreign__decoder_D238_k520(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k520, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k520, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dget__foreign__decoder_D238_k521) (close _V10_Dget__foreign__decoder_D238_k522))
    V_CALL_FUNC(_V10_Dget__foreign__decoder_D238_k521, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D238_k522, env)}));
 }
}
static void _V10_Dget__foreign__decoder_D238_k519(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k519, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k519, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.equal?.220 16 40) (close _V10_Dget__foreign__decoder_D238_k520) 'double (bruijn ##.input.148.526 10 0))
    V_CALL(VGetArg(upenv, 16-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D238_k520, env)}),
      _V0double,
      VGetArg(upenv, 10-1, 0));
 }
}
static void _V10_Dget__foreign__decoder_D238_k517(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k517, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k517, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dget__foreign__decoder_D238_k518) (close _V10_Dget__foreign__decoder_D238_k519))
    V_CALL_FUNC(_V10_Dget__foreign__decoder_D238_k518, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D238_k519, env)}));
 }
}
static void _V10_Dget__foreign__decoder_D238_k516(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k516, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k516, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.equal?.220 14 40) (close _V10_Dget__foreign__decoder_D238_k517) 'float (bruijn ##.input.148.526 8 0))
    V_CALL(VGetArg(upenv, 14-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D238_k517, env)}),
      _V0float,
      VGetArg(upenv, 8-1, 0));
 }
}
static void _V10_Dget__foreign__decoder_D238_k514(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k514, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k514, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dget__foreign__decoder_D238_k515) (close _V10_Dget__foreign__decoder_D238_k516))
    V_CALL_FUNC(_V10_Dget__foreign__decoder_D238_k515, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D238_k516, env)}));
 }
}
static void _V10_Dget__foreign__decoder_D238_k513(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k513, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k513, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.equal?.220 12 40) (close _V10_Dget__foreign__decoder_D238_k514) 'void (bruijn ##.input.148.526 6 0))
    V_CALL(VGetArg(upenv, 12-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D238_k514, env)}),
      _V0void,
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V10_Dget__foreign__decoder_D238_lambda100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_lambda100, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dget__foreign__decoder_D238_k509) (close _V10_Dget__foreign__decoder_D238_k513))
    V_CALL_FUNC(_V10_Dget__foreign__decoder_D238_k509, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D238_k513, env)}));
 }
}
static void _V10_Dget__foreign__decoder_D238_k508(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k508, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k508, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dget__foreign__decoder_D238_lambda100) (bruijn ##.input.148.526 4 0))
    V_CALL_FUNC(_V10_Dget__foreign__decoder_D238_lambda100, env, runtime,
      upenv->up->up->up->vars[0]);
 }
}
static void _V10_Dget__foreign__decoder_D238_lambda99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_lambda99, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dget__foreign__decoder_D238_k504) (close _V10_Dget__foreign__decoder_D238_k508))
    V_CALL_FUNC(_V10_Dget__foreign__decoder_D238_k504, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D238_k508, env)}));
 }
}
static void _V10_Dget__foreign__decoder_D238_k503(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k503, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k503, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dget__foreign__decoder_D238_lambda99) (bruijn ##.input.148.526 2 0))
    V_CALL_FUNC(_V10_Dget__foreign__decoder_D238_lambda99, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V10_Dget__foreign__decoder_D238_k501(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k501, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k501, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dget__foreign__decoder_D238_k502) (close _V10_Dget__foreign__decoder_D238_k503))
    V_CALL_FUNC(_V10_Dget__foreign__decoder_D238_k502, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D238_k503, env)}));
 }
}
static void _V10_Dget__foreign__decoder_D238_k500(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k500, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k500, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.equal?.220 6 40) (close _V10_Dget__foreign__decoder_D238_k501) 'char (bruijn ##.input.148.526 0 0))
    V_CALL(VGetArg(upenv, 6-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D238_k501, env)}),
      _V0char,
      _var0);
 }
}
static void _V10_Dget__foreign__decoder_D238_lambda98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_lambda98, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_lambda98, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.cadr.206 5 26) (close _V10_Dget__foreign__decoder_D238_k500) (bruijn ##.type.524 3 1))
    V_CALL(VGetArg(upenv, 5-1, 26), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D238_k500, env)}),
      upenv->up->up->vars[1]);
 }
}
static void _V10_Dget__foreign__decoder_D238_k499(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k499, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k499, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1390 0 0) ((bruijn ##.call/cc.218 4 38) (bruijn ##.k.1389 2 0) (close _V10_Dget__foreign__decoder_D238_lambda98)) ((bruijn ##.assv.207 4 27) (bruijn ##.k.1389 2 0) (bruijn ##.type.524 2 1) (##inline ##vcore.qcons (##inline ##vcore.qcons '_Bool '(##string ##.string.1707)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'char '(##string ##.string.1708)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'signed-char '(##string ##.string.1709)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'unsigned-char '(##string ##.string.1710)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'short '(##string ##.string.1711)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'unsigned-short '(##string ##.string.1712)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'int '(##string ##.string.1713)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'unsigned-int '(##string ##.string.1713)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'long '(##string ##.string.1713)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'unsigned-long '(##string ##.string.1713)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'long-long '(##string ##.string.1713)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'unsigned-long-long '(##string ##.string.1713)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'double '(##string ##.string.1714)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'float '(##string ##.string.1714)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'VWORD '(##string ##.string.1715)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'c-string '(##string ##.string.1695)) '()))))))))))))))))))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->up->vars[38], runtime,
      upenv->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D238_lambda98, env)}));
} else {
    V_CALL(upenv->up->up->up->vars[27], runtime,
      upenv->up->vars[0],
      upenv->up->vars[1],
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0_UBool,
        VEncodePointer(&_V10_Dstring_D1707.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0char,
        VEncodePointer(&_V10_Dstring_D1708.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0signed__char,
        VEncodePointer(&_V10_Dstring_D1709.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unsigned__char,
        VEncodePointer(&_V10_Dstring_D1710.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0short,
        VEncodePointer(&_V10_Dstring_D1711.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unsigned__short,
        VEncodePointer(&_V10_Dstring_D1712.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0int,
        VEncodePointer(&_V10_Dstring_D1713.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unsigned__int,
        VEncodePointer(&_V10_Dstring_D1713.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0long,
        VEncodePointer(&_V10_Dstring_D1713.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unsigned__long,
        VEncodePointer(&_V10_Dstring_D1713.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0long__long,
        VEncodePointer(&_V10_Dstring_D1713.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unsigned__long__long,
        VEncodePointer(&_V10_Dstring_D1713.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0double,
        VEncodePointer(&_V10_Dstring_D1714.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0float,
        VEncodePointer(&_V10_Dstring_D1714.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0VWORD,
        VEncodePointer(&_V10_Dstring_D1715.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0c__string,
        VEncodePointer(&_V10_Dstring_D1695.sym, VPOINTER_OTHER)),
        VNULL)))))))))))))))));
}
 }
}
static void _V10_Dget__foreign__decoder_D238_k496(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_k496, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_k496, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dget__foreign__decoder_D238_k497) (close _V10_Dget__foreign__decoder_D238_k499))
    V_CALL_FUNC(_V10_Dget__foreign__decoder_D238_k497, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D238_k499, env)}));
 }
}
static void _V10_Dget__foreign__decoder_D238_lambda97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D238_lambda97, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D238_lambda97, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.pair?.215 2 35) (close _V10_Dget__foreign__decoder_D238_k496) (bruijn ##.type.524 0 1))
    V_CALL(upenv->up->vars[35], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D238_k496, env)}),
      _var1);
 }
}
static void _V10_Dloop_D559_k582(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D559_k582, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D559_k582, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.176.558 4 1) (bruijn ##.k.1584 1 0) (bruijn ##.expr.178.560 2 1) (bruijn ##.x.1585 0 0))
    V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[1],
      _var0);
 }
}
static void _V10_Dloop_D559_k581(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D559_k581, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D559_k581, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.178.560 1 1))) ((bruijn ##.reverse.219 18 39) (close _V10_Dloop_D559_k582) (bruijn ##.args.175.561 1 2)) ((bruijn ##.k.1584 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        upenv->vars[1])))) {
    V_CALL(VGetArg(upenv, 18-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D559_k582, env)}),
      upenv->vars[2]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D559_k585(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D559_k585, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D559_k585, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.176.558 7 1) (bruijn ##.k.1578 2 0) (bruijn ##.expr.178.560 5 1) (bruijn ##.x.1580 0 0))
    V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      _var0);
 }
}
static void _V10_Dloop_D559_k584(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D559_k584, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D559_k584, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.219 21 39) (close _V10_Dloop_D559_k585) (bruijn ##.args.175.561 4 2))
    V_CALL(VGetArg(upenv, 21-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D559_k585, env)}),
      upenv->up->up->up->vars[2]);
 }
}
static void _V10_Dloop_D559_lambda116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D559_lambda116, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D559_lambda116, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.kk.177.562 0 1) (close _V10_Dloop_D559_k584) (##inline ##vcore.cdr (bruijn ##.expr.178.560 3 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.178.560 3 1)) (bruijn ##.args.175.561 3 2)))
    V_CALL(_var1, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D559_k584, env)}),
      VInlineCdr2(runtime,
        upenv->up->up->vars[1]),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->up->up->vars[1]),
        upenv->up->up->vars[2]));
 }
}
static void _V10_Dloop_D559_lambda115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D559_lambda115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D559_lambda115, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call/cc.218 19 38) (bruijn ##.k.1577 0 0) (close _V10_Dloop_D559_lambda116))
    V_CALL(VGetArg(upenv, 19-1, 38), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D559_lambda116, env)}));
 }
}
static void _V10_Dloop_D559_k583(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D559_k583, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D559_k583, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call-with-values.217 18 37) (bruijn ##.k.1575 1 0) (close _V10_Dloop_D559_lambda115) (bruijn ##.loop.559 2 0))
    V_CALL(VGetArg(upenv, 18-1, 37), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D559_lambda115, env)}),
      upenv->up->vars[0]);
 }
}
static void _V10_Dloop_D559_lambda114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D559_lambda114, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D559_lambda114, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V10_Dloop_D559_k581) (close _V10_Dloop_D559_k583))
    V_CALL_FUNC(_V10_Dloop_D559_k581, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D559_k583, env)}));
 }
}
static void _V10_Dprint__foreign__function_D239_lambda113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D239_lambda113, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D239_lambda113, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D559_lambda114)) ((bruijn ##.loop.559 0 0) (bruijn ##.k.1574 1 0) (##inline ##vcore.cdr (bruijn ##.expr.173.555 4 0)) '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D559_lambda114, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VInlineCdr2(runtime,
        upenv->up->up->up->vars[0]),
      VNULL);
    }
 }
}
static void _V10_Dprint__foreign__function_D239_lambda112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D239_lambda112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D239_lambda112, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call/cc.218 14 38) (bruijn ##.k.1573 0 0) (close _V10_Dprint__foreign__function_D239_lambda113))
    V_CALL(VGetArg(upenv, 14-1, 38), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D239_lambda113, env)}));
 }
}
static void _V10_Dprint__arg_D568_k590(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__arg_D568_k590, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__arg_D568_k590, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.printf.210 22 30) (bruijn ##.k.1592 2 0) (##string ##.string.1716) (bruijn ##.x.1593 0 0) (bruijn ##.argname.570 2 2) (bruijn ##.name.556 9 0))
    V_CALL(VGetArg(upenv, 22-1, 30), runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1716.sym, VPOINTER_OTHER),
      _var0,
      upenv->up->vars[2],
      VGetArg(upenv, 9-1, 0));
 }
}
static void _V10_Dprint__arg_D568_k589(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__arg_D568_k589, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__arg_D568_k589, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.212 21 32) (close _V10_Dprint__arg_D568_k590) (bruijn ##.x.1594 0 0))
    V_CALL(VGetArg(upenv, 21-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__arg_D568_k590, env)}),
      _var0);
 }
}
static void _V10_Dprint__arg_D568_lambda119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__arg_D568_lambda119, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__arg_D568_lambda119, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.get-foreign-decoder.238 19 16) (close _V10_Dprint__arg_D568_k589) (bruijn ##.arg.569 0 1))
    V_CALL(VGetArg(upenv, 19-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__arg_D568_k589, env)}),
      _var1);
 }
}
static void _V10_Dprint__foreign__function_D239_k608(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D239_k608, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D239_k608, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.printf.210 37 30) (bruijn ##.k.1619 2 0) (##string ##.string.1718) (bruijn ##.x.1620 0 0) (bruijn ##.name.556 24 0))
    V_CALL(VGetArg(upenv, 37-1, 30), runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1718.sym, VPOINTER_OTHER),
      _var0,
      VGetArg(upenv, 24-1, 0));
 }
}
static void _V10_Dprint__foreign__function_D239_k607(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D239_k607, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D239_k607, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.212 36 32) (close _V10_Dprint__foreign__function_D239_k608) (bruijn ##.x.1621 0 0))
    V_CALL(VGetArg(upenv, 36-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D239_k608, env)}),
      _var0);
 }
}
static void _V10_Dprint__foreign__function_D239_k606(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D239_k606, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D239_k606, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1618 1 0) ((bruijn ##.printf.210 35 30) (bruijn ##.k.1619 0 0) (##string ##.string.1717) (bruijn ##.name.556 22 0)) ((bruijn ##.get-foreign-encoder.237 34 15) (close _V10_Dprint__foreign__function_D239_k607) (bruijn ##.ret.554 24 0)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 35-1, 30), runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D1717.sym, VPOINTER_OTHER),
      VGetArg(upenv, 22-1, 0));
} else {
    V_CALL(VGetArg(upenv, 34-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D239_k607, env)}),
      VGetArg(upenv, 24-1, 0));
}
 }
}
static void _V10_Dprint__foreign__function_D239_k617(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D239_k617, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D239_k617, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.print-arg.568 25 0) (bruijn ##.k.1612 1 0) (bruijn ##.arg.573 1 1) (bruijn ##.argname.574 1 2))
    V_CALL(VGetArg(upenv, 25-1, 0), runtime,
      upenv->vars[0],
      upenv->vars[1],
      upenv->vars[2]);
 }
}
static void _V10_Dprint__foreign__function_D239_lambda120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D239_lambda120, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D239_lambda120, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.printf.210 43 30) (close _V10_Dprint__foreign__function_D239_k617) (##string ##.string.1719))
    V_CALL(VGetArg(upenv, 43-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D239_k617, env)}),
      VEncodePointer(&_V10_Dstring_D1719.sym, VPOINTER_OTHER));
 }
}
static void _V10_Dprint__foreign__function_D239_k616(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D239_k616, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D239_k616, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.for-each.213 42 33) (bruijn ##.k.1610 5 0) (close _V10_Dprint__foreign__function_D239_lambda120) (bruijn ##.x.1614 1 0) (bruijn ##.x.1615 0 0))
    V_CALL(VGetArg(upenv, 42-1, 33), runtime,
      VGetArg(upenv, 5-1, 0),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D239_lambda120, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dprint__foreign__function_D239_k615(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D239_k615, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D239_k615, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.212 41 32) (close _V10_Dprint__foreign__function_D239_k616) (bruijn ##.names.567 23 1))
    V_CALL(VGetArg(upenv, 41-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D239_k616, env)}),
      VGetArg(upenv, 23-1, 1));
 }
}
static void _V10_Dprint__foreign__function_D239_k614(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D239_k614, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D239_k614, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.212 40 32) (close _V10_Dprint__foreign__function_D239_k615) (bruijn ##.args.565 26 2))
    V_CALL(VGetArg(upenv, 40-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D239_k615, env)}),
      VGetArg(upenv, 26-1, 2));
 }
}
static void _V10_Dprint__foreign__function_D239_k613(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D239_k613, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D239_k613, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.print-arg.568 20 0) (close _V10_Dprint__foreign__function_D239_k614) (bruijn ##.x.1616 1 0) (bruijn ##.x.1617 0 0))
    V_CALL(VGetArg(upenv, 20-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D239_k614, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dprint__foreign__function_D239_k612(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D239_k612, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D239_k612, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.car.214 38 34) (close _V10_Dprint__foreign__function_D239_k613) (bruijn ##.names.567 20 1))
    V_CALL(VGetArg(upenv, 38-1, 34), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D239_k613, env)}),
      VGetArg(upenv, 20-1, 1));
 }
}
static void _V10_Dprint__foreign__function_D239_k611(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D239_k611, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D239_k611, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1609 1 0) ((bruijn ##.car.214 37 34) (close _V10_Dprint__foreign__function_D239_k612) (bruijn ##.args.565 23 2)) ((bruijn ##.k.1610 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 37-1, 34), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D239_k612, env)}),
      VGetArg(upenv, 23-1, 2));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dprint__foreign__function_D239_k621(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D239_k621, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D239_k621, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1607 1 0) ((bruijn ##.printf.210 40 30) (bruijn ##.k.1608 0 0) (##string ##.string.1720)) ((bruijn ##.printf.210 40 30) (bruijn ##.k.1608 0 0) (##string ##.string.1721)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 40-1, 30), runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D1720.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 40-1, 30), runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D1721.sym, VPOINTER_OTHER));
}
 }
}
static void _V10_Dprint__foreign__function_D239_k623(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D239_k623, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D239_k623, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.167.546 38 1) (bruijn ##.k.1587 27 0) (bruijn ##.x.1589 0 0))
    V_CALL(VGetArg(upenv, 38-1, 1), runtime,
      VGetArg(upenv, 27-1, 0),
      _var0);
 }
}
static void _V10_Dprint__foreign__function_D239_k622(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D239_k622, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D239_k622, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.printf.210 40 30) (close _V10_Dprint__foreign__function_D239_k623) (##string ##.string.1722))
    V_CALL(VGetArg(upenv, 40-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D239_k623, env)}),
      VEncodePointer(&_V10_Dstring_D1722.sym, VPOINTER_OTHER));
 }
}
static void _V10_Dprint__foreign__function_D239_k620(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D239_k620, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D239_k620, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__foreign__function_D239_k621) (close _V10_Dprint__foreign__function_D239_k622))
    V_CALL_FUNC(_V10_Dprint__foreign__function_D239_k621, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D239_k622, env)}));
 }
}
static void _V10_Dprint__foreign__function_D239_k619(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D239_k619, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D239_k619, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.eqv?.211 38 31) (close _V10_Dprint__foreign__function_D239_k620) (bruijn ##.ret.554 27 0) 'void)
    V_CALL(VGetArg(upenv, 38-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D239_k620, env)}),
      VGetArg(upenv, 27-1, 0),
      _V0void);
 }
}
static void _V10_Dprint__foreign__function_D239_k618(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D239_k618, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D239_k618, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.printf.210 37 30) (close _V10_Dprint__foreign__function_D239_k619) (##string ##.string.1723))
    V_CALL(VGetArg(upenv, 37-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D239_k619, env)}),
      VEncodePointer(&_V10_Dstring_D1723.sym, VPOINTER_OTHER));
 }
}
static void _V10_Dprint__foreign__function_D239_k610(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D239_k610, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D239_k610, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__foreign__function_D239_k611) (close _V10_Dprint__foreign__function_D239_k618))
    V_CALL_FUNC(_V10_Dprint__foreign__function_D239_k611, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D239_k618, env)}));
 }
}
static void _V10_Dprint__foreign__function_D239_k609(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D239_k609, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D239_k609, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.pair?.215 35 35) (close _V10_Dprint__foreign__function_D239_k610) (bruijn ##.args.565 21 2))
    V_CALL(VGetArg(upenv, 35-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D239_k610, env)}),
      VGetArg(upenv, 21-1, 2));
 }
}
static void _V10_Dprint__foreign__function_D239_k605(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D239_k605, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D239_k605, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__foreign__function_D239_k606) (close _V10_Dprint__foreign__function_D239_k609))
    V_CALL_FUNC(_V10_Dprint__foreign__function_D239_k606, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D239_k609, env)}));
 }
}
static void _V10_Dprint__foreign__function_D239_k604(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D239_k604, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D239_k604, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.eqv?.211 33 31) (close _V10_Dprint__foreign__function_D239_k605) (bruijn ##.ret.554 22 0) 'void)
    V_CALL(VGetArg(upenv, 33-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D239_k605, env)}),
      VGetArg(upenv, 22-1, 0),
      _V0void);
 }
}
static void _V10_Dprint__foreign__function_D239_k603(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D239_k603, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D239_k603, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.printf.210 32 30) (close _V10_Dprint__foreign__function_D239_k604) (##string ##.string.1724))
    V_CALL(VGetArg(upenv, 32-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D239_k604, env)}),
      VEncodePointer(&_V10_Dstring_D1724.sym, VPOINTER_OTHER));
 }
}
static void _V10_Dprint__foreign__function_D239_lambda121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D239_lambda121, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D239_lambda121, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##.printf.210 32 30) (bruijn ##.k.1622 0 0) (##string ##.string.1725) (bruijn ##.e.572 0 1))
    V_CALL(VGetArg(upenv, 32-1, 30), runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D1725.sym, VPOINTER_OTHER),
      _var1);
 }
}
static void _V10_Dprint__foreign__function_D239_k602(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D239_k602, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D239_k602, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.for-each.213 31 33) (close _V10_Dprint__foreign__function_D239_k603) (close _V10_Dprint__foreign__function_D239_lambda121) (bruijn ##.names.567 13 1))
    V_CALL(VGetArg(upenv, 31-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D239_k603, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D239_lambda121, env)}),
      VGetArg(upenv, 13-1, 1));
 }
}
static void _V10_Dprint__foreign__function_D239_k601(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D239_k601, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D239_k601, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.printf.210 30 30) (close _V10_Dprint__foreign__function_D239_k602) (##string ##.string.1726) (bruijn ##.mangled.566 12 0) (bruijn ##.x.1623 2 0) (bruijn ##.x.1624 0 0))
    V_CALL(VGetArg(upenv, 30-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D239_k602, env)}),
      VEncodePointer(&_V10_Dstring_D1726.sym, VPOINTER_OTHER),
      VGetArg(upenv, 12-1, 0),
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Dprint__foreign__function_D239_k600(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D239_k600, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D239_k600, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.+.216 29 36) (close _V10_Dprint__foreign__function_D239_k601) 1 (bruijn ##.x.1625 0 0))
    V_CALL(VGetArg(upenv, 29-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D239_k601, env)}),
      VEncodeInt(1l),
      _var0);
 }
}
static void _V10_Dprint__foreign__function_D239_k599(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D239_k599, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D239_k599, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.length.209 28 29) (close _V10_Dprint__foreign__function_D239_k600) (bruijn ##.args.565 14 2))
    V_CALL(VGetArg(upenv, 28-1, 29), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D239_k600, env)}),
      VGetArg(upenv, 14-1, 2));
 }
}
static void _V10_Dprint__foreign__function_D239_k598(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D239_k598, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D239_k598, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.+.216 27 36) (close _V10_Dprint__foreign__function_D239_k599) 1 (bruijn ##.x.1626 0 0))
    V_CALL(VGetArg(upenv, 27-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D239_k599, env)}),
      VEncodeInt(1l),
      _var0);
 }
}
static void _V10_Dprint__foreign__function_D239_k597(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D239_k597, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D239_k597, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.length.209 26 29) (close _V10_Dprint__foreign__function_D239_k598) (bruijn ##.args.565 12 2))
    V_CALL(VGetArg(upenv, 26-1, 29), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D239_k598, env)}),
      VGetArg(upenv, 12-1, 2));
 }
}
static void _V10_Dprint__foreign__function_D239_k596(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D239_k596, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D239_k596, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.printf.210 25 30) (close _V10_Dprint__foreign__function_D239_k597) (##string ##.string.1727) (bruijn ##.mangled.566 7 0) (bruijn ##.x.1627 0 0))
    V_CALL(VGetArg(upenv, 25-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D239_k597, env)}),
      VEncodePointer(&_V10_Dstring_D1727.sym, VPOINTER_OTHER),
      VGetArg(upenv, 7-1, 0),
      _var0);
 }
}
static void _V10_Dprint__foreign__function_D239_k595(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D239_k595, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D239_k595, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.+.216 24 36) (close _V10_Dprint__foreign__function_D239_k596) 1 (bruijn ##.x.1628 0 0))
    V_CALL(VGetArg(upenv, 24-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D239_k596, env)}),
      VEncodeInt(1l),
      _var0);
 }
}
static void _V10_Dprint__foreign__function_D239_k594(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D239_k594, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D239_k594, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.length.209 23 29) (close _V10_Dprint__foreign__function_D239_k595) (bruijn ##.args.565 9 2))
    V_CALL(VGetArg(upenv, 23-1, 29), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D239_k595, env)}),
      VGetArg(upenv, 9-1, 2));
 }
}
static void _V10_Dprint__foreign__function_D239_k593(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D239_k593, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D239_k593, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.printf.210 22 30) (close _V10_Dprint__foreign__function_D239_k594) (##string ##.string.1724))
    V_CALL(VGetArg(upenv, 22-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D239_k594, env)}),
      VEncodePointer(&_V10_Dstring_D1724.sym, VPOINTER_OTHER));
 }
}
static void _V10_Dprint__foreign__function_D239_lambda122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D239_lambda122, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D239_lambda122, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##.printf.210 22 30) (bruijn ##.k.1629 0 0) (##string ##.string.1728) (bruijn ##.e.571 0 1))
    V_CALL(VGetArg(upenv, 22-1, 30), runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D1728.sym, VPOINTER_OTHER),
      _var1);
 }
}
static void _V10_Dprint__foreign__function_D239_k592(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D239_k592, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D239_k592, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.for-each.213 21 33) (close _V10_Dprint__foreign__function_D239_k593) (close _V10_Dprint__foreign__function_D239_lambda122) (bruijn ##.names.567 3 1))
    V_CALL(VGetArg(upenv, 21-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D239_k593, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D239_lambda122, env)}),
      upenv->up->up->vars[1]);
 }
}
static void _V10_Dprint__foreign__function_D239_k591(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D239_k591, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D239_k591, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.printf.210 20 30) (close _V10_Dprint__foreign__function_D239_k592) (##string ##.string.1729) (bruijn ##.name.556 7 0))
    V_CALL(VGetArg(upenv, 20-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D239_k592, env)}),
      VEncodePointer(&_V10_Dstring_D1729.sym, VPOINTER_OTHER),
      VGetArg(upenv, 7-1, 0));
 }
}
static void _V10_Dprint__foreign__function_D239_lambda118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D239_lambda118, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dprint__arg_D568_lambda119)) ((bruijn ##.printf.210 19 30) (close _V10_Dprint__foreign__function_D239_k591) (##string ##.string.1730) (##inline ##vcore.car (bruijn ##.expr.171.551 10 0))))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__arg_D568_lambda119, env)});
    V_CALL(VGetArg(upenv, 19-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D239_k591, env)}),
      VEncodePointer(&_V10_Dstring_D1730.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        VGetArg(upenv, 10-1, 0)));
    }
 }
}
static void _V10_Dprint__foreign__function_D239_k588(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D239_k588, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D239_k588, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__foreign__function_D239_lambda118) (bruijn ##.x.1590 2 0) (bruijn ##.x.1591 0 0))
    V_CALL_FUNC(_V10_Dprint__foreign__function_D239_lambda118, env, runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Dprint__foreign__function_D239_k587(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D239_k587, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D239_k587, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iota.208 16 28) (close _V10_Dprint__foreign__function_D239_k588) (bruijn ##.x.1630 0 0))
    V_CALL(VGetArg(upenv, 16-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D239_k588, env)}),
      _var0);
 }
}
static void _V10_Dprint__foreign__function_D239_k586(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D239_k586, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D239_k586, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.length.209 15 29) (close _V10_Dprint__foreign__function_D239_k587) (bruijn ##.args.565 1 2))
    V_CALL(VGetArg(upenv, 15-1, 29), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D239_k587, env)}),
      upenv->vars[2]);
 }
}
static void _V10_Dprint__foreign__function_D239_lambda117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D239_lambda117, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D239_lambda117, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.564 0 1)) ((bruijn ##.mangle-foreign-function.236 13 14) (close _V10_Dprint__foreign__function_D239_k586) (bruijn ##.name.556 1 0)) ((bruijn ##.k.1587 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    V_CALL(VGetArg(upenv, 13-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D239_k586, env)}),
      upenv->vars[0]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dprint__foreign__function_D239_k580(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D239_k580, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D239_k580, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call-with-values.217 13 37) (bruijn ##.k.1567 7 0) (close _V10_Dprint__foreign__function_D239_lambda112) (close _V10_Dprint__foreign__function_D239_lambda117))
    V_CALL(VGetArg(upenv, 13-1, 37), runtime,
      VGetArg(upenv, 7-1, 0),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D239_lambda112, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D239_lambda117, env)}));
 }
}
static void _V10_Dprint__foreign__function_D239_k579(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D239_k579, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D239_k579, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.173.555 0 0)) ((close _V10_Dprint__foreign__function_D239_k580) (##inline ##vcore.car (bruijn ##.expr.173.555 0 0))) ((bruijn ##.k.1567 6 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dprint__foreign__function_D239_k580, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dprint__foreign__function_D239_k578(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D239_k578, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D239_k578, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__foreign__function_D239_k579) (##inline ##vcore.cdr (bruijn ##.expr.172.553 1 0)))
    V_CALL_FUNC(_V10_Dprint__foreign__function_D239_k579, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
 }
}
static void _V10_Dprint__foreign__function_D239_k577(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D239_k577, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D239_k577, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.172.553 0 0)) ((close _V10_Dprint__foreign__function_D239_k578) (##inline ##vcore.car (bruijn ##.expr.172.553 0 0))) ((bruijn ##.k.1567 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dprint__foreign__function_D239_k578, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dprint__foreign__function_D239_k576(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D239_k576, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D239_k576, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.171.551 0 0)) ((close _V10_Dprint__foreign__function_D239_k577) (##inline ##vcore.cdr (bruijn ##.expr.171.551 0 0))) ((bruijn ##.k.1567 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dprint__foreign__function_D239_k577, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dprint__foreign__function_D239_k575(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D239_k575, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D239_k575, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.170.549 0 0)) ((close _V10_Dprint__foreign__function_D239_k576) (##inline ##vcore.cdr (bruijn ##.expr.170.549 0 0))) ((bruijn ##.k.1567 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dprint__foreign__function_D239_k576, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dprint__foreign__function_D239_k574(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D239_k574, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D239_k574, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1568 0 0) ((close _V10_Dprint__foreign__function_D239_k575) (##inline ##vcore.cdr (bruijn ##.expr.169.548 2 0))) ((bruijn ##.k.1567 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dprint__foreign__function_D239_k575, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dprint__foreign__function_D239_k573(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D239_k573, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D239_k573, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.169.548 1 0)) ((bruijn ##.equal?.220 6 40) (close _V10_Dprint__foreign__function_D239_k574) '##foreign.function (##inline ##vcore.car (bruijn ##.expr.169.548 1 0))) ((bruijn ##.k.1567 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 6-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D239_k574, env)}),
      _V10foreign_Dfunction,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dprint__foreign__function_D239_k624(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D239_k624, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D239_k624, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.error.221 6 41) (bruijn ##.k.1564 3 0) (##string ##.string.1652))
    V_CALL(VGetArg(upenv, 6-1, 41), runtime,
      upenv->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1652.sym, VPOINTER_OTHER));
 }
}
static void _V10_Dprint__foreign__function_D239_lambda111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D239_lambda111, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__foreign__function_D239_k573) (close _V10_Dprint__foreign__function_D239_k624))
    V_CALL_FUNC(_V10_Dprint__foreign__function_D239_k573, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D239_k624, env)}));
 }
}
static void _V10_Dprint__foreign__function_D239_lambda110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D239_lambda110, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__foreign__function_D239_lambda111) (bruijn ##.input.168.547 0 0))
    V_CALL_FUNC(_V10_Dprint__foreign__function_D239_lambda111, env, runtime,
      _var0);
 }
}
static void _V10_Dprint__foreign__function_D239_lambda109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D239_lambda109, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D239_lambda109, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dprint__foreign__function_D239_lambda110) (bruijn ##.expr.545 1 1))
    V_CALL_FUNC(_V10_Dprint__foreign__function_D239_lambda110, env, runtime,
      upenv->vars[1]);
 }
}
static void _V10_Dprint__foreign__function_D239_lambda108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D239_lambda108, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D239_lambda108, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.call/cc.218 2 38) (bruijn ##.k.1563 0 0) (close _V10_Dprint__foreign__function_D239_lambda109))
    V_CALL(upenv->up->vars[38], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D239_lambda109, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17, VWORD _var18, VWORD _var19, VWORD _var20, VWORD _var21, VWORD _var22, VWORD _var23, VWORD _var24, VWORD _var25, VWORD _var26, VWORD _var27, VWORD _var28, VWORD _var29, VWORD _var30, VWORD _var31, VWORD _var32, VWORD _var33, VWORD _var34, VWORD _var35, VWORD _var36, VWORD _var37, VWORD _var38, VWORD _var39, VWORD _var40, VWORD _var41) {
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda2, runtime, upenv, 42, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7, _var8, _var9, _var10, _var11, _var12, _var13, _var14, _var15, _var16, _var17, _var18, _var19, _var20, _var21, _var22, _var23, _var24, _var25, _var26, _var27, _var28, _var29, _var30, _var31, _var32, _var33, _var34, _var35, _var36, _var37, _var38, _var39, _var40, _var41) {
  struct { VEnv env; VWORD argv[42]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 42, 42, upenv);
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
  env->vars[28] = _var28;
  env->vars[29] = _var29;
  env->vars[30] = _var30;
  env->vars[31] = _var31;
  env->vars[32] = _var32;
  env->vars[33] = _var33;
  env->vars[34] = _var34;
  env->vars[35] = _var35;
  env->vars[36] = _var36;
  env->vars[37] = _var37;
  env->vars[38] = _var38;
  env->vars[39] = _var39;
  env->vars[40] = _var40;
  env->vars[41] = _var41;
  // (letrec 18 ((close _V10_Dreduce__declare_D222_lambda3) (close _V10_Dfind__typedef_D223_lambda27) (close _V10_Dreduce__type_D224_lambda29) (close _V10_Dunwrap__typedef_D225_lambda49) (close _V10_Dunwrap__function_D226_lambda53) (close _V10_Dunwrap__enums_D227_lambda58) (close _V10_Dunwrap__declares_D228_lambda61) (close _V10_Dtable___Gdefines_D229_lambda68) (close _V10_Ddeep__copy_D230_lambda77) (close _V10_Dvalidate__foreign__function_D231_lambda78) (close _V10_Dfind__file_D232_lambda88) (close _V10_Dget__install__root_D233_lambda89) (close _V10_Dmake__preprocess__command_D234_lambda90) (close _V10_Dresolve__foreign__import_D235_lambda91) (close _V10_Dmangle__foreign__function_D236_lambda95) (close _V10_Dget__foreign__encoder_D237_lambda96) (close _V10_Dget__foreign__decoder_D238_lambda97) (close _V10_Dprint__foreign__function_D239_lambda108)) ((bruijn ##.k.576 49 0) (##inline ##vcore.cons (##inline ##vcore.cons 'mangle-foreign-function (bruijn ##.mangle-foreign-function.236 0 14)) (##inline ##vcore.cons (##inline ##vcore.cons 'validate-foreign-function (bruijn ##.validate-foreign-function.231 0 9)) (##inline ##vcore.cons (##inline ##vcore.cons 'print-foreign-function (bruijn ##.print-foreign-function.239 0 17)) (##inline ##vcore.cons (##inline ##vcore.cons 'resolve-foreign-import (bruijn ##.resolve-foreign-import.235 0 13)) (##inline ##vcore.cons (##inline ##vcore.cons 'get-foreign-encoder (bruijn ##.get-foreign-encoder.237 0 15)) (##inline ##vcore.cons (##inline ##vcore.cons 'get-foreign-decoder (bruijn ##.get-foreign-decoder.238 0 16)) '()))))))))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[18]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 18, 18, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare_D222_lambda3, env)});
    env->vars[1] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__typedef_D223_lambda27, env)});
    env->vars[2] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__type_D224_lambda29, env)});
    env->vars[3] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__typedef_D225_lambda49, env)});
    env->vars[4] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__function_D226_lambda53, env)});
    env->vars[5] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__enums_D227_lambda58, env)});
    env->vars[6] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__declares_D228_lambda61, env)});
    env->vars[7] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D229_lambda68, env)});
    env->vars[8] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddeep__copy_D230_lambda77, env)});
    env->vars[9] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D231_lambda78, env)});
    env->vars[10] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__file_D232_lambda88, env)});
    env->vars[11] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__install__root_D233_lambda89, env)});
    env->vars[12] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmake__preprocess__command_D234_lambda90, env)});
    env->vars[13] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D235_lambda91, env)});
    env->vars[14] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmangle__foreign__function_D236_lambda95, env)});
    env->vars[15] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__encoder_D237_lambda96, env)});
    env->vars[16] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D238_lambda97, env)});
    env->vars[17] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D239_lambda108, env)});
    V_CALL(VGetArg(upenv, 49-1, 0), runtime,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0mangle__foreign__function,
        env->vars[14]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0validate__foreign__function,
        env->vars[9]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0print__foreign__function,
        env->vars[17]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0resolve__foreign__import,
        env->vars[13]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0get__foreign__encoder,
        env->vars[15]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0get__foreign__decoder,
        env->vars[16]),
        VNULL)))))));
    }
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k47, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_lambda2) (bruijn ##.x.577 41 0) (bruijn ##.x.578 40 0) (bruijn ##.x.579 39 0) (bruijn ##.x.580 38 0) (bruijn ##.x.581 37 0) (bruijn ##.x.582 36 0) (bruijn ##.x.583 35 0) (bruijn ##.x.584 34 0) (bruijn ##.x.585 33 0) (bruijn ##.x.586 32 0) (bruijn ##.x.587 31 0) (bruijn ##.x.588 30 0) (bruijn ##.x.589 29 0) (bruijn ##.x.590 28 0) (bruijn ##.x.591 27 0) (bruijn ##.x.592 26 0) (bruijn ##.x.593 25 0) (bruijn ##.x.594 24 0) (bruijn ##.x.595 23 0) (bruijn ##.x.596 22 0) (bruijn ##.x.597 21 0) (bruijn ##.x.598 20 0) (bruijn ##.x.599 19 0) (bruijn ##.x.600 18 0) (bruijn ##.x.601 17 0) (bruijn ##.x.602 16 0) (bruijn ##.x.603 15 0) (bruijn ##.x.604 14 0) (bruijn ##.x.605 13 0) (bruijn ##.x.606 12 0) (bruijn ##.x.607 11 0) (bruijn ##.x.608 10 0) (bruijn ##.x.609 9 0) (bruijn ##.x.610 8 0) (bruijn ##.x.611 7 0) (bruijn ##.x.612 6 0) (bruijn ##.x.613 5 0) (bruijn ##.x.614 4 0) (bruijn ##.x.615 3 0) (bruijn ##.x.616 2 0) (bruijn ##.x.617 1 0) (bruijn ##.x.618 0 0))
    V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_lambda2, env, runtime,
      VGetArg(upenv, 41-1, 0),
      VGetArg(upenv, 40-1, 0),
      VGetArg(upenv, 39-1, 0),
      VGetArg(upenv, 38-1, 0),
      VGetArg(upenv, 37-1, 0),
      VGetArg(upenv, 36-1, 0),
      VGetArg(upenv, 35-1, 0),
      VGetArg(upenv, 34-1, 0),
      VGetArg(upenv, 33-1, 0),
      VGetArg(upenv, 32-1, 0),
      VGetArg(upenv, 31-1, 0),
      VGetArg(upenv, 30-1, 0),
      VGetArg(upenv, 29-1, 0),
      VGetArg(upenv, 28-1, 0),
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
static void _V0vanity_V0compiler_V0ffi_V20_k46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k46, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 41 0) (close _V0vanity_V0compiler_V0ffi_V20_k47) 'error)
    V_CALL(VGetArg(upenv, 41-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k47, env)}),
      _V0error);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k45, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 40 0) (close _V0vanity_V0compiler_V0ffi_V20_k46) 'equal?)
    V_CALL(VGetArg(upenv, 40-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k46, env)}),
      _V0equal_Q);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k44, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 39 0) (close _V0vanity_V0compiler_V0ffi_V20_k45) 'reverse)
    V_CALL(VGetArg(upenv, 39-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k45, env)}),
      _V0reverse);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k43, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 38 0) (close _V0vanity_V0compiler_V0ffi_V20_k44) 'call/cc)
    V_CALL(VGetArg(upenv, 38-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k44, env)}),
      _V0call_Wcc);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k42, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 37 0) (close _V0vanity_V0compiler_V0ffi_V20_k43) 'call-with-values)
    V_CALL(VGetArg(upenv, 37-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k43, env)}),
      _V0call__with__values);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k41, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 36 0) (close _V0vanity_V0compiler_V0ffi_V20_k42) '+)
    V_CALL(VGetArg(upenv, 36-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k42, env)}),
      _V0_P);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k40, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 35 0) (close _V0vanity_V0compiler_V0ffi_V20_k41) 'pair?)
    V_CALL(VGetArg(upenv, 35-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k41, env)}),
      _V0pair_Q);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k39, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 34 0) (close _V0vanity_V0compiler_V0ffi_V20_k40) 'car)
    V_CALL(VGetArg(upenv, 34-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k40, env)}),
      _V0car);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k38, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 33 0) (close _V0vanity_V0compiler_V0ffi_V20_k39) 'for-each)
    V_CALL(VGetArg(upenv, 33-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k39, env)}),
      _V0for__each);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k37, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 32 0) (close _V0vanity_V0compiler_V0ffi_V20_k38) 'cdr)
    V_CALL(VGetArg(upenv, 32-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k38, env)}),
      _V0cdr);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k36, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 31 0) (close _V0vanity_V0compiler_V0ffi_V20_k37) 'eqv?)
    V_CALL(VGetArg(upenv, 31-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k37, env)}),
      _V0eqv_Q);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k35, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 30 0) (close _V0vanity_V0compiler_V0ffi_V20_k36) 'printf)
    V_CALL(VGetArg(upenv, 30-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k36, env)}),
      _V0printf);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k34, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 29 0) (close _V0vanity_V0compiler_V0ffi_V20_k35) 'length)
    V_CALL(VGetArg(upenv, 29-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k35, env)}),
      _V0length);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k33, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 28 0) (close _V0vanity_V0compiler_V0ffi_V20_k34) 'iota)
    V_CALL(VGetArg(upenv, 28-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k34, env)}),
      _V0iota);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k32, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 27 0) (close _V0vanity_V0compiler_V0ffi_V20_k33) 'assv)
    V_CALL(VGetArg(upenv, 27-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k33, env)}),
      _V0assv);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k31, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 26 0) (close _V0vanity_V0compiler_V0ffi_V20_k32) 'cadr)
    V_CALL(VGetArg(upenv, 26-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k32, env)}),
      _V0cadr);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k30, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 25 0) (close _V0vanity_V0compiler_V0ffi_V20_k31) 'sprintf)
    V_CALL(VGetArg(upenv, 25-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k31, env)}),
      _V0sprintf);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k29, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 24 0) (close _V0vanity_V0compiler_V0ffi_V20_k30) 'compiler-error)
    V_CALL(VGetArg(upenv, 24-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k30, env)}),
      _V0compiler__error);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k28, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 23 0) (close _V0vanity_V0compiler_V0ffi_V20_k29) 'string?)
    V_CALL(VGetArg(upenv, 23-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k29, env)}),
      _V0string_Q);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k27, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 22 0) (close _V0vanity_V0compiler_V0ffi_V20_k28) 'not)
    V_CALL(VGetArg(upenv, 22-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k28, env)}),
      _V0not);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k26, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 21 0) (close _V0vanity_V0compiler_V0ffi_V20_k27) 'close-port)
    V_CALL(VGetArg(upenv, 21-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k27, env)}),
      _V0close__port);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k25, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 20 0) (close _V0vanity_V0compiler_V0ffi_V20_k26) 'cons)
    V_CALL(VGetArg(upenv, 20-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k26, env)}),
      _V0cons);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k24, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 19 0) (close _V0vanity_V0compiler_V0ffi_V20_k25) 'open-input-process)
    V_CALL(VGetArg(upenv, 19-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k25, env)}),
      _V0open__input__process);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k23, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 18 0) (close _V0vanity_V0compiler_V0ffi_V20_k24) 'gcc-path)
    V_CALL(VGetArg(upenv, 18-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k24, env)}),
      _V0gcc__path);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k22, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 17 0) (close _V0vanity_V0compiler_V0ffi_V20_k23) 'platform)
    V_CALL(VGetArg(upenv, 17-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k23, env)}),
      _V0platform);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k21, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 16 0) (close _V0vanity_V0compiler_V0ffi_V20_k22) 'install-root)
    V_CALL(VGetArg(upenv, 16-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k22, env)}),
      _V0install__root);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k20, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 15 0) (close _V0vanity_V0compiler_V0ffi_V20_k21) 'file-exists?)
    V_CALL(VGetArg(upenv, 15-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k21, env)}),
      _V0file__exists_Q);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k19, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 14 0) (close _V0vanity_V0compiler_V0ffi_V20_k20) 'null?)
    V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k20, env)}),
      _V0null_Q);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k18, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 13 0) (close _V0vanity_V0compiler_V0ffi_V20_k19) 'cdddr)
    V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k19, env)}),
      _V0cdddr);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k17, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 12 0) (close _V0vanity_V0compiler_V0ffi_V20_k18) 'caddr)
    V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k18, env)}),
      _V0caddr);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k16, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 11 0) (close _V0vanity_V0compiler_V0ffi_V20_k17) 'cdadr)
    V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k17, env)}),
      _V0cdadr);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k15, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 10 0) (close _V0vanity_V0compiler_V0ffi_V20_k16) 'string-copy)
    V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k16, env)}),
      _V0string__copy);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k14, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 9 0) (close _V0vanity_V0compiler_V0ffi_V20_k15) 'symbol->string)
    V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k15, env)}),
      _V0symbol___Gstring);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k13, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 8 0) (close _V0vanity_V0compiler_V0ffi_V20_k14) 'cadar)
    V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k14, env)}),
      _V0cadar);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k12, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 7 0) (close _V0vanity_V0compiler_V0ffi_V20_k13) 'member)
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k13, env)}),
      _V0member);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k11, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 6 0) (close _V0vanity_V0compiler_V0ffi_V20_k12) 'caddar)
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k12, env)}),
      _V0caddar);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k10, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 5 0) (close _V0vanity_V0compiler_V0ffi_V20_k11) 'caar)
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k11, env)}),
      _V0caar);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k9, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 4 0) (close _V0vanity_V0compiler_V0ffi_V20_k10) 'string->symbol)
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k10, env)}),
      _V0string___Gsymbol);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k8, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 3 0) (close _V0vanity_V0compiler_V0ffi_V20_k9) 'map)
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k9, env)}),
      _V0map);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k7, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 2 0) (close _V0vanity_V0compiler_V0ffi_V20_k8) 'list)
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k8, env)}),
      _V0list);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k6, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 1 0) (close _V0vanity_V0compiler_V0ffi_V20_k7) 'symbol?)
    V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k7, env)}),
      _V0symbol_Q);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k5, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 0 0) (close _V0vanity_V0compiler_V0ffi_V20_k6) 'memv)
    V_CALL(_var0, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k6, env)}),
      _V0memv);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k4, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.make-import (close _V0vanity_V0compiler_V0ffi_V20_k5) (##string ##.string.1731) (bruijn ##.x.1643 3 0) (bruijn ##.x.1644 2 0) (bruijn ##.x.1645 1 0) (bruijn ##.x.1646 0 0))
    V_CALL_FUNC(VMakeImport2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k5, env)}),
      VEncodePointer(&_V10_Dstring_D1731.sym, VPOINTER_OTHER),
      upenv->up->up->vars[0],
      upenv->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k3, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0ffi_V20_k4) (##string ##.string.1732))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k4, env)}),
      VEncodePointer(&_V10_Dstring_D1732.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k2, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0ffi_V20_k3) (##string ##.string.1733))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k3, env)}),
      VEncodePointer(&_V10_Dstring_D1733.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0ffi_V20_k2) (##string ##.string.1734))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k2, env)}),
      VEncodePointer(&_V10_Dstring_D1734.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0ffi_V20_k1) (##string ##.string.1735))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k1, env)}),
      VEncodePointer(&_V10_Dstring_D1735.sym, VPOINTER_OTHER));
 }
}
VFunc _V0vanity_V0compiler_V0ffi_V20 = (VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda1;
