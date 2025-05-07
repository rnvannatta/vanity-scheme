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
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1805 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1804 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D1803 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D1802 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "_V0vanity_V0compiler_V0config_V20" };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D1801 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "_V0vanity_V0compiler_V0ffi_V20" };
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
VWEAK VWORD _V0reverse;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0reverse = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "reverse" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "error" };
VWEAK VWORD _V0get__foreign__decoder;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0get__foreign__decoder = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "get-foreign-decoder" };
VWEAK VWORD _V0get__foreign__encoder;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0get__foreign__encoder = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "get-foreign-encoder" };
VWEAK VWORD _V0resolve__foreign__import;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V0resolve__foreign__import = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "resolve-foreign-import" };
VWEAK VWORD _V0print__foreign__function;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V0print__foreign__function = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "print-foreign-function" };
VWEAK VWORD _V0validate__foreign__function;VWEAK struct { VBlob sym; char bytes[26]; } _VW_V0validate__foreign__function = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 26 }, "validate-foreign-function" };
VWEAK VWORD _V0mangle__foreign__function;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V0mangle__foreign__function = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "mangle-foreign-function" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1800 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "~A;~N" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1799 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "));~N" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D1798 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "  }~N}~N" };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D1797 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "  V_CALL(_k, runtime, _ret);~N" };
static struct { VBlob sym; char bytes[32]; } _V10_Dstring_D1796 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 32 }, "  V_CALL(_k, runtime, VVOID);~N" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1795 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, ", " };
static struct { VBlob sym; char bytes[24]; } _V10_Dstring_D1794 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "    VWORD _ret = ~A(~A(" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D1793 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "(~A(" };
static struct { VBlob sym; char bytes[46]; } _V10_Dstring_D1792 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 46 }, "static void _V30~A_shim(V_CORE_ARGS, VWORD _k" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D1791 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, ", VWORD _arg~A" };
static struct { VBlob sym; char bytes[43]; } _V10_Dstring_D1790 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 43 }, "  V_ARG_CHECK3(runtime, \"~A\", ~A, argc);~N" };
static struct { VBlob sym; char bytes[62]; } _V10_Dstring_D1789 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 62 }, "  V_GC_CHECK2_VARARGS((VFunc)~A, runtime, statics, ~A, ~A, _k" };
static struct { VBlob sym; char bytes[56]; } _V10_Dstring_D1788 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 56 }, "static V_BEGIN_FUNC(_V30~A_shim, \"_V30~A_shim\", ~A, _k " };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D1787 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, ", _arg~A" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1786 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, ") {~N" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D1785 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "~A(runtime, _arg~A, \"~A\")" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1784 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "VCheckedDecodeVWORD2" };
static struct { VBlob sym; char bytes[22]; } _V10_Dstring_D1783 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "VCheckedDecodeNumber2" };
static struct { VBlob sym; char bytes[19]; } _V10_Dstring_D1782 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, "VCheckedDecodeInt2" };
static struct { VBlob sym; char bytes[29]; } _V10_Dstring_D1781 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 29 }, "VCheckedDecodeUnsignedShort2" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1780 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "VCheckedDecodeShort2" };
static struct { VBlob sym; char bytes[28]; } _V10_Dstring_D1779 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 28 }, "VCheckedDecodeUnsignedChar2" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D1778 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "VCheckedDecodeSignedChar2" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D1777 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "VCheckedDecodeChar2" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D1776 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "VCheckedDecodeBool2" };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D1775 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "VCheckedDecodeForeignPointer2" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D1774 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "VCheckedDecodeS8Ptr" };
VWEAK VWORD _V0s8__pointer;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0s8__pointer = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "s8-pointer" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D1773 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "VCheckedDecodeU8Ptr" };
VWEAK VWORD _V0u8__pointer;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0u8__pointer = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "u8-pointer" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1772 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "VCheckedDecodeS16Ptr" };
VWEAK VWORD _V0s16__pointer;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0s16__pointer = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "s16-pointer" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1771 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "VCheckedDecodeU16Ptr" };
VWEAK VWORD _V0u16__pointer;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0u16__pointer = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "u16-pointer" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1770 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "VCheckedDecodeS32Ptr" };
VWEAK VWORD _V0s32__pointer;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0s32__pointer = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "s32-pointer" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1769 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "VCheckedDecodeF64Ptr" };
VWEAK VWORD _V0f64__pointer;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0f64__pointer = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "f64-pointer" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1768 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "VCheckedDecodeF32Ptr" };
VWEAK VWORD _V0f32__pointer;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0f32__pointer = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "f32-pointer" };
static struct { VBlob sym; char bytes[23]; } _V10_Dstring_D1767 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, "VCheckedDecodeVoidPtr2" };
static struct { VBlob sym; char bytes[28]; } _V10_Dstring_D1766 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 28 }, "VCheckedDecodeConstVoidPtr2" };
VWEAK VWORD _V0const__void__pointer;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0const__void__pointer = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "const-void-pointer" };
static struct { VBlob sym; char bytes[28]; } _V10_Dstring_D1765 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 28 }, "VCheckedDecodeConstCString2" };
VWEAK VWORD _V0const__c__string;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0const__c__string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "const-c-string" };
static struct { VBlob sym; char bytes[23]; } _V10_Dstring_D1764 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, "VCheckedDecodeCString2" };
VWEAK VWORD _V0c__string;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0c__string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "c-string" };
VWEAK VWORD _V0VWORD;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0VWORD = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "VWORD" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D1763 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VEncodeDouble" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D1762 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VEncodeInt" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D1761 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VEncodeChar" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D1760 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VEncodeBool" };
static struct { VBlob sym; char bytes[22]; } _V10_Dstring_D1759 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "VEncodeForeignPointer" };
VWEAK VWORD _V0void__pointer;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0void__pointer = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "void-pointer" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D1758 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "_V30~A_shim" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1757 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "VForeignParseHeaderC" };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D1756 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "Invalid foreign import syntax" };
VWEAK VWORD _V10foreign_Dimport;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V10foreign_Dimport = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "##foreign.import" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D1755 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "#include <~A>\n" };
VWEAK VWORD _V10foreign_Ddeclare;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10foreign_Ddeclare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##foreign.declare" };
static struct { VBlob sym; char bytes[22]; } _V10_Dstring_D1754 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "File must be a string" };
VWEAK VWORD _V0windows;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0windows = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "windows" };
static struct { VBlob sym; char bytes[73]; } _V10_Dstring_D1753 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 73 }, "\"~A\" -E -P -undef -std=c11 -nostdinc -D__VANITY__ -w \"~A\" -I \"~A/~A/~A/\"" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1752 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "include/vscheme/stdc" };
static struct { VBlob sym; char bytes[75]; } _V10_Dstring_D1751 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 75 }, "\"\"~A\" -E -P -undef -std=c11 -nostdinc -D__VANITY__ -w \"~A\" -I \"~A/~A/~A/\"\"" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D1750 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "VExePath" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D1749 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "~A/../" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1748 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "~A/~A" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D1747 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "Unable to open header file" };
static struct { VBlob sym; char bytes[19]; } _V10_Dstring_D1746 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, "VForeignParseDeclC" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1745 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "VForeignReleaseParse" };
static struct { VBlob sym; char bytes[32]; } _V10_Dstring_D1744 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 32 }, "Invalid foreign function syntax" };
static struct { VBlob sym; char bytes[38]; } _V10_Dstring_D1743 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 38 }, "Unsupported foreign function language" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D1742 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "Declaration is not a single function" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D1741 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "naked_declaration" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D1740 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "unknown entry in ffi table" };
static struct { VBlob sym; char bytes[40]; } _V10_Dstring_D1739 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 40 }, "variable redeclared as different symbol" };
static struct { VBlob sym; char bytes[1]; } _V10_Dstring_D1738 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 1 }, "" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D1737 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "C" };
VWEAK VWORD _V10foreign_Dfunction;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10foreign_Dfunction = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##foreign.function" };
VWEAK VWORD _V0define;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0define = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "define" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D1736 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "typedef" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D1735 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "declaration" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D1734 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "toplevel" };
VWEAK VWORD _V0enum;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0enum = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "enum" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D1733 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "Unsupported C declaration" };
static struct { VBlob sym; char bytes[43]; } _V10_Dstring_D1732 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 43 }, "Unsupported arg type in C foreign-function" };
static struct { VBlob sym; char bytes[38]; } _V10_Dstring_D1731 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 38 }, "Not a simple function declaration: ~A" };
static struct { VBlob sym; char bytes[46]; } _V10_Dstring_D1730 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 46 }, "Unsupported return type in C foreign-function" };
static struct { VBlob sym; char bytes[22]; } _V10_Dstring_D1729 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "Unsupported C typedef" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1728 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "Not a simple typedef" };
VWEAK VWORD _V0restrict;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0restrict = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "restrict" };
VWEAK VWORD _V0static;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0static = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "static" };
static struct { VBlob sym; char bytes[40]; } _V10_Dstring_D1727 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 40 }, "Can only have one type in a declaration" };
static struct { VBlob sym; char bytes[43]; } _V10_Dstring_D1726 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 43 }, "Multiple storage specifiers in declaration" };
static struct { VBlob sym; char bytes[44]; } _V10_Dstring_D1725 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 44 }, "Unexpected storage specifier in declaration" };
VWEAK VWORD _V0extern;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0extern = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "extern" };
VWEAK VWORD _V0register;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0register = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "register" };
VWEAK VWORD _V0auto;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0auto = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "auto" };
VWEAK VWORD _V0volatile;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0volatile = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "volatile" };
VWEAK VWORD _V0signed;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0signed = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "signed" };
VWEAK VWORD _V0unsigned;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0unsigned = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "unsigned" };
VWEAK VWORD _V0longs;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0longs = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "longs" };
VWEAK VWORD _V0special;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0special = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "special" };
static struct { VBlob sym; char bytes[29]; } _V10_Dstring_D1724 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 29 }, "unsupported type combination" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D1723 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "enum" };
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
static struct { VBlob sym; char bytes[17]; } _V10_Dstring_D1722 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "unknown typename" };
VWEAK VWORD _V0_UBool;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0_UBool = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "_Bool" };
VWEAK VWORD _V0double;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0double = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "double" };
VWEAK VWORD _V0float;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0float = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "float" };
VWEAK VWORD _V0void;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0void = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "void" };
VWEAK VWORD _V0variable;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0variable = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "variable" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D1721 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "match statement exhausted" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D1720 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "static-array" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1719 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "array" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D1718 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "pointer" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D1717 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "parameter_list" };
VWEAK VWORD _V0function;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0function = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "function" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D1716 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "function" };
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
static void _V10_Ddrop__const_D241_k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddrop__const_D241_k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.627 0 0) (bruijn ##.k.623 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
static void _V10_Ddrop__const_D241_lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddrop__const_D241_lambda5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.628 0 0) (##inline ##vcore.car (bruijn ##.expr.3.248 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCar2(runtime,
        statics->vars[0]));
}
static void _V10_Ddrop__const_D241_k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddrop__const_D241_k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.3.248 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.3.248 0 0))) (##vcore.call-with-values (close _V10_Ddrop__const_D241_k49) (close _V10_Ddrop__const_D241_lambda5) (bruijn ##.kk.0.245 3 1)) ((bruijn ##.k.623 2 0) #f)) ((bruijn ##.k.623 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddrop__const_D241_k49, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddrop__const_D241_lambda5, self)})),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddrop__const_D241_k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddrop__const_D241_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.624 0 0) ((close _V10_Ddrop__const_D241_k48) (##inline ##vcore.cdr (bruijn ##.x.244 3 1))) ((bruijn ##.k.623 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddrop__const_D241_k48, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddrop__const_D241_k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddrop__const_D241_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.x.244 2 1)) ((bruijn ##.x.615 7 0) (close _V10_Ddrop__const_D241_k47) 'const (##inline ##vcore.car (bruijn ##.x.244 2 1))) ((bruijn ##.k.623 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddrop__const_D241_k47, self)})),
      _V0const,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddrop__const_D241_lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddrop__const_D241_lambda6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.621 0 0) (bruijn ##.x.244 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[1]);
}
static void _V10_Ddrop__const_D241_k50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddrop__const_D241_k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.619 1 0) (close _V10_Ddrop__const_D241_lambda6) (bruijn ##.kk.0.245 1 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddrop__const_D241_lambda6, self)})),
      statics->vars[1]);
}
static void _V10_Ddrop__const_D241_lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddrop__const_D241_lambda4, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Ddrop__const_D241_k46) (close _V10_Ddrop__const_D241_k50))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddrop__const_D241_k46, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddrop__const_D241_k50, self)})));
}
static void _V10_Ddrop__const_D241_lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddrop__const_D241_lambda3, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.k.618 0 0) (close _V10_Ddrop__const_D241_lambda4))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddrop__const_D241_lambda4, self)})));
}
static void _V10_Dreduce__args_D242_k59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__args_D242_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.597 32 0) (bruijn ##.k.631 9 0) (bruijn ##.x.633 2 0) (bruijn ##.x.634 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 3,
      VGetArg(statics, 9-1, 0),
      statics->up->vars[0],
      _var0);
}
static void _V10_Dreduce__args_D242_k58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__args_D242_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.reduce-args.242 9 1) (close _V10_Dreduce__args_D242_k59) (bruijn ##.x.635 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 1)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__args_D242_k59, self)})),
      _var0);
}
static void _V10_Dreduce__args_D242_k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__args_D242_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.609 18 0) (close _V10_Dreduce__args_D242_k58) (bruijn ##.args.250 7 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__args_D242_k58, self)})),
      VGetArg(statics, 7-1, 1));
}
static void _V10_Dreduce__args_D242_k64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__args_D242_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.645 0 0) (bruijn ##.k.640 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V10_Dreduce__args_D242_lambda9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__args_D242_lambda9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.579 53 0) (bruijn ##.k.646 0 0) 'pointer (##inline ##vcore.car (bruijn ##.expr.8.257 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 53-1, 0)), 3,
      _var0,
      _V0pointer,
      VInlineCar2(runtime,
        statics->vars[0]));
}
static void _V10_Dreduce__args_D242_k63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__args_D242_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.8.257 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.8.257 0 0))) (##vcore.call-with-values (close _V10_Dreduce__args_D242_k64) (close _V10_Dreduce__args_D242_lambda9) (bruijn ##.kk.4.252 4 1)) ((bruijn ##.k.640 3 0) #f)) ((bruijn ##.k.640 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__args_D242_k64, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__args_D242_lambda9, self)})),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dreduce__args_D242_k62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__args_D242_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.7.255 0 0)) ((close _V10_Dreduce__args_D242_k63) (##inline ##vcore.cdr (bruijn ##.expr.7.255 0 0))) ((bruijn ##.k.640 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dreduce__args_D242_k63, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dreduce__args_D242_k61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__args_D242_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.641 0 0) ((close _V10_Dreduce__args_D242_k62) (##inline ##vcore.cdr (bruijn ##.arg.251 3 0))) ((bruijn ##.k.640 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dreduce__args_D242_k62, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dreduce__args_D242_k60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__args_D242_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.arg.251 2 0)) ((bruijn ##.x.615 13 0) (close _V10_Dreduce__args_D242_k61) 'array (##inline ##vcore.car (bruijn ##.arg.251 2 0))) ((bruijn ##.k.640 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__args_D242_k61, self)})),
      _V0array,
      VInlineCar2(runtime,
        statics->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dreduce__args_D242_lambda10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__args_D242_lambda10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.638 0 0) (bruijn ##.arg.251 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
static void _V10_Dreduce__args_D242_k65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__args_D242_k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.636 1 0) (close _V10_Dreduce__args_D242_lambda10) (bruijn ##.kk.4.252 1 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__args_D242_lambda10, self)})),
      statics->vars[1]);
}
static void _V10_Dreduce__args_D242_lambda8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__args_D242_lambda8, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Dreduce__args_D242_k60) (close _V10_Dreduce__args_D242_k65))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dreduce__args_D242_k60, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__args_D242_k65, self)})));
}
static void _V10_Dreduce__args_D242_k56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__args_D242_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (close _V10_Dreduce__args_D242_k57) (close _V10_Dreduce__args_D242_lambda8))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__args_D242_k57, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__args_D242_lambda8, self)})));
}
static void _V10_Dreduce__args_D242_k55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__args_D242_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.603 22 0) (close _V10_Dreduce__args_D242_k56) (bruijn ##.x.649 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__args_D242_k56, self)})),
      _var0);
}
static void _V10_Dreduce__args_D242_k54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__args_D242_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.reduce-declare.220 7 0) (close _V10_Dreduce__args_D242_k55) (bruijn ##.x.650 1 0) (bruijn ##.x.651 0 0) (bruijn ##.table.240 6 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__args_D242_k55, self)})),
      statics->vars[0],
      _var0,
      VGetArg(statics, 6-1, 3));
}
static void _V10_Dreduce__args_D242_k53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__args_D242_k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.585 38 0) (close _V10_Dreduce__args_D242_k54) (bruijn ##.args.250 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 38-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__args_D242_k54, self)})),
      statics->up->up->vars[1]);
}
static void _V10_Dreduce__args_D242_k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__args_D242_k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.reduce-type.222 5 2) (close _V10_Dreduce__args_D242_k53) (bruijn ##.x.652 0 0) (bruijn ##.table.240 4 3) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 2)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__args_D242_k53, self)})),
      _var0,
      statics->up->up->up->vars[3],
      VEncodeBool(false));
}
static void _V10_Dreduce__args_D242_k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__args_D242_k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.632 0 0) ((bruijn ##.k.631 1 0) '()) ((bruijn ##.x.582 39 0) (close _V10_Dreduce__args_D242_k52) (bruijn ##.args.250 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 39-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__args_D242_k52, self)})),
      statics->vars[1]);
}
}
static void _V10_Dreduce__args_D242_lambda7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__args_D242_lambda7, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.x.591 29 0) (close _V10_Dreduce__args_D242_k51) (bruijn ##.args.250 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__args_D242_k51, self)})),
      _var1);
}
static void _V10_Dreduce__declare__loop_D243_k68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.757 1 0) (##vcore.blob=? (bruijn ##.k.758 0 0) (##string ##.string.1716) (##inline ##vcore.car (bruijn ##.decl.260 4 2))) ((bruijn ##.k.758 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VBlobEqv2, 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1716.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        statics->up->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dreduce__declare__loop_D243_k71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.751 0 0) (bruijn ##.k.747 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V10_Dreduce__declare__loop_D243_k72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.752 1 0) (##inline ##vcore.cons 'function (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.12.264 2 0)) (##inline ##vcore.cons (bruijn ##.x.755 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        _V0function,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[0]),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
static void _V10_Dreduce__declare__loop_D243_lambda13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_lambda13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.drop-const.241 7 0) (close _V10_Dreduce__declare__loop_D243_k72) (bruijn ##.ret.259 6 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D243_k72, self)})),
      VGetArg(statics, 6-1, 1));
}
static void _V10_Dreduce__declare__loop_D243_k70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.12.264 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.12.264 0 0))) (##vcore.call-with-values (close _V10_Dreduce__declare__loop_D243_k71) (close _V10_Dreduce__declare__loop_D243_lambda13) (bruijn ##.kk.9.261 4 1)) ((bruijn ##.k.747 3 0) #f)) ((bruijn ##.k.747 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D243_k71, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D243_lambda13, self)})),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dreduce__declare__loop_D243_k69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.748 0 0) ((close _V10_Dreduce__declare__loop_D243_k70) (##inline ##vcore.cdr (bruijn ##.decl.260 4 2))) ((bruijn ##.k.747 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dreduce__declare__loop_D243_k70, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dreduce__declare__loop_D243_k67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dreduce__declare__loop_D243_k68) (close _V10_Dreduce__declare__loop_D243_k69))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dreduce__declare__loop_D243_k68, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D243_k69, self)})));
}
static void _V10_Dreduce__declare__loop_D243_k66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.decl.260 2 2)) (##vcore.string? (close _V10_Dreduce__declare__loop_D243_k67) (##inline ##vcore.car (bruijn ##.decl.260 2 2))) ((bruijn ##.k.747 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallFuncWithGC(runtime, (VFunc)VStringP2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D243_k67, self)})),
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dreduce__declare__loop_D243_k76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.742 1 0) (##vcore.blob=? (bruijn ##.k.743 0 0) (##string ##.string.1716) (##inline ##vcore.car (bruijn ##.decl.260 5 2))) ((bruijn ##.k.743 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VBlobEqv2, 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1716.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dreduce__declare__loop_D243_k82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.738 1 0) (##vcore.blob=? (bruijn ##.k.739 0 0) (##string ##.string.1717) (##inline ##vcore.car (bruijn ##.expr.16.270 2 0))) ((bruijn ##.k.739 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VBlobEqv2, 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1717.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        statics->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D273_k85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D273_k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.19.272 4 1) (bruijn ##.k.724 1 0) (bruijn ##.expr.21.274 2 1) (bruijn ##.x.725 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      statics->vars[0],
      statics->up->vars[1],
      _var0);
}
static void _V10_Dloop_D273_k84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D273_k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.21.274 1 1))) ((bruijn ##.x.614 21 0) (close _V10_Dloop_D273_k85) (bruijn ##.args.18.275 1 2)) ((bruijn ##.k.724 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D273_k85, self)})),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D273_k88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D273_k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.19.272 7 1) (bruijn ##.k.718 2 0) (bruijn ##.expr.21.274 5 1) (bruijn ##.x.720 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      statics->up->vars[0],
      VGetArg(statics, 5-1, 1),
      _var0);
}
static void _V10_Dloop_D273_k87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D273_k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.614 24 0) (close _V10_Dloop_D273_k88) (bruijn ##.args.18.275 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D273_k88, self)})),
      statics->up->up->up->vars[2]);
}
static void _V10_Dloop_D273_lambda18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D273_lambda18, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.kk.20.276 0 1) (close _V10_Dloop_D273_k87) (##inline ##vcore.cdr (bruijn ##.expr.21.274 3 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.21.274 3 1)) (bruijn ##.args.18.275 3 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var1), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D273_k87, self)})),
      VInlineCdr2(runtime,
        statics->up->up->vars[1]),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[1]),
        statics->up->up->vars[2]));
}
static void _V10_Dloop_D273_lambda17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D273_lambda17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.717 0 0) (close _V10_Dloop_D273_lambda18))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D273_lambda18, self)})));
}
static void _V10_Dloop_D273_k86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D273_k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.715 1 0) (close _V10_Dloop_D273_lambda17) (bruijn ##.loop.273 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D273_lambda17, self)})),
      statics->up->vars[0]);
}
static void _V10_Dloop_D273_lambda16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D273_lambda16, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V10_Dloop_D273_k84) (close _V10_Dloop_D273_k86))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D273_k84, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D273_k86, self)})));
}
static void _V10_Dreduce__declare__loop_D243_lambda15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_lambda15, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D273_lambda16)) ((bruijn ##.loop.273 0 0) (bruijn ##.k.714 1 0) (##inline ##vcore.cdr (bruijn ##.expr.16.270 5 0)) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    VEnv * self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D273_lambda16, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->vars[0],
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 0)),
      VNULL);
    }
}
static void _V10_Dreduce__declare__loop_D243_lambda14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_lambda14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.713 0 0) (close _V10_Dreduce__declare__loop_D243_lambda15))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D243_lambda15, self)})));
}
static void _V10_Dreduce__declare__loop_D243_k89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.730 0 0) (bruijn ##.k.727 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
static void _V10_Dreduce__declare__loop_D243_k92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.731 3 0) (##inline ##vcore.cons 'function (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.14.267 9 0)) (##inline ##vcore.cons (bruijn ##.x.734 2 0) (bruijn ##.x.735 0 0)))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0function,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 9-1, 0)),
        VInlineCons2(runtime,
        statics->up->vars[0],
        _var0))));
}
static void _V10_Dreduce__declare__loop_D243_k91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.580 54 0) (close _V10_Dreduce__declare__loop_D243_k92) (bruijn ##.drop-const.241 15 0) (bruijn ##.x.736 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 54-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D243_k92, self)})),
      VGetArg(statics, 15-1, 0),
      _var0);
}
static void _V10_Dreduce__declare__loop_D243_k90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.reduce-args.242 14 1) (close _V10_Dreduce__declare__loop_D243_k91) (bruijn ##.args.279 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 1)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D243_k91, self)})),
      statics->up->vars[2]);
}
static void _V10_Dreduce__declare__loop_D243_lambda20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_lambda20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.drop-const.241 13 0) (close _V10_Dreduce__declare__loop_D243_k90) (bruijn ##.ret.259 12 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D243_k90, self)})),
      VGetArg(statics, 12-1, 1));
}
static void _V10_Dreduce__declare__loop_D243_lambda19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_lambda19, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.278 0 1)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.15.269 4 0))) (##vcore.call-with-values (close _V10_Dreduce__declare__loop_D243_k89) (close _V10_Dreduce__declare__loop_D243_lambda20) (bruijn ##.kk.9.261 10 1)) ((bruijn ##.k.727 0 0) #f)) ((bruijn ##.k.727 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->up->up->up->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D243_k89, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D243_lambda20, self)})),
      VGetArg(statics, 10-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dreduce__declare__loop_D243_k83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.712 0 0) (##vcore.call-with-values (bruijn ##.k.707 7 0) (close _V10_Dreduce__declare__loop_D243_lambda14) (close _V10_Dreduce__declare__loop_D243_lambda19)) ((bruijn ##.k.707 7 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 7-1, 0),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D243_lambda14, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D243_lambda19, self)})));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dreduce__declare__loop_D243_k81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dreduce__declare__loop_D243_k82) (close _V10_Dreduce__declare__loop_D243_k83))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dreduce__declare__loop_D243_k82, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D243_k83, self)})));
}
static void _V10_Dreduce__declare__loop_D243_k80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.16.270 0 0)) (##vcore.string? (close _V10_Dreduce__declare__loop_D243_k81) (##inline ##vcore.car (bruijn ##.expr.16.270 0 0))) ((bruijn ##.k.707 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VStringP2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D243_k81, self)})),
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dreduce__declare__loop_D243_k79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.15.269 0 0)) ((close _V10_Dreduce__declare__loop_D243_k80) (##inline ##vcore.car (bruijn ##.expr.15.269 0 0))) ((bruijn ##.k.707 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dreduce__declare__loop_D243_k80, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dreduce__declare__loop_D243_k78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.14.267 0 0)) ((close _V10_Dreduce__declare__loop_D243_k79) (##inline ##vcore.cdr (bruijn ##.expr.14.267 0 0))) ((bruijn ##.k.707 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dreduce__declare__loop_D243_k79, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dreduce__declare__loop_D243_k77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.708 0 0) ((close _V10_Dreduce__declare__loop_D243_k78) (##inline ##vcore.cdr (bruijn ##.decl.260 5 2))) ((bruijn ##.k.707 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dreduce__declare__loop_D243_k78, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dreduce__declare__loop_D243_k75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dreduce__declare__loop_D243_k76) (close _V10_Dreduce__declare__loop_D243_k77))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dreduce__declare__loop_D243_k76, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D243_k77, self)})));
}
static void _V10_Dreduce__declare__loop_D243_k74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.decl.260 3 2)) (##vcore.string? (close _V10_Dreduce__declare__loop_D243_k75) (##inline ##vcore.car (bruijn ##.decl.260 3 2))) ((bruijn ##.k.707 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[2]))) {
    VCallFuncWithGC(runtime, (VFunc)VStringP2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D243_k75, self)})),
      VInlineCar2(runtime,
        statics->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dreduce__declare__loop_D243_k96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.702 1 0) (##vcore.blob=? (bruijn ##.k.703 0 0) (##string ##.string.1718) (##inline ##vcore.car (bruijn ##.decl.260 6 2))) ((bruijn ##.k.703 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VBlobEqv2, 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1718.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dreduce__declare__loop_D243_k99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.698 0 0) (bruijn ##.k.694 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V10_Dreduce__declare__loop_D243_k100(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.reduce-declare-loop.243 10 2) (bruijn ##.k.699 1 0) (bruijn ##.x.700 0 0) (##inline ##vcore.car (bruijn ##.expr.23.281 2 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 2)), 3,
      statics->vars[0],
      _var0,
      VInlineCar2(runtime,
        statics->up->vars[0]));
}
static void _V10_Dreduce__declare__loop_D243_lambda21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_lambda21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.579 49 0) (close _V10_Dreduce__declare__loop_D243_k100) 'pointer (bruijn ##.ret.259 8 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 49-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D243_k100, self)})),
      _V0pointer,
      VGetArg(statics, 8-1, 1));
}
static void _V10_Dreduce__declare__loop_D243_k98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.23.281 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.23.281 0 0))) (##vcore.call-with-values (close _V10_Dreduce__declare__loop_D243_k99) (close _V10_Dreduce__declare__loop_D243_lambda21) (bruijn ##.kk.9.261 6 1)) ((bruijn ##.k.694 3 0) #f)) ((bruijn ##.k.694 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D243_k99, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D243_lambda21, self)})),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dreduce__declare__loop_D243_k97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.695 0 0) ((close _V10_Dreduce__declare__loop_D243_k98) (##inline ##vcore.cdr (bruijn ##.decl.260 6 2))) ((bruijn ##.k.694 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dreduce__declare__loop_D243_k98, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dreduce__declare__loop_D243_k95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dreduce__declare__loop_D243_k96) (close _V10_Dreduce__declare__loop_D243_k97))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dreduce__declare__loop_D243_k96, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D243_k97, self)})));
}
static void _V10_Dreduce__declare__loop_D243_k94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.decl.260 4 2)) (##vcore.string? (close _V10_Dreduce__declare__loop_D243_k95) (##inline ##vcore.car (bruijn ##.decl.260 4 2))) ((bruijn ##.k.694 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->up->vars[2]))) {
    VCallFuncWithGC(runtime, (VFunc)VStringP2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D243_k95, self)})),
      VInlineCar2(runtime,
        statics->up->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dreduce__declare__loop_D243_k104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.689 1 0) (##vcore.blob=? (bruijn ##.k.690 0 0) (##string ##.string.1719) (##inline ##vcore.car (bruijn ##.decl.260 7 2))) ((bruijn ##.k.690 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VBlobEqv2, 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1719.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        VGetArg(statics, 7-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dreduce__declare__loop_D243_k108(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.685 0 0) (bruijn ##.k.680 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
static void _V10_Dreduce__declare__loop_D243_k109(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.reduce-declare-loop.243 12 2) (bruijn ##.k.686 1 0) (bruijn ##.x.687 0 0) (##inline ##vcore.car (bruijn ##.expr.25.284 3 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 2)), 3,
      statics->vars[0],
      _var0,
      VInlineCar2(runtime,
        statics->up->up->vars[0]));
}
static void _V10_Dreduce__declare__loop_D243_lambda22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_lambda22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.579 51 0) (close _V10_Dreduce__declare__loop_D243_k109) 'array (##inline ##vcore.car (bruijn ##.expr.26.286 1 0)) (bruijn ##.ret.259 10 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 51-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D243_k109, self)})),
      _V0array,
      VInlineCar2(runtime,
        statics->vars[0]),
      VGetArg(statics, 10-1, 1));
}
static void _V10_Dreduce__declare__loop_D243_k107(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.26.286 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.26.286 0 0))) (##vcore.call-with-values (close _V10_Dreduce__declare__loop_D243_k108) (close _V10_Dreduce__declare__loop_D243_lambda22) (bruijn ##.kk.9.261 8 1)) ((bruijn ##.k.680 4 0) #f)) ((bruijn ##.k.680 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D243_k108, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D243_lambda22, self)})),
      VGetArg(statics, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dreduce__declare__loop_D243_k106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.25.284 0 0)) ((close _V10_Dreduce__declare__loop_D243_k107) (##inline ##vcore.cdr (bruijn ##.expr.25.284 0 0))) ((bruijn ##.k.680 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dreduce__declare__loop_D243_k107, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dreduce__declare__loop_D243_k105(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.681 0 0) ((close _V10_Dreduce__declare__loop_D243_k106) (##inline ##vcore.cdr (bruijn ##.decl.260 7 2))) ((bruijn ##.k.680 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dreduce__declare__loop_D243_k106, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 7-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dreduce__declare__loop_D243_k103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dreduce__declare__loop_D243_k104) (close _V10_Dreduce__declare__loop_D243_k105))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dreduce__declare__loop_D243_k104, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D243_k105, self)})));
}
static void _V10_Dreduce__declare__loop_D243_k102(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.decl.260 5 2)) (##vcore.string? (close _V10_Dreduce__declare__loop_D243_k103) (##inline ##vcore.car (bruijn ##.decl.260 5 2))) ((bruijn ##.k.680 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 5-1, 2)))) {
    VCallFuncWithGC(runtime, (VFunc)VStringP2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D243_k103, self)})),
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dreduce__declare__loop_D243_k113(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.675 1 0) (##vcore.blob=? (bruijn ##.k.676 0 0) (##string ##.string.1720) (##inline ##vcore.car (bruijn ##.decl.260 8 2))) ((bruijn ##.k.676 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VBlobEqv2, 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1720.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        VGetArg(statics, 8-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dreduce__declare__loop_D243_k117(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.671 0 0) (bruijn ##.k.666 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
static void _V10_Dreduce__declare__loop_D243_k118(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.reduce-declare-loop.243 13 2) (bruijn ##.k.672 1 0) (bruijn ##.x.673 0 0) (##inline ##vcore.car (bruijn ##.expr.28.289 3 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 2)), 3,
      statics->vars[0],
      _var0,
      VInlineCar2(runtime,
        statics->up->up->vars[0]));
}
static void _V10_Dreduce__declare__loop_D243_lambda23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_lambda23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.579 52 0) (close _V10_Dreduce__declare__loop_D243_k118) 'array (##inline ##vcore.car (bruijn ##.expr.29.291 1 0)) (bruijn ##.ret.259 11 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 52-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D243_k118, self)})),
      _V0array,
      VInlineCar2(runtime,
        statics->vars[0]),
      VGetArg(statics, 11-1, 1));
}
static void _V10_Dreduce__declare__loop_D243_k116(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.29.291 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.29.291 0 0))) (##vcore.call-with-values (close _V10_Dreduce__declare__loop_D243_k117) (close _V10_Dreduce__declare__loop_D243_lambda23) (bruijn ##.kk.9.261 9 1)) ((bruijn ##.k.666 4 0) #f)) ((bruijn ##.k.666 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D243_k117, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D243_lambda23, self)})),
      VGetArg(statics, 9-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dreduce__declare__loop_D243_k115(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.28.289 0 0)) ((close _V10_Dreduce__declare__loop_D243_k116) (##inline ##vcore.cdr (bruijn ##.expr.28.289 0 0))) ((bruijn ##.k.666 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dreduce__declare__loop_D243_k116, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dreduce__declare__loop_D243_k114(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.667 0 0) ((close _V10_Dreduce__declare__loop_D243_k115) (##inline ##vcore.cdr (bruijn ##.decl.260 8 2))) ((bruijn ##.k.666 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dreduce__declare__loop_D243_k115, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 8-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dreduce__declare__loop_D243_k112(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dreduce__declare__loop_D243_k113) (close _V10_Dreduce__declare__loop_D243_k114))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dreduce__declare__loop_D243_k113, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D243_k114, self)})));
}
static void _V10_Dreduce__declare__loop_D243_k111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.decl.260 6 2)) (##vcore.string? (close _V10_Dreduce__declare__loop_D243_k112) (##inline ##vcore.car (bruijn ##.decl.260 6 2))) ((bruijn ##.k.666 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 6-1, 2)))) {
    VCallFuncWithGC(runtime, (VFunc)VStringP2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D243_k112, self)})),
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dreduce__declare__loop_D243_k121(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.616 12 0) (bruijn ##.k.654 7 0) (##string ##.string.1721))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 2,
      VGetArg(statics, 7-1, 0),
      VEncodePointer(&_V10_Dstring_D1721.sym, VPOINTER_OTHER));
}
static void _V10_Dreduce__declare__loop_D243_k120(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.661 0 0) (close _V10_Dreduce__declare__loop_D243_k121))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D243_k121, self)})));
}
static void _V10_Dreduce__declare__loop_D243_lambda24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_lambda24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.662 0 0) (##inline ##vcore.cons 'variable (##inline ##vcore.cons (bruijn ##.ret.259 7 1) (##inline ##vcore.cons (bruijn ##.decl.260 7 2) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0variable,
        VInlineCons2(runtime,
        VGetArg(statics, 7-1, 1),
        VInlineCons2(runtime,
        VGetArg(statics, 7-1, 2),
        VNULL))));
}
static void _V10_Dreduce__declare__loop_D243_k119(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (close _V10_Dreduce__declare__loop_D243_k120) (close _V10_Dreduce__declare__loop_D243_lambda24) (bruijn ##.kk.9.261 5 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D243_k120, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D243_lambda24, self)})),
      VGetArg(statics, 5-1, 1));
}
static void _V10_Dreduce__declare__loop_D243_k110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dreduce__declare__loop_D243_k111) (close _V10_Dreduce__declare__loop_D243_k119))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dreduce__declare__loop_D243_k111, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D243_k119, self)})));
}
static void _V10_Dreduce__declare__loop_D243_k101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dreduce__declare__loop_D243_k102) (close _V10_Dreduce__declare__loop_D243_k110))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dreduce__declare__loop_D243_k102, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D243_k110, self)})));
}
static void _V10_Dreduce__declare__loop_D243_k93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dreduce__declare__loop_D243_k94) (close _V10_Dreduce__declare__loop_D243_k101))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dreduce__declare__loop_D243_k94, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D243_k101, self)})));
}
static void _V10_Dreduce__declare__loop_D243_k73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dreduce__declare__loop_D243_k74) (close _V10_Dreduce__declare__loop_D243_k93))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dreduce__declare__loop_D243_k74, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D243_k93, self)})));
}
static void _V10_Dreduce__declare__loop_D243_lambda12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_lambda12, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Dreduce__declare__loop_D243_k66) (close _V10_Dreduce__declare__loop_D243_k73))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dreduce__declare__loop_D243_k66, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D243_k73, self)})));
}
static void _V10_Dreduce__declare__loop_D243_lambda11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_lambda11, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call/cc (bruijn ##.k.653 0 0) (close _V10_Dreduce__declare__loop_D243_lambda12))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D243_lambda12, self)})));
}
static void _V10_Dreduce__declare_D220_lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare_D220_lambda2, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (letrec 3 ((close _V10_Ddrop__const_D241_lambda3) (close _V10_Dreduce__args_D242_lambda7) (close _V10_Dreduce__declare__loop_D243_lambda11)) ((bruijn ##.reduce-declare-loop.243 0 2) (bruijn ##.k.617 1 0) (bruijn ##.ret.238 1 1) (bruijn ##.decl.239 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    VEnv * self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddrop__const_D241_lambda3, self)}));
    self->vars[1] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__args_D242_lambda7, self)}));
    self->vars[2] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D243_lambda11, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[2]), 3,
      statics->vars[0],
      statics->vars[1],
      statics->vars[2]);
    }
}
static void _V10_Dfind__typedef_D221_k124(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__typedef_D221_k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.599 22 0) (bruijn ##.k.772 1 0) (bruijn ##.x.773 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 2,
      statics->vars[0],
      _var0);
}
static void _V10_Dfind__typedef_D221_k123(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__typedef_D221_k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.771 1 0) ((bruijn ##.x.577 43 0) (close _V10_Dfind__typedef_D221_k124) (bruijn ##.special.294 2 1) (##inline ##vcore.qcons 'void (##inline ##vcore.qcons 'float (##inline ##vcore.qcons 'double (##inline ##vcore.qcons '_Bool '()))))) ((bruijn ##.k.772 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 43-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__typedef_D221_k124, self)})),
      statics->up->vars[1],
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D296_k130(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D296_k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.608 19 0) (bruijn ##.k.768 1 0) (bruijn ##.x.769 0 0) (bruijn ##.special.294 9 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 3,
      statics->vars[0],
      _var0,
      VGetArg(statics, 9-1, 1));
}
static void _V10_Dloop_D296_k129(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D296_k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.767 1 0) ((bruijn ##.x.585 41 0) (close _V10_Dloop_D296_k130) (bruijn ##.table.297 4 1)) ((bruijn ##.k.768 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 41-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D296_k130, self)})),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D296_k132(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D296_k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.296 6 0) (bruijn ##.k.763 5 0) (bruijn ##.x.766 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 2,
      VGetArg(statics, 5-1, 0),
      _var0);
}
static void _V10_Dloop_D296_k131(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D296_k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.765 0 0) ((bruijn ##.x.583 43 0) (bruijn ##.k.763 4 0) (bruijn ##.table.297 4 1)) ((bruijn ##.x.609 17 0) (close _V10_Dloop_D296_k132) (bruijn ##.table.297 4 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 43-1, 0)), 2,
      statics->up->up->up->vars[0],
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D296_k132, self)})),
      statics->up->up->up->vars[1]);
}
}
static void _V10_Dloop_D296_k128(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D296_k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D296_k129) (close _V10_Dloop_D296_k131))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D296_k129, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D296_k131, self)})));
}
static void _V10_Dloop_D296_k127(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D296_k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.608 16 0) (close _V10_Dloop_D296_k128) (bruijn ##.x.770 0 0) 'typedef)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D296_k128, self)})),
      _var0,
      _V0typedef);
}
static void _V10_Dloop_D296_k126(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D296_k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.764 0 0) ((bruijn ##.x.601 22 0) (bruijn ##.k.763 1 0) (##string ##.string.1722) (bruijn ##.special.294 5 1)) ((bruijn ##.x.582 41 0) (close _V10_Dloop_D296_k127) (bruijn ##.table.297 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1722.sym, VPOINTER_OTHER),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 41-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D296_k127, self)})),
      statics->vars[1]);
}
}
static void _V10_Dloop_D296_lambda26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D296_lambda26, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.x.591 31 0) (close _V10_Dloop_D296_k126) (bruijn ##.table.297 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D296_k126, self)})),
      _var1);
}
static void _V10_Dfind__typedef_D221_k125(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__typedef_D221_k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.762 0 0) (letrec 1 ((close _V10_Dloop_D296_lambda26)) ((bruijn ##.loop.296 0 0) (bruijn ##.k.761 3 0) (bruijn ##.table.295 3 2))) ((bruijn ##.k.761 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    VEnv * self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D296_lambda26, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->up->up->vars[0],
      statics->up->up->vars[2]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dfind__typedef_D221_k122(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__typedef_D221_k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dfind__typedef_D221_k123) (close _V10_Dfind__typedef_D221_k125))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dfind__typedef_D221_k123, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__typedef_D221_k125, self)})));
}
static void _V10_Dfind__typedef_D221_lambda25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__typedef_D221_lambda25, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.x.578 40 0) (close _V10_Dfind__typedef_D221_k122) (bruijn ##.special.294 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 40-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__typedef_D221_k122, self)})),
      _var1);
}
static void _V10_Ddecide_D301_k139(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1026 0 0) (bruijn ##.k.1015 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
static void _V10_Ddecide_D301_lambda30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_lambda30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1027 0 0) 'char)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0char);
}
static void _V10_Ddecide_D301_k138(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.37.311 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.37.311 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.37.311 0 0))) (##vcore.call-with-values (close _V10_Ddecide_D301_k139) (close _V10_Ddecide_D301_lambda30) (bruijn ##.kk.31.305 6 1)) ((bruijn ##.k.1015 5 0) #f)) ((bruijn ##.k.1015 5 0) #f)) ((bruijn ##.k.1015 5 0) #f))
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
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k139, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_lambda30, self)})),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k137(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.36.310 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.36.310 0 0))) ((close _V10_Ddecide_D301_k138) (##inline ##vcore.cdr (bruijn ##.expr.36.310 0 0))) ((bruijn ##.k.1015 4 0) #f)) ((bruijn ##.k.1015 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k138, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k136(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.35.309 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.35.309 0 0))) ((close _V10_Ddecide_D301_k137) (##inline ##vcore.cdr (bruijn ##.expr.35.309 0 0))) ((bruijn ##.k.1015 3 0) #f)) ((bruijn ##.k.1015 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k137, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k135(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.34.308 0 0)) (if (##inline ##vcore.eq? 0 (##inline ##vcore.car (bruijn ##.expr.34.308 0 0))) ((close _V10_Ddecide_D301_k136) (##inline ##vcore.cdr (bruijn ##.expr.34.308 0 0))) ((bruijn ##.k.1015 2 0) #f)) ((bruijn ##.k.1015 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(0l),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k136, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k134(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1016 0 0) ((close _V10_Ddecide_D301_k135) (##inline ##vcore.cdr (bruijn ##.args.304 3 1))) ((bruijn ##.k.1015 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k135, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k133(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.args.304 2 1)) ((bruijn ##.x.615 7 0) (close _V10_Ddecide_D301_k134) 'char (##inline ##vcore.car (bruijn ##.args.304 2 1))) ((bruijn ##.k.1015 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k134, self)})),
      _V0char,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k147(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1006 0 0) (bruijn ##.k.995 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
static void _V10_Ddecide_D301_lambda31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_lambda31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1007 0 0) 'unsigned-char)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0unsigned__char);
}
static void _V10_Ddecide_D301_k146(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.42.316 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.42.316 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.42.316 0 0))) (##vcore.call-with-values (close _V10_Ddecide_D301_k147) (close _V10_Ddecide_D301_lambda31) (bruijn ##.kk.31.305 7 1)) ((bruijn ##.k.995 5 0) #f)) ((bruijn ##.k.995 5 0) #f)) ((bruijn ##.k.995 5 0) #f))
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
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k147, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_lambda31, self)})),
      VGetArg(statics, 7-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k145(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.41.315 0 0)) (if (##inline ##vcore.eq? #t (##inline ##vcore.car (bruijn ##.expr.41.315 0 0))) ((close _V10_Ddecide_D301_k146) (##inline ##vcore.cdr (bruijn ##.expr.41.315 0 0))) ((bruijn ##.k.995 4 0) #f)) ((bruijn ##.k.995 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(true),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k146, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k144(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.40.314 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.40.314 0 0))) ((close _V10_Ddecide_D301_k145) (##inline ##vcore.cdr (bruijn ##.expr.40.314 0 0))) ((bruijn ##.k.995 3 0) #f)) ((bruijn ##.k.995 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k145, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k143(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.39.313 0 0)) (if (##inline ##vcore.eq? 0 (##inline ##vcore.car (bruijn ##.expr.39.313 0 0))) ((close _V10_Ddecide_D301_k144) (##inline ##vcore.cdr (bruijn ##.expr.39.313 0 0))) ((bruijn ##.k.995 2 0) #f)) ((bruijn ##.k.995 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(0l),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k144, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k142(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.996 0 0) ((close _V10_Ddecide_D301_k143) (##inline ##vcore.cdr (bruijn ##.args.304 4 1))) ((bruijn ##.k.995 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k143, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k141(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.args.304 3 1)) ((bruijn ##.x.615 8 0) (close _V10_Ddecide_D301_k142) 'char (##inline ##vcore.car (bruijn ##.args.304 3 1))) ((bruijn ##.k.995 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k142, self)})),
      _V0char,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k155(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.986 0 0) (bruijn ##.k.975 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
static void _V10_Ddecide_D301_lambda32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_lambda32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.987 0 0) 'signed-char)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0signed__char);
}
static void _V10_Ddecide_D301_k154(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.47.321 0 0)) (if (##inline ##vcore.eq? #t (##inline ##vcore.car (bruijn ##.expr.47.321 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.47.321 0 0))) (##vcore.call-with-values (close _V10_Ddecide_D301_k155) (close _V10_Ddecide_D301_lambda32) (bruijn ##.kk.31.305 8 1)) ((bruijn ##.k.975 5 0) #f)) ((bruijn ##.k.975 5 0) #f)) ((bruijn ##.k.975 5 0) #f))
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
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k155, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_lambda32, self)})),
      VGetArg(statics, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k153(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.46.320 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.46.320 0 0))) ((close _V10_Ddecide_D301_k154) (##inline ##vcore.cdr (bruijn ##.expr.46.320 0 0))) ((bruijn ##.k.975 4 0) #f)) ((bruijn ##.k.975 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k154, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k152(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.45.319 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.45.319 0 0))) ((close _V10_Ddecide_D301_k153) (##inline ##vcore.cdr (bruijn ##.expr.45.319 0 0))) ((bruijn ##.k.975 3 0) #f)) ((bruijn ##.k.975 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k153, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k151(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.44.318 0 0)) (if (##inline ##vcore.eq? 0 (##inline ##vcore.car (bruijn ##.expr.44.318 0 0))) ((close _V10_Ddecide_D301_k152) (##inline ##vcore.cdr (bruijn ##.expr.44.318 0 0))) ((bruijn ##.k.975 2 0) #f)) ((bruijn ##.k.975 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(0l),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k152, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k150(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.976 0 0) ((close _V10_Ddecide_D301_k151) (##inline ##vcore.cdr (bruijn ##.args.304 5 1))) ((bruijn ##.k.975 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k151, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k149(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.args.304 4 1)) ((bruijn ##.x.615 9 0) (close _V10_Ddecide_D301_k150) 'char (##inline ##vcore.car (bruijn ##.args.304 4 1))) ((bruijn ##.k.975 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k150, self)})),
      _V0char,
      VInlineCar2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k163(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.967 0 0) (bruijn ##.k.957 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
static void _V10_Ddecide_D301_lambda33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_lambda33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.968 0 0) 'int)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0int);
}
static void _V10_Ddecide_D301_k162(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.52.326 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.52.326 0 0))) (##vcore.call-with-values (close _V10_Ddecide_D301_k163) (close _V10_Ddecide_D301_lambda33) (bruijn ##.kk.31.305 9 1)) ((bruijn ##.k.957 5 0) #f)) ((bruijn ##.k.957 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k163, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_lambda33, self)})),
      VGetArg(statics, 9-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k161(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.51.325 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.51.325 0 0))) ((close _V10_Ddecide_D301_k162) (##inline ##vcore.cdr (bruijn ##.expr.51.325 0 0))) ((bruijn ##.k.957 4 0) #f)) ((bruijn ##.k.957 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k162, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k160(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.50.324 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.50.324 0 0))) ((close _V10_Ddecide_D301_k161) (##inline ##vcore.cdr (bruijn ##.expr.50.324 0 0))) ((bruijn ##.k.957 3 0) #f)) ((bruijn ##.k.957 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k161, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k159(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.49.323 0 0)) (if (##inline ##vcore.eq? 0 (##inline ##vcore.car (bruijn ##.expr.49.323 0 0))) ((close _V10_Ddecide_D301_k160) (##inline ##vcore.cdr (bruijn ##.expr.49.323 0 0))) ((bruijn ##.k.957 2 0) #f)) ((bruijn ##.k.957 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(0l),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k160, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k158(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.958 0 0) ((close _V10_Ddecide_D301_k159) (##inline ##vcore.cdr (bruijn ##.args.304 6 1))) ((bruijn ##.k.957 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k159, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k157(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.args.304 5 1)) ((bruijn ##.x.615 10 0) (close _V10_Ddecide_D301_k158) 'int (##inline ##vcore.car (bruijn ##.args.304 5 1))) ((bruijn ##.k.957 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 5-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k158, self)})),
      _V0int,
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k171(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.948 0 0) (bruijn ##.k.937 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
static void _V10_Ddecide_D301_lambda34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_lambda34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.949 0 0) 'unsigned-int)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0unsigned__int);
}
static void _V10_Ddecide_D301_k170(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.57.331 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.57.331 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.57.331 0 0))) (##vcore.call-with-values (close _V10_Ddecide_D301_k171) (close _V10_Ddecide_D301_lambda34) (bruijn ##.kk.31.305 10 1)) ((bruijn ##.k.937 5 0) #f)) ((bruijn ##.k.937 5 0) #f)) ((bruijn ##.k.937 5 0) #f))
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
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k171, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_lambda34, self)})),
      VGetArg(statics, 10-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k169(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.56.330 0 0)) (if (##inline ##vcore.eq? #t (##inline ##vcore.car (bruijn ##.expr.56.330 0 0))) ((close _V10_Ddecide_D301_k170) (##inline ##vcore.cdr (bruijn ##.expr.56.330 0 0))) ((bruijn ##.k.937 4 0) #f)) ((bruijn ##.k.937 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(true),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k170, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k168(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.55.329 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.55.329 0 0))) ((close _V10_Ddecide_D301_k169) (##inline ##vcore.cdr (bruijn ##.expr.55.329 0 0))) ((bruijn ##.k.937 3 0) #f)) ((bruijn ##.k.937 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k169, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k167(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.54.328 0 0)) (if (##inline ##vcore.eq? 0 (##inline ##vcore.car (bruijn ##.expr.54.328 0 0))) ((close _V10_Ddecide_D301_k168) (##inline ##vcore.cdr (bruijn ##.expr.54.328 0 0))) ((bruijn ##.k.937 2 0) #f)) ((bruijn ##.k.937 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(0l),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k168, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k166(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.938 0 0) ((close _V10_Ddecide_D301_k167) (##inline ##vcore.cdr (bruijn ##.args.304 7 1))) ((bruijn ##.k.937 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k167, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 7-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k165(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.args.304 6 1)) ((bruijn ##.x.615 11 0) (close _V10_Ddecide_D301_k166) 'int (##inline ##vcore.car (bruijn ##.args.304 6 1))) ((bruijn ##.k.937 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 6-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k166, self)})),
      _V0int,
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k179(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.929 0 0) (bruijn ##.k.919 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
static void _V10_Ddecide_D301_lambda35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_lambda35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.930 0 0) 'long)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0long);
}
static void _V10_Ddecide_D301_k178(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.62.336 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.62.336 0 0))) (##vcore.call-with-values (close _V10_Ddecide_D301_k179) (close _V10_Ddecide_D301_lambda35) (bruijn ##.kk.31.305 11 1)) ((bruijn ##.k.919 5 0) #f)) ((bruijn ##.k.919 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k179, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_lambda35, self)})),
      VGetArg(statics, 11-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k177(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.61.335 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.61.335 0 0))) ((close _V10_Ddecide_D301_k178) (##inline ##vcore.cdr (bruijn ##.expr.61.335 0 0))) ((bruijn ##.k.919 4 0) #f)) ((bruijn ##.k.919 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k178, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k176(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.60.334 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.60.334 0 0))) ((close _V10_Ddecide_D301_k177) (##inline ##vcore.cdr (bruijn ##.expr.60.334 0 0))) ((bruijn ##.k.919 3 0) #f)) ((bruijn ##.k.919 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k177, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k175(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.59.333 0 0)) (if (##inline ##vcore.eq? 1 (##inline ##vcore.car (bruijn ##.expr.59.333 0 0))) ((close _V10_Ddecide_D301_k176) (##inline ##vcore.cdr (bruijn ##.expr.59.333 0 0))) ((bruijn ##.k.919 2 0) #f)) ((bruijn ##.k.919 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(1l),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k176, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k174(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.920 0 0) ((close _V10_Ddecide_D301_k175) (##inline ##vcore.cdr (bruijn ##.args.304 8 1))) ((bruijn ##.k.919 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k175, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 8-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k173(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.args.304 7 1)) ((bruijn ##.x.615 12 0) (close _V10_Ddecide_D301_k174) 'int (##inline ##vcore.car (bruijn ##.args.304 7 1))) ((bruijn ##.k.919 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 7-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k174, self)})),
      _V0int,
      VInlineCar2(runtime,
        VGetArg(statics, 7-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k187(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.910 0 0) (bruijn ##.k.899 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
static void _V10_Ddecide_D301_lambda36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_lambda36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.911 0 0) 'unsigned-long)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0unsigned__long);
}
static void _V10_Ddecide_D301_k186(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.67.341 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.67.341 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.67.341 0 0))) (##vcore.call-with-values (close _V10_Ddecide_D301_k187) (close _V10_Ddecide_D301_lambda36) (bruijn ##.kk.31.305 12 1)) ((bruijn ##.k.899 5 0) #f)) ((bruijn ##.k.899 5 0) #f)) ((bruijn ##.k.899 5 0) #f))
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
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k187, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_lambda36, self)})),
      VGetArg(statics, 12-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k185(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.66.340 0 0)) (if (##inline ##vcore.eq? #t (##inline ##vcore.car (bruijn ##.expr.66.340 0 0))) ((close _V10_Ddecide_D301_k186) (##inline ##vcore.cdr (bruijn ##.expr.66.340 0 0))) ((bruijn ##.k.899 4 0) #f)) ((bruijn ##.k.899 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(true),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k186, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k184(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.65.339 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.65.339 0 0))) ((close _V10_Ddecide_D301_k185) (##inline ##vcore.cdr (bruijn ##.expr.65.339 0 0))) ((bruijn ##.k.899 3 0) #f)) ((bruijn ##.k.899 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k185, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k183(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.64.338 0 0)) (if (##inline ##vcore.eq? 1 (##inline ##vcore.car (bruijn ##.expr.64.338 0 0))) ((close _V10_Ddecide_D301_k184) (##inline ##vcore.cdr (bruijn ##.expr.64.338 0 0))) ((bruijn ##.k.899 2 0) #f)) ((bruijn ##.k.899 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(1l),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k184, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k182(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.900 0 0) ((close _V10_Ddecide_D301_k183) (##inline ##vcore.cdr (bruijn ##.args.304 9 1))) ((bruijn ##.k.899 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k183, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 9-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k181(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.args.304 8 1)) ((bruijn ##.x.615 13 0) (close _V10_Ddecide_D301_k182) 'int (##inline ##vcore.car (bruijn ##.args.304 8 1))) ((bruijn ##.k.899 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 8-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k182, self)})),
      _V0int,
      VInlineCar2(runtime,
        VGetArg(statics, 8-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k195(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.891 0 0) (bruijn ##.k.881 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
static void _V10_Ddecide_D301_lambda37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_lambda37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.892 0 0) 'long-long)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0long__long);
}
static void _V10_Ddecide_D301_k194(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.72.346 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.72.346 0 0))) (##vcore.call-with-values (close _V10_Ddecide_D301_k195) (close _V10_Ddecide_D301_lambda37) (bruijn ##.kk.31.305 13 1)) ((bruijn ##.k.881 5 0) #f)) ((bruijn ##.k.881 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k195, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_lambda37, self)})),
      VGetArg(statics, 13-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k193(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.71.345 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.71.345 0 0))) ((close _V10_Ddecide_D301_k194) (##inline ##vcore.cdr (bruijn ##.expr.71.345 0 0))) ((bruijn ##.k.881 4 0) #f)) ((bruijn ##.k.881 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k194, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k192(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.70.344 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.70.344 0 0))) ((close _V10_Ddecide_D301_k193) (##inline ##vcore.cdr (bruijn ##.expr.70.344 0 0))) ((bruijn ##.k.881 3 0) #f)) ((bruijn ##.k.881 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k193, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k191(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.69.343 0 0)) (if (##inline ##vcore.eq? 2 (##inline ##vcore.car (bruijn ##.expr.69.343 0 0))) ((close _V10_Ddecide_D301_k192) (##inline ##vcore.cdr (bruijn ##.expr.69.343 0 0))) ((bruijn ##.k.881 2 0) #f)) ((bruijn ##.k.881 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(2l),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k192, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k190(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.882 0 0) ((close _V10_Ddecide_D301_k191) (##inline ##vcore.cdr (bruijn ##.args.304 10 1))) ((bruijn ##.k.881 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k191, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 10-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k189(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.args.304 9 1)) ((bruijn ##.x.615 14 0) (close _V10_Ddecide_D301_k190) 'int (##inline ##vcore.car (bruijn ##.args.304 9 1))) ((bruijn ##.k.881 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 9-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k190, self)})),
      _V0int,
      VInlineCar2(runtime,
        VGetArg(statics, 9-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k203(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.872 0 0) (bruijn ##.k.861 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
static void _V10_Ddecide_D301_lambda38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_lambda38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.873 0 0) 'unsigned-long-long)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0unsigned__long__long);
}
static void _V10_Ddecide_D301_k202(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.77.351 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.77.351 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.77.351 0 0))) (##vcore.call-with-values (close _V10_Ddecide_D301_k203) (close _V10_Ddecide_D301_lambda38) (bruijn ##.kk.31.305 14 1)) ((bruijn ##.k.861 5 0) #f)) ((bruijn ##.k.861 5 0) #f)) ((bruijn ##.k.861 5 0) #f))
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
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k203, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_lambda38, self)})),
      VGetArg(statics, 14-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k201(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.76.350 0 0)) (if (##inline ##vcore.eq? #t (##inline ##vcore.car (bruijn ##.expr.76.350 0 0))) ((close _V10_Ddecide_D301_k202) (##inline ##vcore.cdr (bruijn ##.expr.76.350 0 0))) ((bruijn ##.k.861 4 0) #f)) ((bruijn ##.k.861 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(true),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k202, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k200(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.75.349 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.75.349 0 0))) ((close _V10_Ddecide_D301_k201) (##inline ##vcore.cdr (bruijn ##.expr.75.349 0 0))) ((bruijn ##.k.861 3 0) #f)) ((bruijn ##.k.861 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k201, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k199(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.74.348 0 0)) (if (##inline ##vcore.eq? 2 (##inline ##vcore.car (bruijn ##.expr.74.348 0 0))) ((close _V10_Ddecide_D301_k200) (##inline ##vcore.cdr (bruijn ##.expr.74.348 0 0))) ((bruijn ##.k.861 2 0) #f)) ((bruijn ##.k.861 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(2l),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k200, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k198(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.862 0 0) ((close _V10_Ddecide_D301_k199) (##inline ##vcore.cdr (bruijn ##.args.304 11 1))) ((bruijn ##.k.861 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k199, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 11-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k197(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.args.304 10 1)) ((bruijn ##.x.615 15 0) (close _V10_Ddecide_D301_k198) 'int (##inline ##vcore.car (bruijn ##.args.304 10 1))) ((bruijn ##.k.861 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 10-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k198, self)})),
      _V0int,
      VInlineCar2(runtime,
        VGetArg(statics, 10-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k211(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.853 0 0) (bruijn ##.k.843 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
static void _V10_Ddecide_D301_lambda39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_lambda39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.854 0 0) 'short)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0short);
}
static void _V10_Ddecide_D301_k210(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k210, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.82.356 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.82.356 0 0))) (##vcore.call-with-values (close _V10_Ddecide_D301_k211) (close _V10_Ddecide_D301_lambda39) (bruijn ##.kk.31.305 15 1)) ((bruijn ##.k.843 5 0) #f)) ((bruijn ##.k.843 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k211, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_lambda39, self)})),
      VGetArg(statics, 15-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k209(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.81.355 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.81.355 0 0))) ((close _V10_Ddecide_D301_k210) (##inline ##vcore.cdr (bruijn ##.expr.81.355 0 0))) ((bruijn ##.k.843 4 0) #f)) ((bruijn ##.k.843 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k210, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k208(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k208, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.80.354 0 0)) (if (##inline ##vcore.eq? #t (##inline ##vcore.car (bruijn ##.expr.80.354 0 0))) ((close _V10_Ddecide_D301_k209) (##inline ##vcore.cdr (bruijn ##.expr.80.354 0 0))) ((bruijn ##.k.843 3 0) #f)) ((bruijn ##.k.843 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(true),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k209, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k207(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.79.353 0 0)) (if (##inline ##vcore.eq? 0 (##inline ##vcore.car (bruijn ##.expr.79.353 0 0))) ((close _V10_Ddecide_D301_k208) (##inline ##vcore.cdr (bruijn ##.expr.79.353 0 0))) ((bruijn ##.k.843 2 0) #f)) ((bruijn ##.k.843 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(0l),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k208, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k206(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.844 0 0) ((close _V10_Ddecide_D301_k207) (##inline ##vcore.cdr (bruijn ##.args.304 12 1))) ((bruijn ##.k.843 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k207, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 12-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k205(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.args.304 11 1)) ((bruijn ##.x.615 16 0) (close _V10_Ddecide_D301_k206) 'int (##inline ##vcore.car (bruijn ##.args.304 11 1))) ((bruijn ##.k.843 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 11-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k206, self)})),
      _V0int,
      VInlineCar2(runtime,
        VGetArg(statics, 11-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k219(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k219, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.834 0 0) (bruijn ##.k.823 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
static void _V10_Ddecide_D301_lambda40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_lambda40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.835 0 0) 'unsigned-short)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0unsigned__short);
}
static void _V10_Ddecide_D301_k218(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k218, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.87.361 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.87.361 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.87.361 0 0))) (##vcore.call-with-values (close _V10_Ddecide_D301_k219) (close _V10_Ddecide_D301_lambda40) (bruijn ##.kk.31.305 16 1)) ((bruijn ##.k.823 5 0) #f)) ((bruijn ##.k.823 5 0) #f)) ((bruijn ##.k.823 5 0) #f))
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
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k219, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_lambda40, self)})),
      VGetArg(statics, 16-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k217(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k217, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.86.360 0 0)) (if (##inline ##vcore.eq? #t (##inline ##vcore.car (bruijn ##.expr.86.360 0 0))) ((close _V10_Ddecide_D301_k218) (##inline ##vcore.cdr (bruijn ##.expr.86.360 0 0))) ((bruijn ##.k.823 4 0) #f)) ((bruijn ##.k.823 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(true),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k218, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k216(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k216, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.85.359 0 0)) (if (##inline ##vcore.eq? #t (##inline ##vcore.car (bruijn ##.expr.85.359 0 0))) ((close _V10_Ddecide_D301_k217) (##inline ##vcore.cdr (bruijn ##.expr.85.359 0 0))) ((bruijn ##.k.823 3 0) #f)) ((bruijn ##.k.823 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(true),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k217, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k215(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.84.358 0 0)) (if (##inline ##vcore.eq? 0 (##inline ##vcore.car (bruijn ##.expr.84.358 0 0))) ((close _V10_Ddecide_D301_k216) (##inline ##vcore.cdr (bruijn ##.expr.84.358 0 0))) ((bruijn ##.k.823 2 0) #f)) ((bruijn ##.k.823 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(0l),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k216, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k214(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k214, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.824 0 0) ((close _V10_Ddecide_D301_k215) (##inline ##vcore.cdr (bruijn ##.args.304 13 1))) ((bruijn ##.k.823 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k215, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 13-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k213(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k213, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.args.304 12 1)) ((bruijn ##.x.615 17 0) (close _V10_Ddecide_D301_k214) 'int (##inline ##vcore.car (bruijn ##.args.304 12 1))) ((bruijn ##.k.823 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 12-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k214, self)})),
      _V0int,
      VInlineCar2(runtime,
        VGetArg(statics, 12-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k227(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k227, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.811 0 0) (bruijn ##.k.801 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
static void _V10_Ddecide_D301_k230(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k230, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.615 27 0) (bruijn ##.k.815 1 0) (bruijn ##.x.816 0 0) (##string ##.string.1723))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 3,
      statics->vars[0],
      _var0,
      VEncodePointer(&_V10_Dstring_D1723.sym, VPOINTER_OTHER));
}
static void _V10_Ddecide_D301_k229(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k229, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.814 1 0) ((bruijn ##.x.611 30 0) (close _V10_Ddecide_D301_k230) (bruijn ##.special.363 7 0)) ((bruijn ##.k.815 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k230, self)})),
      VGetArg(statics, 7-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k232(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k232, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.x.93.368 0 0) ((bruijn ##.k.812 3 0) (bruijn ##.x.93.368 0 0)) ((bruijn ##.k.812 3 0) (bruijn ##.special.363 8 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VGetArg(statics, 8-1, 0));
}
}
static void _V10_Ddecide_D301_k231(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k231, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.813 0 0) ((bruijn ##.k.812 2 0) 'unsigned-int) ((bruijn ##.find-typedef.221 24 1) (close _V10_Ddecide_D301_k232) (bruijn ##.special.363 7 0) (bruijn ##.table.299 23 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V0unsigned__int);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 1)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k232, self)})),
      VGetArg(statics, 7-1, 0),
      VGetArg(statics, 23-1, 2));
}
}
static void _V10_Ddecide_D301_k228(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k228, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Ddecide_D301_k229) (close _V10_Ddecide_D301_k231))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k229, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k231, self)})));
}
static void _V10_Ddecide_D301_lambda41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_lambda41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.612 27 0) (close _V10_Ddecide_D301_k228) (bruijn ##.special.363 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k228, self)})),
      VGetArg(statics, 5-1, 0));
}
static void _V10_Ddecide_D301_k226(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k226, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.92.367 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.92.367 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.92.367 0 0))) (##vcore.call-with-values (close _V10_Ddecide_D301_k227) (close _V10_Ddecide_D301_lambda41) (bruijn ##.kk.31.305 17 1)) ((bruijn ##.k.801 5 0) #f)) ((bruijn ##.k.801 5 0) #f)) ((bruijn ##.k.801 5 0) #f))
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
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k227, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_lambda41, self)})),
      VGetArg(statics, 17-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k225(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k225, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.91.366 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.91.366 0 0))) ((close _V10_Ddecide_D301_k226) (##inline ##vcore.cdr (bruijn ##.expr.91.366 0 0))) ((bruijn ##.k.801 4 0) #f)) ((bruijn ##.k.801 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k226, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k224(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k224, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.90.365 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.90.365 0 0))) ((close _V10_Ddecide_D301_k225) (##inline ##vcore.cdr (bruijn ##.expr.90.365 0 0))) ((bruijn ##.k.801 3 0) #f)) ((bruijn ##.k.801 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k225, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k223(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k223, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.89.364 0 0)) (if (##inline ##vcore.eq? 0 (##inline ##vcore.car (bruijn ##.expr.89.364 0 0))) ((close _V10_Ddecide_D301_k224) (##inline ##vcore.cdr (bruijn ##.expr.89.364 0 0))) ((bruijn ##.k.801 2 0) #f)) ((bruijn ##.k.801 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(0l),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k224, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k222(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k222, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Ddecide_D301_k223) (##inline ##vcore.cdr (bruijn ##.args.304 14 1)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k223, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 14-1, 1)));
}
static void _V10_Ddecide_D301_k221(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k221, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.args.304 13 1)) ((close _V10_Ddecide_D301_k222) (##inline ##vcore.car (bruijn ##.args.304 13 1))) ((bruijn ##.k.801 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 13-1, 1)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k222, .env = self }, }, 1,
      VInlineCar2(runtime,
        VGetArg(statics, 13-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k234(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k234, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.601 34 0) (bruijn ##.k.793 1 0) (##string ##.string.1724) (bruijn ##.x.794 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1724.sym, VPOINTER_OTHER),
      _var0);
}
static void _V10_Ddecide_D301_lambda42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_lambda42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.580 54 0) (close _V10_Ddecide_D301_k234) (bruijn ##.x.579 55 0) (bruijn ##.args.304 14 1) (##inline ##vcore.qcons 'special (##inline ##vcore.qcons 'longs (##inline ##vcore.qcons 'short (##inline ##vcore.qcons 'unsigned (##inline ##vcore.qcons 'signed '()))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 54-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k234, self)})),
      VGetArg(statics, 55-1, 0),
      VGetArg(statics, 14-1, 1),
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
static void _V10_Ddecide_D301_k233(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k233, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.780 12 0) (close _V10_Ddecide_D301_lambda42) (bruijn ##.kk.31.305 12 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 12-1, 0),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_lambda42, self)})),
      VGetArg(statics, 12-1, 1));
}
static void _V10_Ddecide_D301_k220(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k220, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Ddecide_D301_k221) (close _V10_Ddecide_D301_k233))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k221, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k233, self)})));
}
static void _V10_Ddecide_D301_k212(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k212, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Ddecide_D301_k213) (close _V10_Ddecide_D301_k220))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k213, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k220, self)})));
}
static void _V10_Ddecide_D301_k204(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Ddecide_D301_k205) (close _V10_Ddecide_D301_k212))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k205, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k212, self)})));
}
static void _V10_Ddecide_D301_k196(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Ddecide_D301_k197) (close _V10_Ddecide_D301_k204))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k197, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k204, self)})));
}
static void _V10_Ddecide_D301_k188(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Ddecide_D301_k189) (close _V10_Ddecide_D301_k196))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k189, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k196, self)})));
}
static void _V10_Ddecide_D301_k180(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Ddecide_D301_k181) (close _V10_Ddecide_D301_k188))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k181, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k188, self)})));
}
static void _V10_Ddecide_D301_k172(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Ddecide_D301_k173) (close _V10_Ddecide_D301_k180))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k173, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k180, self)})));
}
static void _V10_Ddecide_D301_k164(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Ddecide_D301_k165) (close _V10_Ddecide_D301_k172))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k165, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k172, self)})));
}
static void _V10_Ddecide_D301_k156(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Ddecide_D301_k157) (close _V10_Ddecide_D301_k164))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k157, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k164, self)})));
}
static void _V10_Ddecide_D301_k148(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Ddecide_D301_k149) (close _V10_Ddecide_D301_k156))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k149, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k156, self)})));
}
static void _V10_Ddecide_D301_k140(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Ddecide_D301_k141) (close _V10_Ddecide_D301_k148))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k141, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k148, self)})));
}
static void _V10_Ddecide_D301_lambda29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_lambda29, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Ddecide_D301_k133) (close _V10_Ddecide_D301_k140))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k133, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k140, self)})));
}
static void _V10_Ddecide_D301_lambda28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, ...) {
 if(argc < 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_lambda28, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _varargs;
  // (##vcore.call/cc (bruijn ##.k.779 0 0) (close _V10_Ddecide_D301_lambda29))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_lambda29, self)})));
}
static void _V10_Dappend__const_D302_lambda43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dappend__const_D302_lambda43, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // (if (bruijn ##.const?.370 0 1) ((bruijn ##.x.579 41 0) (bruijn ##.k.1034 0 0) 'const (bruijn ##.type.371 0 2)) ((bruijn ##.k.1034 0 0) (bruijn ##.type.371 0 2)))
if(VDecodeBool(
_var1)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 41-1, 0)), 3,
      _var0,
      _V0const,
      _var2);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var2);
}
}
static void _V10_Dmaybe__string___Gsymbol_D303_k235(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmaybe__string___Gsymbol_D303_k235, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1036 0 0) ((bruijn ##.x.581 40 0) (bruijn ##.k.1035 1 0) (bruijn ##.x.372 1 1)) ((bruijn ##.k.1035 1 0) (bruijn ##.x.372 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 40-1, 0)), 2,
      statics->vars[0],
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[1]);
}
}
static void _V10_Dmaybe__string___Gsymbol_D303_lambda44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmaybe__string___Gsymbol_D303_lambda44, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.x.600 20 0) (close _V10_Dmaybe__string___Gsymbol_D303_k235) (bruijn ##.x.372 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmaybe__string___Gsymbol_D303_k235, self)})),
      _var1);
}
static void _V10_Dloop_D373_k237(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D373_k237, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.special.376 2 3) ((bruijn ##.k.1041 0 0) (bruijn ##.special.376 2 3)) ((bruijn ##.k.1041 0 0) 'int))
if(VDecodeBool(
statics->up->vars[3])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[3]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0int);
}
}
static void _V10_Dloop_D373_k239(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D373_k239, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.append-const.302 5 1) (bruijn ##.k.1037 3 0) (bruijn ##.const.377 3 4) (bruijn ##.x.1039 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 3,
      statics->up->up->vars[0],
      statics->up->up->vars[4],
      _var0);
}
static void _V10_Dloop_D373_k238(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D373_k238, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.decide.301 4 0) (close _V10_Dloop_D373_k239) (bruijn ##.x.1040 0 0) (bruijn ##.longs.378 2 5) (bruijn ##.short.379 2 6) (bruijn ##.unsigned.380 2 7) (bruijn ##.signed.381 2 8))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 6,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D373_k239, self)})),
      _var0,
      statics->up->vars[5],
      statics->up->vars[6],
      statics->up->vars[7],
      statics->up->vars[8]);
}
static void _V10_Dloop_D373_k242(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D373_k242, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.373 5 0) (bruijn ##.k.1037 4 0) (bruijn ##.x.1043 0 0) (bruijn ##.storage.375 4 2) (bruijn ##.special.376 4 3) #t (bruijn ##.longs.378 4 5) (bruijn ##.short.379 4 6) (bruijn ##.unsigned.380 4 7) (bruijn ##.signed.381 4 8))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 9,
      statics->up->up->up->vars[0],
      _var0,
      statics->up->up->up->vars[2],
      statics->up->up->up->vars[3],
      VEncodeBool(true),
      statics->up->up->up->vars[5],
      statics->up->up->up->vars[6],
      statics->up->up->up->vars[7],
      statics->up->up->up->vars[8]);
}
static void _V10_Dloop_D373_k244(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D373_k244, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1072 1 0) ((bruijn ##.k.1073 0 0) (bruijn ##.p.1072 1 0)) ((bruijn ##.x.608 18 0) (bruijn ##.k.1073 0 0) (bruijn ##.x.30.382 3 0) 'volatile))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 3,
      _var0,
      statics->up->up->vars[0],
      _V0volatile);
}
}
static void _V10_Dloop_D373_k246(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D373_k246, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.373 7 0) (bruijn ##.k.1037 6 0) (bruijn ##.x.1045 0 0) (bruijn ##.storage.375 6 2) (bruijn ##.special.376 6 3) (bruijn ##.const.377 6 4) (bruijn ##.longs.378 6 5) (bruijn ##.short.379 6 6) (bruijn ##.unsigned.380 6 7) (bruijn ##.signed.381 6 8))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 9,
      VGetArg(statics, 6-1, 0),
      _var0,
      VGetArg(statics, 6-1, 2),
      VGetArg(statics, 6-1, 3),
      VGetArg(statics, 6-1, 4),
      VGetArg(statics, 6-1, 5),
      VGetArg(statics, 6-1, 6),
      VGetArg(statics, 6-1, 7),
      VGetArg(statics, 6-1, 8));
}
static void _V10_Dloop_D373_k251(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D373_k251, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1071 0 0) ((bruijn ##.k.1068 3 0) (bruijn ##.p.1071 0 0)) ((bruijn ##.x.608 23 0) (bruijn ##.k.1068 3 0) (bruijn ##.x.30.382 8 0) 'auto))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 3,
      statics->up->up->vars[0],
      VGetArg(statics, 8-1, 0),
      _V0auto);
}
}
static void _V10_Dloop_D373_k250(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D373_k250, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1070 0 0) ((bruijn ##.k.1068 2 0) (bruijn ##.p.1070 0 0)) ((bruijn ##.x.608 22 0) (close _V10_Dloop_D373_k251) (bruijn ##.x.30.382 7 0) 'register))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D373_k251, self)})),
      VGetArg(statics, 7-1, 0),
      _V0register);
}
}
static void _V10_Dloop_D373_k249(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D373_k249, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1069 0 0) ((bruijn ##.k.1068 1 0) (bruijn ##.p.1069 0 0)) ((bruijn ##.x.608 21 0) (close _V10_Dloop_D373_k250) (bruijn ##.x.30.382 6 0) 'typedef))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D373_k250, self)})),
      VGetArg(statics, 6-1, 0),
      _V0typedef);
}
}
static void _V10_Dloop_D373_k248(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D373_k248, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1067 1 0) ((bruijn ##.k.1068 0 0) (bruijn ##.p.1067 1 0)) ((bruijn ##.x.608 20 0) (close _V10_Dloop_D373_k249) (bruijn ##.x.30.382 5 0) 'extern))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D373_k249, self)})),
      VGetArg(statics, 5-1, 0),
      _V0extern);
}
}
static void _V10_Dloop_D373_k254(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D373_k254, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1053 1 0) ((bruijn ##.x.601 29 0) (bruijn ##.k.1054 0 0) (##string ##.string.1725)) ((bruijn ##.x.611 19 0) (bruijn ##.k.1054 0 0) (bruijn ##.t.374 9 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D1725.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 2,
      _var0,
      VGetArg(statics, 9-1, 1));
}
}
static void _V10_Dloop_D373_k257(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D373_k257, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.601 31 0) (bruijn ##.k.1051 1 0) (##string ##.string.1726) (bruijn ##.storage.375 11 2) (bruijn ##.x.1052 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 4,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1726.sym, VPOINTER_OTHER),
      VGetArg(statics, 11-1, 2),
      _var0);
}
static void _V10_Dloop_D373_k256(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D373_k256, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.storage.375 10 2) ((bruijn ##.x.611 20 0) (close _V10_Dloop_D373_k257) (bruijn ##.t.374 10 1)) ((bruijn ##.k.1051 0 0) #f))
if(VDecodeBool(
VGetArg(statics, 10-1, 2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D373_k257, self)})),
      VGetArg(statics, 10-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D373_k260(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D373_k260, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.373 13 0) (bruijn ##.k.1037 12 0) (bruijn ##.x.1049 1 0) (bruijn ##.x.1050 0 0) (bruijn ##.special.376 12 3) (bruijn ##.const.377 12 4) (bruijn ##.longs.378 12 5) (bruijn ##.short.379 12 6) (bruijn ##.unsigned.380 12 7) (bruijn ##.signed.381 12 8))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 9,
      VGetArg(statics, 12-1, 0),
      statics->vars[0],
      _var0,
      VGetArg(statics, 12-1, 3),
      VGetArg(statics, 12-1, 4),
      VGetArg(statics, 12-1, 5),
      VGetArg(statics, 12-1, 6),
      VGetArg(statics, 12-1, 7),
      VGetArg(statics, 12-1, 8));
}
static void _V10_Dloop_D373_k259(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D373_k259, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.611 21 0) (close _V10_Dloop_D373_k260) (bruijn ##.t.374 11 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D373_k260, self)})),
      VGetArg(statics, 11-1, 1));
}
static void _V10_Dloop_D373_k258(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D373_k258, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.609 22 0) (close _V10_Dloop_D373_k259) (bruijn ##.t.374 10 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D373_k259, self)})),
      VGetArg(statics, 10-1, 1));
}
static void _V10_Dloop_D373_k255(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D373_k255, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D373_k256) (close _V10_Dloop_D373_k258))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D373_k256, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D373_k258, self)})));
}
static void _V10_Dloop_D373_k253(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D373_k253, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D373_k254) (close _V10_Dloop_D373_k255))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D373_k254, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D373_k255, self)})));
}
static void _V10_Dloop_D373_k263(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D373_k263, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.373 11 0) (bruijn ##.k.1037 10 0) (bruijn ##.x.1056 1 0) (bruijn ##.storage.375 10 2) (bruijn ##.special.376 10 3) (bruijn ##.const.377 10 4) (bruijn ##.x.1057 0 0) (bruijn ##.short.379 10 6) (bruijn ##.unsigned.380 10 7) (bruijn ##.signed.381 10 8))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 9,
      VGetArg(statics, 10-1, 0),
      statics->vars[0],
      VGetArg(statics, 10-1, 2),
      VGetArg(statics, 10-1, 3),
      VGetArg(statics, 10-1, 4),
      _var0,
      VGetArg(statics, 10-1, 6),
      VGetArg(statics, 10-1, 7),
      VGetArg(statics, 10-1, 8));
}
static void _V10_Dloop_D373_k262(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D373_k262, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.613 17 0) (close _V10_Dloop_D373_k263) (bruijn ##.longs.378 9 5) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D373_k263, self)})),
      VGetArg(statics, 9-1, 5),
      VEncodeInt(1l));
}
static void _V10_Dloop_D373_k265(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D373_k265, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.373 11 0) (bruijn ##.k.1037 10 0) (bruijn ##.x.1059 0 0) (bruijn ##.storage.375 10 2) (bruijn ##.special.376 10 3) (bruijn ##.const.377 10 4) (bruijn ##.longs.378 10 5) #t (bruijn ##.unsigned.380 10 7) (bruijn ##.signed.381 10 8))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 9,
      VGetArg(statics, 10-1, 0),
      _var0,
      VGetArg(statics, 10-1, 2),
      VGetArg(statics, 10-1, 3),
      VGetArg(statics, 10-1, 4),
      VGetArg(statics, 10-1, 5),
      VEncodeBool(true),
      VGetArg(statics, 10-1, 7),
      VGetArg(statics, 10-1, 8));
}
static void _V10_Dloop_D373_k267(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D373_k267, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.373 12 0) (bruijn ##.k.1037 11 0) (bruijn ##.x.1061 0 0) (bruijn ##.storage.375 11 2) (bruijn ##.special.376 11 3) (bruijn ##.const.377 11 4) (bruijn ##.longs.378 11 5) (bruijn ##.short.379 11 6) #t (bruijn ##.signed.381 11 8))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 9,
      VGetArg(statics, 11-1, 0),
      _var0,
      VGetArg(statics, 11-1, 2),
      VGetArg(statics, 11-1, 3),
      VGetArg(statics, 11-1, 4),
      VGetArg(statics, 11-1, 5),
      VGetArg(statics, 11-1, 6),
      VEncodeBool(true),
      VGetArg(statics, 11-1, 8));
}
static void _V10_Dloop_D373_k269(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D373_k269, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.373 13 0) (bruijn ##.k.1037 12 0) (bruijn ##.x.1063 0 0) (bruijn ##.storage.375 12 2) (bruijn ##.special.376 12 3) (bruijn ##.const.377 12 4) (bruijn ##.longs.378 12 5) (bruijn ##.short.379 12 6) (bruijn ##.unsigned.380 12 7) #t)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 9,
      VGetArg(statics, 12-1, 0),
      _var0,
      VGetArg(statics, 12-1, 2),
      VGetArg(statics, 12-1, 3),
      VGetArg(statics, 12-1, 4),
      VGetArg(statics, 12-1, 5),
      VGetArg(statics, 12-1, 6),
      VGetArg(statics, 12-1, 7),
      VEncodeBool(true));
}
static void _V10_Dloop_D373_k270(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D373_k270, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.601 32 0) (bruijn ##.k.1037 12 0) (##string ##.string.1727) (bruijn ##.x.1064 0 0) (bruijn ##.special.376 12 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 4,
      VGetArg(statics, 12-1, 0),
      VEncodePointer(&_V10_Dstring_D1727.sym, VPOINTER_OTHER),
      _var0,
      VGetArg(statics, 12-1, 3));
}
static void _V10_Dloop_D373_k272(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D373_k272, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.373 14 0) (bruijn ##.k.1037 13 0) (bruijn ##.x.1065 1 0) (bruijn ##.storage.375 13 2) (bruijn ##.x.1066 0 0) (bruijn ##.const.377 13 4) (bruijn ##.longs.378 13 5) (bruijn ##.short.379 13 6) (bruijn ##.unsigned.380 13 7) (bruijn ##.signed.381 13 8))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 9,
      VGetArg(statics, 13-1, 0),
      statics->vars[0],
      VGetArg(statics, 13-1, 2),
      _var0,
      VGetArg(statics, 13-1, 4),
      VGetArg(statics, 13-1, 5),
      VGetArg(statics, 13-1, 6),
      VGetArg(statics, 13-1, 7),
      VGetArg(statics, 13-1, 8));
}
static void _V10_Dloop_D373_k271(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D373_k271, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.611 22 0) (close _V10_Dloop_D373_k272) (bruijn ##.t.374 12 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D373_k272, self)})),
      VGetArg(statics, 12-1, 1));
}
static void _V10_Dloop_D373_k268(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D373_k268, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1062 0 0) ((bruijn ##.x.609 23 0) (close _V10_Dloop_D373_k269) (bruijn ##.t.374 11 1)) (if (bruijn ##.special.376 11 3) ((bruijn ##.x.611 21 0) (close _V10_Dloop_D373_k270) (bruijn ##.t.374 11 1)) ((bruijn ##.x.609 23 0) (close _V10_Dloop_D373_k271) (bruijn ##.t.374 11 1))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D373_k269, self)})),
      VGetArg(statics, 11-1, 1));
} else {
if(VDecodeBool(
VGetArg(statics, 11-1, 3))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D373_k270, self)})),
      VGetArg(statics, 11-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D373_k271, self)})),
      VGetArg(statics, 11-1, 1));
}
}
}
static void _V10_Dloop_D373_k266(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D373_k266, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1060 0 0) ((bruijn ##.x.609 22 0) (close _V10_Dloop_D373_k267) (bruijn ##.t.374 10 1)) ((bruijn ##.x.608 23 0) (close _V10_Dloop_D373_k268) (bruijn ##.x.30.382 8 0) 'signed))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D373_k267, self)})),
      VGetArg(statics, 10-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D373_k268, self)})),
      VGetArg(statics, 8-1, 0),
      _V0signed);
}
}
static void _V10_Dloop_D373_k264(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D373_k264, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1058 0 0) ((bruijn ##.x.609 21 0) (close _V10_Dloop_D373_k265) (bruijn ##.t.374 9 1)) ((bruijn ##.x.608 22 0) (close _V10_Dloop_D373_k266) (bruijn ##.x.30.382 7 0) 'unsigned))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D373_k265, self)})),
      VGetArg(statics, 9-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D373_k266, self)})),
      VGetArg(statics, 7-1, 0),
      _V0unsigned);
}
}
static void _V10_Dloop_D373_k261(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D373_k261, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1055 0 0) ((bruijn ##.x.609 20 0) (close _V10_Dloop_D373_k262) (bruijn ##.t.374 8 1)) ((bruijn ##.x.608 21 0) (close _V10_Dloop_D373_k264) (bruijn ##.x.30.382 6 0) 'short))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D373_k262, self)})),
      VGetArg(statics, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D373_k264, self)})),
      VGetArg(statics, 6-1, 0),
      _V0short);
}
}
static void _V10_Dloop_D373_k252(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D373_k252, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1046 0 0) ((bruijn ##.x.599 29 0) (close _V10_Dloop_D373_k253) (bruijn ##.storage-declaration?.300 10 3)) ((bruijn ##.x.608 20 0) (close _V10_Dloop_D373_k261) (bruijn ##.x.30.382 5 0) 'long))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D373_k253, self)})),
      VGetArg(statics, 10-1, 3));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D373_k261, self)})),
      VGetArg(statics, 5-1, 0),
      _V0long);
}
}
static void _V10_Dloop_D373_k247(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D373_k247, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D373_k248) (close _V10_Dloop_D373_k252))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D373_k248, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D373_k252, self)})));
}
static void _V10_Dloop_D373_k245(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D373_k245, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1044 0 0) ((bruijn ##.x.609 17 0) (close _V10_Dloop_D373_k246) (bruijn ##.t.374 5 1)) ((bruijn ##.x.608 18 0) (close _V10_Dloop_D373_k247) (bruijn ##.x.30.382 3 0) 'static))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D373_k246, self)})),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D373_k247, self)})),
      statics->up->up->vars[0],
      _V0static);
}
}
static void _V10_Dloop_D373_k243(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D373_k243, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D373_k244) (close _V10_Dloop_D373_k245))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D373_k244, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D373_k245, self)})));
}
static void _V10_Dloop_D373_k241(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D373_k241, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1042 0 0) ((bruijn ##.x.609 15 0) (close _V10_Dloop_D373_k242) (bruijn ##.t.374 3 1)) ((bruijn ##.x.608 16 0) (close _V10_Dloop_D373_k243) (bruijn ##.x.30.382 1 0) 'restrict))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D373_k242, self)})),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D373_k243, self)})),
      statics->vars[0],
      _V0restrict);
}
}
static void _V10_Dloop_D373_k240(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D373_k240, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.608 15 0) (close _V10_Dloop_D373_k241) (bruijn ##.x.30.382 0 0) 'const)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D373_k241, self)})),
      _var0,
      _V0const);
}
static void _V10_Dloop_D373_k236(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D373_k236, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1038 0 0) ((close _V10_Dloop_D373_k237) (close _V10_Dloop_D373_k238)) ((bruijn ##.x.611 11 0) (close _V10_Dloop_D373_k240) (bruijn ##.t.374 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D373_k237, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D373_k238, self)})));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D373_k240, self)})),
      statics->vars[1]);
}
}
static void _V10_Dloop_D373_lambda45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8) {
 if(argc != 9) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D373_lambda45, got ~D~N"
  "-- expected 9~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[9]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 9, 9, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  self->vars[5] = _var5;
  self->vars[6] = _var6;
  self->vars[7] = _var7;
  self->vars[8] = _var8;
  // ((bruijn ##.x.591 30 0) (close _V10_Dloop_D373_k236) (bruijn ##.t.374 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D373_k236, self)})),
      _var1);
}
static void _V10_Dreduce__type_D222_k273(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__type_D222_k273, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.373 1 0) (bruijn ##.k.778 3 0) (bruijn ##.x.1074 0 0) #f #f #f 0 #f #f #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 9,
      statics->up->up->vars[0],
      _var0,
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeInt(0l),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false));
}
static void _V10_Dreduce__type_D222_lambda27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__type_D222_lambda27, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (letrec 3 ((close _V10_Ddecide_D301_lambda28) (close _V10_Dappend__const_D302_lambda43) (close _V10_Dmaybe__string___Gsymbol_D303_lambda44)) (letrec 1 ((close _V10_Dloop_D373_lambda45)) ((bruijn ##.x.580 40 0) (close _V10_Dreduce__type_D222_k273) (bruijn ##.maybe-string->symbol.303 1 2) (bruijn ##.t.298 2 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    VEnv * self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_lambda28, self)}));
    self->vars[1] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dappend__const_D302_lambda43, self)}));
    self->vars[2] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmaybe__string___Gsymbol_D303_lambda44, self)}));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    VEnv * self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D373_lambda45, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 40-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__type_D222_k273, self)})),
      statics->vars[2],
      statics->up->vars[1]);
    }
    }
}
static void _V10_Dunwrap__typedef_D223_k280(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__typedef_D223_k280, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1085 0 0) (bruijn ##.k.1080 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
static void _V10_Dunwrap__typedef_D223_k283(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__typedef_D223_k283, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1091 1 0) ((bruijn ##.x.601 28 0) (bruijn ##.k.1092 0 0) (##string ##.string.1728) (bruijn ##.expr.386 10 0)) ((bruijn ##.k.1092 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1728.sym, VPOINTER_OTHER),
      VGetArg(statics, 10-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dunwrap__typedef_D223_k285(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__typedef_D223_k285, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1086 4 0) (##inline ##vcore.cons 'typedef (##inline ##vcore.cons (bruijn ##.x.1089 0 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.97.390 7 0)) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0typedef,
        VInlineCons2(runtime,
        _var0,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 7-1, 0)),
        VNULL))));
}
static void _V10_Dunwrap__typedef_D223_k284(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__typedef_D223_k284, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.581 48 0) (close _V10_Dunwrap__typedef_D223_k285) (bruijn ##.name.393 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 48-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__typedef_D223_k285, self)})),
      statics->up->up->up->vars[0]);
}
static void _V10_Dunwrap__typedef_D223_k282(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__typedef_D223_k282, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dunwrap__typedef_D223_k283) (close _V10_Dunwrap__typedef_D223_k284))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dunwrap__typedef_D223_k283, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__typedef_D223_k284, self)})));
}
static void _V10_Dunwrap__typedef_D223_k281(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__typedef_D223_k281, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.599 28 0) (close _V10_Dunwrap__typedef_D223_k282) (bruijn ##.x.1093 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__typedef_D223_k282, self)})),
      _var0);
}
static void _V10_Dunwrap__typedef_D223_lambda48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__typedef_D223_lambda48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.600 26 0) (close _V10_Dunwrap__typedef_D223_k281) (bruijn ##.name.393 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__typedef_D223_k281, self)})),
      statics->vars[0]);
}
static void _V10_Dunwrap__typedef_D223_k279(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__typedef_D223_k279, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.98.392 1 0))) (##vcore.call-with-values (close _V10_Dunwrap__typedef_D223_k280) (close _V10_Dunwrap__typedef_D223_lambda48) (bruijn ##.kk.94.387 5 1)) ((bruijn ##.k.1080 4 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__typedef_D223_k280, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__typedef_D223_lambda48, self)})),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dunwrap__typedef_D223_k278(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__typedef_D223_k278, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.98.392 0 0)) ((close _V10_Dunwrap__typedef_D223_k279) (##inline ##vcore.car (bruijn ##.expr.98.392 0 0))) ((bruijn ##.k.1080 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dunwrap__typedef_D223_k279, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dunwrap__typedef_D223_k277(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__typedef_D223_k277, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.97.390 0 0)) ((close _V10_Dunwrap__typedef_D223_k278) (##inline ##vcore.cdr (bruijn ##.expr.97.390 0 0))) ((bruijn ##.k.1080 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dunwrap__typedef_D223_k278, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dunwrap__typedef_D223_k276(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__typedef_D223_k276, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1081 0 0) ((close _V10_Dunwrap__typedef_D223_k277) (##inline ##vcore.cdr (bruijn ##.expr.386 3 0))) ((bruijn ##.k.1080 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dunwrap__typedef_D223_k277, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dunwrap__typedef_D223_k275(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__typedef_D223_k275, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.386 2 0)) ((bruijn ##.x.615 6 0) (close _V10_Dunwrap__typedef_D223_k276) 'variable (##inline ##vcore.car (bruijn ##.expr.386 2 0))) ((bruijn ##.k.1080 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__typedef_D223_k276, self)})),
      _V0variable,
      VInlineCar2(runtime,
        statics->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dunwrap__typedef_D223_lambda49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__typedef_D223_lambda49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.601 21 0) (bruijn ##.k.1078 0 0) (##string ##.string.1729) (bruijn ##.expr.386 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1729.sym, VPOINTER_OTHER),
      statics->up->up->vars[0]);
}
static void _V10_Dunwrap__typedef_D223_k286(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__typedef_D223_k286, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1076 1 0) (close _V10_Dunwrap__typedef_D223_lambda49) (bruijn ##.kk.94.387 1 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__typedef_D223_lambda49, self)})),
      statics->vars[1]);
}
static void _V10_Dunwrap__typedef_D223_lambda47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__typedef_D223_lambda47, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Dunwrap__typedef_D223_k275) (close _V10_Dunwrap__typedef_D223_k286))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dunwrap__typedef_D223_k275, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__typedef_D223_k286, self)})));
}
static void _V10_Dunwrap__typedef_D223_k274(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__typedef_D223_k274, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1075 1 0) (close _V10_Dunwrap__typedef_D223_lambda47))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__typedef_D223_lambda47, self)})));
}
static void _V10_Dunwrap__typedef_D223_lambda46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__typedef_D223_lambda46, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // ((bruijn ##.reduce-declare.220 1 0) (close _V10_Dunwrap__typedef_D223_k274) (bruijn ##.ret.383 0 1) (bruijn ##.decl.384 0 2) (bruijn ##.table.385 0 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__typedef_D223_k274, self)})),
      _var1,
      _var2,
      _var3);
}
static void _V10_Dunwrap__function_D224_k295(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D224_k295, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1105 0 0) (bruijn ##.k.1101 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
}
static void _V10_Dunwrap__function_D224_k298(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D224_k298, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1119 1 0) ((bruijn ##.x.601 30 0) (bruijn ##.k.1120 0 0) (##string ##.string.1730) (bruijn ##.expr.397 12 0)) ((bruijn ##.k.1120 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1730.sym, VPOINTER_OTHER),
      VGetArg(statics, 12-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dunwrap__function_D224_k302(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D224_k302, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1116 1 0) ((bruijn ##.x.601 33 0) (bruijn ##.k.1117 0 0) (##string ##.string.1731) (bruijn ##.expr.397 15 0)) ((bruijn ##.k.1117 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1731.sym, VPOINTER_OTHER),
      VGetArg(statics, 15-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dunwrap__function_D224_k305(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D224_k305, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1106 8 0) (##inline ##vcore.cons 'function (##inline ##vcore.cons (bruijn ##.x.1111 0 0) (##inline ##vcore.cons (bruijn ##.ret.404 10 0) (bruijn ##.args.405 9 0)))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      VInlineCons2(runtime,
        _V0function,
        VInlineCons2(runtime,
        _var0,
        VInlineCons2(runtime,
        VGetArg(statics, 10-1, 0),
        VGetArg(statics, 9-1, 0)))));
}
static void _V10_Dunwrap__function_D224_k304(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D224_k304, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.581 54 0) (close _V10_Dunwrap__function_D224_k305) (bruijn ##.name.402 11 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 54-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__function_D224_k305, self)})),
      VGetArg(statics, 11-1, 0));
}
static void _V10_Dunwrap__function_D224_k307(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D224_k307, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1114 0 0) ((bruijn ##.x.601 36 0) (bruijn ##.k.1113 2 0) (##string ##.string.1732) (bruijn ##.name.402 13 0) (bruijn ##.arg.406 2 1)) ((bruijn ##.k.1113 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 4,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1732.sym, VPOINTER_OTHER),
      VGetArg(statics, 13-1, 0),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dunwrap__function_D224_k306(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D224_k306, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.599 37 0) (close _V10_Dunwrap__function_D224_k307) (bruijn ##.x.1115 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__function_D224_k307, self)})),
      _var0);
}
static void _V10_Dunwrap__function_D224_lambda53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D224_lambda53, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.get-foreign-decoder.236 18 16) (close _V10_Dunwrap__function_D224_k306) (bruijn ##.arg.406 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 16)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__function_D224_k306, self)})),
      _var1);
}
static void _V10_Dunwrap__function_D224_k303(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D224_k303, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.610 24 0) (close _V10_Dunwrap__function_D224_k304) (close _V10_Dunwrap__function_D224_lambda53) (bruijn ##.args.405 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__function_D224_k304, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__function_D224_lambda53, self)})),
      VGetArg(statics, 7-1, 0));
}
static void _V10_Dunwrap__function_D224_k301(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D224_k301, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dunwrap__function_D224_k302) (close _V10_Dunwrap__function_D224_k303))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dunwrap__function_D224_k302, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__function_D224_k303, self)})));
}
static void _V10_Dunwrap__function_D224_k300(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D224_k300, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.599 33 0) (close _V10_Dunwrap__function_D224_k301) (bruijn ##.x.1118 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__function_D224_k301, self)})),
      _var0);
}
static void _V10_Dunwrap__function_D224_k299(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D224_k299, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.600 31 0) (close _V10_Dunwrap__function_D224_k300) (bruijn ##.name.402 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__function_D224_k300, self)})),
      VGetArg(statics, 7-1, 0));
}
static void _V10_Dunwrap__function_D224_k297(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D224_k297, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dunwrap__function_D224_k298) (close _V10_Dunwrap__function_D224_k299))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dunwrap__function_D224_k298, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__function_D224_k299, self)})));
}
static void _V10_Dunwrap__function_D224_k296(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D224_k296, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.599 30 0) (close _V10_Dunwrap__function_D224_k297) (bruijn ##.x.1121 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__function_D224_k297, self)})),
      _var0);
}
static void _V10_Dunwrap__function_D224_lambda52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D224_lambda52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.get-foreign-encoder.235 11 15) (close _V10_Dunwrap__function_D224_k296) (bruijn ##.ret.404 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 15)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__function_D224_k296, self)})),
      statics->up->vars[0]);
}
static void _V10_Dunwrap__function_D224_k294(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D224_k294, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (close _V10_Dunwrap__function_D224_k295) (close _V10_Dunwrap__function_D224_lambda52) (bruijn ##.kk.99.398 7 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__function_D224_k295, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__function_D224_lambda52, self)})),
      VGetArg(statics, 7-1, 1));
}
static void _V10_Dunwrap__function_D224_k293(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D224_k293, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dunwrap__function_D224_k294) (##inline ##vcore.cdr (bruijn ##.expr.103.403 1 0)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dunwrap__function_D224_k294, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
static void _V10_Dunwrap__function_D224_k292(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D224_k292, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.103.403 0 0)) ((close _V10_Dunwrap__function_D224_k293) (##inline ##vcore.car (bruijn ##.expr.103.403 0 0))) ((bruijn ##.k.1101 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dunwrap__function_D224_k293, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dunwrap__function_D224_k291(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D224_k291, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dunwrap__function_D224_k292) (##inline ##vcore.cdr (bruijn ##.expr.102.401 1 0)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dunwrap__function_D224_k292, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
static void _V10_Dunwrap__function_D224_k290(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D224_k290, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.102.401 0 0)) ((close _V10_Dunwrap__function_D224_k291) (##inline ##vcore.car (bruijn ##.expr.102.401 0 0))) ((bruijn ##.k.1101 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dunwrap__function_D224_k291, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dunwrap__function_D224_k289(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D224_k289, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1102 0 0) ((close _V10_Dunwrap__function_D224_k290) (##inline ##vcore.cdr (bruijn ##.expr.397 3 0))) ((bruijn ##.k.1101 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dunwrap__function_D224_k290, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dunwrap__function_D224_k288(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D224_k288, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.397 2 0)) ((bruijn ##.x.615 6 0) (close _V10_Dunwrap__function_D224_k289) 'function (##inline ##vcore.car (bruijn ##.expr.397 2 0))) ((bruijn ##.k.1101 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__function_D224_k289, self)})),
      _V0function,
      VInlineCar2(runtime,
        statics->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dunwrap__function_D224_lambda54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D224_lambda54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.601 21 0) (bruijn ##.k.1099 0 0) (##string ##.string.1733) (bruijn ##.expr.397 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1733.sym, VPOINTER_OTHER),
      statics->up->up->vars[0]);
}
static void _V10_Dunwrap__function_D224_k308(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D224_k308, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1097 1 0) (close _V10_Dunwrap__function_D224_lambda54) (bruijn ##.kk.99.398 1 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__function_D224_lambda54, self)})),
      statics->vars[1]);
}
static void _V10_Dunwrap__function_D224_lambda51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D224_lambda51, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Dunwrap__function_D224_k288) (close _V10_Dunwrap__function_D224_k308))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dunwrap__function_D224_k288, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__function_D224_k308, self)})));
}
static void _V10_Dunwrap__function_D224_k287(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D224_k287, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1096 1 0) (close _V10_Dunwrap__function_D224_lambda51))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__function_D224_lambda51, self)})));
}
static void _V10_Dunwrap__function_D224_lambda50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D224_lambda50, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // ((bruijn ##.reduce-declare.220 1 0) (close _V10_Dunwrap__function_D224_k287) (bruijn ##.ret.394 0 1) (bruijn ##.decl.395 0 2) (bruijn ##.table.396 0 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__function_D224_k287, self)})),
      _var1,
      _var2,
      _var3);
}
static void _V10_Dunwrap__enums__iter_D409_k311(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__enums__iter_D409_k311, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1134 1 0) ((bruijn ##.x.585 38 0) (bruijn ##.k.1135 0 0) (bruijn ##.enums.410 3 1)) ((bruijn ##.k.1135 0 0) (bruijn ##.val.411 3 2)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 38-1, 0)), 2,
      _var0,
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[2]);
}
}
static void _V10_Dunwrap__enums__iter_D409_k317(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__enums__iter_D409_k317, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.unwrap-enums-iter.409 9 0) (bruijn ##.k.1124 8 0) (bruijn ##.x.1126 4 0) (bruijn ##.x.1127 3 0) (bruijn ##.x.1128 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 4,
      VGetArg(statics, 8-1, 0),
      statics->up->up->up->vars[0],
      statics->up->up->vars[0],
      _var0);
}
static void _V10_Dunwrap__enums__iter_D409_k316(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__enums__iter_D409_k316, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.597 30 0) (close _V10_Dunwrap__enums__iter_D409_k317) (##inline ##vcore.cons 'enum (##inline ##vcore.cons (bruijn ##.x.1131 0 0) (##inline ##vcore.cons (bruijn ##.val.413 4 0) '()))) (bruijn ##.table.412 7 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__enums__iter_D409_k317, self)})),
      VInlineCons2(runtime,
        _V0enum,
        VInlineCons2(runtime,
        _var0,
        VInlineCons2(runtime,
        statics->up->up->up->vars[0],
        VNULL))),
      VGetArg(statics, 7-1, 3));
}
static void _V10_Dunwrap__enums__iter_D409_k315(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__enums__iter_D409_k315, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.581 45 0) (close _V10_Dunwrap__enums__iter_D409_k316) (bruijn ##.x.1133 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 45-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__enums__iter_D409_k316, self)})),
      _var0);
}
static void _V10_Dunwrap__enums__iter_D409_k314(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__enums__iter_D409_k314, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.582 43 0) (close _V10_Dunwrap__enums__iter_D409_k315) (bruijn ##.enums.410 5 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 43-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__enums__iter_D409_k315, self)})),
      VGetArg(statics, 5-1, 1));
}
static void _V10_Dunwrap__enums__iter_D409_k313(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__enums__iter_D409_k313, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.613 11 0) (close _V10_Dunwrap__enums__iter_D409_k314) (bruijn ##.val.413 1 0) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__enums__iter_D409_k314, self)})),
      statics->vars[0],
      VEncodeInt(1l));
}
static void _V10_Dunwrap__enums__iter_D409_k312(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__enums__iter_D409_k312, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.609 14 0) (close _V10_Dunwrap__enums__iter_D409_k313) (bruijn ##.enums.410 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__enums__iter_D409_k313, self)})),
      statics->up->up->vars[1]);
}
static void _V10_Dunwrap__enums__iter_D409_k310(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__enums__iter_D409_k310, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dunwrap__enums__iter_D409_k311) (close _V10_Dunwrap__enums__iter_D409_k312))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dunwrap__enums__iter_D409_k311, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__enums__iter_D409_k312, self)})));
}
static void _V10_Dunwrap__enums__iter_D409_k309(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__enums__iter_D409_k309, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1125 0 0) ((bruijn ##.k.1124 1 0) (bruijn ##.table.412 1 3)) ((bruijn ##.x.585 36 0) (close _V10_Dunwrap__enums__iter_D409_k310) (bruijn ##.enums.410 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[3]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__enums__iter_D409_k310, self)})),
      statics->vars[1]);
}
}
static void _V10_Dunwrap__enums__iter_D409_lambda56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__enums__iter_D409_lambda56, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // ((bruijn ##.x.591 29 0) (close _V10_Dunwrap__enums__iter_D409_k309) (bruijn ##.enums.410 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__enums__iter_D409_k309, self)})),
      _var1);
}
static void _V10_Dloop_D414_k322(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D414_k322, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.615 11 0) (bruijn ##.k.1141 1 0) (bruijn ##.x.1142 0 0) (##string ##.string.1723))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 3,
      statics->vars[0],
      _var0,
      VEncodePointer(&_V10_Dstring_D1723.sym, VPOINTER_OTHER));
}
static void _V10_Dloop_D414_k321(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D414_k321, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1140 1 0) ((bruijn ##.x.582 43 0) (close _V10_Dloop_D414_k322) (bruijn ##.ret.415 4 1)) ((bruijn ##.k.1141 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 43-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D414_k322, self)})),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D414_k324(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D414_k324, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.enums.416 0 0) ((bruijn ##.unwrap-enums-iter.409 7 0) (bruijn ##.k.1136 5 0) (bruijn ##.enums.416 0 0) 0 (bruijn ##.table.408 8 2)) ((bruijn ##.k.1136 5 0) (bruijn ##.table.408 8 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 4,
      VGetArg(statics, 5-1, 0),
      _var0,
      VEncodeInt(0l),
      VGetArg(statics, 8-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VGetArg(statics, 8-1, 2));
}
}
static void _V10_Dloop_D414_k325(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D414_k325, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.414 6 0) (bruijn ##.k.1136 5 0) (bruijn ##.x.1139 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 2,
      VGetArg(statics, 5-1, 0),
      _var0);
}
static void _V10_Dloop_D414_k323(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D414_k323, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1138 0 0) ((bruijn ##.x.583 42 0) (close _V10_Dloop_D414_k324) (bruijn ##.ret.415 4 1)) ((bruijn ##.x.609 16 0) (close _V10_Dloop_D414_k325) (bruijn ##.ret.415 4 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 42-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D414_k324, self)})),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D414_k325, self)})),
      statics->up->up->up->vars[1]);
}
}
static void _V10_Dloop_D414_k320(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D414_k320, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D414_k321) (close _V10_Dloop_D414_k323))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D414_k321, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D414_k323, self)})));
}
static void _V10_Dloop_D414_k319(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D414_k319, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.612 11 0) (close _V10_Dloop_D414_k320) (bruijn ##.x.1143 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D414_k320, self)})),
      _var0);
}
static void _V10_Dloop_D414_k318(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D414_k318, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1137 0 0) ((bruijn ##.k.1136 1 0) (bruijn ##.table.408 4 2)) ((bruijn ##.x.611 11 0) (close _V10_Dloop_D414_k319) (bruijn ##.ret.415 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->up->up->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D414_k319, self)})),
      statics->vars[1]);
}
}
static void _V10_Dloop_D414_lambda57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D414_lambda57, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.x.591 30 0) (close _V10_Dloop_D414_k318) (bruijn ##.ret.415 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D414_k318, self)})),
      _var1);
}
static void _V10_Dunwrap__enums_D225_lambda55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__enums_D225_lambda55, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 1 ((close _V10_Dunwrap__enums__iter_D409_lambda56)) (letrec 1 ((close _V10_Dloop_D414_lambda57)) ((bruijn ##.loop.414 0 0) (bruijn ##.k.1123 2 0) (bruijn ##.ret.407 2 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    VEnv * self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__enums__iter_D409_lambda56, self)}));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    VEnv * self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D414_lambda57, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->up->vars[0],
      statics->up->vars[1]);
    }
    }
}
static void _V10_Dunwrap__declares_D226_k328(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D226_k328, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1184 1 0) (##vcore.blob=? (bruijn ##.k.1185 0 0) (##string ##.string.1734) (##inline ##vcore.car (bruijn ##.parse.417 4 1))) ((bruijn ##.k.1185 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VBlobEqv2, 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1734.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dunwrap__declares_D226_k330(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D226_k330, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1181 0 0) (bruijn ##.k.1178 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
static void _V10_Dunwrap__declares_D226_lambda60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D226_lambda60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1182 0 0) (bruijn ##.table.418 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 2));
}
static void _V10_Dunwrap__declares_D226_k329(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D226_k329, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1179 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.parse.417 4 1))) (##vcore.call-with-values (close _V10_Dunwrap__declares_D226_k330) (close _V10_Dunwrap__declares_D226_lambda60) (bruijn ##.kk.104.419 3 1)) ((bruijn ##.k.1178 2 0) #f)) ((bruijn ##.k.1178 2 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->up->up->up->vars[1])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__declares_D226_k330, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__declares_D226_lambda60, self)})),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dunwrap__declares_D226_k327(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D226_k327, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dunwrap__declares_D226_k328) (close _V10_Dunwrap__declares_D226_k329))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dunwrap__declares_D226_k328, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__declares_D226_k329, self)})));
}
static void _V10_Dunwrap__declares_D226_k326(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D226_k326, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.parse.417 2 1)) (##vcore.string? (close _V10_Dunwrap__declares_D226_k327) (##inline ##vcore.car (bruijn ##.parse.417 2 1))) ((bruijn ##.k.1178 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallFuncWithGC(runtime, (VFunc)VStringP2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__declares_D226_k327, self)})),
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dunwrap__declares_D226_k334(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D226_k334, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1173 1 0) (##vcore.blob=? (bruijn ##.k.1174 0 0) (##string ##.string.1734) (##inline ##vcore.car (bruijn ##.parse.417 5 1))) ((bruijn ##.k.1174 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VBlobEqv2, 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1734.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dunwrap__declares_D226_k339(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D226_k339, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1169 1 0) (##vcore.blob=? (bruijn ##.k.1170 0 0) (##string ##.string.1735) (##inline ##vcore.car (bruijn ##.expr.109.424 2 0))) ((bruijn ##.k.1170 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VBlobEqv2, 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1735.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        statics->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dunwrap__declares_D226_k343(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D226_k343, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1155 0 0) (bruijn ##.k.1149 9 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 9-1, 0));
}
static void _V10_Dloop_D432_k350(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D432_k350, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.unwrap-typedef.223 22 3) (bruijn ##.k.1166 1 0) (bruijn ##.x.1159 6 0) (bruijn ##.x.1167 0 0) (bruijn ##.table.434 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 3)), 4,
      statics->vars[0],
      VGetArg(statics, 6-1, 0),
      _var0,
      statics->up->up->up->vars[2]);
}
static void _V10_Dloop_D432_k351(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D432_k351, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.unwrap-function.224 22 4) (bruijn ##.k.1166 1 0) (bruijn ##.x.1159 6 0) (bruijn ##.x.1168 0 0) (bruijn ##.table.434 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 4)), 4,
      statics->vars[0],
      VGetArg(statics, 6-1, 0),
      _var0,
      statics->up->up->up->vars[2]);
}
static void _V10_Dloop_D432_k349(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D432_k349, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.1157 7 0) ((bruijn ##.x.611 27 0) (close _V10_Dloop_D432_k350) (bruijn ##.mydecls.433 3 1)) ((bruijn ##.x.611 27 0) (close _V10_Dloop_D432_k351) (bruijn ##.mydecls.433 3 1)))
if(VDecodeBool(
VGetArg(statics, 7-1, 0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D432_k350, self)})),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D432_k351, self)})),
      statics->up->up->vars[1]);
}
}
static void _V10_Dloop_D432_k353(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D432_k353, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.432 5 0) (bruijn ##.k.1160 4 0) (bruijn ##.x.1163 2 0) (bruijn ##.x.1164 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      statics->up->up->up->vars[0],
      statics->up->vars[0],
      _var0);
}
static void _V10_Dloop_D432_k352(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D432_k352, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.597 41 0) (close _V10_Dloop_D432_k353) (bruijn ##.x.1165 0 0) (bruijn ##.table.434 3 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 41-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D432_k353, self)})),
      _var0,
      statics->up->up->vars[2]);
}
static void _V10_Dloop_D432_k348(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D432_k348, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D432_k349) (close _V10_Dloop_D432_k352))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D432_k349, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D432_k352, self)})));
}
static void _V10_Dloop_D432_k347(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D432_k347, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1161 0 0) ((bruijn ##.unwrap-declares.226 19 6) (bruijn ##.k.1160 1 0) (##inline ##vcore.cons '(##string ##.string.1734) (##inline ##vcore.cdr (bruijn ##.expr.108.423 12 0))) (bruijn ##.table.434 1 2)) ((bruijn ##.x.609 27 0) (close _V10_Dloop_D432_k348) (bruijn ##.mydecls.433 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 6)), 3,
      statics->vars[0],
      VInlineCons2(runtime,
        VEncodePointer(&_V10_Dstring_D1734.sym, VPOINTER_OTHER),
        VInlineCdr2(runtime,
        VGetArg(statics, 12-1, 0))),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D432_k348, self)})),
      statics->vars[1]);
}
}
static void _V10_Dloop_D432_lambda62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D432_lambda62, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.x.591 44 0) (close _V10_Dloop_D432_k347) (bruijn ##.mydecls.433 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 44-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D432_k347, self)})),
      _var1);
}
static void _V10_Dunwrap__declares_D226_k346(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D226_k346, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close _V10_Dloop_D432_lambda62)) ((bruijn ##.loop.432 0 0) (bruijn ##.k.1156 4 0) (##inline ##vcore.cdr (bruijn ##.expr.110.425 6 0)) (bruijn ##.x.1158 2 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    VEnv * self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D432_lambda62, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->up->up->up->vars[0],
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 0)),
      statics->up->vars[0]);
    }
}
static void _V10_Dunwrap__declares_D226_k345(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D226_k345, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.reduce-type.222 15 2) (close _V10_Dunwrap__declares_D226_k346) (bruijn ##.ret.426 3 0) (bruijn ##.table.418 14 2) #t)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 2)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__declares_D226_k346, self)})),
      statics->up->up->vars[0],
      VGetArg(statics, 14-1, 2),
      VEncodeBool(true));
}
static void _V10_Dunwrap__declares_D226_k344(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D226_k344, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.unwrap-enums.225 14 5) (close _V10_Dunwrap__declares_D226_k345) (bruijn ##.ret.426 2 0) (bruijn ##.table.418 13 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 5)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__declares_D226_k345, self)})),
      statics->up->vars[0],
      VGetArg(statics, 13-1, 2));
}
static void _V10_Dunwrap__declares_D226_lambda61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D226_lambda61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.584 46 0) (close _V10_Dunwrap__declares_D226_k344) (##string ##.string.1736) (bruijn ##.ret.426 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 46-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__declares_D226_k344, self)})),
      VEncodePointer(&_V10_Dstring_D1736.sym, VPOINTER_OTHER),
      statics->vars[0]);
}
static void _V10_Dunwrap__declares_D226_k342(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D226_k342, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (close _V10_Dunwrap__declares_D226_k343) (close _V10_Dunwrap__declares_D226_lambda61) (bruijn ##.kk.104.419 10 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__declares_D226_k343, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__declares_D226_lambda61, self)})),
      VGetArg(statics, 10-1, 1));
}
static void _V10_Dunwrap__declares_D226_k341(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D226_k341, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.110.425 0 0)) ((close _V10_Dunwrap__declares_D226_k342) (##inline ##vcore.car (bruijn ##.expr.110.425 0 0))) ((bruijn ##.k.1149 7 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dunwrap__declares_D226_k342, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dunwrap__declares_D226_k340(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D226_k340, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1153 0 0) ((close _V10_Dunwrap__declares_D226_k341) (##inline ##vcore.cdr (bruijn ##.expr.109.424 2 0))) ((bruijn ##.k.1149 6 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dunwrap__declares_D226_k341, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dunwrap__declares_D226_k338(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D226_k338, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dunwrap__declares_D226_k339) (close _V10_Dunwrap__declares_D226_k340))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dunwrap__declares_D226_k339, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__declares_D226_k340, self)})));
}
static void _V10_Dunwrap__declares_D226_k337(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D226_k337, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.109.424 0 0)) (##vcore.string? (close _V10_Dunwrap__declares_D226_k338) (##inline ##vcore.car (bruijn ##.expr.109.424 0 0))) ((bruijn ##.k.1149 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VStringP2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__declares_D226_k338, self)})),
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dunwrap__declares_D226_k336(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D226_k336, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.108.423 0 0)) ((close _V10_Dunwrap__declares_D226_k337) (##inline ##vcore.car (bruijn ##.expr.108.423 0 0))) ((bruijn ##.k.1149 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dunwrap__declares_D226_k337, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dunwrap__declares_D226_k335(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D226_k335, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1150 0 0) ((close _V10_Dunwrap__declares_D226_k336) (##inline ##vcore.cdr (bruijn ##.parse.417 5 1))) ((bruijn ##.k.1149 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dunwrap__declares_D226_k336, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dunwrap__declares_D226_k333(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D226_k333, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dunwrap__declares_D226_k334) (close _V10_Dunwrap__declares_D226_k335))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dunwrap__declares_D226_k334, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__declares_D226_k335, self)})));
}
static void _V10_Dunwrap__declares_D226_k332(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D226_k332, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.parse.417 3 1)) (##vcore.string? (close _V10_Dunwrap__declares_D226_k333) (##inline ##vcore.car (bruijn ##.parse.417 3 1))) ((bruijn ##.k.1149 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallFuncWithGC(runtime, (VFunc)VStringP2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__declares_D226_k333, self)})),
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dunwrap__declares_D226_k354(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D226_k354, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.616 5 0) (bruijn ##.k.1145 2 0) (##string ##.string.1721))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 2,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1721.sym, VPOINTER_OTHER));
}
static void _V10_Dunwrap__declares_D226_k331(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D226_k331, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dunwrap__declares_D226_k332) (close _V10_Dunwrap__declares_D226_k354))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dunwrap__declares_D226_k332, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__declares_D226_k354, self)})));
}
static void _V10_Dunwrap__declares_D226_lambda59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D226_lambda59, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Dunwrap__declares_D226_k326) (close _V10_Dunwrap__declares_D226_k331))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dunwrap__declares_D226_k326, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__declares_D226_k331, self)})));
}
static void _V10_Dunwrap__declares_D226_lambda58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D226_lambda58, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call/cc (bruijn ##.k.1144 0 0) (close _V10_Dunwrap__declares_D226_lambda59))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__declares_D226_lambda59, self)})));
}
static void _V10_Dduplicate__mismatch_D437_k359(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dduplicate__mismatch_D437_k359, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.duplicate-mismatch.437 6 0) (bruijn ##.k.1189 5 0) (bruijn ##.x.438 5 1) (bruijn ##.entry.439 5 2) (bruijn ##.x.1192 0 0) (bruijn ##.err-proc.441 5 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 5,
      VGetArg(statics, 5-1, 0),
      VGetArg(statics, 5-1, 1),
      VGetArg(statics, 5-1, 2),
      _var0,
      VGetArg(statics, 5-1, 4));
}
static void _V10_Dduplicate__mismatch_D437_k363(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dduplicate__mismatch_D437_k363, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.err-proc.441 8 4) (bruijn ##.k.1189 8 0) (bruijn ##.x.1194 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 4)), 2,
      VGetArg(statics, 8-1, 0),
      _var0);
}
static void _V10_Dduplicate__mismatch_D437_k362(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dduplicate__mismatch_D437_k362, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1193 0 0) ((bruijn ##.x.611 16 0) (close _V10_Dduplicate__mismatch_D437_k363) (bruijn ##.table.440 7 3)) ((bruijn ##.k.1189 7 0) #t))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dduplicate__mismatch_D437_k363, self)})),
      VGetArg(statics, 7-1, 3));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodeBool(true));
}
}
static void _V10_Dduplicate__mismatch_D437_k361(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dduplicate__mismatch_D437_k361, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.599 27 0) (close _V10_Dduplicate__mismatch_D437_k362) (bruijn ##.x.1195 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dduplicate__mismatch_D437_k362, self)})),
      _var0);
}
static void _V10_Dduplicate__mismatch_D437_k360(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dduplicate__mismatch_D437_k360, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.615 10 0) (close _V10_Dduplicate__mismatch_D437_k361) (bruijn ##.entry.439 5 2) (bruijn ##.x.1196 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dduplicate__mismatch_D437_k361, self)})),
      VGetArg(statics, 5-1, 2),
      _var0);
}
static void _V10_Dduplicate__mismatch_D437_k358(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dduplicate__mismatch_D437_k358, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1191 0 0) ((bruijn ##.x.609 15 0) (close _V10_Dduplicate__mismatch_D437_k359) (bruijn ##.table.440 4 3)) ((bruijn ##.x.611 13 0) (close _V10_Dduplicate__mismatch_D437_k360) (bruijn ##.table.440 4 3)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dduplicate__mismatch_D437_k359, self)})),
      statics->up->up->up->vars[3]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dduplicate__mismatch_D437_k360, self)})),
      statics->up->up->up->vars[3]);
}
}
static void _V10_Dduplicate__mismatch_D437_k357(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dduplicate__mismatch_D437_k357, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.599 24 0) (close _V10_Dduplicate__mismatch_D437_k358) (bruijn ##.x.1197 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dduplicate__mismatch_D437_k358, self)})),
      _var0);
}
static void _V10_Dduplicate__mismatch_D437_k356(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dduplicate__mismatch_D437_k356, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.608 14 0) (close _V10_Dduplicate__mismatch_D437_k357) (bruijn ##.x.438 2 1) (bruijn ##.x.1198 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dduplicate__mismatch_D437_k357, self)})),
      statics->up->vars[1],
      _var0);
}
static void _V10_Dduplicate__mismatch_D437_k355(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dduplicate__mismatch_D437_k355, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1190 0 0) ((bruijn ##.k.1189 1 0) #f) ((bruijn ##.x.585 36 0) (close _V10_Dduplicate__mismatch_D437_k356) (bruijn ##.table.440 1 3)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dduplicate__mismatch_D437_k356, self)})),
      statics->vars[3]);
}
}
static void _V10_Dduplicate__mismatch_D437_lambda64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 if(argc != 5) {
  VErrorC(runtime, "Not enough arguments to _V10_Dduplicate__mismatch_D437_lambda64, got ~D~N"
  "-- expected 5~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // ((bruijn ##.x.591 29 0) (close _V10_Dduplicate__mismatch_D437_k355) (bruijn ##.table.440 0 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dduplicate__mismatch_D437_k355, self)})),
      _var3);
}
static void _V10_Dtable___Gdefines_D227_k371(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_k371, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1246 0 0) (bruijn ##.k.1242 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
static void _V10_Dtable___Gdefines_D227_k375(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_k375, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.table->defines.227 15 7) (bruijn ##.k.1247 4 0) (bruijn ##.x.1249 0 0) (bruijn ##.acc.436 14 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 7)), 3,
      statics->up->up->up->vars[0],
      _var0,
      VGetArg(statics, 14-1, 2));
}
static void _V10_Dtable___Gdefines_D227_k378(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_k378, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.table->defines.227 17 7) (bruijn ##.k.1247 6 0) (bruijn ##.x.1250 2 0) (bruijn ##.x.1251 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 7)), 3,
      VGetArg(statics, 6-1, 0),
      statics->up->vars[0],
      _var0);
}
static void _V10_Dtable___Gdefines_D227_k377(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_k377, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.597 36 0) (close _V10_Dtable___Gdefines_D227_k378) (##inline ##vcore.cons 'define (##inline ##vcore.cons (bruijn ##.name.446 7 0) (##inline ##vcore.cons (##inline ##vcore.cons '##foreign.function (##inline ##vcore.cons '(##string ##.string.1737) (##inline ##vcore.cons '(##string ##.string.1738) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.115.447 6 0)) (##inline ##vcore.cons (bruijn ##.x.1260 0 0) (##inline ##vcore.cdr (bruijn ##.expr.115.447 6 0))))))) '()))) (bruijn ##.acc.436 15 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D227_k378, self)})),
      VInlineCons2(runtime,
        _V0define,
        VInlineCons2(runtime,
        VGetArg(statics, 7-1, 0),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10foreign_Dfunction,
        VInlineCons2(runtime,
        VEncodePointer(&_V10_Dstring_D1737.sym, VPOINTER_OTHER),
        VInlineCons2(runtime,
        VEncodePointer(&_V10_Dstring_D1738.sym, VPOINTER_OTHER),
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 6-1, 0)),
        VInlineCons2(runtime,
        _var0,
        VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 0))))))),
        VNULL))),
      VGetArg(statics, 15-1, 2));
}
static void _V10_Dtable___Gdefines_D227_k376(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_k376, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.586 46 0) (close _V10_Dtable___Gdefines_D227_k377) (bruijn ##.name.446 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 46-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D227_k377, self)})),
      VGetArg(statics, 6-1, 0));
}
static void _V10_Dtable___Gdefines_D227_k374(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_k374, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1248 0 0) ((bruijn ##.x.609 22 0) (close _V10_Dtable___Gdefines_D227_k375) (bruijn ##.table.435 13 1)) ((bruijn ##.x.609 22 0) (close _V10_Dtable___Gdefines_D227_k376) (bruijn ##.table.435 13 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D227_k375, self)})),
      VGetArg(statics, 13-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D227_k376, self)})),
      VGetArg(statics, 13-1, 1));
}
}
static void _V10_Dtable___Gdefines_D227_k379(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_k379, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.601 31 0) (bruijn ##.k.1263 1 0) (##string ##.string.1739) (bruijn ##.x.1264 0 0) (bruijn ##.conflict.450 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 4,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1739.sym, VPOINTER_OTHER),
      _var0,
      statics->vars[1]);
}
static void _V10_Dtable___Gdefines_D227_lambda67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_lambda67, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.x.611 20 0) (close _V10_Dtable___Gdefines_D227_k379) (bruijn ##.table.435 13 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D227_k379, self)})),
      VGetArg(statics, 13-1, 1));
}
static void _V10_Dtable___Gdefines_D227_k373(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_k373, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.duplicate-mismatch.437 11 0) (close _V10_Dtable___Gdefines_D227_k374) (bruijn ##.name.446 4 0) (bruijn ##.x.1261 1 0) (bruijn ##.x.1262 0 0) (close _V10_Dtable___Gdefines_D227_lambda67))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 5,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D227_k374, self)})),
      statics->up->up->up->vars[0],
      statics->vars[0],
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D227_lambda67, self)})));
}
static void _V10_Dtable___Gdefines_D227_k372(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_k372, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.609 20 0) (close _V10_Dtable___Gdefines_D227_k373) (bruijn ##.table.435 11 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D227_k373, self)})),
      VGetArg(statics, 11-1, 1));
}
static void _V10_Dtable___Gdefines_D227_lambda66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_lambda66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.611 17 0) (close _V10_Dtable___Gdefines_D227_k372) (bruijn ##.table.435 10 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D227_k372, self)})),
      VGetArg(statics, 10-1, 1));
}
static void _V10_Dtable___Gdefines_D227_k370(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_k370, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.115.447 0 0)) (##vcore.call-with-values (close _V10_Dtable___Gdefines_D227_k371) (close _V10_Dtable___Gdefines_D227_lambda66) (bruijn ##.kk.111.442 6 1)) ((bruijn ##.k.1242 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D227_k371, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D227_lambda66, self)})),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dtable___Gdefines_D227_k369(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_k369, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dtable___Gdefines_D227_k370) (##inline ##vcore.cdr (bruijn ##.expr.114.445 1 0)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dtable___Gdefines_D227_k370, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
static void _V10_Dtable___Gdefines_D227_k368(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_k368, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.114.445 0 0)) ((close _V10_Dtable___Gdefines_D227_k369) (##inline ##vcore.car (bruijn ##.expr.114.445 0 0))) ((bruijn ##.k.1242 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dtable___Gdefines_D227_k369, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dtable___Gdefines_D227_k367(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_k367, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1243 0 0) ((close _V10_Dtable___Gdefines_D227_k368) (##inline ##vcore.cdr (bruijn ##.input.112.443 2 0))) ((bruijn ##.k.1242 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dtable___Gdefines_D227_k368, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dtable___Gdefines_D227_k366(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_k366, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.input.112.443 1 0)) ((bruijn ##.x.615 8 0) (close _V10_Dtable___Gdefines_D227_k367) 'function (##inline ##vcore.car (bruijn ##.input.112.443 1 0))) ((bruijn ##.k.1242 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D227_k367, self)})),
      _V0function,
      VInlineCar2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dtable___Gdefines_D227_k386(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_k386, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1228 0 0) (bruijn ##.k.1223 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
static void _V10_Dtable___Gdefines_D227_k390(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_k390, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.table->defines.227 16 7) (bruijn ##.k.1229 4 0) (bruijn ##.x.1231 1 0) (bruijn ##.x.1232 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 7)), 3,
      statics->up->up->up->vars[0],
      statics->vars[0],
      _var0);
}
static void _V10_Dtable___Gdefines_D227_k389(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_k389, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.597 35 0) (close _V10_Dtable___Gdefines_D227_k390) (##inline ##vcore.cons 'define (##inline ##vcore.cons (bruijn ##.name.453 5 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.118.454 4 0)) '()))) (bruijn ##.acc.436 14 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 35-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D227_k390, self)})),
      VInlineCons2(runtime,
        _V0define,
        VInlineCons2(runtime,
        VGetArg(statics, 5-1, 0),
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->up->vars[0]),
        VNULL))),
      VGetArg(statics, 14-1, 2));
}
static void _V10_Dtable___Gdefines_D227_k388(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_k388, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.609 22 0) (close _V10_Dtable___Gdefines_D227_k389) (bruijn ##.table.435 13 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D227_k389, self)})),
      VGetArg(statics, 13-1, 1));
}
static void _V10_Dtable___Gdefines_D227_k391(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_k391, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.601 31 0) (bruijn ##.k.1237 1 0) (##string ##.string.1739) (bruijn ##.x.1238 0 0) (bruijn ##.conflict.456 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 4,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1739.sym, VPOINTER_OTHER),
      _var0,
      statics->vars[1]);
}
static void _V10_Dtable___Gdefines_D227_lambda69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_lambda69, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.x.611 20 0) (close _V10_Dtable___Gdefines_D227_k391) (bruijn ##.table.435 13 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D227_k391, self)})),
      VGetArg(statics, 13-1, 1));
}
static void _V10_Dtable___Gdefines_D227_k387(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_k387, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.duplicate-mismatch.437 11 0) (close _V10_Dtable___Gdefines_D227_k388) (bruijn ##.name.453 3 0) #f (bruijn ##.x.1236 0 0) (close _V10_Dtable___Gdefines_D227_lambda69))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 5,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D227_k388, self)})),
      statics->up->up->vars[0],
      VEncodeBool(false),
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D227_lambda69, self)})));
}
static void _V10_Dtable___Gdefines_D227_lambda68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_lambda68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.609 20 0) (close _V10_Dtable___Gdefines_D227_k387) (bruijn ##.table.435 11 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D227_k387, self)})),
      VGetArg(statics, 11-1, 1));
}
static void _V10_Dtable___Gdefines_D227_k385(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_k385, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.118.454 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.118.454 0 0))) (##vcore.call-with-values (close _V10_Dtable___Gdefines_D227_k386) (close _V10_Dtable___Gdefines_D227_lambda68) (bruijn ##.kk.111.442 7 1)) ((bruijn ##.k.1223 4 0) #f)) ((bruijn ##.k.1223 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D227_k386, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D227_lambda68, self)})),
      VGetArg(statics, 7-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dtable___Gdefines_D227_k384(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_k384, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dtable___Gdefines_D227_k385) (##inline ##vcore.cdr (bruijn ##.expr.117.452 1 0)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dtable___Gdefines_D227_k385, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
static void _V10_Dtable___Gdefines_D227_k383(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_k383, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.117.452 0 0)) ((close _V10_Dtable___Gdefines_D227_k384) (##inline ##vcore.car (bruijn ##.expr.117.452 0 0))) ((bruijn ##.k.1223 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dtable___Gdefines_D227_k384, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dtable___Gdefines_D227_k382(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_k382, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1224 0 0) ((close _V10_Dtable___Gdefines_D227_k383) (##inline ##vcore.cdr (bruijn ##.input.112.443 3 0))) ((bruijn ##.k.1223 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dtable___Gdefines_D227_k383, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dtable___Gdefines_D227_k381(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_k381, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.input.112.443 2 0)) ((bruijn ##.x.615 9 0) (close _V10_Dtable___Gdefines_D227_k382) 'enum (##inline ##vcore.car (bruijn ##.input.112.443 2 0))) ((bruijn ##.k.1223 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D227_k382, self)})),
      _V0enum,
      VInlineCar2(runtime,
        statics->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dtable___Gdefines_D227_k397(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_k397, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1212 0 0) (bruijn ##.k.1207 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V10_Dtable___Gdefines_D227_k401(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_k401, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.table->defines.227 16 7) (bruijn ##.k.1213 4 0) (bruijn ##.x.1215 0 0) (bruijn ##.acc.436 15 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 7)), 3,
      statics->up->up->up->vars[0],
      _var0,
      VGetArg(statics, 15-1, 2));
}
static void _V10_Dtable___Gdefines_D227_k400(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_k400, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.609 23 0) (close _V10_Dtable___Gdefines_D227_k401) (bruijn ##.table.435 14 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D227_k401, self)})),
      VGetArg(statics, 14-1, 1));
}
static void _V10_Dtable___Gdefines_D227_k402(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_k402, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.601 32 0) (bruijn ##.k.1218 1 0) (##string ##.string.1739) (bruijn ##.x.1219 0 0) (bruijn ##.conflict.462 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 4,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1739.sym, VPOINTER_OTHER),
      _var0,
      statics->vars[1]);
}
static void _V10_Dtable___Gdefines_D227_lambda71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_lambda71, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.x.611 21 0) (close _V10_Dtable___Gdefines_D227_k402) (bruijn ##.table.435 14 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D227_k402, self)})),
      VGetArg(statics, 14-1, 1));
}
static void _V10_Dtable___Gdefines_D227_k399(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_k399, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.duplicate-mismatch.437 12 0) (close _V10_Dtable___Gdefines_D227_k400) (##inline ##vcore.car (bruijn ##.expr.120.458 4 0)) (bruijn ##.x.1216 1 0) (bruijn ##.x.1217 0 0) (close _V10_Dtable___Gdefines_D227_lambda71))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 5,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D227_k400, self)})),
      VInlineCar2(runtime,
        statics->up->up->up->vars[0]),
      statics->vars[0],
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D227_lambda71, self)})));
}
static void _V10_Dtable___Gdefines_D227_k398(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_k398, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.609 21 0) (close _V10_Dtable___Gdefines_D227_k399) (bruijn ##.table.435 12 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D227_k399, self)})),
      VGetArg(statics, 12-1, 1));
}
static void _V10_Dtable___Gdefines_D227_lambda70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_lambda70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.611 18 0) (close _V10_Dtable___Gdefines_D227_k398) (bruijn ##.table.435 11 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D227_k398, self)})),
      VGetArg(statics, 11-1, 1));
}
static void _V10_Dtable___Gdefines_D227_k396(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_k396, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.121.460 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.121.460 0 0))) (##vcore.call-with-values (close _V10_Dtable___Gdefines_D227_k397) (close _V10_Dtable___Gdefines_D227_lambda70) (bruijn ##.kk.111.442 7 1)) ((bruijn ##.k.1207 3 0) #f)) ((bruijn ##.k.1207 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D227_k397, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D227_lambda70, self)})),
      VGetArg(statics, 7-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dtable___Gdefines_D227_k395(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_k395, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.120.458 0 0)) ((close _V10_Dtable___Gdefines_D227_k396) (##inline ##vcore.cdr (bruijn ##.expr.120.458 0 0))) ((bruijn ##.k.1207 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dtable___Gdefines_D227_k396, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dtable___Gdefines_D227_k394(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_k394, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1208 0 0) ((close _V10_Dtable___Gdefines_D227_k395) (##inline ##vcore.cdr (bruijn ##.input.112.443 4 0))) ((bruijn ##.k.1207 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dtable___Gdefines_D227_k395, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dtable___Gdefines_D227_k393(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_k393, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.input.112.443 3 0)) ((bruijn ##.x.615 10 0) (close _V10_Dtable___Gdefines_D227_k394) 'typedef (##inline ##vcore.car (bruijn ##.input.112.443 3 0))) ((bruijn ##.k.1207 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D227_k394, self)})),
      _V0typedef,
      VInlineCar2(runtime,
        statics->up->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dtable___Gdefines_D227_k404(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_k404, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.601 26 0) (bruijn ##.k.1204 1 0) (##string ##.string.1740) (bruijn ##.x.1205 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1740.sym, VPOINTER_OTHER),
      _var0);
}
static void _V10_Dtable___Gdefines_D227_lambda72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_lambda72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.611 15 0) (close _V10_Dtable___Gdefines_D227_k404) (bruijn ##.table.435 8 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D227_k404, self)})),
      VGetArg(statics, 8-1, 1));
}
static void _V10_Dtable___Gdefines_D227_k403(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_k403, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1200 4 0) (close _V10_Dtable___Gdefines_D227_lambda72) (bruijn ##.kk.111.442 4 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->up->up->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D227_lambda72, self)})),
      statics->up->up->up->vars[1]);
}
static void _V10_Dtable___Gdefines_D227_k392(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_k392, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dtable___Gdefines_D227_k393) (close _V10_Dtable___Gdefines_D227_k403))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dtable___Gdefines_D227_k393, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D227_k403, self)})));
}
static void _V10_Dtable___Gdefines_D227_k380(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_k380, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dtable___Gdefines_D227_k381) (close _V10_Dtable___Gdefines_D227_k392))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dtable___Gdefines_D227_k381, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D227_k392, self)})));
}
static void _V10_Dtable___Gdefines_D227_k365(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_k365, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dtable___Gdefines_D227_k366) (close _V10_Dtable___Gdefines_D227_k380))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dtable___Gdefines_D227_k366, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D227_k380, self)})));
}
static void _V10_Dtable___Gdefines_D227_lambda65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_lambda65, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.x.611 10 0) (close _V10_Dtable___Gdefines_D227_k365) (bruijn ##.table.435 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D227_k365, self)})),
      statics->up->up->vars[1]);
}
static void _V10_Dtable___Gdefines_D227_k364(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_k364, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1199 0 0) ((bruijn ##.k.1188 2 0) (bruijn ##.acc.436 2 2)) (##vcore.call/cc (bruijn ##.k.1188 2 0) (close _V10_Dtable___Gdefines_D227_lambda65)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      statics->up->vars[2]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->up->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D227_lambda65, self)})));
}
}
static void _V10_Dtable___Gdefines_D227_lambda63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_lambda63, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 1 ((close _V10_Dduplicate__mismatch_D437_lambda64)) ((bruijn ##.x.591 28 0) (close _V10_Dtable___Gdefines_D227_k364) (bruijn ##.table.435 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    VEnv * self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dduplicate__mismatch_D437_lambda64, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D227_k364, self)})),
      statics->vars[1]);
    }
}
static void _V10_Ddeep__copy_D228_k410(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddeep__copy_D228_k410, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.597 27 0) (bruijn ##.k.1266 6 0) (bruijn ##.x.1269 2 0) (bruijn ##.x.1270 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 3,
      VGetArg(statics, 6-1, 0),
      statics->up->vars[0],
      _var0);
}
static void _V10_Ddeep__copy_D228_k409(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddeep__copy_D228_k409, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.deep-copy.228 6 8) (close _V10_Ddeep__copy_D228_k410) (bruijn ##.x.1271 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 8)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddeep__copy_D228_k410, self)})),
      _var0);
}
static void _V10_Ddeep__copy_D228_k408(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddeep__copy_D228_k408, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.609 13 0) (close _V10_Ddeep__copy_D228_k409) (bruijn ##.x.463 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddeep__copy_D228_k409, self)})),
      statics->up->up->up->vars[1]);
}
static void _V10_Ddeep__copy_D228_k407(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddeep__copy_D228_k407, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.deep-copy.228 4 8) (close _V10_Ddeep__copy_D228_k408) (bruijn ##.x.1272 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[8]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddeep__copy_D228_k408, self)})),
      _var0);
}
static void _V10_Ddeep__copy_D228_k406(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddeep__copy_D228_k406, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1268 0 0) ((bruijn ##.x.611 9 0) (close _V10_Ddeep__copy_D228_k407) (bruijn ##.x.463 2 1)) ((bruijn ##.k.1266 2 0) (bruijn ##.x.463 2 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddeep__copy_D228_k407, self)})),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      statics->up->vars[1]);
}
}
static void _V10_Ddeep__copy_D228_k405(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddeep__copy_D228_k405, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1267 0 0) ((bruijn ##.x.587 32 0) (bruijn ##.k.1266 1 0) (bruijn ##.x.463 1 1)) ((bruijn ##.x.612 7 0) (close _V10_Ddeep__copy_D228_k406) (bruijn ##.x.463 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 2,
      statics->vars[0],
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddeep__copy_D228_k406, self)})),
      statics->vars[1]);
}
}
static void _V10_Ddeep__copy_D228_lambda73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddeep__copy_D228_lambda73, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.x.600 18 0) (close _V10_Ddeep__copy_D228_k405) (bruijn ##.x.463 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddeep__copy_D228_k405, self)})),
      _var1);
}
static void _V10_Dis__one__decl_D467_k415(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D467_k415, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1313 1 0) (##vcore.blob=? (bruijn ##.k.1314 0 0) (##string ##.string.1734) (##inline ##vcore.car (bruijn ##.parse.468 4 1))) ((bruijn ##.k.1314 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VBlobEqv2, 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1734.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dis__one__decl_D467_k420(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D467_k420, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1309 1 0) (##vcore.blob=? (bruijn ##.k.1310 0 0) (##string ##.string.1735) (##inline ##vcore.car (bruijn ##.expr.136.473 2 0))) ((bruijn ##.k.1310 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VBlobEqv2, 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1735.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        statics->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dis__one__decl_D467_k424(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D467_k424, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1305 0 0) (bruijn ##.k.1296 9 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 9-1, 0));
}
static void _V10_Dis__one__decl_D467_lambda77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D467_lambda77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.588 45 0) (bruijn ##.k.1306 0 0) (bruijn ##.parse.468 11 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 45-1, 0)), 2,
      _var0,
      VGetArg(statics, 11-1, 1));
}
static void _V10_Dis__one__decl_D467_k423(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D467_k423, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.138.476 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.138.476 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.135.472 5 0))) (##vcore.call-with-values (close _V10_Dis__one__decl_D467_k424) (close _V10_Dis__one__decl_D467_lambda77) (bruijn ##.kk.132.469 9 1)) ((bruijn ##.k.1296 8 0) #f)) ((bruijn ##.k.1296 8 0) #f)) ((bruijn ##.k.1296 8 0) #f))
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
        VGetArg(statics, 5-1, 0))))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dis__one__decl_D467_k424, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dis__one__decl_D467_lambda77, self)})),
      VGetArg(statics, 9-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dis__one__decl_D467_k422(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D467_k422, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.137.474 0 0)) ((close _V10_Dis__one__decl_D467_k423) (##inline ##vcore.cdr (bruijn ##.expr.137.474 0 0))) ((bruijn ##.k.1296 7 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dis__one__decl_D467_k423, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dis__one__decl_D467_k421(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D467_k421, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1300 0 0) ((close _V10_Dis__one__decl_D467_k422) (##inline ##vcore.cdr (bruijn ##.expr.136.473 2 0))) ((bruijn ##.k.1296 6 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dis__one__decl_D467_k422, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dis__one__decl_D467_k419(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D467_k419, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dis__one__decl_D467_k420) (close _V10_Dis__one__decl_D467_k421))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dis__one__decl_D467_k420, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dis__one__decl_D467_k421, self)})));
}
static void _V10_Dis__one__decl_D467_k418(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D467_k418, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.136.473 0 0)) (##vcore.string? (close _V10_Dis__one__decl_D467_k419) (##inline ##vcore.car (bruijn ##.expr.136.473 0 0))) ((bruijn ##.k.1296 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VStringP2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dis__one__decl_D467_k419, self)})),
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dis__one__decl_D467_k417(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D467_k417, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.135.472 0 0)) ((close _V10_Dis__one__decl_D467_k418) (##inline ##vcore.car (bruijn ##.expr.135.472 0 0))) ((bruijn ##.k.1296 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dis__one__decl_D467_k418, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dis__one__decl_D467_k416(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D467_k416, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1297 0 0) ((close _V10_Dis__one__decl_D467_k417) (##inline ##vcore.cdr (bruijn ##.parse.468 4 1))) ((bruijn ##.k.1296 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dis__one__decl_D467_k417, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dis__one__decl_D467_k414(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D467_k414, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dis__one__decl_D467_k415) (close _V10_Dis__one__decl_D467_k416))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dis__one__decl_D467_k415, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dis__one__decl_D467_k416, self)})));
}
static void _V10_Dis__one__decl_D467_k413(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D467_k413, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.parse.468 2 1)) (##vcore.string? (close _V10_Dis__one__decl_D467_k414) (##inline ##vcore.car (bruijn ##.parse.468 2 1))) ((bruijn ##.k.1296 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallFuncWithGC(runtime, (VFunc)VStringP2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dis__one__decl_D467_k414, self)})),
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dis__one__decl_D467_k428(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D467_k428, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1291 1 0) (##vcore.blob=? (bruijn ##.k.1292 0 0) (##string ##.string.1741) (##inline ##vcore.car (bruijn ##.parse.468 5 1))) ((bruijn ##.k.1292 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VBlobEqv2, 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1741.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dis__one__decl_D467_k432(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D467_k432, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1288 0 0) (bruijn ##.k.1283 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
static void _V10_Dis__one__decl_D467_lambda78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D467_lambda78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.609 21 0) (bruijn ##.k.1289 0 0) (bruijn ##.parse.468 8 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 2,
      _var0,
      VGetArg(statics, 8-1, 1));
}
static void _V10_Dis__one__decl_D467_k431(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D467_k431, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.141.480 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.141.480 0 0))) (##vcore.call-with-values (close _V10_Dis__one__decl_D467_k432) (close _V10_Dis__one__decl_D467_lambda78) (bruijn ##.kk.132.469 6 1)) ((bruijn ##.k.1283 4 0) #f)) ((bruijn ##.k.1283 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dis__one__decl_D467_k432, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dis__one__decl_D467_lambda78, self)})),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dis__one__decl_D467_k430(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D467_k430, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.140.478 0 0)) ((close _V10_Dis__one__decl_D467_k431) (##inline ##vcore.cdr (bruijn ##.expr.140.478 0 0))) ((bruijn ##.k.1283 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dis__one__decl_D467_k431, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dis__one__decl_D467_k429(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D467_k429, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1284 0 0) ((close _V10_Dis__one__decl_D467_k430) (##inline ##vcore.cdr (bruijn ##.parse.468 5 1))) ((bruijn ##.k.1283 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dis__one__decl_D467_k430, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dis__one__decl_D467_k427(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D467_k427, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dis__one__decl_D467_k428) (close _V10_Dis__one__decl_D467_k429))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dis__one__decl_D467_k428, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dis__one__decl_D467_k429, self)})));
}
static void _V10_Dis__one__decl_D467_k426(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D467_k426, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.parse.468 3 1)) (##vcore.string? (close _V10_Dis__one__decl_D467_k427) (##inline ##vcore.car (bruijn ##.parse.468 3 1))) ((bruijn ##.k.1283 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallFuncWithGC(runtime, (VFunc)VStringP2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dis__one__decl_D467_k427, self)})),
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dis__one__decl_D467_k434(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D467_k434, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1280 1 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
static void _V10_Dis__one__decl_D467_lambda79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D467_lambda79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.601 25 0) (close _V10_Dis__one__decl_D467_k434) (##string ##.string.1742) (bruijn ##.parse.468 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dis__one__decl_D467_k434, self)})),
      VEncodePointer(&_V10_Dstring_D1742.sym, VPOINTER_OTHER),
      statics->up->up->up->vars[1]);
}
static void _V10_Dis__one__decl_D467_k433(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D467_k433, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1277 2 0) (close _V10_Dis__one__decl_D467_lambda79) (bruijn ##.kk.132.469 2 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dis__one__decl_D467_lambda79, self)})),
      statics->up->vars[1]);
}
static void _V10_Dis__one__decl_D467_k425(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D467_k425, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dis__one__decl_D467_k426) (close _V10_Dis__one__decl_D467_k433))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dis__one__decl_D467_k426, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dis__one__decl_D467_k433, self)})));
}
static void _V10_Dis__one__decl_D467_lambda76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D467_lambda76, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Dis__one__decl_D467_k413) (close _V10_Dis__one__decl_D467_k425))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dis__one__decl_D467_k413, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dis__one__decl_D467_k425, self)})));
}
static void _V10_Dis__one__decl_D467_lambda75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D467_lambda75, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.k.1276 0 0) (close _V10_Dis__one__decl_D467_lambda76))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dis__one__decl_D467_lambda76, self)})));
}
static void _V10_Dvalidate__foreign__function_D229_k441(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D229_k441, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1355 0 0) (bruijn ##.k.1349 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
static void _V10_Dvalidate__foreign__function_D229_lambda81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D229_lambda81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1356 0 0) (bruijn ##.expr.464 11 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 11-1, 1));
}
static void _V10_Dvalidate__foreign__function_D229_k440(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D229_k440, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.128.490 0 0)) (##vcore.call-with-values (close _V10_Dvalidate__foreign__function_D229_k441) (close _V10_Dvalidate__foreign__function_D229_lambda81) (bruijn ##.kk.122.481 6 1)) ((bruijn ##.k.1349 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D229_k441, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D229_lambda81, self)})),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dvalidate__foreign__function_D229_k439(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D229_k439, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.127.488 0 0)) ((close _V10_Dvalidate__foreign__function_D229_k440) (##inline ##vcore.cdr (bruijn ##.expr.127.488 0 0))) ((bruijn ##.k.1349 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dvalidate__foreign__function_D229_k440, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dvalidate__foreign__function_D229_k438(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D229_k438, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.126.486 0 0)) ((close _V10_Dvalidate__foreign__function_D229_k439) (##inline ##vcore.cdr (bruijn ##.expr.126.486 0 0))) ((bruijn ##.k.1349 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dvalidate__foreign__function_D229_k439, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dvalidate__foreign__function_D229_k437(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D229_k437, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.125.484 0 0)) ((close _V10_Dvalidate__foreign__function_D229_k438) (##inline ##vcore.cdr (bruijn ##.expr.125.484 0 0))) ((bruijn ##.k.1349 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dvalidate__foreign__function_D229_k438, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dvalidate__foreign__function_D229_k436(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D229_k436, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1350 0 0) ((close _V10_Dvalidate__foreign__function_D229_k437) (##inline ##vcore.cdr (bruijn ##.expr.464 6 1))) ((bruijn ##.k.1349 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dvalidate__foreign__function_D229_k437, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dvalidate__foreign__function_D229_k435(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D229_k435, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.464 5 1)) ((bruijn ##.x.615 8 0) (close _V10_Dvalidate__foreign__function_D229_k436) '##foreign.function (##inline ##vcore.car (bruijn ##.expr.464 5 1))) ((bruijn ##.k.1349 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 5-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D229_k436, self)})),
      _V10foreign_Dfunction,
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dvalidate__foreign__function_D229_k449(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D229_k449, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1327 0 0) (bruijn ##.k.1322 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
static void _V10_Dvalidate__foreign__function_D229_k452(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D229_k452, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1343 1 0) ((bruijn ##.x.601 32 0) (bruijn ##.k.1344 0 0) (##string ##.string.1743) (bruijn ##.lang.495 6 0)) ((bruijn ##.k.1344 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1743.sym, VPOINTER_OTHER),
      VGetArg(statics, 6-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dvalidate__foreign__function_D229_k464(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D229_k464, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1328 14 0) (##inline ##vcore.cons '##foreign.function (##inline ##vcore.cons '(##string ##.string.1737) (##inline ##vcore.cons (bruijn ##.decl.497 15 0) (##inline ##vcore.cons (bruijn ##.x.1334 2 0) (##inline ##vcore.cons (bruijn ##.x.1336 1 0) (bruijn ##.x.1337 0 0)))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 1,
      VInlineCons2(runtime,
        _V10foreign_Dfunction,
        VInlineCons2(runtime,
        VEncodePointer(&_V10_Dstring_D1737.sym, VPOINTER_OTHER),
        VInlineCons2(runtime,
        VGetArg(statics, 15-1, 0),
        VInlineCons2(runtime,
        statics->up->vars[0],
        VInlineCons2(runtime,
        statics->vars[0],
        _var0))))));
}
static void _V10_Dvalidate__foreign__function_D229_k463(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D229_k463, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.590 53 0) (close _V10_Dvalidate__foreign__function_D229_k464) (bruijn ##.ff.499 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 53-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D229_k464, self)})),
      statics->up->vars[0]);
}
static void _V10_Dvalidate__foreign__function_D229_k462(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D229_k462, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.603 39 0) (close _V10_Dvalidate__foreign__function_D229_k463) (bruijn ##.ff.499 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 39-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D229_k463, self)})),
      statics->vars[0]);
}
static void _V10_Dvalidate__foreign__function_D229_k461(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D229_k461, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.589 52 0) (close _V10_Dvalidate__foreign__function_D229_k462) (bruijn ##.ff.499 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 52-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D229_k462, self)})),
      _var0);
}
static void _V10_Dvalidate__foreign__function_D229_k460(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D229_k460, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.unwrap-function.224 23 4) (close _V10_Dvalidate__foreign__function_D229_k461) (bruijn ##.x.1338 1 0) (bruijn ##.x.1339 0 0) '())
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 4)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D229_k461, self)})),
      statics->vars[0],
      _var0,
      VNULL);
}
static void _V10_Dvalidate__foreign__function_D229_k459(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D229_k459, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.603 36 0) (close _V10_Dvalidate__foreign__function_D229_k460) (bruijn ##.parse.498 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D229_k460, self)})),
      statics->up->up->vars[0]);
}
static void _V10_Dvalidate__foreign__function_D229_k458(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D229_k458, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.reduce-type.222 21 2) (close _V10_Dvalidate__foreign__function_D229_k459) (bruijn ##.x.1340 0 0) '() #t)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 2)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D229_k459, self)})),
      _var0,
      VNULL,
      VEncodeBool(true));
}
static void _V10_Dvalidate__foreign__function_D229_k457(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D229_k457, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.611 26 0) (close _V10_Dvalidate__foreign__function_D229_k458) (bruijn ##.parse.498 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D229_k458, self)})),
      statics->vars[0]);
}
static void _V10_Dvalidate__foreign__function_D229_k456(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D229_k456, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.release-parse.466 15 1) (close _V10_Dvalidate__foreign__function_D229_k457))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 1)), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D229_k457, self)})));
}
static void _V10_Dvalidate__foreign__function_D229_k455(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D229_k455, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.is-one-decl.467 14 2) (close _V10_Dvalidate__foreign__function_D229_k456) (bruijn ##.x.1341 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 2)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D229_k456, self)})),
      _var0);
}
static void _V10_Dvalidate__foreign__function_D229_k454(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D229_k454, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.deep-copy.228 17 8) (close _V10_Dvalidate__foreign__function_D229_k455) (bruijn ##.x.1342 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 8)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D229_k455, self)})),
      _var0);
}
static void _V10_Dvalidate__foreign__function_D229_k453(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D229_k453, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.parse-decl-c.465 12 0) (close _V10_Dvalidate__foreign__function_D229_k454) (bruijn ##.decl.497 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D229_k454, self)})),
      statics->up->up->up->vars[0]);
}
static void _V10_Dvalidate__foreign__function_D229_k451(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D229_k451, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dvalidate__foreign__function_D229_k452) (close _V10_Dvalidate__foreign__function_D229_k453))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dvalidate__foreign__function_D229_k452, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D229_k453, self)})));
}
static void _V10_Dvalidate__foreign__function_D229_k450(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D229_k450, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.599 32 0) (close _V10_Dvalidate__foreign__function_D229_k451) (bruijn ##.x.1345 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D229_k451, self)})),
      _var0);
}
static void _V10_Dvalidate__foreign__function_D229_lambda82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D229_lambda82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.615 15 0) (close _V10_Dvalidate__foreign__function_D229_k450) (bruijn ##.lang.495 3 0) (##string ##.string.1737))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D229_k450, self)})),
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1737.sym, VPOINTER_OTHER));
}
static void _V10_Dvalidate__foreign__function_D229_k448(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D229_k448, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.131.496 1 0))) (##vcore.call-with-values (close _V10_Dvalidate__foreign__function_D229_k449) (close _V10_Dvalidate__foreign__function_D229_lambda82) (bruijn ##.kk.122.481 7 1)) ((bruijn ##.k.1322 5 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D229_k449, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D229_lambda82, self)})),
      VGetArg(statics, 7-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dvalidate__foreign__function_D229_k447(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D229_k447, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.131.496 0 0)) ((close _V10_Dvalidate__foreign__function_D229_k448) (##inline ##vcore.car (bruijn ##.expr.131.496 0 0))) ((bruijn ##.k.1322 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dvalidate__foreign__function_D229_k448, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dvalidate__foreign__function_D229_k446(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D229_k446, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dvalidate__foreign__function_D229_k447) (##inline ##vcore.cdr (bruijn ##.expr.130.494 1 0)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dvalidate__foreign__function_D229_k447, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
static void _V10_Dvalidate__foreign__function_D229_k445(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D229_k445, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.130.494 0 0)) ((close _V10_Dvalidate__foreign__function_D229_k446) (##inline ##vcore.car (bruijn ##.expr.130.494 0 0))) ((bruijn ##.k.1322 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dvalidate__foreign__function_D229_k446, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dvalidate__foreign__function_D229_k444(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D229_k444, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1323 0 0) ((close _V10_Dvalidate__foreign__function_D229_k445) (##inline ##vcore.cdr (bruijn ##.expr.464 7 1))) ((bruijn ##.k.1322 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dvalidate__foreign__function_D229_k445, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 7-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dvalidate__foreign__function_D229_k443(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D229_k443, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.464 6 1)) ((bruijn ##.x.615 9 0) (close _V10_Dvalidate__foreign__function_D229_k444) '##foreign.function (##inline ##vcore.car (bruijn ##.expr.464 6 1))) ((bruijn ##.k.1322 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 6-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D229_k444, self)})),
      _V10foreign_Dfunction,
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dvalidate__foreign__function_D229_lambda83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D229_lambda83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.601 24 0) (bruijn ##.k.1320 0 0) (##string ##.string.1744) (bruijn ##.expr.464 7 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1744.sym, VPOINTER_OTHER),
      VGetArg(statics, 7-1, 1));
}
static void _V10_Dvalidate__foreign__function_D229_k465(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D229_k465, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1317 2 0) (close _V10_Dvalidate__foreign__function_D229_lambda83) (bruijn ##.kk.122.481 2 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D229_lambda83, self)})),
      statics->up->vars[1]);
}
static void _V10_Dvalidate__foreign__function_D229_k442(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D229_k442, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dvalidate__foreign__function_D229_k443) (close _V10_Dvalidate__foreign__function_D229_k465))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dvalidate__foreign__function_D229_k443, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D229_k465, self)})));
}
static void _V10_Dvalidate__foreign__function_D229_lambda80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D229_lambda80, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Dvalidate__foreign__function_D229_k435) (close _V10_Dvalidate__foreign__function_D229_k442))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dvalidate__foreign__function_D229_k435, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D229_k442, self)})));
}
static void _V10_Dvalidate__foreign__function_D229_k412(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D229_k412, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 3 ((bruijn ##.x.1274 2 0) (bruijn ##.x.1275 1 0) (close _V10_Dis__one__decl_D467_lambda75)) (##vcore.call/cc (bruijn ##.k.1273 3 0) (close _V10_Dvalidate__foreign__function_D229_lambda80)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    VEnv * self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = statics->up->vars[0];
    self->vars[1] = statics->vars[0];
    self->vars[2] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dis__one__decl_D467_lambda75, self)}));
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->up->up->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D229_lambda80, self)})));
    }
}
static void _V10_Dvalidate__foreign__function_D229_k411(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D229_k411, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.function (close _V10_Dvalidate__foreign__function_D229_k412) (##string ##.string.1745))
    VCallFuncWithGC(runtime, (VFunc)VFunction2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D229_k412, self)})),
      VEncodePointer(&_V10_Dstring_D1745.sym, VPOINTER_OTHER));
}
static void _V10_Dvalidate__foreign__function_D229_lambda74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D229_lambda74, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.function (close _V10_Dvalidate__foreign__function_D229_k411) (##string ##.string.1746))
    VCallFuncWithGC(runtime, (VFunc)VFunction2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D229_k411, self)})),
      VEncodePointer(&_V10_Dstring_D1746.sym, VPOINTER_OTHER));
}
static void _V10_Dfind__file_D230_k470(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__file_D230_k470, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.find-file.230 6 10) (bruijn ##.k.1358 5 0) (bruijn ##.file.500 5 1) (bruijn ##.x.1361 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 10)), 3,
      VGetArg(statics, 5-1, 0),
      VGetArg(statics, 5-1, 1),
      _var0);
}
static void _V10_Dfind__file_D230_k469(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__file_D230_k469, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1360 0 0) ((bruijn ##.k.1358 4 0) (bruijn ##.path.502 1 0)) ((bruijn ##.x.609 13 0) (close _V10_Dfind__file_D230_k470) (bruijn ##.paths.501 4 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__file_D230_k470, self)})),
      statics->up->up->up->vars[2]);
}
}
static void _V10_Dfind__file_D230_k468(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__file_D230_k468, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.592 29 0) (close _V10_Dfind__file_D230_k469) (bruijn ##.path.502 0 0) 4)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__file_D230_k469, self)})),
      _var0,
      VEncodeInt(4l));
}
static void _V10_Dfind__file_D230_k467(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__file_D230_k467, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.602 18 0) (close _V10_Dfind__file_D230_k468) (##string ##.string.1748) (bruijn ##.x.1362 0 0) (bruijn ##.file.500 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__file_D230_k468, self)})),
      VEncodePointer(&_V10_Dstring_D1748.sym, VPOINTER_OTHER),
      _var0,
      statics->up->vars[1]);
}
static void _V10_Dfind__file_D230_k466(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__file_D230_k466, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1359 0 0) ((bruijn ##.x.601 18 0) (bruijn ##.k.1358 1 0) (##string ##.string.1747) (bruijn ##.file.500 1 1)) ((bruijn ##.x.611 8 0) (close _V10_Dfind__file_D230_k467) (bruijn ##.paths.501 1 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1747.sym, VPOINTER_OTHER),
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__file_D230_k467, self)})),
      statics->vars[2]);
}
}
static void _V10_Dfind__file_D230_lambda84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__file_D230_lambda84, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.x.591 27 0) (close _V10_Dfind__file_D230_k466) (bruijn ##.paths.501 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__file_D230_k466, self)})),
      _var2);
}
static void _V10_Dget__install__root_D231_k472(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__install__root_D231_k472, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.602 18 0) (bruijn ##.k.1363 2 0) (##string ##.string.1749) (bruijn ##.x.1364 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 3,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1749.sym, VPOINTER_OTHER),
      _var0);
}
static void _V10_Dget__install__root_D231_k471(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__install__root_D231_k471, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.1365 0 0) (close _V10_Dget__install__root_D231_k472))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__install__root_D231_k472, self)})));
}
static void _V10_Dget__install__root_D231_lambda85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__install__root_D231_lambda85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.593 25 0) ((bruijn ##.k.1363 0 0) (bruijn ##.x.593 25 0)) (##vcore.function (close _V10_Dget__install__root_D231_k471) (##string ##.string.1750)))
if(VDecodeBool(
VGetArg(statics, 25-1, 0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 25-1, 0));
} else {
    VCallFuncWithGC(runtime, (VFunc)VFunction2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__install__root_D231_k471, self)})),
      VEncodePointer(&_V10_Dstring_D1750.sym, VPOINTER_OTHER));
}
}
static void _V10_Dmake__preprocess__command_D232_k474(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmake__preprocess__command_D232_k474, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.602 18 0) (bruijn ##.k.1366 2 0) (##string ##.string.1751) (bruijn ##.x.595 25 0) (bruijn ##.file.503 2 1) (bruijn ##.x.1368 0 0) (##string ##.string.1752) (bruijn ##.architecture.504 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 7,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1751.sym, VPOINTER_OTHER),
      VGetArg(statics, 25-1, 0),
      statics->up->vars[1],
      _var0,
      VEncodePointer(&_V10_Dstring_D1752.sym, VPOINTER_OTHER),
      statics->up->vars[2]);
}
static void _V10_Dmake__preprocess__command_D232_k475(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmake__preprocess__command_D232_k475, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.602 18 0) (bruijn ##.k.1366 2 0) (##string ##.string.1753) (bruijn ##.x.595 25 0) (bruijn ##.file.503 2 1) (bruijn ##.x.1369 0 0) (##string ##.string.1752) (bruijn ##.architecture.504 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 7,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1753.sym, VPOINTER_OTHER),
      VGetArg(statics, 25-1, 0),
      statics->up->vars[1],
      _var0,
      VEncodePointer(&_V10_Dstring_D1752.sym, VPOINTER_OTHER),
      statics->up->vars[2]);
}
static void _V10_Dmake__preprocess__command_D232_k473(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmake__preprocess__command_D232_k473, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1367 0 0) ((bruijn ##.get-install-root.231 2 11) (close _V10_Dmake__preprocess__command_D232_k474)) ((bruijn ##.get-install-root.231 2 11) (close _V10_Dmake__preprocess__command_D232_k475)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[11]), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmake__preprocess__command_D232_k474, self)})));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[11]), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmake__preprocess__command_D232_k475, self)})));
}
}
static void _V10_Dmake__preprocess__command_D232_lambda86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmake__preprocess__command_D232_lambda86, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.x.608 10 0) (close _V10_Dmake__preprocess__command_D232_k473) (bruijn ##.x.594 24 0) 'windows)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmake__preprocess__command_D232_k473, self)})),
      VGetArg(statics, 24-1, 0),
      _V0windows);
}
static void _V10_Dresolve__foreign__import_D233_k483(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D233_k483, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1382 0 0) (bruijn ##.k.1377 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
static void _V10_Dresolve__foreign__import_D233_k486(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D233_k486, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1398 1 0) ((bruijn ##.x.601 30 0) (bruijn ##.k.1399 0 0) (##string ##.string.1743) (bruijn ##.expr.505 13 1)) ((bruijn ##.k.1399 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1743.sym, VPOINTER_OTHER),
      VGetArg(statics, 13-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dresolve__foreign__import_D233_k490(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D233_k490, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1395 1 0) ((bruijn ##.x.601 33 0) (bruijn ##.k.1396 0 0) (##string ##.string.1754) (bruijn ##.expr.505 16 1)) ((bruijn ##.k.1396 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1754.sym, VPOINTER_OTHER),
      VGetArg(statics, 16-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dresolve__foreign__import_D233_k501(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D233_k501, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.597 47 0) (bruijn ##.k.1383 16 0) (##inline ##vcore.cons '##foreign.declare (##inline ##vcore.cons (bruijn ##.x.1392 2 0) '())) (bruijn ##.x.1389 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 47-1, 0)), 3,
      VGetArg(statics, 16-1, 0),
      VInlineCons2(runtime,
        _V10foreign_Ddeclare,
        VInlineCons2(runtime,
        statics->up->vars[0],
        VNULL)),
      _var0);
}
static void _V10_Dresolve__foreign__import_D233_k500(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D233_k500, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.table->defines.227 26 7) (close _V10_Dresolve__foreign__import_D233_k501) (bruijn ##.x.1390 0 0) '())
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 7)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D233_k501, self)})),
      _var0,
      VNULL);
}
static void _V10_Dresolve__foreign__import_D233_k499(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D233_k499, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.unwrap-declares.226 25 6) (close _V10_Dresolve__foreign__import_D233_k500) (bruijn ##.parse.519 3 0) '())
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 6)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D233_k500, self)})),
      statics->up->up->vars[0],
      VNULL);
}
static void _V10_Dresolve__foreign__import_D233_k498(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D233_k498, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.602 39 0) (close _V10_Dresolve__foreign__import_D233_k499) (##string ##.string.1755) (bruijn ##.file.516 14 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 39-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D233_k499, self)})),
      VEncodePointer(&_V10_Dstring_D1755.sym, VPOINTER_OTHER),
      VGetArg(statics, 14-1, 0));
}
static void _V10_Dresolve__foreign__import_D233_k497(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D233_k497, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.598 42 0) (close _V10_Dresolve__foreign__import_D233_k498) (bruijn ##.fd.518 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 42-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D233_k498, self)})),
      statics->up->up->vars[0]);
}
static void _V10_Dresolve__foreign__import_D233_k496(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D233_k496, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.release-parse.509 18 1) (close _V10_Dresolve__foreign__import_D233_k497))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 1)), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D233_k497, self)})));
}
static void _V10_Dresolve__foreign__import_D233_k495(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D233_k495, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.deep-copy.228 21 8) (close _V10_Dresolve__foreign__import_D233_k496) (bruijn ##.x.1393 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 8)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D233_k496, self)})),
      _var0);
}
static void _V10_Dresolve__foreign__import_D233_k494(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D233_k494, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.parse-header-c.508 16 0) (close _V10_Dresolve__foreign__import_D233_k495) (bruijn ##.fd.518 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D233_k495, self)})),
      _var0);
}
static void _V10_Dresolve__foreign__import_D233_k493(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D233_k493, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.596 40 0) (close _V10_Dresolve__foreign__import_D233_k494) (bruijn ##.cmd.517 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 40-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D233_k494, self)})),
      _var0);
}
static void _V10_Dresolve__foreign__import_D233_k492(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D233_k492, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.make-preprocess-command.232 18 12) (close _V10_Dresolve__foreign__import_D233_k493) (bruijn ##.x.1394 0 0) (bruijn ##.architecture.507 17 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 12)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D233_k493, self)})),
      _var0,
      VGetArg(statics, 17-1, 3));
}
static void _V10_Dresolve__foreign__import_D233_k491(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D233_k491, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.find-file.230 17 10) (close _V10_Dresolve__foreign__import_D233_k492) (bruijn ##.file.516 7 0) (bruijn ##.paths.506 16 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 10)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D233_k492, self)})),
      VGetArg(statics, 7-1, 0),
      VGetArg(statics, 16-1, 2));
}
static void _V10_Dresolve__foreign__import_D233_k489(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D233_k489, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dresolve__foreign__import_D233_k490) (close _V10_Dresolve__foreign__import_D233_k491))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dresolve__foreign__import_D233_k490, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D233_k491, self)})));
}
static void _V10_Dresolve__foreign__import_D233_k488(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D233_k488, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.599 33 0) (close _V10_Dresolve__foreign__import_D233_k489) (bruijn ##.x.1397 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D233_k489, self)})),
      _var0);
}
static void _V10_Dresolve__foreign__import_D233_k487(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D233_k487, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.600 31 0) (close _V10_Dresolve__foreign__import_D233_k488) (bruijn ##.file.516 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D233_k488, self)})),
      statics->up->up->up->vars[0]);
}
static void _V10_Dresolve__foreign__import_D233_k485(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D233_k485, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dresolve__foreign__import_D233_k486) (close _V10_Dresolve__foreign__import_D233_k487))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dresolve__foreign__import_D233_k486, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D233_k487, self)})));
}
static void _V10_Dresolve__foreign__import_D233_k484(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D233_k484, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.599 30 0) (close _V10_Dresolve__foreign__import_D233_k485) (bruijn ##.x.1400 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D233_k485, self)})),
      _var0);
}
static void _V10_Dresolve__foreign__import_D233_lambda89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D233_lambda89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.615 13 0) (close _V10_Dresolve__foreign__import_D233_k484) (##inline ##vcore.car (bruijn ##.expr.145.513 3 0)) (##string ##.string.1737))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D233_k484, self)})),
      VInlineCar2(runtime,
        statics->up->up->vars[0]),
      VEncodePointer(&_V10_Dstring_D1737.sym, VPOINTER_OTHER));
}
static void _V10_Dresolve__foreign__import_D233_k482(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D233_k482, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.146.515 1 0))) (##vcore.call-with-values (close _V10_Dresolve__foreign__import_D233_k483) (close _V10_Dresolve__foreign__import_D233_lambda89) (bruijn ##.kk.142.510 5 1)) ((bruijn ##.k.1377 4 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D233_k483, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D233_lambda89, self)})),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dresolve__foreign__import_D233_k481(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D233_k481, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.146.515 0 0)) ((close _V10_Dresolve__foreign__import_D233_k482) (##inline ##vcore.car (bruijn ##.expr.146.515 0 0))) ((bruijn ##.k.1377 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dresolve__foreign__import_D233_k482, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dresolve__foreign__import_D233_k480(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D233_k480, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.145.513 0 0)) ((close _V10_Dresolve__foreign__import_D233_k481) (##inline ##vcore.cdr (bruijn ##.expr.145.513 0 0))) ((bruijn ##.k.1377 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dresolve__foreign__import_D233_k481, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dresolve__foreign__import_D233_k479(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D233_k479, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1378 0 0) ((close _V10_Dresolve__foreign__import_D233_k480) (##inline ##vcore.cdr (bruijn ##.expr.505 6 1))) ((bruijn ##.k.1377 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dresolve__foreign__import_D233_k480, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dresolve__foreign__import_D233_k478(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D233_k478, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.505 5 1)) ((bruijn ##.x.615 8 0) (close _V10_Dresolve__foreign__import_D233_k479) '##foreign.import (##inline ##vcore.car (bruijn ##.expr.505 5 1))) ((bruijn ##.k.1377 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 5-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D233_k479, self)})),
      _V10foreign_Dimport,
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dresolve__foreign__import_D233_lambda90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D233_lambda90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.601 23 0) (bruijn ##.k.1375 0 0) (##string ##.string.1756) (bruijn ##.expr.505 6 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1756.sym, VPOINTER_OTHER),
      VGetArg(statics, 6-1, 1));
}
static void _V10_Dresolve__foreign__import_D233_k502(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D233_k502, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1373 1 0) (close _V10_Dresolve__foreign__import_D233_lambda90) (bruijn ##.kk.142.510 1 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D233_lambda90, self)})),
      statics->vars[1]);
}
static void _V10_Dresolve__foreign__import_D233_lambda88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D233_lambda88, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Dresolve__foreign__import_D233_k478) (close _V10_Dresolve__foreign__import_D233_k502))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dresolve__foreign__import_D233_k478, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D233_k502, self)})));
}
static void _V10_Dresolve__foreign__import_D233_k477(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D233_k477, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 2 ((bruijn ##.x.1371 2 0) (bruijn ##.x.1372 1 0)) (##vcore.call/cc (bruijn ##.k.1370 3 0) (close _V10_Dresolve__foreign__import_D233_lambda88)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    VEnv * self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = statics->up->vars[0];
    self->vars[1] = statics->vars[0];
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->up->up->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D233_lambda88, self)})));
    }
}
static void _V10_Dresolve__foreign__import_D233_k476(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D233_k476, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.function (close _V10_Dresolve__foreign__import_D233_k477) (##string ##.string.1745))
    VCallFuncWithGC(runtime, (VFunc)VFunction2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D233_k477, self)})),
      VEncodePointer(&_V10_Dstring_D1745.sym, VPOINTER_OTHER));
}
static void _V10_Dresolve__foreign__import_D233_lambda87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D233_lambda87, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (##vcore.function (close _V10_Dresolve__foreign__import_D233_k476) (##string ##.string.1757))
    VCallFuncWithGC(runtime, (VFunc)VFunction2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D233_k476, self)})),
      VEncodePointer(&_V10_Dstring_D1757.sym, VPOINTER_OTHER));
}
static void _V10_Dmangle__foreign__function_D234_lambda91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmangle__foreign__function_D234_lambda91, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.x.602 16 0) (bruijn ##.k.1403 0 0) (##string ##.string.1758) (bruijn ##.name.520 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1758.sym, VPOINTER_OTHER),
      _var1);
}
static void _V10_Dget__foreign__encoder_D235_k505(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__encoder_D235_k505, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.608 13 0) (bruijn ##.k.1431 1 0) (bruijn ##.x.1432 0 0) 'pointer)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 3,
      statics->vars[0],
      _var0,
      _V0pointer);
}
static void _V10_Dget__foreign__encoder_D235_k504(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__encoder_D235_k504, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1430 1 0) ((bruijn ##.x.611 9 0) (close _V10_Dget__foreign__encoder_D235_k505) (bruijn ##.type.521 2 1)) ((bruijn ##.k.1431 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__encoder_D235_k505, self)})),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__encoder_D235_k506(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__encoder_D235_k506, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1405 0 0) ((bruijn ##.k.1404 2 0) (##inline ##vcore.qcons 'void-pointer '(##string ##.string.1759))) ((bruijn ##.x.604 16 0) (bruijn ##.k.1404 2 0) (bruijn ##.type.521 2 1) (##inline ##vcore.qcons (##inline ##vcore.qcons 'void '#t) (##inline ##vcore.qcons (##inline ##vcore.qcons '_Bool '(##string ##.string.1760)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'char '(##string ##.string.1761)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'signed-char '(##string ##.string.1762)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'unsigned-char '(##string ##.string.1762)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'short '(##string ##.string.1762)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'unsigned-short '(##string ##.string.1762)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'int '(##string ##.string.1762)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'unsigned-int '(##string ##.string.1762)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'double '(##string ##.string.1763)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'float '(##string ##.string.1763)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'VWORD '(##string ##.string.1738)) '()))))))))))))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0void__pointer,
        VEncodePointer(&_V10_Dstring_D1759.sym, VPOINTER_OTHER)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 3,
      statics->up->vars[0],
      statics->up->vars[1],
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0void,
        VEncodeBool(true)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0_UBool,
        VEncodePointer(&_V10_Dstring_D1760.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0char,
        VEncodePointer(&_V10_Dstring_D1761.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0signed__char,
        VEncodePointer(&_V10_Dstring_D1762.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unsigned__char,
        VEncodePointer(&_V10_Dstring_D1762.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0short,
        VEncodePointer(&_V10_Dstring_D1762.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unsigned__short,
        VEncodePointer(&_V10_Dstring_D1762.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0int,
        VEncodePointer(&_V10_Dstring_D1762.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unsigned__int,
        VEncodePointer(&_V10_Dstring_D1762.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0double,
        VEncodePointer(&_V10_Dstring_D1763.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0float,
        VEncodePointer(&_V10_Dstring_D1763.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0VWORD,
        VEncodePointer(&_V10_Dstring_D1738.sym, VPOINTER_OTHER)),
        VNULL)))))))))))));
}
}
static void _V10_Dget__foreign__encoder_D235_k503(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__encoder_D235_k503, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dget__foreign__encoder_D235_k504) (close _V10_Dget__foreign__encoder_D235_k506))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dget__foreign__encoder_D235_k504, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__encoder_D235_k506, self)})));
}
static void _V10_Dget__foreign__encoder_D235_lambda92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__encoder_D235_lambda92, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.x.612 6 0) (close _V10_Dget__foreign__encoder_D235_k503) (bruijn ##.type.521 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__encoder_D235_k503, self)})),
      _var1);
}
static void _V10_Dget__foreign__decoder_D236_k509(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k509, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.608 13 0) (bruijn ##.k.1623 1 0) (bruijn ##.x.1624 0 0) 'pointer)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 3,
      statics->vars[0],
      _var0,
      _V0pointer);
}
static void _V10_Dget__foreign__decoder_D236_k508(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k508, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1622 1 0) ((bruijn ##.x.611 9 0) (close _V10_Dget__foreign__decoder_D236_k509) (bruijn ##.type.522 2 1)) ((bruijn ##.k.1623 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k509, self)})),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k514(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k514, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1588 0 0) (bruijn ##.k.1587 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
static void _V10_Dget__foreign__decoder_D236_lambda95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_lambda95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1589 0 0) (##inline ##vcore.qcons 'c-string '(##string ##.string.1764)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0c__string,
        VEncodePointer(&_V10_Dstring_D1764.sym, VPOINTER_OTHER)));
}
static void _V10_Dget__foreign__decoder_D236_k513(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k513, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1586 1 0) (##vcore.call-with-values (close _V10_Dget__foreign__decoder_D236_k514) (close _V10_Dget__foreign__decoder_D236_lambda95) (bruijn ##.kk.147.523 3 1)) ((bruijn ##.k.1587 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k514, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_lambda95, self)})),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k520(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k520, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1581 0 0) (bruijn ##.k.1576 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V10_Dget__foreign__decoder_D236_lambda96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_lambda96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1582 0 0) (##inline ##vcore.qcons 'const-c-string '(##string ##.string.1765)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0const__c__string,
        VEncodePointer(&_V10_Dstring_D1765.sym, VPOINTER_OTHER)));
}
static void _V10_Dget__foreign__decoder_D236_k519(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k519, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1579 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.150.526 1 0))) (##vcore.call-with-values (close _V10_Dget__foreign__decoder_D236_k520) (close _V10_Dget__foreign__decoder_D236_lambda96) (bruijn ##.kk.147.523 7 1)) ((bruijn ##.k.1576 3 0) #f)) ((bruijn ##.k.1576 3 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k520, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_lambda96, self)})),
      VGetArg(statics, 7-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k518(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k518, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.150.526 0 0)) ((bruijn ##.x.615 12 0) (close _V10_Dget__foreign__decoder_D236_k519) 'char (##inline ##vcore.car (bruijn ##.expr.150.526 0 0))) ((bruijn ##.k.1576 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k519, self)})),
      _V0char,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k517(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k517, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1577 0 0) ((close _V10_Dget__foreign__decoder_D236_k518) (##inline ##vcore.cdr (bruijn ##.input.148.524 4 0))) ((bruijn ##.k.1576 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dget__foreign__decoder_D236_k518, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k516(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k516, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.input.148.524 3 0)) ((bruijn ##.x.615 10 0) (close _V10_Dget__foreign__decoder_D236_k517) 'const (##inline ##vcore.car (bruijn ##.input.148.524 3 0))) ((bruijn ##.k.1576 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k517, self)})),
      _V0const,
      VInlineCar2(runtime,
        statics->up->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k526(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k526, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1570 0 0) (bruijn ##.k.1565 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V10_Dget__foreign__decoder_D236_lambda97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_lambda97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1571 0 0) (##inline ##vcore.qcons 'const-void-pointer '(##string ##.string.1766)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0const__void__pointer,
        VEncodePointer(&_V10_Dstring_D1766.sym, VPOINTER_OTHER)));
}
static void _V10_Dget__foreign__decoder_D236_k525(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k525, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1568 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.152.528 1 0))) (##vcore.call-with-values (close _V10_Dget__foreign__decoder_D236_k526) (close _V10_Dget__foreign__decoder_D236_lambda97) (bruijn ##.kk.147.523 8 1)) ((bruijn ##.k.1565 3 0) #f)) ((bruijn ##.k.1565 3 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k526, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_lambda97, self)})),
      VGetArg(statics, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k524(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k524, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.152.528 0 0)) ((bruijn ##.x.615 13 0) (close _V10_Dget__foreign__decoder_D236_k525) 'void (##inline ##vcore.car (bruijn ##.expr.152.528 0 0))) ((bruijn ##.k.1565 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k525, self)})),
      _V0void,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k523(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k523, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1566 0 0) ((close _V10_Dget__foreign__decoder_D236_k524) (##inline ##vcore.cdr (bruijn ##.input.148.524 5 0))) ((bruijn ##.k.1565 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dget__foreign__decoder_D236_k524, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 0)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k522(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k522, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.input.148.524 4 0)) ((bruijn ##.x.615 11 0) (close _V10_Dget__foreign__decoder_D236_k523) 'const (##inline ##vcore.car (bruijn ##.input.148.524 4 0))) ((bruijn ##.k.1565 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->up->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k523, self)})),
      _V0const,
      VInlineCar2(runtime,
        statics->up->up->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k530(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k530, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1562 0 0) (bruijn ##.k.1561 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
static void _V10_Dget__foreign__decoder_D236_lambda98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_lambda98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1563 0 0) (##inline ##vcore.qcons 'void-pointer '(##string ##.string.1767)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0void__pointer,
        VEncodePointer(&_V10_Dstring_D1767.sym, VPOINTER_OTHER)));
}
static void _V10_Dget__foreign__decoder_D236_k529(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k529, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1560 1 0) (##vcore.call-with-values (close _V10_Dget__foreign__decoder_D236_k530) (close _V10_Dget__foreign__decoder_D236_lambda98) (bruijn ##.kk.147.523 7 1)) ((bruijn ##.k.1561 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k530, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_lambda98, self)})),
      VGetArg(statics, 7-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k534(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k534, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1558 0 0) (bruijn ##.k.1557 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
static void _V10_Dget__foreign__decoder_D236_lambda99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_lambda99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1559 0 0) (##inline ##vcore.qcons 'f32-pointer '(##string ##.string.1768)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0f32__pointer,
        VEncodePointer(&_V10_Dstring_D1768.sym, VPOINTER_OTHER)));
}
static void _V10_Dget__foreign__decoder_D236_k533(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k533, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1556 1 0) (##vcore.call-with-values (close _V10_Dget__foreign__decoder_D236_k534) (close _V10_Dget__foreign__decoder_D236_lambda99) (bruijn ##.kk.147.523 9 1)) ((bruijn ##.k.1557 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k534, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_lambda99, self)})),
      VGetArg(statics, 9-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k538(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k538, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1554 0 0) (bruijn ##.k.1553 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
static void _V10_Dget__foreign__decoder_D236_lambda100(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_lambda100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1555 0 0) (##inline ##vcore.qcons 'f64-pointer '(##string ##.string.1769)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0f64__pointer,
        VEncodePointer(&_V10_Dstring_D1769.sym, VPOINTER_OTHER)));
}
static void _V10_Dget__foreign__decoder_D236_k537(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k537, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1552 1 0) (##vcore.call-with-values (close _V10_Dget__foreign__decoder_D236_k538) (close _V10_Dget__foreign__decoder_D236_lambda100) (bruijn ##.kk.147.523 11 1)) ((bruijn ##.k.1553 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k538, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_lambda100, self)})),
      VGetArg(statics, 11-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k542(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k542, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1550 0 0) (bruijn ##.k.1549 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
static void _V10_Dget__foreign__decoder_D236_lambda101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_lambda101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1551 0 0) (##inline ##vcore.qcons 's32-pointer '(##string ##.string.1770)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0s32__pointer,
        VEncodePointer(&_V10_Dstring_D1770.sym, VPOINTER_OTHER)));
}
static void _V10_Dget__foreign__decoder_D236_k541(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k541, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1548 1 0) (##vcore.call-with-values (close _V10_Dget__foreign__decoder_D236_k542) (close _V10_Dget__foreign__decoder_D236_lambda101) (bruijn ##.kk.147.523 13 1)) ((bruijn ##.k.1549 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k542, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_lambda101, self)})),
      VGetArg(statics, 13-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k546(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k546, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1546 0 0) (bruijn ##.k.1545 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
static void _V10_Dget__foreign__decoder_D236_lambda102(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_lambda102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1547 0 0) (##inline ##vcore.qcons 'u16-pointer '(##string ##.string.1771)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0u16__pointer,
        VEncodePointer(&_V10_Dstring_D1771.sym, VPOINTER_OTHER)));
}
static void _V10_Dget__foreign__decoder_D236_k545(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k545, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1544 1 0) (##vcore.call-with-values (close _V10_Dget__foreign__decoder_D236_k546) (close _V10_Dget__foreign__decoder_D236_lambda102) (bruijn ##.kk.147.523 15 1)) ((bruijn ##.k.1545 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k546, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_lambda102, self)})),
      VGetArg(statics, 15-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k550(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k550, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1542 0 0) (bruijn ##.k.1541 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
static void _V10_Dget__foreign__decoder_D236_lambda103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_lambda103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1543 0 0) (##inline ##vcore.qcons 's16-pointer '(##string ##.string.1772)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0s16__pointer,
        VEncodePointer(&_V10_Dstring_D1772.sym, VPOINTER_OTHER)));
}
static void _V10_Dget__foreign__decoder_D236_k549(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k549, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1540 1 0) (##vcore.call-with-values (close _V10_Dget__foreign__decoder_D236_k550) (close _V10_Dget__foreign__decoder_D236_lambda103) (bruijn ##.kk.147.523 17 1)) ((bruijn ##.k.1541 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k550, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_lambda103, self)})),
      VGetArg(statics, 17-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k554(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k554, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1538 0 0) (bruijn ##.k.1537 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
static void _V10_Dget__foreign__decoder_D236_lambda104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_lambda104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1539 0 0) (##inline ##vcore.qcons 'u8-pointer '(##string ##.string.1773)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0u8__pointer,
        VEncodePointer(&_V10_Dstring_D1773.sym, VPOINTER_OTHER)));
}
static void _V10_Dget__foreign__decoder_D236_k553(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k553, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1536 1 0) (##vcore.call-with-values (close _V10_Dget__foreign__decoder_D236_k554) (close _V10_Dget__foreign__decoder_D236_lambda104) (bruijn ##.kk.147.523 19 1)) ((bruijn ##.k.1537 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k554, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_lambda104, self)})),
      VGetArg(statics, 19-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k558(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k558, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1534 0 0) (bruijn ##.k.1533 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
static void _V10_Dget__foreign__decoder_D236_lambda105(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_lambda105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1535 0 0) (##inline ##vcore.qcons 's8-pointer '(##string ##.string.1774)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0s8__pointer,
        VEncodePointer(&_V10_Dstring_D1774.sym, VPOINTER_OTHER)));
}
static void _V10_Dget__foreign__decoder_D236_k557(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k557, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1532 1 0) (##vcore.call-with-values (close _V10_Dget__foreign__decoder_D236_k558) (close _V10_Dget__foreign__decoder_D236_lambda105) (bruijn ##.kk.147.523 21 1)) ((bruijn ##.k.1533 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k558, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_lambda105, self)})),
      VGetArg(statics, 21-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k564(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k564, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1527 0 0) (bruijn ##.k.1522 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V10_Dget__foreign__decoder_D236_lambda106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_lambda106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1528 0 0) (##inline ##vcore.qcons 'f32-pointer '(##string ##.string.1768)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0f32__pointer,
        VEncodePointer(&_V10_Dstring_D1768.sym, VPOINTER_OTHER)));
}
static void _V10_Dget__foreign__decoder_D236_k563(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k563, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1525 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.154.530 1 0))) (##vcore.call-with-values (close _V10_Dget__foreign__decoder_D236_k564) (close _V10_Dget__foreign__decoder_D236_lambda106) (bruijn ##.kk.147.523 25 1)) ((bruijn ##.k.1522 3 0) #f)) ((bruijn ##.k.1522 3 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k564, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_lambda106, self)})),
      VGetArg(statics, 25-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k562(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k562, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.154.530 0 0)) ((bruijn ##.x.615 30 0) (close _V10_Dget__foreign__decoder_D236_k563) 'float (##inline ##vcore.car (bruijn ##.expr.154.530 0 0))) ((bruijn ##.k.1522 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k563, self)})),
      _V0float,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k561(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k561, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1523 0 0) ((close _V10_Dget__foreign__decoder_D236_k562) (##inline ##vcore.cdr (bruijn ##.input.148.524 22 0))) ((bruijn ##.k.1522 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dget__foreign__decoder_D236_k562, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 22-1, 0)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k560(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k560, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.input.148.524 21 0)) ((bruijn ##.x.615 28 0) (close _V10_Dget__foreign__decoder_D236_k561) 'const (##inline ##vcore.car (bruijn ##.input.148.524 21 0))) ((bruijn ##.k.1522 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 21-1, 0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k561, self)})),
      _V0const,
      VInlineCar2(runtime,
        VGetArg(statics, 21-1, 0)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k570(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k570, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1516 0 0) (bruijn ##.k.1511 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V10_Dget__foreign__decoder_D236_lambda107(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_lambda107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1517 0 0) (##inline ##vcore.qcons 'f64-pointer '(##string ##.string.1769)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0f64__pointer,
        VEncodePointer(&_V10_Dstring_D1769.sym, VPOINTER_OTHER)));
}
static void _V10_Dget__foreign__decoder_D236_k569(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k569, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1514 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.156.532 1 0))) (##vcore.call-with-values (close _V10_Dget__foreign__decoder_D236_k570) (close _V10_Dget__foreign__decoder_D236_lambda107) (bruijn ##.kk.147.523 26 1)) ((bruijn ##.k.1511 3 0) #f)) ((bruijn ##.k.1511 3 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k570, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_lambda107, self)})),
      VGetArg(statics, 26-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k568(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k568, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.156.532 0 0)) ((bruijn ##.x.615 31 0) (close _V10_Dget__foreign__decoder_D236_k569) 'double (##inline ##vcore.car (bruijn ##.expr.156.532 0 0))) ((bruijn ##.k.1511 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k569, self)})),
      _V0double,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k567(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k567, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1512 0 0) ((close _V10_Dget__foreign__decoder_D236_k568) (##inline ##vcore.cdr (bruijn ##.input.148.524 23 0))) ((bruijn ##.k.1511 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dget__foreign__decoder_D236_k568, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 23-1, 0)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k566(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k566, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.input.148.524 22 0)) ((bruijn ##.x.615 29 0) (close _V10_Dget__foreign__decoder_D236_k567) 'const (##inline ##vcore.car (bruijn ##.input.148.524 22 0))) ((bruijn ##.k.1511 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 22-1, 0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k567, self)})),
      _V0const,
      VInlineCar2(runtime,
        VGetArg(statics, 22-1, 0)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k576(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k576, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1505 0 0) (bruijn ##.k.1500 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V10_Dget__foreign__decoder_D236_lambda108(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_lambda108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1506 0 0) (##inline ##vcore.qcons 's32-pointer '(##string ##.string.1770)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0s32__pointer,
        VEncodePointer(&_V10_Dstring_D1770.sym, VPOINTER_OTHER)));
}
static void _V10_Dget__foreign__decoder_D236_k575(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k575, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1503 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.158.534 1 0))) (##vcore.call-with-values (close _V10_Dget__foreign__decoder_D236_k576) (close _V10_Dget__foreign__decoder_D236_lambda108) (bruijn ##.kk.147.523 27 1)) ((bruijn ##.k.1500 3 0) #f)) ((bruijn ##.k.1500 3 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k576, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_lambda108, self)})),
      VGetArg(statics, 27-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k574(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k574, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.158.534 0 0)) ((bruijn ##.x.615 32 0) (close _V10_Dget__foreign__decoder_D236_k575) 'int (##inline ##vcore.car (bruijn ##.expr.158.534 0 0))) ((bruijn ##.k.1500 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k575, self)})),
      _V0int,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k573(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k573, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1501 0 0) ((close _V10_Dget__foreign__decoder_D236_k574) (##inline ##vcore.cdr (bruijn ##.input.148.524 24 0))) ((bruijn ##.k.1500 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dget__foreign__decoder_D236_k574, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 24-1, 0)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k572(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k572, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.input.148.524 23 0)) ((bruijn ##.x.615 30 0) (close _V10_Dget__foreign__decoder_D236_k573) 'const (##inline ##vcore.car (bruijn ##.input.148.524 23 0))) ((bruijn ##.k.1500 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 23-1, 0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k573, self)})),
      _V0const,
      VInlineCar2(runtime,
        VGetArg(statics, 23-1, 0)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k582(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k582, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1494 0 0) (bruijn ##.k.1489 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V10_Dget__foreign__decoder_D236_lambda109(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_lambda109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1495 0 0) (##inline ##vcore.qcons 'u16-pointer '(##string ##.string.1771)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0u16__pointer,
        VEncodePointer(&_V10_Dstring_D1771.sym, VPOINTER_OTHER)));
}
static void _V10_Dget__foreign__decoder_D236_k581(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k581, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1492 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.160.536 1 0))) (##vcore.call-with-values (close _V10_Dget__foreign__decoder_D236_k582) (close _V10_Dget__foreign__decoder_D236_lambda109) (bruijn ##.kk.147.523 28 1)) ((bruijn ##.k.1489 3 0) #f)) ((bruijn ##.k.1489 3 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k582, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_lambda109, self)})),
      VGetArg(statics, 28-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k580(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k580, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.160.536 0 0)) ((bruijn ##.x.615 33 0) (close _V10_Dget__foreign__decoder_D236_k581) 'unsigned-short (##inline ##vcore.car (bruijn ##.expr.160.536 0 0))) ((bruijn ##.k.1489 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k581, self)})),
      _V0unsigned__short,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k579(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k579, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1490 0 0) ((close _V10_Dget__foreign__decoder_D236_k580) (##inline ##vcore.cdr (bruijn ##.input.148.524 25 0))) ((bruijn ##.k.1489 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dget__foreign__decoder_D236_k580, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 25-1, 0)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k578(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k578, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.input.148.524 24 0)) ((bruijn ##.x.615 31 0) (close _V10_Dget__foreign__decoder_D236_k579) 'const (##inline ##vcore.car (bruijn ##.input.148.524 24 0))) ((bruijn ##.k.1489 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 24-1, 0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k579, self)})),
      _V0const,
      VInlineCar2(runtime,
        VGetArg(statics, 24-1, 0)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k588(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k588, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1483 0 0) (bruijn ##.k.1478 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V10_Dget__foreign__decoder_D236_lambda110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_lambda110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1484 0 0) (##inline ##vcore.qcons 's16-pointer '(##string ##.string.1772)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0s16__pointer,
        VEncodePointer(&_V10_Dstring_D1772.sym, VPOINTER_OTHER)));
}
static void _V10_Dget__foreign__decoder_D236_k587(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k587, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1481 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.162.538 1 0))) (##vcore.call-with-values (close _V10_Dget__foreign__decoder_D236_k588) (close _V10_Dget__foreign__decoder_D236_lambda110) (bruijn ##.kk.147.523 29 1)) ((bruijn ##.k.1478 3 0) #f)) ((bruijn ##.k.1478 3 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k588, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_lambda110, self)})),
      VGetArg(statics, 29-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k586(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k586, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.162.538 0 0)) ((bruijn ##.x.615 34 0) (close _V10_Dget__foreign__decoder_D236_k587) 'short (##inline ##vcore.car (bruijn ##.expr.162.538 0 0))) ((bruijn ##.k.1478 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k587, self)})),
      _V0short,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k585(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k585, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1479 0 0) ((close _V10_Dget__foreign__decoder_D236_k586) (##inline ##vcore.cdr (bruijn ##.input.148.524 26 0))) ((bruijn ##.k.1478 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dget__foreign__decoder_D236_k586, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 26-1, 0)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k584(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k584, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.input.148.524 25 0)) ((bruijn ##.x.615 32 0) (close _V10_Dget__foreign__decoder_D236_k585) 'const (##inline ##vcore.car (bruijn ##.input.148.524 25 0))) ((bruijn ##.k.1478 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 25-1, 0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k585, self)})),
      _V0const,
      VInlineCar2(runtime,
        VGetArg(statics, 25-1, 0)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k594(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k594, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1472 0 0) (bruijn ##.k.1467 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V10_Dget__foreign__decoder_D236_lambda111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_lambda111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1473 0 0) (##inline ##vcore.qcons 'u8-pointer '(##string ##.string.1773)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0u8__pointer,
        VEncodePointer(&_V10_Dstring_D1773.sym, VPOINTER_OTHER)));
}
static void _V10_Dget__foreign__decoder_D236_k593(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k593, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1470 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.164.540 1 0))) (##vcore.call-with-values (close _V10_Dget__foreign__decoder_D236_k594) (close _V10_Dget__foreign__decoder_D236_lambda111) (bruijn ##.kk.147.523 30 1)) ((bruijn ##.k.1467 3 0) #f)) ((bruijn ##.k.1467 3 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k594, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_lambda111, self)})),
      VGetArg(statics, 30-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k592(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k592, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.164.540 0 0)) ((bruijn ##.x.615 35 0) (close _V10_Dget__foreign__decoder_D236_k593) 'unsigned-char (##inline ##vcore.car (bruijn ##.expr.164.540 0 0))) ((bruijn ##.k.1467 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 35-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k593, self)})),
      _V0unsigned__char,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k591(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k591, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1468 0 0) ((close _V10_Dget__foreign__decoder_D236_k592) (##inline ##vcore.cdr (bruijn ##.input.148.524 27 0))) ((bruijn ##.k.1467 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dget__foreign__decoder_D236_k592, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 27-1, 0)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k590(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k590, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.input.148.524 26 0)) ((bruijn ##.x.615 33 0) (close _V10_Dget__foreign__decoder_D236_k591) 'const (##inline ##vcore.car (bruijn ##.input.148.524 26 0))) ((bruijn ##.k.1467 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 26-1, 0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k591, self)})),
      _V0const,
      VInlineCar2(runtime,
        VGetArg(statics, 26-1, 0)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k600(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k600, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1461 0 0) (bruijn ##.k.1456 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V10_Dget__foreign__decoder_D236_lambda112(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_lambda112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1462 0 0) (##inline ##vcore.qcons 's8-pointer '(##string ##.string.1774)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0s8__pointer,
        VEncodePointer(&_V10_Dstring_D1774.sym, VPOINTER_OTHER)));
}
static void _V10_Dget__foreign__decoder_D236_k599(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k599, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1459 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.166.542 1 0))) (##vcore.call-with-values (close _V10_Dget__foreign__decoder_D236_k600) (close _V10_Dget__foreign__decoder_D236_lambda112) (bruijn ##.kk.147.523 31 1)) ((bruijn ##.k.1456 3 0) #f)) ((bruijn ##.k.1456 3 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k600, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_lambda112, self)})),
      VGetArg(statics, 31-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k598(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k598, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.166.542 0 0)) ((bruijn ##.x.615 36 0) (close _V10_Dget__foreign__decoder_D236_k599) 'signed-char (##inline ##vcore.car (bruijn ##.expr.166.542 0 0))) ((bruijn ##.k.1456 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k599, self)})),
      _V0signed__char,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k597(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k597, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1457 0 0) ((close _V10_Dget__foreign__decoder_D236_k598) (##inline ##vcore.cdr (bruijn ##.input.148.524 28 0))) ((bruijn ##.k.1456 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dget__foreign__decoder_D236_k598, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 28-1, 0)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k596(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k596, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.input.148.524 27 0)) ((bruijn ##.x.615 34 0) (close _V10_Dget__foreign__decoder_D236_k597) 'const (##inline ##vcore.car (bruijn ##.input.148.524 27 0))) ((bruijn ##.k.1456 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 27-1, 0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k597, self)})),
      _V0const,
      VInlineCar2(runtime,
        VGetArg(statics, 27-1, 0)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_lambda113(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_lambda113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1454 0 0) (##inline ##vcore.qcons 'void-pointer '(##string ##.string.1775)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0void__pointer,
        VEncodePointer(&_V10_Dstring_D1775.sym, VPOINTER_OTHER)));
}
static void _V10_Dget__foreign__decoder_D236_k601(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k601, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1435 28 0) (close _V10_Dget__foreign__decoder_D236_lambda113) (bruijn ##.kk.147.523 28 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 28-1, 0),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_lambda113, self)})),
      VGetArg(statics, 28-1, 1));
}
static void _V10_Dget__foreign__decoder_D236_k595(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k595, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dget__foreign__decoder_D236_k596) (close _V10_Dget__foreign__decoder_D236_k601))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dget__foreign__decoder_D236_k596, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k601, self)})));
}
static void _V10_Dget__foreign__decoder_D236_k589(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k589, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dget__foreign__decoder_D236_k590) (close _V10_Dget__foreign__decoder_D236_k595))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dget__foreign__decoder_D236_k590, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k595, self)})));
}
static void _V10_Dget__foreign__decoder_D236_k583(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k583, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dget__foreign__decoder_D236_k584) (close _V10_Dget__foreign__decoder_D236_k589))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dget__foreign__decoder_D236_k584, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k589, self)})));
}
static void _V10_Dget__foreign__decoder_D236_k577(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k577, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dget__foreign__decoder_D236_k578) (close _V10_Dget__foreign__decoder_D236_k583))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dget__foreign__decoder_D236_k578, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k583, self)})));
}
static void _V10_Dget__foreign__decoder_D236_k571(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k571, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dget__foreign__decoder_D236_k572) (close _V10_Dget__foreign__decoder_D236_k577))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dget__foreign__decoder_D236_k572, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k577, self)})));
}
static void _V10_Dget__foreign__decoder_D236_k565(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k565, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dget__foreign__decoder_D236_k566) (close _V10_Dget__foreign__decoder_D236_k571))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dget__foreign__decoder_D236_k566, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k571, self)})));
}
static void _V10_Dget__foreign__decoder_D236_k559(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k559, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dget__foreign__decoder_D236_k560) (close _V10_Dget__foreign__decoder_D236_k565))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dget__foreign__decoder_D236_k560, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k565, self)})));
}
static void _V10_Dget__foreign__decoder_D236_k556(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k556, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dget__foreign__decoder_D236_k557) (close _V10_Dget__foreign__decoder_D236_k559))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dget__foreign__decoder_D236_k557, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k559, self)})));
}
static void _V10_Dget__foreign__decoder_D236_k555(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k555, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.615 25 0) (close _V10_Dget__foreign__decoder_D236_k556) 'signed-char (bruijn ##.input.148.524 18 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k556, self)})),
      _V0signed__char,
      VGetArg(statics, 18-1, 0));
}
static void _V10_Dget__foreign__decoder_D236_k552(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k552, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dget__foreign__decoder_D236_k553) (close _V10_Dget__foreign__decoder_D236_k555))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dget__foreign__decoder_D236_k553, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k555, self)})));
}
static void _V10_Dget__foreign__decoder_D236_k551(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k551, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.615 23 0) (close _V10_Dget__foreign__decoder_D236_k552) 'unsigned-char (bruijn ##.input.148.524 16 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k552, self)})),
      _V0unsigned__char,
      VGetArg(statics, 16-1, 0));
}
static void _V10_Dget__foreign__decoder_D236_k548(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k548, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dget__foreign__decoder_D236_k549) (close _V10_Dget__foreign__decoder_D236_k551))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dget__foreign__decoder_D236_k549, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k551, self)})));
}
static void _V10_Dget__foreign__decoder_D236_k547(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k547, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.615 21 0) (close _V10_Dget__foreign__decoder_D236_k548) 'short (bruijn ##.input.148.524 14 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k548, self)})),
      _V0short,
      VGetArg(statics, 14-1, 0));
}
static void _V10_Dget__foreign__decoder_D236_k544(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k544, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dget__foreign__decoder_D236_k545) (close _V10_Dget__foreign__decoder_D236_k547))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dget__foreign__decoder_D236_k545, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k547, self)})));
}
static void _V10_Dget__foreign__decoder_D236_k543(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k543, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.615 19 0) (close _V10_Dget__foreign__decoder_D236_k544) 'unsigned-short (bruijn ##.input.148.524 12 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k544, self)})),
      _V0unsigned__short,
      VGetArg(statics, 12-1, 0));
}
static void _V10_Dget__foreign__decoder_D236_k540(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k540, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dget__foreign__decoder_D236_k541) (close _V10_Dget__foreign__decoder_D236_k543))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dget__foreign__decoder_D236_k541, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k543, self)})));
}
static void _V10_Dget__foreign__decoder_D236_k539(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k539, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.615 17 0) (close _V10_Dget__foreign__decoder_D236_k540) 'int (bruijn ##.input.148.524 10 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k540, self)})),
      _V0int,
      VGetArg(statics, 10-1, 0));
}
static void _V10_Dget__foreign__decoder_D236_k536(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k536, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dget__foreign__decoder_D236_k537) (close _V10_Dget__foreign__decoder_D236_k539))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dget__foreign__decoder_D236_k537, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k539, self)})));
}
static void _V10_Dget__foreign__decoder_D236_k535(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k535, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.615 15 0) (close _V10_Dget__foreign__decoder_D236_k536) 'double (bruijn ##.input.148.524 8 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k536, self)})),
      _V0double,
      VGetArg(statics, 8-1, 0));
}
static void _V10_Dget__foreign__decoder_D236_k532(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k532, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dget__foreign__decoder_D236_k533) (close _V10_Dget__foreign__decoder_D236_k535))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dget__foreign__decoder_D236_k533, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k535, self)})));
}
static void _V10_Dget__foreign__decoder_D236_k531(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k531, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.615 13 0) (close _V10_Dget__foreign__decoder_D236_k532) 'float (bruijn ##.input.148.524 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k532, self)})),
      _V0float,
      VGetArg(statics, 6-1, 0));
}
static void _V10_Dget__foreign__decoder_D236_k528(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k528, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dget__foreign__decoder_D236_k529) (close _V10_Dget__foreign__decoder_D236_k531))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dget__foreign__decoder_D236_k529, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k531, self)})));
}
static void _V10_Dget__foreign__decoder_D236_k527(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k527, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.615 11 0) (close _V10_Dget__foreign__decoder_D236_k528) 'void (bruijn ##.input.148.524 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k528, self)})),
      _V0void,
      statics->up->up->up->vars[0]);
}
static void _V10_Dget__foreign__decoder_D236_k521(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k521, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dget__foreign__decoder_D236_k522) (close _V10_Dget__foreign__decoder_D236_k527))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dget__foreign__decoder_D236_k522, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k527, self)})));
}
static void _V10_Dget__foreign__decoder_D236_k515(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k515, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dget__foreign__decoder_D236_k516) (close _V10_Dget__foreign__decoder_D236_k521))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dget__foreign__decoder_D236_k516, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k521, self)})));
}
static void _V10_Dget__foreign__decoder_D236_k512(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k512, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dget__foreign__decoder_D236_k513) (close _V10_Dget__foreign__decoder_D236_k515))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dget__foreign__decoder_D236_k513, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k515, self)})));
}
static void _V10_Dget__foreign__decoder_D236_k511(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k511, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.615 7 0) (close _V10_Dget__foreign__decoder_D236_k512) 'char (bruijn ##.input.148.524 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k512, self)})),
      _V0char,
      _var0);
}
static void _V10_Dget__foreign__decoder_D236_lambda94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_lambda94, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.x.603 18 0) (close _V10_Dget__foreign__decoder_D236_k511) (bruijn ##.type.522 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k511, self)})),
      statics->up->up->vars[1]);
}
static void _V10_Dget__foreign__decoder_D236_k510(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k510, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1434 0 0) (##vcore.call/cc (bruijn ##.k.1433 2 0) (close _V10_Dget__foreign__decoder_D236_lambda94)) ((bruijn ##.x.604 16 0) (bruijn ##.k.1433 2 0) (bruijn ##.type.522 2 1) (##inline ##vcore.qcons (##inline ##vcore.qcons '_Bool '(##string ##.string.1776)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'char '(##string ##.string.1777)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'signed-char '(##string ##.string.1778)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'unsigned-char '(##string ##.string.1779)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'short '(##string ##.string.1780)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'unsigned-short '(##string ##.string.1781)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'int '(##string ##.string.1782)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'unsigned-int '(##string ##.string.1782)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'long '(##string ##.string.1782)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'unsigned-long '(##string ##.string.1782)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'long-long '(##string ##.string.1782)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'unsigned-long-long '(##string ##.string.1782)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'double '(##string ##.string.1783)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'float '(##string ##.string.1783)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'VWORD '(##string ##.string.1784)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'c-string '(##string ##.string.1764)) '()))))))))))))))))))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->up->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_lambda94, self)})));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 3,
      statics->up->vars[0],
      statics->up->vars[1],
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0_UBool,
        VEncodePointer(&_V10_Dstring_D1776.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0char,
        VEncodePointer(&_V10_Dstring_D1777.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0signed__char,
        VEncodePointer(&_V10_Dstring_D1778.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unsigned__char,
        VEncodePointer(&_V10_Dstring_D1779.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0short,
        VEncodePointer(&_V10_Dstring_D1780.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unsigned__short,
        VEncodePointer(&_V10_Dstring_D1781.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0int,
        VEncodePointer(&_V10_Dstring_D1782.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unsigned__int,
        VEncodePointer(&_V10_Dstring_D1782.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0long,
        VEncodePointer(&_V10_Dstring_D1782.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unsigned__long,
        VEncodePointer(&_V10_Dstring_D1782.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0long__long,
        VEncodePointer(&_V10_Dstring_D1782.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unsigned__long__long,
        VEncodePointer(&_V10_Dstring_D1782.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0double,
        VEncodePointer(&_V10_Dstring_D1783.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0float,
        VEncodePointer(&_V10_Dstring_D1783.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0VWORD,
        VEncodePointer(&_V10_Dstring_D1784.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0c__string,
        VEncodePointer(&_V10_Dstring_D1764.sym, VPOINTER_OTHER)),
        VNULL)))))))))))))))));
}
}
static void _V10_Dget__foreign__decoder_D236_k507(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k507, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dget__foreign__decoder_D236_k508) (close _V10_Dget__foreign__decoder_D236_k510))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dget__foreign__decoder_D236_k508, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k510, self)})));
}
static void _V10_Dget__foreign__decoder_D236_lambda93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_lambda93, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.x.612 6 0) (close _V10_Dget__foreign__decoder_D236_k507) (bruijn ##.type.522 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k507, self)})),
      _var1);
}
static void _V10_Dloop_D558_k611(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D558_k611, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.176.557 4 1) (bruijn ##.k.1646 1 0) (bruijn ##.expr.178.559 2 1) (bruijn ##.x.1647 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      statics->vars[0],
      statics->up->vars[1],
      _var0);
}
static void _V10_Dloop_D558_k610(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D558_k610, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.178.559 1 1))) ((bruijn ##.x.614 18 0) (close _V10_Dloop_D558_k611) (bruijn ##.args.175.560 1 2)) ((bruijn ##.k.1646 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D558_k611, self)})),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D558_k614(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D558_k614, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.176.557 7 1) (bruijn ##.k.1640 2 0) (bruijn ##.expr.178.559 5 1) (bruijn ##.x.1642 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      statics->up->vars[0],
      VGetArg(statics, 5-1, 1),
      _var0);
}
static void _V10_Dloop_D558_k613(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D558_k613, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.614 21 0) (close _V10_Dloop_D558_k614) (bruijn ##.args.175.560 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D558_k614, self)})),
      statics->up->up->up->vars[2]);
}
static void _V10_Dloop_D558_lambda120(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D558_lambda120, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.kk.177.561 0 1) (close _V10_Dloop_D558_k613) (##inline ##vcore.cdr (bruijn ##.expr.178.559 3 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.178.559 3 1)) (bruijn ##.args.175.560 3 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var1), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D558_k613, self)})),
      VInlineCdr2(runtime,
        statics->up->up->vars[1]),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[1]),
        statics->up->up->vars[2]));
}
static void _V10_Dloop_D558_lambda119(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D558_lambda119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1639 0 0) (close _V10_Dloop_D558_lambda120))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D558_lambda120, self)})));
}
static void _V10_Dloop_D558_k612(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D558_k612, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1637 1 0) (close _V10_Dloop_D558_lambda119) (bruijn ##.loop.558 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D558_lambda119, self)})),
      statics->up->vars[0]);
}
static void _V10_Dloop_D558_lambda118(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D558_lambda118, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V10_Dloop_D558_k610) (close _V10_Dloop_D558_k612))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D558_k610, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D558_k612, self)})));
}
static void _V10_Dprint__foreign__function_D237_lambda117(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_lambda117, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D558_lambda118)) ((bruijn ##.loop.558 0 0) (bruijn ##.k.1636 1 0) (##inline ##vcore.cdr (bruijn ##.expr.173.554 4 0)) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    VEnv * self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D558_lambda118, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->vars[0],
      VInlineCdr2(runtime,
        statics->up->up->up->vars[0]),
      VNULL);
    }
}
static void _V10_Dprint__foreign__function_D237_lambda116(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_lambda116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1635 0 0) (close _V10_Dprint__foreign__function_D237_lambda117))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_lambda117, self)})));
}
static void _V10_Dprint__foreign__function_D237_k615(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k615, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1651 0 0) (bruijn ##.k.1649 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
static void _V10_Dprint__arg_D567_k620(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__arg_D567_k620, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.607 29 0) (bruijn ##.k.1655 2 0) (##string ##.string.1785) (bruijn ##.x.1656 0 0) (bruijn ##.argname.569 2 2) (bruijn ##.name.555 9 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 5,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1785.sym, VPOINTER_OTHER),
      _var0,
      statics->up->vars[2],
      VGetArg(statics, 9-1, 0));
}
static void _V10_Dprint__arg_D567_k619(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__arg_D567_k619, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.609 26 0) (close _V10_Dprint__arg_D567_k620) (bruijn ##.x.1657 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__arg_D567_k620, self)})),
      _var0);
}
static void _V10_Dprint__arg_D567_lambda123(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__arg_D567_lambda123, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.get-foreign-decoder.236 17 16) (close _V10_Dprint__arg_D567_k619) (bruijn ##.arg.568 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 16)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__arg_D567_k619, self)})),
      _var1);
}
static void _V10_Dprint__foreign__function_D237_k626(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k626, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.607 32 0) (bruijn ##.k.1679 4 0) (##string ##.string.1786))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 2,
      statics->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1786.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__foreign__function_D237_lambda124(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_lambda124, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.x.607 32 0) (bruijn ##.k.1682 0 0) (##string ##.string.1787) (bruijn ##.e.570 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1787.sym, VPOINTER_OTHER),
      _var1);
}
static void _V10_Dprint__foreign__function_D237_k625(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k625, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.610 28 0) (close _V10_Dprint__foreign__function_D237_k626) (close _V10_Dprint__foreign__function_D237_lambda124) (bruijn ##.x.1654 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_k626, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_lambda124, self)})),
      VGetArg(statics, 6-1, 0));
}
static void _V10_Dprint__foreign__function_D237_k624(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k624, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.607 30 0) (close _V10_Dprint__foreign__function_D237_k625) (##string ##.string.1788) (bruijn ##.name.555 10 0) (bruijn ##.name.555 10 0) (bruijn ##.x.1683 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 5,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_k625, self)})),
      VEncodePointer(&_V10_Dstring_D1788.sym, VPOINTER_OTHER),
      VGetArg(statics, 10-1, 0),
      VGetArg(statics, 10-1, 0),
      _var0);
}
static void _V10_Dprint__foreign__function_D237_k623(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k623, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.613 23 0) (close _V10_Dprint__foreign__function_D237_k624) 1 (bruijn ##.x.1684 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_k624, self)})),
      VEncodeInt(1l),
      _var0);
}
static void _V10_Dprint__foreign__function_D237_k638(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k638, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.607 40 0) (bruijn ##.k.1679 12 0) (##string ##.string.1786))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 40-1, 0)), 2,
      VGetArg(statics, 12-1, 0),
      VEncodePointer(&_V10_Dstring_D1786.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__foreign__function_D237_lambda125(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_lambda125, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.x.607 40 0) (bruijn ##.k.1691 0 0) (##string ##.string.1787) (bruijn ##.e.572 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 40-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1787.sym, VPOINTER_OTHER),
      _var1);
}
static void _V10_Dprint__foreign__function_D237_k637(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k637, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.610 36 0) (close _V10_Dprint__foreign__function_D237_k638) (close _V10_Dprint__foreign__function_D237_lambda125) (bruijn ##.x.1654 14 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_k638, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_lambda125, self)})),
      VGetArg(statics, 14-1, 0));
}
static void _V10_Dprint__foreign__function_D237_k636(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k636, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.607 38 0) (close _V10_Dprint__foreign__function_D237_k637) (##string ##.string.1789) (bruijn ##.x.1653 15 0) (bruijn ##.x.1692 2 0) (bruijn ##.x.1693 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 38-1, 0)), 5,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_k637, self)})),
      VEncodePointer(&_V10_Dstring_D1789.sym, VPOINTER_OTHER),
      VGetArg(statics, 15-1, 0),
      statics->up->vars[0],
      _var0);
}
static void _V10_Dprint__foreign__function_D237_k635(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k635, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.613 31 0) (close _V10_Dprint__foreign__function_D237_k636) 1 (bruijn ##.x.1694 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_k636, self)})),
      VEncodeInt(1l),
      _var0);
}
static void _V10_Dprint__foreign__function_D237_k634(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k634, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.606 37 0) (close _V10_Dprint__foreign__function_D237_k635) (bruijn ##.args.564 15 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_k635, self)})),
      VGetArg(statics, 15-1, 2));
}
static void _V10_Dprint__foreign__function_D237_k633(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k633, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.613 29 0) (close _V10_Dprint__foreign__function_D237_k634) 1 (bruijn ##.x.1695 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_k634, self)})),
      VEncodeInt(1l),
      _var0);
}
static void _V10_Dprint__foreign__function_D237_k632(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k632, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.606 35 0) (close _V10_Dprint__foreign__function_D237_k633) (bruijn ##.args.564 13 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 35-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_k633, self)})),
      VGetArg(statics, 13-1, 2));
}
static void _V10_Dprint__foreign__function_D237_k631(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k631, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.607 33 0) (close _V10_Dprint__foreign__function_D237_k632) (##string ##.string.1790) (bruijn ##.x.1653 10 0) (bruijn ##.x.1696 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_k632, self)})),
      VEncodePointer(&_V10_Dstring_D1790.sym, VPOINTER_OTHER),
      VGetArg(statics, 10-1, 0),
      _var0);
}
static void _V10_Dprint__foreign__function_D237_k630(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k630, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.613 26 0) (close _V10_Dprint__foreign__function_D237_k631) 1 (bruijn ##.x.1697 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_k631, self)})),
      VEncodeInt(1l),
      _var0);
}
static void _V10_Dprint__foreign__function_D237_k629(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k629, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.606 32 0) (close _V10_Dprint__foreign__function_D237_k630) (bruijn ##.args.564 10 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_k630, self)})),
      VGetArg(statics, 10-1, 2));
}
static void _V10_Dprint__foreign__function_D237_k628(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k628, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.607 30 0) (close _V10_Dprint__foreign__function_D237_k629) (##string ##.string.1786))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_k629, self)})),
      VEncodePointer(&_V10_Dstring_D1786.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__foreign__function_D237_lambda126(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_lambda126, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.x.607 30 0) (bruijn ##.k.1698 0 0) (##string ##.string.1791) (bruijn ##.e.571 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1791.sym, VPOINTER_OTHER),
      _var1);
}
static void _V10_Dprint__foreign__function_D237_k627(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k627, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.610 26 0) (close _V10_Dprint__foreign__function_D237_k628) (close _V10_Dprint__foreign__function_D237_lambda126) (bruijn ##.x.1654 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_k628, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_lambda126, self)})),
      statics->up->up->up->vars[0]);
}
static void _V10_Dprint__foreign__function_D237_k622(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k622, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.purec?.543 17 1) ((bruijn ##.x.606 29 0) (close _V10_Dprint__foreign__function_D237_k623) (bruijn ##.args.564 7 2)) ((bruijn ##.x.607 28 0) (close _V10_Dprint__foreign__function_D237_k627) (##string ##.string.1792) (bruijn ##.name.555 8 0)))
if(VDecodeBool(
VGetArg(statics, 17-1, 1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_k623, self)})),
      VGetArg(statics, 7-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_k627, self)})),
      VEncodePointer(&_V10_Dstring_D1792.sym, VPOINTER_OTHER),
      VGetArg(statics, 8-1, 0));
}
}
static void _V10_Dprint__foreign__function_D237_k643(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k643, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.607 32 0) (bruijn ##.k.1676 2 0) (##string ##.string.1794) (bruijn ##.x.1677 0 0) (bruijn ##.name.555 12 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 4,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1794.sym, VPOINTER_OTHER),
      _var0,
      VGetArg(statics, 12-1, 0));
}
static void _V10_Dprint__foreign__function_D237_k642(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k642, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.609 29 0) (close _V10_Dprint__foreign__function_D237_k643) (bruijn ##.x.1678 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_k643, self)})),
      _var0);
}
static void _V10_Dprint__foreign__function_D237_k641(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k641, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1675 1 0) ((bruijn ##.x.607 30 0) (bruijn ##.k.1676 0 0) (##string ##.string.1793) (bruijn ##.name.555 10 0)) ((bruijn ##.get-foreign-encoder.235 20 15) (close _V10_Dprint__foreign__function_D237_k642) (bruijn ##.ret.553 12 0)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1793.sym, VPOINTER_OTHER),
      VGetArg(statics, 10-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 15)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_k642, self)})),
      VGetArg(statics, 12-1, 0));
}
}
static void _V10_Dprint__foreign__function_D237_k652(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k652, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.print-arg.567 13 0) (bruijn ##.k.1669 1 0) (bruijn ##.arg.573 1 1) (bruijn ##.argname.574 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 3,
      statics->vars[0],
      statics->vars[1],
      statics->vars[2]);
}
static void _V10_Dprint__foreign__function_D237_lambda127(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_lambda127, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.x.607 38 0) (close _V10_Dprint__foreign__function_D237_k652) (##string ##.string.1795))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 38-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_k652, self)})),
      VEncodePointer(&_V10_Dstring_D1795.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__foreign__function_D237_k651(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k651, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.610 34 0) (bruijn ##.k.1667 5 0) (close _V10_Dprint__foreign__function_D237_lambda127) (bruijn ##.x.1671 1 0) (bruijn ##.x.1672 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 4,
      VGetArg(statics, 5-1, 0),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_lambda127, self)})),
      statics->vars[0],
      _var0);
}
static void _V10_Dprint__foreign__function_D237_k650(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k650, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.609 34 0) (close _V10_Dprint__foreign__function_D237_k651) (bruijn ##.x.1654 11 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_k651, self)})),
      VGetArg(statics, 11-1, 0));
}
static void _V10_Dprint__foreign__function_D237_k649(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k649, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.609 33 0) (close _V10_Dprint__foreign__function_D237_k650) (bruijn ##.args.564 14 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_k650, self)})),
      VGetArg(statics, 14-1, 2));
}
static void _V10_Dprint__foreign__function_D237_k648(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k648, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.print-arg.567 8 0) (close _V10_Dprint__foreign__function_D237_k649) (bruijn ##.x.1673 1 0) (bruijn ##.x.1674 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_k649, self)})),
      statics->vars[0],
      _var0);
}
static void _V10_Dprint__foreign__function_D237_k647(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k647, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.611 29 0) (close _V10_Dprint__foreign__function_D237_k648) (bruijn ##.x.1654 8 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_k648, self)})),
      VGetArg(statics, 8-1, 0));
}
static void _V10_Dprint__foreign__function_D237_k646(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k646, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1666 1 0) ((bruijn ##.x.611 28 0) (close _V10_Dprint__foreign__function_D237_k647) (bruijn ##.args.564 11 2)) ((bruijn ##.k.1667 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_k647, self)})),
      VGetArg(statics, 11-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__foreign__function_D237_k656(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k656, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1664 1 0) ((bruijn ##.x.607 35 0) (bruijn ##.k.1665 0 0) (##string ##.string.1796)) ((bruijn ##.x.607 35 0) (bruijn ##.k.1665 0 0) (##string ##.string.1797)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 35-1, 0)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D1796.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 35-1, 0)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D1797.sym, VPOINTER_OTHER));
}
}
static void _V10_Dprint__foreign__function_D237_k657(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k657, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.607 35 0) (bruijn ##.k.1652 13 0) (##string ##.string.1798))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 35-1, 0)), 2,
      VGetArg(statics, 13-1, 0),
      VEncodePointer(&_V10_Dstring_D1798.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__foreign__function_D237_k655(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k655, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__foreign__function_D237_k656) (close _V10_Dprint__foreign__function_D237_k657))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__foreign__function_D237_k656, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_k657, self)})));
}
static void _V10_Dprint__foreign__function_D237_k654(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k654, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.608 32 0) (close _V10_Dprint__foreign__function_D237_k655) (bruijn ##.ret.553 15 0) 'void)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_k655, self)})),
      VGetArg(statics, 15-1, 0),
      _V0void);
}
static void _V10_Dprint__foreign__function_D237_k653(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k653, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.607 32 0) (close _V10_Dprint__foreign__function_D237_k654) (##string ##.string.1799))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_k654, self)})),
      VEncodePointer(&_V10_Dstring_D1799.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__foreign__function_D237_k645(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k645, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__foreign__function_D237_k646) (close _V10_Dprint__foreign__function_D237_k653))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__foreign__function_D237_k646, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_k653, self)})));
}
static void _V10_Dprint__foreign__function_D237_k644(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k644, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.612 25 0) (close _V10_Dprint__foreign__function_D237_k645) (bruijn ##.args.564 9 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_k645, self)})),
      VGetArg(statics, 9-1, 2));
}
static void _V10_Dprint__foreign__function_D237_k640(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k640, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__foreign__function_D237_k641) (close _V10_Dprint__foreign__function_D237_k644))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__foreign__function_D237_k641, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_k644, self)})));
}
static void _V10_Dprint__foreign__function_D237_k639(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k639, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.608 27 0) (close _V10_Dprint__foreign__function_D237_k640) (bruijn ##.ret.553 10 0) 'void)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_k640, self)})),
      VGetArg(statics, 10-1, 0),
      _V0void);
}
static void _V10_Dprint__foreign__function_D237_k621(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k621, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__foreign__function_D237_k622) (close _V10_Dprint__foreign__function_D237_k639))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__foreign__function_D237_k622, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_k639, self)})));
}
static void _V10_Dprint__foreign__function_D237_k618(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k618, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close _V10_Dprint__arg_D567_lambda123)) ((bruijn ##.x.607 26 0) (close _V10_Dprint__foreign__function_D237_k621) (##string ##.string.1800) (##inline ##vcore.car (bruijn ##.expr.171.550 10 0))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    VEnv * self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__arg_D567_lambda123, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_k621, self)})),
      VEncodePointer(&_V10_Dstring_D1800.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        VGetArg(statics, 10-1, 0)));
    }
}
static void _V10_Dprint__foreign__function_D237_k617(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k617, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.605 26 0) (close _V10_Dprint__foreign__function_D237_k618) (bruijn ##.x.1699 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_k618, self)})),
      _var0);
}
static void _V10_Dprint__foreign__function_D237_k616(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k616, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.606 24 0) (close _V10_Dprint__foreign__function_D237_k617) (bruijn ##.args.564 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_k617, self)})),
      statics->up->vars[2]);
}
static void _V10_Dprint__foreign__function_D237_lambda122(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_lambda122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.mangle-foreign-function.234 12 14) (close _V10_Dprint__foreign__function_D237_k616) (bruijn ##.name.555 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 14)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_k616, self)})),
      statics->up->vars[0]);
}
static void _V10_Dprint__foreign__function_D237_lambda121(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_lambda121, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.563 0 1)) (##vcore.call-with-values (close _V10_Dprint__foreign__function_D237_k615) (close _V10_Dprint__foreign__function_D237_lambda122) (bruijn ##.kk.167.545 9 1)) ((bruijn ##.k.1649 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_k615, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_lambda122, self)})),
      VGetArg(statics, 9-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__foreign__function_D237_k609(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k609, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1629 7 0) (close _V10_Dprint__foreign__function_D237_lambda116) (close _V10_Dprint__foreign__function_D237_lambda121))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 7-1, 0),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_lambda116, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_lambda121, self)})));
}
static void _V10_Dprint__foreign__function_D237_k608(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k608, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.173.554 0 0)) ((close _V10_Dprint__foreign__function_D237_k609) (##inline ##vcore.car (bruijn ##.expr.173.554 0 0))) ((bruijn ##.k.1629 6 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__foreign__function_D237_k609, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__foreign__function_D237_k607(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k607, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__foreign__function_D237_k608) (##inline ##vcore.cdr (bruijn ##.expr.172.552 1 0)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__foreign__function_D237_k608, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
static void _V10_Dprint__foreign__function_D237_k606(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k606, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.172.552 0 0)) ((close _V10_Dprint__foreign__function_D237_k607) (##inline ##vcore.car (bruijn ##.expr.172.552 0 0))) ((bruijn ##.k.1629 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__foreign__function_D237_k607, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__foreign__function_D237_k605(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k605, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.171.550 0 0)) ((close _V10_Dprint__foreign__function_D237_k606) (##inline ##vcore.cdr (bruijn ##.expr.171.550 0 0))) ((bruijn ##.k.1629 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__foreign__function_D237_k606, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__foreign__function_D237_k604(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k604, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.170.548 0 0)) ((close _V10_Dprint__foreign__function_D237_k605) (##inline ##vcore.cdr (bruijn ##.expr.170.548 0 0))) ((bruijn ##.k.1629 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__foreign__function_D237_k605, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__foreign__function_D237_k603(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k603, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1630 0 0) ((close _V10_Dprint__foreign__function_D237_k604) (##inline ##vcore.cdr (bruijn ##.expr.544 3 2))) ((bruijn ##.k.1629 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__foreign__function_D237_k604, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__foreign__function_D237_k602(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k602, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.544 2 2)) ((bruijn ##.x.615 5 0) (close _V10_Dprint__foreign__function_D237_k603) '##foreign.function (##inline ##vcore.car (bruijn ##.expr.544 2 2))) ((bruijn ##.k.1629 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_k603, self)})),
      _V10foreign_Dfunction,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__foreign__function_D237_k658(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k658, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.616 4 0) (bruijn ##.k.1626 1 0) (##string ##.string.1721))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 2,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1721.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__foreign__function_D237_lambda115(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_lambda115, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Dprint__foreign__function_D237_k602) (close _V10_Dprint__foreign__function_D237_k658))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__foreign__function_D237_k602, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_k658, self)})));
}
static void _V10_Dprint__foreign__function_D237_lambda114(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_lambda114, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call/cc (bruijn ##.k.1625 0 0) (close _V10_Dprint__foreign__function_D237_lambda115))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_lambda115, self)})));
}
static void _V0vanity_V0compiler_V0ffi_V20_k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 18 ((close _V10_Dreduce__declare_D220_lambda2) (close _V10_Dfind__typedef_D221_lambda25) (close _V10_Dreduce__type_D222_lambda27) (close _V10_Dunwrap__typedef_D223_lambda46) (close _V10_Dunwrap__function_D224_lambda50) (close _V10_Dunwrap__enums_D225_lambda55) (close _V10_Dunwrap__declares_D226_lambda58) (close _V10_Dtable___Gdefines_D227_lambda63) (close _V10_Ddeep__copy_D228_lambda73) (close _V10_Dvalidate__foreign__function_D229_lambda74) (close _V10_Dfind__file_D230_lambda84) (close _V10_Dget__install__root_D231_lambda85) (close _V10_Dmake__preprocess__command_D232_lambda86) (close _V10_Dresolve__foreign__import_D233_lambda87) (close _V10_Dmangle__foreign__function_D234_lambda91) (close _V10_Dget__foreign__encoder_D235_lambda92) (close _V10_Dget__foreign__decoder_D236_lambda93) (close _V10_Dprint__foreign__function_D237_lambda114)) ((bruijn ##.k.576 46 0) (##inline ##vcore.cons (##inline ##vcore.cons 'mangle-foreign-function (bruijn ##.mangle-foreign-function.234 0 14)) (##inline ##vcore.cons (##inline ##vcore.cons 'validate-foreign-function (bruijn ##.validate-foreign-function.229 0 9)) (##inline ##vcore.cons (##inline ##vcore.cons 'print-foreign-function (bruijn ##.print-foreign-function.237 0 17)) (##inline ##vcore.cons (##inline ##vcore.cons 'resolve-foreign-import (bruijn ##.resolve-foreign-import.233 0 13)) (##inline ##vcore.cons (##inline ##vcore.cons 'get-foreign-encoder (bruijn ##.get-foreign-encoder.235 0 15)) (##inline ##vcore.cons (##inline ##vcore.cons 'get-foreign-decoder (bruijn ##.get-foreign-decoder.236 0 16)) '()))))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[18]; } container;
    VEnv * self = &container.self;
    VInitEnv(self, 18, 18, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare_D220_lambda2, self)}));
    self->vars[1] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__typedef_D221_lambda25, self)}));
    self->vars[2] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__type_D222_lambda27, self)}));
    self->vars[3] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__typedef_D223_lambda46, self)}));
    self->vars[4] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__function_D224_lambda50, self)}));
    self->vars[5] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__enums_D225_lambda55, self)}));
    self->vars[6] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__declares_D226_lambda58, self)}));
    self->vars[7] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D227_lambda63, self)}));
    self->vars[8] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddeep__copy_D228_lambda73, self)}));
    self->vars[9] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D229_lambda74, self)}));
    self->vars[10] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__file_D230_lambda84, self)}));
    self->vars[11] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__install__root_D231_lambda85, self)}));
    self->vars[12] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmake__preprocess__command_D232_lambda86, self)}));
    self->vars[13] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D233_lambda87, self)}));
    self->vars[14] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmangle__foreign__function_D234_lambda91, self)}));
    self->vars[15] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__encoder_D235_lambda92, self)}));
    self->vars[16] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_lambda93, self)}));
    self->vars[17] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_lambda114, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 46-1, 0)), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0mangle__foreign__function,
        self->vars[14]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0validate__foreign__function,
        self->vars[9]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0print__foreign__function,
        self->vars[17]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0resolve__foreign__import,
        self->vars[13]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0get__foreign__encoder,
        self->vars[15]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0get__foreign__decoder,
        self->vars[16]),
        VNULL)))))));
    }
}
static void _V0vanity_V0compiler_V0ffi_V20_k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 39 0) (close _V0vanity_V0compiler_V0ffi_V20_k45) 'error)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 39-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k45, self)})),
      _V0error);
}
static void _V0vanity_V0compiler_V0ffi_V20_k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 38 0) (close _V0vanity_V0compiler_V0ffi_V20_k44) 'equal?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 38-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k44, self)})),
      _V0equal_Q);
}
static void _V0vanity_V0compiler_V0ffi_V20_k42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 37 0) (close _V0vanity_V0compiler_V0ffi_V20_k43) 'reverse)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k43, self)})),
      _V0reverse);
}
static void _V0vanity_V0compiler_V0ffi_V20_k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 36 0) (close _V0vanity_V0compiler_V0ffi_V20_k42) '+)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k42, self)})),
      _V0_P);
}
static void _V0vanity_V0compiler_V0ffi_V20_k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 35 0) (close _V0vanity_V0compiler_V0ffi_V20_k41) 'pair?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 35-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k41, self)})),
      _V0pair_Q);
}
static void _V0vanity_V0compiler_V0ffi_V20_k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 34 0) (close _V0vanity_V0compiler_V0ffi_V20_k40) 'car)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k40, self)})),
      _V0car);
}
static void _V0vanity_V0compiler_V0ffi_V20_k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 33 0) (close _V0vanity_V0compiler_V0ffi_V20_k39) 'for-each)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k39, self)})),
      _V0for__each);
}
static void _V0vanity_V0compiler_V0ffi_V20_k37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 32 0) (close _V0vanity_V0compiler_V0ffi_V20_k38) 'cdr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k38, self)})),
      _V0cdr);
}
static void _V0vanity_V0compiler_V0ffi_V20_k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 31 0) (close _V0vanity_V0compiler_V0ffi_V20_k37) 'eqv?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k37, self)})),
      _V0eqv_Q);
}
static void _V0vanity_V0compiler_V0ffi_V20_k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 30 0) (close _V0vanity_V0compiler_V0ffi_V20_k36) 'printf)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k36, self)})),
      _V0printf);
}
static void _V0vanity_V0compiler_V0ffi_V20_k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 29 0) (close _V0vanity_V0compiler_V0ffi_V20_k35) 'length)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k35, self)})),
      _V0length);
}
static void _V0vanity_V0compiler_V0ffi_V20_k33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 28 0) (close _V0vanity_V0compiler_V0ffi_V20_k34) 'iota)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k34, self)})),
      _V0iota);
}
static void _V0vanity_V0compiler_V0ffi_V20_k32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 27 0) (close _V0vanity_V0compiler_V0ffi_V20_k33) 'assv)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k33, self)})),
      _V0assv);
}
static void _V0vanity_V0compiler_V0ffi_V20_k31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 26 0) (close _V0vanity_V0compiler_V0ffi_V20_k32) 'cadr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k32, self)})),
      _V0cadr);
}
static void _V0vanity_V0compiler_V0ffi_V20_k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 25 0) (close _V0vanity_V0compiler_V0ffi_V20_k31) 'sprintf)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k31, self)})),
      _V0sprintf);
}
static void _V0vanity_V0compiler_V0ffi_V20_k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 24 0) (close _V0vanity_V0compiler_V0ffi_V20_k30) 'compiler-error)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k30, self)})),
      _V0compiler__error);
}
static void _V0vanity_V0compiler_V0ffi_V20_k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 23 0) (close _V0vanity_V0compiler_V0ffi_V20_k29) 'string?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k29, self)})),
      _V0string_Q);
}
static void _V0vanity_V0compiler_V0ffi_V20_k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 22 0) (close _V0vanity_V0compiler_V0ffi_V20_k28) 'not)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k28, self)})),
      _V0not);
}
static void _V0vanity_V0compiler_V0ffi_V20_k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 21 0) (close _V0vanity_V0compiler_V0ffi_V20_k27) 'close-port)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k27, self)})),
      _V0close__port);
}
static void _V0vanity_V0compiler_V0ffi_V20_k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 20 0) (close _V0vanity_V0compiler_V0ffi_V20_k26) 'cons)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k26, self)})),
      _V0cons);
}
static void _V0vanity_V0compiler_V0ffi_V20_k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 19 0) (close _V0vanity_V0compiler_V0ffi_V20_k25) 'open-input-process)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k25, self)})),
      _V0open__input__process);
}
static void _V0vanity_V0compiler_V0ffi_V20_k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 18 0) (close _V0vanity_V0compiler_V0ffi_V20_k24) 'gcc-path)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k24, self)})),
      _V0gcc__path);
}
static void _V0vanity_V0compiler_V0ffi_V20_k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 17 0) (close _V0vanity_V0compiler_V0ffi_V20_k23) 'platform)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k23, self)})),
      _V0platform);
}
static void _V0vanity_V0compiler_V0ffi_V20_k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 16 0) (close _V0vanity_V0compiler_V0ffi_V20_k22) 'install-root)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k22, self)})),
      _V0install__root);
}
static void _V0vanity_V0compiler_V0ffi_V20_k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 15 0) (close _V0vanity_V0compiler_V0ffi_V20_k21) 'file-exists?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k21, self)})),
      _V0file__exists_Q);
}
static void _V0vanity_V0compiler_V0ffi_V20_k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 14 0) (close _V0vanity_V0compiler_V0ffi_V20_k20) 'null?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k20, self)})),
      _V0null_Q);
}
static void _V0vanity_V0compiler_V0ffi_V20_k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 13 0) (close _V0vanity_V0compiler_V0ffi_V20_k19) 'cdddr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k19, self)})),
      _V0cdddr);
}
static void _V0vanity_V0compiler_V0ffi_V20_k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 12 0) (close _V0vanity_V0compiler_V0ffi_V20_k18) 'caddr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k18, self)})),
      _V0caddr);
}
static void _V0vanity_V0compiler_V0ffi_V20_k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 11 0) (close _V0vanity_V0compiler_V0ffi_V20_k17) 'cdadr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k17, self)})),
      _V0cdadr);
}
static void _V0vanity_V0compiler_V0ffi_V20_k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 10 0) (close _V0vanity_V0compiler_V0ffi_V20_k16) 'string-copy)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k16, self)})),
      _V0string__copy);
}
static void _V0vanity_V0compiler_V0ffi_V20_k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 9 0) (close _V0vanity_V0compiler_V0ffi_V20_k15) 'symbol->string)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k15, self)})),
      _V0symbol___Gstring);
}
static void _V0vanity_V0compiler_V0ffi_V20_k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 8 0) (close _V0vanity_V0compiler_V0ffi_V20_k14) 'cadar)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k14, self)})),
      _V0cadar);
}
static void _V0vanity_V0compiler_V0ffi_V20_k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 7 0) (close _V0vanity_V0compiler_V0ffi_V20_k13) 'member)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k13, self)})),
      _V0member);
}
static void _V0vanity_V0compiler_V0ffi_V20_k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 6 0) (close _V0vanity_V0compiler_V0ffi_V20_k12) 'caddar)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k12, self)})),
      _V0caddar);
}
static void _V0vanity_V0compiler_V0ffi_V20_k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 5 0) (close _V0vanity_V0compiler_V0ffi_V20_k11) 'caar)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k11, self)})),
      _V0caar);
}
static void _V0vanity_V0compiler_V0ffi_V20_k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 4 0) (close _V0vanity_V0compiler_V0ffi_V20_k10) 'string->symbol)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k10, self)})),
      _V0string___Gsymbol);
}
static void _V0vanity_V0compiler_V0ffi_V20_k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 3 0) (close _V0vanity_V0compiler_V0ffi_V20_k9) 'map)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k9, self)})),
      _V0map);
}
static void _V0vanity_V0compiler_V0ffi_V20_k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 2 0) (close _V0vanity_V0compiler_V0ffi_V20_k8) 'list)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k8, self)})),
      _V0list);
}
static void _V0vanity_V0compiler_V0ffi_V20_k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 1 0) (close _V0vanity_V0compiler_V0ffi_V20_k7) 'symbol?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k7, self)})),
      _V0symbol_Q);
}
static void _V0vanity_V0compiler_V0ffi_V20_k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 0 0) (close _V0vanity_V0compiler_V0ffi_V20_k6) 'memv)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k6, self)})),
      _V0memv);
}
static void _V0vanity_V0compiler_V0ffi_V20_k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.make-import (close _V0vanity_V0compiler_V0ffi_V20_k5) (##string ##.string.1801) (bruijn ##.x.1712 3 0) (bruijn ##.x.1713 2 0) (bruijn ##.x.1714 1 0) (bruijn ##.x.1715 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMakeImport2, 6,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k5, self)})),
      VEncodePointer(&_V10_Dstring_D1801.sym, VPOINTER_OTHER),
      statics->up->up->vars[0],
      statics->up->vars[0],
      statics->vars[0],
      _var0);
}
static void _V0vanity_V0compiler_V0ffi_V20_k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0ffi_V20_k4) (##string ##.string.1802))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k4, self)})),
      VEncodePointer(&_V10_Dstring_D1802.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0ffi_V20_k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0ffi_V20_k3) (##string ##.string.1803))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k3, self)})),
      VEncodePointer(&_V10_Dstring_D1803.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0ffi_V20_k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0ffi_V20_k2) (##string ##.string.1804))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k2, self)})),
      VEncodePointer(&_V10_Dstring_D1804.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0ffi_V20_k1) (##string ##.string.1805))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k1, self)})),
      VEncodePointer(&_V10_Dstring_D1805.sym, VPOINTER_OTHER));
}
VFunc _V0vanity_V0compiler_V0ffi_V20 = (VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda1;
