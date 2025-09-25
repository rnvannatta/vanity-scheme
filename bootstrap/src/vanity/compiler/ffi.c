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
VBlob * VInternSymbol(int hash, VBlob * sym);


static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1869 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1868 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D1867 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D1866 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "_V0vanity_V0compiler_V0config_V20" };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D1865 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "_V0vanity_V0compiler_V0ffi_V20" };
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
VWEAK VWORD _V0mangle__foreign__closure;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V0mangle__foreign__closure = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "mangle-foreign-closure" };
VWEAK VWORD _V0mangle__foreign__basic;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V0mangle__foreign__basic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "mangle-foreign-basic" };
VWEAK VWORD _V0mangle__foreign__function;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V0mangle__foreign__function = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "mangle-foreign-function" };
VWEAK VWORD _V0mangle__foreign;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0mangle__foreign = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "mangle-foreign" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1864 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "~A;~N" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1863 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "));~N" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D1862 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "  }~N}~N" };
static struct { VBlob sym; char bytes[51]; } _V10_Dstring_D1861 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 51 }, "static VWORD ~A(VRuntime * runtime, VEnv * statics" };
static struct { VBlob sym; char bytes[96]; } _V10_Dstring_D1860 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 96 }, "static VClosure ~A = { .base.tag = VCLOSURE, .base.flags = VFLAG_STATIC, .func = (VFunc)~A };~N" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D1859 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "));~N}~N" };
static struct { VBlob sym; char bytes[25]; } _V10_Dstring_D1858 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 25 }, ");~N  return VVOID;~N}~N" };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D1857 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "  return ~A(~A(" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1856 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "  ~A(" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D1855 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "  V_BOUNCE(_k, runtime, _ret);~N" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D1854 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "  V_BOUNCE(_k, runtime, VVOID);~N" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1853 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, ", " };
static struct { VBlob sym; char bytes[24]; } _V10_Dstring_D1852 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "    VWORD _ret = ~A(~A(" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D1851 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "(~A(" };
static struct { VBlob sym; char bytes[46]; } _V10_Dstring_D1850 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 46 }, "static void _V30~A_shim(V_CORE_ARGS, VWORD _k" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D1849 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, ", VWORD _arg~A" };
static struct { VBlob sym; char bytes[43]; } _V10_Dstring_D1848 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 43 }, "  V_ARG_CHECK3(runtime, \"~A\", ~A, argc);~N" };
static struct { VBlob sym; char bytes[62]; } _V10_Dstring_D1847 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 62 }, "  V_GC_CHECK2_VARARGS((VFunc)~A, runtime, statics, ~A, ~A, _k" };
static struct { VBlob sym; char bytes[56]; } _V10_Dstring_D1846 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 56 }, "static V_BEGIN_FUNC(_V30~A_shim, \"_V30~A_shim\", ~A, _k " };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D1845 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, ", _arg~A" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1844 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, ") {~N" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D1843 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "~A(runtime, _arg~A, \"~A\")" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1842 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "VCheckedDecodeVWORD2" };
static struct { VBlob sym; char bytes[22]; } _V10_Dstring_D1841 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "VCheckedDecodeNumber2" };
static struct { VBlob sym; char bytes[19]; } _V10_Dstring_D1840 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, "VCheckedDecodeInt2" };
static struct { VBlob sym; char bytes[29]; } _V10_Dstring_D1839 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 29 }, "VCheckedDecodeUnsignedShort2" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1838 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "VCheckedDecodeShort2" };
static struct { VBlob sym; char bytes[28]; } _V10_Dstring_D1837 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 28 }, "VCheckedDecodeUnsignedChar2" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D1836 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "VCheckedDecodeSignedChar2" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D1835 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "VCheckedDecodeChar2" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D1834 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "VCheckedDecodeBool2" };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D1833 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "VCheckedDecodeForeignPointer2" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D1832 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "VCheckedDecodeS8Ptr" };
VWEAK VWORD _V0s8__pointer;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0s8__pointer = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "s8-pointer" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D1831 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "VCheckedDecodeU8Ptr" };
VWEAK VWORD _V0u8__pointer;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0u8__pointer = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "u8-pointer" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1830 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "VCheckedDecodeS16Ptr" };
VWEAK VWORD _V0s16__pointer;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0s16__pointer = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "s16-pointer" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1829 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "VCheckedDecodeU16Ptr" };
VWEAK VWORD _V0u16__pointer;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0u16__pointer = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "u16-pointer" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1828 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "VCheckedDecodeS32Ptr" };
VWEAK VWORD _V0s32__pointer;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0s32__pointer = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "s32-pointer" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1827 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "VCheckedDecodeF64Ptr" };
VWEAK VWORD _V0f64__pointer;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0f64__pointer = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "f64-pointer" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1826 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "VCheckedDecodeF32Ptr" };
VWEAK VWORD _V0f32__pointer;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0f32__pointer = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "f32-pointer" };
static struct { VBlob sym; char bytes[23]; } _V10_Dstring_D1825 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, "VCheckedDecodeVoidPtr2" };
static struct { VBlob sym; char bytes[28]; } _V10_Dstring_D1824 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 28 }, "VCheckedDecodeConstVoidPtr2" };
VWEAK VWORD _V0const__void__pointer;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0const__void__pointer = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "const-void-pointer" };
static struct { VBlob sym; char bytes[28]; } _V10_Dstring_D1823 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 28 }, "VCheckedDecodeConstCString2" };
VWEAK VWORD _V0const__c__string;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0const__c__string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "const-c-string" };
static struct { VBlob sym; char bytes[23]; } _V10_Dstring_D1822 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, "VCheckedDecodeCString2" };
VWEAK VWORD _V0c__string;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0c__string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "c-string" };
VWEAK VWORD _V0VWORD;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0VWORD = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "VWORD" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D1821 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VEncodeDouble" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D1820 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VEncodeInt" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D1819 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VEncodeChar" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D1818 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VEncodeBool" };
static struct { VBlob sym; char bytes[22]; } _V10_Dstring_D1817 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "VEncodeForeignPointer" };
VWEAK VWORD _V0void__pointer;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0void__pointer = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "void-pointer" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D1816 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "_V30~A_closure" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D1815 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "_V30~A_shim" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D1814 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "_V30~A_shim_basic" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D1813 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "_V30~A" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1812 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "VForeignParseHeaderC" };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D1811 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "Invalid foreign import syntax" };
VWEAK VWORD _V10foreign_Dimport;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V10foreign_Dimport = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "##foreign.import" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D1810 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "#include <~A>\n" };
VWEAK VWORD _V10foreign_Ddeclare;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10foreign_Ddeclare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##foreign.declare" };
static struct { VBlob sym; char bytes[22]; } _V10_Dstring_D1809 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "File must be a string" };
VWEAK VWORD _V0windows;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0windows = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "windows" };
static struct { VBlob sym; char bytes[73]; } _V10_Dstring_D1808 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 73 }, "\"~A\" -E -P -undef -std=c11 -nostdinc -D__VANITY__ -w \"~A\" -I \"~A/~A/~A/\"" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1807 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "include/vscheme/stdc" };
static struct { VBlob sym; char bytes[75]; } _V10_Dstring_D1806 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 75 }, "\"\"~A\" -E -P -undef -std=c11 -nostdinc -D__VANITY__ -w \"~A\" -I \"~A/~A/~A/\"\"" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D1805 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "VExePath" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D1804 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "~A/../" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1803 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "~A/~A" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D1802 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "Unable to open header file" };
static struct { VBlob sym; char bytes[19]; } _V10_Dstring_D1801 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, "VForeignParseDeclC" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1800 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "VForeignReleaseParse" };
static struct { VBlob sym; char bytes[32]; } _V10_Dstring_D1799 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 32 }, "Invalid foreign function syntax" };
static struct { VBlob sym; char bytes[38]; } _V10_Dstring_D1798 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 38 }, "Unsupported foreign function language" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D1797 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "Declaration is not a single function" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D1796 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "naked_declaration" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D1795 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "unknown entry in ffi table" };
VWEAK VWORD _V0define__constant;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0define__constant = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "define-constant" };
static struct { VBlob sym; char bytes[40]; } _V10_Dstring_D1794 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 40 }, "variable redeclared as different symbol" };
static struct { VBlob sym; char bytes[1]; } _V10_Dstring_D1793 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 1 }, "" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D1792 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "C" };
VWEAK VWORD _V10foreign_Dfunction;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10foreign_Dfunction = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##foreign.function" };
VWEAK VWORD _V0define;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0define = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "define" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D1791 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "typedef" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D1790 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "declaration" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D1789 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "toplevel" };
VWEAK VWORD _V0enum;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0enum = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "enum" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D1788 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "Unsupported C declaration" };
static struct { VBlob sym; char bytes[43]; } _V10_Dstring_D1787 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 43 }, "Unsupported arg type in C foreign-function" };
static struct { VBlob sym; char bytes[38]; } _V10_Dstring_D1786 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 38 }, "Not a simple function declaration: ~A" };
static struct { VBlob sym; char bytes[46]; } _V10_Dstring_D1785 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 46 }, "Unsupported return type in C foreign-function" };
static struct { VBlob sym; char bytes[22]; } _V10_Dstring_D1784 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "Unsupported C typedef" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1783 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "Not a simple typedef" };
VWEAK VWORD _V0restrict;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0restrict = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "restrict" };
VWEAK VWORD _V0static;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0static = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "static" };
static struct { VBlob sym; char bytes[40]; } _V10_Dstring_D1782 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 40 }, "Can only have one type in a declaration" };
static struct { VBlob sym; char bytes[43]; } _V10_Dstring_D1781 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 43 }, "Multiple storage specifiers in declaration" };
static struct { VBlob sym; char bytes[44]; } _V10_Dstring_D1780 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 44 }, "Unexpected storage specifier in declaration" };
VWEAK VWORD _V0extern;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0extern = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "extern" };
VWEAK VWORD _V0register;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0register = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "register" };
VWEAK VWORD _V0auto;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0auto = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "auto" };
VWEAK VWORD _V0volatile;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0volatile = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "volatile" };
VWEAK VWORD _V0signed;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0signed = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "signed" };
VWEAK VWORD _V0unsigned;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0unsigned = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "unsigned" };
VWEAK VWORD _V0longs;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0longs = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "longs" };
VWEAK VWORD _V0special;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0special = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "special" };
static struct { VBlob sym; char bytes[29]; } _V10_Dstring_D1779 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 29 }, "unsupported type combination" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D1778 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "enum" };
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
static struct { VBlob sym; char bytes[17]; } _V10_Dstring_D1777 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "unknown typename" };
VWEAK VWORD _V0_UBool;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0_UBool = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "_Bool" };
VWEAK VWORD _V0double;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0double = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "double" };
VWEAK VWORD _V0float;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0float = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "float" };
VWEAK VWORD _V0void;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0void = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "void" };
VWEAK VWORD _V0variable;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0variable = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "variable" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D1776 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "match statement exhausted" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D1775 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "static-array" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1774 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "array" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D1773 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "pointer" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D1772 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "parameter_list" };
VWEAK VWORD _V0function;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0function = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "function" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D1771 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "function" };
VWEAK VWORD _V0array;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0array = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "array" };
VWEAK VWORD _V0pointer;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0pointer = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "pointer" };
VWEAK VWORD _V0const;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0const = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "const" };
static __attribute__((constructor)) void VDllMain1() {
  _V0reverse = VEncodePointer(VInternSymbol(418515197, &_VW_V0reverse.sym), VPOINTER_OTHER);
  _V0map = VEncodePointer(VInternSymbol(-1940887657, &_VW_V0map.sym), VPOINTER_OTHER);
  _V0error = VEncodePointer(VInternSymbol(147890691, &_VW_V0error.sym), VPOINTER_OTHER);
  _V0list = VEncodePointer(VInternSymbol(-1594870040, &_VW_V0list.sym), VPOINTER_OTHER);
  _V0caar = VEncodePointer(VInternSymbol(-610927850, &_VW_V0caar.sym), VPOINTER_OTHER);
  _V0cadar = VEncodePointer(VInternSymbol(545720329, &_VW_V0cadar.sym), VPOINTER_OTHER);
  _V0cadr = VEncodePointer(VInternSymbol(137264287, &_VW_V0cadr.sym), VPOINTER_OTHER);
  _V0equal_Q = VEncodePointer(VInternSymbol(1746439164, &_VW_V0equal_Q.sym), VPOINTER_OTHER);
  _V0memv = VEncodePointer(VInternSymbol(157128241, &_VW_V0memv.sym), VPOINTER_OTHER);
  _V0caddar = VEncodePointer(VInternSymbol(-974166901, &_VW_V0caddar.sym), VPOINTER_OTHER);
  _V0compiler__error = VEncodePointer(VInternSymbol(1345485686, &_VW_V0compiler__error.sym), VPOINTER_OTHER);
  _V0for__each = VEncodePointer(VInternSymbol(1903158638, &_VW_V0for__each.sym), VPOINTER_OTHER);
  _V0member = VEncodePointer(VInternSymbol(1983509194, &_VW_V0member.sym), VPOINTER_OTHER);
  _V0caddr = VEncodePointer(VInternSymbol(396082650, &_VW_V0caddr.sym), VPOINTER_OTHER);
  _V0cdddr = VEncodePointer(VInternSymbol(584415821, &_VW_V0cdddr.sym), VPOINTER_OTHER);
  _V0cdadr = VEncodePointer(VInternSymbol(-1987367307, &_VW_V0cdadr.sym), VPOINTER_OTHER);
  _V0file__exists_Q = VEncodePointer(VInternSymbol(-859422530, &_VW_V0file__exists_Q.sym), VPOINTER_OTHER);
  _V0sprintf = VEncodePointer(VInternSymbol(1933004612, &_VW_V0sprintf.sym), VPOINTER_OTHER);
  _V0install__root = VEncodePointer(VInternSymbol(-197696181, &_VW_V0install__root.sym), VPOINTER_OTHER);
  _V0gcc__path = VEncodePointer(VInternSymbol(-1275049822, &_VW_V0gcc__path.sym), VPOINTER_OTHER);
  _V0platform = VEncodePointer(VInternSymbol(546385074, &_VW_V0platform.sym), VPOINTER_OTHER);
  _V0close__port = VEncodePointer(VInternSymbol(-1573046396, &_VW_V0close__port.sym), VPOINTER_OTHER);
  _V0assv = VEncodePointer(VInternSymbol(-1259600321, &_VW_V0assv.sym), VPOINTER_OTHER);
  _V0iota = VEncodePointer(VInternSymbol(786799409, &_VW_V0iota.sym), VPOINTER_OTHER);
  _V0length = VEncodePointer(VInternSymbol(-1077292005, &_VW_V0length.sym), VPOINTER_OTHER);
  _V0printf = VEncodePointer(VInternSymbol(202546882, &_VW_V0printf.sym), VPOINTER_OTHER);
  _V0get__foreign__decoder = VEncodePointer(VInternSymbol(1753899344, &_VW_V0get__foreign__decoder.sym), VPOINTER_OTHER);
  _V0get__foreign__encoder = VEncodePointer(VInternSymbol(968618603, &_VW_V0get__foreign__encoder.sym), VPOINTER_OTHER);
  _V0resolve__foreign__import = VEncodePointer(VInternSymbol(2007844216, &_VW_V0resolve__foreign__import.sym), VPOINTER_OTHER);
  _V0print__foreign__function = VEncodePointer(VInternSymbol(451191322, &_VW_V0print__foreign__function.sym), VPOINTER_OTHER);
  _V0validate__foreign__function = VEncodePointer(VInternSymbol(-1118368169, &_VW_V0validate__foreign__function.sym), VPOINTER_OTHER);
  _V0mangle__foreign__closure = VEncodePointer(VInternSymbol(1252962186, &_VW_V0mangle__foreign__closure.sym), VPOINTER_OTHER);
  _V0mangle__foreign__basic = VEncodePointer(VInternSymbol(1075834746, &_VW_V0mangle__foreign__basic.sym), VPOINTER_OTHER);
  _V0mangle__foreign__function = VEncodePointer(VInternSymbol(-536693803, &_VW_V0mangle__foreign__function.sym), VPOINTER_OTHER);
  _V0mangle__foreign = VEncodePointer(VInternSymbol(646216672, &_VW_V0mangle__foreign.sym), VPOINTER_OTHER);
  _V0s8__pointer = VEncodePointer(VInternSymbol(293730729, &_VW_V0s8__pointer.sym), VPOINTER_OTHER);
  _V0u8__pointer = VEncodePointer(VInternSymbol(1902548842, &_VW_V0u8__pointer.sym), VPOINTER_OTHER);
  _V0s16__pointer = VEncodePointer(VInternSymbol(723565652, &_VW_V0s16__pointer.sym), VPOINTER_OTHER);
  _V0u16__pointer = VEncodePointer(VInternSymbol(-1151448616, &_VW_V0u16__pointer.sym), VPOINTER_OTHER);
  _V0s32__pointer = VEncodePointer(VInternSymbol(202109302, &_VW_V0s32__pointer.sym), VPOINTER_OTHER);
  _V0f64__pointer = VEncodePointer(VInternSymbol(-1083710135, &_VW_V0f64__pointer.sym), VPOINTER_OTHER);
  _V0f32__pointer = VEncodePointer(VInternSymbol(991239523, &_VW_V0f32__pointer.sym), VPOINTER_OTHER);
  _V0const__void__pointer = VEncodePointer(VInternSymbol(-1685357267, &_VW_V0const__void__pointer.sym), VPOINTER_OTHER);
  _V0const__c__string = VEncodePointer(VInternSymbol(-1155998464, &_VW_V0const__c__string.sym), VPOINTER_OTHER);
  _V0c__string = VEncodePointer(VInternSymbol(1227634575, &_VW_V0c__string.sym), VPOINTER_OTHER);
  _V0VWORD = VEncodePointer(VInternSymbol(2093109341, &_VW_V0VWORD.sym), VPOINTER_OTHER);
  _V0void__pointer = VEncodePointer(VInternSymbol(1413929310, &_VW_V0void__pointer.sym), VPOINTER_OTHER);
  _V10foreign_Dimport = VEncodePointer(VInternSymbol(-290361928, &_VW_V10foreign_Dimport.sym), VPOINTER_OTHER);
  _V10foreign_Ddeclare = VEncodePointer(VInternSymbol(1017231288, &_VW_V10foreign_Ddeclare.sym), VPOINTER_OTHER);
  _V0windows = VEncodePointer(VInternSymbol(689389284, &_VW_V0windows.sym), VPOINTER_OTHER);
  _V0define__constant = VEncodePointer(VInternSymbol(471311928, &_VW_V0define__constant.sym), VPOINTER_OTHER);
  _V10foreign_Dfunction = VEncodePointer(VInternSymbol(1321977372, &_VW_V10foreign_Dfunction.sym), VPOINTER_OTHER);
  _V0define = VEncodePointer(VInternSymbol(-1044656496, &_VW_V0define.sym), VPOINTER_OTHER);
  _V0enum = VEncodePointer(VInternSymbol(-1607632426, &_VW_V0enum.sym), VPOINTER_OTHER);
  _V0restrict = VEncodePointer(VInternSymbol(-587744404, &_VW_V0restrict.sym), VPOINTER_OTHER);
  _V0static = VEncodePointer(VInternSymbol(258708560, &_VW_V0static.sym), VPOINTER_OTHER);
  _V0extern = VEncodePointer(VInternSymbol(-1347183264, &_VW_V0extern.sym), VPOINTER_OTHER);
  _V0register = VEncodePointer(VInternSymbol(-1208819961, &_VW_V0register.sym), VPOINTER_OTHER);
  _V0auto = VEncodePointer(VInternSymbol(301920025, &_VW_V0auto.sym), VPOINTER_OTHER);
  _V0volatile = VEncodePointer(VInternSymbol(-1351859124, &_VW_V0volatile.sym), VPOINTER_OTHER);
  _V0signed = VEncodePointer(VInternSymbol(-960594618, &_VW_V0signed.sym), VPOINTER_OTHER);
  _V0unsigned = VEncodePointer(VInternSymbol(-1736165284, &_VW_V0unsigned.sym), VPOINTER_OTHER);
  _V0longs = VEncodePointer(VInternSymbol(163504664, &_VW_V0longs.sym), VPOINTER_OTHER);
  _V0special = VEncodePointer(VInternSymbol(356300345, &_VW_V0special.sym), VPOINTER_OTHER);
  _V0unsigned__short = VEncodePointer(VInternSymbol(1948501763, &_VW_V0unsigned__short.sym), VPOINTER_OTHER);
  _V0short = VEncodePointer(VInternSymbol(1096919460, &_VW_V0short.sym), VPOINTER_OTHER);
  _V0unsigned__long__long = VEncodePointer(VInternSymbol(-805357021, &_VW_V0unsigned__long__long.sym), VPOINTER_OTHER);
  _V0long__long = VEncodePointer(VInternSymbol(-1483639818, &_VW_V0long__long.sym), VPOINTER_OTHER);
  _V0unsigned__long = VEncodePointer(VInternSymbol(595821848, &_VW_V0unsigned__long.sym), VPOINTER_OTHER);
  _V0long = VEncodePointer(VInternSymbol(-619595, &_VW_V0long.sym), VPOINTER_OTHER);
  _V0unsigned__int = VEncodePointer(VInternSymbol(-1271898789, &_VW_V0unsigned__int.sym), VPOINTER_OTHER);
  _V0int = VEncodePointer(VInternSymbol(-143632445, &_VW_V0int.sym), VPOINTER_OTHER);
  _V0signed__char = VEncodePointer(VInternSymbol(-744970839, &_VW_V0signed__char.sym), VPOINTER_OTHER);
  _V0unsigned__char = VEncodePointer(VInternSymbol(842737144, &_VW_V0unsigned__char.sym), VPOINTER_OTHER);
  _V0char = VEncodePointer(VInternSymbol(273258773, &_VW_V0char.sym), VPOINTER_OTHER);
  _V0typedef = VEncodePointer(VInternSymbol(1481779009, &_VW_V0typedef.sym), VPOINTER_OTHER);
  _V0_UBool = VEncodePointer(VInternSymbol(782772753, &_VW_V0_UBool.sym), VPOINTER_OTHER);
  _V0double = VEncodePointer(VInternSymbol(-860986649, &_VW_V0double.sym), VPOINTER_OTHER);
  _V0float = VEncodePointer(VInternSymbol(-526811627, &_VW_V0float.sym), VPOINTER_OTHER);
  _V0void = VEncodePointer(VInternSymbol(-426423146, &_VW_V0void.sym), VPOINTER_OTHER);
  _V0variable = VEncodePointer(VInternSymbol(1686232624, &_VW_V0variable.sym), VPOINTER_OTHER);
  _V0function = VEncodePointer(VInternSymbol(-30696130, &_VW_V0function.sym), VPOINTER_OTHER);
  _V0array = VEncodePointer(VInternSymbol(1825404441, &_VW_V0array.sym), VPOINTER_OTHER);
  _V0pointer = VEncodePointer(VInternSymbol(665170373, &_VW_V0pointer.sym), VPOINTER_OTHER);
  _V0const = VEncodePointer(VInternSymbol(1326696831, &_VW_V0const.sym), VPOINTER_OTHER);
}
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D575, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D564, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__encoder, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign__closure, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign__function, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign__basic, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0make__preprocess__command, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0get__install__root, _var0);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0find__file, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0deep__copy, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D440, _var0, _var1, _var2, _var3, _var4);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V10_Dloop_D435, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D417, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D412, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7, _var8);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dmaybe__string___Gsymbol_D306, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dappend__const_D305, _var0, _var1, _var2);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304, _var0);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0reduce__type, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D299, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0find__typedef, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V10_Dloop_D276, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D245, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D244, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare, _var0, _var1, _var2, _var3);
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D244_V0k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D244_V0k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.624 0 0) (bruijn ##.k.620 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D244_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D244_V0lambda3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.625 0 0) (##inline ##vcore.car (bruijn ##.expr.3.251 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCar2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D244_V0k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D244_V0k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.3.251 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.3.251 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D244_V0k35) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D244_V0lambda3) (bruijn ##.kk.0.248 3 1)) ((bruijn ##.k.620 2 0) #f)) ((bruijn ##.k.620 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D244_V0k35, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D244_V0lambda3, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D244_V0k33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D244_V0k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.621 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D244_V0k34) (##inline ##vcore.cdr (bruijn ##.x.247 3 1))) ((bruijn ##.k.620 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D244_V0k34, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D244_V0k32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D244_V0k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.x.247 2 1)) ((bruijn ##.x.595 24 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D244_V0k33) 'const (##inline ##vcore.car (bruijn ##.x.247 2 1))) ((bruijn ##.k.620 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D244_V0k33, self)))),
      _V0const,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D244_V0lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D244_V0lambda4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.618 0 0) (bruijn ##.x.247 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D244_V0k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D244_V0k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.616 1 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D244_V0lambda4) (bruijn ##.kk.0.248 1 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D244_V0lambda4, self)))),
      statics->vars[1]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D244_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D244_V0lambda2, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D244_V0k32) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D244_V0k36))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D244_V0k32, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D244_V0k36, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D244(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D244, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.k.615 0 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D244_V0lambda2))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D244_V0lambda2, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D245_V0k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D245_V0k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.628 7 0) (##inline ##vcore.cons (bruijn ##.x.630 1 0) (bruijn ##.x.631 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VInlineCons2(runtime,
        statics->vars[0],
        _var0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D245_V0k42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D245_V0k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler ffi reduce-declare ##.reduce-args.245) (bruijn ##.reduce-args.245 7 1) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D245_V0k43) (##inline ##vcore.cdr (bruijn ##.args.253 6 1)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 1));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D245_V0k43, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 1));
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D245(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D245_V0k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D245_V0k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.642 0 0) (bruijn ##.k.637 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D245_V0lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D245_V0lambda6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.591 37 0) (bruijn ##.k.643 0 0) 'pointer (##inline ##vcore.car (bruijn ##.expr.8.260 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 3,
      _var0,
      _V0pointer,
      VInlineCar2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D245_V0k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D245_V0k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.8.260 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.8.260 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D245_V0k48) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D245_V0lambda6) (bruijn ##.kk.4.255 4 1)) ((bruijn ##.k.637 3 0) #f)) ((bruijn ##.k.637 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D245_V0k48, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D245_V0lambda6, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D245_V0k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D245_V0k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.7.258 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D245_V0k47) (##inline ##vcore.cdr (bruijn ##.expr.7.258 0 0))) ((bruijn ##.k.637 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D245_V0k47, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D245_V0k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D245_V0k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.638 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D245_V0k46) (##inline ##vcore.cdr (bruijn ##.arg.254 3 0))) ((bruijn ##.k.637 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D245_V0k46, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D245_V0k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D245_V0k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.arg.254 2 0)) ((bruijn ##.x.595 29 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D245_V0k45) 'array (##inline ##vcore.car (bruijn ##.arg.254 2 0))) ((bruijn ##.k.637 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D245_V0k45, self)))),
      _V0array,
      VInlineCar2(runtime,
        statics->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D245_V0lambda7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D245_V0lambda7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.635 0 0) (bruijn ##.arg.254 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D245_V0k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D245_V0k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.633 1 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D245_V0lambda7) (bruijn ##.kk.4.255 1 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D245_V0lambda7, self)))),
      statics->vars[1]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D245_V0lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D245_V0lambda5, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D245_V0k44) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D245_V0k49))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D245_V0k44, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D245_V0k49, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D245_V0k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D245_V0k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D245_V0k42) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D245_V0lambda5))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D245_V0k42, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D245_V0lambda5, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D245_V0k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D245_V0k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.594 27 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D245_V0k41) (bruijn ##.x.646 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D245_V0k41, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D245_V0k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D245_V0k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler ffi reduce-declare) (bruijn ##.reduce-declare.220 6 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D245_V0k40) (bruijn ##.x.647 1 0) (bruijn ##.x.648 0 0) (bruijn ##.table.243 5 3))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 0));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D245_V0k40, self))));
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D245_V0k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D245_V0k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.593 26 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D245_V0k39) (bruijn ##.args.253 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D245_V0k39, self)))),
      statics->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D245_V0k37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D245_V0k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler ffi reduce-type) (bruijn ##.reduce-type.222 4 2) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D245_V0k38) (bruijn ##.x.649 0 0) (bruijn ##.table.243 3 3) #f)
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[2]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D245_V0k38, self))));
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D245(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D245, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.null? (bruijn ##.args.253 0 1)) ((bruijn ##.k.628 0 0) '()) ((bruijn ##.x.592 25 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D245_V0k37) (bruijn ##.args.253 0 1)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D245_V0k37, self)))),
      _var1);
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.reg.1752 1 0) (##vcore.blob=? (bruijn ##.k.755 0 0) (##string ##.string.1771) (##inline ##vcore.car (bruijn ##.decl.263 4 2))) ((bruijn ##.k.755 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VBlobEqv2, 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1771.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        statics->up->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.748 0 0) (bruijn ##.k.744 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.749 1 0) (##inline ##vcore.cons 'function (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.12.267 2 0)) (##inline ##vcore.cons (bruijn ##.x.752 0 0) '()))))
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0lambda9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0lambda9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler ffi reduce-declare ##.drop-const.244) (bruijn ##.drop-const.244 7 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k55) (bruijn ##.ret.262 6 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 0));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k55, self))));
    VWORD _arg1 = 
      VGetArg(statics, 6-1, 1);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D244(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.12.267 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.12.267 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k54) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0lambda9) (bruijn ##.kk.9.264 4 1)) ((bruijn ##.k.744 3 0) #f)) ((bruijn ##.k.744 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k54, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0lambda9, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.745 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k53) (##inline ##vcore.cdr (bruijn ##.decl.263 4 2))) ((bruijn ##.k.744 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k53, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.decl.263 2 2)) (basic-block 1 1 (##.reg.1752) ((##vcore.string? (##inline ##vcore.car (bruijn ##.decl.263 3 2)))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k51) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k52))) ((bruijn ##.k.744 0 0) #f))
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
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k51, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k52, self)))));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.reg.1750 1 0) (##vcore.blob=? (bruijn ##.k.740 0 0) (##string ##.string.1771) (##inline ##vcore.car (bruijn ##.decl.263 5 2))) ((bruijn ##.k.740 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VBlobEqv2, 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1771.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.reg.1751 1 0) (##vcore.blob=? (bruijn ##.k.736 0 0) (##string ##.string.1772) (##inline ##vcore.car (bruijn ##.expr.16.273 2 0))) ((bruijn ##.k.736 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VBlobEqv2, 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1772.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        statics->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V10_Dloop_D276_V0k66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V10_Dloop_D276_V0k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.19.275 4 1) (bruijn ##.k.721 1 0) (bruijn ##.expr.21.277 2 1) (bruijn ##.x.722 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      statics->vars[0],
      statics->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V10_Dloop_D276_V0k65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V10_Dloop_D276_V0k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.21.277 1 1))) ((bruijn ##.x.588 44 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V10_Dloop_D276_V0k66) (bruijn ##.args.18.278 1 2)) ((bruijn ##.k.721 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 44-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V10_Dloop_D276_V0k66, self)))),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V10_Dloop_D276_V0k69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V10_Dloop_D276_V0k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.19.275 7 1) (bruijn ##.k.715 2 0) (bruijn ##.expr.21.277 5 1) (bruijn ##.x.717 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      statics->up->vars[0],
      VGetArg(statics, 5-1, 1),
      _var0);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V10_Dloop_D276_V0k68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V10_Dloop_D276_V0k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.588 47 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V10_Dloop_D276_V0k69) (bruijn ##.args.18.278 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 47-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V10_Dloop_D276_V0k69, self)))),
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V10_Dloop_D276_V0lambda13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V10_Dloop_D276_V0lambda13, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.kk.20.279 0 1) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V10_Dloop_D276_V0k68) (##inline ##vcore.cdr (bruijn ##.expr.21.277 3 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.21.277 3 1)) (bruijn ##.args.18.278 3 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var1), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V10_Dloop_D276_V0k68, self)))),
      VInlineCdr2(runtime,
        statics->up->up->vars[1]),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[1]),
        statics->up->up->vars[2]));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V10_Dloop_D276_V0lambda12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V10_Dloop_D276_V0lambda12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.714 0 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V10_Dloop_D276_V0lambda13))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V10_Dloop_D276_V0lambda13, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V10_Dloop_D276_V0k67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V10_Dloop_D276_V0k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.712 1 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V10_Dloop_D276_V0lambda12) (bruijn ##.loop.276 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V10_Dloop_D276_V0lambda12, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V10_Dloop_D276(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V10_Dloop_D276, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V10_Dloop_D276_V0k65) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V10_Dloop_D276_V0k67))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V10_Dloop_D276_V0k65, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V10_Dloop_D276_V0k67, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0lambda11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0lambda11, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V10_Dloop_D276")) (##qualified-call (vanity compiler ffi reduce-declare ##.reduce-declare-loop.246 ##.loop.276) (bruijn ##.loop.276 0 0) (bruijn ##.k.711 1 0) (##inline ##vcore.cdr (bruijn ##.expr.16.273 5 0)) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V10_Dloop_D276, self))));
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
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V10_Dloop_D276(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0lambda10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0lambda10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.710 0 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0lambda11))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0lambda11, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.727 0 0) (bruijn ##.k.724 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.728 3 0) (##inline ##vcore.cons 'function (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.14.270 9 0)) (##inline ##vcore.cons (bruijn ##.x.731 2 0) (bruijn ##.x.732 0 0)))))
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.589 42 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k73) (bruijn ##.drop-const.244 15 0) (bruijn ##.x.733 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 42-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k73, self)))),
      VGetArg(statics, 15-1, 0),
      _var0);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler ffi reduce-declare ##.reduce-args.245) (bruijn ##.reduce-args.245 14 1) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k72) (bruijn ##.args.282 2 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 14-1, 1));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k72, self))));
    VWORD _arg1 = 
      statics->up->vars[2];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D245(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0lambda15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0lambda15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler ffi reduce-declare ##.drop-const.244) (bruijn ##.drop-const.244 13 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k71) (bruijn ##.ret.262 12 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 13-1, 0));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k71, self))));
    VWORD _arg1 = 
      VGetArg(statics, 12-1, 1);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D244(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0lambda14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0lambda14, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.281 0 1)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.15.272 4 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k70) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0lambda15) (bruijn ##.kk.9.264 10 1)) ((bruijn ##.k.724 0 0) #f)) ((bruijn ##.k.724 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->up->up->up->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k70, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0lambda15, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.709 0 0) (##vcore.call-with-values (bruijn ##.k.704 7 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0lambda10) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0lambda14)) ((bruijn ##.k.704 7 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 7-1, 0),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0lambda10, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0lambda14, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.16.273 0 0)) (basic-block 1 1 (##.reg.1751) ((##vcore.string? (##inline ##vcore.car (bruijn ##.expr.16.273 1 0)))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k63) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k64))) ((bruijn ##.k.704 5 0) #f))
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
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k63, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k64, self)))));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.15.272 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k62) (##inline ##vcore.car (bruijn ##.expr.15.272 0 0))) ((bruijn ##.k.704 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k62, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.14.270 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k61) (##inline ##vcore.cdr (bruijn ##.expr.14.270 0 0))) ((bruijn ##.k.704 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k61, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.705 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k60) (##inline ##vcore.cdr (bruijn ##.decl.263 5 2))) ((bruijn ##.k.704 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k60, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.decl.263 3 2)) (basic-block 1 1 (##.reg.1750) ((##vcore.string? (##inline ##vcore.car (bruijn ##.decl.263 4 2)))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k58) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k59))) ((bruijn ##.k.704 0 0) #f))
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
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k58, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k59, self)))));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.reg.1749 1 0) (##vcore.blob=? (bruijn ##.k.700 0 0) (##string ##.string.1773) (##inline ##vcore.car (bruijn ##.decl.263 6 2))) ((bruijn ##.k.700 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VBlobEqv2, 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1773.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.695 0 0) (bruijn ##.k.691 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler ffi reduce-declare ##.reduce-declare-loop.246) (bruijn ##.reduce-declare-loop.246 10 2) (bruijn ##.k.696 1 0) (bruijn ##.x.697 0 0) (##inline ##vcore.car (bruijn ##.expr.23.284 2 0)))
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
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0lambda16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0lambda16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.591 34 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k80) 'pointer (bruijn ##.ret.262 8 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k80, self)))),
      _V0pointer,
      VGetArg(statics, 8-1, 1));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.23.284 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.23.284 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k79) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0lambda16) (bruijn ##.kk.9.264 6 1)) ((bruijn ##.k.691 3 0) #f)) ((bruijn ##.k.691 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k79, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0lambda16, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.692 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k78) (##inline ##vcore.cdr (bruijn ##.decl.263 6 2))) ((bruijn ##.k.691 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k78, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.decl.263 4 2)) (basic-block 1 1 (##.reg.1749) ((##vcore.string? (##inline ##vcore.car (bruijn ##.decl.263 5 2)))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k76) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k77))) ((bruijn ##.k.691 0 0) #f))
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
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k76, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k77, self)))));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.reg.1748 1 0) (##vcore.blob=? (bruijn ##.k.687 0 0) (##string ##.string.1774) (##inline ##vcore.car (bruijn ##.decl.263 7 2))) ((bruijn ##.k.687 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VBlobEqv2, 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1774.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        VGetArg(statics, 7-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.682 0 0) (bruijn ##.k.677 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler ffi reduce-declare ##.reduce-declare-loop.246) (bruijn ##.reduce-declare-loop.246 12 2) (bruijn ##.k.683 1 0) (bruijn ##.x.684 0 0) (##inline ##vcore.car (bruijn ##.expr.25.287 3 0)))
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
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0lambda17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0lambda17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.591 36 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k88) 'array (##inline ##vcore.car (bruijn ##.expr.26.289 1 0)) (bruijn ##.ret.262 10 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k88, self)))),
      _V0array,
      VInlineCar2(runtime,
        statics->vars[0]),
      VGetArg(statics, 10-1, 1));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.26.289 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.26.289 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k87) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0lambda17) (bruijn ##.kk.9.264 8 1)) ((bruijn ##.k.677 4 0) #f)) ((bruijn ##.k.677 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k87, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0lambda17, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.25.287 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k86) (##inline ##vcore.cdr (bruijn ##.expr.25.287 0 0))) ((bruijn ##.k.677 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k86, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.678 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k85) (##inline ##vcore.cdr (bruijn ##.decl.263 7 2))) ((bruijn ##.k.677 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k85, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 7-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.decl.263 5 2)) (basic-block 1 1 (##.reg.1748) ((##vcore.string? (##inline ##vcore.car (bruijn ##.decl.263 6 2)))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k83) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k84))) ((bruijn ##.k.677 0 0) #f))
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
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k83, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k84, self)))));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.reg.1747 1 0) (##vcore.blob=? (bruijn ##.k.673 0 0) (##string ##.string.1775) (##inline ##vcore.car (bruijn ##.decl.263 8 2))) ((bruijn ##.k.673 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VBlobEqv2, 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1775.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        VGetArg(statics, 8-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.668 0 0) (bruijn ##.k.663 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler ffi reduce-declare ##.reduce-declare-loop.246) (bruijn ##.reduce-declare-loop.246 13 2) (bruijn ##.k.669 1 0) (bruijn ##.x.670 0 0) (##inline ##vcore.car (bruijn ##.expr.28.292 3 0)))
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
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0lambda18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0lambda18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.591 37 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k96) 'array (##inline ##vcore.car (bruijn ##.expr.29.294 1 0)) (bruijn ##.ret.262 11 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k96, self)))),
      _V0array,
      VInlineCar2(runtime,
        statics->vars[0]),
      VGetArg(statics, 11-1, 1));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.29.294 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.29.294 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k95) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0lambda18) (bruijn ##.kk.9.264 9 1)) ((bruijn ##.k.663 4 0) #f)) ((bruijn ##.k.663 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k95, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0lambda18, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.28.292 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k94) (##inline ##vcore.cdr (bruijn ##.expr.28.292 0 0))) ((bruijn ##.k.663 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k94, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.664 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k93) (##inline ##vcore.cdr (bruijn ##.decl.263 8 2))) ((bruijn ##.k.663 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k93, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 8-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.decl.263 6 2)) (basic-block 1 1 (##.reg.1747) ((##vcore.string? (##inline ##vcore.car (bruijn ##.decl.263 7 2)))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k91) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k92))) ((bruijn ##.k.663 0 0) #f))
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
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k91, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k92, self)))));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.590 35 0) (bruijn ##.k.651 7 0) (##string ##.string.1776))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 35-1, 0)), 2,
      VGetArg(statics, 7-1, 0),
      VEncodePointer(&_V10_Dstring_D1776.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.658 0 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k99))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k99, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0lambda19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0lambda19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.659 0 0) (##inline ##vcore.cons 'variable (##inline ##vcore.cons (bruijn ##.ret.262 7 1) (##inline ##vcore.cons (bruijn ##.decl.263 7 2) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0variable,
        VInlineCons2(runtime,
        VGetArg(statics, 7-1, 1),
        VInlineCons2(runtime,
        VGetArg(statics, 7-1, 2),
        VNULL))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k98) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0lambda19) (bruijn ##.kk.9.264 5 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k98, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0lambda19, self)))),
      VGetArg(statics, 5-1, 1));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k90) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k97))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k90, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k97, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k82) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k89))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k82, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k89, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k75) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k81))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k75, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k81, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k57) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k74))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k57, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k74, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0lambda8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0lambda8, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k50) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k56))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k50, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0k56, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call/cc (bruijn ##.k.650 0 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0lambda8))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246_V0lambda8, self)))));
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
  // (letrec 3 ((close "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D244") (close "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D245") (close "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246")) (##qualified-call (vanity compiler ffi reduce-declare ##.reduce-declare-loop.246) (bruijn ##.reduce-declare-loop.246 0 2) (bruijn ##.k.614 1 0) (bruijn ##.ret.241 1 1) (bruijn ##.decl.242 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Ddrop__const_D244, self))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__args_D245, self))));
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246, self))));
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
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__declare_V10_Dreduce__declare__loop_D246(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
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
  // ((bruijn ##.k.769 1 0) (##inline ##vcore.not (bruijn ##.x.770 0 0)))
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
  // (if (bruijn ##.reg.1753 1 0) ((bruijn ##.x.596 21 0) (close _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V0k101) (bruijn ##.special.297 2 1) (##inline ##vcore.qcons 'void (##inline ##vcore.qcons 'float (##inline ##vcore.qcons 'double (##inline ##vcore.qcons '_Bool '()))))) ((bruijn ##.k.769 0 0) #f))
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
void _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D299_V0k106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D299_V0k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.eqv? (bruijn ##.k.765 1 0) (bruijn ##.x.766 0 0) (bruijn ##.special.297 8 1))
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      statics->vars[0],
      _var0,
      VGetArg(statics, 8-1, 1));
}
void _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D299_V0k105(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D299_V0k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.764 1 0) ((bruijn ##.x.593 29 0) (close _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D299_V0k106) (bruijn ##.table.300 3 1)) ((bruijn ##.k.765 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D299_V0k106, self)))),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D299_V0k107(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D299_V0k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.762 0 0) ((bruijn ##.x.597 25 0) (bruijn ##.k.760 3 0) (bruijn ##.table.300 3 1)) (##qualified-call (vanity compiler ffi find-typedef ##.loop.299) (bruijn ##.loop.299 4 0) (bruijn ##.k.760 3 0) (##inline ##vcore.cdr (bruijn ##.table.300 3 1))))
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
       _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D299(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D299_V0k104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D299_V0k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D299_V0k105) (close _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D299_V0k107))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D299_V0k105, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D299_V0k107, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D299_V0k103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D299_V0k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D299_V0k104) (bruijn ##.x.767 0 0) 'typedef)
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D299_V0k104, self)))),
      _var0,
      _V0typedef);
}
void _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D299(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D299, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.null? (bruijn ##.table.300 0 1)) ((bruijn ##.x.598 21 0) (bruijn ##.k.760 0 0) (##string ##.string.1777) (bruijn ##.special.297 4 1)) ((bruijn ##.x.592 27 0) (close _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D299_V0k103) (bruijn ##.table.300 0 1)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1777.sym, VPOINTER_OTHER),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D299_V0k103, self)))),
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
  // (if (bruijn ##.p.759 0 0) (letrec 1 ((close "_V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D299")) (##qualified-call (vanity compiler ffi find-typedef ##.loop.299) (bruijn ##.loop.299 0 0) (bruijn ##.k.758 3 0) (bruijn ##.table.298 3 2))) ((bruijn ##.k.758 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D299, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      statics->up->up->vars[2];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V10_Dloop_D299(runtime, _closure->env, 2, _arg0, _arg1);
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
  // (basic-block 1 1 (##.reg.1753) ((##vcore.symbol? (bruijn ##.special.297 1 1))) ((close _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V0k100) (close _V50_V0vanity_V0compiler_V0ffi_V0find__typedef_V0k102)))
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k114(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1023 0 0) (bruijn ##.k.1012 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0lambda21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0lambda21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1024 0 0) 'char)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0char);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k113(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.37.314 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.37.314 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.37.314 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k114) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0lambda21) (bruijn ##.kk.31.308 6 1)) ((bruijn ##.k.1012 5 0) #f)) ((bruijn ##.k.1012 5 0) #f)) ((bruijn ##.k.1012 5 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k114, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0lambda21, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k112(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.36.313 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.36.313 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k113) (##inline ##vcore.cdr (bruijn ##.expr.36.313 0 0))) ((bruijn ##.k.1012 4 0) #f)) ((bruijn ##.k.1012 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k113, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.35.312 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.35.312 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k112) (##inline ##vcore.cdr (bruijn ##.expr.35.312 0 0))) ((bruijn ##.k.1012 3 0) #f)) ((bruijn ##.k.1012 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k112, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.34.311 0 0)) (if (##inline ##vcore.eq? 0 (##inline ##vcore.car (bruijn ##.expr.34.311 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k111) (##inline ##vcore.cdr (bruijn ##.expr.34.311 0 0))) ((bruijn ##.k.1012 2 0) #f)) ((bruijn ##.k.1012 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(0l),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k111, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k109(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1013 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k110) (##inline ##vcore.cdr (bruijn ##.args.307 3 1))) ((bruijn ##.k.1012 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k110, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k108(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.args.307 2 1)) ((bruijn ##.x.595 24 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k109) 'char (##inline ##vcore.car (bruijn ##.args.307 2 1))) ((bruijn ##.k.1012 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k109, self)))),
      _V0char,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k122(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1003 0 0) (bruijn ##.k.992 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0lambda22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0lambda22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1004 0 0) 'unsigned-char)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0unsigned__char);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k121(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.42.319 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.42.319 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.42.319 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k122) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0lambda22) (bruijn ##.kk.31.308 7 1)) ((bruijn ##.k.992 5 0) #f)) ((bruijn ##.k.992 5 0) #f)) ((bruijn ##.k.992 5 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k122, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0lambda22, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k120(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.41.318 0 0)) (if (##inline ##vcore.eq? #t (##inline ##vcore.car (bruijn ##.expr.41.318 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k121) (##inline ##vcore.cdr (bruijn ##.expr.41.318 0 0))) ((bruijn ##.k.992 4 0) #f)) ((bruijn ##.k.992 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(true),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k121, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k119(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.40.317 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.40.317 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k120) (##inline ##vcore.cdr (bruijn ##.expr.40.317 0 0))) ((bruijn ##.k.992 3 0) #f)) ((bruijn ##.k.992 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k120, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k118(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.39.316 0 0)) (if (##inline ##vcore.eq? 0 (##inline ##vcore.car (bruijn ##.expr.39.316 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k119) (##inline ##vcore.cdr (bruijn ##.expr.39.316 0 0))) ((bruijn ##.k.992 2 0) #f)) ((bruijn ##.k.992 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(0l),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k119, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k117(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.993 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k118) (##inline ##vcore.cdr (bruijn ##.args.307 4 1))) ((bruijn ##.k.992 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k118, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k116(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.args.307 3 1)) ((bruijn ##.x.595 25 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k117) 'char (##inline ##vcore.car (bruijn ##.args.307 3 1))) ((bruijn ##.k.992 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k117, self)))),
      _V0char,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k130(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.983 0 0) (bruijn ##.k.972 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0lambda23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0lambda23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.984 0 0) 'signed-char)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0signed__char);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k129(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.47.324 0 0)) (if (##inline ##vcore.eq? #t (##inline ##vcore.car (bruijn ##.expr.47.324 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.47.324 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k130) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0lambda23) (bruijn ##.kk.31.308 8 1)) ((bruijn ##.k.972 5 0) #f)) ((bruijn ##.k.972 5 0) #f)) ((bruijn ##.k.972 5 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k130, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0lambda23, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k128(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.46.323 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.46.323 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k129) (##inline ##vcore.cdr (bruijn ##.expr.46.323 0 0))) ((bruijn ##.k.972 4 0) #f)) ((bruijn ##.k.972 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k129, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k127(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.45.322 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.45.322 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k128) (##inline ##vcore.cdr (bruijn ##.expr.45.322 0 0))) ((bruijn ##.k.972 3 0) #f)) ((bruijn ##.k.972 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k128, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k126(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.44.321 0 0)) (if (##inline ##vcore.eq? 0 (##inline ##vcore.car (bruijn ##.expr.44.321 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k127) (##inline ##vcore.cdr (bruijn ##.expr.44.321 0 0))) ((bruijn ##.k.972 2 0) #f)) ((bruijn ##.k.972 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(0l),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k127, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k125(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.973 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k126) (##inline ##vcore.cdr (bruijn ##.args.307 5 1))) ((bruijn ##.k.972 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k126, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k124(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.args.307 4 1)) ((bruijn ##.x.595 26 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k125) 'char (##inline ##vcore.car (bruijn ##.args.307 4 1))) ((bruijn ##.k.972 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k125, self)))),
      _V0char,
      VInlineCar2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k138(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.964 0 0) (bruijn ##.k.954 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0lambda24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0lambda24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.965 0 0) 'int)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0int);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k137(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.52.329 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.52.329 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k138) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0lambda24) (bruijn ##.kk.31.308 9 1)) ((bruijn ##.k.954 5 0) #f)) ((bruijn ##.k.954 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k138, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0lambda24, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k136(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.51.328 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.51.328 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k137) (##inline ##vcore.cdr (bruijn ##.expr.51.328 0 0))) ((bruijn ##.k.954 4 0) #f)) ((bruijn ##.k.954 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k137, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k135(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.50.327 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.50.327 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k136) (##inline ##vcore.cdr (bruijn ##.expr.50.327 0 0))) ((bruijn ##.k.954 3 0) #f)) ((bruijn ##.k.954 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k136, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k134(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.49.326 0 0)) (if (##inline ##vcore.eq? 0 (##inline ##vcore.car (bruijn ##.expr.49.326 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k135) (##inline ##vcore.cdr (bruijn ##.expr.49.326 0 0))) ((bruijn ##.k.954 2 0) #f)) ((bruijn ##.k.954 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(0l),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k135, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k133(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.955 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k134) (##inline ##vcore.cdr (bruijn ##.args.307 6 1))) ((bruijn ##.k.954 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k134, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k132(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.args.307 5 1)) ((bruijn ##.x.595 27 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k133) 'int (##inline ##vcore.car (bruijn ##.args.307 5 1))) ((bruijn ##.k.954 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 5-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k133, self)))),
      _V0int,
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k146(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.945 0 0) (bruijn ##.k.934 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0lambda25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0lambda25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.946 0 0) 'unsigned-int)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0unsigned__int);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k145(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.57.334 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.57.334 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.57.334 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k146) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0lambda25) (bruijn ##.kk.31.308 10 1)) ((bruijn ##.k.934 5 0) #f)) ((bruijn ##.k.934 5 0) #f)) ((bruijn ##.k.934 5 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k146, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0lambda25, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k144(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.56.333 0 0)) (if (##inline ##vcore.eq? #t (##inline ##vcore.car (bruijn ##.expr.56.333 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k145) (##inline ##vcore.cdr (bruijn ##.expr.56.333 0 0))) ((bruijn ##.k.934 4 0) #f)) ((bruijn ##.k.934 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(true),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k145, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k143(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.55.332 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.55.332 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k144) (##inline ##vcore.cdr (bruijn ##.expr.55.332 0 0))) ((bruijn ##.k.934 3 0) #f)) ((bruijn ##.k.934 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k144, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k142(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.54.331 0 0)) (if (##inline ##vcore.eq? 0 (##inline ##vcore.car (bruijn ##.expr.54.331 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k143) (##inline ##vcore.cdr (bruijn ##.expr.54.331 0 0))) ((bruijn ##.k.934 2 0) #f)) ((bruijn ##.k.934 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(0l),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k143, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k141(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.935 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k142) (##inline ##vcore.cdr (bruijn ##.args.307 7 1))) ((bruijn ##.k.934 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k142, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 7-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k140(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.args.307 6 1)) ((bruijn ##.x.595 28 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k141) 'int (##inline ##vcore.car (bruijn ##.args.307 6 1))) ((bruijn ##.k.934 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 6-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k141, self)))),
      _V0int,
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k154(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.926 0 0) (bruijn ##.k.916 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0lambda26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0lambda26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.927 0 0) 'long)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0long);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k153(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.62.339 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.62.339 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k154) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0lambda26) (bruijn ##.kk.31.308 11 1)) ((bruijn ##.k.916 5 0) #f)) ((bruijn ##.k.916 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k154, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0lambda26, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k152(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.61.338 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.61.338 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k153) (##inline ##vcore.cdr (bruijn ##.expr.61.338 0 0))) ((bruijn ##.k.916 4 0) #f)) ((bruijn ##.k.916 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k153, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k151(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.60.337 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.60.337 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k152) (##inline ##vcore.cdr (bruijn ##.expr.60.337 0 0))) ((bruijn ##.k.916 3 0) #f)) ((bruijn ##.k.916 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k152, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k150(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.59.336 0 0)) (if (##inline ##vcore.eq? 1 (##inline ##vcore.car (bruijn ##.expr.59.336 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k151) (##inline ##vcore.cdr (bruijn ##.expr.59.336 0 0))) ((bruijn ##.k.916 2 0) #f)) ((bruijn ##.k.916 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(1l),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k151, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k149(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.917 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k150) (##inline ##vcore.cdr (bruijn ##.args.307 8 1))) ((bruijn ##.k.916 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k150, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 8-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k148(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.args.307 7 1)) ((bruijn ##.x.595 29 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k149) 'int (##inline ##vcore.car (bruijn ##.args.307 7 1))) ((bruijn ##.k.916 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 7-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k149, self)))),
      _V0int,
      VInlineCar2(runtime,
        VGetArg(statics, 7-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k162(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.907 0 0) (bruijn ##.k.896 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0lambda27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0lambda27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.908 0 0) 'unsigned-long)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0unsigned__long);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k161(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.67.344 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.67.344 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.67.344 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k162) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0lambda27) (bruijn ##.kk.31.308 12 1)) ((bruijn ##.k.896 5 0) #f)) ((bruijn ##.k.896 5 0) #f)) ((bruijn ##.k.896 5 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k162, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0lambda27, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k160(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.66.343 0 0)) (if (##inline ##vcore.eq? #t (##inline ##vcore.car (bruijn ##.expr.66.343 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k161) (##inline ##vcore.cdr (bruijn ##.expr.66.343 0 0))) ((bruijn ##.k.896 4 0) #f)) ((bruijn ##.k.896 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(true),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k161, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k159(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.65.342 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.65.342 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k160) (##inline ##vcore.cdr (bruijn ##.expr.65.342 0 0))) ((bruijn ##.k.896 3 0) #f)) ((bruijn ##.k.896 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k160, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k158(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.64.341 0 0)) (if (##inline ##vcore.eq? 1 (##inline ##vcore.car (bruijn ##.expr.64.341 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k159) (##inline ##vcore.cdr (bruijn ##.expr.64.341 0 0))) ((bruijn ##.k.896 2 0) #f)) ((bruijn ##.k.896 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(1l),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k159, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k157(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.897 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k158) (##inline ##vcore.cdr (bruijn ##.args.307 9 1))) ((bruijn ##.k.896 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k158, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 9-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k156(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.args.307 8 1)) ((bruijn ##.x.595 30 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k157) 'int (##inline ##vcore.car (bruijn ##.args.307 8 1))) ((bruijn ##.k.896 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 8-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k157, self)))),
      _V0int,
      VInlineCar2(runtime,
        VGetArg(statics, 8-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k170(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.888 0 0) (bruijn ##.k.878 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0lambda28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0lambda28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.889 0 0) 'long-long)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0long__long);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k169(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.72.349 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.72.349 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k170) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0lambda28) (bruijn ##.kk.31.308 13 1)) ((bruijn ##.k.878 5 0) #f)) ((bruijn ##.k.878 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k170, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0lambda28, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k168(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.71.348 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.71.348 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k169) (##inline ##vcore.cdr (bruijn ##.expr.71.348 0 0))) ((bruijn ##.k.878 4 0) #f)) ((bruijn ##.k.878 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k169, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k167(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.70.347 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.70.347 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k168) (##inline ##vcore.cdr (bruijn ##.expr.70.347 0 0))) ((bruijn ##.k.878 3 0) #f)) ((bruijn ##.k.878 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k168, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k166(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.69.346 0 0)) (if (##inline ##vcore.eq? 2 (##inline ##vcore.car (bruijn ##.expr.69.346 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k167) (##inline ##vcore.cdr (bruijn ##.expr.69.346 0 0))) ((bruijn ##.k.878 2 0) #f)) ((bruijn ##.k.878 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(2l),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k167, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k165(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.879 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k166) (##inline ##vcore.cdr (bruijn ##.args.307 10 1))) ((bruijn ##.k.878 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k166, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 10-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k164(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.args.307 9 1)) ((bruijn ##.x.595 31 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k165) 'int (##inline ##vcore.car (bruijn ##.args.307 9 1))) ((bruijn ##.k.878 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 9-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k165, self)))),
      _V0int,
      VInlineCar2(runtime,
        VGetArg(statics, 9-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k178(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.869 0 0) (bruijn ##.k.858 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0lambda29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0lambda29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.870 0 0) 'unsigned-long-long)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0unsigned__long__long);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k177(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.77.354 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.77.354 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.77.354 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k178) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0lambda29) (bruijn ##.kk.31.308 14 1)) ((bruijn ##.k.858 5 0) #f)) ((bruijn ##.k.858 5 0) #f)) ((bruijn ##.k.858 5 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k178, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0lambda29, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k176(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.76.353 0 0)) (if (##inline ##vcore.eq? #t (##inline ##vcore.car (bruijn ##.expr.76.353 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k177) (##inline ##vcore.cdr (bruijn ##.expr.76.353 0 0))) ((bruijn ##.k.858 4 0) #f)) ((bruijn ##.k.858 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(true),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k177, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k175(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.75.352 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.75.352 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k176) (##inline ##vcore.cdr (bruijn ##.expr.75.352 0 0))) ((bruijn ##.k.858 3 0) #f)) ((bruijn ##.k.858 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k176, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k174(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.74.351 0 0)) (if (##inline ##vcore.eq? 2 (##inline ##vcore.car (bruijn ##.expr.74.351 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k175) (##inline ##vcore.cdr (bruijn ##.expr.74.351 0 0))) ((bruijn ##.k.858 2 0) #f)) ((bruijn ##.k.858 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(2l),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k175, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k173(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.859 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k174) (##inline ##vcore.cdr (bruijn ##.args.307 11 1))) ((bruijn ##.k.858 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k174, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 11-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k172(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.args.307 10 1)) ((bruijn ##.x.595 32 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k173) 'int (##inline ##vcore.car (bruijn ##.args.307 10 1))) ((bruijn ##.k.858 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 10-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k173, self)))),
      _V0int,
      VInlineCar2(runtime,
        VGetArg(statics, 10-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k186(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.850 0 0) (bruijn ##.k.840 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0lambda30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0lambda30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.851 0 0) 'short)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0short);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k185(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.82.359 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.82.359 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k186) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0lambda30) (bruijn ##.kk.31.308 15 1)) ((bruijn ##.k.840 5 0) #f)) ((bruijn ##.k.840 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k186, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0lambda30, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k184(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.81.358 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.81.358 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k185) (##inline ##vcore.cdr (bruijn ##.expr.81.358 0 0))) ((bruijn ##.k.840 4 0) #f)) ((bruijn ##.k.840 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k185, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k183(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.80.357 0 0)) (if (##inline ##vcore.eq? #t (##inline ##vcore.car (bruijn ##.expr.80.357 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k184) (##inline ##vcore.cdr (bruijn ##.expr.80.357 0 0))) ((bruijn ##.k.840 3 0) #f)) ((bruijn ##.k.840 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(true),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k184, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k182(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.79.356 0 0)) (if (##inline ##vcore.eq? 0 (##inline ##vcore.car (bruijn ##.expr.79.356 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k183) (##inline ##vcore.cdr (bruijn ##.expr.79.356 0 0))) ((bruijn ##.k.840 2 0) #f)) ((bruijn ##.k.840 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(0l),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k183, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k181(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.841 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k182) (##inline ##vcore.cdr (bruijn ##.args.307 12 1))) ((bruijn ##.k.840 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k182, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 12-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k180(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.args.307 11 1)) ((bruijn ##.x.595 33 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k181) 'int (##inline ##vcore.car (bruijn ##.args.307 11 1))) ((bruijn ##.k.840 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 11-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k181, self)))),
      _V0int,
      VInlineCar2(runtime,
        VGetArg(statics, 11-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k194(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.831 0 0) (bruijn ##.k.820 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0lambda31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0lambda31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.832 0 0) 'unsigned-short)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0unsigned__short);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k193(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.87.364 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.87.364 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.87.364 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k194) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0lambda31) (bruijn ##.kk.31.308 16 1)) ((bruijn ##.k.820 5 0) #f)) ((bruijn ##.k.820 5 0) #f)) ((bruijn ##.k.820 5 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k194, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0lambda31, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k192(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.86.363 0 0)) (if (##inline ##vcore.eq? #t (##inline ##vcore.car (bruijn ##.expr.86.363 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k193) (##inline ##vcore.cdr (bruijn ##.expr.86.363 0 0))) ((bruijn ##.k.820 4 0) #f)) ((bruijn ##.k.820 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(true),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k193, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k191(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.85.362 0 0)) (if (##inline ##vcore.eq? #t (##inline ##vcore.car (bruijn ##.expr.85.362 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k192) (##inline ##vcore.cdr (bruijn ##.expr.85.362 0 0))) ((bruijn ##.k.820 3 0) #f)) ((bruijn ##.k.820 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(true),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k192, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k190(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.84.361 0 0)) (if (##inline ##vcore.eq? 0 (##inline ##vcore.car (bruijn ##.expr.84.361 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k191) (##inline ##vcore.cdr (bruijn ##.expr.84.361 0 0))) ((bruijn ##.k.820 2 0) #f)) ((bruijn ##.k.820 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(0l),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k191, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k189(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.821 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k190) (##inline ##vcore.cdr (bruijn ##.args.307 13 1))) ((bruijn ##.k.820 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k190, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 13-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k188(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.args.307 12 1)) ((bruijn ##.x.595 34 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k189) 'int (##inline ##vcore.car (bruijn ##.args.307 12 1))) ((bruijn ##.k.820 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 12-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k189, self)))),
      _V0int,
      VInlineCar2(runtime,
        VGetArg(statics, 12-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k202(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.808 0 0) (bruijn ##.k.798 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k203(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.special.366 6 0)) ((bruijn ##.x.595 42 0) (bruijn ##.k.812 0 0) (##inline ##vcore.car (bruijn ##.special.366 6 0)) (##string ##.string.1778)) ((bruijn ##.k.812 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 6-1, 0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 42-1, 0)), 3,
      _var0,
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 0)),
      VEncodePointer(&_V10_Dstring_D1778.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k205(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.x.93.371 0 0) ((bruijn ##.k.809 2 0) (bruijn ##.x.93.371 0 0)) ((bruijn ##.k.809 2 0) (bruijn ##.special.366 7 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VGetArg(statics, 7-1, 0));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k204(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.810 0 0) ((bruijn ##.k.809 1 0) 'unsigned-int) (##qualified-call (vanity compiler ffi find-typedef) (bruijn ##.find-typedef.221 23 1) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k205) (bruijn ##.special.366 6 0) (bruijn ##.table.302 22 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      _V0unsigned__int);
} else {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 23-1, 1));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k205, self))));
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0lambda32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0lambda32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k203) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k204))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k203, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k204, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k201(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.92.370 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.92.370 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.92.370 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k202) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0lambda32) (bruijn ##.kk.31.308 17 1)) ((bruijn ##.k.798 5 0) #f)) ((bruijn ##.k.798 5 0) #f)) ((bruijn ##.k.798 5 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k202, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0lambda32, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k200(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.91.369 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.91.369 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k201) (##inline ##vcore.cdr (bruijn ##.expr.91.369 0 0))) ((bruijn ##.k.798 4 0) #f)) ((bruijn ##.k.798 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k201, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k199(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.90.368 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.90.368 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k200) (##inline ##vcore.cdr (bruijn ##.expr.90.368 0 0))) ((bruijn ##.k.798 3 0) #f)) ((bruijn ##.k.798 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k200, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k198(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.89.367 0 0)) (if (##inline ##vcore.eq? 0 (##inline ##vcore.car (bruijn ##.expr.89.367 0 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k199) (##inline ##vcore.cdr (bruijn ##.expr.89.367 0 0))) ((bruijn ##.k.798 2 0) #f)) ((bruijn ##.k.798 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(0l),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k199, self)), 1,
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k197(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k198) (##inline ##vcore.cdr (bruijn ##.args.307 14 1)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k198, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 14-1, 1)));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k196(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.args.307 13 1)) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k197) (##inline ##vcore.car (bruijn ##.args.307 13 1))) ((bruijn ##.k.798 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 13-1, 1)))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k197, self)), 1,
      VInlineCar2(runtime,
        VGetArg(statics, 13-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k207(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.598 34 0) (bruijn ##.k.790 1 0) (##string ##.string.1779) (bruijn ##.x.791 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1779.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0lambda33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0lambda33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.589 42 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k207) (bruijn ##.x.591 40 0) (bruijn ##.args.307 14 1) (##inline ##vcore.qcons 'special (##inline ##vcore.qcons 'longs (##inline ##vcore.qcons 'short (##inline ##vcore.qcons 'unsigned (##inline ##vcore.qcons 'signed '()))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 42-1, 0)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k207, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k206(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.777 12 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0lambda33) (bruijn ##.kk.31.308 12 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 12-1, 0),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0lambda33, self)))),
      VGetArg(statics, 12-1, 1));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k195(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k196) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k206))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k196, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k206, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k187(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k188) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k195))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k188, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k195, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k179(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k180) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k187))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k180, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k187, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k171(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k172) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k179))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k172, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k179, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k163(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k164) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k171))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k164, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k171, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k155(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k156) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k163))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k156, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k163, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k147(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k148) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k155))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k148, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k155, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k139(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k140) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k147))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k140, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k147, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k131(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k132) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k139))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k132, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k139, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k123(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k124) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k131))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k124, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k131, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k115(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k116) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k123))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k116, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k123, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0lambda20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0lambda20, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k108) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k115))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k108, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0k115, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, ...) {
 if(argc < 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304, got ~D~N"
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
  // (##vcore.call/cc (bruijn ##.k.776 0 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0lambda20))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304_V0lambda20, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dappend__const_D305(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dappend__const_D305, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // (if (bruijn ##.const?.373 0 1) ((bruijn ##.x.591 26 0) (bruijn ##.k.1031 0 0) 'const (bruijn ##.type.374 0 2)) ((bruijn ##.k.1031 0 0) (bruijn ##.type.374 0 2)))
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dmaybe__string___Gsymbol_D306(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dmaybe__string___Gsymbol_D306, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.1754) ((##vcore.string? (bruijn ##.x.375 1 1))) (if (bruijn ##.reg.1754 0 0) (##vcore.string->symbol (bruijn ##.k.1032 1 0) (bruijn ##.x.375 1 1)) ((bruijn ##.k.1032 1 0) (bruijn ##.x.375 1 1))))
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k208(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k208, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.special.379 1 3) ((bruijn ##.k.1038 0 0) (bruijn ##.special.379 1 3)) ((bruijn ##.k.1038 0 0) 'int))
if(VDecodeBool(
statics->vars[3])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[3]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0int);
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k210(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k210, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler ffi reduce-type ##.append-const.305) (bruijn ##.append-const.305 4 1) (bruijn ##.k.1034 2 0) (bruijn ##.const.380 2 4) (bruijn ##.x.1036 0 0))
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
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dappend__const_D305(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k209(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler ffi reduce-type ##.decide.304) (bruijn ##.decide.304 3 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k210) (bruijn ##.x.1037 0 0) (bruijn ##.longs.381 1 5) (bruijn ##.short.382 1 6) (bruijn ##.unsigned.383 1 7) (bruijn ##.signed.384 1 8))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k210, self))));
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
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304(runtime, _closure->env, 6, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k214(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k214, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1069 1 0) ((bruijn ##.k.1070 0 0) (bruijn ##.p.1069 1 0)) (##vcore.eqv? (bruijn ##.k.1070 0 0) (bruijn ##.x.30.385 3 0) 'volatile))
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k220(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k220, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1068 0 0) ((bruijn ##.k.1065 3 0) (bruijn ##.p.1068 0 0)) (##vcore.eqv? (bruijn ##.k.1065 3 0) (bruijn ##.x.30.385 8 0) 'auto))
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
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k219(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k219, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1067 0 0) ((bruijn ##.k.1065 2 0) (bruijn ##.p.1067 0 0)) (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k220) (bruijn ##.x.30.385 7 0) 'register))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _var0);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k220, self)))),
      VGetArg(statics, 7-1, 0),
      _V0register);
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k218(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k218, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1066 0 0) ((bruijn ##.k.1065 1 0) (bruijn ##.p.1066 0 0)) (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k219) (bruijn ##.x.30.385 6 0) 'typedef))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      _var0);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k219, self)))),
      VGetArg(statics, 6-1, 0),
      _V0typedef);
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k217(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k217, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1064 1 0) ((bruijn ##.k.1065 0 0) (bruijn ##.p.1064 1 0)) (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k218) (bruijn ##.x.30.385 5 0) 'extern))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k218, self)))),
      VGetArg(statics, 5-1, 0),
      _V0extern);
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k222(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k222, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.not (bruijn ##.storage-declaration?.303 10 3)) ((bruijn ##.x.598 27 0) (bruijn ##.k.1051 0 0) (##string ##.string.1780)) ((bruijn ##.k.1051 0 0) (##inline ##vcore.car (bruijn ##.t.377 7 1))))
if(VDecodeBool(
VInlineNot2(runtime,
        VGetArg(statics, 10-1, 3)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D1780.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCar2(runtime,
        VGetArg(statics, 7-1, 1)));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k224(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k224, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.storage.378 8 2) ((bruijn ##.x.598 28 0) (bruijn ##.k.1048 0 0) (##string ##.string.1781) (bruijn ##.storage.378 8 2) (##inline ##vcore.car (bruijn ##.t.377 8 1))) ((bruijn ##.k.1048 0 0) #f))
if(VDecodeBool(
VGetArg(statics, 8-1, 2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 4,
      _var0,
      VEncodePointer(&_V10_Dstring_D1781.sym, VPOINTER_OTHER),
      VGetArg(statics, 8-1, 2),
      VInlineCar2(runtime,
        VGetArg(statics, 8-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k225(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k225, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler ffi reduce-type ##.loop.376) (bruijn ##.loop.376 9 0) (bruijn ##.k.1034 8 0) (##inline ##vcore.cdr (bruijn ##.t.377 8 1)) (##inline ##vcore.car (bruijn ##.t.377 8 1)) (bruijn ##.special.379 8 3) (bruijn ##.const.380 8 4) (bruijn ##.longs.381 8 5) (bruijn ##.short.382 8 6) (bruijn ##.unsigned.383 8 7) (bruijn ##.signed.384 8 8))
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
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376(runtime, _closure->env, 9, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k223(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k223, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k224) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k225))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k224, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k225, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k229(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k229, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1059 0 0) (##qualified-call (vanity compiler ffi reduce-type ##.loop.376) (bruijn ##.loop.376 11 0) (bruijn ##.k.1034 10 0) (##inline ##vcore.cdr (bruijn ##.t.377 10 1)) (bruijn ##.storage.378 10 2) (bruijn ##.special.379 10 3) (bruijn ##.const.380 10 4) (bruijn ##.longs.381 10 5) (bruijn ##.short.382 10 6) (bruijn ##.unsigned.383 10 7) #t) (if (bruijn ##.special.379 10 3) ((bruijn ##.x.598 30 0) (bruijn ##.k.1034 10 0) (##string ##.string.1782) (##inline ##vcore.car (bruijn ##.t.377 10 1)) (bruijn ##.special.379 10 3)) (##qualified-call (vanity compiler ffi reduce-type ##.loop.376) (bruijn ##.loop.376 11 0) (bruijn ##.k.1034 10 0) (##inline ##vcore.cdr (bruijn ##.t.377 10 1)) (bruijn ##.storage.378 10 2) (##inline ##vcore.car (bruijn ##.t.377 10 1)) (bruijn ##.const.380 10 4) (bruijn ##.longs.381 10 5) (bruijn ##.short.382 10 6) (bruijn ##.unsigned.383 10 7) (bruijn ##.signed.384 10 8))))
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
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376(runtime, _closure->env, 9, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
    }
  }
} else {
if(VDecodeBool(
VGetArg(statics, 10-1, 3))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 4,
      VGetArg(statics, 10-1, 0),
      VEncodePointer(&_V10_Dstring_D1782.sym, VPOINTER_OTHER),
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
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376(runtime, _closure->env, 9, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
    }
  }
}
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k228(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k228, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1057 0 0) (##qualified-call (vanity compiler ffi reduce-type ##.loop.376) (bruijn ##.loop.376 10 0) (bruijn ##.k.1034 9 0) (##inline ##vcore.cdr (bruijn ##.t.377 9 1)) (bruijn ##.storage.378 9 2) (bruijn ##.special.379 9 3) (bruijn ##.const.380 9 4) (bruijn ##.longs.381 9 5) (bruijn ##.short.382 9 6) #t (bruijn ##.signed.384 9 8)) (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k229) (bruijn ##.x.30.385 8 0) 'signed))
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
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376(runtime, _closure->env, 9, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
    }
  }
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k229, self)))),
      VGetArg(statics, 8-1, 0),
      _V0signed);
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k227(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k227, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1055 0 0) (##qualified-call (vanity compiler ffi reduce-type ##.loop.376) (bruijn ##.loop.376 9 0) (bruijn ##.k.1034 8 0) (##inline ##vcore.cdr (bruijn ##.t.377 8 1)) (bruijn ##.storage.378 8 2) (bruijn ##.special.379 8 3) (bruijn ##.const.380 8 4) (bruijn ##.longs.381 8 5) #t (bruijn ##.unsigned.383 8 7) (bruijn ##.signed.384 8 8)) (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k228) (bruijn ##.x.30.385 7 0) 'unsigned))
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
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376(runtime, _closure->env, 9, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
    }
  }
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k228, self)))),
      VGetArg(statics, 7-1, 0),
      _V0unsigned);
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k226(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k226, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1052 0 0) (basic-block 1 1 (##.reg.1755) ((##vcore.+ (bruijn ##.longs.381 8 5) 1)) (##qualified-call (vanity compiler ffi reduce-type ##.loop.376) (bruijn ##.loop.376 9 0) (bruijn ##.k.1034 8 0) (##inline ##vcore.cdr (bruijn ##.t.377 8 1)) (bruijn ##.storage.378 8 2) (bruijn ##.special.379 8 3) (bruijn ##.const.380 8 4) (bruijn ##.reg.1755 0 0) (bruijn ##.short.382 8 6) (bruijn ##.unsigned.383 8 7) (bruijn ##.signed.384 8 8))) (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k227) (bruijn ##.x.30.385 6 0) 'short))
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
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376(runtime, _closure->env, 9, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
    }
  }
    }
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k227, self)))),
      VGetArg(statics, 6-1, 0),
      _V0short);
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k221(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k221, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1043 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k222) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k223)) (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k226) (bruijn ##.x.30.385 5 0) 'long))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k222, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k223, self)))));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k226, self)))),
      VGetArg(statics, 5-1, 0),
      _V0long);
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k216(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k216, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k217) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k221))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k217, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k221, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k215(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1041 0 0) (##qualified-call (vanity compiler ffi reduce-type ##.loop.376) (bruijn ##.loop.376 5 0) (bruijn ##.k.1034 4 0) (##inline ##vcore.cdr (bruijn ##.t.377 4 1)) (bruijn ##.storage.378 4 2) (bruijn ##.special.379 4 3) (bruijn ##.const.380 4 4) (bruijn ##.longs.381 4 5) (bruijn ##.short.382 4 6) (bruijn ##.unsigned.383 4 7) (bruijn ##.signed.384 4 8)) (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k216) (bruijn ##.x.30.385 3 0) 'static))
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
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376(runtime, _closure->env, 9, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
    }
  }
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k216, self)))),
      statics->up->up->vars[0],
      _V0static);
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k213(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k213, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k214) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k215))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k214, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k215, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k212(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k212, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1039 0 0) (##qualified-call (vanity compiler ffi reduce-type ##.loop.376) (bruijn ##.loop.376 3 0) (bruijn ##.k.1034 2 0) (##inline ##vcore.cdr (bruijn ##.t.377 2 1)) (bruijn ##.storage.378 2 2) (bruijn ##.special.379 2 3) #t (bruijn ##.longs.381 2 5) (bruijn ##.short.382 2 6) (bruijn ##.unsigned.383 2 7) (bruijn ##.signed.384 2 8)) (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k213) (bruijn ##.x.30.385 1 0) 'restrict))
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
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376(runtime, _closure->env, 9, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
    }
  }
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k213, self)))),
      statics->vars[0],
      _V0restrict);
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k211(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k212) (bruijn ##.x.30.385 0 0) 'const)
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k212, self)))),
      _var0,
      _V0const);
}
void _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8) {
 if(argc != 9) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376, got ~D~N"
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
  // (if (##inline ##vcore.null? (bruijn ##.t.377 0 1)) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k208) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k209)) ((close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k211) (##inline ##vcore.car (bruijn ##.t.377 0 1))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k208, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k209, self)))));
} else {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376_V0k211, self)), 1,
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
  // (##qualified-call (vanity compiler ffi reduce-type ##.loop.376) (bruijn ##.loop.376 1 0) (bruijn ##.k.775 3 0) (bruijn ##.x.1071 0 0) #f #f #f 0 #f #f #f)
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
       _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376(runtime, _closure->env, 9, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
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
  // (letrec 3 ((close "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304") (close "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dappend__const_D305") (close "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dmaybe__string___Gsymbol_D306")) (letrec 1 ((close "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376")) ((bruijn ##.x.589 28 0) (close _V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V0k230) (bruijn ##.maybe-string->symbol.306 1 2) (bruijn ##.t.301 2 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Ddecide_D304, self))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dappend__const_D305, self))));
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dmaybe__string___Gsymbol_D306, self))));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0reduce__type_V10_Dloop_D376, self))));
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
  // ((bruijn ##.x.1082 0 0) (bruijn ##.k.1077 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k238(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k238, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.not (bruijn ##.reg.1756 1 0)) ((bruijn ##.x.598 27 0) (bruijn ##.k.1089 0 0) (##string ##.string.1783) (bruijn ##.expr.389 9 0)) ((bruijn ##.k.1089 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1783.sym, VPOINTER_OTHER),
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
  // ((bruijn ##.k.1083 3 0) (##inline ##vcore.cons 'typedef (##inline ##vcore.cons (bruijn ##.x.1086 0 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.97.393 6 0)) '()))))
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
  // (##vcore.string->symbol (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k240) (bruijn ##.name.396 3 0))
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
  // (basic-block 1 1 (##.reg.1756) ((##vcore.string? (bruijn ##.name.396 2 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k238) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k239)))
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
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.98.395 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k237) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0lambda35) (bruijn ##.kk.94.390 5 1)) ((bruijn ##.k.1077 4 0) #f))
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.98.395 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k236) (##inline ##vcore.car (bruijn ##.expr.98.395 0 0))) ((bruijn ##.k.1077 3 0) #f))
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.97.393 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k235) (##inline ##vcore.cdr (bruijn ##.expr.97.393 0 0))) ((bruijn ##.k.1077 2 0) #f))
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
  // (if (bruijn ##.p.1078 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k234) (##inline ##vcore.cdr (bruijn ##.expr.389 3 0))) ((bruijn ##.k.1077 1 0) #f))
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.389 2 0)) ((bruijn ##.x.595 23 0) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k233) 'variable (##inline ##vcore.car (bruijn ##.expr.389 2 0))) ((bruijn ##.k.1077 0 0) #f))
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
  // ((bruijn ##.x.598 21 0) (bruijn ##.k.1075 0 0) (##string ##.string.1784) (bruijn ##.expr.389 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1784.sym, VPOINTER_OTHER),
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
  // (##vcore.call-with-values (bruijn ##.k.1073 1 0) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0lambda36) (bruijn ##.kk.94.390 1 1))
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
  // (##vcore.call/cc (bruijn ##.k.1072 1 0) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0lambda34))
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
  // (##qualified-call (vanity compiler ffi reduce-declare) (bruijn ##.reduce-declare.220 1 0) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef_V0k231) (bruijn ##.ret.386 0 1) (bruijn ##.decl.387 0 2) (bruijn ##.table.388 0 3))
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
  // ((bruijn ##.x.1102 0 0) (bruijn ##.k.1098 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k252(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k252, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.not (bruijn ##.x.1118 1 0)) ((bruijn ##.x.598 29 0) (bruijn ##.k.1117 0 0) (##string ##.string.1785) (bruijn ##.expr.400 11 0)) ((bruijn ##.k.1117 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1785.sym, VPOINTER_OTHER),
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
  // (if (##inline ##vcore.not (bruijn ##.reg.1757 1 0)) ((bruijn ##.x.598 31 0) (bruijn ##.k.1114 0 0) (##string ##.string.1786) (bruijn ##.expr.400 13 0)) ((bruijn ##.k.1114 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1786.sym, VPOINTER_OTHER),
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
  // ((bruijn ##.k.1103 6 0) (##inline ##vcore.cons 'function (##inline ##vcore.cons (bruijn ##.x.1108 0 0) (##inline ##vcore.cons (bruijn ##.ret.407 8 0) (bruijn ##.args.408 7 0)))))
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
  // (##vcore.string->symbol (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k257) (bruijn ##.name.405 9 0))
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
  // (if (##inline ##vcore.not (bruijn ##.x.1112 0 0)) ((bruijn ##.x.598 33 0) (bruijn ##.k.1110 1 0) (##string ##.string.1787) (bruijn ##.name.405 10 0) (bruijn ##.arg.409 1 1)) ((bruijn ##.k.1110 1 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 4,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1787.sym, VPOINTER_OTHER),
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
  // (##qualified-call (vanity compiler ffi get-foreign-decoder) (bruijn ##.get-foreign-decoder.239 16 19) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k258) (bruijn ##.arg.409 0 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 16-1, 19));
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
  // ((bruijn ##.x.599 30 0) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k256) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0lambda39) (bruijn ##.args.408 5 0))
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
  // (basic-block 1 1 (##.reg.1757) ((##vcore.string? (bruijn ##.name.405 7 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k254) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k255)))
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
  // (##qualified-call (vanity compiler ffi get-foreign-encoder) (bruijn ##.get-foreign-encoder.238 11 18) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k251) (bruijn ##.ret.407 2 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 11-1, 18));
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
  // (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k250) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0lambda38) (bruijn ##.kk.99.401 7 1))
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
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k249) (##inline ##vcore.cdr (bruijn ##.expr.103.406 1 0)))
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.103.406 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k248) (##inline ##vcore.car (bruijn ##.expr.103.406 0 0))) ((bruijn ##.k.1098 4 0) #f))
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
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k247) (##inline ##vcore.cdr (bruijn ##.expr.102.404 1 0)))
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.102.404 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k246) (##inline ##vcore.car (bruijn ##.expr.102.404 0 0))) ((bruijn ##.k.1098 2 0) #f))
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
  // (if (bruijn ##.p.1099 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k245) (##inline ##vcore.cdr (bruijn ##.expr.400 3 0))) ((bruijn ##.k.1098 1 0) #f))
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.400 2 0)) ((bruijn ##.x.595 23 0) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k244) 'function (##inline ##vcore.car (bruijn ##.expr.400 2 0))) ((bruijn ##.k.1098 0 0) #f))
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
  // ((bruijn ##.x.598 21 0) (bruijn ##.k.1096 0 0) (##string ##.string.1788) (bruijn ##.expr.400 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1788.sym, VPOINTER_OTHER),
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
  // (##vcore.call-with-values (bruijn ##.k.1094 1 0) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0lambda40) (bruijn ##.kk.99.401 1 1))
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
  // (##vcore.call/cc (bruijn ##.k.1093 1 0) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0lambda37))
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
  // (##qualified-call (vanity compiler ffi reduce-declare) (bruijn ##.reduce-declare.220 1 0) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__function_V0k242) (bruijn ##.ret.397 0 1) (bruijn ##.decl.398 0 2) (bruijn ##.table.399 0 3))
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
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D412_V0k261(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D412_V0k261, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1131 1 0) ((bruijn ##.x.593 26 0) (bruijn ##.k.1132 0 0) (bruijn ##.enums.413 2 1)) ((bruijn ##.k.1132 0 0) (bruijn ##.val.414 2 2)))
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
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D412_V0k264(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D412_V0k264, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler ffi unwrap-enums ##.unwrap-enums-iter.412) (bruijn ##.unwrap-enums-iter.412 6 0) (bruijn ##.k.1121 5 0) (##inline ##vcore.cdr (bruijn ##.enums.413 5 1)) (bruijn ##.reg.1758 2 0) (##inline ##vcore.cons (##inline ##vcore.cons 'enum (##inline ##vcore.cons (bruijn ##.x.1128 0 0) (##inline ##vcore.cons (bruijn ##.val.416 3 0) '()))) (bruijn ##.table.415 5 3)))
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
       _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D412(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D412_V0k263(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D412_V0k263, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.string->symbol (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D412_V0k264) (bruijn ##.x.1130 0 0))
    VCallFuncWithGC(runtime, (VFunc)VStringSymbol2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D412_V0k264, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D412_V0k262(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D412_V0k262, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.1758) ((##vcore.+ (bruijn ##.val.416 1 0) 1)) ((bruijn ##.x.592 28 0) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D412_V0k263) (bruijn ##.enums.413 3 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->vars[0],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D412_V0k263, self)))),
      statics->up->up->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D412_V0k260(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D412_V0k260, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D412_V0k261) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D412_V0k262))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D412_V0k261, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D412_V0k262, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D412(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D412, got ~D~N"
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
  // (if (##inline ##vcore.null? (bruijn ##.enums.413 0 1)) ((bruijn ##.k.1121 0 0) (bruijn ##.table.415 0 3)) ((bruijn ##.x.593 24 0) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D412_V0k260) (bruijn ##.enums.413 0 1)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var3);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D412_V0k260, self)))),
      _var1);
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D417_V0k266(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D417_V0k266, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.595 25 0) (bruijn ##.k.1138 1 0) (bruijn ##.x.1139 0 0) (##string ##.string.1778))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 3,
      statics->vars[0],
      _var0,
      VEncodePointer(&_V10_Dstring_D1778.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D417_V0k265(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D417_V0k265, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (##inline ##vcore.car (bruijn ##.ret.418 1 1))) ((bruijn ##.x.592 27 0) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D417_V0k266) (bruijn ##.ret.418 1 1)) ((bruijn ##.k.1138 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VInlineCar2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D417_V0k266, self)))),
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D417_V0k268(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D417_V0k268, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.enums.419 0 0) (##qualified-call (vanity compiler ffi unwrap-enums ##.unwrap-enums-iter.412) (bruijn ##.unwrap-enums-iter.412 4 0) (bruijn ##.k.1133 2 0) (bruijn ##.enums.419 0 0) 0 (bruijn ##.table.411 5 2)) ((bruijn ##.k.1133 2 0) (bruijn ##.table.411 5 2)))
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
       _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D412(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VGetArg(statics, 5-1, 2));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D417_V0k267(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D417_V0k267, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1135 0 0) ((bruijn ##.x.597 22 0) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D417_V0k268) (bruijn ##.ret.418 1 1)) (##qualified-call (vanity compiler ffi unwrap-enums ##.loop.417) (bruijn ##.loop.417 2 0) (bruijn ##.k.1133 1 0) (##inline ##vcore.cdr (bruijn ##.ret.418 1 1))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D417_V0k268, self)))),
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
       _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D417(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D417(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D417, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.null? (bruijn ##.ret.418 0 1)) ((bruijn ##.k.1133 0 0) (bruijn ##.table.411 3 2)) ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D417_V0k265) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D417_V0k267)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D417_V0k265, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D417_V0k267, self)))));
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
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D412")) (letrec 1 ((close "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D417")) (##qualified-call (vanity compiler ffi unwrap-enums ##.loop.417) (bruijn ##.loop.417 0 0) (bruijn ##.k.1120 2 0) (bruijn ##.ret.410 2 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dunwrap__enums__iter_D412, self))));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D417, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      statics->up->vars[1];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums_V10_Dloop_D417(runtime, _closure->env, 2, _arg0, _arg1);
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
  // (if (bruijn ##.reg.1761 1 0) (##vcore.blob=? (bruijn ##.k.1182 0 0) (##string ##.string.1789) (##inline ##vcore.car (bruijn ##.parse.420 4 1))) ((bruijn ##.k.1182 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VBlobEqv2, 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1789.sym, VPOINTER_OTHER),
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
  // ((bruijn ##.x.1178 0 0) (bruijn ##.k.1175 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0lambda42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0lambda42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1179 0 0) (bruijn ##.table.421 5 2))
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
  // (if (bruijn ##.p.1176 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.parse.420 4 1))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k272) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0lambda42) (bruijn ##.kk.104.422 3 1)) ((bruijn ##.k.1175 2 0) #f)) ((bruijn ##.k.1175 2 0) #f))
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
  // (if (##inline ##vcore.pair? (bruijn ##.parse.420 2 1)) (basic-block 1 1 (##.reg.1761) ((##vcore.string? (##inline ##vcore.car (bruijn ##.parse.420 3 1)))) ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k270) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k271))) ((bruijn ##.k.1175 0 0) #f))
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
  // (if (bruijn ##.reg.1759 1 0) (##vcore.blob=? (bruijn ##.k.1171 0 0) (##string ##.string.1789) (##inline ##vcore.car (bruijn ##.parse.420 5 1))) ((bruijn ##.k.1171 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VBlobEqv2, 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1789.sym, VPOINTER_OTHER),
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
  // (if (bruijn ##.reg.1760 1 0) (##vcore.blob=? (bruijn ##.k.1167 0 0) (##string ##.string.1790) (##inline ##vcore.car (bruijn ##.expr.109.427 2 0))) ((bruijn ##.k.1167 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VBlobEqv2, 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1790.sym, VPOINTER_OTHER),
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
  // ((bruijn ##.x.1152 0 0) (bruijn ##.k.1146 9 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 9-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V10_Dloop_D435_V0k287(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V10_Dloop_D435_V0k287, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.x.1154 5 0) (##qualified-call (vanity compiler ffi unwrap-typedef) (bruijn ##.unwrap-typedef.223 19 3) (bruijn ##.k.1163 0 0) (bruijn ##.x.1156 3 0) (##inline ##vcore.car (bruijn ##.mydecls.436 1 1)) (bruijn ##.table.437 1 2)) (##qualified-call (vanity compiler ffi unwrap-function) (bruijn ##.unwrap-function.224 19 4) (bruijn ##.k.1163 0 0) (bruijn ##.x.1156 3 0) (##inline ##vcore.car (bruijn ##.mydecls.436 1 1)) (bruijn ##.table.437 1 2)))
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
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V10_Dloop_D435_V0k288(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V10_Dloop_D435_V0k288, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler ffi unwrap-declares ##.loop.435) (bruijn ##.loop.435 2 0) (bruijn ##.k.1157 1 0) (##inline ##vcore.cdr (bruijn ##.mydecls.436 1 1)) (##inline ##vcore.cons (bruijn ##.x.1162 0 0) (bruijn ##.table.437 1 2)))
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
       _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V10_Dloop_D435(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V10_Dloop_D435(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V10_Dloop_D435, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.mydecls.436 0 1)) (##qualified-call (vanity compiler ffi unwrap-declares) (bruijn ##.unwrap-declares.226 18 6) (bruijn ##.k.1157 0 0) (##inline ##vcore.cons '(##string ##.string.1789) (##inline ##vcore.cdr (bruijn ##.expr.108.426 11 0))) (bruijn ##.table.437 0 2)) ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V10_Dloop_D435_V0k287) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V10_Dloop_D435_V0k288)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 18-1, 6));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VInlineCons2(runtime,
        VEncodePointer(&_V10_Dstring_D1789.sym, VPOINTER_OTHER),
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
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V10_Dloop_D435_V0k287, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V10_Dloop_D435_V0k288, self)))));
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
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V10_Dloop_D435")) (##qualified-call (vanity compiler ffi unwrap-declares ##.loop.435) (bruijn ##.loop.435 0 0) (bruijn ##.k.1153 4 0) (##inline ##vcore.cdr (bruijn ##.expr.110.428 6 0)) (bruijn ##.x.1155 2 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V10_Dloop_D435, self))));
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
       _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V10_Dloop_D435(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
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
  // (##qualified-call (vanity compiler ffi reduce-type) (bruijn ##.reduce-type.222 15 2) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k286) (bruijn ##.ret.429 3 0) (bruijn ##.table.421 14 2) #t)
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
  // (##qualified-call (vanity compiler ffi unwrap-enums) (bruijn ##.unwrap-enums.225 14 5) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k285) (bruijn ##.ret.429 2 0) (bruijn ##.table.421 13 2))
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
  // ((bruijn ##.x.600 27 0) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k284) (##string ##.string.1791) (bruijn ##.ret.429 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k284, self)))),
      VEncodePointer(&_V10_Dstring_D1791.sym, VPOINTER_OTHER),
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
  // (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k283) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0lambda43) (bruijn ##.kk.104.422 10 1))
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.110.428 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k282) (##inline ##vcore.car (bruijn ##.expr.110.428 0 0))) ((bruijn ##.k.1146 7 0) #f))
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
  // (if (bruijn ##.p.1150 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k281) (##inline ##vcore.cdr (bruijn ##.expr.109.427 2 0))) ((bruijn ##.k.1146 6 0) #f))
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.109.427 0 0)) (basic-block 1 1 (##.reg.1760) ((##vcore.string? (##inline ##vcore.car (bruijn ##.expr.109.427 1 0)))) ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k279) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k280))) ((bruijn ##.k.1146 4 0) #f))
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.108.426 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k278) (##inline ##vcore.car (bruijn ##.expr.108.426 0 0))) ((bruijn ##.k.1146 3 0) #f))
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
  // (if (bruijn ##.p.1147 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k277) (##inline ##vcore.cdr (bruijn ##.parse.420 5 1))) ((bruijn ##.k.1146 2 0) #f))
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
  // (if (##inline ##vcore.pair? (bruijn ##.parse.420 3 1)) (basic-block 1 1 (##.reg.1759) ((##vcore.string? (##inline ##vcore.car (bruijn ##.parse.420 4 1)))) ((close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k275) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0k276))) ((bruijn ##.k.1146 0 0) #f))
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
  // ((bruijn ##.x.590 28 0) (bruijn ##.k.1142 2 0) (##string ##.string.1776))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 2,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1776.sym, VPOINTER_OTHER));
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
  // (##vcore.call/cc (bruijn ##.k.1141 0 0) (close _V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0lambda41))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares_V0lambda41, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D440_V0k292(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D440_V0k292, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.not (bruijn ##.x.1192 0 0)) ((bruijn ##.err-proc.444 3 4) (bruijn ##.k.1186 3 0) (##inline ##vcore.car (bruijn ##.table.443 3 3))) ((bruijn ##.k.1186 3 0) #t))
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
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D440_V0k291(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D440_V0k291, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.x.1194 0 0)) (##qualified-call (vanity compiler ffi table->defines ##.duplicate-mismatch.440) (bruijn ##.duplicate-mismatch.440 3 0) (bruijn ##.k.1186 2 0) (bruijn ##.x.441 2 1) (bruijn ##.entry.442 2 2) (##inline ##vcore.cdr (bruijn ##.table.443 2 3)) (bruijn ##.err-proc.444 2 4)) ((bruijn ##.x.595 24 0) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D440_V0k292) (bruijn ##.entry.442 2 2) (##inline ##vcore.car (bruijn ##.table.443 2 3))))
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
       _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D440(runtime, _closure->env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D440_V0k292, self)))),
      statics->up->vars[2],
      VInlineCar2(runtime,
        statics->up->vars[3]));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D440_V0k290(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D440_V0k290, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D440_V0k291) (bruijn ##.x.441 1 1) (bruijn ##.x.1195 0 0))
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D440_V0k291, self)))),
      statics->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D440(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 if(argc != 5) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D440, got ~D~N"
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
  // (if (##inline ##vcore.null? (bruijn ##.table.443 0 3)) ((bruijn ##.k.1186 0 0) #f) ((bruijn ##.x.593 24 0) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D440_V0k290) (bruijn ##.table.443 0 3)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var3))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D440_V0k290, self)))),
      _var3);
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k299(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k299, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1243 0 0) (bruijn ##.k.1239 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k301(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k301, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler ffi table->defines) (bruijn ##.table->defines.227 12 7) (bruijn ##.k.1244 2 0) (##inline ##vcore.cdr (bruijn ##.table.438 11 1)) (##inline ##vcore.cons (##inline ##vcore.cons 'define (##inline ##vcore.cons (bruijn ##.name.449 4 0) (##inline ##vcore.cons (##inline ##vcore.cons '##foreign.function (##inline ##vcore.cons '(##string ##.string.1792) (##inline ##vcore.cons '(##string ##.string.1793) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.115.450 3 0)) (##inline ##vcore.cons (bruijn ##.x.1257 0 0) (##inline ##vcore.cdr (bruijn ##.expr.115.450 3 0))))))) '()))) (bruijn ##.acc.439 11 2)))
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
        VEncodePointer(&_V10_Dstring_D1792.sym, VPOINTER_OTHER),
        VInlineCons2(runtime,
        VEncodePointer(&_V10_Dstring_D1793.sym, VPOINTER_OTHER),
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
  // (if (bruijn ##.p.1245 0 0) (##qualified-call (vanity compiler ffi table->defines) (bruijn ##.table->defines.227 11 7) (bruijn ##.k.1244 1 0) (##inline ##vcore.cdr (bruijn ##.table.438 10 1)) (bruijn ##.acc.439 10 2)) (##vcore.symbol->string (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k301) (bruijn ##.name.449 3 0)))
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
  // ((bruijn ##.x.598 27 0) (bruijn ##.k.1260 0 0) (##string ##.string.1794) (##inline ##vcore.car (bruijn ##.table.438 10 1)) (bruijn ##.conflict.453 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 4,
      _var0,
      VEncodePointer(&_V10_Dstring_D1794.sym, VPOINTER_OTHER),
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
  // (##qualified-call (vanity compiler ffi table->defines ##.duplicate-mismatch.440) (bruijn ##.duplicate-mismatch.440 8 0) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k300) (bruijn ##.name.449 2 0) (##inline ##vcore.car (bruijn ##.table.438 9 1)) (##inline ##vcore.cdr (bruijn ##.table.438 9 1)) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda46))
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
       _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D440(runtime, _closure->env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.115.450 0 0)) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k299) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda45) (bruijn ##.kk.111.445 6 1)) ((bruijn ##.k.1239 4 0) #f))
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
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k298) (##inline ##vcore.cdr (bruijn ##.expr.114.448 1 0)))
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.114.448 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k297) (##inline ##vcore.car (bruijn ##.expr.114.448 0 0))) ((bruijn ##.k.1239 2 0) #f))
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
  // (if (bruijn ##.p.1240 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k296) (##inline ##vcore.cdr (bruijn ##.input.112.446 2 0))) ((bruijn ##.k.1239 1 0) #f))
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
  // (if (##inline ##vcore.pair? (bruijn ##.input.112.446 1 0)) ((bruijn ##.x.595 24 0) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k295) 'function (##inline ##vcore.car (bruijn ##.input.112.446 1 0))) ((bruijn ##.k.1239 0 0) #f))
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
  // ((bruijn ##.x.1225 0 0) (bruijn ##.k.1220 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k309(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k309, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler ffi table->defines) (bruijn ##.table->defines.227 12 7) (bruijn ##.k.1226 1 0) (##inline ##vcore.cdr (bruijn ##.table.438 11 1)) (##inline ##vcore.cons (##inline ##vcore.cons 'define-constant (##inline ##vcore.cons (bruijn ##.name.456 3 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.118.457 2 0)) '()))) (bruijn ##.acc.439 11 2)))
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
  // ((bruijn ##.x.598 28 0) (bruijn ##.k.1234 0 0) (##string ##.string.1794) (##inline ##vcore.car (bruijn ##.table.438 11 1)) (bruijn ##.conflict.459 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 4,
      _var0,
      VEncodePointer(&_V10_Dstring_D1794.sym, VPOINTER_OTHER),
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
  // (##qualified-call (vanity compiler ffi table->defines ##.duplicate-mismatch.440) (bruijn ##.duplicate-mismatch.440 9 0) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k309) (bruijn ##.name.456 2 0) #f (##inline ##vcore.cdr (bruijn ##.table.438 10 1)) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda48))
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
       _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D440(runtime, _closure->env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.118.457 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.118.457 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k308) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda47) (bruijn ##.kk.111.445 7 1)) ((bruijn ##.k.1220 4 0) #f)) ((bruijn ##.k.1220 4 0) #f))
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
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k307) (##inline ##vcore.cdr (bruijn ##.expr.117.455 1 0)))
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.117.455 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k306) (##inline ##vcore.car (bruijn ##.expr.117.455 0 0))) ((bruijn ##.k.1220 2 0) #f))
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
  // (if (bruijn ##.p.1221 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k305) (##inline ##vcore.cdr (bruijn ##.input.112.446 3 0))) ((bruijn ##.k.1220 1 0) #f))
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
  // (if (##inline ##vcore.pair? (bruijn ##.input.112.446 2 0)) ((bruijn ##.x.595 25 0) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k304) 'enum (##inline ##vcore.car (bruijn ##.input.112.446 2 0))) ((bruijn ##.k.1220 0 0) #f))
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
  // ((bruijn ##.x.1209 0 0) (bruijn ##.k.1204 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k316(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k316, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler ffi table->defines) (bruijn ##.table->defines.227 12 7) (bruijn ##.k.1210 1 0) (##inline ##vcore.cdr (bruijn ##.table.438 11 1)) (bruijn ##.acc.439 11 2))
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
  // ((bruijn ##.x.598 28 0) (bruijn ##.k.1215 0 0) (##string ##.string.1794) (##inline ##vcore.car (bruijn ##.table.438 11 1)) (bruijn ##.conflict.465 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 4,
      _var0,
      VEncodePointer(&_V10_Dstring_D1794.sym, VPOINTER_OTHER),
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
  // (##qualified-call (vanity compiler ffi table->defines ##.duplicate-mismatch.440) (bruijn ##.duplicate-mismatch.440 9 0) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k316) (##inline ##vcore.car (bruijn ##.expr.120.461 2 0)) (##inline ##vcore.car (bruijn ##.table.438 10 1)) (##inline ##vcore.cdr (bruijn ##.table.438 10 1)) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda50))
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
       _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D440(runtime, _closure->env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.121.463 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.121.463 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k315) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda49) (bruijn ##.kk.111.445 7 1)) ((bruijn ##.k.1204 3 0) #f)) ((bruijn ##.k.1204 3 0) #f))
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.120.461 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k314) (##inline ##vcore.cdr (bruijn ##.expr.120.461 0 0))) ((bruijn ##.k.1204 2 0) #f))
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
  // (if (bruijn ##.p.1205 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k313) (##inline ##vcore.cdr (bruijn ##.input.112.446 4 0))) ((bruijn ##.k.1204 1 0) #f))
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
  // (if (##inline ##vcore.pair? (bruijn ##.input.112.446 3 0)) ((bruijn ##.x.595 26 0) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k312) 'typedef (##inline ##vcore.car (bruijn ##.input.112.446 3 0))) ((bruijn ##.k.1204 0 0) #f))
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
  // ((bruijn ##.x.598 24 0) (bruijn ##.k.1201 0 0) (##string ##.string.1795) (##inline ##vcore.car (bruijn ##.table.438 7 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1795.sym, VPOINTER_OTHER),
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
  // (##vcore.call-with-values (bruijn ##.k.1197 4 0) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda51) (bruijn ##.kk.111.445 4 1))
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
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0k293) (##inline ##vcore.car (bruijn ##.table.438 2 1)))
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
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D440")) (if (##inline ##vcore.null? (bruijn ##.table.438 1 1)) ((bruijn ##.k.1185 1 0) (bruijn ##.acc.439 1 2)) (##vcore.call/cc (bruijn ##.k.1185 1 0) (close _V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V0lambda44))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines_V10_Dduplicate__mismatch_D440, self))));
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
  // ((bruijn ##.k.1263 3 0) (##inline ##vcore.cons (bruijn ##.x.1266 1 0) (bruijn ##.x.1267 0 0)))
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
  // (##qualified-call (vanity compiler ffi deep-copy) (bruijn ##.deep-copy.228 3 8) (close _V50_V0vanity_V0compiler_V0ffi_V0deep__copy_V0k319) (##inline ##vcore.cdr (bruijn ##.x.466 2 1)))
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
  // (basic-block 1 1 (##.reg.1762) ((##vcore.string? (bruijn ##.x.466 1 1))) (if (bruijn ##.reg.1762 0 0) (##vcore.substring (bruijn ##.k.1263 1 0) (bruijn ##.x.466 1 1)) (if (##inline ##vcore.pair? (bruijn ##.x.466 1 1)) (##qualified-call (vanity compiler ffi deep-copy) (bruijn ##.deep-copy.228 2 8) (close _V50_V0vanity_V0compiler_V0ffi_V0deep__copy_V0k318) (##inline ##vcore.car (bruijn ##.x.466 1 1))) ((bruijn ##.k.1263 1 0) (bruijn ##.x.466 1 1)))))
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
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k323(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k323, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.reg.1764 1 0) (##vcore.blob=? (bruijn ##.k.1311 0 0) (##string ##.string.1789) (##inline ##vcore.car (bruijn ##.parse.471 4 1))) ((bruijn ##.k.1311 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VBlobEqv2, 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1789.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k327(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k327, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.reg.1765 1 0) (##vcore.blob=? (bruijn ##.k.1307 0 0) (##string ##.string.1790) (##inline ##vcore.car (bruijn ##.expr.136.476 2 0))) ((bruijn ##.k.1307 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VBlobEqv2, 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1790.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        statics->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k331(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k331, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1302 0 0) (bruijn ##.k.1293 9 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 9-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0lambda53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0lambda53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.603 27 0) (bruijn ##.k.1303 0 0) (bruijn ##.parse.471 11 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 2,
      _var0,
      VGetArg(statics, 11-1, 1));
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k330(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k330, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.138.479 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.138.479 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.135.475 5 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k331) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0lambda53) (bruijn ##.kk.132.472 9 1)) ((bruijn ##.k.1293 8 0) #f)) ((bruijn ##.k.1293 8 0) #f)) ((bruijn ##.k.1293 8 0) #f))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k331, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0lambda53, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k329(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k329, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.137.477 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k330) (##inline ##vcore.cdr (bruijn ##.expr.137.477 0 0))) ((bruijn ##.k.1293 7 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k330, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k328(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k328, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1297 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k329) (##inline ##vcore.cdr (bruijn ##.expr.136.476 2 0))) ((bruijn ##.k.1293 6 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k329, self)), 1,
      VInlineCdr2(runtime,
        statics->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k326(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k326, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.136.476 0 0)) (basic-block 1 1 (##.reg.1765) ((##vcore.string? (##inline ##vcore.car (bruijn ##.expr.136.476 1 0)))) ((close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k327) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k328))) ((bruijn ##.k.1293 4 0) #f))
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
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k327, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k328, self)))));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k325(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k325, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.135.475 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k326) (##inline ##vcore.car (bruijn ##.expr.135.475 0 0))) ((bruijn ##.k.1293 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k326, self)), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k324(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k324, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1294 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k325) (##inline ##vcore.cdr (bruijn ##.parse.471 4 1))) ((bruijn ##.k.1293 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k325, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k322(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k322, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.parse.471 2 1)) (basic-block 1 1 (##.reg.1764) ((##vcore.string? (##inline ##vcore.car (bruijn ##.parse.471 3 1)))) ((close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k323) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k324))) ((bruijn ##.k.1293 0 0) #f))
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
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k323, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k324, self)))));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k334(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k334, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.reg.1763 1 0) (##vcore.blob=? (bruijn ##.k.1289 0 0) (##string ##.string.1796) (##inline ##vcore.car (bruijn ##.parse.471 5 1))) ((bruijn ##.k.1289 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VBlobEqv2, 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1796.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k338(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k338, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1285 0 0) (bruijn ##.k.1280 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0lambda54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0lambda54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1286 0 0) (##inline ##vcore.cdr (bruijn ##.parse.471 8 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 8-1, 1)));
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k337(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k337, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.141.483 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.141.483 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k338) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0lambda54) (bruijn ##.kk.132.472 6 1)) ((bruijn ##.k.1280 4 0) #f)) ((bruijn ##.k.1280 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k338, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0lambda54, self)))),
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
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k336(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k336, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.140.481 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k337) (##inline ##vcore.cdr (bruijn ##.expr.140.481 0 0))) ((bruijn ##.k.1280 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k337, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k335(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k335, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1281 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k336) (##inline ##vcore.cdr (bruijn ##.parse.471 5 1))) ((bruijn ##.k.1280 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k336, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k333(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k333, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.parse.471 3 1)) (basic-block 1 1 (##.reg.1763) ((##vcore.string? (##inline ##vcore.car (bruijn ##.parse.471 4 1)))) ((close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k334) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k335))) ((bruijn ##.k.1280 0 0) #f))
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
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k334, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k335, self)))));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k340(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k340, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1277 1 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0lambda55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0lambda55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.598 25 0) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k340) (##string ##.string.1797) (bruijn ##.parse.471 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k340, self)))),
      VEncodePointer(&_V10_Dstring_D1797.sym, VPOINTER_OTHER),
      statics->up->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k339(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k339, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1274 2 0) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0lambda55) (bruijn ##.kk.132.472 2 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0lambda55, self)))),
      statics->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k332(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k332, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k333) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k339))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k333, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k339, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0lambda52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0lambda52, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k322) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k332))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k322, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0k332, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.k.1273 0 0) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0lambda52))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470_V0lambda52, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k347(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k347, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1352 0 0) (bruijn ##.k.1346 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0lambda57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0lambda57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1353 0 0) (bruijn ##.expr.467 11 1))
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.128.493 0 0)) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k347) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0lambda57) (bruijn ##.kk.122.484 6 1)) ((bruijn ##.k.1346 5 0) #f))
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.127.491 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k346) (##inline ##vcore.cdr (bruijn ##.expr.127.491 0 0))) ((bruijn ##.k.1346 4 0) #f))
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.126.489 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k345) (##inline ##vcore.cdr (bruijn ##.expr.126.489 0 0))) ((bruijn ##.k.1346 3 0) #f))
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.125.487 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k344) (##inline ##vcore.cdr (bruijn ##.expr.125.487 0 0))) ((bruijn ##.k.1346 2 0) #f))
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
  // (if (bruijn ##.p.1347 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k343) (##inline ##vcore.cdr (bruijn ##.expr.467 6 1))) ((bruijn ##.k.1346 1 0) #f))
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.467 5 1)) ((bruijn ##.x.595 25 0) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k342) '##foreign.function (##inline ##vcore.car (bruijn ##.expr.467 5 1))) ((bruijn ##.k.1346 0 0) #f))
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
  // ((bruijn ##.x.1324 0 0) (bruijn ##.k.1319 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k357(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k357, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.not (bruijn ##.x.1342 1 0)) ((bruijn ##.x.598 31 0) (bruijn ##.k.1341 0 0) (##string ##.string.1798) (bruijn ##.lang.498 5 0)) ((bruijn ##.k.1341 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1798.sym, VPOINTER_OTHER),
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
  // ((bruijn ##.k.1325 12 0) (##inline ##vcore.cons '##foreign.function (##inline ##vcore.cons '(##string ##.string.1792) (##inline ##vcore.cons (bruijn ##.decl.500 13 0) (##inline ##vcore.cons (bruijn ##.x.1331 2 0) (##inline ##vcore.cons (bruijn ##.x.1333 1 0) (bruijn ##.x.1334 0 0)))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 1,
      VInlineCons2(runtime,
        _V10foreign_Dfunction,
        VInlineCons2(runtime,
        VEncodePointer(&_V10_Dstring_D1792.sym, VPOINTER_OTHER),
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
  // ((bruijn ##.x.602 36 0) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k368) (bruijn ##.ff.502 2 0))
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
  // ((bruijn ##.x.594 43 0) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k367) (bruijn ##.ff.502 1 0))
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
  // ((bruijn ##.x.601 35 0) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k366) (bruijn ##.ff.502 0 0))
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
  // (##qualified-call (vanity compiler ffi unwrap-function) (bruijn ##.unwrap-function.224 21 4) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k365) (bruijn ##.x.1335 1 0) (bruijn ##.x.1336 0 0) '())
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
  // ((bruijn ##.x.594 40 0) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k364) (bruijn ##.parse.501 2 0))
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
  // (##qualified-call (vanity compiler ffi reduce-type) (bruijn ##.reduce-type.222 19 2) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k363) (##inline ##vcore.car (bruijn ##.parse.501 1 0)) '() #t)
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
  // ((bruijn ##.release-parse.469 14 1) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k362))
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
  // (##qualified-call (vanity compiler ffi validate-foreign-function ##.is-one-decl.470) (bruijn ##.is-one-decl.470 13 2) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k361) (bruijn ##.x.1338 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 13-1, 2));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k361, self))));
    VWORD _arg1 = 
      _var0;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470(runtime, _closure->env, 2, _arg0, _arg1);
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
  // (##qualified-call (vanity compiler ffi deep-copy) (bruijn ##.deep-copy.228 16 8) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k360) (bruijn ##.x.1339 0 0))
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
  // ((bruijn ##.parse-decl-c.468 11 0) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k359) (bruijn ##.decl.500 3 0))
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
  // ((bruijn ##.x.595 32 0) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k356) (bruijn ##.lang.498 3 0) (##string ##.string.1792))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k356, self)))),
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1792.sym, VPOINTER_OTHER));
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
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.131.499 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k355) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0lambda58) (bruijn ##.kk.122.484 7 1)) ((bruijn ##.k.1319 5 0) #f))
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.131.499 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k354) (##inline ##vcore.car (bruijn ##.expr.131.499 0 0))) ((bruijn ##.k.1319 4 0) #f))
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
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k353) (##inline ##vcore.cdr (bruijn ##.expr.130.497 1 0)))
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.130.497 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k352) (##inline ##vcore.car (bruijn ##.expr.130.497 0 0))) ((bruijn ##.k.1319 2 0) #f))
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
  // (if (bruijn ##.p.1320 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k351) (##inline ##vcore.cdr (bruijn ##.expr.467 7 1))) ((bruijn ##.k.1319 1 0) #f))
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.467 6 1)) ((bruijn ##.x.595 26 0) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k350) '##foreign.function (##inline ##vcore.car (bruijn ##.expr.467 6 1))) ((bruijn ##.k.1319 0 0) #f))
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
  // ((bruijn ##.x.598 24 0) (bruijn ##.k.1317 0 0) (##string ##.string.1799) (bruijn ##.expr.467 7 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1799.sym, VPOINTER_OTHER),
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
  // (##vcore.call-with-values (bruijn ##.k.1314 2 0) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0lambda59) (bruijn ##.kk.122.484 2 1))
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
  // (letrec 3 ((bruijn ##.x.1271 2 0) (bruijn ##.x.1272 1 0) (close "_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470")) (##vcore.call/cc (bruijn ##.k.1270 3 0) (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0lambda56)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = statics->up->vars[0];
    self->vars[1] = statics->vars[0];
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V10_Dis__one__decl_D470, self))));
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
  // (##vcore.function (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k321) (##string ##.string.1800))
    VCallFuncWithGC(runtime, (VFunc)VFunction2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k321, self)))),
      VEncodePointer(&_V10_Dstring_D1800.sym, VPOINTER_OTHER));
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
  // (##vcore.function (close _V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k320) (##string ##.string.1801))
    VCallFuncWithGC(runtime, (VFunc)VFunction2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function_V0k320, self)))),
      VEncodePointer(&_V10_Dstring_D1801.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0ffi_V0find__file_V0k371(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0find__file_V0k371, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1357 0 0) ((bruijn ##.k.1355 2 0) (bruijn ##.path.505 1 0)) (##qualified-call (vanity compiler ffi find-file) (bruijn ##.find-file.230 3 10) (bruijn ##.k.1355 2 0) (bruijn ##.file.503 2 1) (##inline ##vcore.cdr (bruijn ##.paths.504 2 2))))
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
  // ((bruijn ##.x.604 12 0) (close _V50_V0vanity_V0compiler_V0ffi_V0find__file_V0k371) (bruijn ##.path.505 0 0) 4)
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
  // (if (##inline ##vcore.null? (bruijn ##.paths.504 0 2)) ((bruijn ##.x.598 17 0) (bruijn ##.k.1355 0 0) (##string ##.string.1802) (bruijn ##.file.503 0 1)) ((bruijn ##.x.605 10 0) (close _V50_V0vanity_V0compiler_V0ffi_V0find__file_V0k370) (##string ##.string.1803) (##inline ##vcore.car (bruijn ##.paths.504 0 2)) (bruijn ##.file.503 0 1)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1802.sym, VPOINTER_OTHER),
      _var1);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0find__file_V0k370, self)))),
      VEncodePointer(&_V10_Dstring_D1803.sym, VPOINTER_OTHER),
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
  // ((bruijn ##.x.605 12 0) (bruijn ##.k.1360 2 0) (##string ##.string.1804) (bruijn ##.x.1361 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 3,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1804.sym, VPOINTER_OTHER),
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
  // ((bruijn ##.x.1362 0 0) (close _V50_V0vanity_V0compiler_V0ffi_V0get__install__root_V0k373))
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
  // (if (bruijn ##.x.606 9 0) ((bruijn ##.k.1360 0 0) (bruijn ##.x.606 9 0)) (##vcore.function (close _V50_V0vanity_V0compiler_V0ffi_V0get__install__root_V0k372) (##string ##.string.1805)))
