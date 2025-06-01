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
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1815 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1814 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D1813 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D1812 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "_V0vanity_V0compiler_V0config_V20" };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D1811 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "_V0vanity_V0compiler_V0ffi_V20" };
VWEAK VWORD _V0reverse;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0reverse = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "reverse" };
VWEAK VWORD _V0map;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "map" };
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "error" };
VWEAK VWORD _V0list;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "list" };
VWEAK VWORD _V0caar;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0caar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "caar" };
VWEAK VWORD _V0cadar;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0cadar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "cadar" };
VWEAK VWORD _V0cadr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cadr" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
VWEAK VWORD _V0memv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0memv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "memv" };
VWEAK VWORD _V0caddar;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0caddar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "caddar" };
VWEAK VWORD _V0compiler__error;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0compiler__error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "compiler-error" };
VWEAK VWORD _V0for__each;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0for__each = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "for-each" };
VWEAK VWORD _V0member;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0member = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "member" };
VWEAK VWORD _V0caddr;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0caddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "caddr" };
VWEAK VWORD _V0cdddr;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0cdddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "cdddr" };
VWEAK VWORD _V0cdadr;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0cdadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "cdadr" };
VWEAK VWORD _V0file__exists_Q;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0file__exists_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "file-exists\?" };
VWEAK VWORD _V0sprintf;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0sprintf = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "sprintf" };
VWEAK VWORD _V0install__root;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0install__root = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "install-root" };
VWEAK VWORD _V0gcc__path;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0gcc__path = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "gcc-path" };
VWEAK VWORD _V0platform;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0platform = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "platform" };
VWEAK VWORD _V0close__port;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0close__port = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "close-port" };
VWEAK VWORD _V0assv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0assv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "assv" };
VWEAK VWORD _V0iota;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0iota = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "iota" };
VWEAK VWORD _V0length;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "length" };
VWEAK VWORD _V0printf;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0printf = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "printf" };
VWEAK VWORD _V0get__foreign__decoder;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0get__foreign__decoder = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "get-foreign-decoder" };
VWEAK VWORD _V0get__foreign__encoder;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0get__foreign__encoder = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "get-foreign-encoder" };
VWEAK VWORD _V0resolve__foreign__import;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V0resolve__foreign__import = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "resolve-foreign-import" };
VWEAK VWORD _V0print__foreign__function;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V0print__foreign__function = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "print-foreign-function" };
VWEAK VWORD _V0validate__foreign__function;VWEAK struct { VBlob sym; char bytes[26]; } _VW_V0validate__foreign__function = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 26 }, "validate-foreign-function" };
VWEAK VWORD _V0mangle__foreign__function;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V0mangle__foreign__function = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "mangle-foreign-function" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1810 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "~A;~N" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1809 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "));~N" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D1808 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "  }~N}~N" };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D1807 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "  V_CALL(_k, runtime, _ret);~N" };
static struct { VBlob sym; char bytes[32]; } _V10_Dstring_D1806 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 32 }, "  V_CALL(_k, runtime, VVOID);~N" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1805 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, ", " };
static struct { VBlob sym; char bytes[24]; } _V10_Dstring_D1804 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "    VWORD _ret = ~A(~A(" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D1803 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "(~A(" };
static struct { VBlob sym; char bytes[46]; } _V10_Dstring_D1802 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 46 }, "static void _V30~A_shim(V_CORE_ARGS, VWORD _k" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D1801 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, ", VWORD _arg~A" };
static struct { VBlob sym; char bytes[43]; } _V10_Dstring_D1800 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 43 }, "  V_ARG_CHECK3(runtime, \"~A\", ~A, argc);~N" };
static struct { VBlob sym; char bytes[62]; } _V10_Dstring_D1799 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 62 }, "  V_GC_CHECK2_VARARGS((VFunc)~A, runtime, statics, ~A, ~A, _k" };
static struct { VBlob sym; char bytes[56]; } _V10_Dstring_D1798 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 56 }, "static V_BEGIN_FUNC(_V30~A_shim, \"_V30~A_shim\", ~A, _k " };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D1797 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, ", _arg~A" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1796 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, ") {~N" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D1795 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "~A(runtime, _arg~A, \"~A\")" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1794 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "VCheckedDecodeVWORD2" };
static struct { VBlob sym; char bytes[22]; } _V10_Dstring_D1793 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "VCheckedDecodeNumber2" };
static struct { VBlob sym; char bytes[19]; } _V10_Dstring_D1792 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, "VCheckedDecodeInt2" };
static struct { VBlob sym; char bytes[29]; } _V10_Dstring_D1791 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 29 }, "VCheckedDecodeUnsignedShort2" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1790 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "VCheckedDecodeShort2" };
static struct { VBlob sym; char bytes[28]; } _V10_Dstring_D1789 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 28 }, "VCheckedDecodeUnsignedChar2" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D1788 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "VCheckedDecodeSignedChar2" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D1787 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "VCheckedDecodeChar2" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D1786 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "VCheckedDecodeBool2" };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D1785 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "VCheckedDecodeForeignPointer2" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D1784 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "VCheckedDecodeS8Ptr" };
VWEAK VWORD _V0s8__pointer;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0s8__pointer = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "s8-pointer" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D1783 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "VCheckedDecodeU8Ptr" };
VWEAK VWORD _V0u8__pointer;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0u8__pointer = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "u8-pointer" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1782 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "VCheckedDecodeS16Ptr" };
VWEAK VWORD _V0s16__pointer;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0s16__pointer = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "s16-pointer" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1781 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "VCheckedDecodeU16Ptr" };
VWEAK VWORD _V0u16__pointer;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0u16__pointer = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "u16-pointer" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1780 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "VCheckedDecodeS32Ptr" };
VWEAK VWORD _V0s32__pointer;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0s32__pointer = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "s32-pointer" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1779 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "VCheckedDecodeF64Ptr" };
VWEAK VWORD _V0f64__pointer;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0f64__pointer = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "f64-pointer" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1778 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "VCheckedDecodeF32Ptr" };
VWEAK VWORD _V0f32__pointer;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0f32__pointer = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "f32-pointer" };
static struct { VBlob sym; char bytes[23]; } _V10_Dstring_D1777 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, "VCheckedDecodeVoidPtr2" };
static struct { VBlob sym; char bytes[28]; } _V10_Dstring_D1776 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 28 }, "VCheckedDecodeConstVoidPtr2" };
VWEAK VWORD _V0const__void__pointer;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0const__void__pointer = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "const-void-pointer" };
static struct { VBlob sym; char bytes[28]; } _V10_Dstring_D1775 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 28 }, "VCheckedDecodeConstCString2" };
VWEAK VWORD _V0const__c__string;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0const__c__string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "const-c-string" };
static struct { VBlob sym; char bytes[23]; } _V10_Dstring_D1774 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, "VCheckedDecodeCString2" };
VWEAK VWORD _V0c__string;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0c__string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "c-string" };
VWEAK VWORD _V0VWORD;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0VWORD = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "VWORD" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D1773 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VEncodeDouble" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D1772 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VEncodeInt" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D1771 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VEncodeChar" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D1770 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VEncodeBool" };
static struct { VBlob sym; char bytes[22]; } _V10_Dstring_D1769 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "VEncodeForeignPointer" };
VWEAK VWORD _V0void__pointer;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0void__pointer = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "void-pointer" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D1768 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "_V30~A_shim" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1767 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "VForeignParseHeaderC" };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D1766 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "Invalid foreign import syntax" };
VWEAK VWORD _V10foreign_Dimport;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V10foreign_Dimport = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "##foreign.import" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D1765 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "#include <~A>\n" };
VWEAK VWORD _V10foreign_Ddeclare;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10foreign_Ddeclare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##foreign.declare" };
static struct { VBlob sym; char bytes[22]; } _V10_Dstring_D1764 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "File must be a string" };
VWEAK VWORD _V0windows;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0windows = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "windows" };
static struct { VBlob sym; char bytes[73]; } _V10_Dstring_D1763 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 73 }, "\"~A\" -E -P -undef -std=c11 -nostdinc -D__VANITY__ -w \"~A\" -I \"~A/~A/~A/\"" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1762 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "include/vscheme/stdc" };
static struct { VBlob sym; char bytes[75]; } _V10_Dstring_D1761 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 75 }, "\"\"~A\" -E -P -undef -std=c11 -nostdinc -D__VANITY__ -w \"~A\" -I \"~A/~A/~A/\"\"" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D1760 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "VExePath" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D1759 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "~A/../" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1758 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "~A/~A" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D1757 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "Unable to open header file" };
static struct { VBlob sym; char bytes[19]; } _V10_Dstring_D1756 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, "VForeignParseDeclC" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1755 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "VForeignReleaseParse" };
static struct { VBlob sym; char bytes[32]; } _V10_Dstring_D1754 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 32 }, "Invalid foreign function syntax" };
static struct { VBlob sym; char bytes[38]; } _V10_Dstring_D1753 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 38 }, "Unsupported foreign function language" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D1752 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "Declaration is not a single function" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D1751 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "naked_declaration" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D1750 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "unknown entry in ffi table" };
static struct { VBlob sym; char bytes[40]; } _V10_Dstring_D1749 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 40 }, "variable redeclared as different symbol" };
static struct { VBlob sym; char bytes[1]; } _V10_Dstring_D1748 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 1 }, "" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D1747 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "C" };
VWEAK VWORD _V10foreign_Dfunction;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10foreign_Dfunction = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##foreign.function" };
VWEAK VWORD _V0define;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0define = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "define" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D1746 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "typedef" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D1745 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "declaration" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D1744 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "toplevel" };
VWEAK VWORD _V0enum;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0enum = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "enum" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D1743 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "Unsupported C declaration" };
static struct { VBlob sym; char bytes[43]; } _V10_Dstring_D1742 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 43 }, "Unsupported arg type in C foreign-function" };
static struct { VBlob sym; char bytes[38]; } _V10_Dstring_D1741 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 38 }, "Not a simple function declaration: ~A" };
static struct { VBlob sym; char bytes[46]; } _V10_Dstring_D1740 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 46 }, "Unsupported return type in C foreign-function" };
static struct { VBlob sym; char bytes[22]; } _V10_Dstring_D1739 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "Unsupported C typedef" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1738 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "Not a simple typedef" };
VWEAK VWORD _V0restrict;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0restrict = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "restrict" };
VWEAK VWORD _V0static;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0static = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "static" };
static struct { VBlob sym; char bytes[40]; } _V10_Dstring_D1737 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 40 }, "Can only have one type in a declaration" };
static struct { VBlob sym; char bytes[43]; } _V10_Dstring_D1736 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 43 }, "Multiple storage specifiers in declaration" };
static struct { VBlob sym; char bytes[44]; } _V10_Dstring_D1735 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 44 }, "Unexpected storage specifier in declaration" };
VWEAK VWORD _V0extern;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0extern = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "extern" };
VWEAK VWORD _V0register;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0register = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "register" };
VWEAK VWORD _V0auto;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0auto = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "auto" };
VWEAK VWORD _V0volatile;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0volatile = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "volatile" };
VWEAK VWORD _V0signed;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0signed = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "signed" };
VWEAK VWORD _V0unsigned;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0unsigned = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "unsigned" };
VWEAK VWORD _V0longs;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0longs = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "longs" };
VWEAK VWORD _V0special;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0special = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "special" };
static struct { VBlob sym; char bytes[29]; } _V10_Dstring_D1734 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 29 }, "unsupported type combination" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D1733 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "enum" };
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
static struct { VBlob sym; char bytes[17]; } _V10_Dstring_D1732 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "unknown typename" };
VWEAK VWORD _V0_UBool;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0_UBool = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "_Bool" };
VWEAK VWORD _V0double;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0double = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "double" };
VWEAK VWORD _V0float;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0float = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "float" };
VWEAK VWORD _V0void;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0void = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "void" };
VWEAK VWORD _V0variable;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0variable = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "variable" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D1731 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "match statement exhausted" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D1730 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "static-array" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1729 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "array" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D1728 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "pointer" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D1727 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "parameter_list" };
VWEAK VWORD _V0function;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0function = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "function" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D1726 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "function" };
VWEAK VWORD _V0array;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0array = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "array" };
VWEAK VWORD _V0pointer;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0pointer = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "pointer" };
VWEAK VWORD _V0const;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0const = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "const" };
static __attribute__((constructor)) void VDllMain1() {
  _V0reverse = VEncodePointer(VLookupConstant("_V0reverse", &_VW_V0reverse), VPOINTER_OTHER);
  _V0map = VEncodePointer(VLookupConstant("_V0map", &_VW_V0map), VPOINTER_OTHER);
  _V0error = VEncodePointer(VLookupConstant("_V0error", &_VW_V0error), VPOINTER_OTHER);
  _V0list = VEncodePointer(VLookupConstant("_V0list", &_VW_V0list), VPOINTER_OTHER);
  _V0caar = VEncodePointer(VLookupConstant("_V0caar", &_VW_V0caar), VPOINTER_OTHER);
  _V0cadar = VEncodePointer(VLookupConstant("_V0cadar", &_VW_V0cadar), VPOINTER_OTHER);
  _V0cadr = VEncodePointer(VLookupConstant("_V0cadr", &_VW_V0cadr), VPOINTER_OTHER);
  _V0equal_Q = VEncodePointer(VLookupConstant("_V0equal_Q", &_VW_V0equal_Q), VPOINTER_OTHER);
  _V0memv = VEncodePointer(VLookupConstant("_V0memv", &_VW_V0memv), VPOINTER_OTHER);
  _V0caddar = VEncodePointer(VLookupConstant("_V0caddar", &_VW_V0caddar), VPOINTER_OTHER);
  _V0compiler__error = VEncodePointer(VLookupConstant("_V0compiler__error", &_VW_V0compiler__error), VPOINTER_OTHER);
  _V0for__each = VEncodePointer(VLookupConstant("_V0for__each", &_VW_V0for__each), VPOINTER_OTHER);
  _V0member = VEncodePointer(VLookupConstant("_V0member", &_VW_V0member), VPOINTER_OTHER);
  _V0caddr = VEncodePointer(VLookupConstant("_V0caddr", &_VW_V0caddr), VPOINTER_OTHER);
  _V0cdddr = VEncodePointer(VLookupConstant("_V0cdddr", &_VW_V0cdddr), VPOINTER_OTHER);
  _V0cdadr = VEncodePointer(VLookupConstant("_V0cdadr", &_VW_V0cdadr), VPOINTER_OTHER);
  _V0file__exists_Q = VEncodePointer(VLookupConstant("_V0file__exists_Q", &_VW_V0file__exists_Q), VPOINTER_OTHER);
  _V0sprintf = VEncodePointer(VLookupConstant("_V0sprintf", &_VW_V0sprintf), VPOINTER_OTHER);
  _V0install__root = VEncodePointer(VLookupConstant("_V0install__root", &_VW_V0install__root), VPOINTER_OTHER);
  _V0gcc__path = VEncodePointer(VLookupConstant("_V0gcc__path", &_VW_V0gcc__path), VPOINTER_OTHER);
  _V0platform = VEncodePointer(VLookupConstant("_V0platform", &_VW_V0platform), VPOINTER_OTHER);
  _V0close__port = VEncodePointer(VLookupConstant("_V0close__port", &_VW_V0close__port), VPOINTER_OTHER);
  _V0assv = VEncodePointer(VLookupConstant("_V0assv", &_VW_V0assv), VPOINTER_OTHER);
  _V0iota = VEncodePointer(VLookupConstant("_V0iota", &_VW_V0iota), VPOINTER_OTHER);
  _V0length = VEncodePointer(VLookupConstant("_V0length", &_VW_V0length), VPOINTER_OTHER);
  _V0printf = VEncodePointer(VLookupConstant("_V0printf", &_VW_V0printf), VPOINTER_OTHER);
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
static void _V10_Ddrop__const_D241_k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddrop__const_D241_k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.613 0 0) (bruijn ##.k.609 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
static void _V10_Ddrop__const_D241_lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddrop__const_D241_lambda5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.614 0 0) (##inline ##vcore.car (bruijn ##.expr.3.248 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCar2(runtime,
        statics->vars[0]));
}
static void _V10_Ddrop__const_D241_k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddrop__const_D241_k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.3.248 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.3.248 0 0))) (##vcore.call-with-values (close _V10_Ddrop__const_D241_k35) (close _V10_Ddrop__const_D241_lambda5) (bruijn ##.kk.0.245 3 1)) ((bruijn ##.k.609 2 0) #f)) ((bruijn ##.k.609 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddrop__const_D241_k35, self)})),
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
static void _V10_Ddrop__const_D241_k33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddrop__const_D241_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.610 0 0) ((close _V10_Ddrop__const_D241_k34) (##inline ##vcore.cdr (bruijn ##.x.244 3 1))) ((bruijn ##.k.609 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddrop__const_D241_k34, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddrop__const_D241_k32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddrop__const_D241_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.x.244 2 1)) ((bruijn ##.x.584 24 0) (close _V10_Ddrop__const_D241_k33) 'const (##inline ##vcore.car (bruijn ##.x.244 2 1))) ((bruijn ##.k.609 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddrop__const_D241_k33, self)})),
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
  // ((bruijn ##.k.607 0 0) (bruijn ##.x.244 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[1]);
}
static void _V10_Ddrop__const_D241_k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddrop__const_D241_k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.605 1 0) (close _V10_Ddrop__const_D241_lambda6) (bruijn ##.kk.0.245 1 1))
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
  // ((close _V10_Ddrop__const_D241_k32) (close _V10_Ddrop__const_D241_k36))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddrop__const_D241_k32, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddrop__const_D241_k36, self)})));
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
  // (##vcore.call/cc (bruijn ##.k.604 0 0) (close _V10_Ddrop__const_D241_lambda4))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddrop__const_D241_lambda4, self)})));
}
static void _V10_Dreduce__args_D242_k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__args_D242_k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.617 7 0) (##inline ##vcore.cons (bruijn ##.x.619 1 0) (bruijn ##.x.620 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VInlineCons2(runtime,
        statics->vars[0],
        _var0));
}
static void _V10_Dreduce__args_D242_k42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__args_D242_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.reduce-args.242 7 1) (close _V10_Dreduce__args_D242_k43) (##inline ##vcore.cdr (bruijn ##.args.250 6 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__args_D242_k43, self)})),
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 1)));
}
static void _V10_Dreduce__args_D242_k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__args_D242_k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.631 0 0) (bruijn ##.k.626 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V10_Dreduce__args_D242_lambda9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__args_D242_lambda9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.580 37 0) (bruijn ##.k.632 0 0) 'pointer (##inline ##vcore.car (bruijn ##.expr.8.257 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 3,
      _var0,
      _V0pointer,
      VInlineCar2(runtime,
        statics->vars[0]));
}
static void _V10_Dreduce__args_D242_k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__args_D242_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.8.257 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.8.257 0 0))) (##vcore.call-with-values (close _V10_Dreduce__args_D242_k48) (close _V10_Dreduce__args_D242_lambda9) (bruijn ##.kk.4.252 4 1)) ((bruijn ##.k.626 3 0) #f)) ((bruijn ##.k.626 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__args_D242_k48, self)})),
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
static void _V10_Dreduce__args_D242_k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__args_D242_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.7.255 0 0)) ((close _V10_Dreduce__args_D242_k47) (##inline ##vcore.cdr (bruijn ##.expr.7.255 0 0))) ((bruijn ##.k.626 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dreduce__args_D242_k47, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dreduce__args_D242_k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__args_D242_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.627 0 0) ((close _V10_Dreduce__args_D242_k46) (##inline ##vcore.cdr (bruijn ##.arg.251 3 0))) ((bruijn ##.k.626 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dreduce__args_D242_k46, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dreduce__args_D242_k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__args_D242_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.arg.251 2 0)) ((bruijn ##.x.584 29 0) (close _V10_Dreduce__args_D242_k45) 'array (##inline ##vcore.car (bruijn ##.arg.251 2 0))) ((bruijn ##.k.626 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__args_D242_k45, self)})),
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
  // ((bruijn ##.k.624 0 0) (bruijn ##.arg.251 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
static void _V10_Dreduce__args_D242_k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__args_D242_k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.622 1 0) (close _V10_Dreduce__args_D242_lambda10) (bruijn ##.kk.4.252 1 1))
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
  // ((close _V10_Dreduce__args_D242_k44) (close _V10_Dreduce__args_D242_k49))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dreduce__args_D242_k44, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__args_D242_k49, self)})));
}
static void _V10_Dreduce__args_D242_k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__args_D242_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (close _V10_Dreduce__args_D242_k42) (close _V10_Dreduce__args_D242_lambda8))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__args_D242_k42, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__args_D242_lambda8, self)})));
}
static void _V10_Dreduce__args_D242_k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__args_D242_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.583 27 0) (close _V10_Dreduce__args_D242_k41) (bruijn ##.x.635 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__args_D242_k41, self)})),
      _var0);
}
static void _V10_Dreduce__args_D242_k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__args_D242_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.reduce-declare.220 6 0) (close _V10_Dreduce__args_D242_k40) (bruijn ##.x.636 1 0) (bruijn ##.x.637 0 0) (bruijn ##.table.240 5 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__args_D242_k40, self)})),
      statics->vars[0],
      _var0,
      VGetArg(statics, 5-1, 3));
}
static void _V10_Dreduce__args_D242_k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__args_D242_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.582 26 0) (close _V10_Dreduce__args_D242_k39) (bruijn ##.args.250 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__args_D242_k39, self)})),
      statics->up->vars[1]);
}
static void _V10_Dreduce__args_D242_k37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__args_D242_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.reduce-type.222 4 2) (close _V10_Dreduce__args_D242_k38) (bruijn ##.x.638 0 0) (bruijn ##.table.240 3 3) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[2]), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__args_D242_k38, self)})),
      _var0,
      statics->up->up->vars[3],
      VEncodeBool(false));
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
  // (if (##inline ##vcore.null? (bruijn ##.args.250 0 1)) ((bruijn ##.k.617 0 0) '()) ((bruijn ##.x.581 25 0) (close _V10_Dreduce__args_D242_k37) (bruijn ##.args.250 0 1)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__args_D242_k37, self)})),
      _var1);
}
}
static void _V10_Dreduce__declare__loop_D243_k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.reg.1707 1 0) (##vcore.blob=? (bruijn ##.k.744 0 0) (##string ##.string.1726) (##inline ##vcore.car (bruijn ##.decl.260 4 2))) ((bruijn ##.k.744 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VBlobEqv2, 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1726.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        statics->up->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dreduce__declare__loop_D243_k54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.737 0 0) (bruijn ##.k.733 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V10_Dreduce__declare__loop_D243_k55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.738 1 0) (##inline ##vcore.cons 'function (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.12.264 2 0)) (##inline ##vcore.cons (bruijn ##.x.741 0 0) '()))))
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
  // ((bruijn ##.drop-const.241 7 0) (close _V10_Dreduce__declare__loop_D243_k55) (bruijn ##.ret.259 6 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D243_k55, self)})),
      VGetArg(statics, 6-1, 1));
}
static void _V10_Dreduce__declare__loop_D243_k53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.12.264 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.12.264 0 0))) (##vcore.call-with-values (close _V10_Dreduce__declare__loop_D243_k54) (close _V10_Dreduce__declare__loop_D243_lambda13) (bruijn ##.kk.9.261 4 1)) ((bruijn ##.k.733 3 0) #f)) ((bruijn ##.k.733 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D243_k54, self)})),
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
static void _V10_Dreduce__declare__loop_D243_k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.734 0 0) ((close _V10_Dreduce__declare__loop_D243_k53) (##inline ##vcore.cdr (bruijn ##.decl.260 4 2))) ((bruijn ##.k.733 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dreduce__declare__loop_D243_k53, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dreduce__declare__loop_D243_k50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.decl.260 2 2)) (basic-block 1 1 (##.reg.1707) ((##vcore.string? (##inline ##vcore.car (bruijn ##.decl.260 3 2)))) ((close _V10_Dreduce__declare__loop_D243_k51) (close _V10_Dreduce__declare__loop_D243_k52))) ((bruijn ##.k.733 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringP2(runtime, NULL,
      VInlineCar2(runtime,
        statics->up->up->vars[2]));
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dreduce__declare__loop_D243_k51, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D243_k52, self)})));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dreduce__declare__loop_D243_k58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.reg.1705 1 0) (##vcore.blob=? (bruijn ##.k.729 0 0) (##string ##.string.1726) (##inline ##vcore.car (bruijn ##.decl.260 5 2))) ((bruijn ##.k.729 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VBlobEqv2, 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1726.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dreduce__declare__loop_D243_k63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.reg.1706 1 0) (##vcore.blob=? (bruijn ##.k.725 0 0) (##string ##.string.1727) (##inline ##vcore.car (bruijn ##.expr.16.270 2 0))) ((bruijn ##.k.725 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VBlobEqv2, 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1727.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        statics->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D273_k66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D273_k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.19.272 4 1) (bruijn ##.k.710 1 0) (bruijn ##.expr.21.274 2 1) (bruijn ##.x.711 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      statics->vars[0],
      statics->up->vars[1],
      _var0);
}
static void _V10_Dloop_D273_k65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D273_k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.21.274 1 1))) ((bruijn ##.x.577 44 0) (close _V10_Dloop_D273_k66) (bruijn ##.args.18.275 1 2)) ((bruijn ##.k.710 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 44-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D273_k66, self)})),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D273_k69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D273_k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.19.272 7 1) (bruijn ##.k.704 2 0) (bruijn ##.expr.21.274 5 1) (bruijn ##.x.706 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      statics->up->vars[0],
      VGetArg(statics, 5-1, 1),
      _var0);
}
static void _V10_Dloop_D273_k68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D273_k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.577 47 0) (close _V10_Dloop_D273_k69) (bruijn ##.args.18.275 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 47-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D273_k69, self)})),
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
  // ((bruijn ##.kk.20.276 0 1) (close _V10_Dloop_D273_k68) (##inline ##vcore.cdr (bruijn ##.expr.21.274 3 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.21.274 3 1)) (bruijn ##.args.18.275 3 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var1), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D273_k68, self)})),
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
  // (##vcore.call/cc (bruijn ##.k.703 0 0) (close _V10_Dloop_D273_lambda18))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D273_lambda18, self)})));
}
static void _V10_Dloop_D273_k67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D273_k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.701 1 0) (close _V10_Dloop_D273_lambda17) (bruijn ##.loop.273 2 0))
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
  // ((close _V10_Dloop_D273_k65) (close _V10_Dloop_D273_k67))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D273_k65, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D273_k67, self)})));
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
  // (letrec 1 ((close _V10_Dloop_D273_lambda16)) ((bruijn ##.loop.273 0 0) (bruijn ##.k.700 1 0) (##inline ##vcore.cdr (bruijn ##.expr.16.270 5 0)) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
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
  // (##vcore.call/cc (bruijn ##.k.699 0 0) (close _V10_Dreduce__declare__loop_D243_lambda15))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D243_lambda15, self)})));
}
static void _V10_Dreduce__declare__loop_D243_k70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.716 0 0) (bruijn ##.k.713 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
static void _V10_Dreduce__declare__loop_D243_k73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.717 3 0) (##inline ##vcore.cons 'function (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.14.267 9 0)) (##inline ##vcore.cons (bruijn ##.x.720 2 0) (bruijn ##.x.721 0 0)))))
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
static void _V10_Dreduce__declare__loop_D243_k72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.578 42 0) (close _V10_Dreduce__declare__loop_D243_k73) (bruijn ##.drop-const.241 15 0) (bruijn ##.x.722 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 42-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D243_k73, self)})),
      VGetArg(statics, 15-1, 0),
      _var0);
}
static void _V10_Dreduce__declare__loop_D243_k71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.reduce-args.242 14 1) (close _V10_Dreduce__declare__loop_D243_k72) (bruijn ##.args.279 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 1)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D243_k72, self)})),
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
  // ((bruijn ##.drop-const.241 13 0) (close _V10_Dreduce__declare__loop_D243_k71) (bruijn ##.ret.259 12 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D243_k71, self)})),
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
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.278 0 1)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.15.269 4 0))) (##vcore.call-with-values (close _V10_Dreduce__declare__loop_D243_k70) (close _V10_Dreduce__declare__loop_D243_lambda20) (bruijn ##.kk.9.261 10 1)) ((bruijn ##.k.713 0 0) #f)) ((bruijn ##.k.713 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->up->up->up->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D243_k70, self)})),
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
static void _V10_Dreduce__declare__loop_D243_k64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.698 0 0) (##vcore.call-with-values (bruijn ##.k.693 7 0) (close _V10_Dreduce__declare__loop_D243_lambda14) (close _V10_Dreduce__declare__loop_D243_lambda19)) ((bruijn ##.k.693 7 0) #f))
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
static void _V10_Dreduce__declare__loop_D243_k62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.16.270 0 0)) (basic-block 1 1 (##.reg.1706) ((##vcore.string? (##inline ##vcore.car (bruijn ##.expr.16.270 1 0)))) ((close _V10_Dreduce__declare__loop_D243_k63) (close _V10_Dreduce__declare__loop_D243_k64))) ((bruijn ##.k.693 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringP2(runtime, NULL,
      VInlineCar2(runtime,
        statics->vars[0]));
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dreduce__declare__loop_D243_k63, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D243_k64, self)})));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dreduce__declare__loop_D243_k61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.15.269 0 0)) ((close _V10_Dreduce__declare__loop_D243_k62) (##inline ##vcore.car (bruijn ##.expr.15.269 0 0))) ((bruijn ##.k.693 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dreduce__declare__loop_D243_k62, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dreduce__declare__loop_D243_k60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.14.267 0 0)) ((close _V10_Dreduce__declare__loop_D243_k61) (##inline ##vcore.cdr (bruijn ##.expr.14.267 0 0))) ((bruijn ##.k.693 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dreduce__declare__loop_D243_k61, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dreduce__declare__loop_D243_k59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.694 0 0) ((close _V10_Dreduce__declare__loop_D243_k60) (##inline ##vcore.cdr (bruijn ##.decl.260 5 2))) ((bruijn ##.k.693 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dreduce__declare__loop_D243_k60, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dreduce__declare__loop_D243_k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.decl.260 3 2)) (basic-block 1 1 (##.reg.1705) ((##vcore.string? (##inline ##vcore.car (bruijn ##.decl.260 4 2)))) ((close _V10_Dreduce__declare__loop_D243_k58) (close _V10_Dreduce__declare__loop_D243_k59))) ((bruijn ##.k.693 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[2]))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringP2(runtime, NULL,
      VInlineCar2(runtime,
        statics->up->up->up->vars[2]));
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dreduce__declare__loop_D243_k58, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D243_k59, self)})));
    }
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
  // (if (bruijn ##.reg.1704 1 0) (##vcore.blob=? (bruijn ##.k.689 0 0) (##string ##.string.1728) (##inline ##vcore.car (bruijn ##.decl.260 6 2))) ((bruijn ##.k.689 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VBlobEqv2, 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1728.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dreduce__declare__loop_D243_k79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.684 0 0) (bruijn ##.k.680 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V10_Dreduce__declare__loop_D243_k80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.reduce-declare-loop.243 10 2) (bruijn ##.k.685 1 0) (bruijn ##.x.686 0 0) (##inline ##vcore.car (bruijn ##.expr.23.281 2 0)))
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
  // ((bruijn ##.x.580 34 0) (close _V10_Dreduce__declare__loop_D243_k80) 'pointer (bruijn ##.ret.259 8 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D243_k80, self)})),
      _V0pointer,
      VGetArg(statics, 8-1, 1));
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.23.281 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.23.281 0 0))) (##vcore.call-with-values (close _V10_Dreduce__declare__loop_D243_k79) (close _V10_Dreduce__declare__loop_D243_lambda21) (bruijn ##.kk.9.261 6 1)) ((bruijn ##.k.680 3 0) #f)) ((bruijn ##.k.680 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D243_k79, self)})),
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
  // (if (bruijn ##.p.681 0 0) ((close _V10_Dreduce__declare__loop_D243_k78) (##inline ##vcore.cdr (bruijn ##.decl.260 6 2))) ((bruijn ##.k.680 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dreduce__declare__loop_D243_k78, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 2)));
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
  // (if (##inline ##vcore.pair? (bruijn ##.decl.260 4 2)) (basic-block 1 1 (##.reg.1704) ((##vcore.string? (##inline ##vcore.car (bruijn ##.decl.260 5 2)))) ((close _V10_Dreduce__declare__loop_D243_k76) (close _V10_Dreduce__declare__loop_D243_k77))) ((bruijn ##.k.680 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->up->vars[2]))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringP2(runtime, NULL,
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 2)));
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dreduce__declare__loop_D243_k76, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D243_k77, self)})));
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
  // (if (bruijn ##.reg.1703 1 0) (##vcore.blob=? (bruijn ##.k.676 0 0) (##string ##.string.1729) (##inline ##vcore.car (bruijn ##.decl.260 7 2))) ((bruijn ##.k.676 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VBlobEqv2, 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1729.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        VGetArg(statics, 7-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dreduce__declare__loop_D243_k87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.671 0 0) (bruijn ##.k.666 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
