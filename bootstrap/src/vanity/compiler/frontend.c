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



static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D966 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "file does not exist" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D965 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "read" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D964 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "expand" };
static struct { VBlob sym; char bytes[4]; } _V10_Dstring_D963 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, "cps" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D962 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "optimize" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D961 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "extract" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D960 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "transpile" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D959 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "free variables in program" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D958 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "verify" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D957 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "~A -I~A ~A ~A -c -o ~A ~A" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D956 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "compile" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D955 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, " " };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D954 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, " -Wl,--no-as-needed" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D953 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, " -fPIC -shared" };
static struct { VBlob sym; char bytes[40]; } _V10_Dstring_D952 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 40 }, " -L~A/x86_64-w64-mingw32/lib/ -lvscheme" };
static struct { VBlob sym; char bytes[110]; } _V10_Dstring_D951 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 110 }, " -Wl,--whole-archive -lvscheme -ldfile -s LLD_REPORT_UNDEFINED -s ALLOW_MEMORY_GROWTH=1 -s STACK_SIZE=2097152" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D950 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, " -lvscheme" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D949 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "~A -o ~A" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D948 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, " -I~A" };
static struct { VBlob sym; char bytes[87]; } _V10_Dstring_D947 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 87 }, "program has toplevel expressions in multiple files, and so it generated multiple mains" };
static struct { VBlob sym; char bytes[51]; } _V10_Dstring_D946 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 51 }, "shared library has toplevel expressions or defines" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D945 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, " -fPIC" };
static struct { VBlob sym; char bytes[4]; } _V10_Dstring_D944 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, " -g" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D943 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, " -O~A" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D942 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, " -Og" };
static struct { VBlob sym; char bytes[108]; } _V10_Dstring_D941 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 108 }, " -Wl,--export-all-symbols -Wl,--stack,8388608 -Wmissing-braces -masm=intel -I~A/x86_64-w64-mingw32/include/" };
static struct { VBlob sym; char bytes[47]; } _V10_Dstring_D940 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 47 }, " -Wno-gnu -DVANITY_PURE_C -fbracket-depth=4096" };
static struct { VBlob sym; char bytes[40]; } _V10_Dstring_D939 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 40 }, " -rdynamic -Wmissing-braces -masm=intel" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D938 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "/tmp/" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D937 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "sysv_amd64" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D936 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "windows_amd64" };
VWEAK VWORD _V0link__ret;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0link__ret = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "link-ret" };
VWEAK VWORD _V0compile__ret;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0compile__ret = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "compile-ret" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D935 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "vanity-scheme-~A.~A" };
VWEAK VWORD _V0feature__list;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0feature__list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "feature-list" };
VWEAK VWORD _V0r7rs;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0r7rs = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "r7rs" };
VWEAK VWORD _V0c17;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0c17 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "c17" };
VWEAK VWORD _V0ieee__float;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0ieee__float = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "ieee-float" };
VWEAK VWORD _V0vanity__scheme;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0vanity__scheme = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "vanity-scheme" };
static VPair _V10_Dpair_D934 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D933 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D932 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D931 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0ilp32;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0ilp32 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "ilp32" };
VWEAK VWORD _V0emscripten;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0emscripten = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "emscripten" };
VWEAK VWORD _V0wasm;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0wasm = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "wasm" };
static VPair _V10_Dpair_D930 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D929 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D928 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D927 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0llp64;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0llp64 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "llp64" };
VWEAK VWORD _V0mingw;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0mingw = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "mingw" };
VWEAK VWORD _V0windows;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0windows = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "windows" };
static VPair _V10_Dpair_D926 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D925 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D924 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D923 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D922 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D921 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D920 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0little__endian;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0little__endian = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "little-endian" };
VWEAK VWORD _V0lp64;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0lp64 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "lp64" };
VWEAK VWORD _V0x86__64;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0x86__64 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "x86-64" };
VWEAK VWORD _V0compiled;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0compiled = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "compiled" };
VWEAK VWORD _V0gnuc;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0gnuc = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "gnuc" };
VWEAK VWORD _V0gnu__linux;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0gnu__linux = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "gnu-linux" };
VWEAK VWORD _V0posix;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0posix = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "posix" };
static VPair _V10_Dpair_D919 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D918 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D917 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D916 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D915 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D914 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D913 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D912 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D911 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D910 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D909 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D908 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D907 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D906 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D905 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D904 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D903 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D902 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D901 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D900 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D899 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D898 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D897 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D896 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D895 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D894 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D893 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D892 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D891 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D890 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D889 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D888 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D887 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D886 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D885 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D884 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D883 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D882 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D881 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D880 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D879 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D878 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D877 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D876 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D875 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D874 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D873 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D872 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D871 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D870 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D869 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D868 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D867 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D866 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D865 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D864 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D863 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D862 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D861 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D860 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D859 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D858 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D857 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D856 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D855 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D854 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D853 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D852 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D851 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "vghtco:I:D:O:E:W:" };
static VPair _V10_Dpair_D850 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D849 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D848 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, ".vasm" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D847 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, ".scmh" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D846 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, ".escm" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D845 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, ".c" };
static struct { VBlob sym; char bytes[56]; } _V10_Dstring_D844 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 56 }, "FIXME: -h and -c and -t and -E can only handle one file" };
static struct { VBlob sym; char bytes[89]; } _V10_Dstring_D843 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 89 }, "Cannot specify '-h' or '-c' or '-t' or '-E' or '--makefile' with '-o' and multiple files" };
static struct { VBlob sym; char bytes[75]; } _V10_Dstring_D842 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 75 }, "Cannot specify '-h' '-c' or '-t' or '-E' or '--makefile' with object files" };
static struct { VBlob sym; char bytes[23]; } _V10_Dstring_D841 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, "No input file provided" };
static struct { VBlob sym; char bytes[68]; } _V10_Dstring_D840 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 68 }, "Only one of '-h' or '-c' or '-t' or '-E' or '--makefile' can be set" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D839 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "emcc" };
static struct { VBlob sym; char bytes[32]; } _V10_Dstring_D838 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 32 }, "/usr/bin/x86_64-w64-mingw32-gcc" };
static struct { VBlob sym; char bytes[4]; } _V10_Dstring_D837 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, "gcc" };
static struct { VBlob sym; char bytes[113]; } _V10_Dstring_D836 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 113 }, "--platform support was disabled when this compiler was configured; re-run ./configure and reinstall to enable it" };
static struct { VBlob sym; char bytes[74]; } _V10_Dstring_D835 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 74 }, "Unknown --platform, only 'linux' and 'windows' and 'emscripten' are valid" };
VWEAK VWORD _V0help;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0help = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "help" };
VWEAK VWORD _V0version;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0version = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "version" };
VWEAK VWORD _V0shared;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0shared = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "shared" };
VWEAK VWORD _V0keep__temps;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0keep__temps = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "keep-temps" };
VWEAK VWORD _V0makefile;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0makefile = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "makefile" };
VWEAK VWORD _V0maketarget;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0maketarget = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "maketarget" };
VWEAK VWORD _V0bytecode;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0bytecode = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "bytecode" };
VWEAK VWORD _V0hygiene;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0hygiene = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "hygiene" };
VWEAK VWORD _V0verify;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0verify = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "verify" };
VWEAK VWORD _V0trace__expand;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0trace__expand = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "trace-expand" };
VWEAK VWORD _V0explain__scopes;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0explain__scopes = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "explain-scopes" };
static struct { VBlob sym; char bytes[19]; } _V10_Dstring_D834 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, "Unknown CLI option" };
static struct { VBlob sym; char bytes[54]; } _V10_Dstring_D833 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 54 }, "--expand-timeout expects a positive number of seconds" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D832 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "unbound" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D831 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "no-unbound" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D830 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "error=unbound" };
static struct { VBlob sym; char bytes[17]; } _V10_Dstring_D829 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "no-error=unbound" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D828 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, " -Wl," };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D827 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "Wrapper flag -W missing comma" };
static struct { VBlob sym; char bytes[67]; } _V10_Dstring_D826 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 67 }, "Wrapper flag -W can only pass args to the C compiler, eg -Wc,-Ilib" };
static struct { VBlob sym; char bytes[57]; } _V10_Dstring_D825 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 57 }, "Expand flag -E expects integer between 0 and 2 inclusive" };
static struct { VBlob sym; char bytes[63]; } _V10_Dstring_D824 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 63 }, "Optimization flag -O expects integer between 0 and 3 inclusive" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D823 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, ".a" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D822 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, ".lib" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D821 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, ".scm" };
static struct { VBlob sym; char bytes[36]; } _V10_Dstring_D820 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 36 }, "File has unrecognized extension: ~A" };
static struct { VBlob sym; char bytes[4]; } _V10_Dstring_D819 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, ".ss" };
static struct { VBlob sym; char bytes[24]; } _V10_Dstring_D818 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, " -Wl,--no-whole-archive" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D817 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "-Wl,--whole-archive " };
VWEAK VWORD _V10vcore_Dpush__value;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10vcore_Dpush__value = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##vcore.push-value" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D816 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "~A: " };
VWEAK VWORD _V10vcore_Dpop__value;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10vcore_Dpop__value = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##vcore.pop-value" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D815 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "\033[1;31m~A\033[0m: ~A: " };
VWEAK VWORD _V0handle__exception;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0handle__exception = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "handle-exception" };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D814 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "Vanity Scheme Compiler ~A.~A~N" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D813 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "Copyright (C) 2023 Richard Van Natta" };
VWEAK VWORD _V0display__version;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0display__version = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "display-version" };
static struct { VBlob sym; char bytes[29]; } _V10_Dstring_D812 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 29 }, "Usage: vsc [options] file..." };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D811 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "Options:" };
static struct { VBlob sym; char bytes[94]; } _V10_Dstring_D810 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 94 }, "  -O<num>         Compile with optimization levels 0 (slowest codegen) to 3 (fastest codegen)" };
static struct { VBlob sym; char bytes[45]; } _V10_Dstring_D809 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 45 }, "  -g              Compile with debug symbols" };
static struct { VBlob sym; char bytes[60]; } _V10_Dstring_D808 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 60 }, "  -h              Generate header file instead of compiling" };
static struct { VBlob sym; char bytes[118]; } _V10_Dstring_D807 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 118 }, "  -E<num>         Expand only, do not compile or link. 0: macros only, 1: continuation passing style, 2: optimization" };
static struct { VBlob sym; char bytes[57]; } _V10_Dstring_D806 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 57 }, "  -t              Transpile only, do not compile or link" };
static struct { VBlob sym; char bytes[68]; } _V10_Dstring_D805 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 68 }, "  -c              Transpile, compile, and assemble, but do not link" };
static struct { VBlob sym; char bytes[47]; } _V10_Dstring_D804 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 47 }, "  -o<file>        Place the output into <file>" };
static struct { VBlob sym; char bytes[87]; } _V10_Dstring_D803 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 87 }, "  -I<dir>         Add the directory to the list to be searched for scheme header files" };
static struct { VBlob sym; char bytes[60]; } _V10_Dstring_D802 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 60 }, "  -D<feature>     Define a feature for use with cond-expand" };
static struct { VBlob sym; char bytes[57]; } _V10_Dstring_D801 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 57 }, "  -Wc,<option>    Pass comma seperated to the C compiler" };
static struct { VBlob sym; char bytes[53]; } _V10_Dstring_D800 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 53 }, "  -Wl,<option>    Pass comma seperated to the linker" };
static struct { VBlob sym; char bytes[45]; } _V10_Dstring_D799 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 45 }, "  -v              Show intermediate commands" };
static struct { VBlob sym; char bytes[86]; } _V10_Dstring_D798 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 86 }, "  --makefile      Generate makefile dependencies, similar to gcc invoked with -MM -MG" };
static struct { VBlob sym; char bytes[110]; } _V10_Dstring_D797 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 110 }, "  --maketarget    Specify the target of the make dependency, additional --maketarget's add additional targets" };
static struct { VBlob sym; char bytes[44]; } _V10_Dstring_D796 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 44 }, "  --shared        Compile as shared library" };
static struct { VBlob sym; char bytes[76]; } _V10_Dstring_D795 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 76 }, "  --keep-temps    Keep temporary compilation files, such as C intermediates" };
static struct { VBlob sym; char bytes[73]; } _V10_Dstring_D794 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 73 }, "  --hygiene       Use new hygienic macro-expander (still in development)" };
static struct { VBlob sym; char bytes[74]; } _V10_Dstring_D793 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 74 }, "  --verify        Validate the post-expansion core IR against its grammar" };
static struct { VBlob sym; char bytes[93]; } _V10_Dstring_D792 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 93 }, "  --trace-expand  Log every macro transformer application to stderr (hygienic expander only)" };
static struct { VBlob sym; char bytes[131]; } _V10_Dstring_D791 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 131 }, "  --expand-timeout=<sec> Abort macro expansion after <sec> wallclock seconds with a trace-tail diagnostic (hygienic expander only)" };
static struct { VBlob sym; char bytes[100]; } _V10_Dstring_D790 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 100 }, "  --explain-scopes Verbose scope-set dumps on identifier resolution errors (hygienic expander only)" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D789 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "'" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D788 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, " '" };
static struct { VBlob sym; char bytes[60]; } _V10_Dstring_D787 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 60 }, "  --platform=<os> Which OS to make executables for. One of:" };
static struct { VBlob sym; char bytes[104]; } _V10_Dstring_D786 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 104 }, "  --main=<main>   What style of main to use. Either 'main' or 'winmain' or 'emscripten-loop' or 'none'." };
static struct { VBlob sym; char bytes[72]; } _V10_Dstring_D785 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 72 }, "  --cc=<compiler> Use the C compiler of your choice. The default is gcc" };
static struct { VBlob sym; char bytes[38]; } _V10_Dstring_D784 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 38 }, "  --help          You know about this" };
static struct { VBlob sym; char bytes[46]; } _V10_Dstring_D783 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 46 }, "  --version       Show version and build info" };
static struct { VBlob sym; char bytes[1]; } _V10_Dstring_D782 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 1 }, "" };
static struct { VBlob sym; char bytes[58]; } _V10_Dstring_D781 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 58 }, "  -Wunbound     Enable unbound toplevel variable warnings" };
VWEAK VWORD _V0display__help;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0display__help = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "display-help" };
static struct { VBlob sym; char bytes[4]; } _V10_Dstring_D780 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, "~A " };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D779 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, ":" };
static struct { VBlob sym; char bytes[4]; } _V10_Dstring_D778 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, " ~A" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D777 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "invalid import" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D776 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, ".o" };
VWEAK VWORD _V0gen__makefile;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0gen__makefile = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "gen-makefile" };
static struct { VBlob sym; char bytes[36]; } _V10_Dstring_D775 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 36 }, "File did not produce a valid header" };
static struct { VBlob sym; char bytes[50]; } _V10_Dstring_D774 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 50 }, "Only one statement permitted in header generation" };
VWEAK VWORD _V0gen__header;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0gen__header = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "gen-header" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D773 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "/bin/rm ~A" };
VWEAK VWORD _V0delete__file;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0delete__file = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "delete-file" };
VWEAK VWORD _V0count__true;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0count__true = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "count-true" };
static struct { VBlob sym; char bytes[22]; } _V10_Dstring_D772 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "realpath `dirname ~A`" };
VWEAK VWORD _V0realbasepath;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0realbasepath = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "realbasepath" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D771 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "realpath ~A" };
VWEAK VWORD _V0realpath;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0realpath = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "realpath" };
VWEAK VWORD _V0decomma;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0decomma = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "decomma" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D770 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "." };
VWEAK VWORD _V0basepath;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0basepath = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "basepath" };
VWEAK VWORD _V0basename;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0basename = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "basename" };
VWEAK VWORD _V0change__extension;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0change__extension = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "change-extension" };
VWEAK VWORD _V0extension;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0extension = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "extension" };
static struct { VBlob sym; char bytes[17]; } _V10_Dstring_D769 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "~A: ~A seconds~N" };
VWEAK VWORD _V0benchmark;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0benchmark = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "benchmark" };
VWEAK VWORD _V0stdout;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0stdout = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "stdout" };
VWEAK VWORD _V0benchmark_Q;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0benchmark_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "benchmark\?" };
VWEAK VWORD _V0maketargets;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0maketargets = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "maketargets" };
VWEAK VWORD _V0makefile_Q;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0makefile_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "makefile\?" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D768 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "~Ainclude" };
VWEAK VWORD _V0paths;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0paths = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "paths" };
VWEAK VWORD _V0c__options;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0c__options = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "c-options" };
VWEAK VWORD _V0user__feature__list;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0user__feature__list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "user-feature-list" };
VWEAK VWORD _V0werror__unbound__variables;VWEAK struct { VBlob sym; char bytes[25]; } _VW_V0werror__unbound__variables = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 25 }, "werror-unbound-variables" };
VWEAK VWORD _V0w__unbound__variables;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0w__unbound__variables = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "w-unbound-variables" };
VWEAK VWORD _V0cc;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0cc = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "cc" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D767 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "main" };
VWEAK VWORD _V0main;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0main = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "main" };
VWEAK VWORD _V0explain__scopes_Q;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0explain__scopes_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "explain-scopes\?" };
VWEAK VWORD _V0expand__timeout;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0expand__timeout = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "expand-timeout" };
VWEAK VWORD _V0trace__expand_Q;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0trace__expand_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "trace-expand\?" };
VWEAK VWORD _V0verify_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0verify_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "verify\?" };
VWEAK VWORD _V0hygiene_Q;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0hygiene_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "hygiene\?" };
VWEAK VWORD _V0purec_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0purec_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "purec\?" };
static VPair _V10_Dpair_D766 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0enabled__platforms;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0enabled__platforms = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "enabled-platforms" };
static VPair _V10_Dpair_D765 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D764 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "emscripten" };
static VPair _V10_Dpair_D763 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D762 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "windows" };
VWEAK VWORD _V0platform__emscripten__enabled_Q;VWEAK struct { VBlob sym; char bytes[29]; } _VW_V0platform__emscripten__enabled_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 29 }, "platform-emscripten-enabled\?" };
VWEAK VWORD _V0platform__windows__enabled_Q;VWEAK struct { VBlob sym; char bytes[26]; } _VW_V0platform__windows__enabled_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 26 }, "platform-windows-enabled\?" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D761 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "linux" };
VWEAK VWORD _V0platform;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0platform = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "platform" };
VWEAK VWORD _V0out__file;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0out__file = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "out-file" };
VWEAK VWORD _V0api;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0api = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "api" };
VWEAK VWORD _V0optimization;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0optimization = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "optimization" };
VWEAK VWORD _V0verbose_Q;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0verbose_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "verbose\?" };
VWEAK VWORD _V0debug_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0debug_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "debug\?" };
VWEAK VWORD _V0object_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0object_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "object\?" };
VWEAK VWORD _V0transpile_Q;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0transpile_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "transpile\?" };
VWEAK VWORD _V0bytecode_Q;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0bytecode_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "bytecode\?" };
VWEAK VWORD _V0header_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0header_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "header\?" };
VWEAK VWORD _V0keep_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0keep_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "keep\?" };
VWEAK VWORD _V0expand_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expand_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expand\?" };
VWEAK VWORD _V0shared_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0shared_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "shared\?" };
VWEAK VWORD _V0obj__files;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0obj__files = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "obj-files" };
VWEAK VWORD _V0scm__files;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0scm__files = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "scm-files" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D760 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "_V0vanity_V0compiler_V0verify_V20" };
static struct { VBlob sym; char bytes[36]; } _V10_Dstring_D759 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 36 }, "_V0vanity_V0compiler_V0optimize_V20" };
static struct { VBlob sym; char bytes[42]; } _V10_Dstring_D758 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 42 }, "_V0vanity_V0compiler_V0alpha__convert_V20" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D757 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "_V0vanity_V0compiler_V0config_V20" };
static struct { VBlob sym; char bytes[35]; } _V10_Dstring_D756 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 35 }, "_V0vanity_V0compiler_V0library_V20" };
static struct { VBlob sym; char bytes[36]; } _V10_Dstring_D755 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 36 }, "_V0vanity_V0compiler_V0bytecode_V20" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D754 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "_V0vanity_V0compiler_V0transpile_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D753 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0lower_V20" };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D752 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "_V0vanity_V0compiler_V0cps_V20" };
static struct { VBlob sym; char bytes[45]; } _V10_Dstring_D751 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 45 }, "_V0vanity_V0compiler_V0hygienic_V0expand_V20" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D750 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "_V0vanity_V0compiler_V0expand_V20" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D749 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "_V0vanity_V0compiler_V0getopt_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D748 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0match_V20" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D747 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "_V0vanity_V0compiler_V0variables_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D746 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D745 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "_V0vanity_V0pretty__print_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D744 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D743 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
V_DECLARE_FUNC(_V50_V10_Dloop_D81, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V10_Dloop_D103, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V10_Did_D65, _var0, _var1);
V_DECLARE_FUNC(_V50_V10_Dloop_D53, _var0, _var1);
V_DECLARE_FUNC(_V50_V10_Dloop_D29, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V10_Dloop_D20, _var0, _var1);
V_DECLARE_FUNC(_V50_V10_Dloop_D17, _var0, _var1);
V_DECLARE_FUNC(_V50_V10_Dloop_D14, _var0, _var1);
V_DECLARE_FUNC(_V50_V10_Dloop_D11, _var0, _var1);
V_DECLARE_FUNC(_V50_V10_Dloop_D7, _var0, _var1);
static void global_V0k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.%next.115 1 0) (bruijn ##.%x.116 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      statics->vars[0],
      _var0);
}
static void global_V0lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close global_V0k1) (##string ##.string.743))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D743.sym, VPOINTER_OTHER));
}
static void global_V0k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.%next.117 1 0) (bruijn ##.%x.118 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      statics->vars[0],
      _var0);
}
static void global_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close global_V0k2) (##string ##.string.744))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k2, self)))),
      VEncodePointer(&_V10_Dstring_D744.sym, VPOINTER_OTHER));
}
static void global_V0k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.%next.119 1 0) (bruijn ##.%x.120 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      statics->vars[0],
      _var0);
}
static void global_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close global_V0k3) (##string ##.string.745))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k3, self)))),
      VEncodePointer(&_V10_Dstring_D745.sym, VPOINTER_OTHER));
}
static void global_V0k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.%next.121 1 0) (bruijn ##.%x.122 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      statics->vars[0],
      _var0);
}
static void global_V0lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close global_V0k4) (##string ##.string.746))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k4, self)))),
      VEncodePointer(&_V10_Dstring_D746.sym, VPOINTER_OTHER));
}
static void global_V0k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.%next.123 1 0) (bruijn ##.%x.124 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      statics->vars[0],
      _var0);
}
static void global_V0lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close global_V0k5) (##string ##.string.747))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k5, self)))),
      VEncodePointer(&_V10_Dstring_D747.sym, VPOINTER_OTHER));
}
static void global_V0k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.%next.125 1 0) (bruijn ##.%x.126 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      statics->vars[0],
      _var0);
}
static void global_V0lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close global_V0k6) (##string ##.string.748))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k6, self)))),
      VEncodePointer(&_V10_Dstring_D748.sym, VPOINTER_OTHER));
}
static void global_V0k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.%next.127 1 0) (bruijn ##.%x.128 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      statics->vars[0],
      _var0);
}
static void global_V0lambda7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close global_V0k7) (##string ##.string.749))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k7, self)))),
      VEncodePointer(&_V10_Dstring_D749.sym, VPOINTER_OTHER));
}
static void global_V0k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.%next.129 1 0) (bruijn ##.%x.130 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      statics->vars[0],
      _var0);
}
static void global_V0lambda8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close global_V0k8) (##string ##.string.750))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k8, self)))),
      VEncodePointer(&_V10_Dstring_D750.sym, VPOINTER_OTHER));
}
static void global_V0k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.%next.131 1 0) (bruijn ##.%x.132 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      statics->vars[0],
      _var0);
}
static void global_V0lambda9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close global_V0k9) (##string ##.string.751))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k9, self)))),
      VEncodePointer(&_V10_Dstring_D751.sym, VPOINTER_OTHER));
}
static void global_V0k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.%next.133 1 0) (bruijn ##.%x.134 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      statics->vars[0],
      _var0);
}
static void global_V0lambda10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close global_V0k10) (##string ##.string.752))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k10, self)))),
      VEncodePointer(&_V10_Dstring_D752.sym, VPOINTER_OTHER));
}
static void global_V0k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.%next.135 1 0) (bruijn ##.%x.136 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      statics->vars[0],
      _var0);
}
static void global_V0lambda11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close global_V0k11) (##string ##.string.753))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k11, self)))),
      VEncodePointer(&_V10_Dstring_D753.sym, VPOINTER_OTHER));
}
static void global_V0k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.%next.137 1 0) (bruijn ##.%x.138 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      statics->vars[0],
      _var0);
}
static void global_V0lambda12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close global_V0k12) (##string ##.string.754))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k12, self)))),
      VEncodePointer(&_V10_Dstring_D754.sym, VPOINTER_OTHER));
}
static void global_V0k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.%next.139 1 0) (bruijn ##.%x.140 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      statics->vars[0],
      _var0);
}
static void global_V0lambda13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close global_V0k13) (##string ##.string.755))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k13, self)))),
      VEncodePointer(&_V10_Dstring_D755.sym, VPOINTER_OTHER));
}
static void global_V0k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.%next.141 1 0) (bruijn ##.%x.142 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      statics->vars[0],
      _var0);
}
static void global_V0lambda14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close global_V0k14) (##string ##.string.756))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k14, self)))),
      VEncodePointer(&_V10_Dstring_D756.sym, VPOINTER_OTHER));
}
static void global_V0k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.%next.143 1 0) (bruijn ##.%x.144 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      statics->vars[0],
      _var0);
}
static void global_V0lambda15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close global_V0k15) (##string ##.string.757))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k15, self)))),
      VEncodePointer(&_V10_Dstring_D757.sym, VPOINTER_OTHER));
}
static void global_V0k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.%next.145 1 0) (bruijn ##.%x.146 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      statics->vars[0],
      _var0);
}
static void global_V0lambda16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close global_V0k16) (##string ##.string.758))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k16, self)))),
      VEncodePointer(&_V10_Dstring_D758.sym, VPOINTER_OTHER));
}
static void global_V0k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.%next.147 1 0) (bruijn ##.%x.148 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      statics->vars[0],
      _var0);
}
static void global_V0lambda17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close global_V0k17) (##string ##.string.759))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k17, self)))),
      VEncodePointer(&_V10_Dstring_D759.sym, VPOINTER_OTHER));
}
static void global_V0k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.multidefine (bruijn ##.%next.149 1 0) (bruijn ##.%x.150 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiDefine2, 2,
      statics->vars[0],
      _var0);
}
static void global_V0lambda18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close global_V0k18) (##string ##.string.760))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k18, self)))),
      VEncodePointer(&_V10_Dstring_D760.sym, VPOINTER_OTHER));
}
static void global_V0lambda19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.151 0 0) scm-files '())
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0scm__files,
      VNULL
    );
}
static void global_V0lambda20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.152 0 0) obj-files '())
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0obj__files,
      VNULL
    );
}
static void global_V0lambda21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.153 0 0) shared? #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0shared_Q,
      VEncodeBool(false)
    );
}
static void global_V0lambda22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.154 0 0) expand? #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0expand_Q,
      VEncodeBool(false)
    );
}
static void global_V0lambda23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.155 0 0) keep? #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0keep_Q,
      VEncodeBool(false)
    );
}
static void global_V0lambda24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.156 0 0) header? #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0header_Q,
      VEncodeBool(false)
    );
}
static void global_V0lambda25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.157 0 0) bytecode? #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0bytecode_Q,
      VEncodeBool(false)
    );
}
static void global_V0lambda26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.158 0 0) transpile? #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0transpile_Q,
      VEncodeBool(false)
    );
}
static void global_V0lambda27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.159 0 0) object? #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0object_Q,
      VEncodeBool(false)
    );
}
static void global_V0lambda28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.160 0 0) debug? #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0debug_Q,
      VEncodeBool(false)
    );
}
static void global_V0lambda29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.161 0 0) verbose? #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0verbose_Q,
      VEncodeBool(false)
    );
}
static void global_V0lambda30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.162 0 0) optimization 0)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0optimization,
      VEncodeInt(0l)
    );
}
static void global_V0lambda31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.163 0 0) api 1)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0api,
      VEncodeInt(1l)
    );
}
static void global_V0lambda32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.164 0 0) out-file #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0out__file,
      VEncodeBool(false)
    );
}
static void global_V0lambda33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.165 0 0) platform (##string ##.string.761))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0platform,
      VEncodePointer(&_V10_Dstring_D761.sym, VPOINTER_OTHER)
    );
}
static void global_V0lambda34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.166 0 0) platform-windows-enabled? #t)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0platform__windows__enabled_Q,
      VEncodeBool(true)
    );
}
static void global_V0lambda35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.167 0 0) platform-emscripten-enabled? #t)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0platform__emscripten__enabled_Q,
      VEncodeBool(true)
    );
}
static void global_V0k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if platform-windows-enabled? ((bruijn ##.%k.173 0 0) '(##pair ##.pair.763)) ((bruijn ##.%k.173 0 0) '()))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "platform-windows-enabled?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dpair_D763, VPOINTER_PAIR));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
}
}
static void global_V0k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if platform-emscripten-enabled? ((bruijn ##.%k.172 0 0) '(##pair ##.pair.765)) ((bruijn ##.%k.172 0 0) '()))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "platform-emscripten-enabled?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dpair_D765, VPOINTER_PAIR));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
}
}
static void global_V0k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.168 3 0) enabled-platforms (bruijn ##.%x.169 0 0))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      statics->up->up->vars[0],
      _V0enabled__platforms,
      _var0
    );
}
static void global_V0k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (append (close global_V0k23) '(##pair ##.pair.766) (bruijn ##.%x.170 1 0) (bruijn ##.%x.171 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "append")), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k23, self)))),
      VEncodePointer(&_V10_Dpair_D766, VPOINTER_PAIR),
      statics->vars[0],
      _var0);
}
static void global_V0k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k21) (close global_V0k22))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k21, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k22, self)))));
}
static void global_V0lambda36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k19) (close global_V0k20))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k19, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k20, self)))));
}
static void global_V0lambda37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.174 0 0) purec? #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0purec_Q,
      VEncodeBool(false)
    );
}
static void global_V0lambda38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.175 0 0) hygiene? #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0hygiene_Q,
      VEncodeBool(false)
    );
}
static void global_V0lambda39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.176 0 0) verify? #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0verify_Q,
      VEncodeBool(false)
    );
}
static void global_V0lambda40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.177 0 0) trace-expand? #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0trace__expand_Q,
      VEncodeBool(false)
    );
}
static void global_V0lambda41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.178 0 0) expand-timeout #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0expand__timeout,
      VEncodeBool(false)
    );
}
static void global_V0lambda42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.179 0 0) explain-scopes? #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0explain__scopes_Q,
      VEncodeBool(false)
    );
}
static void global_V0lambda43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.180 0 0) main (##string ##.string.767))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0main,
      VEncodePointer(&_V10_Dstring_D767.sym, VPOINTER_OTHER)
    );
}
static void global_V0lambda44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.181 0 0) cc #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0cc,
      VEncodeBool(false)
    );
}
static void global_V0lambda45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.182 0 0) w-unbound-variables #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0w__unbound__variables,
      VEncodeBool(false)
    );
}
static void global_V0lambda46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.183 0 0) werror-unbound-variables #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0werror__unbound__variables,
      VEncodeBool(false)
    );
}
static void global_V0lambda47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.184 0 0) user-feature-list '())
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0user__feature__list,
      VNULL
    );
}
static void global_V0lambda48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.185 0 0) c-options '())
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0c__options,
      VNULL
    );
}
static void global_V0k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.186 2 0) paths (bruijn ##.%x.187 0 0))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      statics->up->vars[0],
      _V0paths,
      _var0
    );
}
static void global_V0k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (list (close global_V0k25) (bruijn ##.%x.188 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "list")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k25, self)))),
      _var0);
}
static void global_V0lambda49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (sprintf (close global_V0k24) (##string ##.string.768) install-root)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "sprintf")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k24, self)))),
      VEncodePointer(&_V10_Dstring_D768.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast2(runtime, "install-root"));
}
static void global_V0lambda50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.189 0 0) makefile? #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0makefile_Q,
      VEncodeBool(false)
    );
}
static void global_V0lambda51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.190 0 0) maketargets '())
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0maketargets,
      VNULL
    );
}
static void global_V0lambda52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.191 0 0) benchmark? #f)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0benchmark_Q,
      VEncodeBool(false)
    );
}
static void global_V0k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.192 1 0) stdout (bruijn ##.%x.193 0 0))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      statics->vars[0],
      _V0stdout,
      _var0
    );
}
static void global_V0lambda53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (current-output-port (close global_V0k26))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "current-output-port")), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k26, self)))));
}
static void _V0benchmark_V0k32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0benchmark_V0k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (format (bruijn ##.%k.197 3 0) stdout (##string ##.string.769) (bruijn ##.label.1 7 1) (bruijn ##.%x.198 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "format")), 5,
      statics->up->up->vars[0],
      VLookupGlobalVarFast2(runtime, "stdout"),
      VEncodePointer(&_V10_Dstring_D769.sym, VPOINTER_OTHER),
      VGetArg(statics, 7-1, 1),
      _var0);
}
static void _V0benchmark_V0k31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0benchmark_V0k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (/ (close _V0benchmark_V0k32) (bruijn ##.%x.199 1 0) (bruijn ##.%x.200 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "/")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0benchmark_V0k32, self)))),
      statics->vars[0],
      _var0);
}
static void _V0benchmark_V0k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0benchmark_V0k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (jiffies-per-second (close _V0benchmark_V0k31))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "jiffies-per-second")), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0benchmark_V0k31, self)))));
}
static void _V0benchmark_V0k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0benchmark_V0k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if benchmark? (- (close _V0benchmark_V0k30) (bruijn ##.end.5 1 0) (bruijn ##.start.3 3 0)) ((bruijn ##.%k.197 0 0) #f))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "benchmark?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "-")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0benchmark_V0k30, self)))),
      statics->vars[0],
      statics->up->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V0benchmark_V0k33(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (apply (bruijn ##.%k.196 1 0) values (bruijn ##.args.4 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "apply")), 3,
      statics->vars[0],
      VLookupGlobalVarFast2(runtime, "values"),
      statics->vars[1]);
}
static void _V0benchmark_V0k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0benchmark_V0k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V0benchmark_V0k29) (close _V0benchmark_V0k33))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0benchmark_V0k29, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0benchmark_V0k33, self)))));
}
static void _V0benchmark_V0lambda56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, ...) {
 if(argc < 1) {
  VErrorC(runtime, "Not enough arguments to _V0benchmark_V0lambda56, got ~D~N"
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
  // (current-jiffy (close _V0benchmark_V0k28))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "current-jiffy")), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0benchmark_V0k28, self)))));
}
static void _V0benchmark_V0k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0benchmark_V0k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (call-with-values (bruijn ##.%k.195 1 0) (bruijn ##.thunk.2 1 2) (close _V0benchmark_V0lambda56))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "call-with-values")), 3,
      statics->vars[0],
      statics->vars[2],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0benchmark_V0lambda56, self)))));
}
static void _V0benchmark_V0lambda55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V0benchmark_V0lambda55, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (current-jiffy (close _V0benchmark_V0k27))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "current-jiffy")), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0benchmark_V0k27, self)))));
}
static void global_V0lambda54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.194 0 0) benchmark (close _V0benchmark_V0lambda55))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0benchmark,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0benchmark_V0lambda55, self))))
    );
}
void _V50_V10_Dloop_D7_V0k37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D7_V0k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (##.loop.7) #f (bruijn ##.loop.7 5 0) (bruijn ##.%k.203 4 0) (bruijn ##.%x.206 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V10_Dloop_D7(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V10_Dloop_D7_V0k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D7_V0k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.205 0 0) (substring (bruijn ##.%k.203 3 0) (bruijn ##.file.6 5 1) (bruijn ##.i.8 3 1)) (- (close _V50_V10_Dloop_D7_V0k37) (bruijn ##.i.8 3 1) 1))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "substring")), 3,
      statics->up->up->vars[0],
      VGetArg(statics, 5-1, 1),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "-")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D7_V0k37, self)))),
      statics->up->up->vars[1],
      VEncodeInt(1l));
}
}
void _V50_V10_Dloop_D7_V0k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D7_V0k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (eq? (close _V50_V10_Dloop_D7_V0k36) #\. (bruijn ##.%x.207 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eq?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D7_V0k36, self)))),
      VEncodeChar('.'),
      _var0);
}
void _V50_V10_Dloop_D7_V0k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D7_V0k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.204 0 0) ((bruijn ##.%k.203 1 0) #f) (string-ref (close _V50_V10_Dloop_D7_V0k35) (bruijn ##.file.6 3 1) (bruijn ##.i.8 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-ref")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D7_V0k35, self)))),
      statics->up->up->vars[1],
      statics->vars[1]);
}
}
void _V50_V10_Dloop_D7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D7, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (<= (close _V50_V10_Dloop_D7_V0k34) (bruijn ##.i.8 0 1) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "<=")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D7_V0k34, self)))),
      _var1,
      VEncodeInt(0l));
}
static void _V0extension_V0k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0extension_V0k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (##.loop.7) #f (bruijn ##.loop.7 2 0) (bruijn ##.%k.202 3 0) (bruijn ##.%x.208 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V10_Dloop_D7(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
static void _V0extension_V0k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0extension_V0k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (- (close _V0extension_V0k39) (bruijn ##.%x.209 0 0) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "-")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0extension_V0k39, self)))),
      _var0,
      VEncodeInt(1l));
}
static void _V0extension_V0lambda58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V0extension_V0lambda58, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V10_Dloop_D7")) (string-length (close _V0extension_V0k38) (bruijn ##.file.6 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D7, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-length")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0extension_V0k38, self)))),
      statics->vars[1]);
    }
}
static void global_V0lambda57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.201 0 0) extension (close _V0extension_V0lambda58))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0extension,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0extension_V0lambda58, self))))
    );
}
void _V50_V10_Dloop_D11_V0k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D11_V0k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (string-append (bruijn ##.%k.212 4 0) (bruijn ##.%x.215 0 0) (bruijn ##.new.10 6 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-append")), 3,
      statics->up->up->up->vars[0],
      _var0,
      VGetArg(statics, 6-1, 2));
}
void _V50_V10_Dloop_D11_V0k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D11_V0k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (##.loop.11) #f (bruijn ##.loop.11 5 0) (bruijn ##.%k.212 4 0) (bruijn ##.%x.216 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V10_Dloop_D11(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V10_Dloop_D11_V0k42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D11_V0k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.214 0 0) (substring (close _V50_V10_Dloop_D11_V0k43) (bruijn ##.file.9 5 1) 0 (bruijn ##.i.12 3 1)) (- (close _V50_V10_Dloop_D11_V0k44) (bruijn ##.i.12 3 1) 1))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "substring")), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D11_V0k43, self)))),
      VGetArg(statics, 5-1, 1),
      VEncodeInt(0l),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "-")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D11_V0k44, self)))),
      statics->up->up->vars[1],
      VEncodeInt(1l));
}
}
void _V50_V10_Dloop_D11_V0k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D11_V0k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (eq? (close _V50_V10_Dloop_D11_V0k42) #\. (bruijn ##.%x.217 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eq?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D11_V0k42, self)))),
      VEncodeChar('.'),
      _var0);
}
void _V50_V10_Dloop_D11_V0k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D11_V0k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.213 0 0) (string-append (bruijn ##.%k.212 1 0) (bruijn ##.file.9 3 1) (bruijn ##.new.10 3 2)) (string-ref (close _V50_V10_Dloop_D11_V0k41) (bruijn ##.file.9 3 1) (bruijn ##.i.12 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-append")), 3,
      statics->vars[0],
      statics->up->up->vars[1],
      statics->up->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-ref")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D11_V0k41, self)))),
      statics->up->up->vars[1],
      statics->vars[1]);
}
}
void _V50_V10_Dloop_D11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D11, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (<= (close _V50_V10_Dloop_D11_V0k40) (bruijn ##.i.12 0 1) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "<=")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D11_V0k40, self)))),
      _var1,
      VEncodeInt(0l));
}
static void _V0change__extension_V0k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0change__extension_V0k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (##.loop.11) #f (bruijn ##.loop.11 2 0) (bruijn ##.%k.211 3 0) (bruijn ##.%x.218 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V10_Dloop_D11(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
static void _V0change__extension_V0k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0change__extension_V0k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (- (close _V0change__extension_V0k46) (bruijn ##.%x.219 0 0) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "-")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0change__extension_V0k46, self)))),
      _var0,
      VEncodeInt(1l));
}
static void _V0change__extension_V0lambda60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V0change__extension_V0lambda60, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 1 ((close "_V50_V10_Dloop_D11")) (string-length (close _V0change__extension_V0k45) (bruijn ##.file.9 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D11, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-length")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0change__extension_V0k45, self)))),
      statics->vars[1]);
    }
}
static void global_V0lambda59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.210 0 0) change-extension (close _V0change__extension_V0lambda60))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0change__extension,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0change__extension_V0lambda60, self))))
    );
}
void _V50_V10_Dloop_D14_V0k50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D14_V0k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (substring (bruijn ##.%k.222 4 0) (bruijn ##.file.13 6 1) (bruijn ##.%x.225 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "substring")), 3,
      statics->up->up->up->vars[0],
      VGetArg(statics, 6-1, 1),
      _var0);
}
void _V50_V10_Dloop_D14_V0k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D14_V0k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (##.loop.14) #f (bruijn ##.loop.14 5 0) (bruijn ##.%k.222 4 0) (bruijn ##.%x.226 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V10_Dloop_D14(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V10_Dloop_D14_V0k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D14_V0k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.224 0 0) (+ (close _V50_V10_Dloop_D14_V0k50) (bruijn ##.i.15 3 1) 1) (- (close _V50_V10_Dloop_D14_V0k51) (bruijn ##.i.15 3 1) 1))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "+")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D14_V0k50, self)))),
      statics->up->up->vars[1],
      VEncodeInt(1l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "-")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D14_V0k51, self)))),
      statics->up->up->vars[1],
      VEncodeInt(1l));
}
}
void _V50_V10_Dloop_D14_V0k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D14_V0k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (eq? (close _V50_V10_Dloop_D14_V0k49) #\/ (bruijn ##.%x.227 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eq?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D14_V0k49, self)))),
      VEncodeChar('/'),
      _var0);
}
void _V50_V10_Dloop_D14_V0k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D14_V0k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.223 0 0) ((bruijn ##.%k.222 1 0) (bruijn ##.file.13 3 1)) (string-ref (close _V50_V10_Dloop_D14_V0k48) (bruijn ##.file.13 3 1) (bruijn ##.i.15 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-ref")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D14_V0k48, self)))),
      statics->up->up->vars[1],
      statics->vars[1]);
}
}
void _V50_V10_Dloop_D14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D14, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (<= (close _V50_V10_Dloop_D14_V0k47) (bruijn ##.i.15 0 1) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "<=")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D14_V0k47, self)))),
      _var1,
      VEncodeInt(0l));
}
static void _V0basename_V0k53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0basename_V0k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (##.loop.14) #f (bruijn ##.loop.14 2 0) (bruijn ##.%k.221 3 0) (bruijn ##.%x.228 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V10_Dloop_D14(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
static void _V0basename_V0k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0basename_V0k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (- (close _V0basename_V0k53) (bruijn ##.%x.229 0 0) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "-")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0basename_V0k53, self)))),
      _var0,
      VEncodeInt(1l));
}
static void _V0basename_V0lambda62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V0basename_V0lambda62, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V10_Dloop_D14")) (string-length (close _V0basename_V0k52) (bruijn ##.file.13 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D14, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-length")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0basename_V0k52, self)))),
      statics->vars[1]);
    }
}
static void global_V0lambda61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.220 0 0) basename (close _V0basename_V0lambda62))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0basename,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0basename_V0lambda62, self))))
    );
}
void _V50_V10_Dloop_D17_V0k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D17_V0k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (substring (bruijn ##.%k.232 4 0) (bruijn ##.file.16 6 1) 0 (bruijn ##.%x.235 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "substring")), 4,
      statics->up->up->up->vars[0],
      VGetArg(statics, 6-1, 1),
      VEncodeInt(0l),
      _var0);
}
void _V50_V10_Dloop_D17_V0k58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D17_V0k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (##.loop.17) #f (bruijn ##.loop.17 5 0) (bruijn ##.%k.232 4 0) (bruijn ##.%x.236 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V10_Dloop_D17(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V10_Dloop_D17_V0k56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D17_V0k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.234 0 0) (+ (close _V50_V10_Dloop_D17_V0k57) (bruijn ##.i.18 3 1) 1) (- (close _V50_V10_Dloop_D17_V0k58) (bruijn ##.i.18 3 1) 1))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "+")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D17_V0k57, self)))),
      statics->up->up->vars[1],
      VEncodeInt(1l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "-")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D17_V0k58, self)))),
      statics->up->up->vars[1],
      VEncodeInt(1l));
}
}
void _V50_V10_Dloop_D17_V0k55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D17_V0k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (eq? (close _V50_V10_Dloop_D17_V0k56) #\/ (bruijn ##.%x.237 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eq?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D17_V0k56, self)))),
      VEncodeChar('/'),
      _var0);
}
void _V50_V10_Dloop_D17_V0k54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D17_V0k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.233 0 0) ((bruijn ##.%k.232 1 0) (##string ##.string.770)) (string-ref (close _V50_V10_Dloop_D17_V0k55) (bruijn ##.file.16 3 1) (bruijn ##.i.18 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D770.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-ref")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D17_V0k55, self)))),
      statics->up->up->vars[1],
      statics->vars[1]);
}
}
void _V50_V10_Dloop_D17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D17, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (<= (close _V50_V10_Dloop_D17_V0k54) (bruijn ##.i.18 0 1) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "<=")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D17_V0k54, self)))),
      _var1,
      VEncodeInt(0l));
}
static void _V0basepath_V0k60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0basepath_V0k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (##.loop.17) #f (bruijn ##.loop.17 2 0) (bruijn ##.%k.231 3 0) (bruijn ##.%x.238 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V10_Dloop_D17(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
static void _V0basepath_V0k59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0basepath_V0k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (- (close _V0basepath_V0k60) (bruijn ##.%x.239 0 0) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "-")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0basepath_V0k60, self)))),
      _var0,
      VEncodeInt(1l));
}
static void _V0basepath_V0lambda64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V0basepath_V0lambda64, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V10_Dloop_D17")) (string-length (close _V0basepath_V0k59) (bruijn ##.file.16 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D17, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-length")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0basepath_V0k59, self)))),
      statics->vars[1]);
    }
}
static void global_V0lambda63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.230 0 0) basepath (close _V0basepath_V0lambda64))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0basepath,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0basepath_V0lambda64, self))))
    );
}
void _V50_V10_Dloop_D20_V0k65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D20_V0k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (##.loop.20) #f (bruijn ##.loop.20 5 0) (bruijn ##.%k.242 4 0) (bruijn ##.%x.245 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V10_Dloop_D20(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
static void _V50_V10_Dloop_D20_V0k64(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (- (close _V50_V10_Dloop_D20_V0k65) (bruijn ##.i.21 3 1) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "-")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D20_V0k65, self)))),
      statics->up->up->vars[1],
      VEncodeInt(1l));
}
void _V50_V10_Dloop_D20_V0k66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D20_V0k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (##.loop.20) #f (bruijn ##.loop.20 5 0) (bruijn ##.%k.242 4 0) (bruijn ##.%x.246 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V10_Dloop_D20(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V10_Dloop_D20_V0k63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D20_V0k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.244 0 0) (string-set! (close _V50_V10_Dloop_D20_V0k64) (bruijn ##.str.19 5 1) (bruijn ##.i.21 3 1) #\space) (- (close _V50_V10_Dloop_D20_V0k66) (bruijn ##.i.21 3 1) 1))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-set!")), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D20_V0k64, self)))),
      VGetArg(statics, 5-1, 1),
      statics->up->up->vars[1],
      VEncodeChar(' '));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "-")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D20_V0k66, self)))),
      statics->up->up->vars[1],
      VEncodeInt(1l));
}
}
void _V50_V10_Dloop_D20_V0k62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D20_V0k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (eq? (close _V50_V10_Dloop_D20_V0k63) #\, (bruijn ##.%x.247 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eq?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D20_V0k63, self)))),
      VEncodeChar(','),
      _var0);
}
void _V50_V10_Dloop_D20_V0k61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D20_V0k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.243 0 0) ((bruijn ##.%k.242 1 0) (bruijn ##.str.19 3 1)) (string-ref (close _V50_V10_Dloop_D20_V0k62) (bruijn ##.str.19 3 1) (bruijn ##.i.21 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-ref")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D20_V0k62, self)))),
      statics->up->up->vars[1],
      statics->vars[1]);
}
}
void _V50_V10_Dloop_D20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D20, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (< (close _V50_V10_Dloop_D20_V0k61) (bruijn ##.i.21 0 1) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "<")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D20_V0k61, self)))),
      _var1,
      VEncodeInt(0l));
}
static void _V0decomma_V0k68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0decomma_V0k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (##.loop.20) #f (bruijn ##.loop.20 2 0) (bruijn ##.%k.241 3 0) (bruijn ##.%x.248 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V10_Dloop_D20(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
static void _V0decomma_V0k67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0decomma_V0k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (- (close _V0decomma_V0k68) (bruijn ##.%x.249 0 0) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "-")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0decomma_V0k68, self)))),
      _var0,
      VEncodeInt(1l));
}
static void _V0decomma_V0lambda66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V0decomma_V0lambda66, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V10_Dloop_D20")) (string-length (close _V0decomma_V0k67) (bruijn ##.str.19 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D20, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-length")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0decomma_V0k67, self)))),
      statics->vars[1]);
    }
}
static void global_V0lambda65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.240 0 0) decomma (close _V0decomma_V0lambda66))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0decomma,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0decomma_V0lambda66, self))))
    );
}
static void _V0realpath_V0k72(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.%k.251 3 0) (bruijn ##.ret.24 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[0]);
}
static void _V0realpath_V0k71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0realpath_V0k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (close-port (close _V0realpath_V0k72) (bruijn ##.proc.23 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "close-port")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0realpath_V0k72, self)))),
      statics->vars[0]);
}
static void _V0realpath_V0k70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0realpath_V0k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (read-line (close _V0realpath_V0k71) (bruijn ##.proc.23 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "read-line")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0realpath_V0k71, self)))),
      _var0);
}
static void _V0realpath_V0k69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0realpath_V0k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (open-input-process (close _V0realpath_V0k70) (bruijn ##.%x.252 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "open-input-process")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0realpath_V0k70, self)))),
      _var0);
}
static void _V0realpath_V0lambda68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V0realpath_V0lambda68, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (sprintf (close _V0realpath_V0k69) (##string ##.string.771) (bruijn ##.file.22 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "sprintf")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0realpath_V0k69, self)))),
      VEncodePointer(&_V10_Dstring_D771.sym, VPOINTER_OTHER),
      _var1);
}
static void global_V0lambda67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.250 0 0) realpath (close _V0realpath_V0lambda68))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0realpath,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0realpath_V0lambda68, self))))
    );
}
static void _V0realbasepath_V0k76(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.%k.254 3 0) (bruijn ##.ret.27 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[0]);
}
static void _V0realbasepath_V0k75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0realbasepath_V0k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (close-port (close _V0realbasepath_V0k76) (bruijn ##.proc.26 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "close-port")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0realbasepath_V0k76, self)))),
      statics->vars[0]);
}
static void _V0realbasepath_V0k74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0realbasepath_V0k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (read-line (close _V0realbasepath_V0k75) (bruijn ##.proc.26 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "read-line")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0realbasepath_V0k75, self)))),
      _var0);
}
static void _V0realbasepath_V0k73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0realbasepath_V0k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (open-input-process (close _V0realbasepath_V0k74) (bruijn ##.%x.255 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "open-input-process")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0realbasepath_V0k74, self)))),
      _var0);
}
static void _V0realbasepath_V0lambda70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V0realbasepath_V0lambda70, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (sprintf (close _V0realbasepath_V0k73) (##string ##.string.772) (bruijn ##.file.25 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "sprintf")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0realbasepath_V0k73, self)))),
      VEncodePointer(&_V10_Dstring_D772.sym, VPOINTER_OTHER),
      _var1);
}
static void global_V0lambda69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.253 0 0) realbasepath (close _V0realbasepath_V0lambda70))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0realbasepath,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0realbasepath_V0lambda70, self))))
    );
}
void _V50_V10_Dloop_D29_V0k80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D29_V0k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.263 1 0) ((bruijn ##.%k.264 0 0) 1) ((bruijn ##.%k.264 0 0) 0))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(1l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(0l));
}
}
void _V50_V10_Dloop_D29_V0k82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D29_V0k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (##.loop.29) #f (bruijn ##.loop.29 6 0) (bruijn ##.%k.258 5 0) (bruijn ##.%x.260 3 0) (bruijn ##.%x.261 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg1 = 
      statics->up->up->vars[0];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V10_Dloop_D29(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V10_Dloop_D29_V0k81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D29_V0k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (+ (close _V50_V10_Dloop_D29_V0k82) (bruijn ##.ct.31 4 2) (bruijn ##.%x.262 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "+")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D29_V0k82, self)))),
      statics->up->up->up->vars[2],
      _var0);
}
void _V50_V10_Dloop_D29_V0k79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D29_V0k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V10_Dloop_D29_V0k80) (close _V50_V10_Dloop_D29_V0k81))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D29_V0k80, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D29_V0k81, self)))));
}
void _V50_V10_Dloop_D29_V0k78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D29_V0k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (car (close _V50_V10_Dloop_D29_V0k79) (bruijn ##.args.30 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D29_V0k79, self)))),
      statics->up->vars[1]);
}
void _V50_V10_Dloop_D29_V0k77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D29_V0k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.259 0 0) ((bruijn ##.%k.258 1 0) (bruijn ##.ct.31 1 2)) (cdr (close _V50_V10_Dloop_D29_V0k78) (bruijn ##.args.30 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdr")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D29_V0k78, self)))),
      statics->vars[1]);
}
}
void _V50_V10_Dloop_D29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D29, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (null? (close _V50_V10_Dloop_D29_V0k77) (bruijn ##.args.30 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "null?")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D29_V0k77, self)))),
      _var1);
}
static void _V0count__true_V0lambda72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, ...) {
 if(argc < 1) {
  VErrorC(runtime, "Not enough arguments to _V0count__true_V0lambda72, got ~D~N"
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
  // (letrec 1 ((close "_V50_V10_Dloop_D29")) (##qualified-call (##.loop.29) #f (bruijn ##.loop.29 0 0) (bruijn ##.%k.257 1 0) (bruijn ##.args.28 1 1) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D29, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      VEncodeInt(0l);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V10_Dloop_D29(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
static void global_V0lambda71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.256 0 0) count-true (close _V0count__true_V0lambda72))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0count__true,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0count__true_V0lambda72, self))))
    );
}
static void _V0delete__file_V0k83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0delete__file_V0k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (system (bruijn ##.%k.266 1 0) (bruijn ##.%x.267 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "system")), 2,
      statics->vars[0],
      _var0);
}
static void _V0delete__file_V0lambda74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V0delete__file_V0lambda74, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (sprintf (close _V0delete__file_V0k83) (##string ##.string.773) (bruijn ##.f.32 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "sprintf")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0delete__file_V0k83, self)))),
      VEncodePointer(&_V10_Dstring_D773.sym, VPOINTER_OTHER),
      _var1);
}
static void global_V0lambda73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.265 0 0) delete-file (close _V0delete__file_V0lambda74))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0delete__file,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0delete__file_V0lambda74, self))))
    );
}
static void _V0gen__header_V0k91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_V0k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.280 1 0) (compiler-error (bruijn ##.%k.281 0 0) (##string ##.string.774)) ((bruijn ##.%k.281 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D774.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V0gen__header_V0k94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_V0k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.278 1 0) ((bruijn ##.%k.279 0 0) (bruijn ##.%p.278 1 0)) (car (bruijn ##.%k.279 0 0) (bruijn ##.headers.35 4 0)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      _var0,
      statics->up->up->up->vars[0]);
}
}
static void _V0gen__header_V0k97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_V0k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.275 1 0) (compiler-error (bruijn ##.%k.276 0 0) (##string ##.string.775)) ((bruijn ##.%k.276 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D775.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V0gen__header_V0k102(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_V0k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (write (bruijn ##.%k.272 1 0) (bruijn ##.%x.273 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "write")), 2,
      statics->vars[0],
      _var0);
}
static void _V0gen__header_V0k101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_V0k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.271 1 0) (car (close _V0gen__header_V0k102) (bruijn ##.headers.35 9 0)) ((bruijn ##.%k.272 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header_V0k102, self)))),
      VGetArg(statics, 9-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V0gen__header_V0k103(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (newline (bruijn ##.%k.270 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "newline")), 1,
      statics->up->vars[0]);
}
static void _V0gen__header_V0k100(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_V0k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V0gen__header_V0k101) (close _V0gen__header_V0k103))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header_V0k101, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header_V0k103, self)))));
}
static void _V0gen__header_V0k99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_V0k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (not (close _V0gen__header_V0k100) (bruijn ##.%x.274 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header_V0k100, self)))),
      _var0);
}
static void _V0gen__header_V0lambda77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_V0lambda77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (null? (close _V0gen__header_V0k99) (bruijn ##.headers.35 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "null?")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header_V0k99, self)))),
      VGetArg(statics, 6-1, 0));
}
static void _V0gen__header_V0k98(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (with-output-to-file (bruijn ##.%k.269 10 0) out-file (close _V0gen__header_V0lambda77))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "with-output-to-file")), 3,
      VGetArg(statics, 10-1, 0),
      VLookupGlobalVarFast2(runtime, "out-file"),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header_V0lambda77, self)))));
}
static void _V0gen__header_V0k96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_V0k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V0gen__header_V0k97) (close _V0gen__header_V0k98))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header_V0k97, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header_V0k98, self)))));
}
static void _V0gen__header_V0k95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_V0k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (not (close _V0gen__header_V0k96) (bruijn ##.%x.277 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header_V0k96, self)))),
      _var0);
}
static void _V0gen__header_V0k93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_V0k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V0gen__header_V0k94) (close _V0gen__header_V0k95))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header_V0k94, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header_V0k95, self)))));
}
static void _V0gen__header_V0k92(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (null? (close _V0gen__header_V0k93) (bruijn ##.headers.35 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "null?")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header_V0k93, self)))),
      statics->up->vars[0]);
}
static void _V0gen__header_V0k90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_V0k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V0gen__header_V0k91) (close _V0gen__header_V0k92))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header_V0k91, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header_V0k92, self)))));
}
static void _V0gen__header_V0k89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_V0k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (> (close _V0gen__header_V0k90) (bruijn ##.%x.282 0 0) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, ">")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header_V0k90, self)))),
      _var0,
      VEncodeInt(1l));
}
static void _V0gen__header_V0k88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_V0k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (length (close _V0gen__header_V0k89) (bruijn ##.headers.35 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "length")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header_V0k89, self)))),
      _var0);
}
static void _V0gen__header_V0lambda78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_V0lambda78, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.%k.283 0 0) (bruijn ##.x.36 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
}
static void _V0gen__header_V0k87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_V0k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (filter (close _V0gen__header_V0k88) (close _V0gen__header_V0lambda78) (bruijn ##.%x.284 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "filter")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header_V0k88, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header_V0lambda78, self)))),
      _var0);
}
static void _V0gen__header_V0k106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_V0k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (header-from-library (bruijn ##.%k.285 3 0) (bruijn ##.x.33.37 3 1) (bruijn ##.%x.286 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "header-from-library")), 3,
      statics->up->up->vars[0],
      statics->up->up->vars[1],
      _var0);
}
static void _V0gen__header_V0k105(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_V0k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (cons (close _V0gen__header_V0k106) (bruijn ##.%x.287 0 0) paths)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header_V0k106, self)))),
      _var0,
      VLookupGlobalVarFast2(runtime, "paths"));
}
static void _V0gen__header_V0k104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_V0k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (realbasepath (close _V0gen__header_V0k105) (bruijn ##.%x.288 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "realbasepath")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header_V0k105, self)))),
      _var0);
}
static void _V0gen__header_V0lambda79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_V0lambda79, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (car (close _V0gen__header_V0k104) scm-files)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header_V0k104, self)))),
      VLookupGlobalVarFast2(runtime, "scm-files"));
}
static void _V0gen__header_V0k86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_V0k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (map (close _V0gen__header_V0k87) (close _V0gen__header_V0lambda79) (bruijn ##.file.34 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "map")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header_V0k87, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header_V0lambda79, self)))),
      _var0);
}
static void _V0gen__header_V0k85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_V0k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (read-all (close _V0gen__header_V0k86) (bruijn ##.%x.289 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "read-all")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header_V0k86, self)))),
      _var0);
}
static void _V0gen__header_V0k84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_V0k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (open-input-file (close _V0gen__header_V0k85) (bruijn ##.%x.290 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "open-input-file")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header_V0k85, self)))),
      _var0);
}
static void _V0gen__header_V0lambda76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__header_V0lambda76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (car (close _V0gen__header_V0k84) scm-files)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header_V0k84, self)))),
      VLookupGlobalVarFast2(runtime, "scm-files"));
}
static void global_V0lambda75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.268 0 0) gen-header (close _V0gen__header_V0lambda76))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0gen__header,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__header_V0lambda76, self))))
    );
}
static void _V0gen__makefile_V0k112(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_V0k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.%k.305 4 0) maketargets (bruijn ##.%x.306 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      statics->up->up->up->vars[0],
      _V0maketargets,
      _var0
    );
}
static void _V0gen__makefile_V0k111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_V0k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (list (close _V0gen__makefile_V0k112) (bruijn ##.%x.307 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "list")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0k112, self)))),
      _var0);
}
static void _V0gen__makefile_V0k110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_V0k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (change-extension (close _V0gen__makefile_V0k111) (bruijn ##.%x.308 0 0) (##string ##.string.776))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "change-extension")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0k111, self)))),
      _var0,
      VEncodePointer(&_V10_Dstring_D776.sym, VPOINTER_OTHER));
}
static void _V0gen__makefile_V0k109(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_V0k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basename (close _V0gen__makefile_V0k110) (bruijn ##.%x.309 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "basename")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0k110, self)))),
      _var0);
}
static void _V0gen__makefile_V0k108(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_V0k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.304 1 0) (car (close _V0gen__makefile_V0k109) scm-files) ((bruijn ##.%k.305 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0k109, self)))),
      VLookupGlobalVarFast2(runtime, "scm-files"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V0gen__makefile_V0k118(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_V0k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if out-file (open-output-file (bruijn ##.%k.301 0 0) out-file) (current-output-port (bruijn ##.%k.301 0 0)))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "out-file"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "open-output-file")), 2,
      _var0,
      VLookupGlobalVarFast2(runtime, "out-file"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "current-output-port")), 1,
      _var0);
}
}
static void _V0gen__makefile_V0k125(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (if out-file (close-port (bruijn ##.%k.292 7 0) (bruijn ##.port.40 1 0)) ((bruijn ##.%k.292 7 0) #f))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "out-file"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "close-port")), 2,
      VGetArg(statics, 7-1, 0),
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V0gen__makefile_V0k124(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (newline (close _V0gen__makefile_V0k125) (bruijn ##.port.40 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "newline")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0k125, self)))),
      statics->vars[0]);
}
static void _V0gen__makefile_V0k129(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_V0k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.296 1 0) (compiler-error (bruijn ##.%k.297 0 0) (##string ##.string.777) (bruijn ##.dep.42 4 1)) ((bruijn ##.%k.297 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D777.sym, VPOINTER_OTHER),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V0gen__makefile_V0k131(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_V0k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (format (bruijn ##.%k.293 4 0) (bruijn ##.port.40 6 0) (##string ##.string.778) (bruijn ##.%x.295 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "format")), 4,
      statics->up->up->up->vars[0],
      VGetArg(statics, 6-1, 0),
      VEncodePointer(&_V10_Dstring_D778.sym, VPOINTER_OTHER),
      _var0);
}
static void _V0gen__makefile_V0k130(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (import->path (close _V0gen__makefile_V0k131) (bruijn ##.dep.42 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "import->path")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0k131, self)))),
      statics->up->up->vars[1]);
}
static void _V0gen__makefile_V0k128(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_V0k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V0gen__makefile_V0k129) (close _V0gen__makefile_V0k130))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0k129, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0k130, self)))));
}
static void _V0gen__makefile_V0k127(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_V0k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (not (close _V0gen__makefile_V0k128) (bruijn ##.%x.298 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0k128, self)))),
      _var0);
}
static void _V0gen__makefile_V0k126(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_V0k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.294 0 0) (valid-import? (close _V0gen__makefile_V0k127) (bruijn ##.dep.42 1 1)) ((bruijn ##.%k.293 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "valid-import?")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0k127, self)))),
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V0gen__makefile_V0lambda82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_V0lambda82, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (pair? (close _V0gen__makefile_V0k126) (bruijn ##.dep.42 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "pair?")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0k126, self)))),
      _var1);
}
static void _V0gen__makefile_V0k123(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (for-each (close _V0gen__makefile_V0k124) (close _V0gen__makefile_V0lambda82) (bruijn ##.deps.39 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "for-each")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0k124, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0lambda82, self)))),
      statics->up->vars[0]);
}
static void _V0gen__makefile_V0k122(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_V0k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (format (close _V0gen__makefile_V0k123) (bruijn ##.port.40 1 0) (##string ##.string.778) (bruijn ##.%x.299 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "format")), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0k123, self)))),
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D778.sym, VPOINTER_OTHER),
      _var0);
}
static void _V0gen__makefile_V0k121(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (car (close _V0gen__makefile_V0k122) scm-files)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0k122, self)))),
      VLookupGlobalVarFast2(runtime, "scm-files"));
}
static void _V0gen__makefile_V0k120(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (display (close _V0gen__makefile_V0k121) (##string ##.string.779) (bruijn ##.port.40 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "display")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0k121, self)))),
      VEncodePointer(&_V10_Dstring_D779.sym, VPOINTER_OTHER),
      self->vars[0]);
}
static void _V0gen__makefile_V0lambda83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_V0lambda83, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (format (bruijn ##.%k.300 0 0) (bruijn ##.port.40 1 0) (##string ##.string.780) (bruijn ##.target.41 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "format")), 4,
      _var0,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D780.sym, VPOINTER_OTHER),
      _var1);
}
static void _V0gen__makefile_V0k119(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_V0k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (for-each (close _V0gen__makefile_V0k120) (close _V0gen__makefile_V0lambda83) maketargets)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "for-each")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0k120, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0lambda83, self)))),
      VLookupGlobalVarFast2(runtime, "maketargets"));
}
static void _V0gen__makefile_V0k117(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_V0k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V0gen__makefile_V0k118) (close _V0gen__makefile_V0k119))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0k118, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0k119, self)))));
}
static void _V0gen__makefile_V0k116(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_V0k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (gather-dependencies (close _V0gen__makefile_V0k117) (bruijn ##.file.38 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "gather-dependencies")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0k117, self)))),
      _var0);
}
static void _V0gen__makefile_V0k115(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_V0k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (read-all (close _V0gen__makefile_V0k116) (bruijn ##.%x.302 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "read-all")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0k116, self)))),
      _var0);
}
static void _V0gen__makefile_V0k114(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_V0k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (open-input-file (close _V0gen__makefile_V0k115) (bruijn ##.%x.303 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "open-input-file")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0k115, self)))),
      _var0);
}
static void _V0gen__makefile_V0k113(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (car (close _V0gen__makefile_V0k114) scm-files)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0k114, self)))),
      VLookupGlobalVarFast2(runtime, "scm-files"));
}
static void _V0gen__makefile_V0k107(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_V0k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V0gen__makefile_V0k108) (close _V0gen__makefile_V0k113))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0k108, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0k113, self)))));
}
static void _V0gen__makefile_V0lambda81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0gen__makefile_V0lambda81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (null? (close _V0gen__makefile_V0k107) maketargets)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "null?")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0k107, self)))),
      VLookupGlobalVarFast2(runtime, "maketargets"));
}
static void global_V0lambda80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.291 0 0) gen-makefile (close _V0gen__makefile_V0lambda81))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0gen__makefile,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0gen__makefile_V0lambda81, self))))
    );
}
static void _V0display__help_V0k164(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (bruijn ##.%k.311 2 0) (##string ##.string.781))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D781.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k163(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k164) (##string ##.string.782))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k164, self)))),
      VEncodePointer(&_V10_Dstring_D782.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k162(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k163) (##string ##.string.783))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k163, self)))),
      VEncodePointer(&_V10_Dstring_D783.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k161(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k162) (##string ##.string.784))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k162, self)))),
      VEncodePointer(&_V10_Dstring_D784.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k160(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k161) (##string ##.string.785))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k161, self)))),
      VEncodePointer(&_V10_Dstring_D785.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k159(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k160) (##string ##.string.786))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k160, self)))),
      VEncodePointer(&_V10_Dstring_D786.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k158(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_V0k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (displayln (close _V0display__help_V0k159) (bruijn ##.%x.312 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k159, self)))),
      _var0);
}
static void _V0display__help_V0k157(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_V0k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (apply (close _V0display__help_V0k158) string-append (##string ##.string.787) (bruijn ##.%x.313 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "apply")), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k158, self)))),
      VLookupGlobalVarFast2(runtime, "string-append"),
      VEncodePointer(&_V10_Dstring_D787.sym, VPOINTER_OTHER),
      _var0);
}
static void _V0display__help_V0lambda86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_V0lambda86, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (string-append (bruijn ##.%k.314 0 0) (##string ##.string.788) (bruijn ##.p.43 0 1) (##string ##.string.789))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-append")), 4,
      _var0,
      VEncodePointer(&_V10_Dstring_D788.sym, VPOINTER_OTHER),
      _var1,
      VEncodePointer(&_V10_Dstring_D789.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k156(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (map (close _V0display__help_V0k157) (close _V0display__help_V0lambda86) enabled-platforms)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "map")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k157, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0lambda86, self)))),
      VLookupGlobalVarFast2(runtime, "enabled-platforms"));
}
static void _V0display__help_V0k155(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k156) (##string ##.string.790))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k156, self)))),
      VEncodePointer(&_V10_Dstring_D790.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k154(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k155) (##string ##.string.791))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k155, self)))),
      VEncodePointer(&_V10_Dstring_D791.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k153(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k154) (##string ##.string.792))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k154, self)))),
      VEncodePointer(&_V10_Dstring_D792.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k152(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k153) (##string ##.string.793))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k153, self)))),
      VEncodePointer(&_V10_Dstring_D793.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k151(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k152) (##string ##.string.794))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k152, self)))),
      VEncodePointer(&_V10_Dstring_D794.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k150(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k151) (##string ##.string.795))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k151, self)))),
      VEncodePointer(&_V10_Dstring_D795.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k149(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k150) (##string ##.string.796))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k150, self)))),
      VEncodePointer(&_V10_Dstring_D796.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k148(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k149) (##string ##.string.782))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k149, self)))),
      VEncodePointer(&_V10_Dstring_D782.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k147(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k148) (##string ##.string.797))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k148, self)))),
      VEncodePointer(&_V10_Dstring_D797.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k146(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k147) (##string ##.string.798))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k147, self)))),
      VEncodePointer(&_V10_Dstring_D798.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k145(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k146) (##string ##.string.782))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k146, self)))),
      VEncodePointer(&_V10_Dstring_D782.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k144(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k145) (##string ##.string.799))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k145, self)))),
      VEncodePointer(&_V10_Dstring_D799.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k143(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k144) (##string ##.string.800))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k144, self)))),
      VEncodePointer(&_V10_Dstring_D800.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k142(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k143) (##string ##.string.801))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k143, self)))),
      VEncodePointer(&_V10_Dstring_D801.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k141(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k142) (##string ##.string.802))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k142, self)))),
      VEncodePointer(&_V10_Dstring_D802.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k140(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k141) (##string ##.string.803))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k141, self)))),
      VEncodePointer(&_V10_Dstring_D803.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k139(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k140) (##string ##.string.804))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k140, self)))),
      VEncodePointer(&_V10_Dstring_D804.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k138(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k139) (##string ##.string.805))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k139, self)))),
      VEncodePointer(&_V10_Dstring_D805.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k137(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k138) (##string ##.string.806))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k138, self)))),
      VEncodePointer(&_V10_Dstring_D806.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k136(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k137) (##string ##.string.807))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k137, self)))),
      VEncodePointer(&_V10_Dstring_D807.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k135(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k136) (##string ##.string.808))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k136, self)))),
      VEncodePointer(&_V10_Dstring_D808.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k134(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k135) (##string ##.string.809))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k135, self)))),
      VEncodePointer(&_V10_Dstring_D809.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k133(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k134) (##string ##.string.810))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k134, self)))),
      VEncodePointer(&_V10_Dstring_D810.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0k132(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (close _V0display__help_V0k133) (##string ##.string.811))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k133, self)))),
      VEncodePointer(&_V10_Dstring_D811.sym, VPOINTER_OTHER));
}
static void _V0display__help_V0lambda85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__help_V0lambda85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (displayln (close _V0display__help_V0k132) (##string ##.string.812))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0k132, self)))),
      VEncodePointer(&_V10_Dstring_D812.sym, VPOINTER_OTHER));
}
static void global_V0lambda84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.310 0 0) display-help (close _V0display__help_V0lambda85))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0display__help,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__help_V0lambda85, self))))
    );
}
static void _V0display__version_V0k167(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (displayln (bruijn ##.%k.316 2 0) (##string ##.string.813))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D813.sym, VPOINTER_OTHER));
}
static void _V0display__version_V0k166(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__version_V0k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (printf (close _V0display__version_V0k167) (##string ##.string.814) (bruijn ##.%x.317 1 0) (bruijn ##.%x.318 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "printf")), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__version_V0k167, self)))),
      VEncodePointer(&_V10_Dstring_D814.sym, VPOINTER_OTHER),
      statics->vars[0],
      _var0);
}
static void _V0display__version_V0k165(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__version_V0k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (cadr (close _V0display__version_V0k166) version)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cadr")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__version_V0k166, self)))),
      VLookupGlobalVarFast2(runtime, "version"));
}
static void _V0display__version_V0lambda88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0display__version_V0lambda88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (car (close _V0display__version_V0k165) version)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__version_V0k165, self)))),
      VLookupGlobalVarFast2(runtime, "version"));
}
static void global_V0lambda87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.315 0 0) display-version (close _V0display__version_V0lambda88))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0display__version,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0display__version_V0lambda88, self))))
    );
}
static void _V0handle__exception_V0lambda91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V0handle__exception_V0lambda91, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (printf (bruijn ##.%k.323 0 0) (##string ##.string.780) (bruijn ##.e.51 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "printf")), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D780.sym, VPOINTER_OTHER),
      _var1);
}
static void _V0handle__exception_V0k178(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0handle__exception_V0k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (for-each (bruijn ##.%k.322 3 0) (close _V0handle__exception_V0lambda91) (bruijn ##.%x.324 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "for-each")), 3,
      statics->up->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0handle__exception_V0lambda91, self)))),
      _var0);
}
static void _V0handle__exception_V0k177(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (error-object-irritants (close _V0handle__exception_V0k178) (bruijn ##.err.47 8 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "error-object-irritants")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0handle__exception_V0k178, self)))),
      VGetArg(statics, 8-1, 1));
}
static void _V0handle__exception_V0k176(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0handle__exception_V0k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (printf (close _V0handle__exception_V0k177) (##string ##.string.815) (bruijn ##.%x.325 1 0) (bruijn ##.%x.326 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "printf")), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0handle__exception_V0k177, self)))),
      VEncodePointer(&_V10_Dstring_D815.sym, VPOINTER_OTHER),
      statics->vars[0],
      _var0);
}
static void _V0handle__exception_V0k175(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0handle__exception_V0k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (error-object-message (close _V0handle__exception_V0k176) (bruijn ##.err.47 7 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "error-object-message")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0handle__exception_V0k176, self)))),
      VGetArg(statics, 7-1, 1));
}
static void _V0handle__exception_V0k174(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0handle__exception_V0k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.321 1 0) (record-ref (close _V0handle__exception_V0k175) (bruijn ##.err.47 6 1) 1) (display (bruijn ##.%k.322 0 0) (bruijn ##.err.47 6 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "record-ref")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0handle__exception_V0k175, self)))),
      VGetArg(statics, 6-1, 1),
      VEncodeInt(1l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "display")), 2,
      _var0,
      VGetArg(statics, 6-1, 1));
}
}
static void _V0handle__exception_V0k182(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.%k.320 6 0) (bruijn ##.ret.46.50 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      self->vars[0]);
}
static void _V0handle__exception_V0k181(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0handle__exception_V0k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (current-output-port (close _V0handle__exception_V0k182) '##vcore.pop-value (bruijn ##.keyval.45.49 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "current-output-port")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0handle__exception_V0k182, self)))),
      _V10vcore_Dpop__value,
      statics->up->up->up->vars[0]);
}
static void _V0handle__exception_V0k180(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (exit (close _V0handle__exception_V0k181) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "exit")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0handle__exception_V0k181, self)))),
      VEncodeInt(1l));
}
static void _V0handle__exception_V0k179(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (newline (close _V0handle__exception_V0k180))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "newline")), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0handle__exception_V0k180, self)))));
}
static void _V0handle__exception_V0k173(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0handle__exception_V0k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V0handle__exception_V0k174) (close _V0handle__exception_V0k179))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0handle__exception_V0k174, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0handle__exception_V0k179, self)))));
}
static void _V0handle__exception_V0k172(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (error-object? (close _V0handle__exception_V0k173) (bruijn ##.err.47 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "error-object?")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0handle__exception_V0k173, self)))),
      statics->up->up->up->vars[1]);
}
static void _V0handle__exception_V0k171(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0handle__exception_V0k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (printf (close _V0handle__exception_V0k172) (##string ##.string.816) (bruijn ##.%x.327 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "printf")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0handle__exception_V0k172, self)))),
      VEncodePointer(&_V10_Dstring_D816.sym, VPOINTER_OTHER),
      _var0);
}
static void _V0handle__exception_V0k170(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0handle__exception_V0k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (car (close _V0handle__exception_V0k171) (bruijn ##.%x.328 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0handle__exception_V0k171, self)))),
      _var0);
}
static void _V0handle__exception_V0k169(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0handle__exception_V0k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (command-line (close _V0handle__exception_V0k170))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "command-line")), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0handle__exception_V0k170, self)))));
}
static void _V0handle__exception_V0k168(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0handle__exception_V0k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (current-output-port (close _V0handle__exception_V0k169) '##vcore.push-value (bruijn ##.%x.329 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "current-output-port")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0handle__exception_V0k169, self)))),
      _V10vcore_Dpush__value,
      _var0);
}
static void _V0handle__exception_V0lambda90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V0handle__exception_V0lambda90, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (current-error-port (close _V0handle__exception_V0k168))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "current-error-port")), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0handle__exception_V0k168, self)))));
}
static void global_V0lambda89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.319 0 0) handle-exception (close _V0handle__exception_V0lambda90))
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0handle__exception,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0handle__exception_V0lambda90, self))))
    );
}
void _V50_V10_Dloop_D53_V0k192(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.%k.391 5 0) obj-files (bruijn ##.%x.393 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 5-1, 0),
      _V0obj__files,
      _var0
    );
}
void _V50_V10_Dloop_D53_V0k191(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (cons (close _V50_V10_Dloop_D53_V0k192) (bruijn ##.%x.394 0 0) obj-files)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k192, self)))),
      _var0,
      VLookupGlobalVarFast2(runtime, "obj-files"));
}
void _V50_V10_Dloop_D53_V0k198(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.%k.391 9 0) obj-files (bruijn ##.%x.396 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 9-1, 0),
      _V0obj__files,
      _var0
    );
}
void _V50_V10_Dloop_D53_V0k197(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (cons (close _V50_V10_Dloop_D53_V0k198) (bruijn ##.%x.397 0 0) obj-files)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k198, self)))),
      _var0,
      VLookupGlobalVarFast2(runtime, "obj-files"));
}
void _V50_V10_Dloop_D53_V0k196(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (string-append (close _V50_V10_Dloop_D53_V0k197) (##string ##.string.817) (bruijn ##.%x.398 0 0) (##string ##.string.818))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-append")), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k197, self)))),
      VEncodePointer(&_V10_Dstring_D817.sym, VPOINTER_OTHER),
      _var0,
      VEncodePointer(&_V10_Dstring_D818.sym, VPOINTER_OTHER));
}
void _V50_V10_Dloop_D53_V0k204(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.%k.391 12 0) obj-files (bruijn ##.%x.400 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 12-1, 0),
      _V0obj__files,
      _var0
    );
}
void _V50_V10_Dloop_D53_V0k203(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (cons (close _V50_V10_Dloop_D53_V0k204) (bruijn ##.%x.401 0 0) obj-files)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k204, self)))),
      _var0,
      VLookupGlobalVarFast2(runtime, "obj-files"));
}
void _V50_V10_Dloop_D53_V0k202(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (string-append (close _V50_V10_Dloop_D53_V0k203) (##string ##.string.817) (bruijn ##.%x.402 0 0) (##string ##.string.818))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-append")), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k203, self)))),
      VEncodePointer(&_V10_Dstring_D817.sym, VPOINTER_OTHER),
      _var0,
      VEncodePointer(&_V10_Dstring_D818.sym, VPOINTER_OTHER));
}
void _V50_V10_Dloop_D53_V0k210(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k210, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (equal? (bruijn ##.%k.408 2 0) (bruijn ##.%x.409 0 0) (##string ##.string.819))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      statics->up->vars[0],
      _var0,
      VEncodePointer(&_V10_Dstring_D819.sym, VPOINTER_OTHER));
}
void _V50_V10_Dloop_D53_V0k209(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (extension (close _V50_V10_Dloop_D53_V0k210) (bruijn ##.%x.410 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "extension")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k210, self)))),
      _var0);
}
void _V50_V10_Dloop_D53_V0k208(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k208, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.407 1 0) ((bruijn ##.%k.408 0 0) (bruijn ##.%p.407 1 0)) (cdar (close _V50_V10_Dloop_D53_V0k209) (bruijn ##.args.54 18 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k209, self)))),
      VGetArg(statics, 18-1, 1));
}
}
void _V50_V10_Dloop_D53_V0k213(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k213, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.%k.391 15 0) scm-files (bruijn ##.%x.404 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 15-1, 0),
      _V0scm__files,
      _var0
    );
}
void _V50_V10_Dloop_D53_V0k212(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k212, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (cons (close _V50_V10_Dloop_D53_V0k213) (bruijn ##.%x.405 0 0) scm-files)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k213, self)))),
      _var0,
      VLookupGlobalVarFast2(runtime, "scm-files"));
}
void _V50_V10_Dloop_D53_V0k214(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k214, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (compiler-error (bruijn ##.%k.391 14 0) (##string ##.string.820) (bruijn ##.%x.406 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 3,
      VGetArg(statics, 14-1, 0),
      VEncodePointer(&_V10_Dstring_D820.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V10_Dloop_D53_V0k211(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.403 0 0) (cdar (close _V50_V10_Dloop_D53_V0k212) (bruijn ##.args.54 18 1)) (cdar (close _V50_V10_Dloop_D53_V0k214) (bruijn ##.args.54 18 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k212, self)))),
      VGetArg(statics, 18-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k214, self)))),
      VGetArg(statics, 18-1, 1));
}
}
void _V50_V10_Dloop_D53_V0k207(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V10_Dloop_D53_V0k208) (close _V50_V10_Dloop_D53_V0k211))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k208, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k211, self)))));
}
void _V50_V10_Dloop_D53_V0k206(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (equal? (close _V50_V10_Dloop_D53_V0k207) (bruijn ##.%x.411 0 0) (##string ##.string.821))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k207, self)))),
      _var0,
      VEncodePointer(&_V10_Dstring_D821.sym, VPOINTER_OTHER));
}
void _V50_V10_Dloop_D53_V0k205(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (extension (close _V50_V10_Dloop_D53_V0k206) (bruijn ##.%x.412 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "extension")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k206, self)))),
      _var0);
}
void _V50_V10_Dloop_D53_V0k201(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.399 0 0) (cdar (close _V50_V10_Dloop_D53_V0k202) (bruijn ##.args.54 14 1)) (cdar (close _V50_V10_Dloop_D53_V0k205) (bruijn ##.args.54 14 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k202, self)))),
      VGetArg(statics, 14-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k205, self)))),
      VGetArg(statics, 14-1, 1));
}
}
void _V50_V10_Dloop_D53_V0k200(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (equal? (close _V50_V10_Dloop_D53_V0k201) (bruijn ##.%x.413 0 0) (##string ##.string.822))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k201, self)))),
      _var0,
      VEncodePointer(&_V10_Dstring_D822.sym, VPOINTER_OTHER));
}
void _V50_V10_Dloop_D53_V0k199(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (extension (close _V50_V10_Dloop_D53_V0k200) (bruijn ##.%x.414 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "extension")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k200, self)))),
      _var0);
}
void _V50_V10_Dloop_D53_V0k195(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.395 0 0) (cdar (close _V50_V10_Dloop_D53_V0k196) (bruijn ##.args.54 11 1)) (cdar (close _V50_V10_Dloop_D53_V0k199) (bruijn ##.args.54 11 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k196, self)))),
      VGetArg(statics, 11-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k199, self)))),
      VGetArg(statics, 11-1, 1));
}
}
void _V50_V10_Dloop_D53_V0k194(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (equal? (close _V50_V10_Dloop_D53_V0k195) (bruijn ##.%x.415 0 0) (##string ##.string.823))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k195, self)))),
      _var0,
      VEncodePointer(&_V10_Dstring_D823.sym, VPOINTER_OTHER));
}
void _V50_V10_Dloop_D53_V0k193(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (extension (close _V50_V10_Dloop_D53_V0k194) (bruijn ##.%x.416 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "extension")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k194, self)))),
      _var0);
}
void _V50_V10_Dloop_D53_V0k190(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.392 0 0) (cdar (close _V50_V10_Dloop_D53_V0k191) (bruijn ##.args.54 8 1)) (cdar (close _V50_V10_Dloop_D53_V0k193) (bruijn ##.args.54 8 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k191, self)))),
      VGetArg(statics, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k193, self)))),
      VGetArg(statics, 8-1, 1));
}
}
void _V50_V10_Dloop_D53_V0k189(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (equal? (close _V50_V10_Dloop_D53_V0k190) (bruijn ##.%x.417 0 0) (##string ##.string.776))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k190, self)))),
      _var0,
      VEncodePointer(&_V10_Dstring_D776.sym, VPOINTER_OTHER));
}
void _V50_V10_Dloop_D53_V0k188(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (extension (close _V50_V10_Dloop_D53_V0k189) (bruijn ##.%x.418 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "extension")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k189, self)))),
      _var0);
}
void _V50_V10_Dloop_D53_V0k221(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k221, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.%k.391 7 0) out-file (bruijn ##.%x.425 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 7-1, 0),
      _V0out__file,
      _var0
    );
}
void _V50_V10_Dloop_D53_V0k226(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k226, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.%k.391 11 0) paths (bruijn ##.%x.427 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 11-1, 0),
      _V0paths,
      _var0
    );
}
void _V50_V10_Dloop_D53_V0k225(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k225, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (append (close _V50_V10_Dloop_D53_V0k226) paths (bruijn ##.%x.428 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "append")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k226, self)))),
      VLookupGlobalVarFast2(runtime, "paths"),
      _var0);
}
void _V50_V10_Dloop_D53_V0k224(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k224, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (list (close _V50_V10_Dloop_D53_V0k225) (bruijn ##.%x.429 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "list")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k225, self)))),
      _var0);
}
void _V50_V10_Dloop_D53_V0k223(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k223, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (realpath (close _V50_V10_Dloop_D53_V0k224) (bruijn ##.%x.430 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "realpath")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k224, self)))),
      _var0);
}
void _V50_V10_Dloop_D53_V0k230(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k230, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.%k.391 11 0) user-feature-list (bruijn ##.%x.432 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 11-1, 0),
      _V0user__feature__list,
      _var0
    );
}
void _V50_V10_Dloop_D53_V0k229(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k229, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (cons (close _V50_V10_Dloop_D53_V0k230) (bruijn ##.%x.433 0 0) user-feature-list)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k230, self)))),
      _var0,
      VLookupGlobalVarFast2(runtime, "user-feature-list"));
}
void _V50_V10_Dloop_D53_V0k228(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k228, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (string->symbol (close _V50_V10_Dloop_D53_V0k229) (bruijn ##.%x.434 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string->symbol")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k229, self)))),
      _var0);
}
void _V50_V10_Dloop_D53_V0k236(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k236, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.440 0 0) (<= (bruijn ##.%k.439 1 0) 0 optimization 3) ((bruijn ##.%k.439 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "<=")), 4,
      statics->vars[0],
      VEncodeInt(0l),
      VLookupGlobalVarFast2(runtime, "optimization"),
      VEncodeInt(3l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V10_Dloop_D53_V0k235(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k235, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if optimization (integer? (close _V50_V10_Dloop_D53_V0k236) optimization) ((bruijn ##.%k.439 0 0) #f))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "optimization"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "integer?")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k236, self)))),
      VLookupGlobalVarFast2(runtime, "optimization"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V10_Dloop_D53_V0k239(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k239, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (compiler-error (bruijn ##.%k.391 14 0) (##string ##.string.824) (bruijn ##.%x.437 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 3,
      VGetArg(statics, 14-1, 0),
      VEncodePointer(&_V10_Dstring_D824.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V10_Dloop_D53_V0k238(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k238, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.436 0 0) (cdar (close _V50_V10_Dloop_D53_V0k239) (bruijn ##.args.54 18 1)) ((bruijn ##.%k.391 13 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k239, self)))),
      VGetArg(statics, 18-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V10_Dloop_D53_V0k237(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k237, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (not (close _V50_V10_Dloop_D53_V0k238) (bruijn ##.%x.438 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k238, self)))),
      _var0);
}
static void _V50_V10_Dloop_D53_V0k234(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V10_Dloop_D53_V0k235) (close _V50_V10_Dloop_D53_V0k237))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k235, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k237, self)))));
}
void _V50_V10_Dloop_D53_V0k233(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k233, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V10_Dloop_D53_V0k234) optimization (bruijn ##.%x.441 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k234, self)))),
      _V0optimization,
      _var0
    );
}
void _V50_V10_Dloop_D53_V0k232(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k232, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (string->number (close _V50_V10_Dloop_D53_V0k233) (bruijn ##.%x.442 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string->number")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k233, self)))),
      _var0);
}
void _V50_V10_Dloop_D53_V0k246(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k246, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.449 0 0) ((bruijn ##.%k.447 2 0) (bruijn ##.%p.449 0 0)) (<= (bruijn ##.%k.447 2 0) 0 expand? 2))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "<=")), 4,
      statics->up->vars[0],
      VEncodeInt(0l),
      VLookupGlobalVarFast2(runtime, "expand?"),
      VEncodeInt(2l));
}
}
void _V50_V10_Dloop_D53_V0k245(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k245, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.448 0 0) (eq? (close _V50_V10_Dloop_D53_V0k246) expand? 9) ((bruijn ##.%k.447 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eq?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k246, self)))),
      VLookupGlobalVarFast2(runtime, "expand?"),
      VEncodeInt(9l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V10_Dloop_D53_V0k244(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k244, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if expand? (integer? (close _V50_V10_Dloop_D53_V0k245) expand?) ((bruijn ##.%k.447 0 0) #f))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "expand?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "integer?")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k245, self)))),
      VLookupGlobalVarFast2(runtime, "expand?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V10_Dloop_D53_V0k249(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k249, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (compiler-error (bruijn ##.%k.391 15 0) (##string ##.string.825) (bruijn ##.%x.445 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 3,
      VGetArg(statics, 15-1, 0),
      VEncodePointer(&_V10_Dstring_D825.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V10_Dloop_D53_V0k248(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k248, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.444 0 0) (cdar (close _V50_V10_Dloop_D53_V0k249) (bruijn ##.args.54 19 1)) ((bruijn ##.%k.391 14 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k249, self)))),
      VGetArg(statics, 19-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V10_Dloop_D53_V0k247(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k247, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (not (close _V50_V10_Dloop_D53_V0k248) (bruijn ##.%x.446 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k248, self)))),
      _var0);
}
static void _V50_V10_Dloop_D53_V0k243(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V10_Dloop_D53_V0k244) (close _V50_V10_Dloop_D53_V0k247))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k244, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k247, self)))));
}
void _V50_V10_Dloop_D53_V0k242(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k242, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V10_Dloop_D53_V0k243) expand? (bruijn ##.%x.450 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k243, self)))),
      _V0expand_Q,
      _var0
    );
}
void _V50_V10_Dloop_D53_V0k241(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k241, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (string->number (close _V50_V10_Dloop_D53_V0k242) (bruijn ##.%x.451 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string->number")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k242, self)))),
      _var0);
}
static void _V50_V10_Dloop_D53_V0k255(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (bruijn ##.%k.391 15 0) werror-unbound-variables #f)
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 15-1, 0),
      _V0werror__unbound__variables,
      VEncodeBool(false)
    );
}
static void _V50_V10_Dloop_D53_V0k258(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (bruijn ##.%k.391 17 0) werror-unbound-variables #t)
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 17-1, 0),
      _V0werror__unbound__variables,
      VEncodeBool(true)
    );
}
void _V50_V10_Dloop_D53_V0k266(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k266, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (eq? (bruijn ##.%k.481 2 0) (bruijn ##.%x.482 0 0) #\l)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eq?")), 3,
      statics->up->vars[0],
      _var0,
      VEncodeChar('l'));
}
void _V50_V10_Dloop_D53_V0k265(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k265, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (string-ref (close _V50_V10_Dloop_D53_V0k266) (bruijn ##.%x.483 0 0) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-ref")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k266, self)))),
      _var0,
      VEncodeInt(0l));
}
void _V50_V10_Dloop_D53_V0k264(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k264, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.480 1 0) ((bruijn ##.%k.481 0 0) (bruijn ##.%p.480 1 0)) (cdar (close _V50_V10_Dloop_D53_V0k265) (bruijn ##.args.54 28 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k265, self)))),
      VGetArg(statics, 28-1, 1));
}
}
void _V50_V10_Dloop_D53_V0k269(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k269, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.477 1 0) (compiler-error (bruijn ##.%k.478 0 0) (##string ##.string.826)) ((bruijn ##.%k.478 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D826.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V10_Dloop_D53_V0k276(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k276, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (eq? (bruijn ##.%k.472 2 0) (bruijn ##.%x.473 0 0) #\,)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eq?")), 3,
      statics->up->vars[0],
      _var0,
      VEncodeChar(','));
}
void _V50_V10_Dloop_D53_V0k275(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k275, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (string-ref (close _V50_V10_Dloop_D53_V0k276) (bruijn ##.%x.474 0 0) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-ref")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k276, self)))),
      _var0,
      VEncodeInt(1l));
}
void _V50_V10_Dloop_D53_V0k274(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k274, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.471 1 0) (cdar (close _V50_V10_Dloop_D53_V0k275) (bruijn ##.args.54 33 1)) ((bruijn ##.%k.472 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k275, self)))),
      VGetArg(statics, 33-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V10_Dloop_D53_V0k279(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k279, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.468 1 0) (compiler-error (bruijn ##.%k.469 0 0) (##string ##.string.827)) ((bruijn ##.%k.469 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D827.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V10_Dloop_D53_V0k287(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k287, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.%k.391 36 0) c-options (bruijn ##.%x.458 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 36-1, 0),
      _V0c__options,
      _var0
    );
}
void _V50_V10_Dloop_D53_V0k286(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k286, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (cons (close _V50_V10_Dloop_D53_V0k287) (bruijn ##.%x.459 0 0) c-options)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k287, self)))),
      _var0,
      VLookupGlobalVarFast2(runtime, "c-options"));
}
void _V50_V10_Dloop_D53_V0k285(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k285, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (decomma (close _V50_V10_Dloop_D53_V0k286) (bruijn ##.%x.460 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "decomma")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k286, self)))),
      _var0);
}
void _V50_V10_Dloop_D53_V0k284(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k284, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (substring (close _V50_V10_Dloop_D53_V0k285) (bruijn ##.%x.461 0 0) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "substring")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k285, self)))),
      _var0,
      VEncodeInt(1l));
}
void _V50_V10_Dloop_D53_V0k291(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k291, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.%k.391 36 0) c-options (bruijn ##.%x.462 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 36-1, 0),
      _V0c__options,
      _var0
    );
}
void _V50_V10_Dloop_D53_V0k290(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k290, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (cons (close _V50_V10_Dloop_D53_V0k291) (bruijn ##.%x.463 0 0) c-options)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k291, self)))),
      _var0,
      VLookupGlobalVarFast2(runtime, "c-options"));
}
void _V50_V10_Dloop_D53_V0k289(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k289, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (string-append (close _V50_V10_Dloop_D53_V0k290) (##string ##.string.828) (bruijn ##.%x.464 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-append")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k290, self)))),
      VEncodePointer(&_V10_Dstring_D828.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V10_Dloop_D53_V0k288(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k288, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (substring (close _V50_V10_Dloop_D53_V0k289) (bruijn ##.%x.465 0 0) 2)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "substring")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k289, self)))),
      _var0,
      VEncodeInt(2l));
}
void _V50_V10_Dloop_D53_V0k283(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k283, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.457 0 0) (cdar (close _V50_V10_Dloop_D53_V0k284) (bruijn ##.args.54 37 1)) (cdar (close _V50_V10_Dloop_D53_V0k288) (bruijn ##.args.54 37 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k284, self)))),
      VGetArg(statics, 37-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k288, self)))),
      VGetArg(statics, 37-1, 1));
}
}
void _V50_V10_Dloop_D53_V0k282(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k282, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (eq? (close _V50_V10_Dloop_D53_V0k283) (bruijn ##.%x.466 0 0) #\c)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eq?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k283, self)))),
      _var0,
      VEncodeChar('c'));
}
void _V50_V10_Dloop_D53_V0k281(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k281, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (string-ref (close _V50_V10_Dloop_D53_V0k282) (bruijn ##.%x.467 0 0) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-ref")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k282, self)))),
      _var0,
      VEncodeInt(0l));
}
static void _V50_V10_Dloop_D53_V0k280(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (cdar (close _V50_V10_Dloop_D53_V0k281) (bruijn ##.args.54 34 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k281, self)))),
      VGetArg(statics, 34-1, 1));
}
void _V50_V10_Dloop_D53_V0k278(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k278, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V10_Dloop_D53_V0k279) (close _V50_V10_Dloop_D53_V0k280))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k279, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k280, self)))));
}
void _V50_V10_Dloop_D53_V0k277(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k277, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (not (close _V50_V10_Dloop_D53_V0k278) (bruijn ##.%x.470 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k278, self)))),
      _var0);
}
void _V50_V10_Dloop_D53_V0k273(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k273, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V10_Dloop_D53_V0k274) (close _V50_V10_Dloop_D53_V0k277))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k274, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k277, self)))));
}
void _V50_V10_Dloop_D53_V0k272(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k272, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (>= (close _V50_V10_Dloop_D53_V0k273) (bruijn ##.%x.475 0 0) 2)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, ">=")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k273, self)))),
      _var0,
      VEncodeInt(2l));
}
void _V50_V10_Dloop_D53_V0k271(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k271, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (string-length (close _V50_V10_Dloop_D53_V0k272) (bruijn ##.%x.476 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-length")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k272, self)))),
      _var0);
}
static void _V50_V10_Dloop_D53_V0k270(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (cdar (close _V50_V10_Dloop_D53_V0k271) (bruijn ##.args.54 29 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k271, self)))),
      VGetArg(statics, 29-1, 1));
}
void _V50_V10_Dloop_D53_V0k268(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k268, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V10_Dloop_D53_V0k269) (close _V50_V10_Dloop_D53_V0k270))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k269, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k270, self)))));
}
void _V50_V10_Dloop_D53_V0k267(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k267, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (not (close _V50_V10_Dloop_D53_V0k268) (bruijn ##.%x.479 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k268, self)))),
      _var0);
}
void _V50_V10_Dloop_D53_V0k263(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k263, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V10_Dloop_D53_V0k264) (close _V50_V10_Dloop_D53_V0k267))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k264, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k267, self)))));
}
void _V50_V10_Dloop_D53_V0k262(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k262, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (eq? (close _V50_V10_Dloop_D53_V0k263) (bruijn ##.%x.484 0 0) #\c)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eq?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k263, self)))),
      _var0,
      VEncodeChar('c'));
}
void _V50_V10_Dloop_D53_V0k261(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k261, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (string-ref (close _V50_V10_Dloop_D53_V0k262) (bruijn ##.%x.485 0 0) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-ref")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k262, self)))),
      _var0,
      VEncodeInt(0l));
}
void _V50_V10_Dloop_D53_V0k260(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k260, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.456 0 0) (set! (bruijn ##.%k.391 19 0) werror-unbound-variables #f) (cdar (close _V50_V10_Dloop_D53_V0k261) (bruijn ##.args.54 24 1)))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 19-1, 0),
      _V0werror__unbound__variables,
      VEncodeBool(false)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k261, self)))),
      VGetArg(statics, 24-1, 1));
}
}
void _V50_V10_Dloop_D53_V0k259(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k259, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (equal? (close _V50_V10_Dloop_D53_V0k260) (bruijn ##.%x.486 0 0) (##string ##.string.829))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k260, self)))),
      _var0,
      VEncodePointer(&_V10_Dstring_D829.sym, VPOINTER_OTHER));
}
void _V50_V10_Dloop_D53_V0k257(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k257, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.455 0 0) (set! (close _V50_V10_Dloop_D53_V0k258) w-unbound-variables #t) (cdar (close _V50_V10_Dloop_D53_V0k259) (bruijn ##.args.54 22 1)))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k258, self)))),
      _V0w__unbound__variables,
      VEncodeBool(true)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k259, self)))),
      VGetArg(statics, 22-1, 1));
}
}
void _V50_V10_Dloop_D53_V0k256(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k256, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (equal? (close _V50_V10_Dloop_D53_V0k257) (bruijn ##.%x.487 0 0) (##string ##.string.830))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k257, self)))),
      _var0,
      VEncodePointer(&_V10_Dstring_D830.sym, VPOINTER_OTHER));
}
void _V50_V10_Dloop_D53_V0k254(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k254, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.454 0 0) (set! (close _V50_V10_Dloop_D53_V0k255) w-unbound-variables #f) (cdar (close _V50_V10_Dloop_D53_V0k256) (bruijn ##.args.54 20 1)))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k255, self)))),
      _V0w__unbound__variables,
      VEncodeBool(false)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k256, self)))),
      VGetArg(statics, 20-1, 1));
}
}
void _V50_V10_Dloop_D53_V0k253(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k253, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (equal? (close _V50_V10_Dloop_D53_V0k254) (bruijn ##.%x.488 0 0) (##string ##.string.831))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k254, self)))),
      _var0,
      VEncodePointer(&_V10_Dstring_D831.sym, VPOINTER_OTHER));
}
void _V50_V10_Dloop_D53_V0k252(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k252, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.453 0 0) (set! (bruijn ##.%k.391 13 0) w-unbound-variables #t) (cdar (close _V50_V10_Dloop_D53_V0k253) (bruijn ##.args.54 18 1)))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 13-1, 0),
      _V0w__unbound__variables,
      VEncodeBool(true)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k253, self)))),
      VGetArg(statics, 18-1, 1));
}
}
void _V50_V10_Dloop_D53_V0k251(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k251, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (equal? (close _V50_V10_Dloop_D53_V0k252) (bruijn ##.%x.489 0 0) (##string ##.string.832))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k252, self)))),
      _var0,
      VEncodePointer(&_V10_Dstring_D832.sym, VPOINTER_OTHER));
}
static void _V50_V10_Dloop_D53_V0k293(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (exit (bruijn ##.%k.391 12 0) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "exit")), 2,
      VGetArg(statics, 12-1, 0),
      VEncodeInt(0l));
}
static void _V50_V10_Dloop_D53_V0k295(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (exit (bruijn ##.%k.391 13 0) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "exit")), 2,
      VGetArg(statics, 13-1, 0),
      VEncodeInt(0l));
}
void _V50_V10_Dloop_D53_V0k299(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k299, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.%k.391 17 0) api (bruijn ##.%x.494 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 17-1, 0),
      _V0api,
      _var0
    );
}
void _V50_V10_Dloop_D53_V0k298(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k298, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (string->number (close _V50_V10_Dloop_D53_V0k299) (bruijn ##.%x.495 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string->number")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k299, self)))),
      _var0);
}
void _V50_V10_Dloop_D53_V0k303(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k303, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.497 0 0) (set! (bruijn ##.%k.391 18 0) purec? #t) ((bruijn ##.%k.391 18 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 18-1, 0),
      _V0purec_Q,
      VEncodeBool(true)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V50_V10_Dloop_D53_V0k302(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (equal? (close _V50_V10_Dloop_D53_V0k303) platform (##string ##.string.764))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k303, self)))),
      VLookupGlobalVarFast2(runtime, "platform"),
      VEncodePointer(&_V10_Dstring_D764.sym, VPOINTER_OTHER));
}
void _V50_V10_Dloop_D53_V0k301(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k301, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V10_Dloop_D53_V0k302) platform (bruijn ##.%x.498 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k302, self)))),
      _V0platform,
      _var0
    );
}
void _V50_V10_Dloop_D53_V0k305(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k305, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.%k.391 18 0) main (bruijn ##.%x.500 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 18-1, 0),
      _V0main,
      _var0
    );
}
void _V50_V10_Dloop_D53_V0k307(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k307, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.%k.391 19 0) cc (bruijn ##.%x.502 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 19-1, 0),
      _V0cc,
      _var0
    );
}
void _V50_V10_Dloop_D53_V0k312(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k312, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.%k.391 23 0) maketargets (bruijn ##.%x.506 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 23-1, 0),
      _V0maketargets,
      _var0
    );
}
void _V50_V10_Dloop_D53_V0k311(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k311, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (cons (close _V50_V10_Dloop_D53_V0k312) (bruijn ##.%x.507 0 0) maketargets)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k312, self)))),
      _var0,
      VLookupGlobalVarFast2(runtime, "maketargets"));
}
void _V50_V10_Dloop_D53_V0k324(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k324, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.519 1 0) ((bruijn ##.%k.520 0 0) (bruijn ##.%p.519 1 0)) (real? (bruijn ##.%k.520 0 0) expand-timeout))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "real?")), 2,
      _var0,
      VLookupGlobalVarFast2(runtime, "expand-timeout"));
}
}
void _V50_V10_Dloop_D53_V0k325(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k325, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.518 0 0) (> (bruijn ##.%k.517 2 0) expand-timeout 0) ((bruijn ##.%k.517 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, ">")), 3,
      statics->up->vars[0],
      VLookupGlobalVarFast2(runtime, "expand-timeout"),
      VEncodeInt(0l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V10_Dloop_D53_V0k323(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k323, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V10_Dloop_D53_V0k324) (close _V50_V10_Dloop_D53_V0k325))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k324, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k325, self)))));
}
void _V50_V10_Dloop_D53_V0k322(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k322, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if expand-timeout (integer? (close _V50_V10_Dloop_D53_V0k323) expand-timeout) ((bruijn ##.%k.517 0 0) #f))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "expand-timeout"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "integer?")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k323, self)))),
      VLookupGlobalVarFast2(runtime, "expand-timeout"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V10_Dloop_D53_V0k328(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k328, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (compiler-error (bruijn ##.%k.391 32 0) (##string ##.string.833) (bruijn ##.%x.515 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 3,
      VGetArg(statics, 32-1, 0),
      VEncodePointer(&_V10_Dstring_D833.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V10_Dloop_D53_V0k327(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k327, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.514 0 0) (cdar (close _V50_V10_Dloop_D53_V0k328) (bruijn ##.args.54 36 1)) ((bruijn ##.%k.391 31 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k328, self)))),
      VGetArg(statics, 36-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V10_Dloop_D53_V0k326(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k326, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (not (close _V50_V10_Dloop_D53_V0k327) (bruijn ##.%x.516 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k327, self)))),
      _var0);
}
static void _V50_V10_Dloop_D53_V0k321(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V10_Dloop_D53_V0k322) (close _V50_V10_Dloop_D53_V0k326))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k322, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k326, self)))));
}
void _V50_V10_Dloop_D53_V0k320(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k320, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V10_Dloop_D53_V0k321) expand-timeout (bruijn ##.%x.521 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k321, self)))),
      _V0expand__timeout,
      _var0
    );
}
void _V50_V10_Dloop_D53_V0k319(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k319, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (string->number (close _V50_V10_Dloop_D53_V0k320) (bruijn ##.%x.522 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string->number")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k320, self)))),
      _var0);
}
void _V50_V10_Dloop_D53_V0k330(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k330, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (compiler-error (bruijn ##.%k.391 29 0) (##string ##.string.834) (bruijn ##.%x.524 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 3,
      VGetArg(statics, 29-1, 0),
      VEncodePointer(&_V10_Dstring_D834.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V10_Dloop_D53_V0k329(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k329, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.523 0 0) (set! (bruijn ##.%k.391 28 0) explain-scopes? #t) (cdar (close _V50_V10_Dloop_D53_V0k330) (bruijn ##.args.54 33 1)))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 28-1, 0),
      _V0explain__scopes_Q,
      VEncodeBool(true)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k330, self)))),
      VGetArg(statics, 33-1, 1));
}
}
void _V50_V10_Dloop_D53_V0k318(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k318, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.513 0 0) (cdar (close _V50_V10_Dloop_D53_V0k319) (bruijn ##.args.54 32 1)) (eqv? (close _V50_V10_Dloop_D53_V0k329) (bruijn ##.x.52.55 29 0) 'explain-scopes))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k319, self)))),
      VGetArg(statics, 32-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k329, self)))),
      VGetArg(statics, 29-1, 0),
      _V0explain__scopes);
}
}
void _V50_V10_Dloop_D53_V0k317(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k317, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.512 0 0) (set! (bruijn ##.%k.391 26 0) trace-expand? #t) (eqv? (close _V50_V10_Dloop_D53_V0k318) (bruijn ##.x.52.55 28 0) 'expand-timeout))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 26-1, 0),
      _V0trace__expand_Q,
      VEncodeBool(true)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k318, self)))),
      VGetArg(statics, 28-1, 0),
      _V0expand__timeout);
}
}
void _V50_V10_Dloop_D53_V0k316(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k316, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.511 0 0) (set! (bruijn ##.%k.391 25 0) verify? #t) (eqv? (close _V50_V10_Dloop_D53_V0k317) (bruijn ##.x.52.55 27 0) 'trace-expand))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 25-1, 0),
      _V0verify_Q,
      VEncodeBool(true)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k317, self)))),
      VGetArg(statics, 27-1, 0),
      _V0trace__expand);
}
}
void _V50_V10_Dloop_D53_V0k315(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k315, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.510 0 0) (set! (bruijn ##.%k.391 24 0) hygiene? #t) (eqv? (close _V50_V10_Dloop_D53_V0k316) (bruijn ##.x.52.55 26 0) 'verify))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 24-1, 0),
      _V0hygiene_Q,
      VEncodeBool(true)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k316, self)))),
      VGetArg(statics, 26-1, 0),
      _V0verify);
}
}
void _V50_V10_Dloop_D53_V0k314(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k314, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.509 0 0) (set! (bruijn ##.%k.391 23 0) bytecode? #t) (eqv? (close _V50_V10_Dloop_D53_V0k315) (bruijn ##.x.52.55 25 0) 'hygiene))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 23-1, 0),
      _V0bytecode_Q,
      VEncodeBool(true)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k315, self)))),
      VGetArg(statics, 25-1, 0),
      _V0hygiene);
}
}
void _V50_V10_Dloop_D53_V0k313(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k313, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.508 0 0) (set! (bruijn ##.%k.391 22 0) benchmark? #t) (eqv? (close _V50_V10_Dloop_D53_V0k314) (bruijn ##.x.52.55 24 0) 'bytecode))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 22-1, 0),
      _V0benchmark_Q,
      VEncodeBool(true)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k314, self)))),
      VGetArg(statics, 24-1, 0),
      _V0bytecode);
}
}
void _V50_V10_Dloop_D53_V0k310(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k310, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.505 0 0) (cdar (close _V50_V10_Dloop_D53_V0k311) (bruijn ##.args.54 26 1)) (eqv? (close _V50_V10_Dloop_D53_V0k313) (bruijn ##.x.52.55 23 0) 'benchmark))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k311, self)))),
      VGetArg(statics, 26-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k313, self)))),
      VGetArg(statics, 23-1, 0),
      _V0benchmark);
}
}
void _V50_V10_Dloop_D53_V0k309(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k309, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.504 0 0) (set! (bruijn ##.%k.391 20 0) makefile? #t) (eqv? (close _V50_V10_Dloop_D53_V0k310) (bruijn ##.x.52.55 22 0) 'maketarget))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 20-1, 0),
      _V0makefile_Q,
      VEncodeBool(true)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k310, self)))),
      VGetArg(statics, 22-1, 0),
      _V0maketarget);
}
}
void _V50_V10_Dloop_D53_V0k308(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k308, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.503 0 0) (set! (bruijn ##.%k.391 19 0) keep? #t) (eqv? (close _V50_V10_Dloop_D53_V0k309) (bruijn ##.x.52.55 21 0) 'makefile))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 19-1, 0),
      _V0keep_Q,
      VEncodeBool(true)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k309, self)))),
      VGetArg(statics, 21-1, 0),
      _V0makefile);
}
}
void _V50_V10_Dloop_D53_V0k306(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k306, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.501 0 0) (cdar (close _V50_V10_Dloop_D53_V0k307) (bruijn ##.args.54 23 1)) (eqv? (close _V50_V10_Dloop_D53_V0k308) (bruijn ##.x.52.55 20 0) 'keep-temps))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k307, self)))),
      VGetArg(statics, 23-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k308, self)))),
      VGetArg(statics, 20-1, 0),
      _V0keep__temps);
}
}
void _V50_V10_Dloop_D53_V0k304(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k304, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.499 0 0) (cdar (close _V50_V10_Dloop_D53_V0k305) (bruijn ##.args.54 22 1)) (eqv? (close _V50_V10_Dloop_D53_V0k306) (bruijn ##.x.52.55 19 0) 'cc))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k305, self)))),
      VGetArg(statics, 22-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k306, self)))),
      VGetArg(statics, 19-1, 0),
      _V0cc);
}
}
void _V50_V10_Dloop_D53_V0k300(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k300, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.496 0 0) (cdar (close _V50_V10_Dloop_D53_V0k301) (bruijn ##.args.54 21 1)) (eqv? (close _V50_V10_Dloop_D53_V0k304) (bruijn ##.x.52.55 18 0) 'main))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k301, self)))),
      VGetArg(statics, 21-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k304, self)))),
      VGetArg(statics, 18-1, 0),
      _V0main);
}
}
void _V50_V10_Dloop_D53_V0k297(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k297, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.493 0 0) (cdar (close _V50_V10_Dloop_D53_V0k298) (bruijn ##.args.54 20 1)) (eqv? (close _V50_V10_Dloop_D53_V0k300) (bruijn ##.x.52.55 17 0) 'platform))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k298, self)))),
      VGetArg(statics, 20-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k300, self)))),
      VGetArg(statics, 17-1, 0),
      _V0platform);
}
}
void _V50_V10_Dloop_D53_V0k296(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k296, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.492 0 0) (set! (bruijn ##.%k.391 14 0) shared? #t) (eqv? (close _V50_V10_Dloop_D53_V0k297) (bruijn ##.x.52.55 16 0) 'api))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 14-1, 0),
      _V0shared_Q,
      VEncodeBool(true)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k297, self)))),
      VGetArg(statics, 16-1, 0),
      _V0api);
}
}
void _V50_V10_Dloop_D53_V0k294(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k294, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.491 0 0) (display-version (close _V50_V10_Dloop_D53_V0k295)) (eqv? (close _V50_V10_Dloop_D53_V0k296) (bruijn ##.x.52.55 15 0) 'shared))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "display-version")), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k295, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k296, self)))),
      VGetArg(statics, 15-1, 0),
      _V0shared);
}
}
void _V50_V10_Dloop_D53_V0k292(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k292, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.490 0 0) (display-help (close _V50_V10_Dloop_D53_V0k293)) (eqv? (close _V50_V10_Dloop_D53_V0k294) (bruijn ##.x.52.55 14 0) 'version))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "display-help")), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k293, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k294, self)))),
      VGetArg(statics, 14-1, 0),
      _V0version);
}
}
void _V50_V10_Dloop_D53_V0k250(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k250, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.452 0 0) (cdar (close _V50_V10_Dloop_D53_V0k251) (bruijn ##.args.54 16 1)) (eqv? (close _V50_V10_Dloop_D53_V0k292) (bruijn ##.x.52.55 13 0) 'help))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k251, self)))),
      VGetArg(statics, 16-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k292, self)))),
      VGetArg(statics, 13-1, 0),
      _V0help);
}
}
void _V50_V10_Dloop_D53_V0k240(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k240, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.443 0 0) (cdar (close _V50_V10_Dloop_D53_V0k241) (bruijn ##.args.54 15 1)) (eqv? (close _V50_V10_Dloop_D53_V0k250) (bruijn ##.x.52.55 12 0) '#\W))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k241, self)))),
      VGetArg(statics, 15-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k250, self)))),
      VGetArg(statics, 12-1, 0),
      VEncodeChar('W'));
}
}
void _V50_V10_Dloop_D53_V0k231(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k231, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.435 0 0) (cdar (close _V50_V10_Dloop_D53_V0k232) (bruijn ##.args.54 14 1)) (eqv? (close _V50_V10_Dloop_D53_V0k240) (bruijn ##.x.52.55 11 0) '#\E))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k232, self)))),
      VGetArg(statics, 14-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k240, self)))),
      VGetArg(statics, 11-1, 0),
      VEncodeChar('E'));
}
}
void _V50_V10_Dloop_D53_V0k227(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k227, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.431 0 0) (cdar (close _V50_V10_Dloop_D53_V0k228) (bruijn ##.args.54 13 1)) (eqv? (close _V50_V10_Dloop_D53_V0k231) (bruijn ##.x.52.55 10 0) '#\O))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k228, self)))),
      VGetArg(statics, 13-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k231, self)))),
      VGetArg(statics, 10-1, 0),
      VEncodeChar('O'));
}
}
void _V50_V10_Dloop_D53_V0k222(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k222, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.426 0 0) (cdar (close _V50_V10_Dloop_D53_V0k223) (bruijn ##.args.54 12 1)) (eqv? (close _V50_V10_Dloop_D53_V0k227) (bruijn ##.x.52.55 9 0) '#\D))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k223, self)))),
      VGetArg(statics, 12-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k227, self)))),
      VGetArg(statics, 9-1, 0),
      VEncodeChar('D'));
}
}
void _V50_V10_Dloop_D53_V0k220(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k220, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.424 0 0) (cdar (close _V50_V10_Dloop_D53_V0k221) (bruijn ##.args.54 11 1)) (eqv? (close _V50_V10_Dloop_D53_V0k222) (bruijn ##.x.52.55 8 0) '#\I))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k221, self)))),
      VGetArg(statics, 11-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k222, self)))),
      VGetArg(statics, 8-1, 0),
      VEncodeChar('I'));
}
}
void _V50_V10_Dloop_D53_V0k219(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k219, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.423 0 0) (set! (bruijn ##.%k.391 5 0) object? #t) (eqv? (close _V50_V10_Dloop_D53_V0k220) (bruijn ##.x.52.55 7 0) '#\o))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 5-1, 0),
      _V0object_Q,
      VEncodeBool(true)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k220, self)))),
      VGetArg(statics, 7-1, 0),
      VEncodeChar('o'));
}
}
void _V50_V10_Dloop_D53_V0k218(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k218, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.422 0 0) (set! (bruijn ##.%k.391 4 0) transpile? #t) (eqv? (close _V50_V10_Dloop_D53_V0k219) (bruijn ##.x.52.55 6 0) '#\c))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      statics->up->up->up->vars[0],
      _V0transpile_Q,
      VEncodeBool(true)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k219, self)))),
      VGetArg(statics, 6-1, 0),
      VEncodeChar('c'));
}
}
void _V50_V10_Dloop_D53_V0k217(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k217, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.421 0 0) (set! (bruijn ##.%k.391 3 0) header? #t) (eqv? (close _V50_V10_Dloop_D53_V0k218) (bruijn ##.x.52.55 5 0) '#\t))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      statics->up->up->vars[0],
      _V0header_Q,
      VEncodeBool(true)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k218, self)))),
      VGetArg(statics, 5-1, 0),
      VEncodeChar('t'));
}
}
void _V50_V10_Dloop_D53_V0k216(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k216, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.420 0 0) (set! (bruijn ##.%k.391 2 0) debug? #t) (eqv? (close _V50_V10_Dloop_D53_V0k217) (bruijn ##.x.52.55 4 0) '#\h))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      statics->up->vars[0],
      _V0debug_Q,
      VEncodeBool(true)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k217, self)))),
      statics->up->up->up->vars[0],
      VEncodeChar('h'));
}
}
void _V50_V10_Dloop_D53_V0k215(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.419 0 0) (set! (bruijn ##.%k.391 1 0) verbose? #t) (eqv? (close _V50_V10_Dloop_D53_V0k216) (bruijn ##.x.52.55 3 0) '#\g))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      statics->vars[0],
      _V0verbose_Q,
      VEncodeBool(true)
    );
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k216, self)))),
      statics->up->up->vars[0],
      VEncodeChar('g'));
}
}
void _V50_V10_Dloop_D53_V0k187(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.390 1 0) (cdar (close _V50_V10_Dloop_D53_V0k188) (bruijn ##.args.54 5 1)) (eqv? (close _V50_V10_Dloop_D53_V0k215) (bruijn ##.x.52.55 2 0) '#\v))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k188, self)))),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k215, self)))),
      statics->up->vars[0],
      VEncodeChar('v'));
}
}
void _V50_V10_Dloop_D53_V0k332(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k332, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (##.loop.53) #f (bruijn ##.loop.53 6 0) (bruijn ##.%k.387 5 0) (bruijn ##.%x.389 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V10_Dloop_D53(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
static void _V50_V10_Dloop_D53_V0k331(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (cdr (close _V50_V10_Dloop_D53_V0k332) (bruijn ##.args.54 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdr")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k332, self)))),
      statics->up->up->up->vars[1]);
}
void _V50_V10_Dloop_D53_V0k186(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V10_Dloop_D53_V0k187) (close _V50_V10_Dloop_D53_V0k331))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k187, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k331, self)))));
}
void _V50_V10_Dloop_D53_V0k185(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (eqv? (close _V50_V10_Dloop_D53_V0k186) (bruijn ##.x.52.55 0 0) '#t)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eqv?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k186, self)))),
      _var0,
      VEncodeBool(true));
}
void _V50_V10_Dloop_D53_V0k184(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.388 0 0) (caar (close _V50_V10_Dloop_D53_V0k185) (bruijn ##.args.54 2 1)) ((bruijn ##.%k.387 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "caar")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k185, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V10_Dloop_D53_V0k183(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53_V0k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (not (close _V50_V10_Dloop_D53_V0k184) (bruijn ##.%x.525 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k184, self)))),
      _var0);
}
void _V50_V10_Dloop_D53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D53, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (null? (close _V50_V10_Dloop_D53_V0k183) (bruijn ##.args.54 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "null?")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53_V0k183, self)))),
      _var1);
}
static void global_V0k338(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k338, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.384 1 0) (compiler-error (bruijn ##.%k.385 0 0) (##string ##.string.835) platform) ((bruijn ##.%k.385 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D835.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast2(runtime, "platform"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_V0k342(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k342, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.381 1 0) (compiler-error (bruijn ##.%k.382 0 0) (##string ##.string.836) platform) ((bruijn ##.%k.382 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D836.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast2(runtime, "platform"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_V0k349(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k349, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.380 0 0) ((bruijn ##.%k.378 2 0) (##string ##.string.839)) (compiler-error (bruijn ##.%k.378 2 0) (##string ##.string.835) platform))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D839.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 3,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D835.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast2(runtime, "platform"));
}
}
static void global_V0k348(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k348, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.379 0 0) ((bruijn ##.%k.378 1 0) (##string ##.string.838)) (equal? (close global_V0k349) platform (##string ##.string.764)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D838.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k349, self)))),
      VLookupGlobalVarFast2(runtime, "platform"),
      VEncodePointer(&_V10_Dstring_D764.sym, VPOINTER_OTHER));
}
}
static void global_V0k347(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k347, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.377 1 0) ((bruijn ##.%k.378 0 0) (##string ##.string.837)) (equal? (close global_V0k348) platform (##string ##.string.762)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D837.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k348, self)))),
      VLookupGlobalVarFast2(runtime, "platform"),
      VEncodePointer(&_V10_Dstring_D762.sym, VPOINTER_OTHER));
}
}
static void global_V0k350(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k350, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.%k.375 2 0) cc (bruijn ##.%x.376 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      statics->up->vars[0],
      _V0cc,
      _var0
    );
}
static void global_V0k346(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k346, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k347) (close global_V0k350))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k347, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k350, self)))));
}
static void global_V0k345(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k345, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.374 1 0) (equal? (close global_V0k346) platform (##string ##.string.761)) ((bruijn ##.%k.375 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k346, self)))),
      VLookupGlobalVarFast2(runtime, "platform"),
      VEncodePointer(&_V10_Dstring_D761.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_V0k354(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k354, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.371 1 0) (compiler-error (bruijn ##.%k.372 0 0) (##string ##.string.840)) ((bruijn ##.%k.372 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D840.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_V0k357(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k357, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.369 1 0) (null? (bruijn ##.%k.370 0 0) obj-files) ((bruijn ##.%k.370 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "null?")), 2,
      _var0,
      VLookupGlobalVarFast2(runtime, "obj-files"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_V0k359(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k359, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.367 1 0) (compiler-error (bruijn ##.%k.368 0 0) (##string ##.string.841)) ((bruijn ##.%k.368 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D841.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_V0k361(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k361, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if makefile? ((bruijn ##.%k.366 0 0) makefile?) (if header? ((bruijn ##.%k.366 0 0) header?) (if bytecode? ((bruijn ##.%k.366 0 0) bytecode?) (if transpile? ((bruijn ##.%k.366 0 0) transpile?) (if object? ((bruijn ##.%k.366 0 0) object?) ((bruijn ##.%k.366 0 0) expand?))))))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "makefile?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VLookupGlobalVarFast2(runtime, "makefile?"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "header?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VLookupGlobalVarFast2(runtime, "header?"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "bytecode?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VLookupGlobalVarFast2(runtime, "bytecode?"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "transpile?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VLookupGlobalVarFast2(runtime, "transpile?"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "object?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VLookupGlobalVarFast2(runtime, "object?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VLookupGlobalVarFast2(runtime, "expand?"));
}
}
}
}
}
}
static void global_V0k364(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k364, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (not (bruijn ##.%k.364 1 0) (bruijn ##.%x.365 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      statics->vars[0],
      _var0);
}
static void global_V0k363(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k363, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.363 1 0) (null? (close global_V0k364) obj-files) ((bruijn ##.%k.364 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "null?")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k364, self)))),
      VLookupGlobalVarFast2(runtime, "obj-files"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_V0k366(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k366, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.361 1 0) (compiler-error (bruijn ##.%k.362 0 0) (##string ##.string.842)) ((bruijn ##.%k.362 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D842.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_V0k368(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k368, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if makefile? ((bruijn ##.%k.360 0 0) makefile?) (if header? ((bruijn ##.%k.360 0 0) header?) (if bytecode? ((bruijn ##.%k.360 0 0) bytecode?) (if transpile? ((bruijn ##.%k.360 0 0) transpile?) (if object? ((bruijn ##.%k.360 0 0) object?) ((bruijn ##.%k.360 0 0) expand?))))))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "makefile?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VLookupGlobalVarFast2(runtime, "makefile?"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "header?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VLookupGlobalVarFast2(runtime, "header?"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "bytecode?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VLookupGlobalVarFast2(runtime, "bytecode?"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "transpile?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VLookupGlobalVarFast2(runtime, "transpile?"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "object?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VLookupGlobalVarFast2(runtime, "object?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VLookupGlobalVarFast2(runtime, "expand?"));
}
}
}
}
}
}
static void global_V0k372(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k372, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (not (bruijn ##.%k.357 2 0) (bruijn ##.%x.358 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      statics->up->vars[0],
      _var0);
}
static void global_V0k371(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k371, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (null? (close global_V0k372) (bruijn ##.%x.359 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "null?")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k372, self)))),
      _var0);
}
static void global_V0k370(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k370, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.356 1 0) (if out-file (cdr (close global_V0k371) scm-files) ((bruijn ##.%k.357 0 0) #f)) ((bruijn ##.%k.357 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "out-file"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdr")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k371, self)))),
      VLookupGlobalVarFast2(runtime, "scm-files"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_V0k374(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k374, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.354 1 0) (compiler-error (bruijn ##.%k.355 0 0) (##string ##.string.843)) ((bruijn ##.%k.355 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D843.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_V0k376(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k376, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if makefile? ((bruijn ##.%k.353 0 0) makefile?) (if header? ((bruijn ##.%k.353 0 0) header?) (if bytecode? ((bruijn ##.%k.353 0 0) bytecode?) (if transpile? ((bruijn ##.%k.353 0 0) transpile?) (if object? ((bruijn ##.%k.353 0 0) object?) ((bruijn ##.%k.353 0 0) expand?))))))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "makefile?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VLookupGlobalVarFast2(runtime, "makefile?"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "header?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VLookupGlobalVarFast2(runtime, "header?"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "bytecode?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VLookupGlobalVarFast2(runtime, "bytecode?"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "transpile?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VLookupGlobalVarFast2(runtime, "transpile?"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "object?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VLookupGlobalVarFast2(runtime, "object?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VLookupGlobalVarFast2(runtime, "expand?"));
}
}
}
}
}
}
static void global_V0k380(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k380, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (not (bruijn ##.%k.350 2 0) (bruijn ##.%x.351 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      statics->up->vars[0],
      _var0);
}
static void global_V0k379(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k379, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (null? (close global_V0k380) (bruijn ##.%x.352 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "null?")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k380, self)))),
      _var0);
}
static void global_V0k378(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k378, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.349 1 0) (cdr (close global_V0k379) scm-files) ((bruijn ##.%k.350 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdr")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k379, self)))),
      VLookupGlobalVarFast2(runtime, "scm-files"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_V0k382(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k382, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.347 1 0) (compiler-error (bruijn ##.%k.348 0 0) (##string ##.string.844)) ((bruijn ##.%k.348 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D844.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_V0k388(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k388, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (change-extension (bruijn ##.%k.336 2 0) (bruijn ##.%x.337 0 0) (##string ##.string.776))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "change-extension")), 3,
      statics->up->vars[0],
      _var0,
      VEncodePointer(&_V10_Dstring_D776.sym, VPOINTER_OTHER));
}
static void global_V0k387(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k387, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basename (close global_V0k388) (bruijn ##.%x.338 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "basename")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k388, self)))),
      _var0);
}
static void global_V0k390(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k390, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (change-extension (bruijn ##.%k.336 2 0) (bruijn ##.%x.339 0 0) (##string ##.string.845))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "change-extension")), 3,
      statics->up->vars[0],
      _var0,
      VEncodePointer(&_V10_Dstring_D845.sym, VPOINTER_OTHER));
}
static void global_V0k389(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k389, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basename (close global_V0k390) (bruijn ##.%x.340 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "basename")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k390, self)))),
      _var0);
}
static void global_V0k392(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k392, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (change-extension (bruijn ##.%k.336 2 0) (bruijn ##.%x.341 0 0) (##string ##.string.846))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "change-extension")), 3,
      statics->up->vars[0],
      _var0,
      VEncodePointer(&_V10_Dstring_D846.sym, VPOINTER_OTHER));
}
static void global_V0k391(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k391, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basename (close global_V0k392) (bruijn ##.%x.342 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "basename")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k392, self)))),
      _var0);
}
static void global_V0k394(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k394, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (change-extension (bruijn ##.%k.336 2 0) (bruijn ##.%x.343 0 0) (##string ##.string.847))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "change-extension")), 3,
      statics->up->vars[0],
      _var0,
      VEncodePointer(&_V10_Dstring_D847.sym, VPOINTER_OTHER));
}
static void global_V0k393(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k393, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basename (close global_V0k394) (bruijn ##.%x.344 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "basename")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k394, self)))),
      _var0);
}
static void global_V0k396(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k396, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (change-extension (bruijn ##.%k.336 2 0) (bruijn ##.%x.345 0 0) (##string ##.string.848))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "change-extension")), 3,
      statics->up->vars[0],
      _var0,
      VEncodePointer(&_V10_Dstring_D848.sym, VPOINTER_OTHER));
}
static void global_V0k395(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k395, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basename (close global_V0k396) (bruijn ##.%x.346 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "basename")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k396, self)))),
      _var0);
}
static void global_V0k386(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k386, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if object? (car (close global_V0k387) scm-files) (if transpile? (car (close global_V0k389) scm-files) (if expand? (car (close global_V0k391) scm-files) (if header? (car (close global_V0k393) scm-files) (if bytecode? (car (close global_V0k395) scm-files) (if makefile? ((bruijn ##.%k.336 0 0) out-file) ((bruijn ##.%k.336 0 0) #f)))))))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "object?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k387, self)))),
      VLookupGlobalVarFast2(runtime, "scm-files"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "transpile?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k389, self)))),
      VLookupGlobalVarFast2(runtime, "scm-files"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "expand?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k391, self)))),
      VLookupGlobalVarFast2(runtime, "scm-files"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "header?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k393, self)))),
      VLookupGlobalVarFast2(runtime, "scm-files"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "bytecode?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k395, self)))),
      VLookupGlobalVarFast2(runtime, "scm-files"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "makefile?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VLookupGlobalVarFast2(runtime, "out-file"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
}
}
}
}
}
static void global_V0k397(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k397, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.%k.334 1 0) out-file (bruijn ##.%x.335 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      statics->vars[0],
      _V0out__file,
      _var0
    );
}
static void global_V0k385(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k385, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.333 1 0) ((close global_V0k386) (close global_V0k397)) ((bruijn ##.%k.334 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k386, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k397, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_V0k400(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (exit (bruijn ##.%k.332 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "exit")), 1,
      self->vars[0]);
}
static void global_V0k399(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k399, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if header? (gen-header (close global_V0k400)) ((bruijn ##.%k.332 0 0) #f))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "header?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "gen-header")), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k400, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_V0k402(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (exit (bruijn ##.%k.331 19 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "exit")), 1,
      VGetArg(statics, 19-1, 0));
}
static void global_V0k401(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (if makefile? (gen-makefile (close global_V0k402)) ((bruijn ##.%k.331 19 0) #f))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "makefile?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "gen-makefile")), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k402, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 1,
      VEncodeBool(false));
}
}
static void global_V0k398(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close global_V0k399) (close global_V0k401))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k399, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k401, self)))));
}
static void global_V0k384(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k384, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k385) (close global_V0k398))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k385, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k398, self)))));
}
static void global_V0k383(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (not (close global_V0k384) out-file)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k384, self)))),
      VLookupGlobalVarFast2(runtime, "out-file"));
}
static void global_V0k381(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k381, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k382) (close global_V0k383))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k382, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k383, self)))));
}
static void global_V0k377(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k377, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k378) (close global_V0k381))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k378, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k381, self)))));
}
static void global_V0k375(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close global_V0k376) (close global_V0k377))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k376, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k377, self)))));
}
static void global_V0k373(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k373, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k374) (close global_V0k375))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k374, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k375, self)))));
}
static void global_V0k369(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k369, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k370) (close global_V0k373))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k370, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k373, self)))));
}
static void global_V0k367(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close global_V0k368) (close global_V0k369))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k368, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k369, self)))));
}
static void global_V0k365(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k365, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k366) (close global_V0k367))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k366, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k367, self)))));
}
static void global_V0k362(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k362, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k363) (close global_V0k365))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k363, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k365, self)))));
}
static void global_V0k360(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close global_V0k361) (close global_V0k362))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k361, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k362, self)))));
}
static void global_V0k358(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k358, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k359) (close global_V0k360))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k359, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k360, self)))));
}
static void global_V0k356(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k356, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k357) (close global_V0k358))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k357, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k358, self)))));
}
static void global_V0k355(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (null? (close global_V0k356) scm-files)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "null?")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k356, self)))),
      VLookupGlobalVarFast2(runtime, "scm-files"));
}
static void global_V0k353(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k353, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k354) (close global_V0k355))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k354, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k355, self)))));
}
static void global_V0k352(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k352, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (> (close global_V0k353) (bruijn ##.%x.373 0 0) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, ">")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k353, self)))),
      _var0,
      VEncodeInt(1l));
}
static void global_V0k351(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (count-true (close global_V0k352) makefile? header? bytecode? transpile? object? expand?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "count-true")), 7,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k352, self)))),
      VLookupGlobalVarFast2(runtime, "makefile?"),
      VLookupGlobalVarFast2(runtime, "header?"),
      VLookupGlobalVarFast2(runtime, "bytecode?"),
      VLookupGlobalVarFast2(runtime, "transpile?"),
      VLookupGlobalVarFast2(runtime, "object?"),
      VLookupGlobalVarFast2(runtime, "expand?"));
}
static void global_V0k344(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k344, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k345) (close global_V0k351))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k345, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k351, self)))));
}
static void global_V0k343(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (not (close global_V0k344) cc)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k344, self)))),
      VLookupGlobalVarFast2(runtime, "cc"));
}
static void global_V0k341(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k341, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k342) (close global_V0k343))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k342, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k343, self)))));
}
static void global_V0k340(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k340, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (not (close global_V0k341) (bruijn ##.%x.383 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k341, self)))),
      _var0);
}
static void global_V0k339(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (member (close global_V0k340) platform enabled-platforms)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "member")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k340, self)))),
      VLookupGlobalVarFast2(runtime, "platform"),
      VLookupGlobalVarFast2(runtime, "enabled-platforms"));
}
static void global_V0k337(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k337, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k338) (close global_V0k339))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k338, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k339, self)))));
}
static void global_V0k336(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k336, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (not (close global_V0k337) (bruijn ##.%x.386 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k337, self)))),
      _var0);
}
static void global_V0k335(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (member (close global_V0k336) platform '(##pair ##.pair.850))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "member")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k336, self)))),
      VLookupGlobalVarFast2(runtime, "platform"),
      VEncodePointer(&_V10_Dpair_D850, VPOINTER_PAIR));
}
static void global_V0k334(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k334, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (##.loop.53) #f (bruijn ##.loop.53 2 0) (close global_V0k335) (bruijn ##.%x.526 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k335, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V10_Dloop_D53(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
static void global_V0k333(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k333, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (getopt (close global_V0k334) (##string ##.string.851) (bruijn ##.%x.527 0 0) '(##pair ##.pair.919))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "getopt")), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k334, self)))),
      VEncodePointer(&_V10_Dstring_D851.sym, VPOINTER_OTHER),
      _var0,
      VEncodePointer(&_V10_Dpair_D919, VPOINTER_PAIR));
}
static void global_V0lambda93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close "_V50_V10_Dloop_D53")) (command-line (close global_V0k333)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D53, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "command-line")), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k333, self)))));
    }
}
static void global_V0lambda92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (with-exception-handler (bruijn ##.%next.330 0 0) handle-exception (close global_V0lambda93))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "with-exception-handler")), 3,
      _var0,
      VLookupGlobalVarFast2(runtime, "handle-exception"),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda93, self)))));
}
static void global_V0k404(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k404, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.549 1 0) ((bruijn ##.%k.550 0 0) '(##pair ##.pair.926)) ((bruijn ##.%k.550 0 0) '()))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dpair_D926, VPOINTER_PAIR));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
}
}
static void global_V0k407(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k407, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.547 1 0) ((bruijn ##.%k.548 0 0) '(##pair ##.pair.930)) ((bruijn ##.%k.548 0 0) '()))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dpair_D930, VPOINTER_PAIR));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
}
}
static void global_V0k410(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k410, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.545 1 0) ((bruijn ##.%k.546 0 0) '(##pair ##.pair.934)) ((bruijn ##.%k.546 0 0) '()))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dpair_D934, VPOINTER_PAIR));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
}
}
static void global_V0k419(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k419, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.734 ##.%x.735 ##.%x.736) ((##vcore.cons 'ieee-float (bruijn ##.%x.532 1 0)) (##vcore.cons 'c17 (bruijn ##.%x.734 0 0)) (##vcore.cons 'r7rs (bruijn ##.%x.735 0 1))) (define (bruijn ##.%next.528 16 0) feature-list (bruijn ##.%x.736 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V0ieee__float,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0c17,
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0r7rs,
      self->vars[1]);
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      VGetArg(statics, 16-1, 0),
      _V0feature__list,
      self->vars[2]
    );
    }
}
static void global_V0k418(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k418, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (append (close global_V0k419) (bruijn ##.%x.533 12 0) (bruijn ##.%x.534 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "append")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k419, self)))),
      VGetArg(statics, 12-1, 0),
      _var0);
}
static void global_V0k417(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k417, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (append (close global_V0k418) (bruijn ##.%x.535 9 0) (bruijn ##.%x.536 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "append")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k418, self)))),
      VGetArg(statics, 9-1, 0),
      _var0);
}
static void global_V0k416(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k416, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (append (close global_V0k417) (bruijn ##.%x.537 6 0) (bruijn ##.%x.538 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "append")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k417, self)))),
      VGetArg(statics, 6-1, 0),
      _var0);
}
static void global_V0k415(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k415, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.732 ##.%x.733) ((##vcore.cons (bruijn ##.%x.541 1 0) '()) (##vcore.cons 'vanity-scheme (bruijn ##.%x.732 0 0))) (append (close global_V0k416) user-feature-list (bruijn ##.%x.733 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0vanity__scheme,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "append")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k416, self)))),
      VLookupGlobalVarFast2(runtime, "user-feature-list"),
      self->vars[1]);
    }
}
static void global_V0k414(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k414, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (string->symbol (close global_V0k415) (bruijn ##.%x.542 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string->symbol")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k415, self)))),
      _var0);
}
static void global_V0k413(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k413, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (sprintf (close global_V0k414) (##string ##.string.935) (bruijn ##.%x.543 1 0) (bruijn ##.%x.544 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "sprintf")), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k414, self)))),
      VEncodePointer(&_V10_Dstring_D935.sym, VPOINTER_OTHER),
      statics->vars[0],
      _var0);
}
static void global_V0k412(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k412, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (cadr (close global_V0k413) version)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cadr")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k413, self)))),
      VLookupGlobalVarFast2(runtime, "version"));
}
static void global_V0k411(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k411, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (car (close global_V0k412) version)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k412, self)))),
      VLookupGlobalVarFast2(runtime, "version"));
}
static void global_V0k409(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k409, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k410) (close global_V0k411))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k410, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k411, self)))));
}
static void global_V0k408(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k408, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (equal? (close global_V0k409) platform (##string ##.string.764))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k409, self)))),
      VLookupGlobalVarFast2(runtime, "platform"),
      VEncodePointer(&_V10_Dstring_D764.sym, VPOINTER_OTHER));
}
static void global_V0k406(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k406, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k407) (close global_V0k408))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k407, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k408, self)))));
}
static void global_V0k405(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k405, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (equal? (close global_V0k406) platform (##string ##.string.762))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k406, self)))),
      VLookupGlobalVarFast2(runtime, "platform"),
      VEncodePointer(&_V10_Dstring_D762.sym, VPOINTER_OTHER));
}
static void global_V0k403(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k403, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k404) (close global_V0k405))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k404, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k405, self)))));
}
static void global_V0lambda94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (equal? (close global_V0k403) platform (##string ##.string.761))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k403, self)))),
      VLookupGlobalVarFast2(runtime, "platform"),
      VEncodePointer(&_V10_Dstring_D761.sym, VPOINTER_OTHER));
}
static void global_V0lambda95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (set-feature-list! (bruijn ##.%next.551 0 0) feature-list)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "set-feature-list!")), 2,
      _var0,
      VLookupGlobalVarFast2(runtime, "feature-list"));
}
static void global_V0lambda96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.552 0 0) compile-ret 0)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0compile__ret,
      VEncodeInt(0l)
    );
}
static void global_V0lambda97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (define (bruijn ##.%next.553 0 0) link-ret 0)
    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,
      _var0,
      _V0link__ret,
      VEncodeInt(0l)
    );
}
static void global_V0k421(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k421, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.724 1 0) ((bruijn ##.%k.725 0 0) (##string ##.string.936)) ((bruijn ##.%k.725 0 0) (##string ##.string.937)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D936.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D937.sym, VPOINTER_OTHER));
}
}
void _V50_V10_Did_D65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Did_D65, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.%k.556 0 0) (bruijn ##.x.69 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
}
static void global_V0k424(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k424, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if header? ((bruijn ##.%k.723 0 0) header?) (if bytecode? ((bruijn ##.%k.723 0 0) bytecode?) (if transpile? ((bruijn ##.%k.723 0 0) transpile?) ((bruijn ##.%k.723 0 0) expand?))))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "header?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VLookupGlobalVarFast2(runtime, "header?"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "bytecode?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VLookupGlobalVarFast2(runtime, "bytecode?"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "transpile?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VLookupGlobalVarFast2(runtime, "transpile?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VLookupGlobalVarFast2(runtime, "expand?"));
}
}
}
}
static void global_V0k428(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k428, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (make-temporary-file (bruijn ##.%k.720 2 0) (bruijn ##.%x.721 0 0) (##string ##.string.845))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "make-temporary-file")), 3,
      statics->up->vars[0],
      _var0,
      VEncodePointer(&_V10_Dstring_D845.sym, VPOINTER_OTHER));
}
static void global_V0k427(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k427, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (string-append (close global_V0k428) (##string ##.string.938) (bruijn ##.%x.722 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-append")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k428, self)))),
      VEncodePointer(&_V10_Dstring_D938.sym, VPOINTER_OTHER),
      _var0);
}
static void global_V0lambda100(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda100, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basename (close global_V0k427) (bruijn ##.file.70 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "basename")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k427, self)))),
      _var1);
}
static void global_V0k426(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k426, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.718 1 0) (list (bruijn ##.%k.719 0 0) out-file) (map (bruijn ##.%k.719 0 0) (close global_V0lambda100) scm-files))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "list")), 2,
      _var0,
      VLookupGlobalVarFast2(runtime, "out-file"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "map")), 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda100, self)))),
      VLookupGlobalVarFast2(runtime, "scm-files"));
}
}
static void global_V0k431(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k431, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if header? ((bruijn ##.%k.716 0 0) header?) (if bytecode? ((bruijn ##.%k.716 0 0) bytecode?) (if transpile? ((bruijn ##.%k.716 0 0) transpile?) ((bruijn ##.%k.716 0 0) expand?))))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "header?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VLookupGlobalVarFast2(runtime, "header?"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "bytecode?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VLookupGlobalVarFast2(runtime, "bytecode?"));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "transpile?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VLookupGlobalVarFast2(runtime, "transpile?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VLookupGlobalVarFast2(runtime, "expand?"));
}
}
}
}
static void global_V0k435(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k435, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (make-temporary-file (bruijn ##.%k.713 2 0) (bruijn ##.%x.714 0 0) (##string ##.string.776))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "make-temporary-file")), 3,
      statics->up->vars[0],
      _var0,
      VEncodePointer(&_V10_Dstring_D776.sym, VPOINTER_OTHER));
}
static void global_V0k434(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k434, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (string-append (close global_V0k435) (##string ##.string.938) (bruijn ##.%x.715 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-append")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k435, self)))),
      VEncodePointer(&_V10_Dstring_D938.sym, VPOINTER_OTHER),
      _var0);
}
static void global_V0lambda101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda101, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basename (close global_V0k434) (bruijn ##.file.71 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "basename")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k434, self)))),
      _var1);
}
static void global_V0k433(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k433, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.711 1 0) (list (bruijn ##.%k.712 0 0) #f) (if object? (list (bruijn ##.%k.712 0 0) out-file) (map (bruijn ##.%k.712 0 0) (close global_V0lambda101) scm-files)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "list")), 2,
      _var0,
      VEncodeBool(false));
} else {
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "object?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "list")), 2,
      _var0,
      VLookupGlobalVarFast2(runtime, "out-file"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "map")), 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda101, self)))),
      VLookupGlobalVarFast2(runtime, "scm-files"));
}
}
}
static void global_V0k440(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k440, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.709 0 0) ((bruijn ##.%k.708 1 0) (##string ##.string.940)) (sprintf (bruijn ##.%k.708 1 0) (##string ##.string.941) install-root))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D940.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "sprintf")), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D941.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast2(runtime, "install-root"));
}
}
static void global_V0k439(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k439, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.707 1 0) ((bruijn ##.%k.708 0 0) (##string ##.string.939)) (equal? (close global_V0k440) platform (##string ##.string.764)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D939.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k440, self)))),
      VLookupGlobalVarFast2(runtime, "platform"),
      VEncodePointer(&_V10_Dstring_D764.sym, VPOINTER_OTHER));
}
}
static void global_V0k444(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k444, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.704 1 0) (eq? (bruijn ##.%k.705 0 0) optimization 0) ((bruijn ##.%k.705 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eq?")), 3,
      _var0,
      VLookupGlobalVarFast2(runtime, "optimization"),
      VEncodeInt(0l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_V0k446(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k446, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.702 1 0) ((bruijn ##.%k.703 0 0) (##string ##.string.942)) (sprintf (bruijn ##.%k.703 0 0) (##string ##.string.943) optimization))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D942.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "sprintf")), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D943.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast2(runtime, "optimization"));
}
}
static void global_V0k448(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k448, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if debug? ((bruijn ##.%k.701 0 0) (##string ##.string.944)) ((bruijn ##.%k.701 0 0) (##string ##.string.782)))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "debug?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D944.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D782.sym, VPOINTER_OTHER));
}
}
static void global_V0k450(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k450, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if shared? ((bruijn ##.%k.700 0 0) (##string ##.string.945)) ((bruijn ##.%k.700 0 0) (##string ##.string.782)))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "shared?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D945.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D782.sym, VPOINTER_OTHER));
}
}
static void global_V0k459(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k459, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if shared? (> (bruijn ##.%k.625 0 0) (bruijn ##.num-mains.68 16 8) 0) ((bruijn ##.%k.625 0 0) #f))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "shared?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, ">")), 3,
      _var0,
      VGetArg(statics, 16-1, 8),
      VEncodeInt(0l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_V0k461(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k461, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.623 1 0) (compiler-error (bruijn ##.%k.624 0 0) (##string ##.string.946)) ((bruijn ##.%k.624 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D946.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_V0k464(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k464, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.621 1 0) (compiler-error (bruijn ##.%k.622 0 0) (##string ##.string.947)) ((bruijn ##.%k.622 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D947.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V10_Dloop_D103_V0k470(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D103_V0k470, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (##.loop.103) #f (bruijn ##.loop.103 6 0) (bruijn ##.%k.614 5 0) (bruijn ##.%x.616 1 0) (bruijn ##.%x.617 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V10_Dloop_D103(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V10_Dloop_D103_V0k469(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D103_V0k469, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (cdr (close _V50_V10_Dloop_D103_V0k470) (bruijn ##.paths.105 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdr")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D103_V0k470, self)))),
      statics->up->up->up->vars[2]);
}
void _V50_V10_Dloop_D103_V0k468(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D103_V0k468, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (string-append (close _V50_V10_Dloop_D103_V0k469) (bruijn ##.acc.104 3 1) (bruijn ##.%x.618 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-append")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D103_V0k469, self)))),
      statics->up->up->vars[1],
      _var0);
}
void _V50_V10_Dloop_D103_V0k467(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D103_V0k467, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (sprintf (close _V50_V10_Dloop_D103_V0k468) (##string ##.string.948) (bruijn ##.%x.619 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "sprintf")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D103_V0k468, self)))),
      VEncodePointer(&_V10_Dstring_D948.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V10_Dloop_D103_V0k466(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D103_V0k466, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.615 0 0) ((bruijn ##.%k.614 1 0) (bruijn ##.acc.104 1 1)) (car (close _V50_V10_Dloop_D103_V0k467) (bruijn ##.paths.105 1 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D103_V0k467, self)))),
      statics->vars[2]);
}
}
void _V50_V10_Dloop_D103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D103, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (null? (close _V50_V10_Dloop_D103_V0k466) (bruijn ##.paths.105 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "null?")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D103_V0k466, self)))),
      _var2);
}
static void global_V0k479(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k479, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.601 0 0) (not (bruijn ##.%k.598 3 0) object?) ((bruijn ##.%k.598 3 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      statics->up->up->vars[0],
      VLookupGlobalVarFast2(runtime, "object?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void global_V0k478(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k478, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.600 0 0) (not (close global_V0k479) expand?) ((bruijn ##.%k.598 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k479, self)))),
      VLookupGlobalVarFast2(runtime, "expand?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void global_V0k477(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k477, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.599 0 0) (not (close global_V0k478) transpile?) ((bruijn ##.%k.598 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k478, self)))),
      VLookupGlobalVarFast2(runtime, "transpile?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void global_V0k476(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k476, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.597 1 0) (not (close global_V0k477) bytecode?) ((bruijn ##.%k.598 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k477, self)))),
      VLookupGlobalVarFast2(runtime, "bytecode?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_V0k482(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k482, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if out-file (sprintf (bruijn ##.%k.596 0 0) (##string ##.string.949) cc out-file) ((bruijn ##.%k.596 0 0) cc))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "out-file"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "sprintf")), 4,
      _var0,
      VEncodePointer(&_V10_Dstring_D949.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast2(runtime, "cc"),
      VLookupGlobalVarFast2(runtime, "out-file"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VLookupGlobalVarFast2(runtime, "cc"));
}
}
static void global_V0k485(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k485, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if debug? ((bruijn ##.%k.595 0 0) (##string ##.string.944)) ((bruijn ##.%k.595 0 0) (##string ##.string.782)))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "debug?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D944.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D782.sym, VPOINTER_OTHER));
}
}
static void global_V0k489(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k489, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.594 0 0) ((bruijn ##.%k.593 1 0) (##string ##.string.951)) (sprintf (bruijn ##.%k.593 1 0) (##string ##.string.952) install-root))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D951.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "sprintf")), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D952.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast2(runtime, "install-root"));
}
}
static void global_V0k488(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k488, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.592 1 0) ((bruijn ##.%k.593 0 0) (##string ##.string.950)) (equal? (close global_V0k489) platform (##string ##.string.764)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D950.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k489, self)))),
      VLookupGlobalVarFast2(runtime, "platform"),
      VEncodePointer(&_V10_Dstring_D764.sym, VPOINTER_OTHER));
}
}
static void global_V0k492(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k492, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.591 0 0) ((bruijn ##.%k.590 1 0) (##string ##.string.782)) ((bruijn ##.%k.590 1 0) (##string ##.string.954)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D782.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D954.sym, VPOINTER_OTHER));
}
}
static void global_V0k491(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k491, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if shared? ((bruijn ##.%k.590 0 0) (##string ##.string.953)) (equal? (close global_V0k492) platform (##string ##.string.764)))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "shared?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D953.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k492, self)))),
      VLookupGlobalVarFast2(runtime, "platform"),
      VEncodePointer(&_V10_Dstring_D764.sym, VPOINTER_OTHER));
}
}
static void global_V0k502(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k502, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if verbose? (displayln (bruijn ##.%k.577 0 0) (bruijn ##.link-command.112 10 1)) ((bruijn ##.%k.577 0 0) #f))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "verbose?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      _var0,
      VGetArg(statics, 10-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_V0k504(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k504, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.%k.574 12 0) link-ret (bruijn ##.%x.576 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 12-1, 0),
      _V0link__ret,
      _var0
    );
}
static void global_V0k503(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (system (close global_V0k504) (bruijn ##.link-command.112 9 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "system")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k504, self)))),
      VGetArg(statics, 9-1, 1));
}
static void global_V0k501(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close global_V0k502) (close global_V0k503))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k502, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k503, self)))));
}
static void global_V0k500(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k500, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close global_V0k501) (bruijn ##.link-command.112 9 1) (bruijn ##.%x.578 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k501, self)))),
      VEncodeInt(9l), VEncodeInt(1l),
      _var0
    );
}
static void global_V0k499(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (string-append (close global_V0k500) (bruijn ##.link-command.112 8 1) (bruijn ##.link-command-flags.111 8 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-append")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k500, self)))),
      VGetArg(statics, 8-1, 1),
      VGetArg(statics, 8-1, 0));
}
static void global_V0k505(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k505, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.%k.579 1 0) (bruijn ##.link-command.112 10 1) (bruijn ##.%x.580 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      statics->vars[0],
      VEncodeInt(10l), VEncodeInt(1l),
      _var0
    );
}
static void global_V0lambda102(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda102, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (string-append (close global_V0k505) (bruijn ##.link-command.112 9 1) (bruijn ##.option.114 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-append")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k505, self)))),
      VGetArg(statics, 9-1, 1),
      _var1);
}
static void global_V0k498(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (for-each (close global_V0k499) (close global_V0lambda102) c-options)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "for-each")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k499, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda102, self)))),
      VLookupGlobalVarFast2(runtime, "c-options"));
}
static void global_V0k506(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k506, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.%k.581 1 0) (bruijn ##.link-command.112 10 1) (bruijn ##.%x.582 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      statics->vars[0],
      VEncodeInt(10l), VEncodeInt(1l),
      _var0
    );
}
static void global_V0lambda103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda103, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (string-append (close global_V0k506) (bruijn ##.link-command.112 9 1) (##string ##.string.955) (bruijn ##.file.113 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-append")), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k506, self)))),
      VGetArg(statics, 9-1, 1),
      VEncodePointer(&_V10_Dstring_D955.sym, VPOINTER_OTHER),
      _var1);
}
static void global_V0k497(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k497, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (for-each (close global_V0k498) (close global_V0lambda103) (bruijn ##.%x.583 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "for-each")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k498, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda103, self)))),
      _var0);
}
static void global_V0k496(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k496, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (append (close global_V0k497) (bruijn ##.cc-obj-files.61 33 1) (bruijn ##.%x.584 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "append")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k497, self)))),
      VGetArg(statics, 33-1, 1),
      _var0);
}
static void global_V0k495(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (reverse (close global_V0k496) obj-files)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "reverse")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k496, self)))),
      VLookupGlobalVarFast2(runtime, "obj-files"));
}
static void global_V0k494(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k494, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close global_V0k495) (bruijn ##.link-command-flags.111 6 0) (bruijn ##.%x.585 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k495, self)))),
      VEncodeInt(6l), VEncodeInt(0l),
      _var0
    );
}
static void global_V0k493(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k493, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (string-append (close global_V0k494) (bruijn ##.base-cc-flags.62 31 2) (bruijn ##.%x.586 4 0) (bruijn ##.%x.587 3 0) (bruijn ##.%x.588 1 0) (bruijn ##.%x.589 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-append")), 6,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k494, self)))),
      VGetArg(statics, 31-1, 2),
      statics->up->up->up->vars[0],
      statics->up->up->vars[0],
      statics->vars[0],
      _var0);
}
static void global_V0k490(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k490, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k491) (close global_V0k493))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k491, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k493, self)))));
}
static void global_V0k487(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k487, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k488) (close global_V0k490))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k488, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k490, self)))));
}
static void global_V0k486(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k486, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (equal? (close global_V0k487) platform (##string ##.string.761))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k487, self)))),
      VLookupGlobalVarFast2(runtime, "platform"),
      VEncodePointer(&_V10_Dstring_D761.sym, VPOINTER_OTHER));
}
static void global_V0k484(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k484, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k485) (close global_V0k486))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k485, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k486, self)))));
}
static void global_V0k483(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k483, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 2 (#f (bruijn ##.%x.575 1 0)) (sprintf (close global_V0k484) (##string ##.string.943) optimization))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = VEncodeBool(false);
    self->vars[1] = statics->vars[0];
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "sprintf")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k484, self)))),
      VEncodePointer(&_V10_Dstring_D943.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast2(runtime, "optimization"));
    }
}
static void global_V0k481(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k481, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.573 1 0) ((close global_V0k482) (close global_V0k483)) ((bruijn ##.%k.574 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k482, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k483, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_V0k512(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k512, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.572 0 0) (not (bruijn ##.%k.569 3 0) keep?) ((bruijn ##.%k.569 3 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      statics->up->up->vars[0],
      VLookupGlobalVarFast2(runtime, "keep?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void global_V0k511(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k511, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.571 0 0) (not (close global_V0k512) expand?) ((bruijn ##.%k.569 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k512, self)))),
      VLookupGlobalVarFast2(runtime, "expand?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void global_V0k510(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k510, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.570 0 0) (not (close global_V0k511) transpile?) ((bruijn ##.%k.569 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k511, self)))),
      VLookupGlobalVarFast2(runtime, "transpile?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void global_V0k509(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k509, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.568 1 0) (not (close global_V0k510) bytecode?) ((bruijn ##.%k.569 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k510, self)))),
      VLookupGlobalVarFast2(runtime, "bytecode?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_V0k514(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k514, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.566 1 0) (for-each (bruijn ##.%k.567 0 0) delete-file (bruijn ##.cc-files.60 26 0)) ((bruijn ##.%k.567 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "for-each")), 3,
      _var0,
      VLookupGlobalVarFast2(runtime, "delete-file"),
      VGetArg(statics, 26-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_V0k521(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k521, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.565 0 0) (not (bruijn ##.%k.561 4 0) keep?) ((bruijn ##.%k.561 4 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      statics->up->up->up->vars[0],
      VLookupGlobalVarFast2(runtime, "keep?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void global_V0k520(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k520, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.564 0 0) (not (close global_V0k521) object?) ((bruijn ##.%k.561 3 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k521, self)))),
      VLookupGlobalVarFast2(runtime, "object?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void global_V0k519(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k519, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.563 0 0) (not (close global_V0k520) expand?) ((bruijn ##.%k.561 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k520, self)))),
      VLookupGlobalVarFast2(runtime, "expand?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void global_V0k518(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k518, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.562 0 0) (not (close global_V0k519) transpile?) ((bruijn ##.%k.561 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k519, self)))),
      VLookupGlobalVarFast2(runtime, "transpile?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void global_V0k517(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k517, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.560 1 0) (not (close global_V0k518) bytecode?) ((bruijn ##.%k.561 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k518, self)))),
      VLookupGlobalVarFast2(runtime, "bytecode?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_V0k522(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k522, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.559 0 0) (for-each (bruijn ##.%k.555 31 0) delete-file (bruijn ##.cc-obj-files.61 27 1)) ((bruijn ##.%k.555 31 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "for-each")), 3,
      VGetArg(statics, 31-1, 0),
      VLookupGlobalVarFast2(runtime, "delete-file"),
      VGetArg(statics, 27-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 1,
      VEncodeBool(false));
}
}
static void global_V0k516(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k516, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k517) (close global_V0k522))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k517, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k522, self)))));
}
static void global_V0k515(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (not (close global_V0k516) header?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k516, self)))),
      VLookupGlobalVarFast2(runtime, "header?"));
}
static void global_V0k513(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k513, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k514) (close global_V0k515))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k514, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k515, self)))));
}
static void global_V0k508(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k508, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k509) (close global_V0k513))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k509, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k513, self)))));
}
static void global_V0k507(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (not (close global_V0k508) header?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k508, self)))),
      VLookupGlobalVarFast2(runtime, "header?"));
}
static void global_V0k480(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k480, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k481) (close global_V0k507))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k481, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k507, self)))));
}
static void global_V0k475(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k475, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k476) (close global_V0k480))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k476, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k480, self)))));
}
static void global_V0k474(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (not (close global_V0k475) header?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k475, self)))),
      VLookupGlobalVarFast2(runtime, "header?"));
}
static void global_V0k528(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k528, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.612 0 0) (not (bruijn ##.%k.610 2 0) expand?) ((bruijn ##.%k.610 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      statics->up->vars[0],
      VLookupGlobalVarFast2(runtime, "expand?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void global_V0k527(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k527, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.611 0 0) (not (close global_V0k528) transpile?) ((bruijn ##.%k.610 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k528, self)))),
      VLookupGlobalVarFast2(runtime, "transpile?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void global_V0k526(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k526, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.609 1 0) (not (close global_V0k527) bytecode?) ((bruijn ##.%k.610 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k527, self)))),
      VLookupGlobalVarFast2(runtime, "bytecode?"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_V0k530(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k530, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if verbose? (displayln (bruijn ##.%k.608 0 0) (bruijn ##.cc-cmd.110 3 0)) ((bruijn ##.%k.608 0 0) #f))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "verbose?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "displayln")), 2,
      _var0,
      statics->up->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_V0k533(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k533, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.%k.603 7 0) compile-ret (bruijn ##.%x.606 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,
      VGetArg(statics, 7-1, 0),
      _V0compile__ret,
      _var0
    );
}
static void global_V0k532(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k532, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (bitwise-ior (close global_V0k533) compile-ret (bruijn ##.%x.607 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "bitwise-ior")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k533, self)))),
      VLookupGlobalVarFast2(runtime, "compile-ret"),
      _var0);
}
static void global_V0k531(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (system (close global_V0k532) (bruijn ##.cc-cmd.110 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "system")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k532, self)))),
      statics->up->vars[0]);
}
static void global_V0k529(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k529, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.605 0 0) ((close global_V0k530) (close global_V0k531)) ((bruijn ##.%k.603 5 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k530, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k531, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void global_V0k525(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k525, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k526) (close global_V0k529))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k526, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k529, self)))));
}
static void global_V0k524(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k524, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((bruijn ##.%x.604 1 0)) (not (close global_V0k525) header?))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = statics->vars[0];
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k525, self)))),
      VLookupGlobalVarFast2(runtime, "header?"));
    }
}
static void global_V0k523(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k523, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (sprintf (close global_V0k524) (##string ##.string.957) cc (bruijn ##.path.109 0 0) (bruijn ##.cc-paths.102 6 0) (bruijn ##.cc-command.64 24 4) (bruijn ##.obj-file.108 1 3) (bruijn ##.cc-file.107 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "sprintf")), 8,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k524, self)))),
      VEncodePointer(&_V10_Dstring_D957.sym, VPOINTER_OTHER),
      VLookupGlobalVarFast2(runtime, "cc"),
      _var0,
      VGetArg(statics, 6-1, 0),
      VGetArg(statics, 24-1, 4),
      statics->vars[3],
      statics->vars[2]);
}
static void global_V0lambda105(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda105, got ~D~N"
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
  // (realbasepath (close global_V0k523) (bruijn ##.scm-file.106 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "realbasepath")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k523, self)))),
      _var1);
}
static void global_V0lambda104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (for-each (bruijn ##.%k.602 0 0) (close global_V0lambda105) scm-files (bruijn ##.cc-files.60 22 0) (bruijn ##.cc-obj-files.61 22 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "for-each")), 5,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda105, self)))),
      VLookupGlobalVarFast2(runtime, "scm-files"),
      VGetArg(statics, 22-1, 0),
      VGetArg(statics, 22-1, 1));
}
static void global_V0k473(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (benchmark (close global_V0k474) (##string ##.string.956) (close global_V0lambda104))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "benchmark")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k474, self)))),
      VEncodePointer(&_V10_Dstring_D956.sym, VPOINTER_OTHER),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda104, self)))));
}
static void global_V0k472(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k472, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close global_V0k473) (bruijn ##.cc-paths.102 3 0) (bruijn ##.%x.613 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k473, self)))),
      VEncodeInt(3l), VEncodeInt(0l),
      _var0
    );
}
static void global_V0k471(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k471, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (##.loop.103) #f (bruijn ##.loop.103 1 0) (close global_V0k472) (##string ##.string.782) (bruijn ##.%x.620 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k472, self))));
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D782.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V10_Dloop_D103(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void global_V0k465(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (letrec 1 (#f) (letrec 1 ((close "_V50_V10_Dloop_D103")) (cdr (close global_V0k471) paths)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = VEncodeBool(false);
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D103, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdr")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k471, self)))),
      VLookupGlobalVarFast2(runtime, "paths"));
    }
    }
}
static void global_V0k463(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k463, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k464) (close global_V0k465))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k464, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k465, self)))));
}
static void global_V0k462(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (> (close global_V0k463) (bruijn ##.num-mains.68 16 8) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, ">")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k463, self)))),
      VGetArg(statics, 16-1, 8),
      VEncodeInt(1l));
}
static void global_V0k460(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k460, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k461) (close global_V0k462))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k461, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k462, self)))));
}
static void global_V0k458(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close global_V0k459) (close global_V0k460))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k459, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k460, self)))));
}
static void global_V0k457(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k457, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close global_V0k458) (bruijn ##.num-mains.68 15 8) (bruijn ##.%x.626 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k458, self)))),
      VEncodeInt(15l), VEncodeInt(8l),
      _var0
    );
}
static void global_V0k534(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k534, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.x.72 1 1) ((bruijn ##.%k.629 0 0) 1) ((bruijn ##.%k.629 0 0) 0))
if(VDecodeBool(
statics->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(1l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(0l));
}
}
static void global_V0k535(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k535, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (+ (bruijn ##.%k.627 1 0) (bruijn ##.acc.73 1 2) (bruijn ##.%x.628 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "+")), 3,
      statics->vars[0],
      statics->vars[2],
      _var0);
}
static void global_V0lambda106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda106, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close global_V0k534) (close global_V0k535))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k534, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k535, self)))));
}
static void global_V0k456(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k456, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (fold (close global_V0k457) (close global_V0lambda106) 0 (bruijn ##.%x.630 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "fold")), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k457, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda106, self)))),
      VEncodeInt(0l),
      _var0);
}
static void global_V0k541(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k541, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (verify-expanded (bruijn ##.%k.680 1 0) (bruijn ##.%x.681 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "verify-expanded")), 2,
      statics->vars[0],
      _var0);
}
static void global_V0lambda109(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (apply (close global_V0k541) append (bruijn ##.expanded.80 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "apply")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k541, self)))),
      VLookupGlobalVarFast2(runtime, "append"),
      statics->up->vars[0]);
}
static void global_V0k540(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k540, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if verify? (benchmark (bruijn ##.%k.679 0 0) (##string ##.string.958) (close global_V0lambda109)) ((bruijn ##.%k.679 0 0) #f))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "verify?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "benchmark")), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D958.sym, VPOINTER_OTHER),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda109, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V10_Dloop_D81_V0k548(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D81_V0k548, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if werror-unbound-variables ((bruijn ##.%k.666 0 0) compiler-error) ((bruijn ##.%k.666 0 0) compiler-warning))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "werror-unbound-variables"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VLookupGlobalVarFast2(runtime, "compiler-error"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VLookupGlobalVarFast2(runtime, "compiler-warning"));
}
}
void _V50_V10_Dloop_D81_V0k549(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D81_V0k549, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.665 0 0) (bruijn ##.%k.662 5 0) (##string ##.string.959) (bruijn ##.free.85 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 3,
      VGetArg(statics, 5-1, 0),
      VEncodePointer(&_V10_Dstring_D959.sym, VPOINTER_OTHER),
      statics->up->up->vars[0]);
}
void _V50_V10_Dloop_D81_V0k547(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D81_V0k547, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.664 0 0) ((close _V50_V10_Dloop_D81_V0k548) (close _V50_V10_Dloop_D81_V0k549)) ((bruijn ##.%k.662 4 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D81_V0k548, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D81_V0k549, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V10_Dloop_D81_V0k546(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D81_V0k546, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (not (close _V50_V10_Dloop_D81_V0k547) (bruijn ##.%x.667 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D81_V0k547, self)))),
      _var0);
}
void _V50_V10_Dloop_D81_V0k545(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D81_V0k545, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (null? (close _V50_V10_Dloop_D81_V0k546) (bruijn ##.free.85 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "null?")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D81_V0k546, self)))),
      _var0);
}
void _V50_V10_Dloop_D81_V0k550(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D81_V0k550, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (not (bruijn ##.%k.668 1 0) (bruijn ##.%x.669 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      statics->vars[0],
      _var0);
}
void _V50_V10_Dloop_D81_V0lambda110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D81_V0lambda110, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (memv (close _V50_V10_Dloop_D81_V0k550) (bruijn ##.e.86 0 1) (bruijn ##.bound.83 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "memv")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D81_V0k550, self)))),
      _var1,
      statics->up->vars[2]);
}
void _V50_V10_Dloop_D81_V0k558(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D81_V0k558, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (##.loop.81) #f (bruijn ##.loop.81 10 0) (bruijn ##.%k.662 9 0) (bruijn ##.%x.670 2 0) (bruijn ##.new-bound.88 7 1) (bruijn ##.%x.671 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 10-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 9-1, 0);
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 7-1, 1);
    VWORD _arg3 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V10_Dloop_D81(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V10_Dloop_D81_V0k557(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D81_V0k557, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (append (close _V50_V10_Dloop_D81_V0k558) (bruijn ##.%x.672 0 0) (bruijn ##.free.84 8 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "append")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D81_V0k558, self)))),
      _var0,
      VGetArg(statics, 8-1, 3));
}
void _V50_V10_Dloop_D81_V0k559(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D81_V0k559, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (not (bruijn ##.%k.673 1 0) (bruijn ##.%x.674 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      statics->vars[0],
      _var0);
}
void _V50_V10_Dloop_D81_V0lambda112(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D81_V0lambda112, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (memv (close _V50_V10_Dloop_D81_V0k559) (bruijn ##.e.92 0 1) (bruijn ##.free.84 8 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "memv")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D81_V0k559, self)))),
      _var1,
      VGetArg(statics, 8-1, 3));
}
void _V50_V10_Dloop_D81_V0k556(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D81_V0k556, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (filter (close _V50_V10_Dloop_D81_V0k557) (close _V50_V10_Dloop_D81_V0lambda112) (bruijn ##.new-free.87 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "filter")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D81_V0k557, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D81_V0lambda112, self)))),
      VGetArg(statics, 5-1, 0));
}
static void _V50_V10_Dloop_D81_V0k555(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (cdr (close _V50_V10_Dloop_D81_V0k556) (bruijn ##.exprs.82 6 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cdr")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D81_V0k556, self)))),
      VGetArg(statics, 6-1, 1));
}
void _V50_V10_Dloop_D81_V0k554(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D81_V0k554, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V10_Dloop_D81_V0k555) (bruijn ##.dummy.58.89 4 2) (bruijn ##.%x.675 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D81_V0k555, self)))),
      VEncodeInt(4l), VEncodeInt(2l),
      _var0
    );
}
static void _V50_V10_Dloop_D81_V0k553(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (close _V50_V10_Dloop_D81_V0k554) (bruijn ##.new-bound.88 3 1) (bruijn ##.new-bound.57.91 0 1))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D81_V0k554, self)))),
      VEncodeInt(3l), VEncodeInt(1l),
      self->vars[1]
    );
}
void _V50_V10_Dloop_D81_V0lambda111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D81_V0lambda111, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (set! (close _V50_V10_Dloop_D81_V0k553) (bruijn ##.new-free.87 3 0) (bruijn ##.new-free.56.90 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D81_V0k553, self)))),
      VEncodeInt(3l), VEncodeInt(0l),
      _var0
    );
}
void _V50_V10_Dloop_D81_V0k552(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D81_V0k552, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (free-variables-toplevel (close _V50_V10_Dloop_D81_V0lambda111) (bruijn ##.%x.676 1 0) (bruijn ##.bound.83 4 2) (bruijn ##.%x.677 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "free-variables-toplevel")), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D81_V0lambda111, self)))),
      statics->vars[0],
      statics->up->up->up->vars[2],
      _var0);
}
void _V50_V10_Dloop_D81_V0k551(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D81_V0k551, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (cons (close _V50_V10_Dloop_D81_V0k552) (bruijn ##.path.77 10 0) paths)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D81_V0k552, self)))),
      VGetArg(statics, 10-1, 0),
      VLookupGlobalVarFast2(runtime, "paths"));
}
void _V50_V10_Dloop_D81_V0k544(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D81_V0k544, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.663 0 0) (filter (close _V50_V10_Dloop_D81_V0k545) (close _V50_V10_Dloop_D81_V0lambda110) (bruijn ##.free.84 1 3)) (letrec 3 (#f #f #f) (car (close _V50_V10_Dloop_D81_V0k551) (bruijn ##.exprs.82 2 1))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "filter")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D81_V0k545, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D81_V0lambda110, self)))),
      statics->vars[3]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = VEncodeBool(false);
    self->vars[1] = VEncodeBool(false);
    self->vars[2] = VEncodeBool(false);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "car")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D81_V0k551, self)))),
      statics->up->vars[1]);
    }
}
}
void _V50_V10_Dloop_D81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V10_Dloop_D81, got ~D~N"
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
  // (null? (close _V50_V10_Dloop_D81_V0k544) (bruijn ##.exprs.82 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "null?")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D81_V0k544, self)))),
      _var1);
}
static void global_V0k560(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k560, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (##.loop.81) #f (bruijn ##.loop.81 1 0) (bruijn ##.%k.661 2 0) (bruijn ##.%x.678 0 0) '() '())
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VNULL;
    VWORD _arg3 = 
      VNULL;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V10_Dloop_D81(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
static void global_V0k543(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k543, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if w-unbound-variables (letrec 1 ((close "_V50_V10_Dloop_D81")) (apply (close global_V0k560) append (bruijn ##.expanded.80 2 0))) ((bruijn ##.%k.661 0 0) #f))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "w-unbound-variables"))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Dloop_D81, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "apply")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k560, self)))),
      VLookupGlobalVarFast2(runtime, "append"),
      statics->up->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_V0k573(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k573, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (not (bruijn ##.%k.636 5 0) (bruijn ##.%x.637 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      VGetArg(statics, 5-1, 0),
      _var0);
}
static void global_V0k572(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k572, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (null? (close global_V0k573) (bruijn ##.%x.638 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "null?")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k573, self)))),
      _var0);
}
static void global_V0k571(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (take-right (close global_V0k572) (bruijn ##.funs.95 4 0) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "take-right")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k572, self)))),
      statics->up->up->up->vars[0],
      VEncodeInt(1l));
}
static void global_V0k570(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k570, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (write-bytecode (close global_V0k571) (bruijn ##.%x.639 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "write-bytecode")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k571, self)))),
      _var0);
}
static void global_V0k569(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k569, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (apply (close global_V0k570) to-bytecode (bruijn ##.%x.640 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "apply")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k570, self)))),
      VLookupGlobalVarFast2(runtime, "to-bytecode"),
      _var0);
}
static void global_V0k568(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k568, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (cons (close global_V0k569) debug? (bruijn ##.%x.641 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k569, self)))),
      VLookupGlobalVarFast2(runtime, "debug?"),
      _var0);
}
static void global_V0k577(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k577, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (apply (bruijn ##.%k.636 4 0) printout2 (bruijn ##.%x.642 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "apply")), 3,
      statics->up->up->up->vars[0],
      VLookupGlobalVarFast2(runtime, "printout2"),
      _var0);
}
static void global_V0k576(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k576, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (cons (close global_V0k577) main (bruijn ##.%x.643 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k577, self)))),
      VLookupGlobalVarFast2(runtime, "main"),
      _var0);
}
static void global_V0k575(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k575, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (cons (close global_V0k576) purec? (bruijn ##.%x.644 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k576, self)))),
      VLookupGlobalVarFast2(runtime, "purec?"),
      _var0);
}
static void global_V0k574(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k574, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (cons (close global_V0k575) debug? (bruijn ##.%x.645 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k575, self)))),
      VLookupGlobalVarFast2(runtime, "debug?"),
      _var0);
}
static void global_V0lambda113(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if bytecode? (cons (close global_V0k568) shared? (bruijn ##.funs.95 1 0)) (cons (close global_V0k574) shared? (bruijn ##.funs.95 1 0)))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "bytecode?"))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k568, self)))),
      VLookupGlobalVarFast2(runtime, "shared?"),
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k574, self)))),
      VLookupGlobalVarFast2(runtime, "shared?"),
      statics->vars[0]);
}
}
static void global_V0k567(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k567, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (benchmark (bruijn ##.%k.632 9 0) (##string ##.string.960) (close global_V0lambda113))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "benchmark")), 3,
      VGetArg(statics, 9-1, 0),
      VEncodePointer(&_V10_Dstring_D960.sym, VPOINTER_OTHER),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda113, self)))));
}
static void global_V0k579(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k579, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (to-functions (bruijn ##.%k.646 2 0) (bruijn ##.%x.647 1 0) (bruijn ##.%x.648 0 0) debug?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "to-functions")), 4,
      statics->up->vars[0],
      statics->vars[0],
      _var0,
      VLookupGlobalVarFast2(runtime, "debug?"));
}
static void global_V0k578(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k578, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (not (close global_V0k579) bytecode?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k579, self)))),
      VLookupGlobalVarFast2(runtime, "bytecode?"));
}
static void global_V0lambda115(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda115, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (bruijn-ify (bruijn ##.%k.649 0 0) (bruijn ##.x.59.96 0 1) debug?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "bruijn-ify")), 3,
      _var0,
      _var1,
      VLookupGlobalVarFast2(runtime, "debug?"));
}
static void global_V0lambda114(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (map (close global_V0k578) (close global_V0lambda115) (bruijn ##.opt.94 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "map")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k578, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda115, self)))),
      statics->up->vars[0]);
}
static void global_V0k566(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k566, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.635 0 0) (for-each (bruijn ##.%k.632 8 0) pretty-print (bruijn ##.opt.94 1 0)) (benchmark (close global_V0k567) (##string ##.string.961) (close global_V0lambda114)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "for-each")), 3,
      VGetArg(statics, 8-1, 0),
      VLookupGlobalVarFast2(runtime, "pretty-print"),
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "benchmark")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k567, self)))),
      VEncodePointer(&_V10_Dstring_D961.sym, VPOINTER_OTHER),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda114, self)))));
}
}
static void global_V0k565(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k565, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (eq? (close global_V0k566) expand? 2)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eq?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k566, self)))),
      VLookupGlobalVarFast2(runtime, "expand?"),
      VEncodeInt(2l));
}
static void global_V0k581(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k581, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.655 1 0) ((bruijn ##.%k.656 0 0) qualify-callsites) ((bruijn ##.%k.656 0 0) (bruijn ##.id.65 26 5)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VLookupGlobalVarFast2(runtime, "qualify-callsites"));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 26-1, 5));
}
}
static void global_V0k584(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k584, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.652 2 0) (bruijn ##.%k.651 4 0) (bruijn ##.%x.653 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 2,
      statics->up->up->up->vars[0],
      _var0);
}
static void global_V0k583(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k583, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (optimize (close global_V0k584) (bruijn ##.expr.97 3 1) (bruijn ##.%x.654 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "optimize")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k584, self)))),
      statics->up->up->vars[1],
      _var0);
}
static void global_V0k582(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k582, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (not (close global_V0k583) bytecode?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "not")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k583, self)))),
      VLookupGlobalVarFast2(runtime, "bytecode?"));
}
static void global_V0k580(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k580, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k581) (close global_V0k582))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k581, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k582, self)))));
}
static void global_V0lambda117(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda117, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (> (close global_V0k580) optimization 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, ">")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k580, self)))),
      VLookupGlobalVarFast2(runtime, "optimization"),
      VEncodeInt(0l));
}
static void global_V0lambda116(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (map (bruijn ##.%k.650 0 0) (close global_V0lambda117) (bruijn ##.cps.93 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "map")), 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda117, self)))),
      statics->up->vars[0]);
}
static void global_V0k564(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k564, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.634 0 0) (for-each (bruijn ##.%k.632 6 0) pretty-print (bruijn ##.cps.93 1 0)) (benchmark (close global_V0k565) (##string ##.string.962) (close global_V0lambda116)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "for-each")), 3,
      VGetArg(statics, 6-1, 0),
      VLookupGlobalVarFast2(runtime, "pretty-print"),
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "benchmark")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k565, self)))),
      VEncodePointer(&_V10_Dstring_D962.sym, VPOINTER_OTHER),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda116, self)))));
}
}
static void global_V0k563(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k563, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (eq? (close global_V0k564) expand? 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eq?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k564, self)))),
      VLookupGlobalVarFast2(runtime, "expand?"),
      VEncodeInt(1l));
}
static void global_V0k586(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k586, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (to-cps (bruijn ##.%k.658 1 0) (bruijn ##.expr.98 1 1) (bruijn ##.%x.659 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "to-cps")), 3,
      statics->vars[0],
      statics->vars[1],
      _var0);
}
static void global_V0lambda119(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda119, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (cons (close global_V0k586) (bruijn ##.path.77 8 0) paths)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k586, self)))),
      VGetArg(statics, 8-1, 0),
      VLookupGlobalVarFast2(runtime, "paths"));
}
static void global_V0k585(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k585, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (map (bruijn ##.%k.657 1 0) (close global_V0lambda119) (bruijn ##.%x.660 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "map")), 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda119, self)))),
      _var0);
}
static void global_V0lambda118(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (apply (close global_V0k585) append (bruijn ##.expanded.80 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "apply")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k585, self)))),
      VLookupGlobalVarFast2(runtime, "append"),
      statics->up->vars[0]);
}
static void global_V0k562(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k562, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.633 0 0) (for-each (bruijn ##.%k.632 4 0) pretty-print (bruijn ##.expanded.80 1 0)) (benchmark (close global_V0k563) (##string ##.string.963) (close global_V0lambda118)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "for-each")), 3,
      statics->up->up->up->vars[0],
      VLookupGlobalVarFast2(runtime, "pretty-print"),
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "benchmark")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k563, self)))),
      VEncodePointer(&_V10_Dstring_D963.sym, VPOINTER_OTHER),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda118, self)))));
}
}
static void global_V0k561(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (eq? (close global_V0k562) expand? 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "eq?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k562, self)))),
      VLookupGlobalVarFast2(runtime, "expand?"),
      VEncodeInt(0l));
}
static void global_V0k542(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close global_V0k543) (close global_V0k561))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k543, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k561, self)))));
}
static void global_V0k539(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k539, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k540) (close global_V0k542))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k540, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k542, self)))));
}
static void global_V0k587(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k587, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (expand-syntax (bruijn ##.%k.683 1 0) (bruijn ##.e.100 1 1) (bruijn ##.%x.684 0 0) (bruijn ##.architecture.66 22 6) (bruijn ##.expand-options.742 2 5))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "expand-syntax")), 5,
      statics->vars[0],
      statics->vars[1],
      _var0,
      VGetArg(statics, 22-1, 6),
      statics->up->vars[5]);
}
static void global_V0lambda121(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda121, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (cons (close global_V0k587) (bruijn ##.path.77 6 0) paths)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k587, self)))),
      VGetArg(statics, 6-1, 0),
      VLookupGlobalVarFast2(runtime, "paths"));
}
static void global_V0k589(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k589, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (map (bruijn ##.%k.690 2 0) alpha-convert (bruijn ##.%x.691 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "map")), 3,
      statics->up->vars[0],
      VLookupGlobalVarFast2(runtime, "alpha-convert"),
      _var0);
}
static void global_V0k588(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k588, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (expand-toplevel (close global_V0k589) (bruijn ##.e.101 1 1) (bruijn ##.%x.692 0 0) (bruijn ##.architecture.66 21 6))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "expand-toplevel")), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k589, self)))),
      statics->vars[1],
      _var0,
      VGetArg(statics, 21-1, 6));
}
static void global_V0lambda122(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda122, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (cons (close global_V0k588) (bruijn ##.path.77 5 0) paths)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "cons")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k588, self)))),
      VGetArg(statics, 5-1, 0),
      VLookupGlobalVarFast2(runtime, "paths"));
}
static void global_V0lambda120(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if hygiene? (basic-block 6 6 (##.%x.737 ##.%x.738 ##.%x.739 ##.%x.740 ##.%x.741 ##.expand-options.742) ((##vcore.cons 'trace-expand trace-expand?) (##vcore.cons 'expand-timeout expand-timeout) (##vcore.cons 'explain-scopes explain-scopes?) (##vcore.cons (bruijn ##.%x.739 0 2) '()) (##vcore.cons (bruijn ##.%x.738 0 1) (bruijn ##.%x.740 0 3)) (##vcore.cons (bruijn ##.%x.737 0 0) (bruijn ##.%x.741 0 4))) (map (bruijn ##.%k.682 1 0) (close global_V0lambda121) (bruijn ##.file.79 2 0))) (map (bruijn ##.%k.682 0 0) (close global_V0lambda122) (bruijn ##.file.79 1 0)))
if(VDecodeBool(
VLookupGlobalVarFast2(runtime, "hygiene?"))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[6]; } container;
    self = &container.self;
    VInitEnv(self, 6, 6, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V0trace__expand,
      VLookupGlobalVarFast2(runtime, "trace-expand?"));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0expand__timeout,
      VLookupGlobalVarFast2(runtime, "expand-timeout"));
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0explain__scopes,
      VLookupGlobalVarFast2(runtime, "explain-scopes?"));
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      self->vars[2],
      VNULL);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      self->vars[3]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      self->vars[4]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "map")), 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda121, self)))),
      statics->up->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "map")), 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda122, self)))),
      statics->vars[0]);
}
}
static void global_V0k538(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k538, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (benchmark (close global_V0k539) (##string ##.string.964) (close global_V0lambda120))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "benchmark")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k539, self)))),
      VEncodePointer(&_V10_Dstring_D964.sym, VPOINTER_OTHER),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda120, self)))));
}
static void global_V0k590(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k590, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (append (bruijn ##.%k.693 1 0) (bruijn ##.%x.694 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "append")), 2,
      statics->vars[0],
      _var0);
}
static void global_V0lambda123(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.fd.78 1 0) (read-all (close global_V0k590) (bruijn ##.fd.78 1 0)) (compiler-error (bruijn ##.%k.693 0 0) (##string ##.string.966) (bruijn ##.scm-file.74 4 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "read-all")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k590, self)))),
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "compiler-error")), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D966.sym, VPOINTER_OTHER),
      statics->up->up->up->vars[1]);
}
}
static void global_V0k537(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k537, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (benchmark (close global_V0k538) (##string ##.string.965) (close global_V0lambda123))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "benchmark")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k538, self)))),
      VEncodePointer(&_V10_Dstring_D965.sym, VPOINTER_OTHER),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda123, self)))));
}
static void global_V0lambda108(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (open-input-file (close global_V0k537) (bruijn ##.scm-file.74 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "open-input-file")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k537, self)))),
      statics->up->vars[1]);
}
static void global_V0k536(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k536, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (with-output-to-file (bruijn ##.%k.631 1 0) (bruijn ##.cc-file.75 1 2) (close global_V0lambda108))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "with-output-to-file")), 3,
      statics->vars[0],
      statics->vars[2],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda108, self)))));
}
static void global_V0lambda107(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda107, got ~D~N"
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
  // (realbasepath (close global_V0k536) (bruijn ##.scm-file.74 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "realbasepath")), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k536, self)))),
      _var1);
}
static void global_V0k455(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (map (close global_V0k456) (close global_V0lambda107) scm-files (bruijn ##.cc-files.60 13 0) (bruijn ##.cc-obj-files.61 13 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "map")), 5,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k456, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda107, self)))),
      VLookupGlobalVarFast2(runtime, "scm-files"),
      VGetArg(statics, 13-1, 0),
      VGetArg(statics, 13-1, 1));
}
static void global_V0k454(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k454, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close global_V0k455) (bruijn ##.cc-command.64 13 4) (bruijn ##.%x.695 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k455, self)))),
      VEncodeInt(13l), VEncodeInt(4l),
      _var0
    );
}
static void global_V0k453(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (apply (close global_V0k454) string-append (bruijn ##.cc-command-flags.63 12 3) c-options)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "apply")), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k454, self)))),
      VLookupGlobalVarFast2(runtime, "string-append"),
      VGetArg(statics, 12-1, 3),
      VLookupGlobalVarFast2(runtime, "c-options"));
}
static void global_V0k452(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k452, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close global_V0k453) (bruijn ##.cc-command-flags.63 12 3) (bruijn ##.%x.696 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k453, self)))),
      VEncodeInt(12l), VEncodeInt(3l),
      _var0
    );
}
static void global_V0k451(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k451, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (string-append (close global_V0k452) (bruijn ##.base-cc-flags.62 11 2) (bruijn ##.%x.697 2 0) (bruijn ##.%x.698 1 0) (bruijn ##.%x.699 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "string-append")), 5,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k452, self)))),
      VGetArg(statics, 11-1, 2),
      statics->up->vars[0],
      statics->vars[0],
      _var0);
}
static void global_V0k449(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k449, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k450) (close global_V0k451))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k450, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k451, self)))));
}
static void global_V0k447(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k447, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k448) (close global_V0k449))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k448, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k449, self)))));
}
static void global_V0k445(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k445, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k446) (close global_V0k447))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k446, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k447, self)))));
}
static void global_V0k443(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k443, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k444) (close global_V0k445))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k444, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k445, self)))));
}
static void global_V0k442(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (equal? (close global_V0k443) platform (##string ##.string.764))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k443, self)))),
      VLookupGlobalVarFast2(runtime, "platform"),
      VEncodePointer(&_V10_Dstring_D764.sym, VPOINTER_OTHER));
}
static void global_V0k441(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k441, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close global_V0k442) (bruijn ##.base-cc-flags.62 6 2) (bruijn ##.%x.706 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k442, self)))),
      VEncodeInt(6l), VEncodeInt(2l),
      _var0
    );
}
static void global_V0k438(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k438, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k439) (close global_V0k441))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k439, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k441, self)))));
}
static void global_V0k437(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (equal? (close global_V0k438) platform (##string ##.string.761))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k438, self)))),
      VLookupGlobalVarFast2(runtime, "platform"),
      VEncodePointer(&_V10_Dstring_D761.sym, VPOINTER_OTHER));
}
static void global_V0k436(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k436, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close global_V0k437) (bruijn ##.cc-obj-files.61 4 1) (bruijn ##.%x.710 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k437, self)))),
      VEncodeInt(4l), VEncodeInt(1l),
      _var0
    );
}
static void global_V0k432(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k432, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k433) (close global_V0k436))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k433, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k436, self)))));
}
static void global_V0k430(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close global_V0k431) (close global_V0k432))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k431, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k432, self)))));
}
static void global_V0k429(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k429, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close global_V0k430) (bruijn ##.cc-files.60 2 0) (bruijn ##.%x.717 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k430, self)))),
      VEncodeInt(2l), VEncodeInt(0l),
      _var0
    );
}
static void global_V0k425(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k425, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k426) (close global_V0k429))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k426, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k429, self)))));
}
static void global_V0k423(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k423, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 9 (#f #f #f #f #f (close "_V50_V10_Did_D65") (bruijn ##.%x.557 2 0) (bruijn ##.%x.558 1 0) #f) ((close global_V0k424) (close global_V0k425)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[9]; } container;
    self = &container.self;
    VInitEnv(self, 9, 9, statics);
    self->vars[0] = VEncodeBool(false);
    self->vars[1] = VEncodeBool(false);
    self->vars[2] = VEncodeBool(false);
    self->vars[3] = VEncodeBool(false);
    self->vars[4] = VEncodeBool(false);
    self->vars[5] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V10_Did_D65, self))));
    self->vars[6] = statics->up->vars[0];
    self->vars[7] = statics->vars[0];
    self->vars[8] = VEncodeBool(false);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k424, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k425, self)))));
    }
}
static void global_V0k422(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k422, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (current-output-port (close global_V0k423))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "current-output-port")), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k423, self)))));
}
static void global_V0k420(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k420, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k421) (close global_V0k422))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k421, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k422, self)))));
}
static void global_V0lambda99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (equal? (close global_V0k420) platform (##string ##.string.762))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "equal?")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k420, self)))),
      VLookupGlobalVarFast2(runtime, "platform"),
      VEncodePointer(&_V10_Dstring_D762.sym, VPOINTER_OTHER));
}
static void global_V0lambda98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (with-exception-handler (bruijn ##.%next.554 0 0) handle-exception (close global_V0lambda99))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "with-exception-handler")), 3,
      _var0,
      VLookupGlobalVarFast2(runtime, "handle-exception"),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda99, self)))));
}
static void global_V0k592(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k592, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.730 1 0) (= (bruijn ##.%k.731 0 0) link-ret 0) ((bruijn ##.%k.731 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "=")), 3,
      _var0,
      VLookupGlobalVarFast2(runtime, "link-ret"),
      VEncodeInt(0l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void global_V0k594(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k594, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.728 1 0) ((bruijn ##.%k.729 0 0) 0) ((bruijn ##.%k.729 0 0) 1))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(0l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(1l));
}
}
static void global_V0k595(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k595, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (exit (bruijn ##.%next.726 3 0) (bruijn ##.%x.727 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "exit")), 2,
      statics->up->up->vars[0],
      _var0);
}
static void global_V0k593(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k593, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k594) (close global_V0k595))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k594, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k595, self)))));
}
static void global_V0k591(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0k591, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close global_V0k592) (close global_V0k593))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k592, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k593, self)))));
}
static void global_V0lambda124(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to global_V0lambda124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (= (close global_V0k591) compile-ret 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VLookupGlobalVarFast2(runtime, "=")), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0k591, self)))),
      VLookupGlobalVarFast2(runtime, "compile-ret"),
      VEncodeInt(0l));
}
static __attribute__((constructor)) void VDllMain1() {
  _V0link__ret = VEncodePointer(VInternSymbol(-1206172752, &_VW_V0link__ret.sym), VPOINTER_OTHER);
  _V0compile__ret = VEncodePointer(VInternSymbol(874650870, &_VW_V0compile__ret.sym), VPOINTER_OTHER);
  _V0feature__list = VEncodePointer(VInternSymbol(-1694353322, &_VW_V0feature__list.sym), VPOINTER_OTHER);
  _V0r7rs = VEncodePointer(VInternSymbol(982406193, &_VW_V0r7rs.sym), VPOINTER_OTHER);
  _V0c17 = VEncodePointer(VInternSymbol(-1706931666, &_VW_V0c17.sym), VPOINTER_OTHER);
  _V0ieee__float = VEncodePointer(VInternSymbol(-1891017625, &_VW_V0ieee__float.sym), VPOINTER_OTHER);
  _V0vanity__scheme = VEncodePointer(VInternSymbol(275192804, &_VW_V0vanity__scheme.sym), VPOINTER_OTHER);
  _V0ilp32 = VEncodePointer(VInternSymbol(99770222, &_VW_V0ilp32.sym), VPOINTER_OTHER);
  _V0emscripten = VEncodePointer(VInternSymbol(-139742071, &_VW_V0emscripten.sym), VPOINTER_OTHER);
  _V0wasm = VEncodePointer(VInternSymbol(-263030660, &_VW_V0wasm.sym), VPOINTER_OTHER);
  _V0llp64 = VEncodePointer(VInternSymbol(524247372, &_VW_V0llp64.sym), VPOINTER_OTHER);
  _V0mingw = VEncodePointer(VInternSymbol(-827290629, &_VW_V0mingw.sym), VPOINTER_OTHER);
  _V0windows = VEncodePointer(VInternSymbol(689389284, &_VW_V0windows.sym), VPOINTER_OTHER);
  _V0little__endian = VEncodePointer(VInternSymbol(-63519811, &_VW_V0little__endian.sym), VPOINTER_OTHER);
  _V0lp64 = VEncodePointer(VInternSymbol(1142208636, &_VW_V0lp64.sym), VPOINTER_OTHER);
  _V0x86__64 = VEncodePointer(VInternSymbol(-1676325045, &_VW_V0x86__64.sym), VPOINTER_OTHER);
  _V0compiled = VEncodePointer(VInternSymbol(-1170966093, &_VW_V0compiled.sym), VPOINTER_OTHER);
  _V0gnuc = VEncodePointer(VInternSymbol(-1422896527, &_VW_V0gnuc.sym), VPOINTER_OTHER);
  _V0gnu__linux = VEncodePointer(VInternSymbol(-9185487, &_VW_V0gnu__linux.sym), VPOINTER_OTHER);
  _V0posix = VEncodePointer(VInternSymbol(1999639318, &_VW_V0posix.sym), VPOINTER_OTHER);
  _V0help = VEncodePointer(VInternSymbol(1042489282, &_VW_V0help.sym), VPOINTER_OTHER);
  _V0version = VEncodePointer(VInternSymbol(-909072658, &_VW_V0version.sym), VPOINTER_OTHER);
  _V0shared = VEncodePointer(VInternSymbol(-1964558170, &_VW_V0shared.sym), VPOINTER_OTHER);
  _V0keep__temps = VEncodePointer(VInternSymbol(-1587858568, &_VW_V0keep__temps.sym), VPOINTER_OTHER);
  _V0makefile = VEncodePointer(VInternSymbol(-472569937, &_VW_V0makefile.sym), VPOINTER_OTHER);
  _V0maketarget = VEncodePointer(VInternSymbol(1905371315, &_VW_V0maketarget.sym), VPOINTER_OTHER);
  _V0bytecode = VEncodePointer(VInternSymbol(610863972, &_VW_V0bytecode.sym), VPOINTER_OTHER);
  _V0hygiene = VEncodePointer(VInternSymbol(-1667249161, &_VW_V0hygiene.sym), VPOINTER_OTHER);
  _V0verify = VEncodePointer(VInternSymbol(1982237423, &_VW_V0verify.sym), VPOINTER_OTHER);
  _V0trace__expand = VEncodePointer(VInternSymbol(2045705523, &_VW_V0trace__expand.sym), VPOINTER_OTHER);
  _V0explain__scopes = VEncodePointer(VInternSymbol(1496358808, &_VW_V0explain__scopes.sym), VPOINTER_OTHER);
  _V10vcore_Dpush__value = VEncodePointer(VInternSymbol(1433144780, &_VW_V10vcore_Dpush__value.sym), VPOINTER_OTHER);
  _V10vcore_Dpop__value = VEncodePointer(VInternSymbol(-858837018, &_VW_V10vcore_Dpop__value.sym), VPOINTER_OTHER);
  _V0handle__exception = VEncodePointer(VInternSymbol(1135967109, &_VW_V0handle__exception.sym), VPOINTER_OTHER);
  _V0display__version = VEncodePointer(VInternSymbol(2039570464, &_VW_V0display__version.sym), VPOINTER_OTHER);
  _V0display__help = VEncodePointer(VInternSymbol(1582000525, &_VW_V0display__help.sym), VPOINTER_OTHER);
  _V0gen__makefile = VEncodePointer(VInternSymbol(-412355213, &_VW_V0gen__makefile.sym), VPOINTER_OTHER);
  _V0gen__header = VEncodePointer(VInternSymbol(1804758416, &_VW_V0gen__header.sym), VPOINTER_OTHER);
  _V0delete__file = VEncodePointer(VInternSymbol(102699508, &_VW_V0delete__file.sym), VPOINTER_OTHER);
  _V0count__true = VEncodePointer(VInternSymbol(-1292537198, &_VW_V0count__true.sym), VPOINTER_OTHER);
  _V0realbasepath = VEncodePointer(VInternSymbol(-842581961, &_VW_V0realbasepath.sym), VPOINTER_OTHER);
  _V0realpath = VEncodePointer(VInternSymbol(-417293311, &_VW_V0realpath.sym), VPOINTER_OTHER);
  _V0decomma = VEncodePointer(VInternSymbol(337974732, &_VW_V0decomma.sym), VPOINTER_OTHER);
  _V0basepath = VEncodePointer(VInternSymbol(-2104195748, &_VW_V0basepath.sym), VPOINTER_OTHER);
  _V0basename = VEncodePointer(VInternSymbol(1409282627, &_VW_V0basename.sym), VPOINTER_OTHER);
  _V0change__extension = VEncodePointer(VInternSymbol(-974840667, &_VW_V0change__extension.sym), VPOINTER_OTHER);
  _V0extension = VEncodePointer(VInternSymbol(-116467526, &_VW_V0extension.sym), VPOINTER_OTHER);
  _V0benchmark = VEncodePointer(VInternSymbol(1404643462, &_VW_V0benchmark.sym), VPOINTER_OTHER);
  _V0stdout = VEncodePointer(VInternSymbol(-724261765, &_VW_V0stdout.sym), VPOINTER_OTHER);
  _V0benchmark_Q = VEncodePointer(VInternSymbol(-1779064857, &_VW_V0benchmark_Q.sym), VPOINTER_OTHER);
  _V0maketargets = VEncodePointer(VInternSymbol(1944552777, &_VW_V0maketargets.sym), VPOINTER_OTHER);
  _V0makefile_Q = VEncodePointer(VInternSymbol(1538780509, &_VW_V0makefile_Q.sym), VPOINTER_OTHER);
  _V0paths = VEncodePointer(VInternSymbol(149126552, &_VW_V0paths.sym), VPOINTER_OTHER);
  _V0c__options = VEncodePointer(VInternSymbol(-2036200367, &_VW_V0c__options.sym), VPOINTER_OTHER);
  _V0user__feature__list = VEncodePointer(VInternSymbol(1716295243, &_VW_V0user__feature__list.sym), VPOINTER_OTHER);
  _V0werror__unbound__variables = VEncodePointer(VInternSymbol(-1095410462, &_VW_V0werror__unbound__variables.sym), VPOINTER_OTHER);
  _V0w__unbound__variables = VEncodePointer(VInternSymbol(-434249330, &_VW_V0w__unbound__variables.sym), VPOINTER_OTHER);
  _V0cc = VEncodePointer(VInternSymbol(-1749782998, &_VW_V0cc.sym), VPOINTER_OTHER);
  _V0main = VEncodePointer(VInternSymbol(-569315834, &_VW_V0main.sym), VPOINTER_OTHER);
  _V0explain__scopes_Q = VEncodePointer(VInternSymbol(-133964656, &_VW_V0explain__scopes_Q.sym), VPOINTER_OTHER);
  _V0expand__timeout = VEncodePointer(VInternSymbol(26936304, &_VW_V0expand__timeout.sym), VPOINTER_OTHER);
  _V0trace__expand_Q = VEncodePointer(VInternSymbol(-769785054, &_VW_V0trace__expand_Q.sym), VPOINTER_OTHER);
  _V0verify_Q = VEncodePointer(VInternSymbol(1212612310, &_VW_V0verify_Q.sym), VPOINTER_OTHER);
  _V0hygiene_Q = VEncodePointer(VInternSymbol(357684437, &_VW_V0hygiene_Q.sym), VPOINTER_OTHER);
  _V0purec_Q = VEncodePointer(VInternSymbol(489592549, &_VW_V0purec_Q.sym), VPOINTER_OTHER);
  _V0enabled__platforms = VEncodePointer(VInternSymbol(-1417990405, &_VW_V0enabled__platforms.sym), VPOINTER_OTHER);
  _V0platform__emscripten__enabled_Q = VEncodePointer(VInternSymbol(125549781, &_VW_V0platform__emscripten__enabled_Q.sym), VPOINTER_OTHER);
  _V0platform__windows__enabled_Q = VEncodePointer(VInternSymbol(761978395, &_VW_V0platform__windows__enabled_Q.sym), VPOINTER_OTHER);
  _V0platform = VEncodePointer(VInternSymbol(546385074, &_VW_V0platform.sym), VPOINTER_OTHER);
  _V0out__file = VEncodePointer(VInternSymbol(972222558, &_VW_V0out__file.sym), VPOINTER_OTHER);
  _V0api = VEncodePointer(VInternSymbol(526382639, &_VW_V0api.sym), VPOINTER_OTHER);
  _V0optimization = VEncodePointer(VInternSymbol(-465914501, &_VW_V0optimization.sym), VPOINTER_OTHER);
  _V0verbose_Q = VEncodePointer(VInternSymbol(-1480383375, &_VW_V0verbose_Q.sym), VPOINTER_OTHER);
  _V0debug_Q = VEncodePointer(VInternSymbol(1412315114, &_VW_V0debug_Q.sym), VPOINTER_OTHER);
  _V0object_Q = VEncodePointer(VInternSymbol(-2128795839, &_VW_V0object_Q.sym), VPOINTER_OTHER);
  _V0transpile_Q = VEncodePointer(VInternSymbol(-624750956, &_VW_V0transpile_Q.sym), VPOINTER_OTHER);
  _V0bytecode_Q = VEncodePointer(VInternSymbol(434807537, &_VW_V0bytecode_Q.sym), VPOINTER_OTHER);
  _V0header_Q = VEncodePointer(VInternSymbol(643423491, &_VW_V0header_Q.sym), VPOINTER_OTHER);
  _V0keep_Q = VEncodePointer(VInternSymbol(1468425290, &_VW_V0keep_Q.sym), VPOINTER_OTHER);
  _V0expand_Q = VEncodePointer(VInternSymbol(2037035131, &_VW_V0expand_Q.sym), VPOINTER_OTHER);
  _V0shared_Q = VEncodePointer(VInternSymbol(987641392, &_VW_V0shared_Q.sym), VPOINTER_OTHER);
  _V0obj__files = VEncodePointer(VInternSymbol(1937478779, &_VW_V0obj__files.sym), VPOINTER_OTHER);
  _V0scm__files = VEncodePointer(VInternSymbol(-536774826, &_VW_V0scm__files.sym), VPOINTER_OTHER);
  _V10_Dpair_D934.first = _V0wasm;
  _V10_Dpair_D934.rest = VEncodePointer(&_V10_Dpair_D933, VPOINTER_PAIR);
  _V10_Dpair_D933.first = _V0emscripten;
  _V10_Dpair_D933.rest = VEncodePointer(&_V10_Dpair_D932, VPOINTER_PAIR);
  _V10_Dpair_D932.first = _V0compiled;
  _V10_Dpair_D932.rest = VEncodePointer(&_V10_Dpair_D931, VPOINTER_PAIR);
  _V10_Dpair_D931.first = _V0ilp32;
  _V10_Dpair_D931.rest = VEncodePointer(&_V10_Dpair_D920, VPOINTER_PAIR);
  _V10_Dpair_D930.first = _V0windows;
  _V10_Dpair_D930.rest = VEncodePointer(&_V10_Dpair_D929, VPOINTER_PAIR);
  _V10_Dpair_D929.first = _V0mingw;
  _V10_Dpair_D929.rest = VEncodePointer(&_V10_Dpair_D928, VPOINTER_PAIR);
  _V10_Dpair_D928.first = _V0compiled;
  _V10_Dpair_D928.rest = VEncodePointer(&_V10_Dpair_D927, VPOINTER_PAIR);
  _V10_Dpair_D927.first = _V0llp64;
  _V10_Dpair_D927.rest = VEncodePointer(&_V10_Dpair_D920, VPOINTER_PAIR);
  _V10_Dpair_D926.first = _V0posix;
  _V10_Dpair_D926.rest = VEncodePointer(&_V10_Dpair_D925, VPOINTER_PAIR);
  _V10_Dpair_D925.first = _V0gnu__linux;
  _V10_Dpair_D925.rest = VEncodePointer(&_V10_Dpair_D924, VPOINTER_PAIR);
  _V10_Dpair_D924.first = _V0gnuc;
  _V10_Dpair_D924.rest = VEncodePointer(&_V10_Dpair_D923, VPOINTER_PAIR);
  _V10_Dpair_D923.first = _V0compiled;
  _V10_Dpair_D923.rest = VEncodePointer(&_V10_Dpair_D922, VPOINTER_PAIR);
  _V10_Dpair_D922.first = _V0x86__64;
  _V10_Dpair_D922.rest = VEncodePointer(&_V10_Dpair_D921, VPOINTER_PAIR);
  _V10_Dpair_D921.first = _V0lp64;
  _V10_Dpair_D921.rest = VEncodePointer(&_V10_Dpair_D920, VPOINTER_PAIR);
  _V10_Dpair_D920.first = _V0little__endian;
  _V10_Dpair_D920.rest = VNULL;
  _V10_Dpair_D919.first = VEncodePointer(&_V10_Dpair_D854, VPOINTER_PAIR);
  _V10_Dpair_D919.rest = VEncodePointer(&_V10_Dpair_D918, VPOINTER_PAIR);
  _V10_Dpair_D918.first = VEncodePointer(&_V10_Dpair_D857, VPOINTER_PAIR);
  _V10_Dpair_D918.rest = VEncodePointer(&_V10_Dpair_D917, VPOINTER_PAIR);
  _V10_Dpair_D917.first = VEncodePointer(&_V10_Dpair_D860, VPOINTER_PAIR);
  _V10_Dpair_D917.rest = VEncodePointer(&_V10_Dpair_D916, VPOINTER_PAIR);
  _V10_Dpair_D916.first = VEncodePointer(&_V10_Dpair_D863, VPOINTER_PAIR);
  _V10_Dpair_D916.rest = VEncodePointer(&_V10_Dpair_D915, VPOINTER_PAIR);
  _V10_Dpair_D915.first = VEncodePointer(&_V10_Dpair_D866, VPOINTER_PAIR);
  _V10_Dpair_D915.rest = VEncodePointer(&_V10_Dpair_D914, VPOINTER_PAIR);
  _V10_Dpair_D914.first = VEncodePointer(&_V10_Dpair_D869, VPOINTER_PAIR);
  _V10_Dpair_D914.rest = VEncodePointer(&_V10_Dpair_D913, VPOINTER_PAIR);
  _V10_Dpair_D913.first = VEncodePointer(&_V10_Dpair_D872, VPOINTER_PAIR);
  _V10_Dpair_D913.rest = VEncodePointer(&_V10_Dpair_D912, VPOINTER_PAIR);
  _V10_Dpair_D912.first = VEncodePointer(&_V10_Dpair_D875, VPOINTER_PAIR);
  _V10_Dpair_D912.rest = VEncodePointer(&_V10_Dpair_D911, VPOINTER_PAIR);
  _V10_Dpair_D911.first = VEncodePointer(&_V10_Dpair_D878, VPOINTER_PAIR);
  _V10_Dpair_D911.rest = VEncodePointer(&_V10_Dpair_D910, VPOINTER_PAIR);
  _V10_Dpair_D910.first = VEncodePointer(&_V10_Dpair_D881, VPOINTER_PAIR);
  _V10_Dpair_D910.rest = VEncodePointer(&_V10_Dpair_D909, VPOINTER_PAIR);
  _V10_Dpair_D909.first = VEncodePointer(&_V10_Dpair_D884, VPOINTER_PAIR);
  _V10_Dpair_D909.rest = VEncodePointer(&_V10_Dpair_D908, VPOINTER_PAIR);
  _V10_Dpair_D908.first = VEncodePointer(&_V10_Dpair_D887, VPOINTER_PAIR);
  _V10_Dpair_D908.rest = VEncodePointer(&_V10_Dpair_D907, VPOINTER_PAIR);
  _V10_Dpair_D907.first = VEncodePointer(&_V10_Dpair_D890, VPOINTER_PAIR);
  _V10_Dpair_D907.rest = VEncodePointer(&_V10_Dpair_D906, VPOINTER_PAIR);
  _V10_Dpair_D906.first = VEncodePointer(&_V10_Dpair_D893, VPOINTER_PAIR);
  _V10_Dpair_D906.rest = VEncodePointer(&_V10_Dpair_D905, VPOINTER_PAIR);
  _V10_Dpair_D905.first = VEncodePointer(&_V10_Dpair_D896, VPOINTER_PAIR);
  _V10_Dpair_D905.rest = VEncodePointer(&_V10_Dpair_D904, VPOINTER_PAIR);
  _V10_Dpair_D904.first = VEncodePointer(&_V10_Dpair_D899, VPOINTER_PAIR);
  _V10_Dpair_D904.rest = VEncodePointer(&_V10_Dpair_D903, VPOINTER_PAIR);
  _V10_Dpair_D903.first = VEncodePointer(&_V10_Dpair_D902, VPOINTER_PAIR);
  _V10_Dpair_D903.rest = VNULL;
  _V10_Dpair_D902.first = _V0explain__scopes;
  _V10_Dpair_D902.rest = VEncodePointer(&_V10_Dpair_D901, VPOINTER_PAIR);
  _V10_Dpair_D901.first = VEncodeBool(false);
  _V10_Dpair_D901.rest = VEncodePointer(&_V10_Dpair_D900, VPOINTER_PAIR);
  _V10_Dpair_D900.first = _V0explain__scopes;
  _V10_Dpair_D900.rest = VNULL;
  _V10_Dpair_D899.first = _V0expand__timeout;
  _V10_Dpair_D899.rest = VEncodePointer(&_V10_Dpair_D898, VPOINTER_PAIR);
  _V10_Dpair_D898.first = VEncodeBool(true);
  _V10_Dpair_D898.rest = VEncodePointer(&_V10_Dpair_D897, VPOINTER_PAIR);
  _V10_Dpair_D897.first = _V0expand__timeout;
  _V10_Dpair_D897.rest = VNULL;
  _V10_Dpair_D896.first = _V0trace__expand;
  _V10_Dpair_D896.rest = VEncodePointer(&_V10_Dpair_D895, VPOINTER_PAIR);
  _V10_Dpair_D895.first = VEncodeBool(false);
  _V10_Dpair_D895.rest = VEncodePointer(&_V10_Dpair_D894, VPOINTER_PAIR);
  _V10_Dpair_D894.first = _V0trace__expand;
  _V10_Dpair_D894.rest = VNULL;
  _V10_Dpair_D893.first = _V0verify;
  _V10_Dpair_D893.rest = VEncodePointer(&_V10_Dpair_D892, VPOINTER_PAIR);
  _V10_Dpair_D892.first = VEncodeBool(false);
  _V10_Dpair_D892.rest = VEncodePointer(&_V10_Dpair_D891, VPOINTER_PAIR);
  _V10_Dpair_D891.first = _V0verify;
  _V10_Dpair_D891.rest = VNULL;
  _V10_Dpair_D890.first = _V0hygiene;
  _V10_Dpair_D890.rest = VEncodePointer(&_V10_Dpair_D889, VPOINTER_PAIR);
  _V10_Dpair_D889.first = VEncodeBool(false);
  _V10_Dpair_D889.rest = VEncodePointer(&_V10_Dpair_D888, VPOINTER_PAIR);
  _V10_Dpair_D888.first = _V0hygiene;
  _V10_Dpair_D888.rest = VNULL;
  _V10_Dpair_D887.first = _V0benchmark;
  _V10_Dpair_D887.rest = VEncodePointer(&_V10_Dpair_D886, VPOINTER_PAIR);
  _V10_Dpair_D886.first = VEncodeBool(false);
  _V10_Dpair_D886.rest = VEncodePointer(&_V10_Dpair_D885, VPOINTER_PAIR);
  _V10_Dpair_D885.first = _V0benchmark;
  _V10_Dpair_D885.rest = VNULL;
  _V10_Dpair_D884.first = _V0bytecode;
  _V10_Dpair_D884.rest = VEncodePointer(&_V10_Dpair_D883, VPOINTER_PAIR);
  _V10_Dpair_D883.first = VEncodeBool(false);
  _V10_Dpair_D883.rest = VEncodePointer(&_V10_Dpair_D882, VPOINTER_PAIR);
  _V10_Dpair_D882.first = _V0bytecode;
  _V10_Dpair_D882.rest = VNULL;
  _V10_Dpair_D881.first = _V0maketarget;
  _V10_Dpair_D881.rest = VEncodePointer(&_V10_Dpair_D880, VPOINTER_PAIR);
  _V10_Dpair_D880.first = VEncodeBool(true);
  _V10_Dpair_D880.rest = VEncodePointer(&_V10_Dpair_D879, VPOINTER_PAIR);
  _V10_Dpair_D879.first = _V0maketarget;
  _V10_Dpair_D879.rest = VNULL;
  _V10_Dpair_D878.first = _V0makefile;
  _V10_Dpair_D878.rest = VEncodePointer(&_V10_Dpair_D877, VPOINTER_PAIR);
  _V10_Dpair_D877.first = VEncodeBool(false);
  _V10_Dpair_D877.rest = VEncodePointer(&_V10_Dpair_D876, VPOINTER_PAIR);
  _V10_Dpair_D876.first = _V0makefile;
  _V10_Dpair_D876.rest = VNULL;
  _V10_Dpair_D875.first = _V0keep__temps;
  _V10_Dpair_D875.rest = VEncodePointer(&_V10_Dpair_D874, VPOINTER_PAIR);
  _V10_Dpair_D874.first = VEncodeBool(false);
  _V10_Dpair_D874.rest = VEncodePointer(&_V10_Dpair_D873, VPOINTER_PAIR);
  _V10_Dpair_D873.first = _V0keep__temps;
  _V10_Dpair_D873.rest = VNULL;
  _V10_Dpair_D872.first = _V0version;
  _V10_Dpair_D872.rest = VEncodePointer(&_V10_Dpair_D871, VPOINTER_PAIR);
  _V10_Dpair_D871.first = VEncodeBool(false);
  _V10_Dpair_D871.rest = VEncodePointer(&_V10_Dpair_D870, VPOINTER_PAIR);
  _V10_Dpair_D870.first = _V0version;
  _V10_Dpair_D870.rest = VNULL;
  _V10_Dpair_D869.first = _V0cc;
  _V10_Dpair_D869.rest = VEncodePointer(&_V10_Dpair_D868, VPOINTER_PAIR);
  _V10_Dpair_D868.first = VEncodeBool(true);
  _V10_Dpair_D868.rest = VEncodePointer(&_V10_Dpair_D867, VPOINTER_PAIR);
  _V10_Dpair_D867.first = _V0cc;
  _V10_Dpair_D867.rest = VNULL;
  _V10_Dpair_D866.first = _V0main;
  _V10_Dpair_D866.rest = VEncodePointer(&_V10_Dpair_D865, VPOINTER_PAIR);
  _V10_Dpair_D865.first = VEncodeBool(true);
  _V10_Dpair_D865.rest = VEncodePointer(&_V10_Dpair_D864, VPOINTER_PAIR);
  _V10_Dpair_D864.first = _V0main;
  _V10_Dpair_D864.rest = VNULL;
  _V10_Dpair_D863.first = _V0platform;
  _V10_Dpair_D863.rest = VEncodePointer(&_V10_Dpair_D862, VPOINTER_PAIR);
  _V10_Dpair_D862.first = VEncodeBool(true);
  _V10_Dpair_D862.rest = VEncodePointer(&_V10_Dpair_D861, VPOINTER_PAIR);
  _V10_Dpair_D861.first = _V0platform;
  _V10_Dpair_D861.rest = VNULL;
  _V10_Dpair_D860.first = _V0api;
  _V10_Dpair_D860.rest = VEncodePointer(&_V10_Dpair_D859, VPOINTER_PAIR);
  _V10_Dpair_D859.first = VEncodeBool(true);
  _V10_Dpair_D859.rest = VEncodePointer(&_V10_Dpair_D858, VPOINTER_PAIR);
  _V10_Dpair_D858.first = _V0api;
  _V10_Dpair_D858.rest = VNULL;
  _V10_Dpair_D857.first = _V0help;
  _V10_Dpair_D857.rest = VEncodePointer(&_V10_Dpair_D856, VPOINTER_PAIR);
  _V10_Dpair_D856.first = VEncodeBool(false);
  _V10_Dpair_D856.rest = VEncodePointer(&_V10_Dpair_D855, VPOINTER_PAIR);
  _V10_Dpair_D855.first = _V0help;
  _V10_Dpair_D855.rest = VNULL;
  _V10_Dpair_D854.first = _V0shared;
  _V10_Dpair_D854.rest = VEncodePointer(&_V10_Dpair_D853, VPOINTER_PAIR);
  _V10_Dpair_D853.first = VEncodeBool(false);
  _V10_Dpair_D853.rest = VEncodePointer(&_V10_Dpair_D852, VPOINTER_PAIR);
  _V10_Dpair_D852.first = _V0shared;
  _V10_Dpair_D852.rest = VNULL;
  _V10_Dpair_D850.first = VEncodePointer(&_V10_Dstring_D761.sym, VPOINTER_OTHER);
  _V10_Dpair_D850.rest = VEncodePointer(&_V10_Dpair_D849, VPOINTER_PAIR);
  _V10_Dpair_D849.first = VEncodePointer(&_V10_Dstring_D762.sym, VPOINTER_OTHER);
  _V10_Dpair_D849.rest = VEncodePointer(&_V10_Dpair_D765, VPOINTER_PAIR);
  _V10_Dpair_D766.first = VEncodePointer(&_V10_Dstring_D761.sym, VPOINTER_OTHER);
  _V10_Dpair_D766.rest = VNULL;
  _V10_Dpair_D765.first = VEncodePointer(&_V10_Dstring_D764.sym, VPOINTER_OTHER);
  _V10_Dpair_D765.rest = VNULL;
  _V10_Dpair_D763.first = VEncodePointer(&_V10_Dstring_D762.sym, VPOINTER_OTHER);
  _V10_Dpair_D763.rest = VNULL;
}
static void toplevel0(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda1, self)), 1,
      _k);
}
static void toplevel1(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda2, self)), 1,
      _k);
}
static void toplevel2(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda3, self)), 1,
      _k);
}
static void toplevel3(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda4, self)), 1,
      _k);
}
static void toplevel4(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda5, self)), 1,
      _k);
}
static void toplevel5(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda6, self)), 1,
      _k);
}
static void toplevel6(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda7, self)), 1,
      _k);
}
static void toplevel7(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda8, self)), 1,
      _k);
}
static void toplevel8(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda9, self)), 1,
      _k);
}
static void toplevel9(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda10, self)), 1,
      _k);
}
static void toplevel10(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda11, self)), 1,
      _k);
}
static void toplevel11(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda12, self)), 1,
      _k);
}
static void toplevel12(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda13, self)), 1,
      _k);
}
static void toplevel13(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda14, self)), 1,
      _k);
}
static void toplevel14(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda15, self)), 1,
      _k);
}
static void toplevel15(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda16, self)), 1,
      _k);
}
static void toplevel16(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda17, self)), 1,
      _k);
}
static void toplevel17(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda18, self)), 1,
      _k);
}
static void toplevel18(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda19, self)), 1,
      _k);
}
static void toplevel19(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda20, self)), 1,
      _k);
}
static void toplevel20(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda21, self)), 1,
      _k);
}
static void toplevel21(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda22, self)), 1,
      _k);
}
static void toplevel22(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda23, self)), 1,
      _k);
}
static void toplevel23(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda24, self)), 1,
      _k);
}
static void toplevel24(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda25, self)), 1,
      _k);
}
static void toplevel25(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda26, self)), 1,
      _k);
}
static void toplevel26(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda27, self)), 1,
      _k);
}
static void toplevel27(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda28, self)), 1,
      _k);
}
static void toplevel28(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda29, self)), 1,
      _k);
}
static void toplevel29(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda30, self)), 1,
      _k);
}
static void toplevel30(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda31, self)), 1,
      _k);
}
static void toplevel31(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda32, self)), 1,
      _k);
}
static void toplevel32(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda33, self)), 1,
      _k);
}
static void toplevel33(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda34, self)), 1,
      _k);
}
static void toplevel34(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda35, self)), 1,
      _k);
}
static void toplevel35(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda36, self)), 1,
      _k);
}
static void toplevel36(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda37, self)), 1,
      _k);
}
static void toplevel37(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda38, self)), 1,
      _k);
}
static void toplevel38(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda39, self)), 1,
      _k);
}
static void toplevel39(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda40, self)), 1,
      _k);
}
static void toplevel40(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda41, self)), 1,
      _k);
}
static void toplevel41(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda42, self)), 1,
      _k);
}
static void toplevel42(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda43, self)), 1,
      _k);
}
static void toplevel43(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda44, self)), 1,
      _k);
}
static void toplevel44(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda45, self)), 1,
      _k);
}
static void toplevel45(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda46, self)), 1,
      _k);
}
static void toplevel46(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda47, self)), 1,
      _k);
}
static void toplevel47(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda48, self)), 1,
      _k);
}
static void toplevel48(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda49, self)), 1,
      _k);
}
static void toplevel49(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda50, self)), 1,
      _k);
}
static void toplevel50(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda51, self)), 1,
      _k);
}
static void toplevel51(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda52, self)), 1,
      _k);
}
static void toplevel52(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda53, self)), 1,
      _k);
}
static void toplevel53(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda54, self)), 1,
      _k);
}
static void toplevel54(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda57, self)), 1,
      _k);
}
static void toplevel55(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda59, self)), 1,
      _k);
}
static void toplevel56(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda61, self)), 1,
      _k);
}
static void toplevel57(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda63, self)), 1,
      _k);
}
static void toplevel58(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda65, self)), 1,
      _k);
}
static void toplevel59(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda67, self)), 1,
      _k);
}
static void toplevel60(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda69, self)), 1,
      _k);
}
static void toplevel61(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda71, self)), 1,
      _k);
}
static void toplevel62(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda73, self)), 1,
      _k);
}
static void toplevel63(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda75, self)), 1,
      _k);
}
static void toplevel64(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda80, self)), 1,
      _k);
}
static void toplevel65(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda84, self)), 1,
      _k);
}
static void toplevel66(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda87, self)), 1,
      _k);
}
static void toplevel67(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda89, self)), 1,
      _k);
}
static void toplevel68(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda92, self)), 1,
      _k);
}
static void toplevel69(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda94, self)), 1,
      _k);
}
static void toplevel70(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda95, self)), 1,
      _k);
}
static void toplevel71(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda96, self)), 1,
      _k);
}
static void toplevel72(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda97, self)), 1,
      _k);
}
static void toplevel73(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda98, self)), 1,
      _k);
}
static void toplevel74(V_CORE_ARGS, VWORD _k) {
    VEnv * self = NULL;
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)global_V0lambda124, self)), 1,
      _k);
}
VClosure VanityToplevels[] = {
  { .base.tag = VCLOSURE, .func = (VFunc)toplevel0
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel1
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel2
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel3
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel4
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel5
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel6
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel7
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel8
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel9
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel10
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel11
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel12
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel13
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel14
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel15
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel16
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel17
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel18
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel19
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel20
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel21
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel22
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel23
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel24
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel25
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel26
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel27
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel28
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel29
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel30
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel31
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel32
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel33
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel34
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel35
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel36
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel37
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel38
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel39
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel40
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel41
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel42
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel43
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel44
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel45
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel46
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel47
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel48
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel49
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel50
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel51
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel52
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel53
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel54
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel55
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel56
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel57
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel58
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel59
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel60
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel61
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel62
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel63
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel64
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel65
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel66
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel67
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel68
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel69
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel70
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel71
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel72
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel73
, .env = NULL },  { .base.tag = VCLOSURE, .func = (VFunc)toplevel74
, .env = NULL },};
int VanityToplevelCount = sizeof VanityToplevels / sizeof *VanityToplevels;
#include <stdlib.h>
int VanityCurToplevel;
VRuntime * VanityRuntime;
int VanityStatus;
void VanityMainLoop() {
  if(VanityStatus == VEXITED)
    return;
  bool dotoplevel = VanityCurToplevel < VanityToplevelCount;
  VClosure * thunk = dotoplevel ? &VanityToplevels[VanityCurToplevel]
                                : (VClosure[]){VMakeClosure2((VFunc)VExit2, NULL)};
  VanityStatus = VExecute(VanityRuntime, thunk);
  if(VanityStatus == VEXITED) {
    int ret = VDecodeExitCode(VGetExitCode(VanityRuntime));
    VDestroyRuntime(VanityRuntime);
    VReallyExit(ret);
  }
  if(VanityStatus == VFINISHED)
    VanityCurToplevel++;
}

int main(int argc, char ** argv) {
  VInitRuntime2(&VanityRuntime, argc, argv);
  while(1) VanityMainLoop();
}