if(VDecodeBool(
VGetArg(statics, 9-1, 0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 9-1, 0));
} else {
    VCallFuncWithGC(runtime, (VFunc)VFunction2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__install__root_V0k372, self)))),
      VEncodePointer(&_V10_Dstring_D1805.sym, VPOINTER_OTHER));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0make__preprocess__command_V0k375(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0make__preprocess__command_V0k375, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.605 12 0) (bruijn ##.k.1363 2 0) (##string ##.string.1806) (bruijn ##.x.607 10 0) (bruijn ##.file.506 2 1) (bruijn ##.x.1365 0 0) (##string ##.string.1807) (bruijn ##.architecture.507 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 7,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1806.sym, VPOINTER_OTHER),
      VGetArg(statics, 10-1, 0),
      statics->up->vars[1],
      _var0,
      VEncodePointer(&_V10_Dstring_D1807.sym, VPOINTER_OTHER),
      statics->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0make__preprocess__command_V0k376(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0make__preprocess__command_V0k376, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.605 12 0) (bruijn ##.k.1363 2 0) (##string ##.string.1808) (bruijn ##.x.607 10 0) (bruijn ##.file.506 2 1) (bruijn ##.x.1366 0 0) (##string ##.string.1807) (bruijn ##.architecture.507 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 7,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1808.sym, VPOINTER_OTHER),
      VGetArg(statics, 10-1, 0),
      statics->up->vars[1],
      _var0,
      VEncodePointer(&_V10_Dstring_D1807.sym, VPOINTER_OTHER),
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
  // (if (bruijn ##.p.1364 0 0) (##qualified-call (vanity compiler ffi get-install-root) (bruijn ##.get-install-root.231 2 11) (close _V50_V0vanity_V0compiler_V0ffi_V0make__preprocess__command_V0k375)) (##qualified-call (vanity compiler ffi get-install-root) (bruijn ##.get-install-root.231 2 11) (close _V50_V0vanity_V0compiler_V0ffi_V0make__preprocess__command_V0k376)))
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
  // (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0ffi_V0make__preprocess__command_V0k374) (bruijn ##.x.608 7 0) 'windows)
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
  // ((bruijn ##.x.1379 0 0) (bruijn ##.k.1374 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k386(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k386, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.not (bruijn ##.x.1397 1 0)) ((bruijn ##.x.598 29 0) (bruijn ##.k.1396 0 0) (##string ##.string.1798) (bruijn ##.expr.508 12 1)) ((bruijn ##.k.1396 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1798.sym, VPOINTER_OTHER),
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
  // (if (##inline ##vcore.not (bruijn ##.reg.1766 1 0)) ((bruijn ##.x.598 31 0) (bruijn ##.k.1393 0 0) (##string ##.string.1809) (bruijn ##.expr.508 14 1)) ((bruijn ##.k.1393 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1809.sym, VPOINTER_OTHER),
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
  // ((bruijn ##.k.1380 14 0) (##inline ##vcore.cons (##inline ##vcore.cons '##foreign.declare (##inline ##vcore.cons (bruijn ##.x.1389 2 0) '())) (bruijn ##.x.1386 0 0)))
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
  // (##qualified-call (vanity compiler ffi table->defines) (bruijn ##.table->defines.227 24 7) (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k399) (bruijn ##.x.1387 0 0) '())
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
  // (##qualified-call (vanity compiler ffi unwrap-declares) (bruijn ##.unwrap-declares.226 23 6) (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k398) (bruijn ##.parse.522 3 0) '())
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
  // ((bruijn ##.x.605 31 0) (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k397) (##string ##.string.1810) (bruijn ##.file.519 12 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k397, self)))),
      VEncodePointer(&_V10_Dstring_D1810.sym, VPOINTER_OTHER),
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
  // ((bruijn ##.x.609 26 0) (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k396) (bruijn ##.fd.521 3 0))
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
  // ((bruijn ##.release-parse.512 16 1) (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k395))
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
  // (##qualified-call (vanity compiler ffi deep-copy) (bruijn ##.deep-copy.228 19 8) (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k394) (bruijn ##.x.1390 0 0))
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
  // ((bruijn ##.parse-header-c.511 14 0) (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k393) (bruijn ##.fd.521 0 0))
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
  // (##vcore.open-input-process (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k392) (bruijn ##.cmd.520 0 0))
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
  // (##qualified-call (vanity compiler ffi make-preprocess-command) (bruijn ##.make-preprocess-command.232 16 12) (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k391) (bruijn ##.x.1391 0 0) (bruijn ##.architecture.510 15 3))
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
  // (##qualified-call (vanity compiler ffi find-file) (bruijn ##.find-file.230 15 10) (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k390) (bruijn ##.file.519 5 0) (bruijn ##.paths.509 14 2))
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
  // (basic-block 1 1 (##.reg.1766) ((##vcore.string? (bruijn ##.file.519 4 0))) ((close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k388) (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k389)))
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
  // ((bruijn ##.x.595 30 0) (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k385) (##inline ##vcore.car (bruijn ##.expr.145.516 3 0)) (##string ##.string.1792))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k385, self)))),
      VInlineCar2(runtime,
        statics->up->up->vars[0]),
      VEncodePointer(&_V10_Dstring_D1792.sym, VPOINTER_OTHER));
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
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.146.518 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k384) (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0lambda61) (bruijn ##.kk.142.513 5 1)) ((bruijn ##.k.1374 4 0) #f))
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.146.518 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k383) (##inline ##vcore.car (bruijn ##.expr.146.518 0 0))) ((bruijn ##.k.1374 3 0) #f))
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.145.516 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k382) (##inline ##vcore.cdr (bruijn ##.expr.145.516 0 0))) ((bruijn ##.k.1374 2 0) #f))
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
  // (if (bruijn ##.p.1375 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k381) (##inline ##vcore.cdr (bruijn ##.expr.508 6 1))) ((bruijn ##.k.1374 1 0) #f))
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.508 5 1)) ((bruijn ##.x.595 25 0) (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k380) '##foreign.import (##inline ##vcore.car (bruijn ##.expr.508 5 1))) ((bruijn ##.k.1374 0 0) #f))
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
  // ((bruijn ##.x.598 23 0) (bruijn ##.k.1372 0 0) (##string ##.string.1811) (bruijn ##.expr.508 6 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1811.sym, VPOINTER_OTHER),
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
  // (##vcore.call-with-values (bruijn ##.k.1370 1 0) (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0lambda62) (bruijn ##.kk.142.513 1 1))
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
  // (letrec 2 ((bruijn ##.x.1368 2 0) (bruijn ##.x.1369 1 0)) (##vcore.call/cc (bruijn ##.k.1367 3 0) (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0lambda60)))
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
  // (##vcore.function (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k378) (##string ##.string.1800))
    VCallFuncWithGC(runtime, (VFunc)VFunction2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k378, self)))),
      VEncodePointer(&_V10_Dstring_D1800.sym, VPOINTER_OTHER));
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
  // (##vcore.function (close _V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k377) (##string ##.string.1812))
    VCallFuncWithGC(runtime, (VFunc)VFunction2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import_V0k377, self)))),
      VEncodePointer(&_V10_Dstring_D1812.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.x.605 10 0) (bruijn ##.k.1400 0 0) (##string ##.string.1813) (bruijn ##.name.523 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1813.sym, VPOINTER_OTHER),
      _var1);
}
void _V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign__basic(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign__basic, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.x.605 10 0) (bruijn ##.k.1401 0 0) (##string ##.string.1814) (bruijn ##.name.524 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1814.sym, VPOINTER_OTHER),
      _var1);
}
void _V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign__function(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign__function, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.x.605 10 0) (bruijn ##.k.1402 0 0) (##string ##.string.1815) (bruijn ##.name.525 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1815.sym, VPOINTER_OTHER),
      _var1);
}
void _V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign__closure(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign__closure, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.x.605 10 0) (bruijn ##.k.1403 0 0) (##string ##.string.1816) (bruijn ##.name.526 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1816.sym, VPOINTER_OTHER),
      _var1);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__encoder_V0k401(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__encoder_V0k401, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.type.527 1 1)) (##vcore.eqv? (bruijn ##.k.1431 0 0) (##inline ##vcore.car (bruijn ##.type.527 1 1)) 'pointer) ((bruijn ##.k.1431 0 0) #f))
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
  // (if (bruijn ##.p.1405 0 0) ((bruijn ##.k.1404 1 0) (##inline ##vcore.qcons 'void-pointer '(##string ##.string.1817))) ((bruijn ##.x.610 6 0) (bruijn ##.k.1404 1 0) (bruijn ##.type.527 1 1) (##inline ##vcore.qcons (##inline ##vcore.qcons 'void '#t) (##inline ##vcore.qcons (##inline ##vcore.qcons '_Bool '(##string ##.string.1818)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'char '(##string ##.string.1819)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'signed-char '(##string ##.string.1820)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'unsigned-char '(##string ##.string.1820)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'short '(##string ##.string.1820)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'unsigned-short '(##string ##.string.1820)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'int '(##string ##.string.1820)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'unsigned-int '(##string ##.string.1820)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'double '(##string ##.string.1821)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'float '(##string ##.string.1821)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'VWORD '(##string ##.string.1793)) '()))))))))))))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        _V0void__pointer,
        VEncodePointer(&_V10_Dstring_D1817.sym, VPOINTER_OTHER)));
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
        VEncodePointer(&_V10_Dstring_D1818.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0char,
        VEncodePointer(&_V10_Dstring_D1819.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0signed__char,
        VEncodePointer(&_V10_Dstring_D1820.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unsigned__char,
        VEncodePointer(&_V10_Dstring_D1820.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0short,
        VEncodePointer(&_V10_Dstring_D1820.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unsigned__short,
        VEncodePointer(&_V10_Dstring_D1820.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0int,
        VEncodePointer(&_V10_Dstring_D1820.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unsigned__int,
        VEncodePointer(&_V10_Dstring_D1820.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0double,
        VEncodePointer(&_V10_Dstring_D1821.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0float,
        VEncodePointer(&_V10_Dstring_D1821.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0VWORD,
        VEncodePointer(&_V10_Dstring_D1793.sym, VPOINTER_OTHER)),
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
  // (if (##inline ##vcore.pair? (bruijn ##.type.528 1 1)) (##vcore.eqv? (bruijn ##.k.1623 0 0) (##inline ##vcore.car (bruijn ##.type.528 1 1)) 'pointer) ((bruijn ##.k.1623 0 0) #f))
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
  // ((bruijn ##.x.1588 0 0) (bruijn ##.k.1587 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1589 0 0) (##inline ##vcore.qcons 'c-string '(##string ##.string.1822)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0c__string,
        VEncodePointer(&_V10_Dstring_D1822.sym, VPOINTER_OTHER)));
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
  // (if (bruijn ##.p.1586 1 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k408) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda64) (bruijn ##.kk.147.529 3 1)) ((bruijn ##.k.1587 0 0) #f))
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
  // ((bruijn ##.x.1581 0 0) (bruijn ##.k.1576 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1582 0 0) (##inline ##vcore.qcons 'const-c-string '(##string ##.string.1823)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0const__c__string,
        VEncodePointer(&_V10_Dstring_D1823.sym, VPOINTER_OTHER)));
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
  // (if (bruijn ##.p.1579 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.150.532 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k414) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda65) (bruijn ##.kk.147.529 7 1)) ((bruijn ##.k.1576 3 0) #f)) ((bruijn ##.k.1576 3 0) #f))
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.150.532 0 0)) ((bruijn ##.x.595 28 0) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k413) 'char (##inline ##vcore.car (bruijn ##.expr.150.532 0 0))) ((bruijn ##.k.1576 2 0) #f))
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
  // (if (bruijn ##.p.1577 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k412) (##inline ##vcore.cdr (bruijn ##.input.148.530 4 0))) ((bruijn ##.k.1576 1 0) #f))
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
  // (if (##inline ##vcore.pair? (bruijn ##.input.148.530 3 0)) ((bruijn ##.x.595 26 0) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k411) 'const (##inline ##vcore.car (bruijn ##.input.148.530 3 0))) ((bruijn ##.k.1576 0 0) #f))
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
  // ((bruijn ##.x.1570 0 0) (bruijn ##.k.1565 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1571 0 0) (##inline ##vcore.qcons 'const-void-pointer '(##string ##.string.1824)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0const__void__pointer,
        VEncodePointer(&_V10_Dstring_D1824.sym, VPOINTER_OTHER)));
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
  // (if (bruijn ##.p.1568 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.152.534 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k420) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda66) (bruijn ##.kk.147.529 8 1)) ((bruijn ##.k.1565 3 0) #f)) ((bruijn ##.k.1565 3 0) #f))
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.152.534 0 0)) ((bruijn ##.x.595 29 0) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k419) 'void (##inline ##vcore.car (bruijn ##.expr.152.534 0 0))) ((bruijn ##.k.1565 2 0) #f))
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
  // (if (bruijn ##.p.1566 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k418) (##inline ##vcore.cdr (bruijn ##.input.148.530 5 0))) ((bruijn ##.k.1565 1 0) #f))
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
  // (if (##inline ##vcore.pair? (bruijn ##.input.148.530 4 0)) ((bruijn ##.x.595 27 0) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k417) 'const (##inline ##vcore.car (bruijn ##.input.148.530 4 0))) ((bruijn ##.k.1565 0 0) #f))
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
  // ((bruijn ##.x.1562 0 0) (bruijn ##.k.1561 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1563 0 0) (##inline ##vcore.qcons 'void-pointer '(##string ##.string.1825)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0void__pointer,
        VEncodePointer(&_V10_Dstring_D1825.sym, VPOINTER_OTHER)));
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
  // (if (bruijn ##.p.1560 1 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k424) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda67) (bruijn ##.kk.147.529 7 1)) ((bruijn ##.k.1561 0 0) #f))
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
  // ((bruijn ##.x.1558 0 0) (bruijn ##.k.1557 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1559 0 0) (##inline ##vcore.qcons 'f32-pointer '(##string ##.string.1826)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0f32__pointer,
        VEncodePointer(&_V10_Dstring_D1826.sym, VPOINTER_OTHER)));
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
  // (if (bruijn ##.p.1556 1 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k428) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda68) (bruijn ##.kk.147.529 9 1)) ((bruijn ##.k.1557 0 0) #f))
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
  // ((bruijn ##.x.1554 0 0) (bruijn ##.k.1553 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1555 0 0) (##inline ##vcore.qcons 'f64-pointer '(##string ##.string.1827)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0f64__pointer,
        VEncodePointer(&_V10_Dstring_D1827.sym, VPOINTER_OTHER)));
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
  // (if (bruijn ##.p.1552 1 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k432) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda69) (bruijn ##.kk.147.529 11 1)) ((bruijn ##.k.1553 0 0) #f))
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
  // ((bruijn ##.x.1550 0 0) (bruijn ##.k.1549 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1551 0 0) (##inline ##vcore.qcons 's32-pointer '(##string ##.string.1828)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0s32__pointer,
        VEncodePointer(&_V10_Dstring_D1828.sym, VPOINTER_OTHER)));
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
  // (if (bruijn ##.p.1548 1 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k436) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda70) (bruijn ##.kk.147.529 13 1)) ((bruijn ##.k.1549 0 0) #f))
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
  // ((bruijn ##.x.1546 0 0) (bruijn ##.k.1545 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1547 0 0) (##inline ##vcore.qcons 'u16-pointer '(##string ##.string.1829)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0u16__pointer,
        VEncodePointer(&_V10_Dstring_D1829.sym, VPOINTER_OTHER)));
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
  // (if (bruijn ##.p.1544 1 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k440) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda71) (bruijn ##.kk.147.529 15 1)) ((bruijn ##.k.1545 0 0) #f))
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
  // ((bruijn ##.x.1542 0 0) (bruijn ##.k.1541 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1543 0 0) (##inline ##vcore.qcons 's16-pointer '(##string ##.string.1830)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0s16__pointer,
        VEncodePointer(&_V10_Dstring_D1830.sym, VPOINTER_OTHER)));
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
  // (if (bruijn ##.p.1540 1 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k444) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda72) (bruijn ##.kk.147.529 17 1)) ((bruijn ##.k.1541 0 0) #f))
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
  // ((bruijn ##.x.1538 0 0) (bruijn ##.k.1537 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1539 0 0) (##inline ##vcore.qcons 'u8-pointer '(##string ##.string.1831)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0u8__pointer,
        VEncodePointer(&_V10_Dstring_D1831.sym, VPOINTER_OTHER)));
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
  // (if (bruijn ##.p.1536 1 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k448) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda73) (bruijn ##.kk.147.529 19 1)) ((bruijn ##.k.1537 0 0) #f))
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
  // ((bruijn ##.x.1534 0 0) (bruijn ##.k.1533 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1535 0 0) (##inline ##vcore.qcons 's8-pointer '(##string ##.string.1832)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0s8__pointer,
        VEncodePointer(&_V10_Dstring_D1832.sym, VPOINTER_OTHER)));
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
  // (if (bruijn ##.p.1532 1 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k452) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda74) (bruijn ##.kk.147.529 21 1)) ((bruijn ##.k.1533 0 0) #f))
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
  // ((bruijn ##.x.1527 0 0) (bruijn ##.k.1522 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1528 0 0) (##inline ##vcore.qcons 'f32-pointer '(##string ##.string.1826)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0f32__pointer,
        VEncodePointer(&_V10_Dstring_D1826.sym, VPOINTER_OTHER)));
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
  // (if (bruijn ##.p.1525 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.154.536 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k458) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda75) (bruijn ##.kk.147.529 25 1)) ((bruijn ##.k.1522 3 0) #f)) ((bruijn ##.k.1522 3 0) #f))
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.154.536 0 0)) ((bruijn ##.x.595 46 0) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k457) 'float (##inline ##vcore.car (bruijn ##.expr.154.536 0 0))) ((bruijn ##.k.1522 2 0) #f))
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
  // (if (bruijn ##.p.1523 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k456) (##inline ##vcore.cdr (bruijn ##.input.148.530 22 0))) ((bruijn ##.k.1522 1 0) #f))
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
  // (if (##inline ##vcore.pair? (bruijn ##.input.148.530 21 0)) ((bruijn ##.x.595 44 0) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k455) 'const (##inline ##vcore.car (bruijn ##.input.148.530 21 0))) ((bruijn ##.k.1522 0 0) #f))
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
  // ((bruijn ##.x.1516 0 0) (bruijn ##.k.1511 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1517 0 0) (##inline ##vcore.qcons 'f64-pointer '(##string ##.string.1827)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0f64__pointer,
        VEncodePointer(&_V10_Dstring_D1827.sym, VPOINTER_OTHER)));
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
  // (if (bruijn ##.p.1514 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.156.538 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k464) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda76) (bruijn ##.kk.147.529 26 1)) ((bruijn ##.k.1511 3 0) #f)) ((bruijn ##.k.1511 3 0) #f))
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.156.538 0 0)) ((bruijn ##.x.595 47 0) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k463) 'double (##inline ##vcore.car (bruijn ##.expr.156.538 0 0))) ((bruijn ##.k.1511 2 0) #f))
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
  // (if (bruijn ##.p.1512 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k462) (##inline ##vcore.cdr (bruijn ##.input.148.530 23 0))) ((bruijn ##.k.1511 1 0) #f))
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
  // (if (##inline ##vcore.pair? (bruijn ##.input.148.530 22 0)) ((bruijn ##.x.595 45 0) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k461) 'const (##inline ##vcore.car (bruijn ##.input.148.530 22 0))) ((bruijn ##.k.1511 0 0) #f))
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
  // ((bruijn ##.x.1505 0 0) (bruijn ##.k.1500 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1506 0 0) (##inline ##vcore.qcons 's32-pointer '(##string ##.string.1828)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0s32__pointer,
        VEncodePointer(&_V10_Dstring_D1828.sym, VPOINTER_OTHER)));
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
  // (if (bruijn ##.p.1503 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.158.540 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k470) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda77) (bruijn ##.kk.147.529 27 1)) ((bruijn ##.k.1500 3 0) #f)) ((bruijn ##.k.1500 3 0) #f))
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.158.540 0 0)) ((bruijn ##.x.595 48 0) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k469) 'int (##inline ##vcore.car (bruijn ##.expr.158.540 0 0))) ((bruijn ##.k.1500 2 0) #f))
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
  // (if (bruijn ##.p.1501 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k468) (##inline ##vcore.cdr (bruijn ##.input.148.530 24 0))) ((bruijn ##.k.1500 1 0) #f))
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
  // (if (##inline ##vcore.pair? (bruijn ##.input.148.530 23 0)) ((bruijn ##.x.595 46 0) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k467) 'const (##inline ##vcore.car (bruijn ##.input.148.530 23 0))) ((bruijn ##.k.1500 0 0) #f))
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
  // ((bruijn ##.x.1494 0 0) (bruijn ##.k.1489 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1495 0 0) (##inline ##vcore.qcons 'u16-pointer '(##string ##.string.1829)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0u16__pointer,
        VEncodePointer(&_V10_Dstring_D1829.sym, VPOINTER_OTHER)));
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
  // (if (bruijn ##.p.1492 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.160.542 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k476) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda78) (bruijn ##.kk.147.529 28 1)) ((bruijn ##.k.1489 3 0) #f)) ((bruijn ##.k.1489 3 0) #f))
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.160.542 0 0)) ((bruijn ##.x.595 49 0) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k475) 'unsigned-short (##inline ##vcore.car (bruijn ##.expr.160.542 0 0))) ((bruijn ##.k.1489 2 0) #f))
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
  // (if (bruijn ##.p.1490 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k474) (##inline ##vcore.cdr (bruijn ##.input.148.530 25 0))) ((bruijn ##.k.1489 1 0) #f))
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
  // (if (##inline ##vcore.pair? (bruijn ##.input.148.530 24 0)) ((bruijn ##.x.595 47 0) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k473) 'const (##inline ##vcore.car (bruijn ##.input.148.530 24 0))) ((bruijn ##.k.1489 0 0) #f))
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
  // ((bruijn ##.x.1483 0 0) (bruijn ##.k.1478 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1484 0 0) (##inline ##vcore.qcons 's16-pointer '(##string ##.string.1830)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0s16__pointer,
        VEncodePointer(&_V10_Dstring_D1830.sym, VPOINTER_OTHER)));
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
  // (if (bruijn ##.p.1481 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.162.544 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k482) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda79) (bruijn ##.kk.147.529 29 1)) ((bruijn ##.k.1478 3 0) #f)) ((bruijn ##.k.1478 3 0) #f))
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.162.544 0 0)) ((bruijn ##.x.595 50 0) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k481) 'short (##inline ##vcore.car (bruijn ##.expr.162.544 0 0))) ((bruijn ##.k.1478 2 0) #f))
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
  // (if (bruijn ##.p.1479 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k480) (##inline ##vcore.cdr (bruijn ##.input.148.530 26 0))) ((bruijn ##.k.1478 1 0) #f))
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
  // (if (##inline ##vcore.pair? (bruijn ##.input.148.530 25 0)) ((bruijn ##.x.595 48 0) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k479) 'const (##inline ##vcore.car (bruijn ##.input.148.530 25 0))) ((bruijn ##.k.1478 0 0) #f))
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
  // ((bruijn ##.x.1472 0 0) (bruijn ##.k.1467 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1473 0 0) (##inline ##vcore.qcons 'u8-pointer '(##string ##.string.1831)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0u8__pointer,
        VEncodePointer(&_V10_Dstring_D1831.sym, VPOINTER_OTHER)));
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
  // (if (bruijn ##.p.1470 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.164.546 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k488) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda80) (bruijn ##.kk.147.529 30 1)) ((bruijn ##.k.1467 3 0) #f)) ((bruijn ##.k.1467 3 0) #f))
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.164.546 0 0)) ((bruijn ##.x.595 51 0) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k487) 'unsigned-char (##inline ##vcore.car (bruijn ##.expr.164.546 0 0))) ((bruijn ##.k.1467 2 0) #f))
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
  // (if (bruijn ##.p.1468 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k486) (##inline ##vcore.cdr (bruijn ##.input.148.530 27 0))) ((bruijn ##.k.1467 1 0) #f))
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
  // (if (##inline ##vcore.pair? (bruijn ##.input.148.530 26 0)) ((bruijn ##.x.595 49 0) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k485) 'const (##inline ##vcore.car (bruijn ##.input.148.530 26 0))) ((bruijn ##.k.1467 0 0) #f))
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
  // ((bruijn ##.x.1461 0 0) (bruijn ##.k.1456 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1462 0 0) (##inline ##vcore.qcons 's8-pointer '(##string ##.string.1832)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0s8__pointer,
        VEncodePointer(&_V10_Dstring_D1832.sym, VPOINTER_OTHER)));
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
  // (if (bruijn ##.p.1459 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.166.548 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k494) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda81) (bruijn ##.kk.147.529 31 1)) ((bruijn ##.k.1456 3 0) #f)) ((bruijn ##.k.1456 3 0) #f))
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.166.548 0 0)) ((bruijn ##.x.595 52 0) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k493) 'signed-char (##inline ##vcore.car (bruijn ##.expr.166.548 0 0))) ((bruijn ##.k.1456 2 0) #f))
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
  // (if (bruijn ##.p.1457 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k492) (##inline ##vcore.cdr (bruijn ##.input.148.530 28 0))) ((bruijn ##.k.1456 1 0) #f))
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
  // (if (##inline ##vcore.pair? (bruijn ##.input.148.530 27 0)) ((bruijn ##.x.595 50 0) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k491) 'const (##inline ##vcore.car (bruijn ##.input.148.530 27 0))) ((bruijn ##.k.1456 0 0) #f))
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
  // ((bruijn ##.k.1454 0 0) (##inline ##vcore.qcons 'void-pointer '(##string ##.string.1833)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0void__pointer,
        VEncodePointer(&_V10_Dstring_D1833.sym, VPOINTER_OTHER)));
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
  // (##vcore.call-with-values (bruijn ##.k.1435 28 0) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda82) (bruijn ##.kk.147.529 28 1))
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
  // ((bruijn ##.x.595 41 0) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k450) 'signed-char (bruijn ##.input.148.530 18 0))
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
  // ((bruijn ##.x.595 39 0) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k446) 'unsigned-char (bruijn ##.input.148.530 16 0))
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
  // ((bruijn ##.x.595 37 0) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k442) 'short (bruijn ##.input.148.530 14 0))
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
  // ((bruijn ##.x.595 35 0) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k438) 'unsigned-short (bruijn ##.input.148.530 12 0))
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
  // ((bruijn ##.x.595 33 0) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k434) 'int (bruijn ##.input.148.530 10 0))
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
  // ((bruijn ##.x.595 31 0) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k430) 'double (bruijn ##.input.148.530 8 0))
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
  // ((bruijn ##.x.595 29 0) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k426) 'float (bruijn ##.input.148.530 6 0))
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
  // ((bruijn ##.x.595 27 0) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k422) 'void (bruijn ##.input.148.530 4 0))
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
  // ((bruijn ##.x.595 23 0) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k406) 'char (bruijn ##.input.148.530 0 0))
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
  // ((bruijn ##.x.594 23 0) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0k405) (bruijn ##.type.528 2 1))
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
  // (if (bruijn ##.p.1434 0 0) (##vcore.call/cc (bruijn ##.k.1433 1 0) (close _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder_V0lambda63)) ((bruijn ##.x.610 6 0) (bruijn ##.k.1433 1 0) (bruijn ##.type.528 1 1) (##inline ##vcore.qcons (##inline ##vcore.qcons '_Bool '(##string ##.string.1834)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'char '(##string ##.string.1835)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'signed-char '(##string ##.string.1836)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'unsigned-char '(##string ##.string.1837)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'short '(##string ##.string.1838)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'unsigned-short '(##string ##.string.1839)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'int '(##string ##.string.1840)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'unsigned-int '(##string ##.string.1840)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'long '(##string ##.string.1840)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'unsigned-long '(##string ##.string.1840)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'long-long '(##string ##.string.1840)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'unsigned-long-long '(##string ##.string.1840)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'double '(##string ##.string.1841)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'float '(##string ##.string.1841)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'VWORD '(##string ##.string.1842)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'c-string '(##string ##.string.1822)) '()))))))))))))))))))
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
        VEncodePointer(&_V10_Dstring_D1834.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0char,
        VEncodePointer(&_V10_Dstring_D1835.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0signed__char,
        VEncodePointer(&_V10_Dstring_D1836.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unsigned__char,
        VEncodePointer(&_V10_Dstring_D1837.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0short,
        VEncodePointer(&_V10_Dstring_D1838.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unsigned__short,
        VEncodePointer(&_V10_Dstring_D1839.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0int,
        VEncodePointer(&_V10_Dstring_D1840.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unsigned__int,
        VEncodePointer(&_V10_Dstring_D1840.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0long,
        VEncodePointer(&_V10_Dstring_D1840.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unsigned__long,
        VEncodePointer(&_V10_Dstring_D1840.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0long__long,
        VEncodePointer(&_V10_Dstring_D1840.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unsigned__long__long,
        VEncodePointer(&_V10_Dstring_D1840.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0double,
        VEncodePointer(&_V10_Dstring_D1841.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0float,
        VEncodePointer(&_V10_Dstring_D1841.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0VWORD,
        VEncodePointer(&_V10_Dstring_D1842.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0c__string,
        VEncodePointer(&_V10_Dstring_D1822.sym, VPOINTER_OTHER)),
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
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D564_V0k505(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D564_V0k505, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.176.563 4 1) (bruijn ##.k.1646 1 0) (bruijn ##.expr.178.565 2 1) (bruijn ##.x.1647 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      statics->vars[0],
      statics->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D564_V0k504(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D564_V0k504, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.178.565 1 1))) ((bruijn ##.x.588 41 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D564_V0k505) (bruijn ##.args.175.566 1 2)) ((bruijn ##.k.1646 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 41-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D564_V0k505, self)))),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D564_V0k508(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D564_V0k508, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.176.563 7 1) (bruijn ##.k.1640 2 0) (bruijn ##.expr.178.565 5 1) (bruijn ##.x.1642 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      statics->up->vars[0],
      VGetArg(statics, 5-1, 1),
      _var0);
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D564_V0k507(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D564_V0k507, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.588 44 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D564_V0k508) (bruijn ##.args.175.566 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 44-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D564_V0k508, self)))),
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D564_V0lambda87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D564_V0lambda87, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.kk.177.567 0 1) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D564_V0k507) (##inline ##vcore.cdr (bruijn ##.expr.178.565 3 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.178.565 3 1)) (bruijn ##.args.175.566 3 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var1), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D564_V0k507, self)))),
      VInlineCdr2(runtime,
        statics->up->up->vars[1]),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[1]),
        statics->up->up->vars[2]));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D564_V0lambda86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D564_V0lambda86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1639 0 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D564_V0lambda87))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D564_V0lambda87, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D564_V0k506(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D564_V0k506, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1637 1 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D564_V0lambda86) (bruijn ##.loop.564 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D564_V0lambda86, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D564(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D564, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D564_V0k504) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D564_V0k506))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D564_V0k504, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D564_V0k506, self)))));
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
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D564")) (##qualified-call (vanity compiler ffi print-foreign-function ##.loop.564) (bruijn ##.loop.564 0 0) (bruijn ##.k.1636 1 0) (##inline ##vcore.cdr (bruijn ##.expr.173.560 4 0)) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D564, self))));
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
       _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dloop_D564(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
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
  // (##vcore.call/cc (bruijn ##.k.1635 0 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda85))
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
  // ((bruijn ##.x.1651 0 0) (bruijn ##.k.1649 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D575_V0k515(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D575_V0k515, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.613 21 0) (bruijn ##.k.1657 1 0) (##string ##.string.1843) (##inline ##vcore.cdr (bruijn ##.x.1659 0 0)) (bruijn ##.argname.577 1 2) (bruijn ##.name.561 10 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 5,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1843.sym, VPOINTER_OTHER),
      VInlineCdr2(runtime,
        _var0),
      statics->vars[2],
      VGetArg(statics, 10-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D575(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D575, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity compiler ffi get-foreign-decoder) (bruijn ##.get-foreign-decoder.239 19 19) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D575_V0k515) (bruijn ##.arg.576 0 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 19-1, 19));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D575_V0k515, self))));
    VWORD _arg1 = 
      _var1;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k520(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k520, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.613 25 0) (bruijn ##.k.1704 4 0) (##string ##.string.1844))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 2,
      statics->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1844.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda90, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.x.613 25 0) (bruijn ##.k.1707 0 0) (##string ##.string.1845) (bruijn ##.e.578 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1845.sym, VPOINTER_OTHER),
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
  // ((bruijn ##.x.599 38 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k520) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda90) (bruijn ##.x.1656 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 38-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k520, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda90, self)))),
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k518(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k518, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.1767) ((##vcore.+ 1 (bruijn ##.x.1709 1 0))) ((bruijn ##.x.613 23 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k519) (##string ##.string.1846) (bruijn ##.name.561 12 0) (bruijn ##.name.561 12 0) (bruijn ##.reg.1767 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VEncodeInt(1l),
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 5,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k519, self)))),
      VEncodePointer(&_V10_Dstring_D1846.sym, VPOINTER_OTHER),
      VGetArg(statics, 12-1, 0),
      VGetArg(statics, 12-1, 0),
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k529(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k529, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.613 33 0) (bruijn ##.k.1704 12 0) (##string ##.string.1844))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 2,
      VGetArg(statics, 12-1, 0),
      VEncodePointer(&_V10_Dstring_D1844.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda91, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.x.613 33 0) (bruijn ##.k.1716 0 0) (##string ##.string.1845) (bruijn ##.e.580 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1845.sym, VPOINTER_OTHER),
      _var1);
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
  // ((bruijn ##.x.599 46 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k529) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda91) (bruijn ##.x.1656 14 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 46-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k529, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda91, self)))),
      VGetArg(statics, 14-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k527(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k527, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.1770) ((##vcore.+ 1 (bruijn ##.x.1719 1 0))) ((bruijn ##.x.613 31 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k528) (##string ##.string.1847) (bruijn ##.x.1653 17 0) (bruijn ##.reg.1769 2 0) (bruijn ##.reg.1770 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VEncodeInt(1l),
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 5,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k528, self)))),
      VEncodePointer(&_V10_Dstring_D1847.sym, VPOINTER_OTHER),
      VGetArg(statics, 17-1, 0),
      statics->up->vars[0],
      self->vars[0]);
    }
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
  // (basic-block 1 1 (##.reg.1769) ((##vcore.+ 1 (bruijn ##.x.1720 1 0))) ((bruijn ##.x.612 30 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k527) (bruijn ##.args.570 17 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VEncodeInt(1l),
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k527, self)))),
      VGetArg(statics, 17-1, 2));
    }
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
  // ((bruijn ##.x.612 28 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k526) (bruijn ##.args.570 15 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k526, self)))),
      VGetArg(statics, 15-1, 2));
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
  // (basic-block 1 1 (##.reg.1768) ((##vcore.+ 1 (bruijn ##.x.1722 1 0))) ((bruijn ##.x.613 26 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k525) (##string ##.string.1848) (bruijn ##.x.1653 12 0) (bruijn ##.reg.1768 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VEncodeInt(1l),
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k525, self)))),
      VEncodePointer(&_V10_Dstring_D1848.sym, VPOINTER_OTHER),
      VGetArg(statics, 12-1, 0),
      self->vars[0]);
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
  // ((bruijn ##.x.612 25 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k524) (bruijn ##.args.570 12 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k524, self)))),
      VGetArg(statics, 12-1, 2));
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
  // ((bruijn ##.x.613 23 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k523) (##string ##.string.1844))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k523, self)))),
      VEncodePointer(&_V10_Dstring_D1844.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda92, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.x.613 23 0) (bruijn ##.k.1723 0 0) (##string ##.string.1849) (bruijn ##.e.579 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1849.sym, VPOINTER_OTHER),
      _var1);
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
  // ((bruijn ##.x.599 36 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k522) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda92) (bruijn ##.x.1656 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k522, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda92, self)))),
      statics->up->up->up->vars[0]);
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
  // (if (bruijn ##.purec?.549 19 1) ((bruijn ##.x.612 22 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k518) (bruijn ##.args.570 9 2)) ((bruijn ##.x.613 21 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k521) (##string ##.string.1850) (bruijn ##.name.561 10 0)))