static void _V10_Dreduce__declare__loop_D243_k88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.reduce-declare-loop.243 12 2) (bruijn ##.k.672 1 0) (bruijn ##.x.673 0 0) (##inline ##vcore.car (bruijn ##.expr.25.284 3 0)))
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
  // ((bruijn ##.x.580 36 0) (close _V10_Dreduce__declare__loop_D243_k88) 'array (##inline ##vcore.car (bruijn ##.expr.26.286 1 0)) (bruijn ##.ret.259 10 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D243_k88, self)})),
      _V0array,
      VInlineCar2(runtime,
        statics->vars[0]),
      VGetArg(statics, 10-1, 1));
}
static void _V10_Dreduce__declare__loop_D243_k86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.26.286 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.26.286 0 0))) (##vcore.call-with-values (close _V10_Dreduce__declare__loop_D243_k87) (close _V10_Dreduce__declare__loop_D243_lambda22) (bruijn ##.kk.9.261 8 1)) ((bruijn ##.k.666 4 0) #f)) ((bruijn ##.k.666 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D243_k87, self)})),
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
static void _V10_Dreduce__declare__loop_D243_k85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.25.284 0 0)) ((close _V10_Dreduce__declare__loop_D243_k86) (##inline ##vcore.cdr (bruijn ##.expr.25.284 0 0))) ((bruijn ##.k.666 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dreduce__declare__loop_D243_k86, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dreduce__declare__loop_D243_k84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.667 0 0) ((close _V10_Dreduce__declare__loop_D243_k85) (##inline ##vcore.cdr (bruijn ##.decl.260 7 2))) ((bruijn ##.k.666 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dreduce__declare__loop_D243_k85, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 7-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dreduce__declare__loop_D243_k82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.decl.260 5 2)) (basic-block 1 1 (##.reg.1703) ((##vcore.string? (##inline ##vcore.car (bruijn ##.decl.260 6 2)))) ((close _V10_Dreduce__declare__loop_D243_k83) (close _V10_Dreduce__declare__loop_D243_k84))) ((bruijn ##.k.666 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 5-1, 2)))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringP2(runtime, NULL,
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 2)));
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dreduce__declare__loop_D243_k83, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D243_k84, self)})));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dreduce__declare__loop_D243_k91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.reg.1702 1 0) (##vcore.blob=? (bruijn ##.k.662 0 0) (##string ##.string.1730) (##inline ##vcore.car (bruijn ##.decl.260 8 2))) ((bruijn ##.k.662 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VBlobEqv2, 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1730.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        VGetArg(statics, 8-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dreduce__declare__loop_D243_k95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.657 0 0) (bruijn ##.k.652 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
static void _V10_Dreduce__declare__loop_D243_k96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.reduce-declare-loop.243 13 2) (bruijn ##.k.658 1 0) (bruijn ##.x.659 0 0) (##inline ##vcore.car (bruijn ##.expr.28.289 3 0)))
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
  // ((bruijn ##.x.580 37 0) (close _V10_Dreduce__declare__loop_D243_k96) 'array (##inline ##vcore.car (bruijn ##.expr.29.291 1 0)) (bruijn ##.ret.259 11 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D243_k96, self)})),
      _V0array,
      VInlineCar2(runtime,
        statics->vars[0]),
      VGetArg(statics, 11-1, 1));
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.29.291 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.29.291 0 0))) (##vcore.call-with-values (close _V10_Dreduce__declare__loop_D243_k95) (close _V10_Dreduce__declare__loop_D243_lambda23) (bruijn ##.kk.9.261 9 1)) ((bruijn ##.k.652 4 0) #f)) ((bruijn ##.k.652 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D243_k95, self)})),
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.28.289 0 0)) ((close _V10_Dreduce__declare__loop_D243_k94) (##inline ##vcore.cdr (bruijn ##.expr.28.289 0 0))) ((bruijn ##.k.652 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dreduce__declare__loop_D243_k94, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dreduce__declare__loop_D243_k92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.653 0 0) ((close _V10_Dreduce__declare__loop_D243_k93) (##inline ##vcore.cdr (bruijn ##.decl.260 8 2))) ((bruijn ##.k.652 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dreduce__declare__loop_D243_k93, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 8-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
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
  // (if (##inline ##vcore.pair? (bruijn ##.decl.260 6 2)) (basic-block 1 1 (##.reg.1702) ((##vcore.string? (##inline ##vcore.car (bruijn ##.decl.260 7 2)))) ((close _V10_Dreduce__declare__loop_D243_k91) (close _V10_Dreduce__declare__loop_D243_k92))) ((bruijn ##.k.652 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 6-1, 2)))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringP2(runtime, NULL,
      VInlineCar2(runtime,
        VGetArg(statics, 7-1, 2)));
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dreduce__declare__loop_D243_k91, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D243_k92, self)})));
    }
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
  // ((bruijn ##.x.579 35 0) (bruijn ##.k.640 7 0) (##string ##.string.1731))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 35-1, 0)), 2,
      VGetArg(statics, 7-1, 0),
      VEncodePointer(&_V10_Dstring_D1731.sym, VPOINTER_OTHER));
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
  // ((bruijn ##.x.647 0 0) (close _V10_Dreduce__declare__loop_D243_k99))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D243_k99, self)})));
}
static void _V10_Dreduce__declare__loop_D243_lambda24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_lambda24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.648 0 0) (##inline ##vcore.cons 'variable (##inline ##vcore.cons (bruijn ##.ret.259 7 1) (##inline ##vcore.cons (bruijn ##.decl.260 7 2) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0variable,
        VInlineCons2(runtime,
        VGetArg(statics, 7-1, 1),
        VInlineCons2(runtime,
        VGetArg(statics, 7-1, 2),
        VNULL))));
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
  // (##vcore.call-with-values (close _V10_Dreduce__declare__loop_D243_k98) (close _V10_Dreduce__declare__loop_D243_lambda24) (bruijn ##.kk.9.261 5 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D243_k98, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D243_lambda24, self)})),
      VGetArg(statics, 5-1, 1));
}
static void _V10_Dreduce__declare__loop_D243_k89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dreduce__declare__loop_D243_k90) (close _V10_Dreduce__declare__loop_D243_k97))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dreduce__declare__loop_D243_k90, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D243_k97, self)})));
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
  // ((close _V10_Dreduce__declare__loop_D243_k82) (close _V10_Dreduce__declare__loop_D243_k89))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dreduce__declare__loop_D243_k82, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D243_k89, self)})));
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
  // ((close _V10_Dreduce__declare__loop_D243_k75) (close _V10_Dreduce__declare__loop_D243_k81))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dreduce__declare__loop_D243_k75, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D243_k81, self)})));
}
static void _V10_Dreduce__declare__loop_D243_k56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D243_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dreduce__declare__loop_D243_k57) (close _V10_Dreduce__declare__loop_D243_k74))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dreduce__declare__loop_D243_k57, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D243_k74, self)})));
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
  // ((close _V10_Dreduce__declare__loop_D243_k50) (close _V10_Dreduce__declare__loop_D243_k56))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dreduce__declare__loop_D243_k50, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D243_k56, self)})));
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
  // (##vcore.call/cc (bruijn ##.k.639 0 0) (close _V10_Dreduce__declare__loop_D243_lambda12))
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
  // (letrec 3 ((close _V10_Ddrop__const_D241_lambda3) (close _V10_Dreduce__args_D242_lambda7) (close _V10_Dreduce__declare__loop_D243_lambda11)) ((bruijn ##.reduce-declare-loop.243 0 2) (bruijn ##.k.603 1 0) (bruijn ##.ret.238 1 1) (bruijn ##.decl.239 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
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
static void _V10_Dfind__typedef_D221_k101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__typedef_D221_k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.758 1 0) (##inline ##vcore.not (bruijn ##.x.759 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineNot2(runtime,
        _var0));
}
static void _V10_Dfind__typedef_D221_k100(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__typedef_D221_k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.reg.1708 1 0) ((bruijn ##.x.585 21 0) (close _V10_Dfind__typedef_D221_k101) (bruijn ##.special.294 2 1) (##inline ##vcore.qcons 'void (##inline ##vcore.qcons 'float (##inline ##vcore.qcons 'double (##inline ##vcore.qcons '_Bool '()))))) ((bruijn ##.k.758 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__typedef_D221_k101, self)})),
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
static void _V10_Dloop_D296_k106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D296_k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.eqv? (bruijn ##.k.754 1 0) (bruijn ##.x.755 0 0) (bruijn ##.special.294 8 1))
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      statics->vars[0],
      _var0,
      VGetArg(statics, 8-1, 1));
}
static void _V10_Dloop_D296_k105(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D296_k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.753 1 0) ((bruijn ##.x.582 29 0) (close _V10_Dloop_D296_k106) (bruijn ##.table.297 3 1)) ((bruijn ##.k.754 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D296_k106, self)})),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D296_k107(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D296_k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.751 0 0) ((bruijn ##.x.586 25 0) (bruijn ##.k.749 3 0) (bruijn ##.table.297 3 1)) ((bruijn ##.loop.296 4 0) (bruijn ##.k.749 3 0) (##inline ##vcore.cdr (bruijn ##.table.297 3 1))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 2,
      statics->up->up->vars[0],
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 2,
      statics->up->up->vars[0],
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
}
}
static void _V10_Dloop_D296_k104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D296_k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D296_k105) (close _V10_Dloop_D296_k107))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D296_k105, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D296_k107, self)})));
}
static void _V10_Dloop_D296_k103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D296_k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.eqv? (close _V10_Dloop_D296_k104) (bruijn ##.x.756 0 0) 'typedef)
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D296_k104, self)})),
      _var0,
      _V0typedef);
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
  // (if (##inline ##vcore.null? (bruijn ##.table.297 0 1)) ((bruijn ##.x.587 21 0) (bruijn ##.k.749 0 0) (##string ##.string.1732) (bruijn ##.special.294 4 1)) ((bruijn ##.x.581 27 0) (close _V10_Dloop_D296_k103) (bruijn ##.table.297 0 1)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1732.sym, VPOINTER_OTHER),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D296_k103, self)})),
      _var1);
}
}
static void _V10_Dfind__typedef_D221_k102(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__typedef_D221_k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.748 0 0) (letrec 1 ((close _V10_Dloop_D296_lambda26)) ((bruijn ##.loop.296 0 0) (bruijn ##.k.747 3 0) (bruijn ##.table.295 3 2))) ((bruijn ##.k.747 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
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
  // (basic-block 1 1 (##.reg.1708) ((##vcore.symbol? (bruijn ##.special.294 1 1))) ((close _V10_Dfind__typedef_D221_k100) (close _V10_Dfind__typedef_D221_k102)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dfind__typedef_D221_k100, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__typedef_D221_k102, self)})));
    }
}
static void _V10_Ddecide_D301_k114(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1012 0 0) (bruijn ##.k.1001 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
static void _V10_Ddecide_D301_lambda30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_lambda30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1013 0 0) 'char)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0char);
}
static void _V10_Ddecide_D301_k113(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.37.311 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.37.311 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.37.311 0 0))) (##vcore.call-with-values (close _V10_Ddecide_D301_k114) (close _V10_Ddecide_D301_lambda30) (bruijn ##.kk.31.305 6 1)) ((bruijn ##.k.1001 5 0) #f)) ((bruijn ##.k.1001 5 0) #f)) ((bruijn ##.k.1001 5 0) #f))
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
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k114, self)})),
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
static void _V10_Ddecide_D301_k112(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.36.310 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.36.310 0 0))) ((close _V10_Ddecide_D301_k113) (##inline ##vcore.cdr (bruijn ##.expr.36.310 0 0))) ((bruijn ##.k.1001 4 0) #f)) ((bruijn ##.k.1001 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k113, .env = self }, }, 1,
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
static void _V10_Ddecide_D301_k111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.35.309 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.35.309 0 0))) ((close _V10_Ddecide_D301_k112) (##inline ##vcore.cdr (bruijn ##.expr.35.309 0 0))) ((bruijn ##.k.1001 3 0) #f)) ((bruijn ##.k.1001 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k112, .env = self }, }, 1,
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
static void _V10_Ddecide_D301_k110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.34.308 0 0)) (if (##inline ##vcore.eq? 0 (##inline ##vcore.car (bruijn ##.expr.34.308 0 0))) ((close _V10_Ddecide_D301_k111) (##inline ##vcore.cdr (bruijn ##.expr.34.308 0 0))) ((bruijn ##.k.1001 2 0) #f)) ((bruijn ##.k.1001 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(0l),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k111, .env = self }, }, 1,
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
static void _V10_Ddecide_D301_k109(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1002 0 0) ((close _V10_Ddecide_D301_k110) (##inline ##vcore.cdr (bruijn ##.args.304 3 1))) ((bruijn ##.k.1001 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k110, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k108(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.args.304 2 1)) ((bruijn ##.x.584 24 0) (close _V10_Ddecide_D301_k109) 'char (##inline ##vcore.car (bruijn ##.args.304 2 1))) ((bruijn ##.k.1001 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k109, self)})),
      _V0char,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k122(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.992 0 0) (bruijn ##.k.981 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
static void _V10_Ddecide_D301_lambda31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_lambda31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.993 0 0) 'unsigned-char)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0unsigned__char);
}
static void _V10_Ddecide_D301_k121(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.42.316 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.42.316 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.42.316 0 0))) (##vcore.call-with-values (close _V10_Ddecide_D301_k122) (close _V10_Ddecide_D301_lambda31) (bruijn ##.kk.31.305 7 1)) ((bruijn ##.k.981 5 0) #f)) ((bruijn ##.k.981 5 0) #f)) ((bruijn ##.k.981 5 0) #f))
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
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k122, self)})),
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
static void _V10_Ddecide_D301_k120(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.41.315 0 0)) (if (##inline ##vcore.eq? #t (##inline ##vcore.car (bruijn ##.expr.41.315 0 0))) ((close _V10_Ddecide_D301_k121) (##inline ##vcore.cdr (bruijn ##.expr.41.315 0 0))) ((bruijn ##.k.981 4 0) #f)) ((bruijn ##.k.981 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(true),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k121, .env = self }, }, 1,
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
static void _V10_Ddecide_D301_k119(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.40.314 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.40.314 0 0))) ((close _V10_Ddecide_D301_k120) (##inline ##vcore.cdr (bruijn ##.expr.40.314 0 0))) ((bruijn ##.k.981 3 0) #f)) ((bruijn ##.k.981 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k120, .env = self }, }, 1,
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
static void _V10_Ddecide_D301_k118(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.39.313 0 0)) (if (##inline ##vcore.eq? 0 (##inline ##vcore.car (bruijn ##.expr.39.313 0 0))) ((close _V10_Ddecide_D301_k119) (##inline ##vcore.cdr (bruijn ##.expr.39.313 0 0))) ((bruijn ##.k.981 2 0) #f)) ((bruijn ##.k.981 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(0l),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k119, .env = self }, }, 1,
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
static void _V10_Ddecide_D301_k117(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.982 0 0) ((close _V10_Ddecide_D301_k118) (##inline ##vcore.cdr (bruijn ##.args.304 4 1))) ((bruijn ##.k.981 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k118, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k116(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.args.304 3 1)) ((bruijn ##.x.584 25 0) (close _V10_Ddecide_D301_k117) 'char (##inline ##vcore.car (bruijn ##.args.304 3 1))) ((bruijn ##.k.981 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k117, self)})),
      _V0char,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k130(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.972 0 0) (bruijn ##.k.961 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
static void _V10_Ddecide_D301_lambda32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_lambda32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.973 0 0) 'signed-char)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0signed__char);
}
static void _V10_Ddecide_D301_k129(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.47.321 0 0)) (if (##inline ##vcore.eq? #t (##inline ##vcore.car (bruijn ##.expr.47.321 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.47.321 0 0))) (##vcore.call-with-values (close _V10_Ddecide_D301_k130) (close _V10_Ddecide_D301_lambda32) (bruijn ##.kk.31.305 8 1)) ((bruijn ##.k.961 5 0) #f)) ((bruijn ##.k.961 5 0) #f)) ((bruijn ##.k.961 5 0) #f))
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
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k130, self)})),
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
static void _V10_Ddecide_D301_k128(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.46.320 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.46.320 0 0))) ((close _V10_Ddecide_D301_k129) (##inline ##vcore.cdr (bruijn ##.expr.46.320 0 0))) ((bruijn ##.k.961 4 0) #f)) ((bruijn ##.k.961 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k129, .env = self }, }, 1,
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
static void _V10_Ddecide_D301_k127(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.45.319 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.45.319 0 0))) ((close _V10_Ddecide_D301_k128) (##inline ##vcore.cdr (bruijn ##.expr.45.319 0 0))) ((bruijn ##.k.961 3 0) #f)) ((bruijn ##.k.961 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k128, .env = self }, }, 1,
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
static void _V10_Ddecide_D301_k126(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.44.318 0 0)) (if (##inline ##vcore.eq? 0 (##inline ##vcore.car (bruijn ##.expr.44.318 0 0))) ((close _V10_Ddecide_D301_k127) (##inline ##vcore.cdr (bruijn ##.expr.44.318 0 0))) ((bruijn ##.k.961 2 0) #f)) ((bruijn ##.k.961 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(0l),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k127, .env = self }, }, 1,
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
static void _V10_Ddecide_D301_k125(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.962 0 0) ((close _V10_Ddecide_D301_k126) (##inline ##vcore.cdr (bruijn ##.args.304 5 1))) ((bruijn ##.k.961 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k126, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k124(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.args.304 4 1)) ((bruijn ##.x.584 26 0) (close _V10_Ddecide_D301_k125) 'char (##inline ##vcore.car (bruijn ##.args.304 4 1))) ((bruijn ##.k.961 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k125, self)})),
      _V0char,
      VInlineCar2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k138(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.953 0 0) (bruijn ##.k.943 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
static void _V10_Ddecide_D301_lambda33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_lambda33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.954 0 0) 'int)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0int);
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.52.326 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.52.326 0 0))) (##vcore.call-with-values (close _V10_Ddecide_D301_k138) (close _V10_Ddecide_D301_lambda33) (bruijn ##.kk.31.305 9 1)) ((bruijn ##.k.943 5 0) #f)) ((bruijn ##.k.943 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k138, self)})),
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.51.325 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.51.325 0 0))) ((close _V10_Ddecide_D301_k137) (##inline ##vcore.cdr (bruijn ##.expr.51.325 0 0))) ((bruijn ##.k.943 4 0) #f)) ((bruijn ##.k.943 4 0) #f))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.50.324 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.50.324 0 0))) ((close _V10_Ddecide_D301_k136) (##inline ##vcore.cdr (bruijn ##.expr.50.324 0 0))) ((bruijn ##.k.943 3 0) #f)) ((bruijn ##.k.943 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k136, .env = self }, }, 1,
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.49.323 0 0)) (if (##inline ##vcore.eq? 0 (##inline ##vcore.car (bruijn ##.expr.49.323 0 0))) ((close _V10_Ddecide_D301_k135) (##inline ##vcore.cdr (bruijn ##.expr.49.323 0 0))) ((bruijn ##.k.943 2 0) #f)) ((bruijn ##.k.943 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(0l),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k135, .env = self }, }, 1,
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
  // (if (bruijn ##.p.944 0 0) ((close _V10_Ddecide_D301_k134) (##inline ##vcore.cdr (bruijn ##.args.304 6 1))) ((bruijn ##.k.943 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k134, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k132(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.args.304 5 1)) ((bruijn ##.x.584 27 0) (close _V10_Ddecide_D301_k133) 'int (##inline ##vcore.car (bruijn ##.args.304 5 1))) ((bruijn ##.k.943 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 5-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k133, self)})),
      _V0int,
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k146(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.934 0 0) (bruijn ##.k.923 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
static void _V10_Ddecide_D301_lambda34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_lambda34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.935 0 0) 'unsigned-int)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0unsigned__int);
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.57.331 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.57.331 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.57.331 0 0))) (##vcore.call-with-values (close _V10_Ddecide_D301_k146) (close _V10_Ddecide_D301_lambda34) (bruijn ##.kk.31.305 10 1)) ((bruijn ##.k.923 5 0) #f)) ((bruijn ##.k.923 5 0) #f)) ((bruijn ##.k.923 5 0) #f))
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
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k146, self)})),
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.56.330 0 0)) (if (##inline ##vcore.eq? #t (##inline ##vcore.car (bruijn ##.expr.56.330 0 0))) ((close _V10_Ddecide_D301_k145) (##inline ##vcore.cdr (bruijn ##.expr.56.330 0 0))) ((bruijn ##.k.923 4 0) #f)) ((bruijn ##.k.923 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(true),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k145, .env = self }, }, 1,
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.55.329 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.55.329 0 0))) ((close _V10_Ddecide_D301_k144) (##inline ##vcore.cdr (bruijn ##.expr.55.329 0 0))) ((bruijn ##.k.923 3 0) #f)) ((bruijn ##.k.923 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k144, .env = self }, }, 1,
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.54.328 0 0)) (if (##inline ##vcore.eq? 0 (##inline ##vcore.car (bruijn ##.expr.54.328 0 0))) ((close _V10_Ddecide_D301_k143) (##inline ##vcore.cdr (bruijn ##.expr.54.328 0 0))) ((bruijn ##.k.923 2 0) #f)) ((bruijn ##.k.923 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(0l),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k143, .env = self }, }, 1,
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
  // (if (bruijn ##.p.924 0 0) ((close _V10_Ddecide_D301_k142) (##inline ##vcore.cdr (bruijn ##.args.304 7 1))) ((bruijn ##.k.923 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k142, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 7-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
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
  // (if (##inline ##vcore.pair? (bruijn ##.args.304 6 1)) ((bruijn ##.x.584 28 0) (close _V10_Ddecide_D301_k141) 'int (##inline ##vcore.car (bruijn ##.args.304 6 1))) ((bruijn ##.k.923 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 6-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k141, self)})),
      _V0int,
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k154(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.915 0 0) (bruijn ##.k.905 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
static void _V10_Ddecide_D301_lambda35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_lambda35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.916 0 0) 'long)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0long);
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.62.336 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.62.336 0 0))) (##vcore.call-with-values (close _V10_Ddecide_D301_k154) (close _V10_Ddecide_D301_lambda35) (bruijn ##.kk.31.305 11 1)) ((bruijn ##.k.905 5 0) #f)) ((bruijn ##.k.905 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k154, self)})),
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.61.335 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.61.335 0 0))) ((close _V10_Ddecide_D301_k153) (##inline ##vcore.cdr (bruijn ##.expr.61.335 0 0))) ((bruijn ##.k.905 4 0) #f)) ((bruijn ##.k.905 4 0) #f))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.60.334 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.60.334 0 0))) ((close _V10_Ddecide_D301_k152) (##inline ##vcore.cdr (bruijn ##.expr.60.334 0 0))) ((bruijn ##.k.905 3 0) #f)) ((bruijn ##.k.905 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k152, .env = self }, }, 1,
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.59.333 0 0)) (if (##inline ##vcore.eq? 1 (##inline ##vcore.car (bruijn ##.expr.59.333 0 0))) ((close _V10_Ddecide_D301_k151) (##inline ##vcore.cdr (bruijn ##.expr.59.333 0 0))) ((bruijn ##.k.905 2 0) #f)) ((bruijn ##.k.905 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(1l),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k151, .env = self }, }, 1,
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
  // (if (bruijn ##.p.906 0 0) ((close _V10_Ddecide_D301_k150) (##inline ##vcore.cdr (bruijn ##.args.304 8 1))) ((bruijn ##.k.905 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k150, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 8-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
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
  // (if (##inline ##vcore.pair? (bruijn ##.args.304 7 1)) ((bruijn ##.x.584 29 0) (close _V10_Ddecide_D301_k149) 'int (##inline ##vcore.car (bruijn ##.args.304 7 1))) ((bruijn ##.k.905 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 7-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k149, self)})),
      _V0int,
      VInlineCar2(runtime,
        VGetArg(statics, 7-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k162(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.896 0 0) (bruijn ##.k.885 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
static void _V10_Ddecide_D301_lambda36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_lambda36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.897 0 0) 'unsigned-long)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0unsigned__long);
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.67.341 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.67.341 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.67.341 0 0))) (##vcore.call-with-values (close _V10_Ddecide_D301_k162) (close _V10_Ddecide_D301_lambda36) (bruijn ##.kk.31.305 12 1)) ((bruijn ##.k.885 5 0) #f)) ((bruijn ##.k.885 5 0) #f)) ((bruijn ##.k.885 5 0) #f))
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
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k162, self)})),
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.66.340 0 0)) (if (##inline ##vcore.eq? #t (##inline ##vcore.car (bruijn ##.expr.66.340 0 0))) ((close _V10_Ddecide_D301_k161) (##inline ##vcore.cdr (bruijn ##.expr.66.340 0 0))) ((bruijn ##.k.885 4 0) #f)) ((bruijn ##.k.885 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(true),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k161, .env = self }, }, 1,
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.65.339 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.65.339 0 0))) ((close _V10_Ddecide_D301_k160) (##inline ##vcore.cdr (bruijn ##.expr.65.339 0 0))) ((bruijn ##.k.885 3 0) #f)) ((bruijn ##.k.885 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k160, .env = self }, }, 1,
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.64.338 0 0)) (if (##inline ##vcore.eq? 1 (##inline ##vcore.car (bruijn ##.expr.64.338 0 0))) ((close _V10_Ddecide_D301_k159) (##inline ##vcore.cdr (bruijn ##.expr.64.338 0 0))) ((bruijn ##.k.885 2 0) #f)) ((bruijn ##.k.885 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(1l),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k159, .env = self }, }, 1,
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
  // (if (bruijn ##.p.886 0 0) ((close _V10_Ddecide_D301_k158) (##inline ##vcore.cdr (bruijn ##.args.304 9 1))) ((bruijn ##.k.885 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k158, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 9-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
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
  // (if (##inline ##vcore.pair? (bruijn ##.args.304 8 1)) ((bruijn ##.x.584 30 0) (close _V10_Ddecide_D301_k157) 'int (##inline ##vcore.car (bruijn ##.args.304 8 1))) ((bruijn ##.k.885 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 8-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k157, self)})),
      _V0int,
      VInlineCar2(runtime,
        VGetArg(statics, 8-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k170(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.877 0 0) (bruijn ##.k.867 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
static void _V10_Ddecide_D301_lambda37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_lambda37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.878 0 0) 'long-long)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0long__long);
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.72.346 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.72.346 0 0))) (##vcore.call-with-values (close _V10_Ddecide_D301_k170) (close _V10_Ddecide_D301_lambda37) (bruijn ##.kk.31.305 13 1)) ((bruijn ##.k.867 5 0) #f)) ((bruijn ##.k.867 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k170, self)})),
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.71.345 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.71.345 0 0))) ((close _V10_Ddecide_D301_k169) (##inline ##vcore.cdr (bruijn ##.expr.71.345 0 0))) ((bruijn ##.k.867 4 0) #f)) ((bruijn ##.k.867 4 0) #f))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.70.344 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.70.344 0 0))) ((close _V10_Ddecide_D301_k168) (##inline ##vcore.cdr (bruijn ##.expr.70.344 0 0))) ((bruijn ##.k.867 3 0) #f)) ((bruijn ##.k.867 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k168, .env = self }, }, 1,
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.69.343 0 0)) (if (##inline ##vcore.eq? 2 (##inline ##vcore.car (bruijn ##.expr.69.343 0 0))) ((close _V10_Ddecide_D301_k167) (##inline ##vcore.cdr (bruijn ##.expr.69.343 0 0))) ((bruijn ##.k.867 2 0) #f)) ((bruijn ##.k.867 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(2l),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k167, .env = self }, }, 1,
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
  // (if (bruijn ##.p.868 0 0) ((close _V10_Ddecide_D301_k166) (##inline ##vcore.cdr (bruijn ##.args.304 10 1))) ((bruijn ##.k.867 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k166, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 10-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
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
  // (if (##inline ##vcore.pair? (bruijn ##.args.304 9 1)) ((bruijn ##.x.584 31 0) (close _V10_Ddecide_D301_k165) 'int (##inline ##vcore.car (bruijn ##.args.304 9 1))) ((bruijn ##.k.867 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 9-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k165, self)})),
      _V0int,
      VInlineCar2(runtime,
        VGetArg(statics, 9-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k178(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.858 0 0) (bruijn ##.k.847 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
static void _V10_Ddecide_D301_lambda38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_lambda38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.859 0 0) 'unsigned-long-long)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0unsigned__long__long);
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.77.351 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.77.351 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.77.351 0 0))) (##vcore.call-with-values (close _V10_Ddecide_D301_k178) (close _V10_Ddecide_D301_lambda38) (bruijn ##.kk.31.305 14 1)) ((bruijn ##.k.847 5 0) #f)) ((bruijn ##.k.847 5 0) #f)) ((bruijn ##.k.847 5 0) #f))
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
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k178, self)})),
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.76.350 0 0)) (if (##inline ##vcore.eq? #t (##inline ##vcore.car (bruijn ##.expr.76.350 0 0))) ((close _V10_Ddecide_D301_k177) (##inline ##vcore.cdr (bruijn ##.expr.76.350 0 0))) ((bruijn ##.k.847 4 0) #f)) ((bruijn ##.k.847 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(true),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k177, .env = self }, }, 1,
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.75.349 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.75.349 0 0))) ((close _V10_Ddecide_D301_k176) (##inline ##vcore.cdr (bruijn ##.expr.75.349 0 0))) ((bruijn ##.k.847 3 0) #f)) ((bruijn ##.k.847 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k176, .env = self }, }, 1,
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.74.348 0 0)) (if (##inline ##vcore.eq? 2 (##inline ##vcore.car (bruijn ##.expr.74.348 0 0))) ((close _V10_Ddecide_D301_k175) (##inline ##vcore.cdr (bruijn ##.expr.74.348 0 0))) ((bruijn ##.k.847 2 0) #f)) ((bruijn ##.k.847 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(2l),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k175, .env = self }, }, 1,
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
  // (if (bruijn ##.p.848 0 0) ((close _V10_Ddecide_D301_k174) (##inline ##vcore.cdr (bruijn ##.args.304 11 1))) ((bruijn ##.k.847 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k174, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 11-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
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
  // (if (##inline ##vcore.pair? (bruijn ##.args.304 10 1)) ((bruijn ##.x.584 32 0) (close _V10_Ddecide_D301_k173) 'int (##inline ##vcore.car (bruijn ##.args.304 10 1))) ((bruijn ##.k.847 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 10-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k173, self)})),
      _V0int,
      VInlineCar2(runtime,
        VGetArg(statics, 10-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k186(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.839 0 0) (bruijn ##.k.829 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
static void _V10_Ddecide_D301_lambda39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_lambda39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.840 0 0) 'short)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0short);
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.82.356 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.82.356 0 0))) (##vcore.call-with-values (close _V10_Ddecide_D301_k186) (close _V10_Ddecide_D301_lambda39) (bruijn ##.kk.31.305 15 1)) ((bruijn ##.k.829 5 0) #f)) ((bruijn ##.k.829 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k186, self)})),
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.81.355 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.81.355 0 0))) ((close _V10_Ddecide_D301_k185) (##inline ##vcore.cdr (bruijn ##.expr.81.355 0 0))) ((bruijn ##.k.829 4 0) #f)) ((bruijn ##.k.829 4 0) #f))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.80.354 0 0)) (if (##inline ##vcore.eq? #t (##inline ##vcore.car (bruijn ##.expr.80.354 0 0))) ((close _V10_Ddecide_D301_k184) (##inline ##vcore.cdr (bruijn ##.expr.80.354 0 0))) ((bruijn ##.k.829 3 0) #f)) ((bruijn ##.k.829 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(true),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k184, .env = self }, }, 1,
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.79.353 0 0)) (if (##inline ##vcore.eq? 0 (##inline ##vcore.car (bruijn ##.expr.79.353 0 0))) ((close _V10_Ddecide_D301_k183) (##inline ##vcore.cdr (bruijn ##.expr.79.353 0 0))) ((bruijn ##.k.829 2 0) #f)) ((bruijn ##.k.829 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(0l),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k183, .env = self }, }, 1,
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
  // (if (bruijn ##.p.830 0 0) ((close _V10_Ddecide_D301_k182) (##inline ##vcore.cdr (bruijn ##.args.304 12 1))) ((bruijn ##.k.829 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k182, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 12-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
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
  // (if (##inline ##vcore.pair? (bruijn ##.args.304 11 1)) ((bruijn ##.x.584 33 0) (close _V10_Ddecide_D301_k181) 'int (##inline ##vcore.car (bruijn ##.args.304 11 1))) ((bruijn ##.k.829 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 11-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k181, self)})),
      _V0int,
      VInlineCar2(runtime,
        VGetArg(statics, 11-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k194(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.820 0 0) (bruijn ##.k.809 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
static void _V10_Ddecide_D301_lambda40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_lambda40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.821 0 0) 'unsigned-short)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0unsigned__short);
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.87.361 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.87.361 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.87.361 0 0))) (##vcore.call-with-values (close _V10_Ddecide_D301_k194) (close _V10_Ddecide_D301_lambda40) (bruijn ##.kk.31.305 16 1)) ((bruijn ##.k.809 5 0) #f)) ((bruijn ##.k.809 5 0) #f)) ((bruijn ##.k.809 5 0) #f))
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
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k194, self)})),
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.86.360 0 0)) (if (##inline ##vcore.eq? #t (##inline ##vcore.car (bruijn ##.expr.86.360 0 0))) ((close _V10_Ddecide_D301_k193) (##inline ##vcore.cdr (bruijn ##.expr.86.360 0 0))) ((bruijn ##.k.809 4 0) #f)) ((bruijn ##.k.809 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(true),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k193, .env = self }, }, 1,
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.85.359 0 0)) (if (##inline ##vcore.eq? #t (##inline ##vcore.car (bruijn ##.expr.85.359 0 0))) ((close _V10_Ddecide_D301_k192) (##inline ##vcore.cdr (bruijn ##.expr.85.359 0 0))) ((bruijn ##.k.809 3 0) #f)) ((bruijn ##.k.809 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(true),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k192, .env = self }, }, 1,
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.84.358 0 0)) (if (##inline ##vcore.eq? 0 (##inline ##vcore.car (bruijn ##.expr.84.358 0 0))) ((close _V10_Ddecide_D301_k191) (##inline ##vcore.cdr (bruijn ##.expr.84.358 0 0))) ((bruijn ##.k.809 2 0) #f)) ((bruijn ##.k.809 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(0l),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k191, .env = self }, }, 1,
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
  // (if (bruijn ##.p.810 0 0) ((close _V10_Ddecide_D301_k190) (##inline ##vcore.cdr (bruijn ##.args.304 13 1))) ((bruijn ##.k.809 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k190, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 13-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
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
  // (if (##inline ##vcore.pair? (bruijn ##.args.304 12 1)) ((bruijn ##.x.584 34 0) (close _V10_Ddecide_D301_k189) 'int (##inline ##vcore.car (bruijn ##.args.304 12 1))) ((bruijn ##.k.809 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 12-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k189, self)})),
      _V0int,
      VInlineCar2(runtime,
        VGetArg(statics, 12-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k202(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.797 0 0) (bruijn ##.k.787 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
static void _V10_Ddecide_D301_k203(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.special.363 6 0)) ((bruijn ##.x.584 42 0) (bruijn ##.k.801 0 0) (##inline ##vcore.car (bruijn ##.special.363 6 0)) (##string ##.string.1733)) ((bruijn ##.k.801 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 6-1, 0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 42-1, 0)), 3,
      _var0,
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 0)),
      VEncodePointer(&_V10_Dstring_D1733.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k205(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.x.93.368 0 0) ((bruijn ##.k.798 2 0) (bruijn ##.x.93.368 0 0)) ((bruijn ##.k.798 2 0) (bruijn ##.special.363 7 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VGetArg(statics, 7-1, 0));
}
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
  // (if (bruijn ##.p.799 0 0) ((bruijn ##.k.798 1 0) 'unsigned-int) ((bruijn ##.find-typedef.221 23 1) (close _V10_Ddecide_D301_k205) (bruijn ##.special.363 6 0) (bruijn ##.table.299 22 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      _V0unsigned__int);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 1)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k205, self)})),
      VGetArg(statics, 6-1, 0),
      VGetArg(statics, 22-1, 2));
}
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
  // ((close _V10_Ddecide_D301_k203) (close _V10_Ddecide_D301_k204))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k203, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k204, self)})));
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.92.367 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.92.367 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.92.367 0 0))) (##vcore.call-with-values (close _V10_Ddecide_D301_k202) (close _V10_Ddecide_D301_lambda41) (bruijn ##.kk.31.305 17 1)) ((bruijn ##.k.787 5 0) #f)) ((bruijn ##.k.787 5 0) #f)) ((bruijn ##.k.787 5 0) #f))
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
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k202, self)})),
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.91.366 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.91.366 0 0))) ((close _V10_Ddecide_D301_k201) (##inline ##vcore.cdr (bruijn ##.expr.91.366 0 0))) ((bruijn ##.k.787 4 0) #f)) ((bruijn ##.k.787 4 0) #f))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.90.365 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.90.365 0 0))) ((close _V10_Ddecide_D301_k200) (##inline ##vcore.cdr (bruijn ##.expr.90.365 0 0))) ((bruijn ##.k.787 3 0) #f)) ((bruijn ##.k.787 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k200, .env = self }, }, 1,
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.89.364 0 0)) (if (##inline ##vcore.eq? 0 (##inline ##vcore.car (bruijn ##.expr.89.364 0 0))) ((close _V10_Ddecide_D301_k199) (##inline ##vcore.cdr (bruijn ##.expr.89.364 0 0))) ((bruijn ##.k.787 2 0) #f)) ((bruijn ##.k.787 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(0l),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k199, .env = self }, }, 1,
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
  // ((close _V10_Ddecide_D301_k198) (##inline ##vcore.cdr (bruijn ##.args.304 14 1)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k198, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 14-1, 1)));
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
  // (if (##inline ##vcore.pair? (bruijn ##.args.304 13 1)) ((close _V10_Ddecide_D301_k197) (##inline ##vcore.car (bruijn ##.args.304 13 1))) ((bruijn ##.k.787 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 13-1, 1)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k197, .env = self }, }, 1,
      VInlineCar2(runtime,
        VGetArg(statics, 13-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Ddecide_D301_k207(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.587 34 0) (bruijn ##.k.779 1 0) (##string ##.string.1734) (bruijn ##.x.780 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1734.sym, VPOINTER_OTHER),
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
  // ((bruijn ##.x.578 42 0) (close _V10_Ddecide_D301_k207) (bruijn ##.x.580 40 0) (bruijn ##.args.304 14 1) (##inline ##vcore.qcons 'special (##inline ##vcore.qcons 'longs (##inline ##vcore.qcons 'short (##inline ##vcore.qcons 'unsigned (##inline ##vcore.qcons 'signed '()))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 42-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k207, self)})),
      VGetArg(statics, 40-1, 0),
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
  // (##vcore.call-with-values (bruijn ##.k.766 12 0) (close _V10_Ddecide_D301_lambda42) (bruijn ##.kk.31.305 12 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 12-1, 0),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_lambda42, self)})),
      VGetArg(statics, 12-1, 1));
}
static void _V10_Ddecide_D301_k195(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Ddecide_D301_k196) (close _V10_Ddecide_D301_k206))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k196, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k206, self)})));
}
static void _V10_Ddecide_D301_k187(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Ddecide_D301_k188) (close _V10_Ddecide_D301_k195))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k188, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k195, self)})));
}
static void _V10_Ddecide_D301_k179(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Ddecide_D301_k180) (close _V10_Ddecide_D301_k187))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k180, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k187, self)})));
}
static void _V10_Ddecide_D301_k171(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Ddecide_D301_k172) (close _V10_Ddecide_D301_k179))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k172, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k179, self)})));
}
static void _V10_Ddecide_D301_k163(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Ddecide_D301_k164) (close _V10_Ddecide_D301_k171))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k164, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k171, self)})));
}
static void _V10_Ddecide_D301_k155(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Ddecide_D301_k156) (close _V10_Ddecide_D301_k163))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k156, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k163, self)})));
}
static void _V10_Ddecide_D301_k147(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Ddecide_D301_k148) (close _V10_Ddecide_D301_k155))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k148, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k155, self)})));
}
static void _V10_Ddecide_D301_k139(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Ddecide_D301_k140) (close _V10_Ddecide_D301_k147))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k140, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k147, self)})));
}
static void _V10_Ddecide_D301_k131(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Ddecide_D301_k132) (close _V10_Ddecide_D301_k139))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k132, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k139, self)})));
}
static void _V10_Ddecide_D301_k123(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Ddecide_D301_k124) (close _V10_Ddecide_D301_k131))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k124, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k131, self)})));
}
static void _V10_Ddecide_D301_k115(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D301_k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Ddecide_D301_k116) (close _V10_Ddecide_D301_k123))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k116, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k123, self)})));
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
  // ((close _V10_Ddecide_D301_k108) (close _V10_Ddecide_D301_k115))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Ddecide_D301_k108, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_k115, self)})));
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
  // (##vcore.call/cc (bruijn ##.k.765 0 0) (close _V10_Ddecide_D301_lambda29))
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
  // (if (bruijn ##.const?.370 0 1) ((bruijn ##.x.580 26 0) (bruijn ##.k.1020 0 0) 'const (bruijn ##.type.371 0 2)) ((bruijn ##.k.1020 0 0) (bruijn ##.type.371 0 2)))
