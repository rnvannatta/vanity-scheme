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
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D1807 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "  V_BOUNCE(_k, runtime, _ret);~N" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D1806 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "  V_BOUNCE(_k, runtime, VVOID);~N" };
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
VWEAK VWORD _V0define__constant;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0define__constant = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "define-constant" };
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
  _V0define__constant = VEncodePointer(VLookupConstant("_V0define__constant", &_VW_V0define__constant), VPOINTER_OTHER);
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
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D567, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D558, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__encoder, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign__function, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0make__preprocess__command, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0get__install__root, _var0);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0find__file, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0deep__copy, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D437, _var0, _var1, _var2, _var3, _var4);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V10_Dloop_D432, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D414, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D409, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7, _var8);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dmaybe__string___Gsymbol_D303, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dappend__const_D302, _var0, _var1, _var2);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301, _var0);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0reduce__type, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D296, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0find__typedef, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V10_Dloop_D273, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D242, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D241, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare, _var0, _var1, _var2, _var3);
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D241_V0k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D241_V0k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.613 0 0) (bruijn ##.k.609 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D241_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D241_V0lambda3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.614 0 0) (##inline ##vcore.car (bruijn ##.expr.3.248 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCar2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D241_V0k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D241_V0k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.3.248 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.3.248 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D241_V0k35) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D241_V0lambda3) (bruijn ##.kk.0.245 3 1)) ((bruijn ##.k.609 2 0) #f)) ((bruijn ##.k.609 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D241_V0k35, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D241_V0lambda3, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D241_V0k33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D241_V0k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.610 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D241_V0k34) (##inline ##vcore.cdr (bruijn ##.x.244 3 1))) ((bruijn ##.k.609 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D241_V0k34, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D241_V0k32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D241_V0k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.x.244 2 1)) ((bruijn ##.x.584 24 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D241_V0k33) 'const (##inline ##vcore.car (bruijn ##.x.244 2 1))) ((bruijn ##.k.609 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D241_V0k33, self)))),
      _V0const,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D241_V0lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D241_V0lambda4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.607 0 0) (bruijn ##.x.244 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D241_V0k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D241_V0k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.605 1 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D241_V0lambda4) (bruijn ##.kk.0.245 1 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D241_V0lambda4, self)))),
      statics->vars[1]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D241_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D241_V0lambda2, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D241_V0k32) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D241_V0k36))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D241_V0k32, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D241_V0k36, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D241(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D241, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.k.604 0 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D241_V0lambda2))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D241_V0lambda2, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D242_V0k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D242_V0k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.617 7 0) (##inline ##vcore.cons (bruijn ##.x.619 1 0) (bruijn ##.x.620 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VInlineCons2(runtime,
        statics->vars[0],
        _var0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D242_V0k42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D242_V0k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler ffi reduce-declare ##.reduce-args.242) (bruijn ##.reduce-args.242 7 1) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D242_V0k43) (##inline ##vcore.cdr (bruijn ##.args.250 6 1)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 1));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D242_V0k43, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 1));
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D242(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D242_V0k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D242_V0k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.631 0 0) (bruijn ##.k.626 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D242_V0lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D242_V0lambda6, got ~D~N"
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D242_V0k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D242_V0k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.8.257 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.8.257 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D242_V0k48) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D242_V0lambda6) (bruijn ##.kk.4.252 4 1)) ((bruijn ##.k.626 3 0) #f)) ((bruijn ##.k.626 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D242_V0k48, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D242_V0lambda6, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D242_V0k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D242_V0k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.7.255 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D242_V0k47) (##inline ##vcore.cdr (bruijn ##.expr.7.255 0 0))) ((bruijn ##.k.626 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D242_V0k47, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D242_V0k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D242_V0k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.627 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D242_V0k46) (##inline ##vcore.cdr (bruijn ##.arg.251 3 0))) ((bruijn ##.k.626 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D242_V0k46, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D242_V0k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D242_V0k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.arg.251 2 0)) ((bruijn ##.x.584 29 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D242_V0k45) 'array (##inline ##vcore.car (bruijn ##.arg.251 2 0))) ((bruijn ##.k.626 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D242_V0k45, self)))),
      _V0array,
      VInlineCar2(runtime,
        statics->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D242_V0lambda7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D242_V0lambda7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.624 0 0) (bruijn ##.arg.251 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D242_V0k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D242_V0k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.622 1 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D242_V0lambda7) (bruijn ##.kk.4.252 1 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D242_V0lambda7, self)))),
      statics->vars[1]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D242_V0lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D242_V0lambda5, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D242_V0k44) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D242_V0k49))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D242_V0k44, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D242_V0k49, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D242_V0k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D242_V0k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D242_V0k42) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D242_V0lambda5))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D242_V0k42, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D242_V0lambda5, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D242_V0k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D242_V0k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.583 27 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D242_V0k41) (bruijn ##.x.635 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D242_V0k41, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D242_V0k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D242_V0k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler ffi reduce-declare) (bruijn ##.reduce-declare.220 6 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D242_V0k40) (bruijn ##.x.636 1 0) (bruijn ##.x.637 0 0) (bruijn ##.table.240 5 3))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 0));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D242_V0k40, self))));
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      _var0;
    VWORD _arg3 = 
      VGetArg(statics, 5-1, 3);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D242_V0k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D242_V0k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.582 26 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D242_V0k39) (bruijn ##.args.250 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D242_V0k39, self)))),
      statics->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D242_V0k37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D242_V0k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler ffi reduce-type) (bruijn ##.reduce-type.222 4 2) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D242_V0k38) (bruijn ##.x.638 0 0) (bruijn ##.table.240 3 3) #f)
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[2]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D242_V0k38, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      statics->up->up->vars[3];
    VWORD _arg3 = 
      VEncodeBool(false);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__type(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D242(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D242, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.null? (bruijn ##.args.250 0 1)) ((bruijn ##.k.617 0 0) '()) ((bruijn ##.x.581 25 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D242_V0k37) (bruijn ##.args.250 0 1)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D242_V0k37, self)))),
      _var1);
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k51, got ~D~N"
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.737 0 0) (bruijn ##.k.733 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k55, got ~D~N"
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0lambda9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0lambda9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler ffi reduce-declare ##.drop-const.241) (bruijn ##.drop-const.241 7 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k55) (bruijn ##.ret.259 6 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 0));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k55, self))));
    VWORD _arg1 = 
      VGetArg(statics, 6-1, 1);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D241(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.12.264 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.12.264 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k54) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0lambda9) (bruijn ##.kk.9.261 4 1)) ((bruijn ##.k.733 3 0) #f)) ((bruijn ##.k.733 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k54, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0lambda9, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.734 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k53) (##inline ##vcore.cdr (bruijn ##.decl.260 4 2))) ((bruijn ##.k.733 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k53, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.decl.260 2 2)) (basic-block 1 1 (##.reg.1707) ((##vcore.string? (##inline ##vcore.car (bruijn ##.decl.260 3 2)))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k51) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k52))) ((bruijn ##.k.733 0 0) #f))
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
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k51, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k52, self)))));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k58, got ~D~N"
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k63, got ~D~N"
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V10_Dloop_D273_V0k66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V10_Dloop_D273_V0k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.19.272 4 1) (bruijn ##.k.710 1 0) (bruijn ##.expr.21.274 2 1) (bruijn ##.x.711 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      statics->vars[0],
      statics->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V10_Dloop_D273_V0k65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V10_Dloop_D273_V0k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.21.274 1 1))) ((bruijn ##.x.577 44 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V10_Dloop_D273_V0k66) (bruijn ##.args.18.275 1 2)) ((bruijn ##.k.710 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 44-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V10_Dloop_D273_V0k66, self)))),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V10_Dloop_D273_V0k69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V10_Dloop_D273_V0k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.19.272 7 1) (bruijn ##.k.704 2 0) (bruijn ##.expr.21.274 5 1) (bruijn ##.x.706 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      statics->up->vars[0],
      VGetArg(statics, 5-1, 1),
      _var0);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V10_Dloop_D273_V0k68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V10_Dloop_D273_V0k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.577 47 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V10_Dloop_D273_V0k69) (bruijn ##.args.18.275 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 47-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V10_Dloop_D273_V0k69, self)))),
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V10_Dloop_D273_V0lambda13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V10_Dloop_D273_V0lambda13, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.kk.20.276 0 1) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V10_Dloop_D273_V0k68) (##inline ##vcore.cdr (bruijn ##.expr.21.274 3 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.21.274 3 1)) (bruijn ##.args.18.275 3 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var1), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V10_Dloop_D273_V0k68, self)))),
      VInlineCdr2(runtime,
        statics->up->up->vars[1]),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[1]),
        statics->up->up->vars[2]));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V10_Dloop_D273_V0lambda12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V10_Dloop_D273_V0lambda12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.703 0 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V10_Dloop_D273_V0lambda13))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V10_Dloop_D273_V0lambda13, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V10_Dloop_D273_V0k67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V10_Dloop_D273_V0k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.701 1 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V10_Dloop_D273_V0lambda12) (bruijn ##.loop.273 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V10_Dloop_D273_V0lambda12, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V10_Dloop_D273(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V10_Dloop_D273, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V10_Dloop_D273_V0k65) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V10_Dloop_D273_V0k67))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V10_Dloop_D273_V0k65, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V10_Dloop_D273_V0k67, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0lambda11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0lambda11, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V10_Dloop_D273")) (##qualified-call (vanity compiler ffi reduce-declare ##.reduce-declare-loop.243 ##.loop.273) (bruijn ##.loop.273 0 0) (bruijn ##.k.700 1 0) (##inline ##vcore.cdr (bruijn ##.expr.16.270 5 0)) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V10_Dloop_D273, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 0));
    VWORD _arg2 = 
      VNULL;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V10_Dloop_D273(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0lambda10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0lambda10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.699 0 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0lambda11))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0lambda11, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.716 0 0) (bruijn ##.k.713 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k73, got ~D~N"
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.578 42 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k73) (bruijn ##.drop-const.241 15 0) (bruijn ##.x.722 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 42-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k73, self)))),
      VGetArg(statics, 15-1, 0),
      _var0);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler ffi reduce-declare ##.reduce-args.242) (bruijn ##.reduce-args.242 14 1) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k72) (bruijn ##.args.279 2 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 14-1, 1));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k72, self))));
    VWORD _arg1 = 
      statics->up->vars[2];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D242(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0lambda15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0lambda15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler ffi reduce-declare ##.drop-const.241) (bruijn ##.drop-const.241 13 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k71) (bruijn ##.ret.259 12 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 13-1, 0));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k71, self))));
    VWORD _arg1 = 
      VGetArg(statics, 12-1, 1);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D241(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0lambda14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0lambda14, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.278 0 1)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.15.269 4 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k70) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0lambda15) (bruijn ##.kk.9.261 10 1)) ((bruijn ##.k.713 0 0) #f)) ((bruijn ##.k.713 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->up->up->up->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k70, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0lambda15, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.698 0 0) (##vcore.call-with-values (bruijn ##.k.693 7 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0lambda10) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0lambda14)) ((bruijn ##.k.693 7 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 7-1, 0),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0lambda10, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0lambda14, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.16.270 0 0)) (basic-block 1 1 (##.reg.1706) ((##vcore.string? (##inline ##vcore.car (bruijn ##.expr.16.270 1 0)))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k63) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k64))) ((bruijn ##.k.693 5 0) #f))
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
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k63, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k64, self)))));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.15.269 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k62) (##inline ##vcore.car (bruijn ##.expr.15.269 0 0))) ((bruijn ##.k.693 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k62, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.14.267 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k61) (##inline ##vcore.cdr (bruijn ##.expr.14.267 0 0))) ((bruijn ##.k.693 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k61, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.694 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k60) (##inline ##vcore.cdr (bruijn ##.decl.260 5 2))) ((bruijn ##.k.693 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k60, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.decl.260 3 2)) (basic-block 1 1 (##.reg.1705) ((##vcore.string? (##inline ##vcore.car (bruijn ##.decl.260 4 2)))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k58) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k59))) ((bruijn ##.k.693 0 0) #f))
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
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k58, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k59, self)))));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k76, got ~D~N"
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.684 0 0) (bruijn ##.k.680 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler ffi reduce-declare ##.reduce-declare-loop.243) (bruijn ##.reduce-declare-loop.243 10 2) (bruijn ##.k.685 1 0) (bruijn ##.x.686 0 0) (##inline ##vcore.car (bruijn ##.expr.23.281 2 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 10-1, 2));
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0lambda16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0lambda16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.580 34 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k80) 'pointer (bruijn ##.ret.259 8 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k80, self)))),
      _V0pointer,
      VGetArg(statics, 8-1, 1));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.23.281 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.23.281 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k79) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0lambda16) (bruijn ##.kk.9.261 6 1)) ((bruijn ##.k.680 3 0) #f)) ((bruijn ##.k.680 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k79, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0lambda16, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.681 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k78) (##inline ##vcore.cdr (bruijn ##.decl.260 6 2))) ((bruijn ##.k.680 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k78, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.decl.260 4 2)) (basic-block 1 1 (##.reg.1704) ((##vcore.string? (##inline ##vcore.car (bruijn ##.decl.260 5 2)))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k76) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k77))) ((bruijn ##.k.680 0 0) #f))
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
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k76, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k77, self)))));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k83, got ~D~N"
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.671 0 0) (bruijn ##.k.666 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler ffi reduce-declare ##.reduce-declare-loop.243) (bruijn ##.reduce-declare-loop.243 12 2) (bruijn ##.k.672 1 0) (bruijn ##.x.673 0 0) (##inline ##vcore.car (bruijn ##.expr.25.284 3 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 2));
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->up->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0lambda17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0lambda17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.580 36 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k88) 'array (##inline ##vcore.car (bruijn ##.expr.26.286 1 0)) (bruijn ##.ret.259 10 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k88, self)))),
      _V0array,
      VInlineCar2(runtime,
        statics->vars[0]),
      VGetArg(statics, 10-1, 1));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.26.286 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.26.286 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k87) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0lambda17) (bruijn ##.kk.9.261 8 1)) ((bruijn ##.k.666 4 0) #f)) ((bruijn ##.k.666 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k87, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0lambda17, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.25.284 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k86) (##inline ##vcore.cdr (bruijn ##.expr.25.284 0 0))) ((bruijn ##.k.666 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k86, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.667 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k85) (##inline ##vcore.cdr (bruijn ##.decl.260 7 2))) ((bruijn ##.k.666 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k85, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 7-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.decl.260 5 2)) (basic-block 1 1 (##.reg.1703) ((##vcore.string? (##inline ##vcore.car (bruijn ##.decl.260 6 2)))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k83) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k84))) ((bruijn ##.k.666 0 0) #f))
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
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k83, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k84, self)))));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k91, got ~D~N"
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.657 0 0) (bruijn ##.k.652 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler ffi reduce-declare ##.reduce-declare-loop.243) (bruijn ##.reduce-declare-loop.243 13 2) (bruijn ##.k.658 1 0) (bruijn ##.x.659 0 0) (##inline ##vcore.car (bruijn ##.expr.28.289 3 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 13-1, 2));
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->up->up->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0lambda18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0lambda18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.580 37 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k96) 'array (##inline ##vcore.car (bruijn ##.expr.29.291 1 0)) (bruijn ##.ret.259 11 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k96, self)))),
      _V0array,
      VInlineCar2(runtime,
        statics->vars[0]),
      VGetArg(statics, 11-1, 1));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.29.291 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.29.291 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k95) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0lambda18) (bruijn ##.kk.9.261 9 1)) ((bruijn ##.k.652 4 0) #f)) ((bruijn ##.k.652 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k95, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0lambda18, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.28.289 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k94) (##inline ##vcore.cdr (bruijn ##.expr.28.289 0 0))) ((bruijn ##.k.652 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k94, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.653 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k93) (##inline ##vcore.cdr (bruijn ##.decl.260 8 2))) ((bruijn ##.k.652 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k93, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 8-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.decl.260 6 2)) (basic-block 1 1 (##.reg.1702) ((##vcore.string? (##inline ##vcore.car (bruijn ##.decl.260 7 2)))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k91) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k92))) ((bruijn ##.k.652 0 0) #f))
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
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k91, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k92, self)))));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.579 35 0) (bruijn ##.k.640 7 0) (##string ##.string.1731))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 35-1, 0)), 2,
      VGetArg(statics, 7-1, 0),
      VEncodePointer(&_V10_Dstring_D1731.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.647 0 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k99))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k99, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0lambda19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0lambda19, got ~D~N"
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k98) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0lambda19) (bruijn ##.kk.9.261 5 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k98, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0lambda19, self)))),
      VGetArg(statics, 5-1, 1));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k90) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k97))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k90, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k97, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k82) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k89))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k82, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k89, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k75) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k81))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k75, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k81, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k57) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k74))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k57, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k74, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0lambda8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0lambda8, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k50) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k56))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k50, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0k56, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call/cc (bruijn ##.k.639 0 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0lambda8))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243_V0lambda8, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare, got ~D~N"
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
  // (letrec 3 ((close "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D241") (close "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D242") (close "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243")) (##qualified-call (vanity compiler ffi reduce-declare ##.reduce-declare-loop.243) (bruijn ##.reduce-declare-loop.243 0 2) (bruijn ##.k.603 1 0) (bruijn ##.ret.238 1 1) (bruijn ##.decl.239 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D241, self))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D242, self))));
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[2]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      statics->vars[2];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D243(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V0k101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V0k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.758 1 0) (##inline ##vcore.not (bruijn ##.x.759 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineNot2(runtime,
        _var0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V0k100(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V0k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.reg.1708 1 0) ((bruijn ##.x.585 21 0) (close _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V0k101) (bruijn ##.special.294 2 1) (##inline ##vcore.qcons 'void (##inline ##vcore.qcons 'float (##inline ##vcore.qcons 'double (##inline ##vcore.qcons '_Bool '()))))) ((bruijn ##.k.758 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V0k101, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D296_V0k106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D296_V0k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.eqv? (bruijn ##.k.754 1 0) (bruijn ##.x.755 0 0) (bruijn ##.special.294 8 1))
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      statics->vars[0],
      _var0,
      VGetArg(statics, 8-1, 1));
}
void _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D296_V0k105(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D296_V0k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.753 1 0) ((bruijn ##.x.582 29 0) (close _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D296_V0k106) (bruijn ##.table.297 3 1)) ((bruijn ##.k.754 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D296_V0k106, self)))),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D296_V0k107(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D296_V0k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.751 0 0) ((bruijn ##.x.586 25 0) (bruijn ##.k.749 3 0) (bruijn ##.table.297 3 1)) (##qualified-call (vanity compiler ffi find-typedef ##.loop.296) (bruijn ##.loop.296 4 0) (bruijn ##.k.749 3 0) (##inline ##vcore.cdr (bruijn ##.table.297 3 1))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 2,
      statics->up->up->vars[0],
      statics->up->up->vars[1]);
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->up->up->vars[1]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D296(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D296_V0k104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D296_V0k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D296_V0k105) (close _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D296_V0k107))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D296_V0k105, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D296_V0k107, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D296_V0k103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D296_V0k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D296_V0k104) (bruijn ##.x.756 0 0) 'typedef)
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D296_V0k104, self)))),
      _var0,
      _V0typedef);
}
void _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D296(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D296, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.null? (bruijn ##.table.297 0 1)) ((bruijn ##.x.587 21 0) (bruijn ##.k.749 0 0) (##string ##.string.1732) (bruijn ##.special.294 4 1)) ((bruijn ##.x.581 27 0) (close _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D296_V0k103) (bruijn ##.table.297 0 1)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1732.sym, VPOINTER_OTHER),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D296_V0k103, self)))),
      _var1);
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V0k102(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V0k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.748 0 0) (letrec 1 ((close "_V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D296")) (##qualified-call (vanity compiler ffi find-typedef ##.loop.296) (bruijn ##.loop.296 0 0) (bruijn ##.k.747 3 0) (bruijn ##.table.295 3 2))) ((bruijn ##.k.747 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D296, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      statics->up->up->vars[2];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D296(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0find__typedef(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0find__typedef, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.reg.1708) ((##vcore.symbol? (bruijn ##.special.294 1 1))) ((close _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V0k100) (close _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V0k102)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V0k100, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V0k102, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k114(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1012 0 0) (bruijn ##.k.1001 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0lambda21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0lambda21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1013 0 0) 'char)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0char);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k113(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.37.311 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.37.311 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.37.311 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k114) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0lambda21) (bruijn ##.kk.31.305 6 1)) ((bruijn ##.k.1001 5 0) #f)) ((bruijn ##.k.1001 5 0) #f)) ((bruijn ##.k.1001 5 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k114, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0lambda21, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k112(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.36.310 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.36.310 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k113) (##inline ##vcore.cdr (bruijn ##.expr.36.310 0 0))) ((bruijn ##.k.1001 4 0) #f)) ((bruijn ##.k.1001 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k113, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.35.309 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.35.309 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k112) (##inline ##vcore.cdr (bruijn ##.expr.35.309 0 0))) ((bruijn ##.k.1001 3 0) #f)) ((bruijn ##.k.1001 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k112, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.34.308 0 0)) (if (##inline ##vcore.eq? 0 (##inline ##vcore.car (bruijn ##.expr.34.308 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k111) (##inline ##vcore.cdr (bruijn ##.expr.34.308 0 0))) ((bruijn ##.k.1001 2 0) #f)) ((bruijn ##.k.1001 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(0l),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k111, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k109(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1002 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k110) (##inline ##vcore.cdr (bruijn ##.args.304 3 1))) ((bruijn ##.k.1001 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k110, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k108(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.args.304 2 1)) ((bruijn ##.x.584 24 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k109) 'char (##inline ##vcore.car (bruijn ##.args.304 2 1))) ((bruijn ##.k.1001 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k109, self)))),
      _V0char,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k122(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.992 0 0) (bruijn ##.k.981 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0lambda22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0lambda22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.993 0 0) 'unsigned-char)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0unsigned__char);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k121(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.42.316 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.42.316 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.42.316 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k122) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0lambda22) (bruijn ##.kk.31.305 7 1)) ((bruijn ##.k.981 5 0) #f)) ((bruijn ##.k.981 5 0) #f)) ((bruijn ##.k.981 5 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k122, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0lambda22, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k120(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.41.315 0 0)) (if (##inline ##vcore.eq? #t (##inline ##vcore.car (bruijn ##.expr.41.315 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k121) (##inline ##vcore.cdr (bruijn ##.expr.41.315 0 0))) ((bruijn ##.k.981 4 0) #f)) ((bruijn ##.k.981 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(true),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k121, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k119(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.40.314 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.40.314 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k120) (##inline ##vcore.cdr (bruijn ##.expr.40.314 0 0))) ((bruijn ##.k.981 3 0) #f)) ((bruijn ##.k.981 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k120, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k118(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.39.313 0 0)) (if (##inline ##vcore.eq? 0 (##inline ##vcore.car (bruijn ##.expr.39.313 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k119) (##inline ##vcore.cdr (bruijn ##.expr.39.313 0 0))) ((bruijn ##.k.981 2 0) #f)) ((bruijn ##.k.981 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(0l),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k119, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k117(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.982 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k118) (##inline ##vcore.cdr (bruijn ##.args.304 4 1))) ((bruijn ##.k.981 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k118, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k116(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.args.304 3 1)) ((bruijn ##.x.584 25 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k117) 'char (##inline ##vcore.car (bruijn ##.args.304 3 1))) ((bruijn ##.k.981 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k117, self)))),
      _V0char,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k130(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.972 0 0) (bruijn ##.k.961 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0lambda23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0lambda23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.973 0 0) 'signed-char)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0signed__char);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k129(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.47.321 0 0)) (if (##inline ##vcore.eq? #t (##inline ##vcore.car (bruijn ##.expr.47.321 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.47.321 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k130) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0lambda23) (bruijn ##.kk.31.305 8 1)) ((bruijn ##.k.961 5 0) #f)) ((bruijn ##.k.961 5 0) #f)) ((bruijn ##.k.961 5 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k130, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0lambda23, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k128(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.46.320 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.46.320 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k129) (##inline ##vcore.cdr (bruijn ##.expr.46.320 0 0))) ((bruijn ##.k.961 4 0) #f)) ((bruijn ##.k.961 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k129, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k127(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.45.319 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.45.319 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k128) (##inline ##vcore.cdr (bruijn ##.expr.45.319 0 0))) ((bruijn ##.k.961 3 0) #f)) ((bruijn ##.k.961 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k128, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k126(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.44.318 0 0)) (if (##inline ##vcore.eq? 0 (##inline ##vcore.car (bruijn ##.expr.44.318 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k127) (##inline ##vcore.cdr (bruijn ##.expr.44.318 0 0))) ((bruijn ##.k.961 2 0) #f)) ((bruijn ##.k.961 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(0l),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k127, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k125(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.962 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k126) (##inline ##vcore.cdr (bruijn ##.args.304 5 1))) ((bruijn ##.k.961 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k126, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k124(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.args.304 4 1)) ((bruijn ##.x.584 26 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k125) 'char (##inline ##vcore.car (bruijn ##.args.304 4 1))) ((bruijn ##.k.961 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k125, self)))),
      _V0char,
      VInlineCar2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k138(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.953 0 0) (bruijn ##.k.943 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0lambda24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0lambda24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.954 0 0) 'int)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0int);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k137(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.52.326 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.52.326 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k138) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0lambda24) (bruijn ##.kk.31.305 9 1)) ((bruijn ##.k.943 5 0) #f)) ((bruijn ##.k.943 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k138, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0lambda24, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k136(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.51.325 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.51.325 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k137) (##inline ##vcore.cdr (bruijn ##.expr.51.325 0 0))) ((bruijn ##.k.943 4 0) #f)) ((bruijn ##.k.943 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k137, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k135(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.50.324 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.50.324 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k136) (##inline ##vcore.cdr (bruijn ##.expr.50.324 0 0))) ((bruijn ##.k.943 3 0) #f)) ((bruijn ##.k.943 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k136, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k134(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.49.323 0 0)) (if (##inline ##vcore.eq? 0 (##inline ##vcore.car (bruijn ##.expr.49.323 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k135) (##inline ##vcore.cdr (bruijn ##.expr.49.323 0 0))) ((bruijn ##.k.943 2 0) #f)) ((bruijn ##.k.943 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(0l),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k135, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k133(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.944 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k134) (##inline ##vcore.cdr (bruijn ##.args.304 6 1))) ((bruijn ##.k.943 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k134, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k132(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.args.304 5 1)) ((bruijn ##.x.584 27 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k133) 'int (##inline ##vcore.car (bruijn ##.args.304 5 1))) ((bruijn ##.k.943 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 5-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k133, self)))),
      _V0int,
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k146(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.934 0 0) (bruijn ##.k.923 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0lambda25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0lambda25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.935 0 0) 'unsigned-int)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0unsigned__int);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k145(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.57.331 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.57.331 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.57.331 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k146) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0lambda25) (bruijn ##.kk.31.305 10 1)) ((bruijn ##.k.923 5 0) #f)) ((bruijn ##.k.923 5 0) #f)) ((bruijn ##.k.923 5 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k146, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0lambda25, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k144(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.56.330 0 0)) (if (##inline ##vcore.eq? #t (##inline ##vcore.car (bruijn ##.expr.56.330 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k145) (##inline ##vcore.cdr (bruijn ##.expr.56.330 0 0))) ((bruijn ##.k.923 4 0) #f)) ((bruijn ##.k.923 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(true),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k145, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k143(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.55.329 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.55.329 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k144) (##inline ##vcore.cdr (bruijn ##.expr.55.329 0 0))) ((bruijn ##.k.923 3 0) #f)) ((bruijn ##.k.923 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k144, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k142(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.54.328 0 0)) (if (##inline ##vcore.eq? 0 (##inline ##vcore.car (bruijn ##.expr.54.328 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k143) (##inline ##vcore.cdr (bruijn ##.expr.54.328 0 0))) ((bruijn ##.k.923 2 0) #f)) ((bruijn ##.k.923 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(0l),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k143, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k141(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.924 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k142) (##inline ##vcore.cdr (bruijn ##.args.304 7 1))) ((bruijn ##.k.923 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k142, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 7-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k140(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.args.304 6 1)) ((bruijn ##.x.584 28 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k141) 'int (##inline ##vcore.car (bruijn ##.args.304 6 1))) ((bruijn ##.k.923 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 6-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k141, self)))),
      _V0int,
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k154(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.915 0 0) (bruijn ##.k.905 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0lambda26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0lambda26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.916 0 0) 'long)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0long);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k153(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.62.336 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.62.336 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k154) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0lambda26) (bruijn ##.kk.31.305 11 1)) ((bruijn ##.k.905 5 0) #f)) ((bruijn ##.k.905 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k154, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0lambda26, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k152(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.61.335 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.61.335 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k153) (##inline ##vcore.cdr (bruijn ##.expr.61.335 0 0))) ((bruijn ##.k.905 4 0) #f)) ((bruijn ##.k.905 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k153, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k151(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.60.334 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.60.334 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k152) (##inline ##vcore.cdr (bruijn ##.expr.60.334 0 0))) ((bruijn ##.k.905 3 0) #f)) ((bruijn ##.k.905 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k152, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k150(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.59.333 0 0)) (if (##inline ##vcore.eq? 1 (##inline ##vcore.car (bruijn ##.expr.59.333 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k151) (##inline ##vcore.cdr (bruijn ##.expr.59.333 0 0))) ((bruijn ##.k.905 2 0) #f)) ((bruijn ##.k.905 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(1l),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k151, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k149(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.906 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k150) (##inline ##vcore.cdr (bruijn ##.args.304 8 1))) ((bruijn ##.k.905 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k150, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 8-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k148(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.args.304 7 1)) ((bruijn ##.x.584 29 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k149) 'int (##inline ##vcore.car (bruijn ##.args.304 7 1))) ((bruijn ##.k.905 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 7-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k149, self)))),
      _V0int,
      VInlineCar2(runtime,
        VGetArg(statics, 7-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k162(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.896 0 0) (bruijn ##.k.885 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0lambda27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0lambda27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.897 0 0) 'unsigned-long)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0unsigned__long);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k161(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.67.341 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.67.341 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.67.341 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k162) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0lambda27) (bruijn ##.kk.31.305 12 1)) ((bruijn ##.k.885 5 0) #f)) ((bruijn ##.k.885 5 0) #f)) ((bruijn ##.k.885 5 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k162, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0lambda27, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k160(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.66.340 0 0)) (if (##inline ##vcore.eq? #t (##inline ##vcore.car (bruijn ##.expr.66.340 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k161) (##inline ##vcore.cdr (bruijn ##.expr.66.340 0 0))) ((bruijn ##.k.885 4 0) #f)) ((bruijn ##.k.885 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(true),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k161, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k159(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.65.339 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.65.339 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k160) (##inline ##vcore.cdr (bruijn ##.expr.65.339 0 0))) ((bruijn ##.k.885 3 0) #f)) ((bruijn ##.k.885 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k160, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k158(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.64.338 0 0)) (if (##inline ##vcore.eq? 1 (##inline ##vcore.car (bruijn ##.expr.64.338 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k159) (##inline ##vcore.cdr (bruijn ##.expr.64.338 0 0))) ((bruijn ##.k.885 2 0) #f)) ((bruijn ##.k.885 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(1l),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k159, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k157(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.886 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k158) (##inline ##vcore.cdr (bruijn ##.args.304 9 1))) ((bruijn ##.k.885 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k158, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 9-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k156(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.args.304 8 1)) ((bruijn ##.x.584 30 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k157) 'int (##inline ##vcore.car (bruijn ##.args.304 8 1))) ((bruijn ##.k.885 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 8-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k157, self)))),
      _V0int,
      VInlineCar2(runtime,
        VGetArg(statics, 8-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k170(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.877 0 0) (bruijn ##.k.867 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0lambda28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0lambda28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.878 0 0) 'long-long)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0long__long);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k169(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.72.346 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.72.346 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k170) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0lambda28) (bruijn ##.kk.31.305 13 1)) ((bruijn ##.k.867 5 0) #f)) ((bruijn ##.k.867 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k170, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0lambda28, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k168(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.71.345 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.71.345 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k169) (##inline ##vcore.cdr (bruijn ##.expr.71.345 0 0))) ((bruijn ##.k.867 4 0) #f)) ((bruijn ##.k.867 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k169, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k167(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.70.344 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.70.344 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k168) (##inline ##vcore.cdr (bruijn ##.expr.70.344 0 0))) ((bruijn ##.k.867 3 0) #f)) ((bruijn ##.k.867 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k168, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k166(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.69.343 0 0)) (if (##inline ##vcore.eq? 2 (##inline ##vcore.car (bruijn ##.expr.69.343 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k167) (##inline ##vcore.cdr (bruijn ##.expr.69.343 0 0))) ((bruijn ##.k.867 2 0) #f)) ((bruijn ##.k.867 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(2l),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k167, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k165(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.868 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k166) (##inline ##vcore.cdr (bruijn ##.args.304 10 1))) ((bruijn ##.k.867 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k166, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 10-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k164(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.args.304 9 1)) ((bruijn ##.x.584 31 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k165) 'int (##inline ##vcore.car (bruijn ##.args.304 9 1))) ((bruijn ##.k.867 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 9-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k165, self)))),
      _V0int,
      VInlineCar2(runtime,
        VGetArg(statics, 9-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k178(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.858 0 0) (bruijn ##.k.847 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0lambda29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0lambda29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.859 0 0) 'unsigned-long-long)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0unsigned__long__long);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k177(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.77.351 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.77.351 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.77.351 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k178) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0lambda29) (bruijn ##.kk.31.305 14 1)) ((bruijn ##.k.847 5 0) #f)) ((bruijn ##.k.847 5 0) #f)) ((bruijn ##.k.847 5 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k178, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0lambda29, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k176(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.76.350 0 0)) (if (##inline ##vcore.eq? #t (##inline ##vcore.car (bruijn ##.expr.76.350 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k177) (##inline ##vcore.cdr (bruijn ##.expr.76.350 0 0))) ((bruijn ##.k.847 4 0) #f)) ((bruijn ##.k.847 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(true),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k177, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k175(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.75.349 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.75.349 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k176) (##inline ##vcore.cdr (bruijn ##.expr.75.349 0 0))) ((bruijn ##.k.847 3 0) #f)) ((bruijn ##.k.847 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k176, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k174(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.74.348 0 0)) (if (##inline ##vcore.eq? 2 (##inline ##vcore.car (bruijn ##.expr.74.348 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k175) (##inline ##vcore.cdr (bruijn ##.expr.74.348 0 0))) ((bruijn ##.k.847 2 0) #f)) ((bruijn ##.k.847 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(2l),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k175, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k173(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.848 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k174) (##inline ##vcore.cdr (bruijn ##.args.304 11 1))) ((bruijn ##.k.847 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k174, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 11-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k172(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.args.304 10 1)) ((bruijn ##.x.584 32 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k173) 'int (##inline ##vcore.car (bruijn ##.args.304 10 1))) ((bruijn ##.k.847 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 10-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k173, self)))),
      _V0int,
      VInlineCar2(runtime,
        VGetArg(statics, 10-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k186(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.839 0 0) (bruijn ##.k.829 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0lambda30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0lambda30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.840 0 0) 'short)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0short);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k185(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.82.356 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.82.356 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k186) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0lambda30) (bruijn ##.kk.31.305 15 1)) ((bruijn ##.k.829 5 0) #f)) ((bruijn ##.k.829 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k186, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0lambda30, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k184(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.81.355 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.81.355 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k185) (##inline ##vcore.cdr (bruijn ##.expr.81.355 0 0))) ((bruijn ##.k.829 4 0) #f)) ((bruijn ##.k.829 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k185, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k183(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.80.354 0 0)) (if (##inline ##vcore.eq? #t (##inline ##vcore.car (bruijn ##.expr.80.354 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k184) (##inline ##vcore.cdr (bruijn ##.expr.80.354 0 0))) ((bruijn ##.k.829 3 0) #f)) ((bruijn ##.k.829 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(true),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k184, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k182(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.79.353 0 0)) (if (##inline ##vcore.eq? 0 (##inline ##vcore.car (bruijn ##.expr.79.353 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k183) (##inline ##vcore.cdr (bruijn ##.expr.79.353 0 0))) ((bruijn ##.k.829 2 0) #f)) ((bruijn ##.k.829 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(0l),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k183, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k181(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.830 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k182) (##inline ##vcore.cdr (bruijn ##.args.304 12 1))) ((bruijn ##.k.829 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k182, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 12-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k180(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.args.304 11 1)) ((bruijn ##.x.584 33 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k181) 'int (##inline ##vcore.car (bruijn ##.args.304 11 1))) ((bruijn ##.k.829 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 11-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k181, self)))),
      _V0int,
      VInlineCar2(runtime,
        VGetArg(statics, 11-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k194(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.820 0 0) (bruijn ##.k.809 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0lambda31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0lambda31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.821 0 0) 'unsigned-short)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0unsigned__short);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k193(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.87.361 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.87.361 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.87.361 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k194) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0lambda31) (bruijn ##.kk.31.305 16 1)) ((bruijn ##.k.809 5 0) #f)) ((bruijn ##.k.809 5 0) #f)) ((bruijn ##.k.809 5 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k194, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0lambda31, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k192(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.86.360 0 0)) (if (##inline ##vcore.eq? #t (##inline ##vcore.car (bruijn ##.expr.86.360 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k193) (##inline ##vcore.cdr (bruijn ##.expr.86.360 0 0))) ((bruijn ##.k.809 4 0) #f)) ((bruijn ##.k.809 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(true),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k193, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k191(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.85.359 0 0)) (if (##inline ##vcore.eq? #t (##inline ##vcore.car (bruijn ##.expr.85.359 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k192) (##inline ##vcore.cdr (bruijn ##.expr.85.359 0 0))) ((bruijn ##.k.809 3 0) #f)) ((bruijn ##.k.809 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(true),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k192, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k190(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.84.358 0 0)) (if (##inline ##vcore.eq? 0 (##inline ##vcore.car (bruijn ##.expr.84.358 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k191) (##inline ##vcore.cdr (bruijn ##.expr.84.358 0 0))) ((bruijn ##.k.809 2 0) #f)) ((bruijn ##.k.809 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(0l),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k191, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k189(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.810 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k190) (##inline ##vcore.cdr (bruijn ##.args.304 13 1))) ((bruijn ##.k.809 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k190, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 13-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k188(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.args.304 12 1)) ((bruijn ##.x.584 34 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k189) 'int (##inline ##vcore.car (bruijn ##.args.304 12 1))) ((bruijn ##.k.809 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 12-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k189, self)))),
      _V0int,
      VInlineCar2(runtime,
        VGetArg(statics, 12-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k202(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.797 0 0) (bruijn ##.k.787 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k203(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k203, got ~D~N"
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k205(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k205, got ~D~N"
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k204(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.799 0 0) ((bruijn ##.k.798 1 0) 'unsigned-int) (##qualified-call (vanity compiler ffi find-typedef) (bruijn ##.find-typedef.221 23 1) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k205) (bruijn ##.special.363 6 0) (bruijn ##.table.299 22 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      _V0unsigned__int);
} else {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 23-1, 1));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k205, self))));
    VWORD _arg1 = 
      VGetArg(statics, 6-1, 0);
    VWORD _arg2 = 
      VGetArg(statics, 22-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0find__typedef(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0lambda32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0lambda32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k203) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k204))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k203, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k204, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k201(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.92.367 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.92.367 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.92.367 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k202) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0lambda32) (bruijn ##.kk.31.305 17 1)) ((bruijn ##.k.787 5 0) #f)) ((bruijn ##.k.787 5 0) #f)) ((bruijn ##.k.787 5 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k202, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0lambda32, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k200(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.91.366 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.91.366 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k201) (##inline ##vcore.cdr (bruijn ##.expr.91.366 0 0))) ((bruijn ##.k.787 4 0) #f)) ((bruijn ##.k.787 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k201, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k199(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.90.365 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.90.365 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k200) (##inline ##vcore.cdr (bruijn ##.expr.90.365 0 0))) ((bruijn ##.k.787 3 0) #f)) ((bruijn ##.k.787 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k200, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k198(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.89.364 0 0)) (if (##inline ##vcore.eq? 0 (##inline ##vcore.car (bruijn ##.expr.89.364 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k199) (##inline ##vcore.cdr (bruijn ##.expr.89.364 0 0))) ((bruijn ##.k.787 2 0) #f)) ((bruijn ##.k.787 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(0l),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k199, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k197(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k198) (##inline ##vcore.cdr (bruijn ##.args.304 14 1)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k198, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 14-1, 1)));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k196(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.args.304 13 1)) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k197) (##inline ##vcore.car (bruijn ##.args.304 13 1))) ((bruijn ##.k.787 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 13-1, 1)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k197, self)), 1,
      VInlineCar2(runtime,
        VGetArg(statics, 13-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k207(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.587 34 0) (bruijn ##.k.779 1 0) (##string ##.string.1734) (bruijn ##.x.780 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1734.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0lambda33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0lambda33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.578 42 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k207) (bruijn ##.x.580 40 0) (bruijn ##.args.304 14 1) (##inline ##vcore.qcons 'special (##inline ##vcore.qcons 'longs (##inline ##vcore.qcons 'short (##inline ##vcore.qcons 'unsigned (##inline ##vcore.qcons 'signed '()))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 42-1, 0)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k207, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k206(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.766 12 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0lambda33) (bruijn ##.kk.31.305 12 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 12-1, 0),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0lambda33, self)))),
      VGetArg(statics, 12-1, 1));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k195(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k196) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k206))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k196, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k206, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k187(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k188) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k195))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k188, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k195, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k179(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k180) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k187))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k180, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k187, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k171(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k172) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k179))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k172, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k179, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k163(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k164) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k171))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k164, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k171, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k155(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k156) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k163))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k156, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k163, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k147(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k148) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k155))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k148, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k155, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k139(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k140) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k147))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k140, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k147, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k131(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k132) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k139))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k132, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k139, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k123(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k124) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k131))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k124, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k131, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k115(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k116) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k123))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k116, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k123, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0lambda20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0lambda20, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k108) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k115))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k108, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0k115, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, ...) {
 if(argc < 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301, got ~D~N"
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
  // (##vcore.call/cc (bruijn ##.k.765 0 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0lambda20))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301_V0lambda20, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dappend__const_D302(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dappend__const_D302, got ~D~N"
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dmaybe__string___Gsymbol_D303(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dmaybe__string___Gsymbol_D303, got ~D~N"
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k208(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k208, got ~D~N"
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k210(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k210, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler ffi reduce-type ##.append-const.302) (bruijn ##.append-const.302 4 1) (bruijn ##.k.1023 2 0) (bruijn ##.const.377 2 4) (bruijn ##.x.1025 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[1]);
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      statics->up->vars[4];
    VWORD _arg2 = 
      _var0;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dappend__const_D302(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k209(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler ffi reduce-type ##.decide.301) (bruijn ##.decide.301 3 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k210) (bruijn ##.x.1026 0 0) (bruijn ##.longs.378 1 5) (bruijn ##.short.379 1 6) (bruijn ##.unsigned.380 1 7) (bruijn ##.signed.381 1 8))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k210, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      statics->vars[5];
    VWORD _arg3 = 
      statics->vars[6];
    VWORD _arg4 = 
      statics->vars[7];
    VWORD _arg5 = 
      statics->vars[8];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 6, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301(runtime, _closure->env, 6, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k214(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k214, got ~D~N"
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k220(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k220, got ~D~N"
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k219(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k219, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1056 0 0) ((bruijn ##.k.1054 2 0) (bruijn ##.p.1056 0 0)) (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k220) (bruijn ##.x.30.382 7 0) 'register))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _var0);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k220, self)))),
      VGetArg(statics, 7-1, 0),
      _V0register);
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k218(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k218, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1055 0 0) ((bruijn ##.k.1054 1 0) (bruijn ##.p.1055 0 0)) (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k219) (bruijn ##.x.30.382 6 0) 'typedef))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      _var0);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k219, self)))),
      VGetArg(statics, 6-1, 0),
      _V0typedef);
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k217(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k217, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1053 1 0) ((bruijn ##.k.1054 0 0) (bruijn ##.p.1053 1 0)) (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k218) (bruijn ##.x.30.382 5 0) 'extern))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k218, self)))),
      VGetArg(statics, 5-1, 0),
      _V0extern);
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k222(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k222, got ~D~N"
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k224(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k224, got ~D~N"
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k225(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k225, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler ffi reduce-type ##.loop.373) (bruijn ##.loop.373 9 0) (bruijn ##.k.1023 8 0) (##inline ##vcore.cdr (bruijn ##.t.374 8 1)) (##inline ##vcore.car (bruijn ##.t.374 8 1)) (bruijn ##.special.376 8 3) (bruijn ##.const.377 8 4) (bruijn ##.longs.378 8 5) (bruijn ##.short.379 8 6) (bruijn ##.unsigned.380 8 7) (bruijn ##.signed.381 8 8))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 0));
    VWORD _arg0 = 
      VGetArg(statics, 8-1, 0);
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 8-1, 1));
    VWORD _arg2 = 
      VInlineCar2(runtime,
        VGetArg(statics, 8-1, 1));
    VWORD _arg3 = 
      VGetArg(statics, 8-1, 3);
    VWORD _arg4 = 
      VGetArg(statics, 8-1, 4);
    VWORD _arg5 = 
      VGetArg(statics, 8-1, 5);
    VWORD _arg6 = 
      VGetArg(statics, 8-1, 6);
    VWORD _arg7 = 
      VGetArg(statics, 8-1, 7);
    VWORD _arg8 = 
      VGetArg(statics, 8-1, 8);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 9, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373(runtime, _closure->env, 9, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k223(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k223, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k224) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k225))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k224, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k225, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k229(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k229, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1048 0 0) (##qualified-call (vanity compiler ffi reduce-type ##.loop.373) (bruijn ##.loop.373 11 0) (bruijn ##.k.1023 10 0) (##inline ##vcore.cdr (bruijn ##.t.374 10 1)) (bruijn ##.storage.375 10 2) (bruijn ##.special.376 10 3) (bruijn ##.const.377 10 4) (bruijn ##.longs.378 10 5) (bruijn ##.short.379 10 6) (bruijn ##.unsigned.380 10 7) #t) (if (bruijn ##.special.376 10 3) ((bruijn ##.x.587 30 0) (bruijn ##.k.1023 10 0) (##string ##.string.1737) (##inline ##vcore.car (bruijn ##.t.374 10 1)) (bruijn ##.special.376 10 3)) (##qualified-call (vanity compiler ffi reduce-type ##.loop.373) (bruijn ##.loop.373 11 0) (bruijn ##.k.1023 10 0) (##inline ##vcore.cdr (bruijn ##.t.374 10 1)) (bruijn ##.storage.375 10 2) (##inline ##vcore.car (bruijn ##.t.374 10 1)) (bruijn ##.const.377 10 4) (bruijn ##.longs.378 10 5) (bruijn ##.short.379 10 6) (bruijn ##.unsigned.380 10 7) (bruijn ##.signed.381 10 8))))
if(VDecodeBool(
_var0)) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 11-1, 0));
    VWORD _arg0 = 
      VGetArg(statics, 10-1, 0);
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 10-1, 1));
    VWORD _arg2 = 
      VGetArg(statics, 10-1, 2);
    VWORD _arg3 = 
      VGetArg(statics, 10-1, 3);
    VWORD _arg4 = 
      VGetArg(statics, 10-1, 4);
    VWORD _arg5 = 
      VGetArg(statics, 10-1, 5);
    VWORD _arg6 = 
      VGetArg(statics, 10-1, 6);
    VWORD _arg7 = 
      VGetArg(statics, 10-1, 7);
    VWORD _arg8 = 
      VEncodeBool(true);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 9, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373(runtime, _closure->env, 9, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
    }
  }
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
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 11-1, 0));
    VWORD _arg0 = 
      VGetArg(statics, 10-1, 0);
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 10-1, 1));
    VWORD _arg2 = 
      VGetArg(statics, 10-1, 2);
    VWORD _arg3 = 
      VInlineCar2(runtime,
        VGetArg(statics, 10-1, 1));
    VWORD _arg4 = 
      VGetArg(statics, 10-1, 4);
    VWORD _arg5 = 
      VGetArg(statics, 10-1, 5);
    VWORD _arg6 = 
      VGetArg(statics, 10-1, 6);
    VWORD _arg7 = 
      VGetArg(statics, 10-1, 7);
    VWORD _arg8 = 
      VGetArg(statics, 10-1, 8);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 9, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373(runtime, _closure->env, 9, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
    }
  }
}
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k228(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k228, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1046 0 0) (##qualified-call (vanity compiler ffi reduce-type ##.loop.373) (bruijn ##.loop.373 10 0) (bruijn ##.k.1023 9 0) (##inline ##vcore.cdr (bruijn ##.t.374 9 1)) (bruijn ##.storage.375 9 2) (bruijn ##.special.376 9 3) (bruijn ##.const.377 9 4) (bruijn ##.longs.378 9 5) (bruijn ##.short.379 9 6) #t (bruijn ##.signed.381 9 8)) (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k229) (bruijn ##.x.30.382 8 0) 'signed))
if(VDecodeBool(
_var0)) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 10-1, 0));
    VWORD _arg0 = 
      VGetArg(statics, 9-1, 0);
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 9-1, 1));
    VWORD _arg2 = 
      VGetArg(statics, 9-1, 2);
    VWORD _arg3 = 
      VGetArg(statics, 9-1, 3);
    VWORD _arg4 = 
      VGetArg(statics, 9-1, 4);
    VWORD _arg5 = 
      VGetArg(statics, 9-1, 5);
    VWORD _arg6 = 
      VGetArg(statics, 9-1, 6);
    VWORD _arg7 = 
      VEncodeBool(true);
    VWORD _arg8 = 
      VGetArg(statics, 9-1, 8);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 9, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373(runtime, _closure->env, 9, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
    }
  }
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k229, self)))),
      VGetArg(statics, 8-1, 0),
      _V0signed);
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k227(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k227, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1044 0 0) (##qualified-call (vanity compiler ffi reduce-type ##.loop.373) (bruijn ##.loop.373 9 0) (bruijn ##.k.1023 8 0) (##inline ##vcore.cdr (bruijn ##.t.374 8 1)) (bruijn ##.storage.375 8 2) (bruijn ##.special.376 8 3) (bruijn ##.const.377 8 4) (bruijn ##.longs.378 8 5) #t (bruijn ##.unsigned.380 8 7) (bruijn ##.signed.381 8 8)) (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k228) (bruijn ##.x.30.382 7 0) 'unsigned))
if(VDecodeBool(
_var0)) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 0));
    VWORD _arg0 = 
      VGetArg(statics, 8-1, 0);
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 8-1, 1));
    VWORD _arg2 = 
      VGetArg(statics, 8-1, 2);
    VWORD _arg3 = 
      VGetArg(statics, 8-1, 3);
    VWORD _arg4 = 
      VGetArg(statics, 8-1, 4);
    VWORD _arg5 = 
      VGetArg(statics, 8-1, 5);
    VWORD _arg6 = 
      VEncodeBool(true);
    VWORD _arg7 = 
      VGetArg(statics, 8-1, 7);
    VWORD _arg8 = 
      VGetArg(statics, 8-1, 8);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 9, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373(runtime, _closure->env, 9, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
    }
  }
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k228, self)))),
      VGetArg(statics, 7-1, 0),
      _V0unsigned);
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k226(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k226, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1041 0 0) (basic-block 1 1 (##.reg.1710) ((##vcore.+ (bruijn ##.longs.378 8 5) 1)) (##qualified-call (vanity compiler ffi reduce-type ##.loop.373) (bruijn ##.loop.373 9 0) (bruijn ##.k.1023 8 0) (##inline ##vcore.cdr (bruijn ##.t.374 8 1)) (bruijn ##.storage.375 8 2) (bruijn ##.special.376 8 3) (bruijn ##.const.377 8 4) (bruijn ##.reg.1710 0 0) (bruijn ##.short.379 8 6) (bruijn ##.unsigned.380 8 7) (bruijn ##.signed.381 8 8))) (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k227) (bruijn ##.x.30.382 6 0) 'short))
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
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 0));
    VWORD _arg0 = 
      VGetArg(statics, 8-1, 0);
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 8-1, 1));
    VWORD _arg2 = 
      VGetArg(statics, 8-1, 2);
    VWORD _arg3 = 
      VGetArg(statics, 8-1, 3);
    VWORD _arg4 = 
      VGetArg(statics, 8-1, 4);
    VWORD _arg5 = 
      self->vars[0];
    VWORD _arg6 = 
      VGetArg(statics, 8-1, 6);
    VWORD _arg7 = 
      VGetArg(statics, 8-1, 7);
    VWORD _arg8 = 
      VGetArg(statics, 8-1, 8);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 9, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373(runtime, _closure->env, 9, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
    }
  }
    }
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k227, self)))),
      VGetArg(statics, 6-1, 0),
      _V0short);
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k221(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k221, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1032 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k222) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k223)) (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k226) (bruijn ##.x.30.382 5 0) 'long))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k222, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k223, self)))));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k226, self)))),
      VGetArg(statics, 5-1, 0),
      _V0long);
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k216(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k216, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k217) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k221))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k217, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k221, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k215(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1030 0 0) (##qualified-call (vanity compiler ffi reduce-type ##.loop.373) (bruijn ##.loop.373 5 0) (bruijn ##.k.1023 4 0) (##inline ##vcore.cdr (bruijn ##.t.374 4 1)) (bruijn ##.storage.375 4 2) (bruijn ##.special.376 4 3) (bruijn ##.const.377 4 4) (bruijn ##.longs.378 4 5) (bruijn ##.short.379 4 6) (bruijn ##.unsigned.380 4 7) (bruijn ##.signed.381 4 8)) (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k216) (bruijn ##.x.30.382 3 0) 'static))
if(VDecodeBool(
_var0)) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 0));
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->up->up->up->vars[1]);
    VWORD _arg2 = 
      statics->up->up->up->vars[2];
    VWORD _arg3 = 
      statics->up->up->up->vars[3];
    VWORD _arg4 = 
      statics->up->up->up->vars[4];
    VWORD _arg5 = 
      statics->up->up->up->vars[5];
    VWORD _arg6 = 
      statics->up->up->up->vars[6];
    VWORD _arg7 = 
      statics->up->up->up->vars[7];
    VWORD _arg8 = 
      statics->up->up->up->vars[8];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 9, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373(runtime, _closure->env, 9, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
    }
  }
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k216, self)))),
      statics->up->up->vars[0],
      _V0static);
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k213(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k213, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k214) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k215))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k214, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k215, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k212(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k212, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1028 0 0) (##qualified-call (vanity compiler ffi reduce-type ##.loop.373) (bruijn ##.loop.373 3 0) (bruijn ##.k.1023 2 0) (##inline ##vcore.cdr (bruijn ##.t.374 2 1)) (bruijn ##.storage.375 2 2) (bruijn ##.special.376 2 3) #t (bruijn ##.longs.378 2 5) (bruijn ##.short.379 2 6) (bruijn ##.unsigned.380 2 7) (bruijn ##.signed.381 2 8)) (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k213) (bruijn ##.x.30.382 1 0) 'restrict))
if(VDecodeBool(
_var0)) {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->up->vars[1]);
    VWORD _arg2 = 
      statics->up->vars[2];
    VWORD _arg3 = 
      statics->up->vars[3];
    VWORD _arg4 = 
      VEncodeBool(true);
    VWORD _arg5 = 
      statics->up->vars[5];
    VWORD _arg6 = 
      statics->up->vars[6];
    VWORD _arg7 = 
      statics->up->vars[7];
    VWORD _arg8 = 
      statics->up->vars[8];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 9, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373(runtime, _closure->env, 9, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
    }
  }
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k213, self)))),
      statics->vars[0],
      _V0restrict);
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k211(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k212) (bruijn ##.x.30.382 0 0) 'const)
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k212, self)))),
      _var0,
      _V0const);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8) {
 if(argc != 9) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373, got ~D~N"
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
  // (if (##inline ##vcore.null? (bruijn ##.t.374 0 1)) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k208) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k209)) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k211) (##inline ##vcore.car (bruijn ##.t.374 0 1))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k208, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k209, self)))));
} else {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373_V0k211, self)), 1,
      VInlineCar2(runtime,
        _var1));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V0k230(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V0k230, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler ffi reduce-type ##.loop.373) (bruijn ##.loop.373 1 0) (bruijn ##.k.764 3 0) (bruijn ##.x.1060 0 0) #f #f #f 0 #f #f #f)
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VEncodeBool(false);
    VWORD _arg3 = 
      VEncodeBool(false);
    VWORD _arg4 = 
      VEncodeBool(false);
    VWORD _arg5 = 
      VEncodeInt(0l);
    VWORD _arg6 = 
      VEncodeBool(false);
    VWORD _arg7 = 
      VEncodeBool(false);
    VWORD _arg8 = 
      VEncodeBool(false);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 9, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373(runtime, _closure->env, 9, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type, got ~D~N"
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
  // (letrec 3 ((close "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301") (close "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dappend__const_D302") (close "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dmaybe__string___Gsymbol_D303")) (letrec 1 ((close "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373")) ((bruijn ##.x.578 28 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V0k230) (bruijn ##.maybe-string->symbol.303 1 2) (bruijn ##.t.298 2 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D301, self))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dappend__const_D302, self))));
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dmaybe__string___Gsymbol_D303, self))));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D373, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V0k230, self)))),
      statics->vars[2],
      statics->up->vars[1]);
    }
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k237(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k237, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1071 0 0) (bruijn ##.k.1066 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k238(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k238, got ~D~N"
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
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k240(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k240, got ~D~N"
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
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k239(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k239, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.string->symbol (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k240) (bruijn ##.name.393 3 0))
    VCallFuncWithGC(runtime, (VFunc)VStringSymbol2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k240, self)))),
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0lambda35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0lambda35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.1711) ((##vcore.string? (bruijn ##.name.393 2 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k238) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k239)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringP2(runtime, NULL,
      statics->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k238, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k239, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k236(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k236, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.98.392 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k237) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0lambda35) (bruijn ##.kk.94.387 5 1)) ((bruijn ##.k.1066 4 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k237, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0lambda35, self)))),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k235(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k235, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.98.392 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k236) (##inline ##vcore.car (bruijn ##.expr.98.392 0 0))) ((bruijn ##.k.1066 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k236, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k234(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k234, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.97.390 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k235) (##inline ##vcore.cdr (bruijn ##.expr.97.390 0 0))) ((bruijn ##.k.1066 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k235, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k233(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k233, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1067 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k234) (##inline ##vcore.cdr (bruijn ##.expr.386 3 0))) ((bruijn ##.k.1066 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k234, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k232(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k232, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.386 2 0)) ((bruijn ##.x.584 23 0) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k233) 'variable (##inline ##vcore.car (bruijn ##.expr.386 2 0))) ((bruijn ##.k.1066 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k233, self)))),
      _V0variable,
      VInlineCar2(runtime,
        statics->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0lambda36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0lambda36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.587 21 0) (bruijn ##.k.1064 0 0) (##string ##.string.1739) (bruijn ##.expr.386 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1739.sym, VPOINTER_OTHER),
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k241(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k241, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1062 1 0) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0lambda36) (bruijn ##.kk.94.387 1 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0lambda36, self)))),
      statics->vars[1]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0lambda34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0lambda34, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k232) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k241))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k232, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k241, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k231(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k231, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1061 1 0) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0lambda34))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0lambda34, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef, got ~D~N"
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
  // (##qualified-call (vanity compiler ffi reduce-declare) (bruijn ##.reduce-declare.220 1 0) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k231) (bruijn ##.ret.383 0 1) (bruijn ##.decl.384 0 2) (bruijn ##.table.385 0 3))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k231, self))));
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      _var2;
    VWORD _arg3 = 
      _var3;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k250(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k250, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1091 0 0) (bruijn ##.k.1087 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k252(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k252, got ~D~N"
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
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k254(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k254, got ~D~N"
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
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k257(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k257, got ~D~N"
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
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k256(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k256, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.string->symbol (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k257) (bruijn ##.name.402 9 0))
    VCallFuncWithGC(runtime, (VFunc)VStringSymbol2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k257, self)))),
      VGetArg(statics, 9-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k258(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k258, got ~D~N"
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
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0lambda39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0lambda39, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity compiler ffi get-foreign-decoder) (bruijn ##.get-foreign-decoder.236 16 16) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k258) (bruijn ##.arg.406 0 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 16-1, 16));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k258, self))));
    VWORD _arg1 = 
      _var1;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k255(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k255, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.588 30 0) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k256) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0lambda39) (bruijn ##.args.405 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k256, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0lambda39, self)))),
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k253(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k253, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.1712) ((##vcore.string? (bruijn ##.name.402 7 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k254) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k255)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringP2(runtime, NULL,
      VGetArg(statics, 7-1, 0));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k254, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k255, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k251(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k251, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k252) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k253))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k252, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k253, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0lambda38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0lambda38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler ffi get-foreign-encoder) (bruijn ##.get-foreign-encoder.235 11 15) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k251) (bruijn ##.ret.404 2 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 11-1, 15));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k251, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__encoder(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k249(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k249, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k250) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0lambda38) (bruijn ##.kk.99.398 7 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k250, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0lambda38, self)))),
      VGetArg(statics, 7-1, 1));
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k248(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k248, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k249) (##inline ##vcore.cdr (bruijn ##.expr.103.403 1 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k249, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k247(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k247, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.103.403 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k248) (##inline ##vcore.car (bruijn ##.expr.103.403 0 0))) ((bruijn ##.k.1087 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k248, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k246(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k246, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k247) (##inline ##vcore.cdr (bruijn ##.expr.102.401 1 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k247, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k245(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k245, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.102.401 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k246) (##inline ##vcore.car (bruijn ##.expr.102.401 0 0))) ((bruijn ##.k.1087 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k246, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k244(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k244, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1088 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k245) (##inline ##vcore.cdr (bruijn ##.expr.397 3 0))) ((bruijn ##.k.1087 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k245, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k243(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k243, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.397 2 0)) ((bruijn ##.x.584 23 0) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k244) 'function (##inline ##vcore.car (bruijn ##.expr.397 2 0))) ((bruijn ##.k.1087 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k244, self)))),
      _V0function,
      VInlineCar2(runtime,
        statics->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0lambda40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0lambda40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.587 21 0) (bruijn ##.k.1085 0 0) (##string ##.string.1743) (bruijn ##.expr.397 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1743.sym, VPOINTER_OTHER),
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k259(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k259, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1083 1 0) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0lambda40) (bruijn ##.kk.99.398 1 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0lambda40, self)))),
      statics->vars[1]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0lambda37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0lambda37, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k243) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k259))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k243, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k259, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k242(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k242, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1082 1 0) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0lambda37))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0lambda37, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function, got ~D~N"
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
  // (##qualified-call (vanity compiler ffi reduce-declare) (bruijn ##.reduce-declare.220 1 0) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k242) (bruijn ##.ret.394 0 1) (bruijn ##.decl.395 0 2) (bruijn ##.table.396 0 3))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k242, self))));
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      _var2;
    VWORD _arg3 = 
      _var3;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D409_V0k261(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D409_V0k261, got ~D~N"
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
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D409_V0k264(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D409_V0k264, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler ffi unwrap-enums ##.unwrap-enums-iter.409) (bruijn ##.unwrap-enums-iter.409 6 0) (bruijn ##.k.1110 5 0) (##inline ##vcore.cdr (bruijn ##.enums.410 5 1)) (bruijn ##.reg.1713 2 0) (##inline ##vcore.cons (##inline ##vcore.cons 'enum (##inline ##vcore.cons (bruijn ##.x.1117 0 0) (##inline ##vcore.cons (bruijn ##.val.413 3 0) '()))) (bruijn ##.table.412 5 3)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 0));
    VWORD _arg0 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 1));
    VWORD _arg2 = 
      statics->up->vars[0];
    VWORD _arg3 = 
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0enum,
        VInlineCons2(runtime,
        _var0,
        VInlineCons2(runtime,
        statics->up->up->vars[0],
        VNULL))),
        VGetArg(statics, 5-1, 3));
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D409(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D409_V0k263(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D409_V0k263, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.string->symbol (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D409_V0k264) (bruijn ##.x.1119 0 0))
    VCallFuncWithGC(runtime, (VFunc)VStringSymbol2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D409_V0k264, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D409_V0k262(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D409_V0k262, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.1713) ((##vcore.+ (bruijn ##.val.413 1 0) 1)) ((bruijn ##.x.581 28 0) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D409_V0k263) (bruijn ##.enums.410 3 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->vars[0],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D409_V0k263, self)))),
      statics->up->up->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D409_V0k260(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D409_V0k260, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D409_V0k261) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D409_V0k262))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D409_V0k261, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D409_V0k262, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D409(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D409, got ~D~N"
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
  // (if (##inline ##vcore.null? (bruijn ##.enums.410 0 1)) ((bruijn ##.k.1110 0 0) (bruijn ##.table.412 0 3)) ((bruijn ##.x.582 24 0) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D409_V0k260) (bruijn ##.enums.410 0 1)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var3);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D409_V0k260, self)))),
      _var1);
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D414_V0k266(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D414_V0k266, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.584 25 0) (bruijn ##.k.1127 1 0) (bruijn ##.x.1128 0 0) (##string ##.string.1733))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 3,
      statics->vars[0],
      _var0,
      VEncodePointer(&_V10_Dstring_D1733.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D414_V0k265(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D414_V0k265, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (##inline ##vcore.car (bruijn ##.ret.415 1 1))) ((bruijn ##.x.581 27 0) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D414_V0k266) (bruijn ##.ret.415 1 1)) ((bruijn ##.k.1127 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VInlineCar2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D414_V0k266, self)))),
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D414_V0k268(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D414_V0k268, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.enums.416 0 0) (##qualified-call (vanity compiler ffi unwrap-enums ##.unwrap-enums-iter.409) (bruijn ##.unwrap-enums-iter.409 4 0) (bruijn ##.k.1122 2 0) (bruijn ##.enums.416 0 0) 0 (bruijn ##.table.408 5 2)) ((bruijn ##.k.1122 2 0) (bruijn ##.table.408 5 2)))
if(VDecodeBool(
_var0)) {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VEncodeInt(0l);
    VWORD _arg3 = 
      VGetArg(statics, 5-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D409(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VGetArg(statics, 5-1, 2));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D414_V0k267(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D414_V0k267, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1124 0 0) ((bruijn ##.x.586 22 0) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D414_V0k268) (bruijn ##.ret.415 1 1)) (##qualified-call (vanity compiler ffi unwrap-enums ##.loop.414) (bruijn ##.loop.414 2 0) (bruijn ##.k.1122 1 0) (##inline ##vcore.cdr (bruijn ##.ret.415 1 1))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D414_V0k268, self)))),
      statics->vars[1]);
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->vars[1]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D414(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D414(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D414, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.null? (bruijn ##.ret.415 0 1)) ((bruijn ##.k.1122 0 0) (bruijn ##.table.408 3 2)) ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D414_V0k265) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D414_V0k267)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D414_V0k265, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D414_V0k267, self)))));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D409")) (letrec 1 ((close "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D414")) (##qualified-call (vanity compiler ffi unwrap-enums ##.loop.414) (bruijn ##.loop.414 0 0) (bruijn ##.k.1109 2 0) (bruijn ##.ret.407 2 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D409, self))));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D414, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      statics->up->vars[1];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D414(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
    }
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k270(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k270, got ~D~N"
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
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k272(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k272, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1167 0 0) (bruijn ##.k.1164 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0lambda42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0lambda42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1168 0 0) (bruijn ##.table.418 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 2));
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k271(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k271, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1165 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.parse.417 4 1))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k272) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0lambda42) (bruijn ##.kk.104.419 3 1)) ((bruijn ##.k.1164 2 0) #f)) ((bruijn ##.k.1164 2 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->up->up->up->vars[1])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k272, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0lambda42, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k269(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k269, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.parse.417 2 1)) (basic-block 1 1 (##.reg.1716) ((##vcore.string? (##inline ##vcore.car (bruijn ##.parse.417 3 1)))) ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k270) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k271))) ((bruijn ##.k.1164 0 0) #f))
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
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k270, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k271, self)))));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k275(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k275, got ~D~N"
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
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k279(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k279, got ~D~N"
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
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k283(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k283, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1141 0 0) (bruijn ##.k.1135 9 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 9-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V10_Dloop_D432_V0k287(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V10_Dloop_D432_V0k287, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.x.1143 5 0) (##qualified-call (vanity compiler ffi unwrap-typedef) (bruijn ##.unwrap-typedef.223 19 3) (bruijn ##.k.1152 0 0) (bruijn ##.x.1145 3 0) (##inline ##vcore.car (bruijn ##.mydecls.433 1 1)) (bruijn ##.table.434 1 2)) (##qualified-call (vanity compiler ffi unwrap-function) (bruijn ##.unwrap-function.224 19 4) (bruijn ##.k.1152 0 0) (bruijn ##.x.1145 3 0) (##inline ##vcore.car (bruijn ##.mydecls.433 1 1)) (bruijn ##.table.434 1 2)))
if(VDecodeBool(
VGetArg(statics, 5-1, 0))) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 19-1, 3));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->up->up->vars[0];
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->vars[1]);
    VWORD _arg3 = 
      statics->vars[2];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 19-1, 4));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->up->up->vars[0];
    VWORD _arg2 = 
      VInlineCar2(runtime,
        statics->vars[1]);
    VWORD _arg3 = 
      statics->vars[2];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V10_Dloop_D432_V0k288(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V10_Dloop_D432_V0k288, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler ffi unwrap-declares ##.loop.432) (bruijn ##.loop.432 2 0) (bruijn ##.k.1146 1 0) (##inline ##vcore.cdr (bruijn ##.mydecls.433 1 1)) (##inline ##vcore.cons (bruijn ##.x.1151 0 0) (bruijn ##.table.434 1 2)))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->vars[1]);
    VWORD _arg2 = 
      VInlineCons2(runtime,
        _var0,
        statics->vars[2]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V10_Dloop_D432(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V10_Dloop_D432(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V10_Dloop_D432, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.mydecls.433 0 1)) (##qualified-call (vanity compiler ffi unwrap-declares) (bruijn ##.unwrap-declares.226 18 6) (bruijn ##.k.1146 0 0) (##inline ##vcore.cons '(##string ##.string.1744) (##inline ##vcore.cdr (bruijn ##.expr.108.423 11 0))) (bruijn ##.table.434 0 2)) ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V10_Dloop_D432_V0k287) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V10_Dloop_D432_V0k288)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 18-1, 6));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VInlineCons2(runtime,
        VEncodePointer(&_V10_Dstring_D1744.sym, VPOINTER_OTHER),
        VInlineCdr2(runtime,
        VGetArg(statics, 11-1, 0)));
    VWORD _arg2 = 
      _var2;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V10_Dloop_D432_V0k287, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V10_Dloop_D432_V0k288, self)))));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k286(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k286, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V10_Dloop_D432")) (##qualified-call (vanity compiler ffi unwrap-declares ##.loop.432) (bruijn ##.loop.432 0 0) (bruijn ##.k.1142 4 0) (##inline ##vcore.cdr (bruijn ##.expr.110.425 6 0)) (bruijn ##.x.1144 2 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V10_Dloop_D432, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 0));
    VWORD _arg2 = 
      statics->up->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V10_Dloop_D432(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k285(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k285, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler ffi reduce-type) (bruijn ##.reduce-type.222 15 2) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k286) (bruijn ##.ret.426 3 0) (bruijn ##.table.418 14 2) #t)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 15-1, 2));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k286, self))));
    VWORD _arg1 = 
      statics->up->up->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 14-1, 2);
    VWORD _arg3 = 
      VEncodeBool(true);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__type(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k284(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k284, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler ffi unwrap-enums) (bruijn ##.unwrap-enums.225 14 5) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k285) (bruijn ##.ret.426 2 0) (bruijn ##.table.418 13 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 14-1, 5));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k285, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 13-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0lambda43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0lambda43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.589 27 0) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k284) (##string ##.string.1746) (bruijn ##.ret.426 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k284, self)))),
      VEncodePointer(&_V10_Dstring_D1746.sym, VPOINTER_OTHER),
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k282(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k282, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k283) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0lambda43) (bruijn ##.kk.104.419 10 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k283, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0lambda43, self)))),
      VGetArg(statics, 10-1, 1));
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k281(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k281, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.110.425 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k282) (##inline ##vcore.car (bruijn ##.expr.110.425 0 0))) ((bruijn ##.k.1135 7 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k282, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k280(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k280, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1139 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k281) (##inline ##vcore.cdr (bruijn ##.expr.109.424 2 0))) ((bruijn ##.k.1135 6 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k281, self)), 1,
      VInlineCdr2(runtime,
        statics->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k278(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k278, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.109.424 0 0)) (basic-block 1 1 (##.reg.1715) ((##vcore.string? (##inline ##vcore.car (bruijn ##.expr.109.424 1 0)))) ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k279) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k280))) ((bruijn ##.k.1135 4 0) #f))
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
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k279, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k280, self)))));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k277(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k277, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.108.423 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k278) (##inline ##vcore.car (bruijn ##.expr.108.423 0 0))) ((bruijn ##.k.1135 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k278, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k276(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k276, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1136 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k277) (##inline ##vcore.cdr (bruijn ##.parse.417 5 1))) ((bruijn ##.k.1135 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k277, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k274(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k274, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.parse.417 3 1)) (basic-block 1 1 (##.reg.1714) ((##vcore.string? (##inline ##vcore.car (bruijn ##.parse.417 4 1)))) ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k275) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k276))) ((bruijn ##.k.1135 0 0) #f))
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
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k275, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k276, self)))));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k289(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k289, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.579 28 0) (bruijn ##.k.1131 2 0) (##string ##.string.1731))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 2,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1731.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k273(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k273, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k274) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k289))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k274, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k289, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0lambda41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0lambda41, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k269) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k273))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k269, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k273, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call/cc (bruijn ##.k.1130 0 0) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0lambda41))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0lambda41, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D437_V0k292(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D437_V0k292, got ~D~N"
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
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D437_V0k291(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D437_V0k291, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.x.1183 0 0)) (##qualified-call (vanity compiler ffi table->defines ##.duplicate-mismatch.437) (bruijn ##.duplicate-mismatch.437 3 0) (bruijn ##.k.1175 2 0) (bruijn ##.x.438 2 1) (bruijn ##.entry.439 2 2) (##inline ##vcore.cdr (bruijn ##.table.440 2 3)) (bruijn ##.err-proc.441 2 4)) ((bruijn ##.x.584 24 0) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D437_V0k292) (bruijn ##.entry.439 2 2) (##inline ##vcore.car (bruijn ##.table.440 2 3))))
if(VDecodeBool(
VInlineNot2(runtime,
        _var0))) {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      statics->up->vars[1];
    VWORD _arg2 = 
      statics->up->vars[2];
    VWORD _arg3 = 
      VInlineCdr2(runtime,
        statics->up->vars[3]);
    VWORD _arg4 = 
      statics->up->vars[4];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D437(runtime, _closure->env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D437_V0k292, self)))),
      statics->up->vars[2],
      VInlineCar2(runtime,
        statics->up->vars[3]));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D437_V0k290(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D437_V0k290, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D437_V0k291) (bruijn ##.x.438 1 1) (bruijn ##.x.1184 0 0))
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D437_V0k291, self)))),
      statics->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D437(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 if(argc != 5) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D437, got ~D~N"
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
  // (if (##inline ##vcore.null? (bruijn ##.table.440 0 3)) ((bruijn ##.k.1175 0 0) #f) ((bruijn ##.x.582 24 0) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D437_V0k290) (bruijn ##.table.440 0 3)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var3))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D437_V0k290, self)))),
      _var3);
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k299(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k299, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1232 0 0) (bruijn ##.k.1228 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k301(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k301, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler ffi table->defines) (bruijn ##.table->defines.227 12 7) (bruijn ##.k.1233 2 0) (##inline ##vcore.cdr (bruijn ##.table.435 11 1)) (##inline ##vcore.cons (##inline ##vcore.cons 'define (##inline ##vcore.cons (bruijn ##.name.446 4 0) (##inline ##vcore.cons (##inline ##vcore.cons '##foreign.function (##inline ##vcore.cons '(##string ##.string.1747) (##inline ##vcore.cons '(##string ##.string.1748) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.115.447 3 0)) (##inline ##vcore.cons (bruijn ##.x.1246 0 0) (##inline ##vcore.cdr (bruijn ##.expr.115.447 3 0))))))) '()))) (bruijn ##.acc.436 11 2)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 7));
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 11-1, 1));
    VWORD _arg2 = 
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
        VGetArg(statics, 11-1, 2));
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k300(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k300, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1234 0 0) (##qualified-call (vanity compiler ffi table->defines) (bruijn ##.table->defines.227 11 7) (bruijn ##.k.1233 1 0) (##inline ##vcore.cdr (bruijn ##.table.435 10 1)) (bruijn ##.acc.436 10 2)) (##vcore.symbol->string (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k301) (bruijn ##.name.446 3 0)))
if(VDecodeBool(
_var0)) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 11-1, 7));
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 10-1, 1));
    VWORD _arg2 = 
      VGetArg(statics, 10-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    VCallFuncWithGC(runtime, (VFunc)VSymbolString2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k301, self)))),
      statics->up->up->vars[0]);
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda46, got ~D~N"
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
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler ffi table->defines ##.duplicate-mismatch.437) (bruijn ##.duplicate-mismatch.437 8 0) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k300) (bruijn ##.name.446 2 0) (##inline ##vcore.car (bruijn ##.table.435 9 1)) (##inline ##vcore.cdr (bruijn ##.table.435 9 1)) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda46))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 0));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k300, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      VInlineCar2(runtime,
        VGetArg(statics, 9-1, 1));
    VWORD _arg3 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 9-1, 1));
    VWORD _arg4 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda46, self))));
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D437(runtime, _closure->env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k298(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k298, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.115.447 0 0)) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k299) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda45) (bruijn ##.kk.111.442 6 1)) ((bruijn ##.k.1228 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k299, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda45, self)))),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k297(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k297, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k298) (##inline ##vcore.cdr (bruijn ##.expr.114.445 1 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k298, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k296(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k296, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.114.445 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k297) (##inline ##vcore.car (bruijn ##.expr.114.445 0 0))) ((bruijn ##.k.1228 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k297, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k295(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k295, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1229 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k296) (##inline ##vcore.cdr (bruijn ##.input.112.443 2 0))) ((bruijn ##.k.1228 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k296, self)), 1,
      VInlineCdr2(runtime,
        statics->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k294(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k294, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.input.112.443 1 0)) ((bruijn ##.x.584 24 0) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k295) 'function (##inline ##vcore.car (bruijn ##.input.112.443 1 0))) ((bruijn ##.k.1228 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k295, self)))),
      _V0function,
      VInlineCar2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k308(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k308, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1214 0 0) (bruijn ##.k.1209 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k309(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k309, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler ffi table->defines) (bruijn ##.table->defines.227 12 7) (bruijn ##.k.1215 1 0) (##inline ##vcore.cdr (bruijn ##.table.435 11 1)) (##inline ##vcore.cons (##inline ##vcore.cons 'define-constant (##inline ##vcore.cons (bruijn ##.name.453 3 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.118.454 2 0)) '()))) (bruijn ##.acc.436 11 2)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 7));
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 11-1, 1));
    VWORD _arg2 = 
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0define__constant,
        VInlineCons2(runtime,
        statics->up->up->vars[0],
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[0]),
        VNULL))),
        VGetArg(statics, 11-1, 2));
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda48, got ~D~N"
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
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler ffi table->defines ##.duplicate-mismatch.437) (bruijn ##.duplicate-mismatch.437 9 0) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k309) (bruijn ##.name.453 2 0) #f (##inline ##vcore.cdr (bruijn ##.table.435 10 1)) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda48))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 0));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k309, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      VEncodeBool(false);
    VWORD _arg3 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 10-1, 1));
    VWORD _arg4 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda48, self))));
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D437(runtime, _closure->env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k307(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k307, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.118.454 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.118.454 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k308) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda47) (bruijn ##.kk.111.442 7 1)) ((bruijn ##.k.1209 4 0) #f)) ((bruijn ##.k.1209 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k308, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda47, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k306(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k306, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k307) (##inline ##vcore.cdr (bruijn ##.expr.117.452 1 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k307, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k305(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k305, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.117.452 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k306) (##inline ##vcore.car (bruijn ##.expr.117.452 0 0))) ((bruijn ##.k.1209 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k306, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k304(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k304, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1210 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k305) (##inline ##vcore.cdr (bruijn ##.input.112.443 3 0))) ((bruijn ##.k.1209 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k305, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k303(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k303, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.input.112.443 2 0)) ((bruijn ##.x.584 25 0) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k304) 'enum (##inline ##vcore.car (bruijn ##.input.112.443 2 0))) ((bruijn ##.k.1209 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k304, self)))),
      _V0enum,
      VInlineCar2(runtime,
        statics->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k315(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k315, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1198 0 0) (bruijn ##.k.1193 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k316(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k316, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler ffi table->defines) (bruijn ##.table->defines.227 12 7) (bruijn ##.k.1199 1 0) (##inline ##vcore.cdr (bruijn ##.table.435 11 1)) (bruijn ##.acc.436 11 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 7));
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 11-1, 1));
    VWORD _arg2 = 
      VGetArg(statics, 11-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda50, got ~D~N"
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
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler ffi table->defines ##.duplicate-mismatch.437) (bruijn ##.duplicate-mismatch.437 9 0) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k316) (##inline ##vcore.car (bruijn ##.expr.120.458 2 0)) (##inline ##vcore.car (bruijn ##.table.435 10 1)) (##inline ##vcore.cdr (bruijn ##.table.435 10 1)) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda50))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 0));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k316, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->up->vars[0]);
    VWORD _arg2 = 
      VInlineCar2(runtime,
        VGetArg(statics, 10-1, 1));
    VWORD _arg3 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 10-1, 1));
    VWORD _arg4 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda50, self))));
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D437(runtime, _closure->env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k314(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k314, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.121.460 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.121.460 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k315) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda49) (bruijn ##.kk.111.442 7 1)) ((bruijn ##.k.1193 3 0) #f)) ((bruijn ##.k.1193 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k315, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda49, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k313(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k313, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.120.458 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k314) (##inline ##vcore.cdr (bruijn ##.expr.120.458 0 0))) ((bruijn ##.k.1193 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k314, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k312(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k312, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1194 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k313) (##inline ##vcore.cdr (bruijn ##.input.112.443 4 0))) ((bruijn ##.k.1193 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k313, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k311(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k311, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.input.112.443 3 0)) ((bruijn ##.x.584 26 0) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k312) 'typedef (##inline ##vcore.car (bruijn ##.input.112.443 3 0))) ((bruijn ##.k.1193 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k312, self)))),
      _V0typedef,
      VInlineCar2(runtime,
        statics->up->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda51, got ~D~N"
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
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k317(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k317, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1186 4 0) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda51) (bruijn ##.kk.111.442 4 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->up->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda51, self)))),
      statics->up->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k310(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k310, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k311) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k317))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k311, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k317, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k302(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k302, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k303) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k310))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k303, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k310, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k293(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k293, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k294) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k302))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k294, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k302, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda44, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k293) (##inline ##vcore.car (bruijn ##.table.435 2 1)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k293, self)), 1,
      VInlineCar2(runtime,
        statics->up->vars[1]));
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D437")) (if (##inline ##vcore.null? (bruijn ##.table.435 1 1)) ((bruijn ##.k.1174 1 0) (bruijn ##.acc.436 1 2)) (##vcore.call/cc (bruijn ##.k.1174 1 0) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda44))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D437, self))));
if(VDecodeBool(
VInlineNullP2(runtime,
        statics->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[2]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda44, self)))));
}
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0deep__copy_V0k319(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0deep__copy_V0k319, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1252 3 0) (##inline ##vcore.cons (bruijn ##.x.1255 1 0) (bruijn ##.x.1256 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        statics->vars[0],
        _var0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0deep__copy_V0k318(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0deep__copy_V0k318, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler ffi deep-copy) (bruijn ##.deep-copy.228 3 8) (close _V50_V0vanity_V0compiler_V0ffi_V0deep__copy_V0k319) (##inline ##vcore.cdr (bruijn ##.x.463 2 1)))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[8]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0deep__copy_V0k319, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->up->vars[1]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0deep__copy(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0deep__copy(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0deep__copy, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.1717) ((##vcore.string? (bruijn ##.x.463 1 1))) (if (bruijn ##.reg.1717 0 0) (##vcore.substring (bruijn ##.k.1252 1 0) (bruijn ##.x.463 1 1)) (if (##inline ##vcore.pair? (bruijn ##.x.463 1 1)) (##qualified-call (vanity compiler ffi deep-copy) (bruijn ##.deep-copy.228 2 8) (close _V50_V0vanity_V0compiler_V0ffi_V0deep__copy_V0k318) (##inline ##vcore.car (bruijn ##.x.463 1 1))) ((bruijn ##.k.1252 1 0) (bruijn ##.x.463 1 1)))))
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
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[8]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0deep__copy_V0k318, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->vars[1]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0deep__copy(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[1]);
}
}
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k323(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k323, got ~D~N"
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
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k327(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k327, got ~D~N"
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
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k331(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k331, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1291 0 0) (bruijn ##.k.1282 9 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 9-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0lambda53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0lambda53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.592 27 0) (bruijn ##.k.1292 0 0) (bruijn ##.parse.468 11 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 2,
      _var0,
      VGetArg(statics, 11-1, 1));
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k330(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k330, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.138.476 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.138.476 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.135.472 5 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k331) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0lambda53) (bruijn ##.kk.132.469 9 1)) ((bruijn ##.k.1282 8 0) #f)) ((bruijn ##.k.1282 8 0) #f)) ((bruijn ##.k.1282 8 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k331, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0lambda53, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k329(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k329, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.137.474 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k330) (##inline ##vcore.cdr (bruijn ##.expr.137.474 0 0))) ((bruijn ##.k.1282 7 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k330, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k328(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k328, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1286 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k329) (##inline ##vcore.cdr (bruijn ##.expr.136.473 2 0))) ((bruijn ##.k.1282 6 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k329, self)), 1,
      VInlineCdr2(runtime,
        statics->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k326(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k326, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.136.473 0 0)) (basic-block 1 1 (##.reg.1720) ((##vcore.string? (##inline ##vcore.car (bruijn ##.expr.136.473 1 0)))) ((close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k327) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k328))) ((bruijn ##.k.1282 4 0) #f))
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
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k327, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k328, self)))));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k325(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k325, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.135.472 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k326) (##inline ##vcore.car (bruijn ##.expr.135.472 0 0))) ((bruijn ##.k.1282 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k326, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k324(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k324, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1283 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k325) (##inline ##vcore.cdr (bruijn ##.parse.468 4 1))) ((bruijn ##.k.1282 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k325, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k322(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k322, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.parse.468 2 1)) (basic-block 1 1 (##.reg.1719) ((##vcore.string? (##inline ##vcore.car (bruijn ##.parse.468 3 1)))) ((close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k323) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k324))) ((bruijn ##.k.1282 0 0) #f))
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
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k323, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k324, self)))));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k334(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k334, got ~D~N"
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
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k338(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k338, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1274 0 0) (bruijn ##.k.1269 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0lambda54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0lambda54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1275 0 0) (##inline ##vcore.cdr (bruijn ##.parse.468 8 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 8-1, 1)));
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k337(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k337, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.141.480 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.141.480 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k338) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0lambda54) (bruijn ##.kk.132.469 6 1)) ((bruijn ##.k.1269 4 0) #f)) ((bruijn ##.k.1269 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k338, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0lambda54, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k336(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k336, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.140.478 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k337) (##inline ##vcore.cdr (bruijn ##.expr.140.478 0 0))) ((bruijn ##.k.1269 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k337, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k335(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k335, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1270 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k336) (##inline ##vcore.cdr (bruijn ##.parse.468 5 1))) ((bruijn ##.k.1269 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k336, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k333(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k333, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.parse.468 3 1)) (basic-block 1 1 (##.reg.1718) ((##vcore.string? (##inline ##vcore.car (bruijn ##.parse.468 4 1)))) ((close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k334) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k335))) ((bruijn ##.k.1269 0 0) #f))
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
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k334, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k335, self)))));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k340(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k340, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1266 1 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0lambda55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0lambda55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.587 25 0) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k340) (##string ##.string.1752) (bruijn ##.parse.468 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k340, self)))),
      VEncodePointer(&_V10_Dstring_D1752.sym, VPOINTER_OTHER),
      statics->up->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k339(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k339, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1263 2 0) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0lambda55) (bruijn ##.kk.132.469 2 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0lambda55, self)))),
      statics->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k332(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k332, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k333) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k339))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k333, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k339, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0lambda52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0lambda52, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k322) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k332))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k322, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0k332, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.k.1262 0 0) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0lambda52))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467_V0lambda52, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k347(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k347, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1341 0 0) (bruijn ##.k.1335 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0lambda57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0lambda57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1342 0 0) (bruijn ##.expr.464 11 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 11-1, 1));
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k346(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k346, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.128.490 0 0)) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k347) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0lambda57) (bruijn ##.kk.122.481 6 1)) ((bruijn ##.k.1335 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k347, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0lambda57, self)))),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k345(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k345, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.127.488 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k346) (##inline ##vcore.cdr (bruijn ##.expr.127.488 0 0))) ((bruijn ##.k.1335 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k346, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k344(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k344, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.126.486 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k345) (##inline ##vcore.cdr (bruijn ##.expr.126.486 0 0))) ((bruijn ##.k.1335 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k345, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k343(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k343, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.125.484 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k344) (##inline ##vcore.cdr (bruijn ##.expr.125.484 0 0))) ((bruijn ##.k.1335 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k344, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k342(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k342, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1336 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k343) (##inline ##vcore.cdr (bruijn ##.expr.464 6 1))) ((bruijn ##.k.1335 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k343, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k341(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k341, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.464 5 1)) ((bruijn ##.x.584 25 0) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k342) '##foreign.function (##inline ##vcore.car (bruijn ##.expr.464 5 1))) ((bruijn ##.k.1335 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 5-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k342, self)))),
      _V10foreign_Dfunction,
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k355(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k355, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1313 0 0) (bruijn ##.k.1308 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k357(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k357, got ~D~N"
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
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k368(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k368, got ~D~N"
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
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k367(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k367, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.591 36 0) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k368) (bruijn ##.ff.499 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k368, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k366(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k366, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.583 43 0) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k367) (bruijn ##.ff.499 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 43-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k367, self)))),
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k365(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k365, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.590 35 0) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k366) (bruijn ##.ff.499 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 35-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k366, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k364(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k364, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler ffi unwrap-function) (bruijn ##.unwrap-function.224 21 4) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k365) (bruijn ##.x.1324 1 0) (bruijn ##.x.1325 0 0) '())
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 21-1, 4));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k365, self))));
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      _var0;
    VWORD _arg3 = 
      VNULL;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k363(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k363, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.583 40 0) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k364) (bruijn ##.parse.498 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 40-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k364, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k362(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k362, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler ffi reduce-type) (bruijn ##.reduce-type.222 19 2) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k363) (##inline ##vcore.car (bruijn ##.parse.498 1 0)) '() #t)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 19-1, 2));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k363, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->vars[0]);
    VWORD _arg2 = 
      VNULL;
    VWORD _arg3 = 
      VEncodeBool(true);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__type(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k361(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k361, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.release-parse.466 14 1) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k362))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 1)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k362, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k360(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k360, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler ffi validate-foreign-function ##.is-one-decl.467) (bruijn ##.is-one-decl.467 13 2) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k361) (bruijn ##.x.1327 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 13-1, 2));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k361, self))));
    VWORD _arg1 = 
      _var0;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k359(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k359, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler ffi deep-copy) (bruijn ##.deep-copy.228 16 8) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k360) (bruijn ##.x.1328 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 16-1, 8));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k360, self))));
    VWORD _arg1 = 
      _var0;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0deep__copy(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k358(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k358, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.parse-decl-c.465 11 0) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k359) (bruijn ##.decl.497 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k359, self)))),
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k356(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k356, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k357) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k358))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k357, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k358, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0lambda58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0lambda58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.584 32 0) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k356) (bruijn ##.lang.495 3 0) (##string ##.string.1747))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k356, self)))),
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1747.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k354(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k354, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.131.496 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k355) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0lambda58) (bruijn ##.kk.122.481 7 1)) ((bruijn ##.k.1308 5 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k355, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0lambda58, self)))),
      VGetArg(statics, 7-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k353(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k353, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.131.496 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k354) (##inline ##vcore.car (bruijn ##.expr.131.496 0 0))) ((bruijn ##.k.1308 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k354, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k352(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k352, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k353) (##inline ##vcore.cdr (bruijn ##.expr.130.494 1 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k353, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k351(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k351, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.130.494 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k352) (##inline ##vcore.car (bruijn ##.expr.130.494 0 0))) ((bruijn ##.k.1308 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k352, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k350(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k350, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1309 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k351) (##inline ##vcore.cdr (bruijn ##.expr.464 7 1))) ((bruijn ##.k.1308 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k351, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 7-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k349(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k349, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.464 6 1)) ((bruijn ##.x.584 26 0) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k350) '##foreign.function (##inline ##vcore.car (bruijn ##.expr.464 6 1))) ((bruijn ##.k.1308 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 6-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k350, self)))),
      _V10foreign_Dfunction,
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0lambda59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0lambda59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.587 24 0) (bruijn ##.k.1306 0 0) (##string ##.string.1754) (bruijn ##.expr.464 7 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1754.sym, VPOINTER_OTHER),
      VGetArg(statics, 7-1, 1));
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k369(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k369, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1303 2 0) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0lambda59) (bruijn ##.kk.122.481 2 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0lambda59, self)))),
      statics->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k348(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k348, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k349) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k369))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k349, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k369, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0lambda56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0lambda56, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k341) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k348))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k341, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k348, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k321(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k321, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 3 ((bruijn ##.x.1260 2 0) (bruijn ##.x.1261 1 0) (close "_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467")) (##vcore.call/cc (bruijn ##.k.1259 3 0) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0lambda56)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = statics->up->vars[0];
    self->vars[1] = statics->vars[0];
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D467, self))));
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->up->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0lambda56, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k320(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k320, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.function (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k321) (##string ##.string.1755))
    VCallFuncWithGC(runtime, (VFunc)VFunction2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k321, self)))),
      VEncodePointer(&_V10_Dstring_D1755.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.function (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k320) (##string ##.string.1756))
    VCallFuncWithGC(runtime, (VFunc)VFunction2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k320, self)))),
      VEncodePointer(&_V10_Dstring_D1756.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0ffi_V0find__file_V0k371(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0find__file_V0k371, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1346 0 0) ((bruijn ##.k.1344 2 0) (bruijn ##.path.502 1 0)) (##qualified-call (vanity compiler ffi find-file) (bruijn ##.find-file.230 3 10) (bruijn ##.k.1344 2 0) (bruijn ##.file.500 2 1) (##inline ##vcore.cdr (bruijn ##.paths.501 2 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      statics->vars[0]);
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[10]);
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      statics->up->vars[1];
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        statics->up->vars[2]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0find__file(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0find__file_V0k370(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0find__file_V0k370, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.593 12 0) (close _V50_V0vanity_V0compiler_V0ffi_V0find__file_V0k371) (bruijn ##.path.502 0 0) 4)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0find__file_V0k371, self)))),
      _var0,
      VEncodeInt(4l));
}
void _V50_V0vanity_V0compiler_V0ffi_V0find__file(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0find__file, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.paths.501 0 2)) ((bruijn ##.x.587 17 0) (bruijn ##.k.1344 0 0) (##string ##.string.1757) (bruijn ##.file.500 0 1)) ((bruijn ##.x.594 10 0) (close _V50_V0vanity_V0compiler_V0ffi_V0find__file_V0k370) (##string ##.string.1758) (##inline ##vcore.car (bruijn ##.paths.501 0 2)) (bruijn ##.file.500 0 1)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1757.sym, VPOINTER_OTHER),
      _var1);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0find__file_V0k370, self)))),
      VEncodePointer(&_V10_Dstring_D1758.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        _var2),
      _var1);
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__install__root_V0k373(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__install__root_V0k373, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.594 12 0) (bruijn ##.k.1349 2 0) (##string ##.string.1759) (bruijn ##.x.1350 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 3,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1759.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__install__root_V0k372(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__install__root_V0k372, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.1351 0 0) (close _V50_V0vanity_V0compiler_V0ffi_V0get__install__root_V0k373))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__install__root_V0k373, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__install__root(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__install__root, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.595 9 0) ((bruijn ##.k.1349 0 0) (bruijn ##.x.595 9 0)) (##vcore.function (close _V50_V0vanity_V0compiler_V0ffi_V0get__install__root_V0k372) (##string ##.string.1760)))
if(VDecodeBool(
VGetArg(statics, 9-1, 0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 9-1, 0));
} else {
    VCallFuncWithGC(runtime, (VFunc)VFunction2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__install__root_V0k372, self)))),
      VEncodePointer(&_V10_Dstring_D1760.sym, VPOINTER_OTHER));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0make__preprocess__command_V0k375(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0make__preprocess__command_V0k375, got ~D~N"
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
void _V50_V0vanity_V0compiler_V0ffi_V0make__preprocess__command_V0k376(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0make__preprocess__command_V0k376, got ~D~N"
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
void _V50_V0vanity_V0compiler_V0ffi_V0make__preprocess__command_V0k374(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0make__preprocess__command_V0k374, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1353 0 0) (##qualified-call (vanity compiler ffi get-install-root) (bruijn ##.get-install-root.231 2 11) (close _V50_V0vanity_V0compiler_V0ffi_V0make__preprocess__command_V0k375)) (##qualified-call (vanity compiler ffi get-install-root) (bruijn ##.get-install-root.231 2 11) (close _V50_V0vanity_V0compiler_V0ffi_V0make__preprocess__command_V0k376)))
if(VDecodeBool(
_var0)) {
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[11]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0make__preprocess__command_V0k375, self))));
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 1, _arg0);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0get__install__root(runtime, _closure->env, 1, _arg0);
    }
  }
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[11]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0make__preprocess__command_V0k376, self))));
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 1, _arg0);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0get__install__root(runtime, _closure->env, 1, _arg0);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0make__preprocess__command(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0make__preprocess__command, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0ffi_V0make__preprocess__command_V0k374) (bruijn ##.x.597 7 0) 'windows)
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0make__preprocess__command_V0k374, self)))),
      VGetArg(statics, 7-1, 0),
      _V0windows);
}
void _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k384(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k384, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1368 0 0) (bruijn ##.k.1363 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k386(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k386, got ~D~N"
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
void _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k388(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k388, got ~D~N"
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
void _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k399(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k399, got ~D~N"
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
void _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k398(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k398, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler ffi table->defines) (bruijn ##.table->defines.227 24 7) (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k399) (bruijn ##.x.1376 0 0) '())
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 24-1, 7));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k399, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VNULL;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k397(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k397, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler ffi unwrap-declares) (bruijn ##.unwrap-declares.226 23 6) (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k398) (bruijn ##.parse.519 3 0) '())
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 23-1, 6));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k398, self))));
    VWORD _arg1 = 
      statics->up->up->vars[0];
    VWORD _arg2 = 
      VNULL;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k396(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k396, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.594 31 0) (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k397) (##string ##.string.1765) (bruijn ##.file.516 12 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k397, self)))),
      VEncodePointer(&_V10_Dstring_D1765.sym, VPOINTER_OTHER),
      VGetArg(statics, 12-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k395(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k395, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.598 26 0) (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k396) (bruijn ##.fd.518 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k396, self)))),
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k394(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k394, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.release-parse.509 16 1) (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k395))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 1)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k395, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k393(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k393, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler ffi deep-copy) (bruijn ##.deep-copy.228 19 8) (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k394) (bruijn ##.x.1379 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 19-1, 8));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k394, self))));
    VWORD _arg1 = 
      _var0;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0deep__copy(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k392(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k392, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.parse-header-c.508 14 0) (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k393) (bruijn ##.fd.518 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k393, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k391(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k391, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.open-input-process (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k392) (bruijn ##.cmd.517 0 0))
    VCallFuncWithGC(runtime, (VFunc)VOpenInputProcess2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k392, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k390(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k390, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler ffi make-preprocess-command) (bruijn ##.make-preprocess-command.232 16 12) (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k391) (bruijn ##.x.1380 0 0) (bruijn ##.architecture.507 15 3))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 16-1, 12));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k391, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VGetArg(statics, 15-1, 3);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0make__preprocess__command(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k389(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k389, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler ffi find-file) (bruijn ##.find-file.230 15 10) (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k390) (bruijn ##.file.516 5 0) (bruijn ##.paths.506 14 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 15-1, 10));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k390, self))));
    VWORD _arg1 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg2 = 
      VGetArg(statics, 14-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0find__file(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k387(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k387, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.1721) ((##vcore.string? (bruijn ##.file.516 4 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k388) (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k389)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringP2(runtime, NULL,
      statics->up->up->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k388, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k389, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k385(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k385, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k386) (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k387))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k386, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k387, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0lambda61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0lambda61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.584 30 0) (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k385) (##inline ##vcore.car (bruijn ##.expr.145.513 3 0)) (##string ##.string.1747))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k385, self)))),
      VInlineCar2(runtime,
        statics->up->up->vars[0]),
      VEncodePointer(&_V10_Dstring_D1747.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k383(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k383, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.146.515 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k384) (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0lambda61) (bruijn ##.kk.142.510 5 1)) ((bruijn ##.k.1363 4 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k384, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0lambda61, self)))),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k382(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k382, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.146.515 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k383) (##inline ##vcore.car (bruijn ##.expr.146.515 0 0))) ((bruijn ##.k.1363 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k383, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k381(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k381, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.145.513 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k382) (##inline ##vcore.cdr (bruijn ##.expr.145.513 0 0))) ((bruijn ##.k.1363 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k382, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k380(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k380, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1364 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k381) (##inline ##vcore.cdr (bruijn ##.expr.505 6 1))) ((bruijn ##.k.1363 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k381, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k379(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k379, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.505 5 1)) ((bruijn ##.x.584 25 0) (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k380) '##foreign.import (##inline ##vcore.car (bruijn ##.expr.505 5 1))) ((bruijn ##.k.1363 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 5-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k380, self)))),
      _V10foreign_Dimport,
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0lambda62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0lambda62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.587 23 0) (bruijn ##.k.1361 0 0) (##string ##.string.1766) (bruijn ##.expr.505 6 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1766.sym, VPOINTER_OTHER),
      VGetArg(statics, 6-1, 1));
}
void _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k400(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k400, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1359 1 0) (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0lambda62) (bruijn ##.kk.142.510 1 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0lambda62, self)))),
      statics->vars[1]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0lambda60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0lambda60, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k379) (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k400))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k379, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k400, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k378(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k378, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 2 ((bruijn ##.x.1357 2 0) (bruijn ##.x.1358 1 0)) (##vcore.call/cc (bruijn ##.k.1356 3 0) (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0lambda60)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = statics->up->vars[0];
    self->vars[1] = statics->vars[0];
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->up->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0lambda60, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k377(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k377, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.function (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k378) (##string ##.string.1755))
    VCallFuncWithGC(runtime, (VFunc)VFunction2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k378, self)))),
      VEncodePointer(&_V10_Dstring_D1755.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import, got ~D~N"
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
  // (##vcore.function (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k377) (##string ##.string.1767))
    VCallFuncWithGC(runtime, (VFunc)VFunction2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k377, self)))),
      VEncodePointer(&_V10_Dstring_D1767.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign__function(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign__function, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.x.594 10 0) (bruijn ##.k.1389 0 0) (##string ##.string.1768) (bruijn ##.name.520 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1768.sym, VPOINTER_OTHER),
      _var1);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__encoder_V0k401(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__encoder_V0k401, got ~D~N"
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
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__encoder_V0k402(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__encoder_V0k402, got ~D~N"
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
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__encoder(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__encoder, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__encoder_V0k401) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__encoder_V0k402))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__encoder_V0k401, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__encoder_V0k402, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k403(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k403, got ~D~N"
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
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k408(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k408, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1574 0 0) (bruijn ##.k.1573 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1575 0 0) (##inline ##vcore.qcons 'c-string '(##string ##.string.1774)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0c__string,
        VEncodePointer(&_V10_Dstring_D1774.sym, VPOINTER_OTHER)));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k407(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k407, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1572 1 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k408) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda64) (bruijn ##.kk.147.523 3 1)) ((bruijn ##.k.1573 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k408, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda64, self)))),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k414(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k414, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1567 0 0) (bruijn ##.k.1562 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1568 0 0) (##inline ##vcore.qcons 'const-c-string '(##string ##.string.1775)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0const__c__string,
        VEncodePointer(&_V10_Dstring_D1775.sym, VPOINTER_OTHER)));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k413(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k413, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1565 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.150.526 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k414) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda65) (bruijn ##.kk.147.523 7 1)) ((bruijn ##.k.1562 3 0) #f)) ((bruijn ##.k.1562 3 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k414, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda65, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k412(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k412, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.150.526 0 0)) ((bruijn ##.x.584 28 0) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k413) 'char (##inline ##vcore.car (bruijn ##.expr.150.526 0 0))) ((bruijn ##.k.1562 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k413, self)))),
      _V0char,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k411(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k411, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1563 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k412) (##inline ##vcore.cdr (bruijn ##.input.148.524 4 0))) ((bruijn ##.k.1562 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k412, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k410(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k410, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.input.148.524 3 0)) ((bruijn ##.x.584 26 0) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k411) 'const (##inline ##vcore.car (bruijn ##.input.148.524 3 0))) ((bruijn ##.k.1562 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k411, self)))),
      _V0const,
      VInlineCar2(runtime,
        statics->up->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k420(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k420, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1556 0 0) (bruijn ##.k.1551 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1557 0 0) (##inline ##vcore.qcons 'const-void-pointer '(##string ##.string.1776)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0const__void__pointer,
        VEncodePointer(&_V10_Dstring_D1776.sym, VPOINTER_OTHER)));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k419(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k419, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1554 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.152.528 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k420) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda66) (bruijn ##.kk.147.523 8 1)) ((bruijn ##.k.1551 3 0) #f)) ((bruijn ##.k.1551 3 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k420, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda66, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k418(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k418, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.152.528 0 0)) ((bruijn ##.x.584 29 0) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k419) 'void (##inline ##vcore.car (bruijn ##.expr.152.528 0 0))) ((bruijn ##.k.1551 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k419, self)))),
      _V0void,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k417(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k417, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1552 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k418) (##inline ##vcore.cdr (bruijn ##.input.148.524 5 0))) ((bruijn ##.k.1551 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k418, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 0)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k416(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k416, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.input.148.524 4 0)) ((bruijn ##.x.584 27 0) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k417) 'const (##inline ##vcore.car (bruijn ##.input.148.524 4 0))) ((bruijn ##.k.1551 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->up->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k417, self)))),
      _V0const,
      VInlineCar2(runtime,
        statics->up->up->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k424(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k424, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1548 0 0) (bruijn ##.k.1547 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1549 0 0) (##inline ##vcore.qcons 'void-pointer '(##string ##.string.1777)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0void__pointer,
        VEncodePointer(&_V10_Dstring_D1777.sym, VPOINTER_OTHER)));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k423(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k423, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1546 1 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k424) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda67) (bruijn ##.kk.147.523 7 1)) ((bruijn ##.k.1547 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k424, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda67, self)))),
      VGetArg(statics, 7-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k428(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k428, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1544 0 0) (bruijn ##.k.1543 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1545 0 0) (##inline ##vcore.qcons 'f32-pointer '(##string ##.string.1778)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0f32__pointer,
        VEncodePointer(&_V10_Dstring_D1778.sym, VPOINTER_OTHER)));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k427(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k427, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1542 1 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k428) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda68) (bruijn ##.kk.147.523 9 1)) ((bruijn ##.k.1543 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k428, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda68, self)))),
      VGetArg(statics, 9-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k432(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k432, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1540 0 0) (bruijn ##.k.1539 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1541 0 0) (##inline ##vcore.qcons 'f64-pointer '(##string ##.string.1779)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0f64__pointer,
        VEncodePointer(&_V10_Dstring_D1779.sym, VPOINTER_OTHER)));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k431(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k431, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1538 1 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k432) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda69) (bruijn ##.kk.147.523 11 1)) ((bruijn ##.k.1539 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k432, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda69, self)))),
      VGetArg(statics, 11-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k436(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k436, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1536 0 0) (bruijn ##.k.1535 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1537 0 0) (##inline ##vcore.qcons 's32-pointer '(##string ##.string.1780)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0s32__pointer,
        VEncodePointer(&_V10_Dstring_D1780.sym, VPOINTER_OTHER)));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k435(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k435, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1534 1 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k436) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda70) (bruijn ##.kk.147.523 13 1)) ((bruijn ##.k.1535 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k436, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda70, self)))),
      VGetArg(statics, 13-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k440(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k440, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1532 0 0) (bruijn ##.k.1531 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1533 0 0) (##inline ##vcore.qcons 'u16-pointer '(##string ##.string.1781)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0u16__pointer,
        VEncodePointer(&_V10_Dstring_D1781.sym, VPOINTER_OTHER)));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k439(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k439, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1530 1 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k440) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda71) (bruijn ##.kk.147.523 15 1)) ((bruijn ##.k.1531 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k440, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda71, self)))),
      VGetArg(statics, 15-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k444(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k444, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1528 0 0) (bruijn ##.k.1527 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1529 0 0) (##inline ##vcore.qcons 's16-pointer '(##string ##.string.1782)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0s16__pointer,
        VEncodePointer(&_V10_Dstring_D1782.sym, VPOINTER_OTHER)));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k443(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k443, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1526 1 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k444) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda72) (bruijn ##.kk.147.523 17 1)) ((bruijn ##.k.1527 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k444, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda72, self)))),
      VGetArg(statics, 17-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k448(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k448, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1524 0 0) (bruijn ##.k.1523 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1525 0 0) (##inline ##vcore.qcons 'u8-pointer '(##string ##.string.1783)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0u8__pointer,
        VEncodePointer(&_V10_Dstring_D1783.sym, VPOINTER_OTHER)));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k447(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k447, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1522 1 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k448) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda73) (bruijn ##.kk.147.523 19 1)) ((bruijn ##.k.1523 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k448, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda73, self)))),
      VGetArg(statics, 19-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k452(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k452, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1520 0 0) (bruijn ##.k.1519 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1521 0 0) (##inline ##vcore.qcons 's8-pointer '(##string ##.string.1784)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0s8__pointer,
        VEncodePointer(&_V10_Dstring_D1784.sym, VPOINTER_OTHER)));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k451(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k451, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1518 1 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k452) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda74) (bruijn ##.kk.147.523 21 1)) ((bruijn ##.k.1519 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k452, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda74, self)))),
      VGetArg(statics, 21-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k458(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k458, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1513 0 0) (bruijn ##.k.1508 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1514 0 0) (##inline ##vcore.qcons 'f32-pointer '(##string ##.string.1778)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0f32__pointer,
        VEncodePointer(&_V10_Dstring_D1778.sym, VPOINTER_OTHER)));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k457(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k457, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1511 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.154.530 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k458) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda75) (bruijn ##.kk.147.523 25 1)) ((bruijn ##.k.1508 3 0) #f)) ((bruijn ##.k.1508 3 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k458, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda75, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k456(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k456, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.154.530 0 0)) ((bruijn ##.x.584 46 0) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k457) 'float (##inline ##vcore.car (bruijn ##.expr.154.530 0 0))) ((bruijn ##.k.1508 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 46-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k457, self)))),
      _V0float,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k455(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k455, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1509 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k456) (##inline ##vcore.cdr (bruijn ##.input.148.524 22 0))) ((bruijn ##.k.1508 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k456, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 22-1, 0)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k454(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k454, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.input.148.524 21 0)) ((bruijn ##.x.584 44 0) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k455) 'const (##inline ##vcore.car (bruijn ##.input.148.524 21 0))) ((bruijn ##.k.1508 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 21-1, 0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 44-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k455, self)))),
      _V0const,
      VInlineCar2(runtime,
        VGetArg(statics, 21-1, 0)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k464(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k464, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1502 0 0) (bruijn ##.k.1497 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1503 0 0) (##inline ##vcore.qcons 'f64-pointer '(##string ##.string.1779)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0f64__pointer,
        VEncodePointer(&_V10_Dstring_D1779.sym, VPOINTER_OTHER)));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k463(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k463, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1500 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.156.532 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k464) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda76) (bruijn ##.kk.147.523 26 1)) ((bruijn ##.k.1497 3 0) #f)) ((bruijn ##.k.1497 3 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k464, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda76, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k462(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k462, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.156.532 0 0)) ((bruijn ##.x.584 47 0) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k463) 'double (##inline ##vcore.car (bruijn ##.expr.156.532 0 0))) ((bruijn ##.k.1497 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 47-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k463, self)))),
      _V0double,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k461(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k461, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1498 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k462) (##inline ##vcore.cdr (bruijn ##.input.148.524 23 0))) ((bruijn ##.k.1497 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k462, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 23-1, 0)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k460(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k460, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.input.148.524 22 0)) ((bruijn ##.x.584 45 0) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k461) 'const (##inline ##vcore.car (bruijn ##.input.148.524 22 0))) ((bruijn ##.k.1497 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 22-1, 0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 45-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k461, self)))),
      _V0const,
      VInlineCar2(runtime,
        VGetArg(statics, 22-1, 0)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k470(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k470, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1491 0 0) (bruijn ##.k.1486 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1492 0 0) (##inline ##vcore.qcons 's32-pointer '(##string ##.string.1780)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0s32__pointer,
        VEncodePointer(&_V10_Dstring_D1780.sym, VPOINTER_OTHER)));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k469(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k469, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1489 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.158.534 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k470) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda77) (bruijn ##.kk.147.523 27 1)) ((bruijn ##.k.1486 3 0) #f)) ((bruijn ##.k.1486 3 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k470, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda77, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k468(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k468, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.158.534 0 0)) ((bruijn ##.x.584 48 0) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k469) 'int (##inline ##vcore.car (bruijn ##.expr.158.534 0 0))) ((bruijn ##.k.1486 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 48-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k469, self)))),
      _V0int,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k467(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k467, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1487 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k468) (##inline ##vcore.cdr (bruijn ##.input.148.524 24 0))) ((bruijn ##.k.1486 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k468, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 24-1, 0)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k466(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k466, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.input.148.524 23 0)) ((bruijn ##.x.584 46 0) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k467) 'const (##inline ##vcore.car (bruijn ##.input.148.524 23 0))) ((bruijn ##.k.1486 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 23-1, 0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 46-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k467, self)))),
      _V0const,
      VInlineCar2(runtime,
        VGetArg(statics, 23-1, 0)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k476(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k476, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1480 0 0) (bruijn ##.k.1475 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1481 0 0) (##inline ##vcore.qcons 'u16-pointer '(##string ##.string.1781)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0u16__pointer,
        VEncodePointer(&_V10_Dstring_D1781.sym, VPOINTER_OTHER)));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k475(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k475, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1478 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.160.536 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k476) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda78) (bruijn ##.kk.147.523 28 1)) ((bruijn ##.k.1475 3 0) #f)) ((bruijn ##.k.1475 3 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k476, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda78, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k474(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k474, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.160.536 0 0)) ((bruijn ##.x.584 49 0) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k475) 'unsigned-short (##inline ##vcore.car (bruijn ##.expr.160.536 0 0))) ((bruijn ##.k.1475 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 49-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k475, self)))),
      _V0unsigned__short,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k473(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k473, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1476 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k474) (##inline ##vcore.cdr (bruijn ##.input.148.524 25 0))) ((bruijn ##.k.1475 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k474, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 25-1, 0)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k472(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k472, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.input.148.524 24 0)) ((bruijn ##.x.584 47 0) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k473) 'const (##inline ##vcore.car (bruijn ##.input.148.524 24 0))) ((bruijn ##.k.1475 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 24-1, 0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 47-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k473, self)))),
      _V0const,
      VInlineCar2(runtime,
        VGetArg(statics, 24-1, 0)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k482(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k482, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1469 0 0) (bruijn ##.k.1464 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1470 0 0) (##inline ##vcore.qcons 's16-pointer '(##string ##.string.1782)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0s16__pointer,
        VEncodePointer(&_V10_Dstring_D1782.sym, VPOINTER_OTHER)));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k481(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k481, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1467 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.162.538 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k482) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda79) (bruijn ##.kk.147.523 29 1)) ((bruijn ##.k.1464 3 0) #f)) ((bruijn ##.k.1464 3 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k482, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda79, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k480(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k480, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.162.538 0 0)) ((bruijn ##.x.584 50 0) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k481) 'short (##inline ##vcore.car (bruijn ##.expr.162.538 0 0))) ((bruijn ##.k.1464 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 50-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k481, self)))),
      _V0short,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k479(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k479, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1465 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k480) (##inline ##vcore.cdr (bruijn ##.input.148.524 26 0))) ((bruijn ##.k.1464 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k480, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 26-1, 0)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k478(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k478, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.input.148.524 25 0)) ((bruijn ##.x.584 48 0) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k479) 'const (##inline ##vcore.car (bruijn ##.input.148.524 25 0))) ((bruijn ##.k.1464 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 25-1, 0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 48-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k479, self)))),
      _V0const,
      VInlineCar2(runtime,
        VGetArg(statics, 25-1, 0)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k488(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k488, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1458 0 0) (bruijn ##.k.1453 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1459 0 0) (##inline ##vcore.qcons 'u8-pointer '(##string ##.string.1783)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0u8__pointer,
        VEncodePointer(&_V10_Dstring_D1783.sym, VPOINTER_OTHER)));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k487(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k487, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1456 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.164.540 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k488) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda80) (bruijn ##.kk.147.523 30 1)) ((bruijn ##.k.1453 3 0) #f)) ((bruijn ##.k.1453 3 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k488, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda80, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k486(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k486, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.164.540 0 0)) ((bruijn ##.x.584 51 0) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k487) 'unsigned-char (##inline ##vcore.car (bruijn ##.expr.164.540 0 0))) ((bruijn ##.k.1453 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 51-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k487, self)))),
      _V0unsigned__char,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k485(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k485, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1454 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k486) (##inline ##vcore.cdr (bruijn ##.input.148.524 27 0))) ((bruijn ##.k.1453 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k486, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 27-1, 0)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k484(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k484, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.input.148.524 26 0)) ((bruijn ##.x.584 49 0) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k485) 'const (##inline ##vcore.car (bruijn ##.input.148.524 26 0))) ((bruijn ##.k.1453 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 26-1, 0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 49-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k485, self)))),
      _V0const,
      VInlineCar2(runtime,
        VGetArg(statics, 26-1, 0)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k494(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k494, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1447 0 0) (bruijn ##.k.1442 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1448 0 0) (##inline ##vcore.qcons 's8-pointer '(##string ##.string.1784)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0s8__pointer,
        VEncodePointer(&_V10_Dstring_D1784.sym, VPOINTER_OTHER)));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k493(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k493, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1445 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.166.542 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k494) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda81) (bruijn ##.kk.147.523 31 1)) ((bruijn ##.k.1442 3 0) #f)) ((bruijn ##.k.1442 3 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k494, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda81, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k492(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k492, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.166.542 0 0)) ((bruijn ##.x.584 52 0) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k493) 'signed-char (##inline ##vcore.car (bruijn ##.expr.166.542 0 0))) ((bruijn ##.k.1442 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 52-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k493, self)))),
      _V0signed__char,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k491(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k491, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1443 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k492) (##inline ##vcore.cdr (bruijn ##.input.148.524 28 0))) ((bruijn ##.k.1442 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k492, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 28-1, 0)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k490(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k490, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.input.148.524 27 0)) ((bruijn ##.x.584 50 0) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k491) 'const (##inline ##vcore.car (bruijn ##.input.148.524 27 0))) ((bruijn ##.k.1442 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 27-1, 0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 50-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k491, self)))),
      _V0const,
      VInlineCar2(runtime,
        VGetArg(statics, 27-1, 0)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1440 0 0) (##inline ##vcore.qcons 'void-pointer '(##string ##.string.1785)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0void__pointer,
        VEncodePointer(&_V10_Dstring_D1785.sym, VPOINTER_OTHER)));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k495(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k495, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1421 28 0) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda82) (bruijn ##.kk.147.523 28 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 28-1, 0),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda82, self)))),
      VGetArg(statics, 28-1, 1));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k489(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k489, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k490) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k495))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k490, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k495, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k483(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k483, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k484) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k489))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k484, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k489, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k477(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k477, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k478) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k483))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k478, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k483, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k471(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k471, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k472) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k477))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k472, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k477, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k465(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k465, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k466) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k471))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k466, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k471, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k459(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k459, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k460) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k465))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k460, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k465, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k453(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k453, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k454) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k459))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k454, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k459, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k450(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k450, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k451) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k453))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k451, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k453, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k449(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k449, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.584 41 0) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k450) 'signed-char (bruijn ##.input.148.524 18 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 41-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k450, self)))),
      _V0signed__char,
      VGetArg(statics, 18-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k446(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k446, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k447) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k449))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k447, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k449, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k445(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k445, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.584 39 0) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k446) 'unsigned-char (bruijn ##.input.148.524 16 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 39-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k446, self)))),
      _V0unsigned__char,
      VGetArg(statics, 16-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k442(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k442, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k443) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k445))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k443, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k445, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k441(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k441, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.584 37 0) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k442) 'short (bruijn ##.input.148.524 14 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k442, self)))),
      _V0short,
      VGetArg(statics, 14-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k438(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k438, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k439) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k441))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k439, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k441, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k437(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k437, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.584 35 0) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k438) 'unsigned-short (bruijn ##.input.148.524 12 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 35-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k438, self)))),
      _V0unsigned__short,
      VGetArg(statics, 12-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k434(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k434, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k435) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k437))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k435, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k437, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k433(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k433, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.584 33 0) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k434) 'int (bruijn ##.input.148.524 10 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k434, self)))),
      _V0int,
      VGetArg(statics, 10-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k430(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k430, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k431) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k433))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k431, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k433, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k429(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k429, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.584 31 0) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k430) 'double (bruijn ##.input.148.524 8 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k430, self)))),
      _V0double,
      VGetArg(statics, 8-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k426(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k426, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k427) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k429))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k427, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k429, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k425(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k425, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.584 29 0) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k426) 'float (bruijn ##.input.148.524 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k426, self)))),
      _V0float,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k422(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k422, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k423) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k425))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k423, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k425, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k421(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k421, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.584 27 0) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k422) 'void (bruijn ##.input.148.524 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k422, self)))),
      _V0void,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k415(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k415, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k416) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k421))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k416, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k421, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k409(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k409, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k410) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k415))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k410, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k415, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k406(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k406, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k407) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k409))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k407, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k409, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k405(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k405, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.584 23 0) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k406) 'char (bruijn ##.input.148.524 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k406, self)))),
      _V0char,
      _var0);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda63, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.x.583 23 0) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k405) (bruijn ##.type.522 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k405, self)))),
      statics->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k404(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k404, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1420 0 0) (##vcore.call/cc (bruijn ##.k.1419 1 0) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda63)) ((bruijn ##.x.599 6 0) (bruijn ##.k.1419 1 0) (bruijn ##.type.522 1 1) (##inline ##vcore.qcons (##inline ##vcore.qcons '_Bool '(##string ##.string.1786)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'char '(##string ##.string.1787)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'signed-char '(##string ##.string.1788)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'unsigned-char '(##string ##.string.1789)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'short '(##string ##.string.1790)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'unsigned-short '(##string ##.string.1791)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'int '(##string ##.string.1792)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'unsigned-int '(##string ##.string.1792)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'long '(##string ##.string.1792)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'unsigned-long '(##string ##.string.1792)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'long-long '(##string ##.string.1792)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'unsigned-long-long '(##string ##.string.1792)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'double '(##string ##.string.1793)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'float '(##string ##.string.1793)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'VWORD '(##string ##.string.1794)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'c-string '(##string ##.string.1774)) '()))))))))))))))))))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda63, self)))));
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
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k403) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k404))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k403, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k404, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D558_V0k505(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D558_V0k505, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.176.557 4 1) (bruijn ##.k.1632 1 0) (bruijn ##.expr.178.559 2 1) (bruijn ##.x.1633 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      statics->vars[0],
      statics->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D558_V0k504(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D558_V0k504, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.178.559 1 1))) ((bruijn ##.x.577 41 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D558_V0k505) (bruijn ##.args.175.560 1 2)) ((bruijn ##.k.1632 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 41-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D558_V0k505, self)))),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D558_V0k508(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D558_V0k508, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.176.557 7 1) (bruijn ##.k.1626 2 0) (bruijn ##.expr.178.559 5 1) (bruijn ##.x.1628 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      statics->up->vars[0],
      VGetArg(statics, 5-1, 1),
      _var0);
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D558_V0k507(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D558_V0k507, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.577 44 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D558_V0k508) (bruijn ##.args.175.560 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 44-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D558_V0k508, self)))),
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D558_V0lambda87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D558_V0lambda87, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.kk.177.561 0 1) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D558_V0k507) (##inline ##vcore.cdr (bruijn ##.expr.178.559 3 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.178.559 3 1)) (bruijn ##.args.175.560 3 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var1), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D558_V0k507, self)))),
      VInlineCdr2(runtime,
        statics->up->up->vars[1]),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[1]),
        statics->up->up->vars[2]));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D558_V0lambda86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D558_V0lambda86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1625 0 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D558_V0lambda87))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D558_V0lambda87, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D558_V0k506(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D558_V0k506, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1623 1 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D558_V0lambda86) (bruijn ##.loop.558 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D558_V0lambda86, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D558(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D558, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D558_V0k504) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D558_V0k506))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D558_V0k504, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D558_V0k506, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda85, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D558")) (##qualified-call (vanity compiler ffi print-foreign-function ##.loop.558) (bruijn ##.loop.558 0 0) (bruijn ##.k.1622 1 0) (##inline ##vcore.cdr (bruijn ##.expr.173.554 4 0)) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D558, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->up->up->up->vars[0]);
    VWORD _arg2 = 
      VNULL;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D558(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1621 0 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda85))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda85, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k509(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k509, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1637 0 0) (bruijn ##.k.1635 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D567_V0k513(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D567_V0k513, got ~D~N"
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
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D567(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D567, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity compiler ffi get-foreign-decoder) (bruijn ##.get-foreign-decoder.236 17 16) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D567_V0k513) (bruijn ##.arg.568 0 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 17-1, 16));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D567_V0k513, self))));
    VWORD _arg1 = 
      _var1;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k518(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k518, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.602 23 0) (bruijn ##.k.1665 4 0) (##string ##.string.1796))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 2,
      statics->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1796.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda90, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.x.602 23 0) (bruijn ##.k.1668 0 0) (##string ##.string.1797) (bruijn ##.e.570 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1797.sym, VPOINTER_OTHER),
      _var1);
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k517(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k517, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.588 36 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k518) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda90) (bruijn ##.x.1640 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k518, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda90, self)))),
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k516(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k516, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.1722) ((##vcore.+ 1 (bruijn ##.x.1670 1 0))) ((bruijn ##.x.602 21 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k517) (##string ##.string.1798) (bruijn ##.name.555 10 0) (bruijn ##.name.555 10 0) (bruijn ##.reg.1722 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VEncodeInt(1l),
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 5,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k517, self)))),
      VEncodePointer(&_V10_Dstring_D1798.sym, VPOINTER_OTHER),
      VGetArg(statics, 10-1, 0),
      VGetArg(statics, 10-1, 0),
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k527(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k527, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.602 31 0) (bruijn ##.k.1665 12 0) (##string ##.string.1796))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 2,
      VGetArg(statics, 12-1, 0),
      VEncodePointer(&_V10_Dstring_D1796.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda91, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.x.602 31 0) (bruijn ##.k.1677 0 0) (##string ##.string.1797) (bruijn ##.e.572 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1797.sym, VPOINTER_OTHER),
      _var1);
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k526(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k526, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.588 44 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k527) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda91) (bruijn ##.x.1640 14 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 44-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k527, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda91, self)))),
      VGetArg(statics, 14-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k525(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k525, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.1725) ((##vcore.+ 1 (bruijn ##.x.1680 1 0))) ((bruijn ##.x.602 29 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k526) (##string ##.string.1799) (bruijn ##.x.1639 15 0) (bruijn ##.reg.1724 2 0) (bruijn ##.reg.1725 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VEncodeInt(1l),
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 5,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k526, self)))),
      VEncodePointer(&_V10_Dstring_D1799.sym, VPOINTER_OTHER),
      VGetArg(statics, 15-1, 0),
      statics->up->vars[0],
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k524(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k524, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.1724) ((##vcore.+ 1 (bruijn ##.x.1681 1 0))) ((bruijn ##.x.601 28 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k525) (bruijn ##.args.564 15 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VEncodeInt(1l),
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k525, self)))),
      VGetArg(statics, 15-1, 2));
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k523(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k523, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.601 26 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k524) (bruijn ##.args.564 13 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k524, self)))),
      VGetArg(statics, 13-1, 2));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k522(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k522, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.1723) ((##vcore.+ 1 (bruijn ##.x.1683 1 0))) ((bruijn ##.x.602 24 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k523) (##string ##.string.1800) (bruijn ##.x.1639 10 0) (bruijn ##.reg.1723 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VEncodeInt(1l),
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k523, self)))),
      VEncodePointer(&_V10_Dstring_D1800.sym, VPOINTER_OTHER),
      VGetArg(statics, 10-1, 0),
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k521(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k521, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.601 23 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k522) (bruijn ##.args.564 10 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k522, self)))),
      VGetArg(statics, 10-1, 2));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k520(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k520, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.602 21 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k521) (##string ##.string.1796))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k521, self)))),
      VEncodePointer(&_V10_Dstring_D1796.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda92, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.x.602 21 0) (bruijn ##.k.1684 0 0) (##string ##.string.1801) (bruijn ##.e.571 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1801.sym, VPOINTER_OTHER),
      _var1);
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k519(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k519, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.588 34 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k520) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda92) (bruijn ##.x.1640 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k520, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda92, self)))),
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k515(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k515, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.purec?.543 17 1) ((bruijn ##.x.601 20 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k516) (bruijn ##.args.564 7 2)) ((bruijn ##.x.602 19 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k519) (##string ##.string.1802) (bruijn ##.name.555 8 0)))
if(VDecodeBool(
VGetArg(statics, 17-1, 1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k516, self)))),
      VGetArg(statics, 7-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k519, self)))),
      VEncodePointer(&_V10_Dstring_D1802.sym, VPOINTER_OTHER),
      VGetArg(statics, 8-1, 0));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k531(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k531, got ~D~N"
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
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k530(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k530, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1661 1 0) ((bruijn ##.x.602 21 0) (bruijn ##.k.1662 0 0) (##string ##.string.1803) (bruijn ##.name.555 10 0)) (##qualified-call (vanity compiler ffi get-foreign-encoder) (bruijn ##.get-foreign-encoder.235 20 15) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k531) (bruijn ##.ret.553 12 0)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1803.sym, VPOINTER_OTHER),
      VGetArg(statics, 10-1, 0));
} else {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 20-1, 15));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k531, self))));
    VWORD _arg1 = 
      VGetArg(statics, 12-1, 0);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__encoder(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k535(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k535, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler ffi print-foreign-function ##.print-arg.567) (bruijn ##.print-arg.567 8 0) (bruijn ##.k.1655 1 0) (bruijn ##.arg.573 1 1) (bruijn ##.argname.574 1 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 0));
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      statics->vars[2];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D567(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda93, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.x.602 24 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k535) (##string ##.string.1805))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k535, self)))),
      VEncodePointer(&_V10_Dstring_D1805.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k534(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k534, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.588 37 0) (bruijn ##.k.1653 1 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda93) (##inline ##vcore.cdr (bruijn ##.args.564 11 2)) (##inline ##vcore.cdr (bruijn ##.x.1640 7 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 4,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda93, self)))),
      VInlineCdr2(runtime,
        VGetArg(statics, 11-1, 2)),
      VInlineCdr2(runtime,
        VGetArg(statics, 7-1, 0)));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k533(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k533, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.args.564 10 2)) (##qualified-call (vanity compiler ffi print-foreign-function ##.print-arg.567) (bruijn ##.print-arg.567 5 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k534) (##inline ##vcore.car (bruijn ##.args.564 10 2)) (##inline ##vcore.car (bruijn ##.x.1640 6 0))) ((bruijn ##.k.1653 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 10-1, 2)))) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 0));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k534, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        VGetArg(statics, 10-1, 2));
    VWORD _arg2 = 
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 0));
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D567(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k539(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k539, got ~D~N"
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
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k540(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k540, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.602 25 0) (bruijn ##.k.1638 12 0) (##string ##.string.1808))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 2,
      VGetArg(statics, 12-1, 0),
      VEncodePointer(&_V10_Dstring_D1808.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k538(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k538, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k539) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k540))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k539, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k540, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k537(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k537, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k538) (bruijn ##.ret.553 14 0) 'void)
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k538, self)))),
      VGetArg(statics, 14-1, 0),
      _V0void);
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k536(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k536, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.602 22 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k537) (##string ##.string.1809))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k537, self)))),
      VEncodePointer(&_V10_Dstring_D1809.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k532(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k532, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k533) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k536))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k533, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k536, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k529(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k529, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k530) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k532))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k530, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k532, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k528(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k528, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k529) (bruijn ##.ret.553 10 0) 'void)
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k529, self)))),
      VGetArg(statics, 10-1, 0),
      _V0void);
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k514(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k514, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k515) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k528))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k515, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k528, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k512(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k512, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D567")) ((bruijn ##.x.602 17 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k514) (##string ##.string.1810) (##inline ##vcore.car (bruijn ##.expr.171.550 10 0))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D567, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k514, self)))),
      VEncodePointer(&_V10_Dstring_D1810.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        VGetArg(statics, 10-1, 0)));
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k511(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k511, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.600 17 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k512) (bruijn ##.x.1685 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k512, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k510(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k510, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.601 15 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k511) (bruijn ##.args.564 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k511, self)))),
      statics->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler ffi mangle-foreign-function) (bruijn ##.mangle-foreign-function.234 12 14) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k510) (bruijn ##.name.555 2 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 14));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k510, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign__function(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda88, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.563 0 1)) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k509) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda89) (bruijn ##.kk.167.545 9 1)) ((bruijn ##.k.1635 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k509, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda89, self)))),
      VGetArg(statics, 9-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k503(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k503, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1615 7 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda84) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda88))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 7-1, 0),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda84, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda88, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k502(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k502, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.173.554 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k503) (##inline ##vcore.car (bruijn ##.expr.173.554 0 0))) ((bruijn ##.k.1615 6 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k503, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k501(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k501, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k502) (##inline ##vcore.cdr (bruijn ##.expr.172.552 1 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k502, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k500(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k500, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.172.552 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k501) (##inline ##vcore.car (bruijn ##.expr.172.552 0 0))) ((bruijn ##.k.1615 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k501, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k499(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k499, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.171.550 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k500) (##inline ##vcore.cdr (bruijn ##.expr.171.550 0 0))) ((bruijn ##.k.1615 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k500, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k498(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k498, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.170.548 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k499) (##inline ##vcore.cdr (bruijn ##.expr.170.548 0 0))) ((bruijn ##.k.1615 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k499, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k497(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k497, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1616 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k498) (##inline ##vcore.cdr (bruijn ##.expr.544 3 2))) ((bruijn ##.k.1615 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k498, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k496(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k496, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.544 2 2)) ((bruijn ##.x.584 22 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k497) '##foreign.function (##inline ##vcore.car (bruijn ##.expr.544 2 2))) ((bruijn ##.k.1615 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k497, self)))),
      _V10foreign_Dfunction,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k541(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k541, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.579 27 0) (bruijn ##.k.1612 1 0) (##string ##.string.1731))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 2,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1731.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda83, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k496) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k541))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k496, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k541, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call/cc (bruijn ##.k.1611 0 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda83))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda83, self)))));
}
static void _V0vanity_V0compiler_V0ffi_V20_V0k31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_V0k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 18 ((close "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare") (close "_V50_V0vanity_V0compiler_V0ffi_V0find__typedef") (close "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type") (close "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef") (close "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function") (close "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums") (close "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares") (close "_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines") (close "_V50_V0vanity_V0compiler_V0ffi_V0deep__copy") (close "_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function") (close "_V50_V0vanity_V0compiler_V0ffi_V0find__file") (close "_V50_V0vanity_V0compiler_V0ffi_V0get__install__root") (close "_V50_V0vanity_V0compiler_V0ffi_V0make__preprocess__command") (close "_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import") (close "_V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign__function") (close "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__encoder") (close "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder") (close "_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function")) ((bruijn ##.k.576 32 0) (##inline ##vcore.cons (##inline ##vcore.cons 'mangle-foreign-function (bruijn ##.mangle-foreign-function.234 0 14)) (##inline ##vcore.cons (##inline ##vcore.cons 'validate-foreign-function (bruijn ##.validate-foreign-function.229 0 9)) (##inline ##vcore.cons (##inline ##vcore.cons 'print-foreign-function (bruijn ##.print-foreign-function.237 0 17)) (##inline ##vcore.cons (##inline ##vcore.cons 'resolve-foreign-import (bruijn ##.resolve-foreign-import.233 0 13)) (##inline ##vcore.cons (##inline ##vcore.cons 'get-foreign-encoder (bruijn ##.get-foreign-encoder.235 0 15)) (##inline ##vcore.cons (##inline ##vcore.cons 'get-foreign-decoder (bruijn ##.get-foreign-decoder.236 0 16)) '()))))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[18]; } container;
    self = &container.self;
    VInitEnv(self, 18, 18, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare, self))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0find__typedef, self))));
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type, self))));
    self->vars[3] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef, self))));
    self->vars[4] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function, self))));
    self->vars[5] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums, self))));
    self->vars[6] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares, self))));
    self->vars[7] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines, self))));
    self->vars[8] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0deep__copy, self))));
    self->vars[9] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function, self))));
    self->vars[10] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0find__file, self))));
    self->vars[11] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__install__root, self))));
    self->vars[12] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0make__preprocess__command, self))));
    self->vars[13] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import, self))));
    self->vars[14] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign__function, self))));
    self->vars[15] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__encoder, self))));
    self->vars[16] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder, self))));
    self->vars[17] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function, self))));
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
static void _V0vanity_V0compiler_V0ffi_V20_V0k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_V0k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 25 0) (close _V0vanity_V0compiler_V0ffi_V20_V0k31) 'printf)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_V0k31, self)))),
      _V0printf);
}
static void _V0vanity_V0compiler_V0ffi_V20_V0k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_V0k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 24 0) (close _V0vanity_V0compiler_V0ffi_V20_V0k30) 'length)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_V0k30, self)))),
      _V0length);
}
static void _V0vanity_V0compiler_V0ffi_V20_V0k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_V0k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 23 0) (close _V0vanity_V0compiler_V0ffi_V20_V0k29) 'iota)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_V0k29, self)))),
      _V0iota);
}
static void _V0vanity_V0compiler_V0ffi_V20_V0k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_V0k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 22 0) (close _V0vanity_V0compiler_V0ffi_V20_V0k28) 'assv)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_V0k28, self)))),
      _V0assv);
}
static void _V0vanity_V0compiler_V0ffi_V20_V0k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_V0k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 21 0) (close _V0vanity_V0compiler_V0ffi_V20_V0k27) 'close-port)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_V0k27, self)))),
      _V0close__port);
}
static void _V0vanity_V0compiler_V0ffi_V20_V0k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_V0k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 20 0) (close _V0vanity_V0compiler_V0ffi_V20_V0k26) 'platform)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_V0k26, self)))),
      _V0platform);
}
static void _V0vanity_V0compiler_V0ffi_V20_V0k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_V0k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 19 0) (close _V0vanity_V0compiler_V0ffi_V20_V0k25) 'gcc-path)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_V0k25, self)))),
      _V0gcc__path);
}
static void _V0vanity_V0compiler_V0ffi_V20_V0k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_V0k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 18 0) (close _V0vanity_V0compiler_V0ffi_V20_V0k24) 'install-root)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_V0k24, self)))),
      _V0install__root);
}
static void _V0vanity_V0compiler_V0ffi_V20_V0k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_V0k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 17 0) (close _V0vanity_V0compiler_V0ffi_V20_V0k23) 'sprintf)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_V0k23, self)))),
      _V0sprintf);
}
static void _V0vanity_V0compiler_V0ffi_V20_V0k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_V0k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 16 0) (close _V0vanity_V0compiler_V0ffi_V20_V0k22) 'file-exists?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_V0k22, self)))),
      _V0file__exists_Q);
}
static void _V0vanity_V0compiler_V0ffi_V20_V0k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_V0k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 15 0) (close _V0vanity_V0compiler_V0ffi_V20_V0k21) 'cdadr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_V0k21, self)))),
      _V0cdadr);
}
static void _V0vanity_V0compiler_V0ffi_V20_V0k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_V0k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 14 0) (close _V0vanity_V0compiler_V0ffi_V20_V0k20) 'cdddr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_V0k20, self)))),
      _V0cdddr);
}
static void _V0vanity_V0compiler_V0ffi_V20_V0k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_V0k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 13 0) (close _V0vanity_V0compiler_V0ffi_V20_V0k19) 'caddr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_V0k19, self)))),
      _V0caddr);
}
static void _V0vanity_V0compiler_V0ffi_V20_V0k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_V0k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 12 0) (close _V0vanity_V0compiler_V0ffi_V20_V0k18) 'member)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_V0k18, self)))),
      _V0member);
}
static void _V0vanity_V0compiler_V0ffi_V20_V0k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_V0k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 11 0) (close _V0vanity_V0compiler_V0ffi_V20_V0k17) 'for-each)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_V0k17, self)))),
      _V0for__each);
}
static void _V0vanity_V0compiler_V0ffi_V20_V0k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_V0k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 10 0) (close _V0vanity_V0compiler_V0ffi_V20_V0k16) 'compiler-error)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_V0k16, self)))),
      _V0compiler__error);
}
static void _V0vanity_V0compiler_V0ffi_V20_V0k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_V0k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 9 0) (close _V0vanity_V0compiler_V0ffi_V20_V0k15) 'caddar)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_V0k15, self)))),
      _V0caddar);
}
static void _V0vanity_V0compiler_V0ffi_V20_V0k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_V0k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 8 0) (close _V0vanity_V0compiler_V0ffi_V20_V0k14) 'memv)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_V0k14, self)))),
      _V0memv);
}
static void _V0vanity_V0compiler_V0ffi_V20_V0k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_V0k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 7 0) (close _V0vanity_V0compiler_V0ffi_V20_V0k13) 'equal?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_V0k13, self)))),
      _V0equal_Q);
}
static void _V0vanity_V0compiler_V0ffi_V20_V0k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_V0k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 6 0) (close _V0vanity_V0compiler_V0ffi_V20_V0k12) 'cadr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_V0k12, self)))),
      _V0cadr);
}
static void _V0vanity_V0compiler_V0ffi_V20_V0k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_V0k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 5 0) (close _V0vanity_V0compiler_V0ffi_V20_V0k11) 'cadar)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_V0k11, self)))),
      _V0cadar);
}
static void _V0vanity_V0compiler_V0ffi_V20_V0k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_V0k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 4 0) (close _V0vanity_V0compiler_V0ffi_V20_V0k10) 'caar)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_V0k10, self)))),
      _V0caar);
}
static void _V0vanity_V0compiler_V0ffi_V20_V0k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_V0k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 3 0) (close _V0vanity_V0compiler_V0ffi_V20_V0k9) 'list)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_V0k9, self)))),
      _V0list);
}
static void _V0vanity_V0compiler_V0ffi_V20_V0k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_V0k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 2 0) (close _V0vanity_V0compiler_V0ffi_V20_V0k8) 'error)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_V0k8, self)))),
      _V0error);
}
static void _V0vanity_V0compiler_V0ffi_V20_V0k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_V0k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 1 0) (close _V0vanity_V0compiler_V0ffi_V20_V0k7) 'map)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_V0k7, self)))),
      _V0map);
}
static void _V0vanity_V0compiler_V0ffi_V20_V0k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 0 0) (close _V0vanity_V0compiler_V0ffi_V20_V0k6) 'reverse)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_V0k6, self)))),
      _V0reverse);
}
static void _V0vanity_V0compiler_V0ffi_V20_V0k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_V0k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.make-import (close _V0vanity_V0compiler_V0ffi_V20_V0k5) (##string ##.string.1811) (bruijn ##.x.1698 3 0) (bruijn ##.x.1699 2 0) (bruijn ##.x.1700 1 0) (bruijn ##.x.1701 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMakeImport2, 6,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_V0k5, self)))),
      VEncodePointer(&_V10_Dstring_D1811.sym, VPOINTER_OTHER),
      statics->up->up->vars[0],
      statics->up->vars[0],
      statics->vars[0],
      _var0);
}
static void _V0vanity_V0compiler_V0ffi_V20_V0k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_V0k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0ffi_V20_V0k4) (##string ##.string.1812))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_V0k4, self)))),
      VEncodePointer(&_V10_Dstring_D1812.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0ffi_V20_V0k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_V0k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0ffi_V20_V0k3) (##string ##.string.1813))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_V0k3, self)))),
      VEncodePointer(&_V10_Dstring_D1813.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0ffi_V20_V0k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0ffi_V20_V0k2) (##string ##.string.1814))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_V0k2, self)))),
      VEncodePointer(&_V10_Dstring_D1814.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0ffi_V20_V0lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_V0lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0ffi_V20_V0k1) (##string ##.string.1815))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D1815.sym, VPOINTER_OTHER));
}
VFunc _V0vanity_V0compiler_V0ffi_V20 = (VFunc)_V0vanity_V0compiler_V0ffi_V20_V0lambda1;