if(VDecodeBool(
VGetArg(statics, 19-1, 1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k518, self)))),
      VGetArg(statics, 9-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k521, self)))),
      VEncodePointer(&_V10_Dstring_D1850.sym, VPOINTER_OTHER),
      VGetArg(statics, 10-1, 0));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k533(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k533, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.613 24 0) (bruijn ##.k.1701 1 0) (##string ##.string.1852) (##inline ##vcore.cdr (bruijn ##.x.1703 0 0)) (bruijn ##.name.561 13 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 4,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1852.sym, VPOINTER_OTHER),
      VInlineCdr2(runtime,
        _var0),
      VGetArg(statics, 13-1, 0));
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
  // (if (bruijn ##.p.1700 1 0) ((bruijn ##.x.613 23 0) (bruijn ##.k.1701 0 0) (##string ##.string.1851) (bruijn ##.name.561 12 0)) (##qualified-call (vanity compiler ffi get-foreign-encoder) (bruijn ##.get-foreign-encoder.238 22 18) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k533) (bruijn ##.ret.559 14 0)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1851.sym, VPOINTER_OTHER),
      VGetArg(statics, 12-1, 0));
} else {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 22-1, 18));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k533, self))));
    VWORD _arg1 = 
      VGetArg(statics, 14-1, 0);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__encoder(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k537(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k537, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler ffi print-foreign-function ##.print-arg.575) (bruijn ##.print-arg.575 8 0) (bruijn ##.k.1694 1 0) (bruijn ##.arg.581 1 1) (bruijn ##.argname.582 1 2))
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
       _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D575(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
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
  // ((bruijn ##.x.613 26 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k537) (##string ##.string.1853))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k537, self)))),
      VEncodePointer(&_V10_Dstring_D1853.sym, VPOINTER_OTHER));
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
  // ((bruijn ##.x.599 39 0) (bruijn ##.k.1692 1 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda93) (##inline ##vcore.cdr (bruijn ##.args.570 13 2)) (##inline ##vcore.cdr (bruijn ##.x.1656 7 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 39-1, 0)), 4,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda93, self)))),
      VInlineCdr2(runtime,
        VGetArg(statics, 13-1, 2)),
      VInlineCdr2(runtime,
        VGetArg(statics, 7-1, 0)));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k535(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k535, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.args.570 12 2)) (##qualified-call (vanity compiler ffi print-foreign-function ##.print-arg.575) (bruijn ##.print-arg.575 5 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k536) (##inline ##vcore.car (bruijn ##.args.570 12 2)) (##inline ##vcore.car (bruijn ##.x.1656 6 0))) ((bruijn ##.k.1692 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 12-1, 2)))) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 0));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k536, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        VGetArg(statics, 12-1, 2));
    VWORD _arg2 = 
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 0));
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D575(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
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
  // (if (bruijn ##.p.1689 1 0) ((bruijn ##.x.613 27 0) (bruijn ##.k.1690 0 0) (##string ##.string.1854)) ((bruijn ##.x.613 27 0) (bruijn ##.k.1690 0 0) (##string ##.string.1855)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D1854.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D1855.sym, VPOINTER_OTHER));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k549(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k549, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.613 34 0) (bruijn ##.k.1685 1 0) (##string ##.string.1857) (##inline ##vcore.cdr (bruijn ##.x.1687 0 0)) (bruijn ##.name.561 23 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 4,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1857.sym, VPOINTER_OTHER),
      VInlineCdr2(runtime,
        _var0),
      VGetArg(statics, 23-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k548(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k548, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1684 1 0) ((bruijn ##.x.613 33 0) (bruijn ##.k.1685 0 0) (##string ##.string.1856) (bruijn ##.name.561 22 0)) (##qualified-call (vanity compiler ffi get-foreign-encoder) (bruijn ##.get-foreign-encoder.238 32 18) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k549) (bruijn ##.ret.559 24 0)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1856.sym, VPOINTER_OTHER),
      VGetArg(statics, 22-1, 0));
} else {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 32-1, 18));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k549, self))));
    VWORD _arg1 = 
      VGetArg(statics, 24-1, 0);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0get__foreign__encoder(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k553(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k553, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler ffi print-foreign-function ##.print-arg.575) (bruijn ##.print-arg.575 18 0) (bruijn ##.k.1678 1 0) (bruijn ##.arg.584 1 1) (bruijn ##.argname.585 1 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 18-1, 0));
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      statics->vars[2];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D575(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda94, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.x.613 36 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k553) (##string ##.string.1853))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k553, self)))),
      VEncodePointer(&_V10_Dstring_D1853.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k552(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k552, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.599 49 0) (bruijn ##.k.1676 1 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda94) (##inline ##vcore.cdr (bruijn ##.args.570 23 2)) (##inline ##vcore.cdr (bruijn ##.x.1656 17 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 49-1, 0)), 4,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda94, self)))),
      VInlineCdr2(runtime,
        VGetArg(statics, 23-1, 2)),
      VInlineCdr2(runtime,
        VGetArg(statics, 17-1, 0)));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k551(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k551, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.args.570 22 2)) (##qualified-call (vanity compiler ffi print-foreign-function ##.print-arg.575) (bruijn ##.print-arg.575 15 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k552) (##inline ##vcore.car (bruijn ##.args.570 22 2)) (##inline ##vcore.car (bruijn ##.x.1656 16 0))) ((bruijn ##.k.1676 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 22-1, 2)))) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 15-1, 0));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k552, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        VGetArg(statics, 22-1, 2));
    VWORD _arg2 = 
      VInlineCar2(runtime,
        VGetArg(statics, 16-1, 0));
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D575(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k556(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k556, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1673 1 0) ((bruijn ##.x.613 36 0) (bruijn ##.k.1674 0 0) (##string ##.string.1858)) ((bruijn ##.x.613 36 0) (bruijn ##.k.1674 0 0) (##string ##.string.1859)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D1858.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D1859.sym, VPOINTER_OTHER));
}
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k557(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k557, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.613 36 0) (bruijn ##.k.1652 23 0) (##string ##.string.1860) (bruijn ##.x.1655 20 0) (bruijn ##.x.1653 22 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 4,
      VGetArg(statics, 23-1, 0),
      VEncodePointer(&_V10_Dstring_D1860.sym, VPOINTER_OTHER),
      VGetArg(statics, 20-1, 0),
      VGetArg(statics, 22-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k555(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k555, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k556) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k557))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k556, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k557, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k554(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k554, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k555) (bruijn ##.ret.559 25 0) 'void)
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k555, self)))),
      VGetArg(statics, 25-1, 0),
      _V0void);
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k550(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k550, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k551) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k554))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k551, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k554, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k547(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k547, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k548) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k550))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k548, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k550, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k546(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k546, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k547) (bruijn ##.ret.559 22 0) 'void)
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k547, self)))),
      VGetArg(statics, 22-1, 0),
      _V0void);
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k545(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k545, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.613 30 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k546) (##string ##.string.1844))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k546, self)))),
      VEncodePointer(&_V10_Dstring_D1844.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda95, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.x.613 30 0) (bruijn ##.k.1688 0 0) (##string ##.string.1849) (bruijn ##.e.583 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1849.sym, VPOINTER_OTHER),
      _var1);
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k544(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k544, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.599 43 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k545) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda95) (bruijn ##.x.1656 11 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 43-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k545, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda95, self)))),
      VGetArg(statics, 11-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k543(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k543, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.613 28 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k544) (##string ##.string.1861) (bruijn ##.x.1654 13 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k544, self)))),
      VEncodePointer(&_V10_Dstring_D1861.sym, VPOINTER_OTHER),
      VGetArg(statics, 13-1, 0));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k542(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k542, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.613 27 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k543) (##string ##.string.1862))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k543, self)))),
      VEncodePointer(&_V10_Dstring_D1862.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k540(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k540, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k541) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k542))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k541, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k542, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k539(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k539, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k540) (bruijn ##.ret.559 16 0) 'void)
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k540, self)))),
      VGetArg(statics, 16-1, 0),
      _V0void);
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
  // ((bruijn ##.x.613 24 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k539) (##string ##.string.1863))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k539, self)))),
      VEncodePointer(&_V10_Dstring_D1863.sym, VPOINTER_OTHER));
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
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k535) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k538))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k535, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k538, self)))));
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k531(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k531, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k532) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k534))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k532, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k534, self)))));
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
  // (##vcore.eqv? (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k531) (bruijn ##.ret.559 12 0) 'void)
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k531, self)))),
      VGetArg(statics, 12-1, 0),
      _V0void);
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
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k517) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k530))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k517, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k530, self)))));
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
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D575")) ((bruijn ##.x.613 19 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k516) (##string ##.string.1864) (##inline ##vcore.car (bruijn ##.expr.171.556 12 0))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V10_Dprint__arg_D575, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k516, self)))),
      VEncodePointer(&_V10_Dstring_D1864.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        VGetArg(statics, 12-1, 0)));
    }
}
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k513(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k513, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.611 19 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k514) (bruijn ##.x.1724 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k514, self)))),
      _var0);
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
  // ((bruijn ##.x.612 17 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k513) (bruijn ##.args.570 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k513, self)))),
      statics->up->up->up->vars[2]);
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
  // (##qualified-call (vanity compiler ffi mangle-foreign-closure) (bruijn ##.mangle-foreign-closure.237 14 17) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k512) (bruijn ##.name.561 4 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 14-1, 17));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k512, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign__closure(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
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
  // (##qualified-call (vanity compiler ffi mangle-foreign-basic) (bruijn ##.mangle-foreign-basic.235 13 15) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k511) (bruijn ##.name.561 3 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 13-1, 15));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k511, self))));
    VWORD _arg1 = 
      statics->up->up->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign__basic(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
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
  // (##qualified-call (vanity compiler ffi mangle-foreign-function) (bruijn ##.mangle-foreign-function.236 12 16) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k510) (bruijn ##.name.561 2 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 16));
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
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.569 0 1)) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k509) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda89) (bruijn ##.kk.167.551 9 1)) ((bruijn ##.k.1649 0 0) #f))
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
  // (##vcore.call-with-values (bruijn ##.k.1629 7 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda84) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda88))
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.173.560 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k503) (##inline ##vcore.car (bruijn ##.expr.173.560 0 0))) ((bruijn ##.k.1629 6 0) #f))
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
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k502) (##inline ##vcore.cdr (bruijn ##.expr.172.558 1 0)))
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.172.558 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k501) (##inline ##vcore.car (bruijn ##.expr.172.558 0 0))) ((bruijn ##.k.1629 4 0) #f))
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.171.556 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k500) (##inline ##vcore.cdr (bruijn ##.expr.171.556 0 0))) ((bruijn ##.k.1629 3 0) #f))
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.170.554 0 0)) ((close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k499) (##inline ##vcore.cdr (bruijn ##.expr.170.554 0 0))) ((bruijn ##.k.1629 2 0) #f))
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
  // (if (bruijn ##.p.1630 0 0) ((close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k498) (##inline ##vcore.cdr (bruijn ##.expr.550 3 2))) ((bruijn ##.k.1629 1 0) #f))
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
  // (if (##inline ##vcore.pair? (bruijn ##.expr.550 2 2)) ((bruijn ##.x.595 22 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k497) '##foreign.function (##inline ##vcore.car (bruijn ##.expr.550 2 2))) ((bruijn ##.k.1629 0 0) #f))
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
void _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k558(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k558, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.590 27 0) (bruijn ##.k.1626 1 0) (##string ##.string.1776))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 2,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1776.sym, VPOINTER_OTHER));
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
  // ((close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k496) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k558))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k496, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0k558, self)))));
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
  // (##vcore.call/cc (bruijn ##.k.1625 0 0) (close _V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function_V0lambda83))
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
  // (letrec 21 ((close "_V50_V0vanity_V0compiler_V0ffi_V0reduce__declare") (close "_V50_V0vanity_V0compiler_V0ffi_V0find__typedef") (close "_V50_V0vanity_V0compiler_V0ffi_V0reduce__type") (close "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__typedef") (close "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__function") (close "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__enums") (close "_V50_V0vanity_V0compiler_V0ffi_V0unwrap__declares") (close "_V50_V0vanity_V0compiler_V0ffi_V0table___Gdefines") (close "_V50_V0vanity_V0compiler_V0ffi_V0deep__copy") (close "_V50_V0vanity_V0compiler_V0ffi_V0validate__foreign__function") (close "_V50_V0vanity_V0compiler_V0ffi_V0find__file") (close "_V50_V0vanity_V0compiler_V0ffi_V0get__install__root") (close "_V50_V0vanity_V0compiler_V0ffi_V0make__preprocess__command") (close "_V50_V0vanity_V0compiler_V0ffi_V0resolve__foreign__import") (close "_V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign") (close "_V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign__basic") (close "_V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign__function") (close "_V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign__closure") (close "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__encoder") (close "_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder") (close "_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function")) ((bruijn ##.k.587 32 0) (##inline ##vcore.cons (##inline ##vcore.cons 'mangle-foreign (bruijn ##.mangle-foreign.234 0 14)) (##inline ##vcore.cons (##inline ##vcore.cons 'mangle-foreign-function (bruijn ##.mangle-foreign-function.236 0 16)) (##inline ##vcore.cons (##inline ##vcore.cons 'mangle-foreign-basic (bruijn ##.mangle-foreign-basic.235 0 15)) (##inline ##vcore.cons (##inline ##vcore.cons 'mangle-foreign-closure (bruijn ##.mangle-foreign-closure.237 0 17)) (##inline ##vcore.cons (##inline ##vcore.cons 'validate-foreign-function (bruijn ##.validate-foreign-function.229 0 9)) (##inline ##vcore.cons (##inline ##vcore.cons 'print-foreign-function (bruijn ##.print-foreign-function.240 0 20)) (##inline ##vcore.cons (##inline ##vcore.cons 'resolve-foreign-import (bruijn ##.resolve-foreign-import.233 0 13)) (##inline ##vcore.cons (##inline ##vcore.cons 'get-foreign-encoder (bruijn ##.get-foreign-encoder.238 0 18)) (##inline ##vcore.cons (##inline ##vcore.cons 'get-foreign-decoder (bruijn ##.get-foreign-decoder.239 0 19)) '())))))))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[21]; } container;
    self = &container.self;
    VInitEnv(self, 21, 21, statics);
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
    self->vars[14] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign, self))));
    self->vars[15] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign__basic, self))));
    self->vars[16] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign__function, self))));
    self->vars[17] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0mangle__foreign__closure, self))));
    self->vars[18] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__encoder, self))));
    self->vars[19] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0get__foreign__decoder, self))));
    self->vars[20] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0ffi_V0print__foreign__function, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0mangle__foreign,
        self->vars[14]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0mangle__foreign__function,
        self->vars[16]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0mangle__foreign__basic,
        self->vars[15]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0mangle__foreign__closure,
        self->vars[17]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0validate__foreign__function,
        self->vars[9]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0print__foreign__function,
        self->vars[20]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0resolve__foreign__import,
        self->vars[13]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0get__foreign__encoder,
        self->vars[18]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0get__foreign__decoder,
        self->vars[19]),
        VNULL))))))))));
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
  // (##vcore.make-import (close _V0vanity_V0compiler_V0ffi_V20_V0k5) (##string ##.string.1865) (bruijn ##.x.1743 3 0) (bruijn ##.x.1744 2 0) (bruijn ##.x.1745 1 0) (bruijn ##.x.1746 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMakeImport2, 6,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_V0k5, self)))),
      VEncodePointer(&_V10_Dstring_D1865.sym, VPOINTER_OTHER),
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0ffi_V20_V0k4) (##string ##.string.1866))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_V0k4, self)))),
      VEncodePointer(&_V10_Dstring_D1866.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0ffi_V20_V0k3) (##string ##.string.1867))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_V0k3, self)))),
      VEncodePointer(&_V10_Dstring_D1867.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0ffi_V20_V0k2) (##string ##.string.1868))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_V0k2, self)))),
      VEncodePointer(&_V10_Dstring_D1868.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0ffi_V20_V0k1) (##string ##.string.1869))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D1869.sym, VPOINTER_OTHER));
}
VFunc _V0vanity_V0compiler_V0ffi_V20 = (VFunc)_V0vanity_V0compiler_V0ffi_V20_V0lambda1;