if(VDecodeBool(
_var1)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 3,
      _var0,
      _V0const,
      _var2);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var2);
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
  // (basic-block 1 1 (##.reg.1709) ((##vcore.string? (bruijn ##.x.372 1 1))) (if (bruijn ##.reg.1709 0 0) (##vcore.string->symbol (bruijn ##.k.1021 1 0) (bruijn ##.x.372 1 1)) ((bruijn ##.k.1021 1 0) (bruijn ##.x.372 1 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VStringSymbol2, 2,
      statics->vars[0],
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[1]);
}
    }
}
static void _V10_Dloop_D373_k208(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D373_k208, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.special.376 1 3) ((bruijn ##.k.1027 0 0) (bruijn ##.special.376 1 3)) ((bruijn ##.k.1027 0 0) 'int))
if(VDecodeBool(
statics->vars[3])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[3]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0int);
}
}
static void _V10_Dloop_D373_k210(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D373_k210, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.append-const.302 4 1) (bruijn ##.k.1023 2 0) (bruijn ##.const.377 2 4) (bruijn ##.x.1025 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      statics->up->vars[0],
      statics->up->vars[4],
      _var0);
}
static void _V10_Dloop_D373_k209(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D373_k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.decide.301 3 0) (close _V10_Dloop_D373_k210) (bruijn ##.x.1026 0 0) (bruijn ##.longs.378 1 5) (bruijn ##.short.379 1 6) (bruijn ##.unsigned.380 1 7) (bruijn ##.signed.381 1 8))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 6,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D373_k210, self)})),
      _var0,
      statics->vars[5],
      statics->vars[6],
      statics->vars[7],
      statics->vars[8]);
}
static void _V10_Dloop_D373_k214(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D373_k214, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1058 1 0) ((bruijn ##.k.1059 0 0) (bruijn ##.p.1058 1 0)) (##vcore.eqv? (bruijn ##.k.1059 0 0) (bruijn ##.x.30.382 3 0) 'volatile))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      _var0,
      statics->up->up->vars[0],
      _V0volatile);
}
}
static void _V10_Dloop_D373_k220(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D373_k220, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1057 0 0) ((bruijn ##.k.1054 3 0) (bruijn ##.p.1057 0 0)) (##vcore.eqv? (bruijn ##.k.1054 3 0) (bruijn ##.x.30.382 8 0) 'auto))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      _var0);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      statics->up->up->vars[0],
      VGetArg(statics, 8-1, 0),
      _V0auto);
}
}
static void _V10_Dloop_D373_k219(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D373_k219, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1056 0 0) ((bruijn ##.k.1054 2 0) (bruijn ##.p.1056 0 0)) (##vcore.eqv? (close _V10_Dloop_D373_k220) (bruijn ##.x.30.382 7 0) 'register))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _var0);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D373_k220, self)})),
      VGetArg(statics, 7-1, 0),
      _V0register);
}
}
static void _V10_Dloop_D373_k218(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D373_k218, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1055 0 0) ((bruijn ##.k.1054 1 0) (bruijn ##.p.1055 0 0)) (##vcore.eqv? (close _V10_Dloop_D373_k219) (bruijn ##.x.30.382 6 0) 'typedef))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      _var0);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D373_k219, self)})),
      VGetArg(statics, 6-1, 0),
      _V0typedef);
}
}
static void _V10_Dloop_D373_k217(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D373_k217, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1053 1 0) ((bruijn ##.k.1054 0 0) (bruijn ##.p.1053 1 0)) (##vcore.eqv? (close _V10_Dloop_D373_k218) (bruijn ##.x.30.382 5 0) 'extern))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D373_k218, self)})),
      VGetArg(statics, 5-1, 0),
      _V0extern);
}
}
static void _V10_Dloop_D373_k222(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D373_k222, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.not (bruijn ##.storage-declaration?.300 10 3)) ((bruijn ##.x.587 27 0) (bruijn ##.k.1040 0 0) (##string ##.string.1735)) ((bruijn ##.k.1040 0 0) (##inline ##vcore.car (bruijn ##.t.374 7 1))))
if(VDecodeBool(
VInlineNot2(runtime,
        VGetArg(statics, 10-1, 3)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D1735.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCar2(runtime,
        VGetArg(statics, 7-1, 1)));
}
}
static void _V10_Dloop_D373_k224(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D373_k224, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.storage.375 8 2) ((bruijn ##.x.587 28 0) (bruijn ##.k.1037 0 0) (##string ##.string.1736) (bruijn ##.storage.375 8 2) (##inline ##vcore.car (bruijn ##.t.374 8 1))) ((bruijn ##.k.1037 0 0) #f))
if(VDecodeBool(
VGetArg(statics, 8-1, 2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 4,
      _var0,
      VEncodePointer(&_V10_Dstring_D1736.sym, VPOINTER_OTHER),
      VGetArg(statics, 8-1, 2),
      VInlineCar2(runtime,
        VGetArg(statics, 8-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D373_k225(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D373_k225, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.373 9 0) (bruijn ##.k.1023 8 0) (##inline ##vcore.cdr (bruijn ##.t.374 8 1)) (##inline ##vcore.car (bruijn ##.t.374 8 1)) (bruijn ##.special.376 8 3) (bruijn ##.const.377 8 4) (bruijn ##.longs.378 8 5) (bruijn ##.short.379 8 6) (bruijn ##.unsigned.380 8 7) (bruijn ##.signed.381 8 8))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 9,
      VGetArg(statics, 8-1, 0),
      VInlineCdr2(runtime,
        VGetArg(statics, 8-1, 1)),
      VInlineCar2(runtime,
        VGetArg(statics, 8-1, 1)),
      VGetArg(statics, 8-1, 3),
      VGetArg(statics, 8-1, 4),
      VGetArg(statics, 8-1, 5),
      VGetArg(statics, 8-1, 6),
      VGetArg(statics, 8-1, 7),
      VGetArg(statics, 8-1, 8));
}
static void _V10_Dloop_D373_k223(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D373_k223, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D373_k224) (close _V10_Dloop_D373_k225))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D373_k224, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D373_k225, self)})));
}
static void _V10_Dloop_D373_k229(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D373_k229, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1048 0 0) ((bruijn ##.loop.373 11 0) (bruijn ##.k.1023 10 0) (##inline ##vcore.cdr (bruijn ##.t.374 10 1)) (bruijn ##.storage.375 10 2) (bruijn ##.special.376 10 3) (bruijn ##.const.377 10 4) (bruijn ##.longs.378 10 5) (bruijn ##.short.379 10 6) (bruijn ##.unsigned.380 10 7) #t) (if (bruijn ##.special.376 10 3) ((bruijn ##.x.587 30 0) (bruijn ##.k.1023 10 0) (##string ##.string.1737) (##inline ##vcore.car (bruijn ##.t.374 10 1)) (bruijn ##.special.376 10 3)) ((bruijn ##.loop.373 11 0) (bruijn ##.k.1023 10 0) (##inline ##vcore.cdr (bruijn ##.t.374 10 1)) (bruijn ##.storage.375 10 2) (##inline ##vcore.car (bruijn ##.t.374 10 1)) (bruijn ##.const.377 10 4) (bruijn ##.longs.378 10 5) (bruijn ##.short.379 10 6) (bruijn ##.unsigned.380 10 7) (bruijn ##.signed.381 10 8))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 9,
      VGetArg(statics, 10-1, 0),
      VInlineCdr2(runtime,
        VGetArg(statics, 10-1, 1)),
      VGetArg(statics, 10-1, 2),
      VGetArg(statics, 10-1, 3),
      VGetArg(statics, 10-1, 4),
      VGetArg(statics, 10-1, 5),
      VGetArg(statics, 10-1, 6),
      VGetArg(statics, 10-1, 7),
      VEncodeBool(true));
} else {
if(VDecodeBool(
VGetArg(statics, 10-1, 3))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 4,
      VGetArg(statics, 10-1, 0),
      VEncodePointer(&_V10_Dstring_D1737.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        VGetArg(statics, 10-1, 1)),
      VGetArg(statics, 10-1, 3));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 9,
      VGetArg(statics, 10-1, 0),
      VInlineCdr2(runtime,
        VGetArg(statics, 10-1, 1)),
      VGetArg(statics, 10-1, 2),
      VInlineCar2(runtime,
        VGetArg(statics, 10-1, 1)),
      VGetArg(statics, 10-1, 4),
      VGetArg(statics, 10-1, 5),
      VGetArg(statics, 10-1, 6),
      VGetArg(statics, 10-1, 7),
      VGetArg(statics, 10-1, 8));
}
}
}
static void _V10_Dloop_D373_k228(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D373_k228, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1046 0 0) ((bruijn ##.loop.373 10 0) (bruijn ##.k.1023 9 0) (##inline ##vcore.cdr (bruijn ##.t.374 9 1)) (bruijn ##.storage.375 9 2) (bruijn ##.special.376 9 3) (bruijn ##.const.377 9 4) (bruijn ##.longs.378 9 5) (bruijn ##.short.379 9 6) #t (bruijn ##.signed.381 9 8)) (##vcore.eqv? (close _V10_Dloop_D373_k229) (bruijn ##.x.30.382 8 0) 'signed))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 9,
      VGetArg(statics, 9-1, 0),
      VInlineCdr2(runtime,
        VGetArg(statics, 9-1, 1)),
      VGetArg(statics, 9-1, 2),
      VGetArg(statics, 9-1, 3),
      VGetArg(statics, 9-1, 4),
      VGetArg(statics, 9-1, 5),
      VGetArg(statics, 9-1, 6),
      VEncodeBool(true),
      VGetArg(statics, 9-1, 8));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D373_k229, self)})),
      VGetArg(statics, 8-1, 0),
      _V0signed);
}
}
static void _V10_Dloop_D373_k227(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D373_k227, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1044 0 0) ((bruijn ##.loop.373 9 0) (bruijn ##.k.1023 8 0) (##inline ##vcore.cdr (bruijn ##.t.374 8 1)) (bruijn ##.storage.375 8 2) (bruijn ##.special.376 8 3) (bruijn ##.const.377 8 4) (bruijn ##.longs.378 8 5) #t (bruijn ##.unsigned.380 8 7) (bruijn ##.signed.381 8 8)) (##vcore.eqv? (close _V10_Dloop_D373_k228) (bruijn ##.x.30.382 7 0) 'unsigned))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 9,
      VGetArg(statics, 8-1, 0),
      VInlineCdr2(runtime,
        VGetArg(statics, 8-1, 1)),
      VGetArg(statics, 8-1, 2),
      VGetArg(statics, 8-1, 3),
      VGetArg(statics, 8-1, 4),
      VGetArg(statics, 8-1, 5),
      VEncodeBool(true),
      VGetArg(statics, 8-1, 7),
      VGetArg(statics, 8-1, 8));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D373_k228, self)})),
      VGetArg(statics, 7-1, 0),
      _V0unsigned);
}
}
static void _V10_Dloop_D373_k226(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D373_k226, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1041 0 0) (basic-block 1 1 (##.reg.1710) ((##vcore.+ (bruijn ##.longs.378 8 5) 1)) ((bruijn ##.loop.373 9 0) (bruijn ##.k.1023 8 0) (##inline ##vcore.cdr (bruijn ##.t.374 8 1)) (bruijn ##.storage.375 8 2) (bruijn ##.special.376 8 3) (bruijn ##.const.377 8 4) (bruijn ##.reg.1710 0 0) (bruijn ##.short.379 8 6) (bruijn ##.unsigned.380 8 7) (bruijn ##.signed.381 8 8))) (##vcore.eqv? (close _V10_Dloop_D373_k227) (bruijn ##.x.30.382 6 0) 'short))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 8-1, 5),
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 9,
      VGetArg(statics, 8-1, 0),
      VInlineCdr2(runtime,
        VGetArg(statics, 8-1, 1)),
      VGetArg(statics, 8-1, 2),
      VGetArg(statics, 8-1, 3),
      VGetArg(statics, 8-1, 4),
      self->vars[0],
      VGetArg(statics, 8-1, 6),
      VGetArg(statics, 8-1, 7),
      VGetArg(statics, 8-1, 8));
    }
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D373_k227, self)})),
      VGetArg(statics, 6-1, 0),
      _V0short);
}
}
static void _V10_Dloop_D373_k221(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D373_k221, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1032 0 0) ((close _V10_Dloop_D373_k222) (close _V10_Dloop_D373_k223)) (##vcore.eqv? (close _V10_Dloop_D373_k226) (bruijn ##.x.30.382 5 0) 'long))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D373_k222, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D373_k223, self)})));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D373_k226, self)})),
      VGetArg(statics, 5-1, 0),
      _V0long);
}
}
static void _V10_Dloop_D373_k216(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D373_k216, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D373_k217) (close _V10_Dloop_D373_k221))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D373_k217, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D373_k221, self)})));
}
static void _V10_Dloop_D373_k215(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D373_k215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1030 0 0) ((bruijn ##.loop.373 5 0) (bruijn ##.k.1023 4 0) (##inline ##vcore.cdr (bruijn ##.t.374 4 1)) (bruijn ##.storage.375 4 2) (bruijn ##.special.376 4 3) (bruijn ##.const.377 4 4) (bruijn ##.longs.378 4 5) (bruijn ##.short.379 4 6) (bruijn ##.unsigned.380 4 7) (bruijn ##.signed.381 4 8)) (##vcore.eqv? (close _V10_Dloop_D373_k216) (bruijn ##.x.30.382 3 0) 'static))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 9,
      statics->up->up->up->vars[0],
      VInlineCdr2(runtime,
        statics->up->up->up->vars[1]),
      statics->up->up->up->vars[2],
      statics->up->up->up->vars[3],
      statics->up->up->up->vars[4],
      statics->up->up->up->vars[5],
      statics->up->up->up->vars[6],
      statics->up->up->up->vars[7],
      statics->up->up->up->vars[8]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D373_k216, self)})),
      statics->up->up->vars[0],
      _V0static);
}
}
static void _V10_Dloop_D373_k213(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D373_k213, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D373_k214) (close _V10_Dloop_D373_k215))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D373_k214, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D373_k215, self)})));
}
static void _V10_Dloop_D373_k212(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D373_k212, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1028 0 0) ((bruijn ##.loop.373 3 0) (bruijn ##.k.1023 2 0) (##inline ##vcore.cdr (bruijn ##.t.374 2 1)) (bruijn ##.storage.375 2 2) (bruijn ##.special.376 2 3) #t (bruijn ##.longs.378 2 5) (bruijn ##.short.379 2 6) (bruijn ##.unsigned.380 2 7) (bruijn ##.signed.381 2 8)) (##vcore.eqv? (close _V10_Dloop_D373_k213) (bruijn ##.x.30.382 1 0) 'restrict))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 9,
      statics->up->vars[0],
      VInlineCdr2(runtime,
        statics->up->vars[1]),
      statics->up->vars[2],
      statics->up->vars[3],
      VEncodeBool(true),
      statics->up->vars[5],
      statics->up->vars[6],
      statics->up->vars[7],
      statics->up->vars[8]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D373_k213, self)})),
      statics->vars[0],
      _V0restrict);
}
}
static void _V10_Dloop_D373_k211(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D373_k211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.eqv? (close _V10_Dloop_D373_k212) (bruijn ##.x.30.382 0 0) 'const)
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D373_k212, self)})),
      _var0,
      _V0const);
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
  // (if (##inline ##vcore.null? (bruijn ##.t.374 0 1)) ((close _V10_Dloop_D373_k208) (close _V10_Dloop_D373_k209)) ((close _V10_Dloop_D373_k211) (##inline ##vcore.car (bruijn ##.t.374 0 1))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D373_k208, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D373_k209, self)})));
} else {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D373_k211, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var1));
}
}
static void _V10_Dreduce__type_D222_k230(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__type_D222_k230, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.373 1 0) (bruijn ##.k.764 3 0) (bruijn ##.x.1060 0 0) #f #f #f 0 #f #f #f)
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
  // (letrec 3 ((close _V10_Ddecide_D301_lambda28) (close _V10_Dappend__const_D302_lambda43) (close _V10_Dmaybe__string___Gsymbol_D303_lambda44)) (letrec 1 ((close _V10_Dloop_D373_lambda45)) ((bruijn ##.x.578 28 0) (close _V10_Dreduce__type_D222_k230) (bruijn ##.maybe-string->symbol.303 1 2) (bruijn ##.t.298 2 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D301_lambda28, self)}));
    self->vars[1] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dappend__const_D302_lambda43, self)}));
    self->vars[2] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmaybe__string___Gsymbol_D303_lambda44, self)}));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D373_lambda45, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__type_D222_k230, self)})),
      statics->vars[2],
      statics->up->vars[1]);
    }
    }
}
static void _V10_Dunwrap__typedef_D223_k237(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__typedef_D223_k237, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1071 0 0) (bruijn ##.k.1066 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
static void _V10_Dunwrap__typedef_D223_k238(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__typedef_D223_k238, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.not (bruijn ##.reg.1711 1 0)) ((bruijn ##.x.587 27 0) (bruijn ##.k.1078 0 0) (##string ##.string.1738) (bruijn ##.expr.386 9 0)) ((bruijn ##.k.1078 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1738.sym, VPOINTER_OTHER),
      VGetArg(statics, 9-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dunwrap__typedef_D223_k240(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__typedef_D223_k240, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1072 3 0) (##inline ##vcore.cons 'typedef (##inline ##vcore.cons (bruijn ##.x.1075 0 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.97.390 6 0)) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0typedef,
        VInlineCons2(runtime,
        _var0,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 6-1, 0)),
        VNULL))));
}
static void _V10_Dunwrap__typedef_D223_k239(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__typedef_D223_k239, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.string->symbol (close _V10_Dunwrap__typedef_D223_k240) (bruijn ##.name.393 3 0))
    VCallFuncWithGC(runtime, (VFunc)VStringSymbol2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__typedef_D223_k240, self)})),
      statics->up->up->vars[0]);
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
  // (basic-block 1 1 (##.reg.1711) ((##vcore.string? (bruijn ##.name.393 2 0))) ((close _V10_Dunwrap__typedef_D223_k238) (close _V10_Dunwrap__typedef_D223_k239)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringP2(runtime, NULL,
      statics->up->vars[0]);
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dunwrap__typedef_D223_k238, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__typedef_D223_k239, self)})));
    }
}
static void _V10_Dunwrap__typedef_D223_k236(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__typedef_D223_k236, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.98.392 1 0))) (##vcore.call-with-values (close _V10_Dunwrap__typedef_D223_k237) (close _V10_Dunwrap__typedef_D223_lambda48) (bruijn ##.kk.94.387 5 1)) ((bruijn ##.k.1066 4 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__typedef_D223_k237, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__typedef_D223_lambda48, self)})),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dunwrap__typedef_D223_k235(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__typedef_D223_k235, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.98.392 0 0)) ((close _V10_Dunwrap__typedef_D223_k236) (##inline ##vcore.car (bruijn ##.expr.98.392 0 0))) ((bruijn ##.k.1066 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dunwrap__typedef_D223_k236, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dunwrap__typedef_D223_k234(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__typedef_D223_k234, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.97.390 0 0)) ((close _V10_Dunwrap__typedef_D223_k235) (##inline ##vcore.cdr (bruijn ##.expr.97.390 0 0))) ((bruijn ##.k.1066 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dunwrap__typedef_D223_k235, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dunwrap__typedef_D223_k233(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__typedef_D223_k233, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1067 0 0) ((close _V10_Dunwrap__typedef_D223_k234) (##inline ##vcore.cdr (bruijn ##.expr.386 3 0))) ((bruijn ##.k.1066 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dunwrap__typedef_D223_k234, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dunwrap__typedef_D223_k232(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__typedef_D223_k232, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.386 2 0)) ((bruijn ##.x.584 23 0) (close _V10_Dunwrap__typedef_D223_k233) 'variable (##inline ##vcore.car (bruijn ##.expr.386 2 0))) ((bruijn ##.k.1066 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__typedef_D223_k233, self)})),
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
  // ((bruijn ##.x.587 21 0) (bruijn ##.k.1064 0 0) (##string ##.string.1739) (bruijn ##.expr.386 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1739.sym, VPOINTER_OTHER),
      statics->up->up->vars[0]);
}
static void _V10_Dunwrap__typedef_D223_k241(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__typedef_D223_k241, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1062 1 0) (close _V10_Dunwrap__typedef_D223_lambda49) (bruijn ##.kk.94.387 1 1))
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
  // ((close _V10_Dunwrap__typedef_D223_k232) (close _V10_Dunwrap__typedef_D223_k241))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dunwrap__typedef_D223_k232, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__typedef_D223_k241, self)})));
}
static void _V10_Dunwrap__typedef_D223_k231(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__typedef_D223_k231, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1061 1 0) (close _V10_Dunwrap__typedef_D223_lambda47))
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
  // ((bruijn ##.reduce-declare.220 1 0) (close _V10_Dunwrap__typedef_D223_k231) (bruijn ##.ret.383 0 1) (bruijn ##.decl.384 0 2) (bruijn ##.table.385 0 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__typedef_D223_k231, self)})),
      _var1,
      _var2,
      _var3);
}
static void _V10_Dunwrap__function_D224_k250(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D224_k250, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1091 0 0) (bruijn ##.k.1087 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
}
static void _V10_Dunwrap__function_D224_k252(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D224_k252, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.not (bruijn ##.x.1107 1 0)) ((bruijn ##.x.587 29 0) (bruijn ##.k.1106 0 0) (##string ##.string.1740) (bruijn ##.expr.397 11 0)) ((bruijn ##.k.1106 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1740.sym, VPOINTER_OTHER),
      VGetArg(statics, 11-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dunwrap__function_D224_k254(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D224_k254, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.not (bruijn ##.reg.1712 1 0)) ((bruijn ##.x.587 31 0) (bruijn ##.k.1103 0 0) (##string ##.string.1741) (bruijn ##.expr.397 13 0)) ((bruijn ##.k.1103 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1741.sym, VPOINTER_OTHER),
      VGetArg(statics, 13-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dunwrap__function_D224_k257(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D224_k257, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1092 6 0) (##inline ##vcore.cons 'function (##inline ##vcore.cons (bruijn ##.x.1097 0 0) (##inline ##vcore.cons (bruijn ##.ret.404 8 0) (bruijn ##.args.405 7 0)))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VInlineCons2(runtime,
        _V0function,
        VInlineCons2(runtime,
        _var0,
        VInlineCons2(runtime,
        VGetArg(statics, 8-1, 0),
        VGetArg(statics, 7-1, 0)))));
}
static void _V10_Dunwrap__function_D224_k256(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D224_k256, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.string->symbol (close _V10_Dunwrap__function_D224_k257) (bruijn ##.name.402 9 0))
    VCallFuncWithGC(runtime, (VFunc)VStringSymbol2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__function_D224_k257, self)})),
      VGetArg(statics, 9-1, 0));
}
static void _V10_Dunwrap__function_D224_k258(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D224_k258, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.not (bruijn ##.x.1101 0 0)) ((bruijn ##.x.587 33 0) (bruijn ##.k.1099 1 0) (##string ##.string.1742) (bruijn ##.name.402 10 0) (bruijn ##.arg.406 1 1)) ((bruijn ##.k.1099 1 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 4,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1742.sym, VPOINTER_OTHER),
      VGetArg(statics, 10-1, 0),
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
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
  // ((bruijn ##.get-foreign-decoder.236 16 16) (close _V10_Dunwrap__function_D224_k258) (bruijn ##.arg.406 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 16)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__function_D224_k258, self)})),
      _var1);
}
static void _V10_Dunwrap__function_D224_k255(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D224_k255, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.588 30 0) (close _V10_Dunwrap__function_D224_k256) (close _V10_Dunwrap__function_D224_lambda53) (bruijn ##.args.405 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__function_D224_k256, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__function_D224_lambda53, self)})),
      VGetArg(statics, 5-1, 0));
}
static void _V10_Dunwrap__function_D224_k253(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D224_k253, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.1712) ((##vcore.string? (bruijn ##.name.402 7 0))) ((close _V10_Dunwrap__function_D224_k254) (close _V10_Dunwrap__function_D224_k255)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringP2(runtime, NULL,
      VGetArg(statics, 7-1, 0));
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dunwrap__function_D224_k254, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__function_D224_k255, self)})));
    }
}
static void _V10_Dunwrap__function_D224_k251(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D224_k251, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dunwrap__function_D224_k252) (close _V10_Dunwrap__function_D224_k253))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dunwrap__function_D224_k252, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__function_D224_k253, self)})));
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
  // ((bruijn ##.get-foreign-encoder.235 11 15) (close _V10_Dunwrap__function_D224_k251) (bruijn ##.ret.404 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 15)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__function_D224_k251, self)})),
      statics->up->vars[0]);
}
static void _V10_Dunwrap__function_D224_k249(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D224_k249, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (close _V10_Dunwrap__function_D224_k250) (close _V10_Dunwrap__function_D224_lambda52) (bruijn ##.kk.99.398 7 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__function_D224_k250, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__function_D224_lambda52, self)})),
      VGetArg(statics, 7-1, 1));
}
static void _V10_Dunwrap__function_D224_k248(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D224_k248, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dunwrap__function_D224_k249) (##inline ##vcore.cdr (bruijn ##.expr.103.403 1 0)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dunwrap__function_D224_k249, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
static void _V10_Dunwrap__function_D224_k247(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D224_k247, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.103.403 0 0)) ((close _V10_Dunwrap__function_D224_k248) (##inline ##vcore.car (bruijn ##.expr.103.403 0 0))) ((bruijn ##.k.1087 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dunwrap__function_D224_k248, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dunwrap__function_D224_k246(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D224_k246, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dunwrap__function_D224_k247) (##inline ##vcore.cdr (bruijn ##.expr.102.401 1 0)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dunwrap__function_D224_k247, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
static void _V10_Dunwrap__function_D224_k245(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D224_k245, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.102.401 0 0)) ((close _V10_Dunwrap__function_D224_k246) (##inline ##vcore.car (bruijn ##.expr.102.401 0 0))) ((bruijn ##.k.1087 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dunwrap__function_D224_k246, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dunwrap__function_D224_k244(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D224_k244, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1088 0 0) ((close _V10_Dunwrap__function_D224_k245) (##inline ##vcore.cdr (bruijn ##.expr.397 3 0))) ((bruijn ##.k.1087 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dunwrap__function_D224_k245, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dunwrap__function_D224_k243(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D224_k243, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.397 2 0)) ((bruijn ##.x.584 23 0) (close _V10_Dunwrap__function_D224_k244) 'function (##inline ##vcore.car (bruijn ##.expr.397 2 0))) ((bruijn ##.k.1087 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__function_D224_k244, self)})),
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
  // ((bruijn ##.x.587 21 0) (bruijn ##.k.1085 0 0) (##string ##.string.1743) (bruijn ##.expr.397 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1743.sym, VPOINTER_OTHER),
      statics->up->up->vars[0]);
}
static void _V10_Dunwrap__function_D224_k259(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D224_k259, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1083 1 0) (close _V10_Dunwrap__function_D224_lambda54) (bruijn ##.kk.99.398 1 1))
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
  // ((close _V10_Dunwrap__function_D224_k243) (close _V10_Dunwrap__function_D224_k259))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dunwrap__function_D224_k243, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__function_D224_k259, self)})));
}
static void _V10_Dunwrap__function_D224_k242(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D224_k242, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1082 1 0) (close _V10_Dunwrap__function_D224_lambda51))
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
  // ((bruijn ##.reduce-declare.220 1 0) (close _V10_Dunwrap__function_D224_k242) (bruijn ##.ret.394 0 1) (bruijn ##.decl.395 0 2) (bruijn ##.table.396 0 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__function_D224_k242, self)})),
      _var1,
      _var2,
      _var3);
}
static void _V10_Dunwrap__enums__iter_D409_k261(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__enums__iter_D409_k261, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1120 1 0) ((bruijn ##.x.582 26 0) (bruijn ##.k.1121 0 0) (bruijn ##.enums.410 2 1)) ((bruijn ##.k.1121 0 0) (bruijn ##.val.411 2 2)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 2,
      _var0,
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[2]);
}
}
static void _V10_Dunwrap__enums__iter_D409_k264(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__enums__iter_D409_k264, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.unwrap-enums-iter.409 6 0) (bruijn ##.k.1110 5 0) (##inline ##vcore.cdr (bruijn ##.enums.410 5 1)) (bruijn ##.reg.1713 2 0) (##inline ##vcore.cons (##inline ##vcore.cons 'enum (##inline ##vcore.cons (bruijn ##.x.1117 0 0) (##inline ##vcore.cons (bruijn ##.val.413 3 0) '()))) (bruijn ##.table.412 5 3)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 4,
      VGetArg(statics, 5-1, 0),
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 1)),
      statics->up->vars[0],
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0enum,
        VInlineCons2(runtime,
        _var0,
        VInlineCons2(runtime,
        statics->up->up->vars[0],
        VNULL))),
        VGetArg(statics, 5-1, 3)));
}
static void _V10_Dunwrap__enums__iter_D409_k263(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__enums__iter_D409_k263, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.string->symbol (close _V10_Dunwrap__enums__iter_D409_k264) (bruijn ##.x.1119 0 0))
    VCallFuncWithGC(runtime, (VFunc)VStringSymbol2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__enums__iter_D409_k264, self)})),
      _var0);
}
static void _V10_Dunwrap__enums__iter_D409_k262(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__enums__iter_D409_k262, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.1713) ((##vcore.+ (bruijn ##.val.413 1 0) 1)) ((bruijn ##.x.581 28 0) (close _V10_Dunwrap__enums__iter_D409_k263) (bruijn ##.enums.410 3 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->vars[0],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__enums__iter_D409_k263, self)})),
      statics->up->up->vars[1]);
    }
}
static void _V10_Dunwrap__enums__iter_D409_k260(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__enums__iter_D409_k260, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dunwrap__enums__iter_D409_k261) (close _V10_Dunwrap__enums__iter_D409_k262))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dunwrap__enums__iter_D409_k261, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__enums__iter_D409_k262, self)})));
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
  // (if (##inline ##vcore.null? (bruijn ##.enums.410 0 1)) ((bruijn ##.k.1110 0 0) (bruijn ##.table.412 0 3)) ((bruijn ##.x.582 24 0) (close _V10_Dunwrap__enums__iter_D409_k260) (bruijn ##.enums.410 0 1)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var3);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__enums__iter_D409_k260, self)})),
      _var1);
}
}
static void _V10_Dloop_D414_k266(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D414_k266, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.584 25 0) (bruijn ##.k.1127 1 0) (bruijn ##.x.1128 0 0) (##string ##.string.1733))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 3,
      statics->vars[0],
      _var0,
      VEncodePointer(&_V10_Dstring_D1733.sym, VPOINTER_OTHER));
}
static void _V10_Dloop_D414_k265(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D414_k265, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (##inline ##vcore.car (bruijn ##.ret.415 1 1))) ((bruijn ##.x.581 27 0) (close _V10_Dloop_D414_k266) (bruijn ##.ret.415 1 1)) ((bruijn ##.k.1127 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VInlineCar2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D414_k266, self)})),
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D414_k268(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D414_k268, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.enums.416 0 0) ((bruijn ##.unwrap-enums-iter.409 4 0) (bruijn ##.k.1122 2 0) (bruijn ##.enums.416 0 0) 0 (bruijn ##.table.408 5 2)) ((bruijn ##.k.1122 2 0) (bruijn ##.table.408 5 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 4,
      statics->up->vars[0],
      _var0,
      VEncodeInt(0l),
      VGetArg(statics, 5-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VGetArg(statics, 5-1, 2));
}
}
static void _V10_Dloop_D414_k267(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D414_k267, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1124 0 0) ((bruijn ##.x.586 22 0) (close _V10_Dloop_D414_k268) (bruijn ##.ret.415 1 1)) ((bruijn ##.loop.414 2 0) (bruijn ##.k.1122 1 0) (##inline ##vcore.cdr (bruijn ##.ret.415 1 1))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D414_k268, self)})),
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 2,
      statics->vars[0],
      VInlineCdr2(runtime,
        statics->vars[1]));
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
  // (if (##inline ##vcore.null? (bruijn ##.ret.415 0 1)) ((bruijn ##.k.1122 0 0) (bruijn ##.table.408 3 2)) ((close _V10_Dloop_D414_k265) (close _V10_Dloop_D414_k267)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D414_k265, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D414_k267, self)})));
}
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
  // (letrec 1 ((close _V10_Dunwrap__enums__iter_D409_lambda56)) (letrec 1 ((close _V10_Dloop_D414_lambda57)) ((bruijn ##.loop.414 0 0) (bruijn ##.k.1109 2 0) (bruijn ##.ret.407 2 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__enums__iter_D409_lambda56, self)}));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D414_lambda57, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->up->vars[0],
      statics->up->vars[1]);
    }
    }
}
static void _V10_Dunwrap__declares_D226_k270(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D226_k270, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.reg.1716 1 0) (##vcore.blob=? (bruijn ##.k.1171 0 0) (##string ##.string.1744) (##inline ##vcore.car (bruijn ##.parse.417 4 1))) ((bruijn ##.k.1171 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VBlobEqv2, 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1744.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dunwrap__declares_D226_k272(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D226_k272, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1167 0 0) (bruijn ##.k.1164 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
static void _V10_Dunwrap__declares_D226_lambda60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D226_lambda60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1168 0 0) (bruijn ##.table.418 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 2));
}
static void _V10_Dunwrap__declares_D226_k271(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D226_k271, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1165 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.parse.417 4 1))) (##vcore.call-with-values (close _V10_Dunwrap__declares_D226_k272) (close _V10_Dunwrap__declares_D226_lambda60) (bruijn ##.kk.104.419 3 1)) ((bruijn ##.k.1164 2 0) #f)) ((bruijn ##.k.1164 2 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->up->up->up->vars[1])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__declares_D226_k272, self)})),
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
static void _V10_Dunwrap__declares_D226_k269(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D226_k269, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.parse.417 2 1)) (basic-block 1 1 (##.reg.1716) ((##vcore.string? (##inline ##vcore.car (bruijn ##.parse.417 3 1)))) ((close _V10_Dunwrap__declares_D226_k270) (close _V10_Dunwrap__declares_D226_k271))) ((bruijn ##.k.1164 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringP2(runtime, NULL,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dunwrap__declares_D226_k270, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__declares_D226_k271, self)})));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dunwrap__declares_D226_k275(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D226_k275, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.reg.1714 1 0) (##vcore.blob=? (bruijn ##.k.1160 0 0) (##string ##.string.1744) (##inline ##vcore.car (bruijn ##.parse.417 5 1))) ((bruijn ##.k.1160 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VBlobEqv2, 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1744.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dunwrap__declares_D226_k279(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D226_k279, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.reg.1715 1 0) (##vcore.blob=? (bruijn ##.k.1156 0 0) (##string ##.string.1745) (##inline ##vcore.car (bruijn ##.expr.109.424 2 0))) ((bruijn ##.k.1156 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VBlobEqv2, 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1745.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        statics->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dunwrap__declares_D226_k283(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D226_k283, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1141 0 0) (bruijn ##.k.1135 9 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 9-1, 0));
}
static void _V10_Dloop_D432_k287(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D432_k287, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.x.1143 5 0) ((bruijn ##.unwrap-typedef.223 19 3) (bruijn ##.k.1152 0 0) (bruijn ##.x.1145 3 0) (##inline ##vcore.car (bruijn ##.mydecls.433 1 1)) (bruijn ##.table.434 1 2)) ((bruijn ##.unwrap-function.224 19 4) (bruijn ##.k.1152 0 0) (bruijn ##.x.1145 3 0) (##inline ##vcore.car (bruijn ##.mydecls.433 1 1)) (bruijn ##.table.434 1 2)))
if(VDecodeBool(
VGetArg(statics, 5-1, 0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 3)), 4,
      _var0,
      statics->up->up->vars[0],
      VInlineCar2(runtime,
        statics->vars[1]),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 4)), 4,
      _var0,
      statics->up->up->vars[0],
      VInlineCar2(runtime,
        statics->vars[1]),
      statics->vars[2]);
}
}
static void _V10_Dloop_D432_k288(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D432_k288, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.432 2 0) (bruijn ##.k.1146 1 0) (##inline ##vcore.cdr (bruijn ##.mydecls.433 1 1)) (##inline ##vcore.cons (bruijn ##.x.1151 0 0) (bruijn ##.table.434 1 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 3,
      statics->vars[0],
      VInlineCdr2(runtime,
        statics->vars[1]),
      VInlineCons2(runtime,
        _var0,
        statics->vars[2]));
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
  // (if (##inline ##vcore.null? (bruijn ##.mydecls.433 0 1)) ((bruijn ##.unwrap-declares.226 18 6) (bruijn ##.k.1146 0 0) (##inline ##vcore.cons '(##string ##.string.1744) (##inline ##vcore.cdr (bruijn ##.expr.108.423 11 0))) (bruijn ##.table.434 0 2)) ((close _V10_Dloop_D432_k287) (close _V10_Dloop_D432_k288)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 6)), 3,
      _var0,
      VInlineCons2(runtime,
        VEncodePointer(&_V10_Dstring_D1744.sym, VPOINTER_OTHER),
        VInlineCdr2(runtime,
        VGetArg(statics, 11-1, 0))),
      _var2);
} else {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D432_k287, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D432_k288, self)})));
}
}
static void _V10_Dunwrap__declares_D226_k286(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D226_k286, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close _V10_Dloop_D432_lambda62)) ((bruijn ##.loop.432 0 0) (bruijn ##.k.1142 4 0) (##inline ##vcore.cdr (bruijn ##.expr.110.425 6 0)) (bruijn ##.x.1144 2 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D432_lambda62, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->up->up->up->vars[0],
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 0)),
      statics->up->vars[0]);
    }
}
static void _V10_Dunwrap__declares_D226_k285(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D226_k285, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.reduce-type.222 15 2) (close _V10_Dunwrap__declares_D226_k286) (bruijn ##.ret.426 3 0) (bruijn ##.table.418 14 2) #t)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 2)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__declares_D226_k286, self)})),
      statics->up->up->vars[0],
      VGetArg(statics, 14-1, 2),
      VEncodeBool(true));
}
static void _V10_Dunwrap__declares_D226_k284(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D226_k284, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.unwrap-enums.225 14 5) (close _V10_Dunwrap__declares_D226_k285) (bruijn ##.ret.426 2 0) (bruijn ##.table.418 13 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 5)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__declares_D226_k285, self)})),
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
  // ((bruijn ##.x.589 27 0) (close _V10_Dunwrap__declares_D226_k284) (##string ##.string.1746) (bruijn ##.ret.426 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__declares_D226_k284, self)})),
      VEncodePointer(&_V10_Dstring_D1746.sym, VPOINTER_OTHER),
      statics->vars[0]);
}
static void _V10_Dunwrap__declares_D226_k282(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D226_k282, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (close _V10_Dunwrap__declares_D226_k283) (close _V10_Dunwrap__declares_D226_lambda61) (bruijn ##.kk.104.419 10 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__declares_D226_k283, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__declares_D226_lambda61, self)})),
      VGetArg(statics, 10-1, 1));
}
static void _V10_Dunwrap__declares_D226_k281(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D226_k281, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.110.425 0 0)) ((close _V10_Dunwrap__declares_D226_k282) (##inline ##vcore.car (bruijn ##.expr.110.425 0 0))) ((bruijn ##.k.1135 7 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dunwrap__declares_D226_k282, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dunwrap__declares_D226_k280(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D226_k280, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1139 0 0) ((close _V10_Dunwrap__declares_D226_k281) (##inline ##vcore.cdr (bruijn ##.expr.109.424 2 0))) ((bruijn ##.k.1135 6 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dunwrap__declares_D226_k281, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dunwrap__declares_D226_k278(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D226_k278, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.109.424 0 0)) (basic-block 1 1 (##.reg.1715) ((##vcore.string? (##inline ##vcore.car (bruijn ##.expr.109.424 1 0)))) ((close _V10_Dunwrap__declares_D226_k279) (close _V10_Dunwrap__declares_D226_k280))) ((bruijn ##.k.1135 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringP2(runtime, NULL,
      VInlineCar2(runtime,
        statics->vars[0]));
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dunwrap__declares_D226_k279, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__declares_D226_k280, self)})));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dunwrap__declares_D226_k277(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D226_k277, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.108.423 0 0)) ((close _V10_Dunwrap__declares_D226_k278) (##inline ##vcore.car (bruijn ##.expr.108.423 0 0))) ((bruijn ##.k.1135 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dunwrap__declares_D226_k278, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dunwrap__declares_D226_k276(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D226_k276, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1136 0 0) ((close _V10_Dunwrap__declares_D226_k277) (##inline ##vcore.cdr (bruijn ##.parse.417 5 1))) ((bruijn ##.k.1135 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dunwrap__declares_D226_k277, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dunwrap__declares_D226_k274(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D226_k274, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.parse.417 3 1)) (basic-block 1 1 (##.reg.1714) ((##vcore.string? (##inline ##vcore.car (bruijn ##.parse.417 4 1)))) ((close _V10_Dunwrap__declares_D226_k275) (close _V10_Dunwrap__declares_D226_k276))) ((bruijn ##.k.1135 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringP2(runtime, NULL,
      VInlineCar2(runtime,
        statics->up->up->up->vars[1]));
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dunwrap__declares_D226_k275, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__declares_D226_k276, self)})));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dunwrap__declares_D226_k289(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D226_k289, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.579 28 0) (bruijn ##.k.1131 2 0) (##string ##.string.1731))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 2,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1731.sym, VPOINTER_OTHER));
}
static void _V10_Dunwrap__declares_D226_k273(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D226_k273, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dunwrap__declares_D226_k274) (close _V10_Dunwrap__declares_D226_k289))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dunwrap__declares_D226_k274, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__declares_D226_k289, self)})));
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
  // ((close _V10_Dunwrap__declares_D226_k269) (close _V10_Dunwrap__declares_D226_k273))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dunwrap__declares_D226_k269, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__declares_D226_k273, self)})));
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
  // (##vcore.call/cc (bruijn ##.k.1130 0 0) (close _V10_Dunwrap__declares_D226_lambda59))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__declares_D226_lambda59, self)})));
}
static void _V10_Dduplicate__mismatch_D437_k292(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dduplicate__mismatch_D437_k292, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.not (bruijn ##.x.1181 0 0)) ((bruijn ##.err-proc.441 3 4) (bruijn ##.k.1175 3 0) (##inline ##vcore.car (bruijn ##.table.440 3 3))) ((bruijn ##.k.1175 3 0) #t))
if(VDecodeBool(
VInlineNot2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[4]), 2,
      statics->up->up->vars[0],
      VInlineCar2(runtime,
        statics->up->up->vars[3]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(true));
}
}
static void _V10_Dduplicate__mismatch_D437_k291(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dduplicate__mismatch_D437_k291, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.x.1183 0 0)) ((bruijn ##.duplicate-mismatch.437 3 0) (bruijn ##.k.1175 2 0) (bruijn ##.x.438 2 1) (bruijn ##.entry.439 2 2) (##inline ##vcore.cdr (bruijn ##.table.440 2 3)) (bruijn ##.err-proc.441 2 4)) ((bruijn ##.x.584 24 0) (close _V10_Dduplicate__mismatch_D437_k292) (bruijn ##.entry.439 2 2) (##inline ##vcore.car (bruijn ##.table.440 2 3))))
if(VDecodeBool(
VInlineNot2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 5,
      statics->up->vars[0],
      statics->up->vars[1],
      statics->up->vars[2],
      VInlineCdr2(runtime,
        statics->up->vars[3]),
      statics->up->vars[4]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dduplicate__mismatch_D437_k292, self)})),
      statics->up->vars[2],
      VInlineCar2(runtime,
        statics->up->vars[3]));
}
}
static void _V10_Dduplicate__mismatch_D437_k290(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dduplicate__mismatch_D437_k290, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.eqv? (close _V10_Dduplicate__mismatch_D437_k291) (bruijn ##.x.438 1 1) (bruijn ##.x.1184 0 0))
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dduplicate__mismatch_D437_k291, self)})),
      statics->vars[1],
      _var0);
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
  // (if (##inline ##vcore.null? (bruijn ##.table.440 0 3)) ((bruijn ##.k.1175 0 0) #f) ((bruijn ##.x.582 24 0) (close _V10_Dduplicate__mismatch_D437_k290) (bruijn ##.table.440 0 3)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var3))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dduplicate__mismatch_D437_k290, self)})),
      _var3);
}
}
static void _V10_Dtable___Gdefines_D227_k299(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_k299, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1232 0 0) (bruijn ##.k.1228 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
static void _V10_Dtable___Gdefines_D227_k301(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_k301, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.table->defines.227 12 7) (bruijn ##.k.1233 2 0) (##inline ##vcore.cdr (bruijn ##.table.435 11 1)) (##inline ##vcore.cons (##inline ##vcore.cons 'define (##inline ##vcore.cons (bruijn ##.name.446 4 0) (##inline ##vcore.cons (##inline ##vcore.cons '##foreign.function (##inline ##vcore.cons '(##string ##.string.1747) (##inline ##vcore.cons '(##string ##.string.1748) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.115.447 3 0)) (##inline ##vcore.cons (bruijn ##.x.1246 0 0) (##inline ##vcore.cdr (bruijn ##.expr.115.447 3 0))))))) '()))) (bruijn ##.acc.436 11 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 7)), 3,
      statics->up->vars[0],
      VInlineCdr2(runtime,
        VGetArg(statics, 11-1, 1)),
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0define,
        VInlineCons2(runtime,
        statics->up->up->up->vars[0],
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10foreign_Dfunction,
        VInlineCons2(runtime,
        VEncodePointer(&_V10_Dstring_D1747.sym, VPOINTER_OTHER),
        VInlineCons2(runtime,
        VEncodePointer(&_V10_Dstring_D1748.sym, VPOINTER_OTHER),
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[0]),
        VInlineCons2(runtime,
        _var0,
        VInlineCdr2(runtime,
        statics->up->up->vars[0])))))),
        VNULL))),
        VGetArg(statics, 11-1, 2)));
}
static void _V10_Dtable___Gdefines_D227_k300(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_k300, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1234 0 0) ((bruijn ##.table->defines.227 11 7) (bruijn ##.k.1233 1 0) (##inline ##vcore.cdr (bruijn ##.table.435 10 1)) (bruijn ##.acc.436 10 2)) (##vcore.symbol->string (close _V10_Dtable___Gdefines_D227_k301) (bruijn ##.name.446 3 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 7)), 3,
      statics->vars[0],
      VInlineCdr2(runtime,
        VGetArg(statics, 10-1, 1)),
      VGetArg(statics, 10-1, 2));
} else {
    VCallFuncWithGC(runtime, (VFunc)VSymbolString2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D227_k301, self)})),
      statics->up->up->vars[0]);
}
}
static void _V10_Dtable___Gdefines_D227_lambda67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_lambda67, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.x.587 27 0) (bruijn ##.k.1249 0 0) (##string ##.string.1749) (##inline ##vcore.car (bruijn ##.table.435 10 1)) (bruijn ##.conflict.450 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 4,
      _var0,
      VEncodePointer(&_V10_Dstring_D1749.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        VGetArg(statics, 10-1, 1)),
      _var1);
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
  // ((bruijn ##.duplicate-mismatch.437 8 0) (close _V10_Dtable___Gdefines_D227_k300) (bruijn ##.name.446 2 0) (##inline ##vcore.car (bruijn ##.table.435 9 1)) (##inline ##vcore.cdr (bruijn ##.table.435 9 1)) (close _V10_Dtable___Gdefines_D227_lambda67))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 5,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D227_k300, self)})),
      statics->up->vars[0],
      VInlineCar2(runtime,
        VGetArg(statics, 9-1, 1)),
      VInlineCdr2(runtime,
        VGetArg(statics, 9-1, 1)),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D227_lambda67, self)})));
}
static void _V10_Dtable___Gdefines_D227_k298(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_k298, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.115.447 0 0)) (##vcore.call-with-values (close _V10_Dtable___Gdefines_D227_k299) (close _V10_Dtable___Gdefines_D227_lambda66) (bruijn ##.kk.111.442 6 1)) ((bruijn ##.k.1228 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D227_k299, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D227_lambda66, self)})),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dtable___Gdefines_D227_k297(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_k297, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dtable___Gdefines_D227_k298) (##inline ##vcore.cdr (bruijn ##.expr.114.445 1 0)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dtable___Gdefines_D227_k298, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
static void _V10_Dtable___Gdefines_D227_k296(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_k296, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.114.445 0 0)) ((close _V10_Dtable___Gdefines_D227_k297) (##inline ##vcore.car (bruijn ##.expr.114.445 0 0))) ((bruijn ##.k.1228 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dtable___Gdefines_D227_k297, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dtable___Gdefines_D227_k295(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_k295, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1229 0 0) ((close _V10_Dtable___Gdefines_D227_k296) (##inline ##vcore.cdr (bruijn ##.input.112.443 2 0))) ((bruijn ##.k.1228 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dtable___Gdefines_D227_k296, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dtable___Gdefines_D227_k294(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_k294, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.input.112.443 1 0)) ((bruijn ##.x.584 24 0) (close _V10_Dtable___Gdefines_D227_k295) 'function (##inline ##vcore.car (bruijn ##.input.112.443 1 0))) ((bruijn ##.k.1228 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D227_k295, self)})),
      _V0function,
      VInlineCar2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dtable___Gdefines_D227_k308(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_k308, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1214 0 0) (bruijn ##.k.1209 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
static void _V10_Dtable___Gdefines_D227_k309(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_k309, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.table->defines.227 12 7) (bruijn ##.k.1215 1 0) (##inline ##vcore.cdr (bruijn ##.table.435 11 1)) (##inline ##vcore.cons (##inline ##vcore.cons 'define (##inline ##vcore.cons (bruijn ##.name.453 3 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.118.454 2 0)) '()))) (bruijn ##.acc.436 11 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 7)), 3,
      statics->vars[0],
      VInlineCdr2(runtime,
        VGetArg(statics, 11-1, 1)),
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0define,
        VInlineCons2(runtime,
        statics->up->up->vars[0],
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[0]),
        VNULL))),
        VGetArg(statics, 11-1, 2)));
}
static void _V10_Dtable___Gdefines_D227_lambda69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_lambda69, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.x.587 28 0) (bruijn ##.k.1223 0 0) (##string ##.string.1749) (##inline ##vcore.car (bruijn ##.table.435 11 1)) (bruijn ##.conflict.456 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 4,
      _var0,
      VEncodePointer(&_V10_Dstring_D1749.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        VGetArg(statics, 11-1, 1)),
      _var1);
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
  // ((bruijn ##.duplicate-mismatch.437 9 0) (close _V10_Dtable___Gdefines_D227_k309) (bruijn ##.name.453 2 0) #f (##inline ##vcore.cdr (bruijn ##.table.435 10 1)) (close _V10_Dtable___Gdefines_D227_lambda69))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 5,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D227_k309, self)})),
      statics->up->vars[0],
      VEncodeBool(false),
      VInlineCdr2(runtime,
        VGetArg(statics, 10-1, 1)),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D227_lambda69, self)})));
}
static void _V10_Dtable___Gdefines_D227_k307(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_k307, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.118.454 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.118.454 0 0))) (##vcore.call-with-values (close _V10_Dtable___Gdefines_D227_k308) (close _V10_Dtable___Gdefines_D227_lambda68) (bruijn ##.kk.111.442 7 1)) ((bruijn ##.k.1209 4 0) #f)) ((bruijn ##.k.1209 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D227_k308, self)})),
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
static void _V10_Dtable___Gdefines_D227_k306(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_k306, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dtable___Gdefines_D227_k307) (##inline ##vcore.cdr (bruijn ##.expr.117.452 1 0)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dtable___Gdefines_D227_k307, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
static void _V10_Dtable___Gdefines_D227_k305(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_k305, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.117.452 0 0)) ((close _V10_Dtable___Gdefines_D227_k306) (##inline ##vcore.car (bruijn ##.expr.117.452 0 0))) ((bruijn ##.k.1209 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dtable___Gdefines_D227_k306, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dtable___Gdefines_D227_k304(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_k304, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1210 0 0) ((close _V10_Dtable___Gdefines_D227_k305) (##inline ##vcore.cdr (bruijn ##.input.112.443 3 0))) ((bruijn ##.k.1209 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dtable___Gdefines_D227_k305, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dtable___Gdefines_D227_k303(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_k303, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.input.112.443 2 0)) ((bruijn ##.x.584 25 0) (close _V10_Dtable___Gdefines_D227_k304) 'enum (##inline ##vcore.car (bruijn ##.input.112.443 2 0))) ((bruijn ##.k.1209 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D227_k304, self)})),
      _V0enum,
      VInlineCar2(runtime,
        statics->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dtable___Gdefines_D227_k315(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_k315, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1198 0 0) (bruijn ##.k.1193 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V10_Dtable___Gdefines_D227_k316(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_k316, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.table->defines.227 12 7) (bruijn ##.k.1199 1 0) (##inline ##vcore.cdr (bruijn ##.table.435 11 1)) (bruijn ##.acc.436 11 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 7)), 3,
      statics->vars[0],
      VInlineCdr2(runtime,
        VGetArg(statics, 11-1, 1)),
      VGetArg(statics, 11-1, 2));
}
static void _V10_Dtable___Gdefines_D227_lambda71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_lambda71, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.x.587 28 0) (bruijn ##.k.1204 0 0) (##string ##.string.1749) (##inline ##vcore.car (bruijn ##.table.435 11 1)) (bruijn ##.conflict.462 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 4,
      _var0,
      VEncodePointer(&_V10_Dstring_D1749.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        VGetArg(statics, 11-1, 1)),
      _var1);
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
  // ((bruijn ##.duplicate-mismatch.437 9 0) (close _V10_Dtable___Gdefines_D227_k316) (##inline ##vcore.car (bruijn ##.expr.120.458 2 0)) (##inline ##vcore.car (bruijn ##.table.435 10 1)) (##inline ##vcore.cdr (bruijn ##.table.435 10 1)) (close _V10_Dtable___Gdefines_D227_lambda71))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 5,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D227_k316, self)})),
      VInlineCar2(runtime,
        statics->up->vars[0]),
      VInlineCar2(runtime,
        VGetArg(statics, 10-1, 1)),
      VInlineCdr2(runtime,
        VGetArg(statics, 10-1, 1)),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D227_lambda71, self)})));
}
static void _V10_Dtable___Gdefines_D227_k314(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_k314, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.121.460 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.121.460 0 0))) (##vcore.call-with-values (close _V10_Dtable___Gdefines_D227_k315) (close _V10_Dtable___Gdefines_D227_lambda70) (bruijn ##.kk.111.442 7 1)) ((bruijn ##.k.1193 3 0) #f)) ((bruijn ##.k.1193 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D227_k315, self)})),
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
static void _V10_Dtable___Gdefines_D227_k313(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_k313, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.120.458 0 0)) ((close _V10_Dtable___Gdefines_D227_k314) (##inline ##vcore.cdr (bruijn ##.expr.120.458 0 0))) ((bruijn ##.k.1193 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dtable___Gdefines_D227_k314, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dtable___Gdefines_D227_k312(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_k312, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1194 0 0) ((close _V10_Dtable___Gdefines_D227_k313) (##inline ##vcore.cdr (bruijn ##.input.112.443 4 0))) ((bruijn ##.k.1193 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dtable___Gdefines_D227_k313, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dtable___Gdefines_D227_k311(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_k311, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.input.112.443 3 0)) ((bruijn ##.x.584 26 0) (close _V10_Dtable___Gdefines_D227_k312) 'typedef (##inline ##vcore.car (bruijn ##.input.112.443 3 0))) ((bruijn ##.k.1193 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D227_k312, self)})),
      _V0typedef,
      VInlineCar2(runtime,
        statics->up->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dtable___Gdefines_D227_lambda72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_lambda72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.587 24 0) (bruijn ##.k.1190 0 0) (##string ##.string.1750) (##inline ##vcore.car (bruijn ##.table.435 7 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1750.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        VGetArg(statics, 7-1, 1)));
}
static void _V10_Dtable___Gdefines_D227_k317(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_k317, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1186 4 0) (close _V10_Dtable___Gdefines_D227_lambda72) (bruijn ##.kk.111.442 4 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->up->up->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D227_lambda72, self)})),
      statics->up->up->up->vars[1]);
}
static void _V10_Dtable___Gdefines_D227_k310(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_k310, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dtable___Gdefines_D227_k311) (close _V10_Dtable___Gdefines_D227_k317))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dtable___Gdefines_D227_k311, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D227_k317, self)})));
}
static void _V10_Dtable___Gdefines_D227_k302(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_k302, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dtable___Gdefines_D227_k303) (close _V10_Dtable___Gdefines_D227_k310))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dtable___Gdefines_D227_k303, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D227_k310, self)})));
}
static void _V10_Dtable___Gdefines_D227_k293(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D227_k293, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dtable___Gdefines_D227_k294) (close _V10_Dtable___Gdefines_D227_k302))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dtable___Gdefines_D227_k294, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D227_k302, self)})));
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
  // ((close _V10_Dtable___Gdefines_D227_k293) (##inline ##vcore.car (bruijn ##.table.435 2 1)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dtable___Gdefines_D227_k293, .env = self }, }, 1,
      VInlineCar2(runtime,
        statics->up->vars[1]));
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
  // (letrec 1 ((close _V10_Dduplicate__mismatch_D437_lambda64)) (if (##inline ##vcore.null? (bruijn ##.table.435 1 1)) ((bruijn ##.k.1174 1 0) (bruijn ##.acc.436 1 2)) (##vcore.call/cc (bruijn ##.k.1174 1 0) (close _V10_Dtable___Gdefines_D227_lambda65))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dduplicate__mismatch_D437_lambda64, self)}));
if(VDecodeBool(
VInlineNullP2(runtime,
        statics->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[2]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D227_lambda65, self)})));
}
    }
}
static void _V10_Ddeep__copy_D228_k319(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddeep__copy_D228_k319, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1252 3 0) (##inline ##vcore.cons (bruijn ##.x.1255 1 0) (bruijn ##.x.1256 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        statics->vars[0],
        _var0));
}
static void _V10_Ddeep__copy_D228_k318(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddeep__copy_D228_k318, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.deep-copy.228 3 8) (close _V10_Ddeep__copy_D228_k319) (##inline ##vcore.cdr (bruijn ##.x.463 2 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[8]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddeep__copy_D228_k319, self)})),
      VInlineCdr2(runtime,
        statics->up->vars[1]));
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
  // (basic-block 1 1 (##.reg.1717) ((##vcore.string? (bruijn ##.x.463 1 1))) (if (bruijn ##.reg.1717 0 0) (##vcore.substring (bruijn ##.k.1252 1 0) (bruijn ##.x.463 1 1)) (if (##inline ##vcore.pair? (bruijn ##.x.463 1 1)) ((bruijn ##.deep-copy.228 2 8) (close _V10_Ddeep__copy_D228_k318) (##inline ##vcore.car (bruijn ##.x.463 1 1))) ((bruijn ##.k.1252 1 0) (bruijn ##.x.463 1 1)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VSubstring2, 2,
      statics->vars[0],
      statics->vars[1]);
} else {
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[8]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddeep__copy_D228_k318, self)})),
      VInlineCar2(runtime,
        statics->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[1]);
}
}
    }
}
static void _V10_Dis__one__decl_D467_k323(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D467_k323, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.reg.1719 1 0) (##vcore.blob=? (bruijn ##.k.1300 0 0) (##string ##.string.1744) (##inline ##vcore.car (bruijn ##.parse.468 4 1))) ((bruijn ##.k.1300 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VBlobEqv2, 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1744.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dis__one__decl_D467_k327(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D467_k327, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.reg.1720 1 0) (##vcore.blob=? (bruijn ##.k.1296 0 0) (##string ##.string.1745) (##inline ##vcore.car (bruijn ##.expr.136.473 2 0))) ((bruijn ##.k.1296 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VBlobEqv2, 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1745.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        statics->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dis__one__decl_D467_k331(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D467_k331, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1291 0 0) (bruijn ##.k.1282 9 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 9-1, 0));
}
static void _V10_Dis__one__decl_D467_lambda77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D467_lambda77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.592 27 0) (bruijn ##.k.1292 0 0) (bruijn ##.parse.468 11 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 2,
      _var0,
      VGetArg(statics, 11-1, 1));
}
static void _V10_Dis__one__decl_D467_k330(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D467_k330, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.138.476 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.138.476 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.135.472 5 0))) (##vcore.call-with-values (close _V10_Dis__one__decl_D467_k331) (close _V10_Dis__one__decl_D467_lambda77) (bruijn ##.kk.132.469 9 1)) ((bruijn ##.k.1282 8 0) #f)) ((bruijn ##.k.1282 8 0) #f)) ((bruijn ##.k.1282 8 0) #f))
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
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dis__one__decl_D467_k331, self)})),
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
static void _V10_Dis__one__decl_D467_k329(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D467_k329, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.137.474 0 0)) ((close _V10_Dis__one__decl_D467_k330) (##inline ##vcore.cdr (bruijn ##.expr.137.474 0 0))) ((bruijn ##.k.1282 7 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dis__one__decl_D467_k330, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dis__one__decl_D467_k328(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D467_k328, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1286 0 0) ((close _V10_Dis__one__decl_D467_k329) (##inline ##vcore.cdr (bruijn ##.expr.136.473 2 0))) ((bruijn ##.k.1282 6 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dis__one__decl_D467_k329, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dis__one__decl_D467_k326(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D467_k326, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.136.473 0 0)) (basic-block 1 1 (##.reg.1720) ((##vcore.string? (##inline ##vcore.car (bruijn ##.expr.136.473 1 0)))) ((close _V10_Dis__one__decl_D467_k327) (close _V10_Dis__one__decl_D467_k328))) ((bruijn ##.k.1282 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringP2(runtime, NULL,
      VInlineCar2(runtime,
        statics->vars[0]));
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dis__one__decl_D467_k327, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dis__one__decl_D467_k328, self)})));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dis__one__decl_D467_k325(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D467_k325, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.135.472 0 0)) ((close _V10_Dis__one__decl_D467_k326) (##inline ##vcore.car (bruijn ##.expr.135.472 0 0))) ((bruijn ##.k.1282 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dis__one__decl_D467_k326, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dis__one__decl_D467_k324(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D467_k324, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1283 0 0) ((close _V10_Dis__one__decl_D467_k325) (##inline ##vcore.cdr (bruijn ##.parse.468 4 1))) ((bruijn ##.k.1282 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dis__one__decl_D467_k325, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dis__one__decl_D467_k322(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D467_k322, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.parse.468 2 1)) (basic-block 1 1 (##.reg.1719) ((##vcore.string? (##inline ##vcore.car (bruijn ##.parse.468 3 1)))) ((close _V10_Dis__one__decl_D467_k323) (close _V10_Dis__one__decl_D467_k324))) ((bruijn ##.k.1282 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringP2(runtime, NULL,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dis__one__decl_D467_k323, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dis__one__decl_D467_k324, self)})));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dis__one__decl_D467_k334(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D467_k334, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.reg.1718 1 0) (##vcore.blob=? (bruijn ##.k.1278 0 0) (##string ##.string.1751) (##inline ##vcore.car (bruijn ##.parse.468 5 1))) ((bruijn ##.k.1278 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VBlobEqv2, 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1751.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dis__one__decl_D467_k338(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D467_k338, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1274 0 0) (bruijn ##.k.1269 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
static void _V10_Dis__one__decl_D467_lambda78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D467_lambda78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1275 0 0) (##inline ##vcore.cdr (bruijn ##.parse.468 8 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 8-1, 1)));
}
static void _V10_Dis__one__decl_D467_k337(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D467_k337, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.141.480 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.141.480 0 0))) (##vcore.call-with-values (close _V10_Dis__one__decl_D467_k338) (close _V10_Dis__one__decl_D467_lambda78) (bruijn ##.kk.132.469 6 1)) ((bruijn ##.k.1269 4 0) #f)) ((bruijn ##.k.1269 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dis__one__decl_D467_k338, self)})),
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
static void _V10_Dis__one__decl_D467_k336(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D467_k336, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.140.478 0 0)) ((close _V10_Dis__one__decl_D467_k337) (##inline ##vcore.cdr (bruijn ##.expr.140.478 0 0))) ((bruijn ##.k.1269 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dis__one__decl_D467_k337, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dis__one__decl_D467_k335(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D467_k335, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1270 0 0) ((close _V10_Dis__one__decl_D467_k336) (##inline ##vcore.cdr (bruijn ##.parse.468 5 1))) ((bruijn ##.k.1269 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dis__one__decl_D467_k336, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dis__one__decl_D467_k333(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D467_k333, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.parse.468 3 1)) (basic-block 1 1 (##.reg.1718) ((##vcore.string? (##inline ##vcore.car (bruijn ##.parse.468 4 1)))) ((close _V10_Dis__one__decl_D467_k334) (close _V10_Dis__one__decl_D467_k335))) ((bruijn ##.k.1269 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringP2(runtime, NULL,
      VInlineCar2(runtime,
        statics->up->up->up->vars[1]));
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dis__one__decl_D467_k334, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dis__one__decl_D467_k335, self)})));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dis__one__decl_D467_k340(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D467_k340, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1266 1 0) #f)
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
  // ((bruijn ##.x.587 25 0) (close _V10_Dis__one__decl_D467_k340) (##string ##.string.1752) (bruijn ##.parse.468 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dis__one__decl_D467_k340, self)})),
      VEncodePointer(&_V10_Dstring_D1752.sym, VPOINTER_OTHER),
      statics->up->up->up->vars[1]);
}
static void _V10_Dis__one__decl_D467_k339(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D467_k339, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1263 2 0) (close _V10_Dis__one__decl_D467_lambda79) (bruijn ##.kk.132.469 2 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dis__one__decl_D467_lambda79, self)})),
      statics->up->vars[1]);
}
static void _V10_Dis__one__decl_D467_k332(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D467_k332, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dis__one__decl_D467_k333) (close _V10_Dis__one__decl_D467_k339))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dis__one__decl_D467_k333, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dis__one__decl_D467_k339, self)})));
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
  // ((close _V10_Dis__one__decl_D467_k322) (close _V10_Dis__one__decl_D467_k332))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dis__one__decl_D467_k322, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dis__one__decl_D467_k332, self)})));
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
  // (##vcore.call/cc (bruijn ##.k.1262 0 0) (close _V10_Dis__one__decl_D467_lambda76))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dis__one__decl_D467_lambda76, self)})));
}
static void _V10_Dvalidate__foreign__function_D229_k347(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D229_k347, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1341 0 0) (bruijn ##.k.1335 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
static void _V10_Dvalidate__foreign__function_D229_lambda81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D229_lambda81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1342 0 0) (bruijn ##.expr.464 11 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 11-1, 1));
}
static void _V10_Dvalidate__foreign__function_D229_k346(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D229_k346, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.128.490 0 0)) (##vcore.call-with-values (close _V10_Dvalidate__foreign__function_D229_k347) (close _V10_Dvalidate__foreign__function_D229_lambda81) (bruijn ##.kk.122.481 6 1)) ((bruijn ##.k.1335 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D229_k347, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D229_lambda81, self)})),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dvalidate__foreign__function_D229_k345(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D229_k345, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.127.488 0 0)) ((close _V10_Dvalidate__foreign__function_D229_k346) (##inline ##vcore.cdr (bruijn ##.expr.127.488 0 0))) ((bruijn ##.k.1335 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dvalidate__foreign__function_D229_k346, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dvalidate__foreign__function_D229_k344(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D229_k344, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.126.486 0 0)) ((close _V10_Dvalidate__foreign__function_D229_k345) (##inline ##vcore.cdr (bruijn ##.expr.126.486 0 0))) ((bruijn ##.k.1335 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dvalidate__foreign__function_D229_k345, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dvalidate__foreign__function_D229_k343(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D229_k343, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.125.484 0 0)) ((close _V10_Dvalidate__foreign__function_D229_k344) (##inline ##vcore.cdr (bruijn ##.expr.125.484 0 0))) ((bruijn ##.k.1335 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dvalidate__foreign__function_D229_k344, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dvalidate__foreign__function_D229_k342(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D229_k342, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1336 0 0) ((close _V10_Dvalidate__foreign__function_D229_k343) (##inline ##vcore.cdr (bruijn ##.expr.464 6 1))) ((bruijn ##.k.1335 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dvalidate__foreign__function_D229_k343, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dvalidate__foreign__function_D229_k341(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D229_k341, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.464 5 1)) ((bruijn ##.x.584 25 0) (close _V10_Dvalidate__foreign__function_D229_k342) '##foreign.function (##inline ##vcore.car (bruijn ##.expr.464 5 1))) ((bruijn ##.k.1335 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 5-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D229_k342, self)})),
      _V10foreign_Dfunction,
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dvalidate__foreign__function_D229_k355(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D229_k355, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1313 0 0) (bruijn ##.k.1308 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
static void _V10_Dvalidate__foreign__function_D229_k357(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D229_k357, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.not (bruijn ##.x.1331 1 0)) ((bruijn ##.x.587 31 0) (bruijn ##.k.1330 0 0) (##string ##.string.1753) (bruijn ##.lang.495 5 0)) ((bruijn ##.k.1330 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1753.sym, VPOINTER_OTHER),
      VGetArg(statics, 5-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dvalidate__foreign__function_D229_k368(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D229_k368, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1314 12 0) (##inline ##vcore.cons '##foreign.function (##inline ##vcore.cons '(##string ##.string.1747) (##inline ##vcore.cons (bruijn ##.decl.497 13 0) (##inline ##vcore.cons (bruijn ##.x.1320 2 0) (##inline ##vcore.cons (bruijn ##.x.1322 1 0) (bruijn ##.x.1323 0 0)))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 1,
      VInlineCons2(runtime,
        _V10foreign_Dfunction,
        VInlineCons2(runtime,
        VEncodePointer(&_V10_Dstring_D1747.sym, VPOINTER_OTHER),
        VInlineCons2(runtime,
        VGetArg(statics, 13-1, 0),
        VInlineCons2(runtime,
        statics->up->vars[0],
        VInlineCons2(runtime,
        statics->vars[0],
        _var0))))));
}
static void _V10_Dvalidate__foreign__function_D229_k367(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D229_k367, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.591 36 0) (close _V10_Dvalidate__foreign__function_D229_k368) (bruijn ##.ff.499 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D229_k368, self)})),
      statics->up->vars[0]);
}
static void _V10_Dvalidate__foreign__function_D229_k366(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D229_k366, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.583 43 0) (close _V10_Dvalidate__foreign__function_D229_k367) (bruijn ##.ff.499 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 43-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D229_k367, self)})),
      statics->vars[0]);
}
static void _V10_Dvalidate__foreign__function_D229_k365(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D229_k365, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.590 35 0) (close _V10_Dvalidate__foreign__function_D229_k366) (bruijn ##.ff.499 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 35-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D229_k366, self)})),
      _var0);
}
static void _V10_Dvalidate__foreign__function_D229_k364(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D229_k364, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.unwrap-function.224 21 4) (close _V10_Dvalidate__foreign__function_D229_k365) (bruijn ##.x.1324 1 0) (bruijn ##.x.1325 0 0) '())
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 4)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D229_k365, self)})),
      statics->vars[0],
      _var0,
      VNULL);
}
static void _V10_Dvalidate__foreign__function_D229_k363(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D229_k363, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.583 40 0) (close _V10_Dvalidate__foreign__function_D229_k364) (bruijn ##.parse.498 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 40-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D229_k364, self)})),
      statics->up->vars[0]);
}
static void _V10_Dvalidate__foreign__function_D229_k362(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D229_k362, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.reduce-type.222 19 2) (close _V10_Dvalidate__foreign__function_D229_k363) (##inline ##vcore.car (bruijn ##.parse.498 1 0)) '() #t)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 2)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D229_k363, self)})),
      VInlineCar2(runtime,
        statics->vars[0]),
      VNULL,
      VEncodeBool(true));
}
static void _V10_Dvalidate__foreign__function_D229_k361(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D229_k361, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.release-parse.466 14 1) (close _V10_Dvalidate__foreign__function_D229_k362))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 1)), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D229_k362, self)})));
}
static void _V10_Dvalidate__foreign__function_D229_k360(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D229_k360, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.is-one-decl.467 13 2) (close _V10_Dvalidate__foreign__function_D229_k361) (bruijn ##.x.1327 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 2)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D229_k361, self)})),
      _var0);
}
static void _V10_Dvalidate__foreign__function_D229_k359(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D229_k359, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.deep-copy.228 16 8) (close _V10_Dvalidate__foreign__function_D229_k360) (bruijn ##.x.1328 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 8)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D229_k360, self)})),
      _var0);
}
static void _V10_Dvalidate__foreign__function_D229_k358(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D229_k358, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.parse-decl-c.465 11 0) (close _V10_Dvalidate__foreign__function_D229_k359) (bruijn ##.decl.497 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D229_k359, self)})),
      statics->up->up->vars[0]);
}
static void _V10_Dvalidate__foreign__function_D229_k356(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D229_k356, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dvalidate__foreign__function_D229_k357) (close _V10_Dvalidate__foreign__function_D229_k358))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dvalidate__foreign__function_D229_k357, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D229_k358, self)})));
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
  // ((bruijn ##.x.584 32 0) (close _V10_Dvalidate__foreign__function_D229_k356) (bruijn ##.lang.495 3 0) (##string ##.string.1747))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D229_k356, self)})),
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1747.sym, VPOINTER_OTHER));
}
static void _V10_Dvalidate__foreign__function_D229_k354(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D229_k354, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.131.496 1 0))) (##vcore.call-with-values (close _V10_Dvalidate__foreign__function_D229_k355) (close _V10_Dvalidate__foreign__function_D229_lambda82) (bruijn ##.kk.122.481 7 1)) ((bruijn ##.k.1308 5 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D229_k355, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D229_lambda82, self)})),
      VGetArg(statics, 7-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dvalidate__foreign__function_D229_k353(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D229_k353, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.131.496 0 0)) ((close _V10_Dvalidate__foreign__function_D229_k354) (##inline ##vcore.car (bruijn ##.expr.131.496 0 0))) ((bruijn ##.k.1308 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dvalidate__foreign__function_D229_k354, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dvalidate__foreign__function_D229_k352(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D229_k352, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dvalidate__foreign__function_D229_k353) (##inline ##vcore.cdr (bruijn ##.expr.130.494 1 0)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dvalidate__foreign__function_D229_k353, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
static void _V10_Dvalidate__foreign__function_D229_k351(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D229_k351, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.130.494 0 0)) ((close _V10_Dvalidate__foreign__function_D229_k352) (##inline ##vcore.car (bruijn ##.expr.130.494 0 0))) ((bruijn ##.k.1308 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dvalidate__foreign__function_D229_k352, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dvalidate__foreign__function_D229_k350(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D229_k350, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1309 0 0) ((close _V10_Dvalidate__foreign__function_D229_k351) (##inline ##vcore.cdr (bruijn ##.expr.464 7 1))) ((bruijn ##.k.1308 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dvalidate__foreign__function_D229_k351, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 7-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dvalidate__foreign__function_D229_k349(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D229_k349, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.464 6 1)) ((bruijn ##.x.584 26 0) (close _V10_Dvalidate__foreign__function_D229_k350) '##foreign.function (##inline ##vcore.car (bruijn ##.expr.464 6 1))) ((bruijn ##.k.1308 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 6-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D229_k350, self)})),
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
  // ((bruijn ##.x.587 24 0) (bruijn ##.k.1306 0 0) (##string ##.string.1754) (bruijn ##.expr.464 7 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1754.sym, VPOINTER_OTHER),
      VGetArg(statics, 7-1, 1));
}
static void _V10_Dvalidate__foreign__function_D229_k369(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D229_k369, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1303 2 0) (close _V10_Dvalidate__foreign__function_D229_lambda83) (bruijn ##.kk.122.481 2 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D229_lambda83, self)})),
      statics->up->vars[1]);
}
static void _V10_Dvalidate__foreign__function_D229_k348(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D229_k348, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dvalidate__foreign__function_D229_k349) (close _V10_Dvalidate__foreign__function_D229_k369))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dvalidate__foreign__function_D229_k349, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D229_k369, self)})));
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
  // ((close _V10_Dvalidate__foreign__function_D229_k341) (close _V10_Dvalidate__foreign__function_D229_k348))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dvalidate__foreign__function_D229_k341, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D229_k348, self)})));
}
static void _V10_Dvalidate__foreign__function_D229_k321(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D229_k321, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 3 ((bruijn ##.x.1260 2 0) (bruijn ##.x.1261 1 0) (close _V10_Dis__one__decl_D467_lambda75)) (##vcore.call/cc (bruijn ##.k.1259 3 0) (close _V10_Dvalidate__foreign__function_D229_lambda80)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = statics->up->vars[0];
    self->vars[1] = statics->vars[0];
    self->vars[2] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dis__one__decl_D467_lambda75, self)}));
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->up->up->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D229_lambda80, self)})));
    }
}
static void _V10_Dvalidate__foreign__function_D229_k320(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D229_k320, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.function (close _V10_Dvalidate__foreign__function_D229_k321) (##string ##.string.1755))
    VCallFuncWithGC(runtime, (VFunc)VFunction2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D229_k321, self)})),
      VEncodePointer(&_V10_Dstring_D1755.sym, VPOINTER_OTHER));
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
  // (##vcore.function (close _V10_Dvalidate__foreign__function_D229_k320) (##string ##.string.1756))
    VCallFuncWithGC(runtime, (VFunc)VFunction2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D229_k320, self)})),
      VEncodePointer(&_V10_Dstring_D1756.sym, VPOINTER_OTHER));
}
static void _V10_Dfind__file_D230_k371(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__file_D230_k371, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1346 0 0) ((bruijn ##.k.1344 2 0) (bruijn ##.path.502 1 0)) ((bruijn ##.find-file.230 3 10) (bruijn ##.k.1344 2 0) (bruijn ##.file.500 2 1) (##inline ##vcore.cdr (bruijn ##.paths.501 2 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[10]), 3,
      statics->up->vars[0],
      statics->up->vars[1],
      VInlineCdr2(runtime,
        statics->up->vars[2]));
}
}
static void _V10_Dfind__file_D230_k370(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__file_D230_k370, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.593 12 0) (close _V10_Dfind__file_D230_k371) (bruijn ##.path.502 0 0) 4)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__file_D230_k371, self)})),
      _var0,
      VEncodeInt(4l));
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
  // (if (##inline ##vcore.null? (bruijn ##.paths.501 0 2)) ((bruijn ##.x.587 17 0) (bruijn ##.k.1344 0 0) (##string ##.string.1757) (bruijn ##.file.500 0 1)) ((bruijn ##.x.594 10 0) (close _V10_Dfind__file_D230_k370) (##string ##.string.1758) (##inline ##vcore.car (bruijn ##.paths.501 0 2)) (bruijn ##.file.500 0 1)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1757.sym, VPOINTER_OTHER),
      _var1);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__file_D230_k370, self)})),
      VEncodePointer(&_V10_Dstring_D1758.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        _var2),
      _var1);
}
}
static void _V10_Dget__install__root_D231_k373(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__install__root_D231_k373, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.594 12 0) (bruijn ##.k.1349 2 0) (##string ##.string.1759) (bruijn ##.x.1350 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 3,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1759.sym, VPOINTER_OTHER),
      _var0);
}
static void _V10_Dget__install__root_D231_k372(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__install__root_D231_k372, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.1351 0 0) (close _V10_Dget__install__root_D231_k373))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__install__root_D231_k373, self)})));
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
  // (if (bruijn ##.x.595 9 0) ((bruijn ##.k.1349 0 0) (bruijn ##.x.595 9 0)) (##vcore.function (close _V10_Dget__install__root_D231_k372) (##string ##.string.1760)))
if(VDecodeBool(
VGetArg(statics, 9-1, 0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 9-1, 0));
} else {
    VCallFuncWithGC(runtime, (VFunc)VFunction2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__install__root_D231_k372, self)})),
      VEncodePointer(&_V10_Dstring_D1760.sym, VPOINTER_OTHER));
}
}
static void _V10_Dmake__preprocess__command_D232_k375(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmake__preprocess__command_D232_k375, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.594 12 0) (bruijn ##.k.1352 2 0) (##string ##.string.1761) (bruijn ##.x.596 10 0) (bruijn ##.file.503 2 1) (bruijn ##.x.1354 0 0) (##string ##.string.1762) (bruijn ##.architecture.504 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 7,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1761.sym, VPOINTER_OTHER),
      VGetArg(statics, 10-1, 0),
      statics->up->vars[1],
      _var0,
      VEncodePointer(&_V10_Dstring_D1762.sym, VPOINTER_OTHER),
      statics->up->vars[2]);
}
static void _V10_Dmake__preprocess__command_D232_k376(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmake__preprocess__command_D232_k376, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.594 12 0) (bruijn ##.k.1352 2 0) (##string ##.string.1763) (bruijn ##.x.596 10 0) (bruijn ##.file.503 2 1) (bruijn ##.x.1355 0 0) (##string ##.string.1762) (bruijn ##.architecture.504 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 7,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1763.sym, VPOINTER_OTHER),
      VGetArg(statics, 10-1, 0),
      statics->up->vars[1],
      _var0,
      VEncodePointer(&_V10_Dstring_D1762.sym, VPOINTER_OTHER),
      statics->up->vars[2]);
}
static void _V10_Dmake__preprocess__command_D232_k374(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmake__preprocess__command_D232_k374, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1353 0 0) ((bruijn ##.get-install-root.231 2 11) (close _V10_Dmake__preprocess__command_D232_k375)) ((bruijn ##.get-install-root.231 2 11) (close _V10_Dmake__preprocess__command_D232_k376)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[11]), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmake__preprocess__command_D232_k375, self)})));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[11]), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmake__preprocess__command_D232_k376, self)})));
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
  // (##vcore.eqv? (close _V10_Dmake__preprocess__command_D232_k374) (bruijn ##.x.597 7 0) 'windows)
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmake__preprocess__command_D232_k374, self)})),
      VGetArg(statics, 7-1, 0),
      _V0windows);
}
static void _V10_Dresolve__foreign__import_D233_k384(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D233_k384, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1368 0 0) (bruijn ##.k.1363 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
static void _V10_Dresolve__foreign__import_D233_k386(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D233_k386, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.not (bruijn ##.x.1386 1 0)) ((bruijn ##.x.587 29 0) (bruijn ##.k.1385 0 0) (##string ##.string.1753) (bruijn ##.expr.505 12 1)) ((bruijn ##.k.1385 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1753.sym, VPOINTER_OTHER),
      VGetArg(statics, 12-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dresolve__foreign__import_D233_k388(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D233_k388, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.not (bruijn ##.reg.1721 1 0)) ((bruijn ##.x.587 31 0) (bruijn ##.k.1382 0 0) (##string ##.string.1764) (bruijn ##.expr.505 14 1)) ((bruijn ##.k.1382 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1764.sym, VPOINTER_OTHER),
      VGetArg(statics, 14-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dresolve__foreign__import_D233_k399(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D233_k399, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1369 14 0) (##inline ##vcore.cons (##inline ##vcore.cons '##foreign.declare (##inline ##vcore.cons (bruijn ##.x.1378 2 0) '())) (bruijn ##.x.1375 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10foreign_Ddeclare,
        VInlineCons2(runtime,
        statics->up->vars[0],
        VNULL)),
        _var0));
}
static void _V10_Dresolve__foreign__import_D233_k398(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D233_k398, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.table->defines.227 24 7) (close _V10_Dresolve__foreign__import_D233_k399) (bruijn ##.x.1376 0 0) '())
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 7)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D233_k399, self)})),
      _var0,
      VNULL);
}
static void _V10_Dresolve__foreign__import_D233_k397(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D233_k397, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.unwrap-declares.226 23 6) (close _V10_Dresolve__foreign__import_D233_k398) (bruijn ##.parse.519 3 0) '())
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 6)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D233_k398, self)})),
      statics->up->up->vars[0],
      VNULL);
}
static void _V10_Dresolve__foreign__import_D233_k396(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D233_k396, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.594 31 0) (close _V10_Dresolve__foreign__import_D233_k397) (##string ##.string.1765) (bruijn ##.file.516 12 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D233_k397, self)})),
      VEncodePointer(&_V10_Dstring_D1765.sym, VPOINTER_OTHER),
      VGetArg(statics, 12-1, 0));
}
static void _V10_Dresolve__foreign__import_D233_k395(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D233_k395, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.598 26 0) (close _V10_Dresolve__foreign__import_D233_k396) (bruijn ##.fd.518 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D233_k396, self)})),
      statics->up->up->vars[0]);
}
static void _V10_Dresolve__foreign__import_D233_k394(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D233_k394, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.release-parse.509 16 1) (close _V10_Dresolve__foreign__import_D233_k395))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 1)), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D233_k395, self)})));
}
static void _V10_Dresolve__foreign__import_D233_k393(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D233_k393, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.deep-copy.228 19 8) (close _V10_Dresolve__foreign__import_D233_k394) (bruijn ##.x.1379 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 8)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D233_k394, self)})),
      _var0);
}
static void _V10_Dresolve__foreign__import_D233_k392(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D233_k392, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.parse-header-c.508 14 0) (close _V10_Dresolve__foreign__import_D233_k393) (bruijn ##.fd.518 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D233_k393, self)})),
      _var0);
}
static void _V10_Dresolve__foreign__import_D233_k391(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D233_k391, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.open-input-process (close _V10_Dresolve__foreign__import_D233_k392) (bruijn ##.cmd.517 0 0))
    VCallFuncWithGC(runtime, (VFunc)VOpenInputProcess2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D233_k392, self)})),
      _var0);
}
static void _V10_Dresolve__foreign__import_D233_k390(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D233_k390, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.make-preprocess-command.232 16 12) (close _V10_Dresolve__foreign__import_D233_k391) (bruijn ##.x.1380 0 0) (bruijn ##.architecture.507 15 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 12)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D233_k391, self)})),
      _var0,
      VGetArg(statics, 15-1, 3));
}
static void _V10_Dresolve__foreign__import_D233_k389(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D233_k389, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.find-file.230 15 10) (close _V10_Dresolve__foreign__import_D233_k390) (bruijn ##.file.516 5 0) (bruijn ##.paths.506 14 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 10)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D233_k390, self)})),
      VGetArg(statics, 5-1, 0),
      VGetArg(statics, 14-1, 2));
}
static void _V10_Dresolve__foreign__import_D233_k387(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D233_k387, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.1721) ((##vcore.string? (bruijn ##.file.516 4 0))) ((close _V10_Dresolve__foreign__import_D233_k388) (close _V10_Dresolve__foreign__import_D233_k389)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringP2(runtime, NULL,
      statics->up->up->up->vars[0]);
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dresolve__foreign__import_D233_k388, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D233_k389, self)})));
    }
}
static void _V10_Dresolve__foreign__import_D233_k385(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D233_k385, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dresolve__foreign__import_D233_k386) (close _V10_Dresolve__foreign__import_D233_k387))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dresolve__foreign__import_D233_k386, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D233_k387, self)})));
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
  // ((bruijn ##.x.584 30 0) (close _V10_Dresolve__foreign__import_D233_k385) (##inline ##vcore.car (bruijn ##.expr.145.513 3 0)) (##string ##.string.1747))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D233_k385, self)})),
      VInlineCar2(runtime,
        statics->up->up->vars[0]),
      VEncodePointer(&_V10_Dstring_D1747.sym, VPOINTER_OTHER));
}
static void _V10_Dresolve__foreign__import_D233_k383(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D233_k383, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.146.515 1 0))) (##vcore.call-with-values (close _V10_Dresolve__foreign__import_D233_k384) (close _V10_Dresolve__foreign__import_D233_lambda89) (bruijn ##.kk.142.510 5 1)) ((bruijn ##.k.1363 4 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D233_k384, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D233_lambda89, self)})),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dresolve__foreign__import_D233_k382(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D233_k382, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.146.515 0 0)) ((close _V10_Dresolve__foreign__import_D233_k383) (##inline ##vcore.car (bruijn ##.expr.146.515 0 0))) ((bruijn ##.k.1363 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dresolve__foreign__import_D233_k383, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dresolve__foreign__import_D233_k381(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D233_k381, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.145.513 0 0)) ((close _V10_Dresolve__foreign__import_D233_k382) (##inline ##vcore.cdr (bruijn ##.expr.145.513 0 0))) ((bruijn ##.k.1363 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dresolve__foreign__import_D233_k382, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dresolve__foreign__import_D233_k380(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D233_k380, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1364 0 0) ((close _V10_Dresolve__foreign__import_D233_k381) (##inline ##vcore.cdr (bruijn ##.expr.505 6 1))) ((bruijn ##.k.1363 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dresolve__foreign__import_D233_k381, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dresolve__foreign__import_D233_k379(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D233_k379, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.505 5 1)) ((bruijn ##.x.584 25 0) (close _V10_Dresolve__foreign__import_D233_k380) '##foreign.import (##inline ##vcore.car (bruijn ##.expr.505 5 1))) ((bruijn ##.k.1363 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 5-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D233_k380, self)})),
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
  // ((bruijn ##.x.587 23 0) (bruijn ##.k.1361 0 0) (##string ##.string.1766) (bruijn ##.expr.505 6 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1766.sym, VPOINTER_OTHER),
      VGetArg(statics, 6-1, 1));
}
static void _V10_Dresolve__foreign__import_D233_k400(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D233_k400, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1359 1 0) (close _V10_Dresolve__foreign__import_D233_lambda90) (bruijn ##.kk.142.510 1 1))
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
  // ((close _V10_Dresolve__foreign__import_D233_k379) (close _V10_Dresolve__foreign__import_D233_k400))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dresolve__foreign__import_D233_k379, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D233_k400, self)})));
}
static void _V10_Dresolve__foreign__import_D233_k378(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D233_k378, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 2 ((bruijn ##.x.1357 2 0) (bruijn ##.x.1358 1 0)) (##vcore.call/cc (bruijn ##.k.1356 3 0) (close _V10_Dresolve__foreign__import_D233_lambda88)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = statics->up->vars[0];
    self->vars[1] = statics->vars[0];
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->up->up->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D233_lambda88, self)})));
    }
}
static void _V10_Dresolve__foreign__import_D233_k377(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D233_k377, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.function (close _V10_Dresolve__foreign__import_D233_k378) (##string ##.string.1755))
    VCallFuncWithGC(runtime, (VFunc)VFunction2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D233_k378, self)})),
      VEncodePointer(&_V10_Dstring_D1755.sym, VPOINTER_OTHER));
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
  // (##vcore.function (close _V10_Dresolve__foreign__import_D233_k377) (##string ##.string.1767))
    VCallFuncWithGC(runtime, (VFunc)VFunction2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D233_k377, self)})),
      VEncodePointer(&_V10_Dstring_D1767.sym, VPOINTER_OTHER));
}
static void _V10_Dmangle__foreign__function_D234_lambda91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmangle__foreign__function_D234_lambda91, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.x.594 10 0) (bruijn ##.k.1389 0 0) (##string ##.string.1768) (bruijn ##.name.520 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1768.sym, VPOINTER_OTHER),
      _var1);
}
static void _V10_Dget__foreign__encoder_D235_k401(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__encoder_D235_k401, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.type.521 1 1)) (##vcore.eqv? (bruijn ##.k.1417 0 0) (##inline ##vcore.car (bruijn ##.type.521 1 1)) 'pointer) ((bruijn ##.k.1417 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[1]))) {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      _var0,
      VInlineCar2(runtime,
        statics->vars[1]),
      _V0pointer);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__encoder_D235_k402(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__encoder_D235_k402, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1391 0 0) ((bruijn ##.k.1390 1 0) (##inline ##vcore.qcons 'void-pointer '(##string ##.string.1769))) ((bruijn ##.x.599 6 0) (bruijn ##.k.1390 1 0) (bruijn ##.type.521 1 1) (##inline ##vcore.qcons (##inline ##vcore.qcons 'void '#t) (##inline ##vcore.qcons (##inline ##vcore.qcons '_Bool '(##string ##.string.1770)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'char '(##string ##.string.1771)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'signed-char '(##string ##.string.1772)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'unsigned-char '(##string ##.string.1772)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'short '(##string ##.string.1772)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'unsigned-short '(##string ##.string.1772)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'int '(##string ##.string.1772)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'unsigned-int '(##string ##.string.1772)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'double '(##string ##.string.1773)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'float '(##string ##.string.1773)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'VWORD '(##string ##.string.1748)) '()))))))))))))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        _V0void__pointer,
        VEncodePointer(&_V10_Dstring_D1769.sym, VPOINTER_OTHER)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 3,
      statics->vars[0],
      statics->vars[1],
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0void,
        VEncodeBool(true)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0_UBool,
        VEncodePointer(&_V10_Dstring_D1770.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0char,
        VEncodePointer(&_V10_Dstring_D1771.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0signed__char,
        VEncodePointer(&_V10_Dstring_D1772.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unsigned__char,
        VEncodePointer(&_V10_Dstring_D1772.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0short,
        VEncodePointer(&_V10_Dstring_D1772.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unsigned__short,
        VEncodePointer(&_V10_Dstring_D1772.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0int,
        VEncodePointer(&_V10_Dstring_D1772.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unsigned__int,
        VEncodePointer(&_V10_Dstring_D1772.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0double,
        VEncodePointer(&_V10_Dstring_D1773.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0float,
        VEncodePointer(&_V10_Dstring_D1773.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0VWORD,
        VEncodePointer(&_V10_Dstring_D1748.sym, VPOINTER_OTHER)),
        VNULL)))))))))))));
}
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
  // ((close _V10_Dget__foreign__encoder_D235_k401) (close _V10_Dget__foreign__encoder_D235_k402))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dget__foreign__encoder_D235_k401, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__encoder_D235_k402, self)})));
}
static void _V10_Dget__foreign__decoder_D236_k403(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k403, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.type.522 1 1)) (##vcore.eqv? (bruijn ##.k.1609 0 0) (##inline ##vcore.car (bruijn ##.type.522 1 1)) 'pointer) ((bruijn ##.k.1609 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[1]))) {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      _var0,
      VInlineCar2(runtime,
        statics->vars[1]),
      _V0pointer);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k408(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k408, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1574 0 0) (bruijn ##.k.1573 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
static void _V10_Dget__foreign__decoder_D236_lambda95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_lambda95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1575 0 0) (##inline ##vcore.qcons 'c-string '(##string ##.string.1774)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0c__string,
        VEncodePointer(&_V10_Dstring_D1774.sym, VPOINTER_OTHER)));
}
static void _V10_Dget__foreign__decoder_D236_k407(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k407, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1572 1 0) (##vcore.call-with-values (close _V10_Dget__foreign__decoder_D236_k408) (close _V10_Dget__foreign__decoder_D236_lambda95) (bruijn ##.kk.147.523 3 1)) ((bruijn ##.k.1573 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k408, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_lambda95, self)})),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k414(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k414, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1567 0 0) (bruijn ##.k.1562 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V10_Dget__foreign__decoder_D236_lambda96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_lambda96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1568 0 0) (##inline ##vcore.qcons 'const-c-string '(##string ##.string.1775)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0const__c__string,
        VEncodePointer(&_V10_Dstring_D1775.sym, VPOINTER_OTHER)));
}
static void _V10_Dget__foreign__decoder_D236_k413(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k413, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1565 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.150.526 1 0))) (##vcore.call-with-values (close _V10_Dget__foreign__decoder_D236_k414) (close _V10_Dget__foreign__decoder_D236_lambda96) (bruijn ##.kk.147.523 7 1)) ((bruijn ##.k.1562 3 0) #f)) ((bruijn ##.k.1562 3 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k414, self)})),
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
static void _V10_Dget__foreign__decoder_D236_k412(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k412, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.150.526 0 0)) ((bruijn ##.x.584 28 0) (close _V10_Dget__foreign__decoder_D236_k413) 'char (##inline ##vcore.car (bruijn ##.expr.150.526 0 0))) ((bruijn ##.k.1562 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k413, self)})),
      _V0char,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k411(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k411, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1563 0 0) ((close _V10_Dget__foreign__decoder_D236_k412) (##inline ##vcore.cdr (bruijn ##.input.148.524 4 0))) ((bruijn ##.k.1562 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dget__foreign__decoder_D236_k412, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k410(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k410, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.input.148.524 3 0)) ((bruijn ##.x.584 26 0) (close _V10_Dget__foreign__decoder_D236_k411) 'const (##inline ##vcore.car (bruijn ##.input.148.524 3 0))) ((bruijn ##.k.1562 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k411, self)})),
      _V0const,
      VInlineCar2(runtime,
        statics->up->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k420(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k420, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1556 0 0) (bruijn ##.k.1551 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V10_Dget__foreign__decoder_D236_lambda97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_lambda97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1557 0 0) (##inline ##vcore.qcons 'const-void-pointer '(##string ##.string.1776)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0const__void__pointer,
        VEncodePointer(&_V10_Dstring_D1776.sym, VPOINTER_OTHER)));
}
static void _V10_Dget__foreign__decoder_D236_k419(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k419, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1554 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.152.528 1 0))) (##vcore.call-with-values (close _V10_Dget__foreign__decoder_D236_k420) (close _V10_Dget__foreign__decoder_D236_lambda97) (bruijn ##.kk.147.523 8 1)) ((bruijn ##.k.1551 3 0) #f)) ((bruijn ##.k.1551 3 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k420, self)})),
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
static void _V10_Dget__foreign__decoder_D236_k418(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k418, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.152.528 0 0)) ((bruijn ##.x.584 29 0) (close _V10_Dget__foreign__decoder_D236_k419) 'void (##inline ##vcore.car (bruijn ##.expr.152.528 0 0))) ((bruijn ##.k.1551 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k419, self)})),
      _V0void,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k417(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k417, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1552 0 0) ((close _V10_Dget__foreign__decoder_D236_k418) (##inline ##vcore.cdr (bruijn ##.input.148.524 5 0))) ((bruijn ##.k.1551 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dget__foreign__decoder_D236_k418, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 0)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k416(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k416, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.input.148.524 4 0)) ((bruijn ##.x.584 27 0) (close _V10_Dget__foreign__decoder_D236_k417) 'const (##inline ##vcore.car (bruijn ##.input.148.524 4 0))) ((bruijn ##.k.1551 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->up->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k417, self)})),
      _V0const,
      VInlineCar2(runtime,
        statics->up->up->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k424(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k424, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1548 0 0) (bruijn ##.k.1547 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
static void _V10_Dget__foreign__decoder_D236_lambda98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_lambda98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1549 0 0) (##inline ##vcore.qcons 'void-pointer '(##string ##.string.1777)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0void__pointer,
        VEncodePointer(&_V10_Dstring_D1777.sym, VPOINTER_OTHER)));
}
static void _V10_Dget__foreign__decoder_D236_k423(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k423, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1546 1 0) (##vcore.call-with-values (close _V10_Dget__foreign__decoder_D236_k424) (close _V10_Dget__foreign__decoder_D236_lambda98) (bruijn ##.kk.147.523 7 1)) ((bruijn ##.k.1547 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k424, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_lambda98, self)})),
      VGetArg(statics, 7-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k428(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k428, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1544 0 0) (bruijn ##.k.1543 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
static void _V10_Dget__foreign__decoder_D236_lambda99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_lambda99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1545 0 0) (##inline ##vcore.qcons 'f32-pointer '(##string ##.string.1778)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0f32__pointer,
        VEncodePointer(&_V10_Dstring_D1778.sym, VPOINTER_OTHER)));
}
static void _V10_Dget__foreign__decoder_D236_k427(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k427, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1542 1 0) (##vcore.call-with-values (close _V10_Dget__foreign__decoder_D236_k428) (close _V10_Dget__foreign__decoder_D236_lambda99) (bruijn ##.kk.147.523 9 1)) ((bruijn ##.k.1543 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k428, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_lambda99, self)})),
      VGetArg(statics, 9-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k432(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k432, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1540 0 0) (bruijn ##.k.1539 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
static void _V10_Dget__foreign__decoder_D236_lambda100(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_lambda100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1541 0 0) (##inline ##vcore.qcons 'f64-pointer '(##string ##.string.1779)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0f64__pointer,
        VEncodePointer(&_V10_Dstring_D1779.sym, VPOINTER_OTHER)));
}
static void _V10_Dget__foreign__decoder_D236_k431(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k431, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1538 1 0) (##vcore.call-with-values (close _V10_Dget__foreign__decoder_D236_k432) (close _V10_Dget__foreign__decoder_D236_lambda100) (bruijn ##.kk.147.523 11 1)) ((bruijn ##.k.1539 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k432, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_lambda100, self)})),
      VGetArg(statics, 11-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k436(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k436, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1536 0 0) (bruijn ##.k.1535 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
static void _V10_Dget__foreign__decoder_D236_lambda101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_lambda101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1537 0 0) (##inline ##vcore.qcons 's32-pointer '(##string ##.string.1780)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0s32__pointer,
        VEncodePointer(&_V10_Dstring_D1780.sym, VPOINTER_OTHER)));
}
static void _V10_Dget__foreign__decoder_D236_k435(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k435, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1534 1 0) (##vcore.call-with-values (close _V10_Dget__foreign__decoder_D236_k436) (close _V10_Dget__foreign__decoder_D236_lambda101) (bruijn ##.kk.147.523 13 1)) ((bruijn ##.k.1535 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k436, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_lambda101, self)})),
      VGetArg(statics, 13-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k440(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k440, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1532 0 0) (bruijn ##.k.1531 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
static void _V10_Dget__foreign__decoder_D236_lambda102(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_lambda102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1533 0 0) (##inline ##vcore.qcons 'u16-pointer '(##string ##.string.1781)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0u16__pointer,
        VEncodePointer(&_V10_Dstring_D1781.sym, VPOINTER_OTHER)));
}
static void _V10_Dget__foreign__decoder_D236_k439(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k439, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1530 1 0) (##vcore.call-with-values (close _V10_Dget__foreign__decoder_D236_k440) (close _V10_Dget__foreign__decoder_D236_lambda102) (bruijn ##.kk.147.523 15 1)) ((bruijn ##.k.1531 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k440, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_lambda102, self)})),
      VGetArg(statics, 15-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k444(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k444, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1528 0 0) (bruijn ##.k.1527 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
static void _V10_Dget__foreign__decoder_D236_lambda103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_lambda103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1529 0 0) (##inline ##vcore.qcons 's16-pointer '(##string ##.string.1782)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0s16__pointer,
        VEncodePointer(&_V10_Dstring_D1782.sym, VPOINTER_OTHER)));
}
static void _V10_Dget__foreign__decoder_D236_k443(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k443, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1526 1 0) (##vcore.call-with-values (close _V10_Dget__foreign__decoder_D236_k444) (close _V10_Dget__foreign__decoder_D236_lambda103) (bruijn ##.kk.147.523 17 1)) ((bruijn ##.k.1527 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k444, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_lambda103, self)})),
      VGetArg(statics, 17-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k448(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k448, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1524 0 0) (bruijn ##.k.1523 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
static void _V10_Dget__foreign__decoder_D236_lambda104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_lambda104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1525 0 0) (##inline ##vcore.qcons 'u8-pointer '(##string ##.string.1783)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0u8__pointer,
        VEncodePointer(&_V10_Dstring_D1783.sym, VPOINTER_OTHER)));
}
static void _V10_Dget__foreign__decoder_D236_k447(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k447, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1522 1 0) (##vcore.call-with-values (close _V10_Dget__foreign__decoder_D236_k448) (close _V10_Dget__foreign__decoder_D236_lambda104) (bruijn ##.kk.147.523 19 1)) ((bruijn ##.k.1523 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k448, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_lambda104, self)})),
      VGetArg(statics, 19-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k452(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k452, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1520 0 0) (bruijn ##.k.1519 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
static void _V10_Dget__foreign__decoder_D236_lambda105(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_lambda105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1521 0 0) (##inline ##vcore.qcons 's8-pointer '(##string ##.string.1784)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0s8__pointer,
        VEncodePointer(&_V10_Dstring_D1784.sym, VPOINTER_OTHER)));
}
static void _V10_Dget__foreign__decoder_D236_k451(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k451, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1518 1 0) (##vcore.call-with-values (close _V10_Dget__foreign__decoder_D236_k452) (close _V10_Dget__foreign__decoder_D236_lambda105) (bruijn ##.kk.147.523 21 1)) ((bruijn ##.k.1519 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k452, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_lambda105, self)})),
      VGetArg(statics, 21-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k458(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k458, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1513 0 0) (bruijn ##.k.1508 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V10_Dget__foreign__decoder_D236_lambda106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_lambda106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1514 0 0) (##inline ##vcore.qcons 'f32-pointer '(##string ##.string.1778)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0f32__pointer,
        VEncodePointer(&_V10_Dstring_D1778.sym, VPOINTER_OTHER)));
}
static void _V10_Dget__foreign__decoder_D236_k457(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k457, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1511 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.154.530 1 0))) (##vcore.call-with-values (close _V10_Dget__foreign__decoder_D236_k458) (close _V10_Dget__foreign__decoder_D236_lambda106) (bruijn ##.kk.147.523 25 1)) ((bruijn ##.k.1508 3 0) #f)) ((bruijn ##.k.1508 3 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k458, self)})),
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
static void _V10_Dget__foreign__decoder_D236_k456(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k456, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.154.530 0 0)) ((bruijn ##.x.584 46 0) (close _V10_Dget__foreign__decoder_D236_k457) 'float (##inline ##vcore.car (bruijn ##.expr.154.530 0 0))) ((bruijn ##.k.1508 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 46-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k457, self)})),
      _V0float,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k455(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k455, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1509 0 0) ((close _V10_Dget__foreign__decoder_D236_k456) (##inline ##vcore.cdr (bruijn ##.input.148.524 22 0))) ((bruijn ##.k.1508 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dget__foreign__decoder_D236_k456, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 22-1, 0)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k454(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k454, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.input.148.524 21 0)) ((bruijn ##.x.584 44 0) (close _V10_Dget__foreign__decoder_D236_k455) 'const (##inline ##vcore.car (bruijn ##.input.148.524 21 0))) ((bruijn ##.k.1508 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 21-1, 0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 44-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k455, self)})),
      _V0const,
      VInlineCar2(runtime,
        VGetArg(statics, 21-1, 0)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k464(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k464, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1502 0 0) (bruijn ##.k.1497 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V10_Dget__foreign__decoder_D236_lambda107(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_lambda107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1503 0 0) (##inline ##vcore.qcons 'f64-pointer '(##string ##.string.1779)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0f64__pointer,
        VEncodePointer(&_V10_Dstring_D1779.sym, VPOINTER_OTHER)));
}
static void _V10_Dget__foreign__decoder_D236_k463(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k463, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1500 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.156.532 1 0))) (##vcore.call-with-values (close _V10_Dget__foreign__decoder_D236_k464) (close _V10_Dget__foreign__decoder_D236_lambda107) (bruijn ##.kk.147.523 26 1)) ((bruijn ##.k.1497 3 0) #f)) ((bruijn ##.k.1497 3 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k464, self)})),
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
static void _V10_Dget__foreign__decoder_D236_k462(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k462, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.156.532 0 0)) ((bruijn ##.x.584 47 0) (close _V10_Dget__foreign__decoder_D236_k463) 'double (##inline ##vcore.car (bruijn ##.expr.156.532 0 0))) ((bruijn ##.k.1497 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 47-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k463, self)})),
      _V0double,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k461(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k461, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1498 0 0) ((close _V10_Dget__foreign__decoder_D236_k462) (##inline ##vcore.cdr (bruijn ##.input.148.524 23 0))) ((bruijn ##.k.1497 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dget__foreign__decoder_D236_k462, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 23-1, 0)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k460(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k460, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.input.148.524 22 0)) ((bruijn ##.x.584 45 0) (close _V10_Dget__foreign__decoder_D236_k461) 'const (##inline ##vcore.car (bruijn ##.input.148.524 22 0))) ((bruijn ##.k.1497 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 22-1, 0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 45-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k461, self)})),
      _V0const,
      VInlineCar2(runtime,
        VGetArg(statics, 22-1, 0)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k470(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k470, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1491 0 0) (bruijn ##.k.1486 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V10_Dget__foreign__decoder_D236_lambda108(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_lambda108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1492 0 0) (##inline ##vcore.qcons 's32-pointer '(##string ##.string.1780)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0s32__pointer,
        VEncodePointer(&_V10_Dstring_D1780.sym, VPOINTER_OTHER)));
}
static void _V10_Dget__foreign__decoder_D236_k469(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k469, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1489 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.158.534 1 0))) (##vcore.call-with-values (close _V10_Dget__foreign__decoder_D236_k470) (close _V10_Dget__foreign__decoder_D236_lambda108) (bruijn ##.kk.147.523 27 1)) ((bruijn ##.k.1486 3 0) #f)) ((bruijn ##.k.1486 3 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k470, self)})),
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
static void _V10_Dget__foreign__decoder_D236_k468(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k468, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.158.534 0 0)) ((bruijn ##.x.584 48 0) (close _V10_Dget__foreign__decoder_D236_k469) 'int (##inline ##vcore.car (bruijn ##.expr.158.534 0 0))) ((bruijn ##.k.1486 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 48-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k469, self)})),
      _V0int,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k467(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k467, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1487 0 0) ((close _V10_Dget__foreign__decoder_D236_k468) (##inline ##vcore.cdr (bruijn ##.input.148.524 24 0))) ((bruijn ##.k.1486 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dget__foreign__decoder_D236_k468, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 24-1, 0)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k466(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k466, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.input.148.524 23 0)) ((bruijn ##.x.584 46 0) (close _V10_Dget__foreign__decoder_D236_k467) 'const (##inline ##vcore.car (bruijn ##.input.148.524 23 0))) ((bruijn ##.k.1486 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 23-1, 0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 46-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k467, self)})),
      _V0const,
      VInlineCar2(runtime,
        VGetArg(statics, 23-1, 0)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k476(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k476, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1480 0 0) (bruijn ##.k.1475 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V10_Dget__foreign__decoder_D236_lambda109(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_lambda109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1481 0 0) (##inline ##vcore.qcons 'u16-pointer '(##string ##.string.1781)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0u16__pointer,
        VEncodePointer(&_V10_Dstring_D1781.sym, VPOINTER_OTHER)));
}
static void _V10_Dget__foreign__decoder_D236_k475(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k475, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1478 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.160.536 1 0))) (##vcore.call-with-values (close _V10_Dget__foreign__decoder_D236_k476) (close _V10_Dget__foreign__decoder_D236_lambda109) (bruijn ##.kk.147.523 28 1)) ((bruijn ##.k.1475 3 0) #f)) ((bruijn ##.k.1475 3 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k476, self)})),
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
static void _V10_Dget__foreign__decoder_D236_k474(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k474, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.160.536 0 0)) ((bruijn ##.x.584 49 0) (close _V10_Dget__foreign__decoder_D236_k475) 'unsigned-short (##inline ##vcore.car (bruijn ##.expr.160.536 0 0))) ((bruijn ##.k.1475 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 49-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k475, self)})),
      _V0unsigned__short,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k473(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k473, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1476 0 0) ((close _V10_Dget__foreign__decoder_D236_k474) (##inline ##vcore.cdr (bruijn ##.input.148.524 25 0))) ((bruijn ##.k.1475 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dget__foreign__decoder_D236_k474, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 25-1, 0)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k472(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k472, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.input.148.524 24 0)) ((bruijn ##.x.584 47 0) (close _V10_Dget__foreign__decoder_D236_k473) 'const (##inline ##vcore.car (bruijn ##.input.148.524 24 0))) ((bruijn ##.k.1475 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 24-1, 0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 47-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k473, self)})),
      _V0const,
      VInlineCar2(runtime,
        VGetArg(statics, 24-1, 0)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k482(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k482, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1469 0 0) (bruijn ##.k.1464 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V10_Dget__foreign__decoder_D236_lambda110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_lambda110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1470 0 0) (##inline ##vcore.qcons 's16-pointer '(##string ##.string.1782)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0s16__pointer,
        VEncodePointer(&_V10_Dstring_D1782.sym, VPOINTER_OTHER)));
}
static void _V10_Dget__foreign__decoder_D236_k481(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k481, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1467 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.162.538 1 0))) (##vcore.call-with-values (close _V10_Dget__foreign__decoder_D236_k482) (close _V10_Dget__foreign__decoder_D236_lambda110) (bruijn ##.kk.147.523 29 1)) ((bruijn ##.k.1464 3 0) #f)) ((bruijn ##.k.1464 3 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k482, self)})),
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
static void _V10_Dget__foreign__decoder_D236_k480(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k480, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.162.538 0 0)) ((bruijn ##.x.584 50 0) (close _V10_Dget__foreign__decoder_D236_k481) 'short (##inline ##vcore.car (bruijn ##.expr.162.538 0 0))) ((bruijn ##.k.1464 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 50-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k481, self)})),
      _V0short,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k479(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k479, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1465 0 0) ((close _V10_Dget__foreign__decoder_D236_k480) (##inline ##vcore.cdr (bruijn ##.input.148.524 26 0))) ((bruijn ##.k.1464 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dget__foreign__decoder_D236_k480, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 26-1, 0)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k478(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k478, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.input.148.524 25 0)) ((bruijn ##.x.584 48 0) (close _V10_Dget__foreign__decoder_D236_k479) 'const (##inline ##vcore.car (bruijn ##.input.148.524 25 0))) ((bruijn ##.k.1464 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 25-1, 0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 48-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k479, self)})),
      _V0const,
      VInlineCar2(runtime,
        VGetArg(statics, 25-1, 0)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k488(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k488, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1458 0 0) (bruijn ##.k.1453 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V10_Dget__foreign__decoder_D236_lambda111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_lambda111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1459 0 0) (##inline ##vcore.qcons 'u8-pointer '(##string ##.string.1783)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0u8__pointer,
        VEncodePointer(&_V10_Dstring_D1783.sym, VPOINTER_OTHER)));
}
static void _V10_Dget__foreign__decoder_D236_k487(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k487, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1456 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.164.540 1 0))) (##vcore.call-with-values (close _V10_Dget__foreign__decoder_D236_k488) (close _V10_Dget__foreign__decoder_D236_lambda111) (bruijn ##.kk.147.523 30 1)) ((bruijn ##.k.1453 3 0) #f)) ((bruijn ##.k.1453 3 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k488, self)})),
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
static void _V10_Dget__foreign__decoder_D236_k486(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k486, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.164.540 0 0)) ((bruijn ##.x.584 51 0) (close _V10_Dget__foreign__decoder_D236_k487) 'unsigned-char (##inline ##vcore.car (bruijn ##.expr.164.540 0 0))) ((bruijn ##.k.1453 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 51-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k487, self)})),
      _V0unsigned__char,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k485(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k485, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1454 0 0) ((close _V10_Dget__foreign__decoder_D236_k486) (##inline ##vcore.cdr (bruijn ##.input.148.524 27 0))) ((bruijn ##.k.1453 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dget__foreign__decoder_D236_k486, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 27-1, 0)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k484(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k484, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.input.148.524 26 0)) ((bruijn ##.x.584 49 0) (close _V10_Dget__foreign__decoder_D236_k485) 'const (##inline ##vcore.car (bruijn ##.input.148.524 26 0))) ((bruijn ##.k.1453 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 26-1, 0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 49-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k485, self)})),
      _V0const,
      VInlineCar2(runtime,
        VGetArg(statics, 26-1, 0)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k494(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k494, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1447 0 0) (bruijn ##.k.1442 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V10_Dget__foreign__decoder_D236_lambda112(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_lambda112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1448 0 0) (##inline ##vcore.qcons 's8-pointer '(##string ##.string.1784)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0s8__pointer,
        VEncodePointer(&_V10_Dstring_D1784.sym, VPOINTER_OTHER)));
}
static void _V10_Dget__foreign__decoder_D236_k493(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k493, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1445 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.166.542 1 0))) (##vcore.call-with-values (close _V10_Dget__foreign__decoder_D236_k494) (close _V10_Dget__foreign__decoder_D236_lambda112) (bruijn ##.kk.147.523 31 1)) ((bruijn ##.k.1442 3 0) #f)) ((bruijn ##.k.1442 3 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k494, self)})),
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
static void _V10_Dget__foreign__decoder_D236_k492(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k492, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.166.542 0 0)) ((bruijn ##.x.584 52 0) (close _V10_Dget__foreign__decoder_D236_k493) 'signed-char (##inline ##vcore.car (bruijn ##.expr.166.542 0 0))) ((bruijn ##.k.1442 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 52-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k493, self)})),
      _V0signed__char,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k491(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k491, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1443 0 0) ((close _V10_Dget__foreign__decoder_D236_k492) (##inline ##vcore.cdr (bruijn ##.input.148.524 28 0))) ((bruijn ##.k.1442 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dget__foreign__decoder_D236_k492, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 28-1, 0)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dget__foreign__decoder_D236_k490(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k490, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.input.148.524 27 0)) ((bruijn ##.x.584 50 0) (close _V10_Dget__foreign__decoder_D236_k491) 'const (##inline ##vcore.car (bruijn ##.input.148.524 27 0))) ((bruijn ##.k.1442 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 27-1, 0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 50-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k491, self)})),
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
  // ((bruijn ##.k.1440 0 0) (##inline ##vcore.qcons 'void-pointer '(##string ##.string.1785)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0void__pointer,
        VEncodePointer(&_V10_Dstring_D1785.sym, VPOINTER_OTHER)));
}
static void _V10_Dget__foreign__decoder_D236_k495(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k495, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1421 28 0) (close _V10_Dget__foreign__decoder_D236_lambda113) (bruijn ##.kk.147.523 28 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 28-1, 0),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_lambda113, self)})),
      VGetArg(statics, 28-1, 1));
}
static void _V10_Dget__foreign__decoder_D236_k489(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k489, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dget__foreign__decoder_D236_k490) (close _V10_Dget__foreign__decoder_D236_k495))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dget__foreign__decoder_D236_k490, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k495, self)})));
}
static void _V10_Dget__foreign__decoder_D236_k483(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k483, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dget__foreign__decoder_D236_k484) (close _V10_Dget__foreign__decoder_D236_k489))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dget__foreign__decoder_D236_k484, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k489, self)})));
}
static void _V10_Dget__foreign__decoder_D236_k477(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k477, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dget__foreign__decoder_D236_k478) (close _V10_Dget__foreign__decoder_D236_k483))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dget__foreign__decoder_D236_k478, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k483, self)})));
}
static void _V10_Dget__foreign__decoder_D236_k471(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k471, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dget__foreign__decoder_D236_k472) (close _V10_Dget__foreign__decoder_D236_k477))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dget__foreign__decoder_D236_k472, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k477, self)})));
}
static void _V10_Dget__foreign__decoder_D236_k465(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k465, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dget__foreign__decoder_D236_k466) (close _V10_Dget__foreign__decoder_D236_k471))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dget__foreign__decoder_D236_k466, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k471, self)})));
}
static void _V10_Dget__foreign__decoder_D236_k459(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k459, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dget__foreign__decoder_D236_k460) (close _V10_Dget__foreign__decoder_D236_k465))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dget__foreign__decoder_D236_k460, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k465, self)})));
}
static void _V10_Dget__foreign__decoder_D236_k453(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k453, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dget__foreign__decoder_D236_k454) (close _V10_Dget__foreign__decoder_D236_k459))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dget__foreign__decoder_D236_k454, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k459, self)})));
}
static void _V10_Dget__foreign__decoder_D236_k450(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k450, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dget__foreign__decoder_D236_k451) (close _V10_Dget__foreign__decoder_D236_k453))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dget__foreign__decoder_D236_k451, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k453, self)})));
}
static void _V10_Dget__foreign__decoder_D236_k449(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k449, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.584 41 0) (close _V10_Dget__foreign__decoder_D236_k450) 'signed-char (bruijn ##.input.148.524 18 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 41-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k450, self)})),
      _V0signed__char,
      VGetArg(statics, 18-1, 0));
}
static void _V10_Dget__foreign__decoder_D236_k446(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k446, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dget__foreign__decoder_D236_k447) (close _V10_Dget__foreign__decoder_D236_k449))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dget__foreign__decoder_D236_k447, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k449, self)})));
}
static void _V10_Dget__foreign__decoder_D236_k445(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k445, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.584 39 0) (close _V10_Dget__foreign__decoder_D236_k446) 'unsigned-char (bruijn ##.input.148.524 16 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 39-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k446, self)})),
      _V0unsigned__char,
      VGetArg(statics, 16-1, 0));
}
static void _V10_Dget__foreign__decoder_D236_k442(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k442, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dget__foreign__decoder_D236_k443) (close _V10_Dget__foreign__decoder_D236_k445))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dget__foreign__decoder_D236_k443, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k445, self)})));
}
static void _V10_Dget__foreign__decoder_D236_k441(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k441, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.584 37 0) (close _V10_Dget__foreign__decoder_D236_k442) 'short (bruijn ##.input.148.524 14 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k442, self)})),
      _V0short,
      VGetArg(statics, 14-1, 0));
}
static void _V10_Dget__foreign__decoder_D236_k438(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k438, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dget__foreign__decoder_D236_k439) (close _V10_Dget__foreign__decoder_D236_k441))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dget__foreign__decoder_D236_k439, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k441, self)})));
}
static void _V10_Dget__foreign__decoder_D236_k437(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k437, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.584 35 0) (close _V10_Dget__foreign__decoder_D236_k438) 'unsigned-short (bruijn ##.input.148.524 12 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 35-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k438, self)})),
      _V0unsigned__short,
      VGetArg(statics, 12-1, 0));
}
static void _V10_Dget__foreign__decoder_D236_k434(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k434, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dget__foreign__decoder_D236_k435) (close _V10_Dget__foreign__decoder_D236_k437))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dget__foreign__decoder_D236_k435, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k437, self)})));
}
static void _V10_Dget__foreign__decoder_D236_k433(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k433, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.584 33 0) (close _V10_Dget__foreign__decoder_D236_k434) 'int (bruijn ##.input.148.524 10 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k434, self)})),
      _V0int,
      VGetArg(statics, 10-1, 0));
}
static void _V10_Dget__foreign__decoder_D236_k430(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k430, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dget__foreign__decoder_D236_k431) (close _V10_Dget__foreign__decoder_D236_k433))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dget__foreign__decoder_D236_k431, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k433, self)})));
}
static void _V10_Dget__foreign__decoder_D236_k429(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k429, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.584 31 0) (close _V10_Dget__foreign__decoder_D236_k430) 'double (bruijn ##.input.148.524 8 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k430, self)})),
      _V0double,
      VGetArg(statics, 8-1, 0));
}
static void _V10_Dget__foreign__decoder_D236_k426(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k426, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dget__foreign__decoder_D236_k427) (close _V10_Dget__foreign__decoder_D236_k429))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dget__foreign__decoder_D236_k427, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k429, self)})));
}
static void _V10_Dget__foreign__decoder_D236_k425(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k425, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.584 29 0) (close _V10_Dget__foreign__decoder_D236_k426) 'float (bruijn ##.input.148.524 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k426, self)})),
      _V0float,
      VGetArg(statics, 6-1, 0));
}
static void _V10_Dget__foreign__decoder_D236_k422(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k422, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dget__foreign__decoder_D236_k423) (close _V10_Dget__foreign__decoder_D236_k425))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dget__foreign__decoder_D236_k423, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k425, self)})));
}
static void _V10_Dget__foreign__decoder_D236_k421(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k421, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.584 27 0) (close _V10_Dget__foreign__decoder_D236_k422) 'void (bruijn ##.input.148.524 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k422, self)})),
      _V0void,
      statics->up->up->up->vars[0]);
}
static void _V10_Dget__foreign__decoder_D236_k415(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k415, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dget__foreign__decoder_D236_k416) (close _V10_Dget__foreign__decoder_D236_k421))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dget__foreign__decoder_D236_k416, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k421, self)})));
}
static void _V10_Dget__foreign__decoder_D236_k409(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k409, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dget__foreign__decoder_D236_k410) (close _V10_Dget__foreign__decoder_D236_k415))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dget__foreign__decoder_D236_k410, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k415, self)})));
}
static void _V10_Dget__foreign__decoder_D236_k406(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k406, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dget__foreign__decoder_D236_k407) (close _V10_Dget__foreign__decoder_D236_k409))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dget__foreign__decoder_D236_k407, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k409, self)})));
}
static void _V10_Dget__foreign__decoder_D236_k405(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k405, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.584 23 0) (close _V10_Dget__foreign__decoder_D236_k406) 'char (bruijn ##.input.148.524 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k406, self)})),
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
  // ((bruijn ##.x.583 23 0) (close _V10_Dget__foreign__decoder_D236_k405) (bruijn ##.type.522 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k405, self)})),
      statics->up->vars[1]);
}
static void _V10_Dget__foreign__decoder_D236_k404(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D236_k404, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1420 0 0) (##vcore.call/cc (bruijn ##.k.1419 1 0) (close _V10_Dget__foreign__decoder_D236_lambda94)) ((bruijn ##.x.599 6 0) (bruijn ##.k.1419 1 0) (bruijn ##.type.522 1 1) (##inline ##vcore.qcons (##inline ##vcore.qcons '_Bool '(##string ##.string.1786)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'char '(##string ##.string.1787)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'signed-char '(##string ##.string.1788)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'unsigned-char '(##string ##.string.1789)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'short '(##string ##.string.1790)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'unsigned-short '(##string ##.string.1791)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'int '(##string ##.string.1792)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'unsigned-int '(##string ##.string.1792)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'long '(##string ##.string.1792)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'unsigned-long '(##string ##.string.1792)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'long-long '(##string ##.string.1792)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'unsigned-long-long '(##string ##.string.1792)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'double '(##string ##.string.1793)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'float '(##string ##.string.1793)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'VWORD '(##string ##.string.1794)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'c-string '(##string ##.string.1774)) '()))))))))))))))))))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_lambda94, self)})));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 3,
      statics->vars[0],
      statics->vars[1],
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0_UBool,
        VEncodePointer(&_V10_Dstring_D1786.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0char,
        VEncodePointer(&_V10_Dstring_D1787.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0signed__char,
        VEncodePointer(&_V10_Dstring_D1788.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unsigned__char,
        VEncodePointer(&_V10_Dstring_D1789.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0short,
        VEncodePointer(&_V10_Dstring_D1790.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unsigned__short,
        VEncodePointer(&_V10_Dstring_D1791.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0int,
        VEncodePointer(&_V10_Dstring_D1792.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unsigned__int,
        VEncodePointer(&_V10_Dstring_D1792.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0long,
        VEncodePointer(&_V10_Dstring_D1792.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unsigned__long,
        VEncodePointer(&_V10_Dstring_D1792.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0long__long,
        VEncodePointer(&_V10_Dstring_D1792.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unsigned__long__long,
        VEncodePointer(&_V10_Dstring_D1792.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0double,
        VEncodePointer(&_V10_Dstring_D1793.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0float,
        VEncodePointer(&_V10_Dstring_D1793.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0VWORD,
        VEncodePointer(&_V10_Dstring_D1794.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0c__string,
        VEncodePointer(&_V10_Dstring_D1774.sym, VPOINTER_OTHER)),
        VNULL)))))))))))))))));
}
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
  // ((close _V10_Dget__foreign__decoder_D236_k403) (close _V10_Dget__foreign__decoder_D236_k404))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dget__foreign__decoder_D236_k403, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D236_k404, self)})));
}
static void _V10_Dloop_D558_k505(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D558_k505, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.176.557 4 1) (bruijn ##.k.1632 1 0) (bruijn ##.expr.178.559 2 1) (bruijn ##.x.1633 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      statics->vars[0],
      statics->up->vars[1],
      _var0);
}
static void _V10_Dloop_D558_k504(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D558_k504, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.178.559 1 1))) ((bruijn ##.x.577 41 0) (close _V10_Dloop_D558_k505) (bruijn ##.args.175.560 1 2)) ((bruijn ##.k.1632 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 41-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D558_k505, self)})),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D558_k508(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D558_k508, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.176.557 7 1) (bruijn ##.k.1626 2 0) (bruijn ##.expr.178.559 5 1) (bruijn ##.x.1628 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      statics->up->vars[0],
      VGetArg(statics, 5-1, 1),
      _var0);
}
static void _V10_Dloop_D558_k507(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D558_k507, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.577 44 0) (close _V10_Dloop_D558_k508) (bruijn ##.args.175.560 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 44-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D558_k508, self)})),
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
  // ((bruijn ##.kk.177.561 0 1) (close _V10_Dloop_D558_k507) (##inline ##vcore.cdr (bruijn ##.expr.178.559 3 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.178.559 3 1)) (bruijn ##.args.175.560 3 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var1), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D558_k507, self)})),
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
  // (##vcore.call/cc (bruijn ##.k.1625 0 0) (close _V10_Dloop_D558_lambda120))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D558_lambda120, self)})));
}
static void _V10_Dloop_D558_k506(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D558_k506, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1623 1 0) (close _V10_Dloop_D558_lambda119) (bruijn ##.loop.558 2 0))
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
  // ((close _V10_Dloop_D558_k504) (close _V10_Dloop_D558_k506))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D558_k504, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D558_k506, self)})));
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
  // (letrec 1 ((close _V10_Dloop_D558_lambda118)) ((bruijn ##.loop.558 0 0) (bruijn ##.k.1622 1 0) (##inline ##vcore.cdr (bruijn ##.expr.173.554 4 0)) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
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
  // (##vcore.call/cc (bruijn ##.k.1621 0 0) (close _V10_Dprint__foreign__function_D237_lambda117))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_lambda117, self)})));
}
static void _V10_Dprint__foreign__function_D237_k509(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k509, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1637 0 0) (bruijn ##.k.1635 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
static void _V10_Dprint__arg_D567_k513(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__arg_D567_k513, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.602 19 0) (bruijn ##.k.1641 1 0) (##string ##.string.1795) (##inline ##vcore.cdr (bruijn ##.x.1643 0 0)) (bruijn ##.argname.569 1 2) (bruijn ##.name.555 8 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 5,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1795.sym, VPOINTER_OTHER),
      VInlineCdr2(runtime,
        _var0),
      statics->vars[2],
      VGetArg(statics, 8-1, 0));
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
  // ((bruijn ##.get-foreign-decoder.236 17 16) (close _V10_Dprint__arg_D567_k513) (bruijn ##.arg.568 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 16)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__arg_D567_k513, self)})),
      _var1);
}
static void _V10_Dprint__foreign__function_D237_k518(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k518, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.602 23 0) (bruijn ##.k.1665 4 0) (##string ##.string.1796))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 2,
      statics->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1796.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__foreign__function_D237_lambda124(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_lambda124, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.x.602 23 0) (bruijn ##.k.1668 0 0) (##string ##.string.1797) (bruijn ##.e.570 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1797.sym, VPOINTER_OTHER),
      _var1);
}
static void _V10_Dprint__foreign__function_D237_k517(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k517, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.588 36 0) (close _V10_Dprint__foreign__function_D237_k518) (close _V10_Dprint__foreign__function_D237_lambda124) (bruijn ##.x.1640 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_k518, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_lambda124, self)})),
      VGetArg(statics, 6-1, 0));
}
static void _V10_Dprint__foreign__function_D237_k516(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k516, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.1722) ((##vcore.+ 1 (bruijn ##.x.1670 1 0))) ((bruijn ##.x.602 21 0) (close _V10_Dprint__foreign__function_D237_k517) (##string ##.string.1798) (bruijn ##.name.555 10 0) (bruijn ##.name.555 10 0) (bruijn ##.reg.1722 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VEncodeInt(1l),
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 5,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_k517, self)})),
      VEncodePointer(&_V10_Dstring_D1798.sym, VPOINTER_OTHER),
      VGetArg(statics, 10-1, 0),
      VGetArg(statics, 10-1, 0),
      self->vars[0]);
    }
}
static void _V10_Dprint__foreign__function_D237_k527(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k527, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.602 31 0) (bruijn ##.k.1665 12 0) (##string ##.string.1796))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 2,
      VGetArg(statics, 12-1, 0),
      VEncodePointer(&_V10_Dstring_D1796.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__foreign__function_D237_lambda125(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_lambda125, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.x.602 31 0) (bruijn ##.k.1677 0 0) (##string ##.string.1797) (bruijn ##.e.572 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1797.sym, VPOINTER_OTHER),
      _var1);
}
static void _V10_Dprint__foreign__function_D237_k526(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k526, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.588 44 0) (close _V10_Dprint__foreign__function_D237_k527) (close _V10_Dprint__foreign__function_D237_lambda125) (bruijn ##.x.1640 14 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 44-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_k527, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_lambda125, self)})),
      VGetArg(statics, 14-1, 0));
}
static void _V10_Dprint__foreign__function_D237_k525(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k525, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.1725) ((##vcore.+ 1 (bruijn ##.x.1680 1 0))) ((bruijn ##.x.602 29 0) (close _V10_Dprint__foreign__function_D237_k526) (##string ##.string.1799) (bruijn ##.x.1639 15 0) (bruijn ##.reg.1724 2 0) (bruijn ##.reg.1725 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VEncodeInt(1l),
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 5,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_k526, self)})),
      VEncodePointer(&_V10_Dstring_D1799.sym, VPOINTER_OTHER),
      VGetArg(statics, 15-1, 0),
      statics->up->vars[0],
      self->vars[0]);
    }
}
static void _V10_Dprint__foreign__function_D237_k524(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k524, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.1724) ((##vcore.+ 1 (bruijn ##.x.1681 1 0))) ((bruijn ##.x.601 28 0) (close _V10_Dprint__foreign__function_D237_k525) (bruijn ##.args.564 15 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VEncodeInt(1l),
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_k525, self)})),
      VGetArg(statics, 15-1, 2));
    }
}
static void _V10_Dprint__foreign__function_D237_k523(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k523, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.601 26 0) (close _V10_Dprint__foreign__function_D237_k524) (bruijn ##.args.564 13 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_k524, self)})),
      VGetArg(statics, 13-1, 2));
}
static void _V10_Dprint__foreign__function_D237_k522(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k522, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.1723) ((##vcore.+ 1 (bruijn ##.x.1683 1 0))) ((bruijn ##.x.602 24 0) (close _V10_Dprint__foreign__function_D237_k523) (##string ##.string.1800) (bruijn ##.x.1639 10 0) (bruijn ##.reg.1723 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VEncodeInt(1l),
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_k523, self)})),
      VEncodePointer(&_V10_Dstring_D1800.sym, VPOINTER_OTHER),
      VGetArg(statics, 10-1, 0),
      self->vars[0]);
    }
}
static void _V10_Dprint__foreign__function_D237_k521(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k521, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.601 23 0) (close _V10_Dprint__foreign__function_D237_k522) (bruijn ##.args.564 10 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_k522, self)})),
      VGetArg(statics, 10-1, 2));
}
static void _V10_Dprint__foreign__function_D237_k520(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k520, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.602 21 0) (close _V10_Dprint__foreign__function_D237_k521) (##string ##.string.1796))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_k521, self)})),
      VEncodePointer(&_V10_Dstring_D1796.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__foreign__function_D237_lambda126(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_lambda126, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.x.602 21 0) (bruijn ##.k.1684 0 0) (##string ##.string.1801) (bruijn ##.e.571 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1801.sym, VPOINTER_OTHER),
      _var1);
}
static void _V10_Dprint__foreign__function_D237_k519(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k519, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.588 34 0) (close _V10_Dprint__foreign__function_D237_k520) (close _V10_Dprint__foreign__function_D237_lambda126) (bruijn ##.x.1640 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_k520, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_lambda126, self)})),
      statics->up->up->up->vars[0]);
}
static void _V10_Dprint__foreign__function_D237_k515(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k515, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.purec?.543 17 1) ((bruijn ##.x.601 20 0) (close _V10_Dprint__foreign__function_D237_k516) (bruijn ##.args.564 7 2)) ((bruijn ##.x.602 19 0) (close _V10_Dprint__foreign__function_D237_k519) (##string ##.string.1802) (bruijn ##.name.555 8 0)))
if(VDecodeBool(
VGetArg(statics, 17-1, 1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_k516, self)})),
      VGetArg(statics, 7-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_k519, self)})),
      VEncodePointer(&_V10_Dstring_D1802.sym, VPOINTER_OTHER),
      VGetArg(statics, 8-1, 0));
}
}
static void _V10_Dprint__foreign__function_D237_k531(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k531, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.602 22 0) (bruijn ##.k.1662 1 0) (##string ##.string.1804) (##inline ##vcore.cdr (bruijn ##.x.1664 0 0)) (bruijn ##.name.555 11 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 4,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1804.sym, VPOINTER_OTHER),
      VInlineCdr2(runtime,
        _var0),
      VGetArg(statics, 11-1, 0));
}
static void _V10_Dprint__foreign__function_D237_k530(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k530, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1661 1 0) ((bruijn ##.x.602 21 0) (bruijn ##.k.1662 0 0) (##string ##.string.1803) (bruijn ##.name.555 10 0)) ((bruijn ##.get-foreign-encoder.235 20 15) (close _V10_Dprint__foreign__function_D237_k531) (bruijn ##.ret.553 12 0)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1803.sym, VPOINTER_OTHER),
      VGetArg(statics, 10-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 15)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_k531, self)})),
      VGetArg(statics, 12-1, 0));
}
}
static void _V10_Dprint__foreign__function_D237_k535(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k535, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.print-arg.567 8 0) (bruijn ##.k.1655 1 0) (bruijn ##.arg.573 1 1) (bruijn ##.argname.574 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
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
  // ((bruijn ##.x.602 24 0) (close _V10_Dprint__foreign__function_D237_k535) (##string ##.string.1805))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_k535, self)})),
      VEncodePointer(&_V10_Dstring_D1805.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__foreign__function_D237_k534(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k534, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.588 37 0) (bruijn ##.k.1653 1 0) (close _V10_Dprint__foreign__function_D237_lambda127) (##inline ##vcore.cdr (bruijn ##.args.564 11 2)) (##inline ##vcore.cdr (bruijn ##.x.1640 7 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 4,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_lambda127, self)})),
      VInlineCdr2(runtime,
        VGetArg(statics, 11-1, 2)),
      VInlineCdr2(runtime,
        VGetArg(statics, 7-1, 0)));
}
static void _V10_Dprint__foreign__function_D237_k533(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k533, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.args.564 10 2)) ((bruijn ##.print-arg.567 5 0) (close _V10_Dprint__foreign__function_D237_k534) (##inline ##vcore.car (bruijn ##.args.564 10 2)) (##inline ##vcore.car (bruijn ##.x.1640 6 0))) ((bruijn ##.k.1653 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 10-1, 2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_k534, self)})),
      VInlineCar2(runtime,
        VGetArg(statics, 10-1, 2)),
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 0)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__foreign__function_D237_k539(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k539, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1650 1 0) ((bruijn ##.x.602 25 0) (bruijn ##.k.1651 0 0) (##string ##.string.1806)) ((bruijn ##.x.602 25 0) (bruijn ##.k.1651 0 0) (##string ##.string.1807)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D1806.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D1807.sym, VPOINTER_OTHER));
}
}
static void _V10_Dprint__foreign__function_D237_k540(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k540, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.602 25 0) (bruijn ##.k.1638 12 0) (##string ##.string.1808))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 2,
      VGetArg(statics, 12-1, 0),
      VEncodePointer(&_V10_Dstring_D1808.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__foreign__function_D237_k538(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k538, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__foreign__function_D237_k539) (close _V10_Dprint__foreign__function_D237_k540))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__foreign__function_D237_k539, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_k540, self)})));
}
static void _V10_Dprint__foreign__function_D237_k537(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k537, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.eqv? (close _V10_Dprint__foreign__function_D237_k538) (bruijn ##.ret.553 14 0) 'void)
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_k538, self)})),
      VGetArg(statics, 14-1, 0),
      _V0void);
}
static void _V10_Dprint__foreign__function_D237_k536(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k536, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.602 22 0) (close _V10_Dprint__foreign__function_D237_k537) (##string ##.string.1809))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_k537, self)})),
      VEncodePointer(&_V10_Dstring_D1809.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__foreign__function_D237_k532(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k532, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__foreign__function_D237_k533) (close _V10_Dprint__foreign__function_D237_k536))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__foreign__function_D237_k533, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_k536, self)})));
}
static void _V10_Dprint__foreign__function_D237_k529(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k529, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__foreign__function_D237_k530) (close _V10_Dprint__foreign__function_D237_k532))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__foreign__function_D237_k530, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_k532, self)})));
}
static void _V10_Dprint__foreign__function_D237_k528(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k528, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.eqv? (close _V10_Dprint__foreign__function_D237_k529) (bruijn ##.ret.553 10 0) 'void)
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_k529, self)})),
      VGetArg(statics, 10-1, 0),
      _V0void);
}
static void _V10_Dprint__foreign__function_D237_k514(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k514, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__foreign__function_D237_k515) (close _V10_Dprint__foreign__function_D237_k528))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__foreign__function_D237_k515, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_k528, self)})));
}
static void _V10_Dprint__foreign__function_D237_k512(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k512, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close _V10_Dprint__arg_D567_lambda123)) ((bruijn ##.x.602 17 0) (close _V10_Dprint__foreign__function_D237_k514) (##string ##.string.1810) (##inline ##vcore.car (bruijn ##.expr.171.550 10 0))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__arg_D567_lambda123, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_k514, self)})),
      VEncodePointer(&_V10_Dstring_D1810.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        VGetArg(statics, 10-1, 0)));
    }
}
static void _V10_Dprint__foreign__function_D237_k511(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k511, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.600 17 0) (close _V10_Dprint__foreign__function_D237_k512) (bruijn ##.x.1685 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_k512, self)})),
      _var0);
}
static void _V10_Dprint__foreign__function_D237_k510(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k510, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.601 15 0) (close _V10_Dprint__foreign__function_D237_k511) (bruijn ##.args.564 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_k511, self)})),
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
  // ((bruijn ##.mangle-foreign-function.234 12 14) (close _V10_Dprint__foreign__function_D237_k510) (bruijn ##.name.555 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 14)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_k510, self)})),
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
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.563 0 1)) (##vcore.call-with-values (close _V10_Dprint__foreign__function_D237_k509) (close _V10_Dprint__foreign__function_D237_lambda122) (bruijn ##.kk.167.545 9 1)) ((bruijn ##.k.1635 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_k509, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_lambda122, self)})),
      VGetArg(statics, 9-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__foreign__function_D237_k503(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k503, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1615 7 0) (close _V10_Dprint__foreign__function_D237_lambda116) (close _V10_Dprint__foreign__function_D237_lambda121))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 7-1, 0),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_lambda116, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_lambda121, self)})));
}
static void _V10_Dprint__foreign__function_D237_k502(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k502, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.173.554 0 0)) ((close _V10_Dprint__foreign__function_D237_k503) (##inline ##vcore.car (bruijn ##.expr.173.554 0 0))) ((bruijn ##.k.1615 6 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__foreign__function_D237_k503, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__foreign__function_D237_k501(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k501, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__foreign__function_D237_k502) (##inline ##vcore.cdr (bruijn ##.expr.172.552 1 0)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__foreign__function_D237_k502, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
static void _V10_Dprint__foreign__function_D237_k500(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k500, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.172.552 0 0)) ((close _V10_Dprint__foreign__function_D237_k501) (##inline ##vcore.car (bruijn ##.expr.172.552 0 0))) ((bruijn ##.k.1615 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__foreign__function_D237_k501, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__foreign__function_D237_k499(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k499, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.171.550 0 0)) ((close _V10_Dprint__foreign__function_D237_k500) (##inline ##vcore.cdr (bruijn ##.expr.171.550 0 0))) ((bruijn ##.k.1615 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__foreign__function_D237_k500, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__foreign__function_D237_k498(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k498, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.170.548 0 0)) ((close _V10_Dprint__foreign__function_D237_k499) (##inline ##vcore.cdr (bruijn ##.expr.170.548 0 0))) ((bruijn ##.k.1615 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__foreign__function_D237_k499, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__foreign__function_D237_k497(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k497, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1616 0 0) ((close _V10_Dprint__foreign__function_D237_k498) (##inline ##vcore.cdr (bruijn ##.expr.544 3 2))) ((bruijn ##.k.1615 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__foreign__function_D237_k498, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__foreign__function_D237_k496(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k496, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.544 2 2)) ((bruijn ##.x.584 22 0) (close _V10_Dprint__foreign__function_D237_k497) '##foreign.function (##inline ##vcore.car (bruijn ##.expr.544 2 2))) ((bruijn ##.k.1615 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_k497, self)})),
      _V10foreign_Dfunction,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__foreign__function_D237_k541(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D237_k541, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.579 27 0) (bruijn ##.k.1612 1 0) (##string ##.string.1731))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 2,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1731.sym, VPOINTER_OTHER));
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
  // ((close _V10_Dprint__foreign__function_D237_k496) (close _V10_Dprint__foreign__function_D237_k541))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__foreign__function_D237_k496, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_k541, self)})));
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
  // (##vcore.call/cc (bruijn ##.k.1611 0 0) (close _V10_Dprint__foreign__function_D237_lambda115))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D237_lambda115, self)})));
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
  // (letrec 18 ((close _V10_Dreduce__declare_D220_lambda2) (close _V10_Dfind__typedef_D221_lambda25) (close _V10_Dreduce__type_D222_lambda27) (close _V10_Dunwrap__typedef_D223_lambda46) (close _V10_Dunwrap__function_D224_lambda50) (close _V10_Dunwrap__enums_D225_lambda55) (close _V10_Dunwrap__declares_D226_lambda58) (close _V10_Dtable___Gdefines_D227_lambda63) (close _V10_Ddeep__copy_D228_lambda73) (close _V10_Dvalidate__foreign__function_D229_lambda74) (close _V10_Dfind__file_D230_lambda84) (close _V10_Dget__install__root_D231_lambda85) (close _V10_Dmake__preprocess__command_D232_lambda86) (close _V10_Dresolve__foreign__import_D233_lambda87) (close _V10_Dmangle__foreign__function_D234_lambda91) (close _V10_Dget__foreign__encoder_D235_lambda92) (close _V10_Dget__foreign__decoder_D236_lambda93) (close _V10_Dprint__foreign__function_D237_lambda114)) ((bruijn ##.k.576 32 0) (##inline ##vcore.cons (##inline ##vcore.cons 'mangle-foreign-function (bruijn ##.mangle-foreign-function.234 0 14)) (##inline ##vcore.cons (##inline ##vcore.cons 'validate-foreign-function (bruijn ##.validate-foreign-function.229 0 9)) (##inline ##vcore.cons (##inline ##vcore.cons 'print-foreign-function (bruijn ##.print-foreign-function.237 0 17)) (##inline ##vcore.cons (##inline ##vcore.cons 'resolve-foreign-import (bruijn ##.resolve-foreign-import.233 0 13)) (##inline ##vcore.cons (##inline ##vcore.cons 'get-foreign-encoder (bruijn ##.get-foreign-encoder.235 0 15)) (##inline ##vcore.cons (##inline ##vcore.cons 'get-foreign-decoder (bruijn ##.get-foreign-decoder.236 0 16)) '()))))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[18]; } container;
    self = &container.self;
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 1,
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
  // ((bruijn ##..vcore.import.179 25 0) (close _V0vanity_V0compiler_V0ffi_V20_k31) 'printf)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k31, self)})),
      _V0printf);
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
  // ((bruijn ##..vcore.import.179 24 0) (close _V0vanity_V0compiler_V0ffi_V20_k30) 'length)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k30, self)})),
      _V0length);
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
  // ((bruijn ##..vcore.import.179 23 0) (close _V0vanity_V0compiler_V0ffi_V20_k29) 'iota)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k29, self)})),
      _V0iota);
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
  // ((bruijn ##..vcore.import.179 22 0) (close _V0vanity_V0compiler_V0ffi_V20_k28) 'assv)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k28, self)})),
      _V0assv);
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
  // ((bruijn ##..vcore.import.179 20 0) (close _V0vanity_V0compiler_V0ffi_V20_k26) 'platform)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k26, self)})),
      _V0platform);
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
  // ((bruijn ##..vcore.import.179 19 0) (close _V0vanity_V0compiler_V0ffi_V20_k25) 'gcc-path)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k25, self)})),
      _V0gcc__path);
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
  // ((bruijn ##..vcore.import.179 18 0) (close _V0vanity_V0compiler_V0ffi_V20_k24) 'install-root)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k24, self)})),
      _V0install__root);
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
  // ((bruijn ##..vcore.import.179 17 0) (close _V0vanity_V0compiler_V0ffi_V20_k23) 'sprintf)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k23, self)})),
      _V0sprintf);
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
  // ((bruijn ##..vcore.import.179 16 0) (close _V0vanity_V0compiler_V0ffi_V20_k22) 'file-exists?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k22, self)})),
      _V0file__exists_Q);
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
  // ((bruijn ##..vcore.import.179 15 0) (close _V0vanity_V0compiler_V0ffi_V20_k21) 'cdadr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k21, self)})),
      _V0cdadr);
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
  // ((bruijn ##..vcore.import.179 14 0) (close _V0vanity_V0compiler_V0ffi_V20_k20) 'cdddr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k20, self)})),
      _V0cdddr);
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
  // ((bruijn ##..vcore.import.179 13 0) (close _V0vanity_V0compiler_V0ffi_V20_k19) 'caddr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k19, self)})),
      _V0caddr);
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
  // ((bruijn ##..vcore.import.179 12 0) (close _V0vanity_V0compiler_V0ffi_V20_k18) 'member)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k18, self)})),
      _V0member);
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
  // ((bruijn ##..vcore.import.179 11 0) (close _V0vanity_V0compiler_V0ffi_V20_k17) 'for-each)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k17, self)})),
      _V0for__each);
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
  // ((bruijn ##..vcore.import.179 10 0) (close _V0vanity_V0compiler_V0ffi_V20_k16) 'compiler-error)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k16, self)})),
      _V0compiler__error);
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
  // ((bruijn ##..vcore.import.179 9 0) (close _V0vanity_V0compiler_V0ffi_V20_k15) 'caddar)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k15, self)})),
      _V0caddar);
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
  // ((bruijn ##..vcore.import.179 8 0) (close _V0vanity_V0compiler_V0ffi_V20_k14) 'memv)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k14, self)})),
      _V0memv);
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
  // ((bruijn ##..vcore.import.179 7 0) (close _V0vanity_V0compiler_V0ffi_V20_k13) 'equal?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k13, self)})),
      _V0equal_Q);
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
  // ((bruijn ##..vcore.import.179 6 0) (close _V0vanity_V0compiler_V0ffi_V20_k12) 'cadr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k12, self)})),
      _V0cadr);
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
  // ((bruijn ##..vcore.import.179 5 0) (close _V0vanity_V0compiler_V0ffi_V20_k11) 'cadar)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k11, self)})),
      _V0cadar);
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
  // ((bruijn ##..vcore.import.179 4 0) (close _V0vanity_V0compiler_V0ffi_V20_k10) 'caar)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k10, self)})),
      _V0caar);
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
  // ((bruijn ##..vcore.import.179 3 0) (close _V0vanity_V0compiler_V0ffi_V20_k9) 'list)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k9, self)})),
      _V0list);
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
  // ((bruijn ##..vcore.import.179 2 0) (close _V0vanity_V0compiler_V0ffi_V20_k8) 'error)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k8, self)})),
      _V0error);
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
  // ((bruijn ##..vcore.import.179 1 0) (close _V0vanity_V0compiler_V0ffi_V20_k7) 'map)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k7, self)})),
      _V0map);
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
  // ((bruijn ##..vcore.import.179 0 0) (close _V0vanity_V0compiler_V0ffi_V20_k6) 'reverse)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k6, self)})),
      _V0reverse);
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
  // (##vcore.make-import (close _V0vanity_V0compiler_V0ffi_V20_k5) (##string ##.string.1811) (bruijn ##.x.1698 3 0) (bruijn ##.x.1699 2 0) (bruijn ##.x.1700 1 0) (bruijn ##.x.1701 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMakeImport2, 6,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k5, self)})),
      VEncodePointer(&_V10_Dstring_D1811.sym, VPOINTER_OTHER),
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0ffi_V20_k4) (##string ##.string.1812))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k4, self)})),
      VEncodePointer(&_V10_Dstring_D1812.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0ffi_V20_k3) (##string ##.string.1813))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k3, self)})),
      VEncodePointer(&_V10_Dstring_D1813.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0ffi_V20_k2) (##string ##.string.1814))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k2, self)})),
      VEncodePointer(&_V10_Dstring_D1814.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0ffi_V20_k1) (##string ##.string.1815))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k1, self)})),
      VEncodePointer(&_V10_Dstring_D1815.sym, VPOINTER_OTHER));
}
VFunc _V0vanity_V0compiler_V0ffi_V20 = (VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda1;
