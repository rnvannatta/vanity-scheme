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
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1878 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1877 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D1876 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D1875 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0match_V20" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D1874 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "_V0vanity_V0compiler_V0variables_V20" };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D1873 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "_V0vanity_V0compiler_V0ffi_V20" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D1872 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "_V0vanity_V0intrinsics_V20" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D1871 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "_V0vanity_V0compiler_V0transpile_V20" };
VWEAK VWORD _V0reverse;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0reverse = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "reverse" };
VWEAK VWORD _V0compiler__error;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0compiler__error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "compiler-error" };
VWEAK VWORD _V0for__each;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0for__each = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "for-each" };
VWEAK VWORD _V0print__foreign__function;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V0print__foreign__function = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "print-foreign-function" };
VWEAK VWORD _V0displayln;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0displayln = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "displayln" };
VWEAK VWORD _V0_L;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_L = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "<" };
VWEAK VWORD _V0close__port;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0close__port = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "close-port" };
VWEAK VWORD _V0get__output__string;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0get__output__string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "get-output-string" };
VWEAK VWORD _V0open__output__string;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0open__output__string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "open-output-string" };
VWEAK VWORD _V0number_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0number_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "number\?" };
VWEAK VWORD _V0caar;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0caar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "caar" };
VWEAK VWORD _V0cadar;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0cadar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "cadar" };
VWEAK VWORD _V0mangle__symbol;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0mangle__symbol = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "mangle-symbol" };
VWEAK VWORD _V0lookup__inline__name;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0lookup__inline__name = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "lookup-inline-name" };
VWEAK VWORD _V0display;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0display = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "display" };
VWEAK VWORD _V0lookup__intrinsic__name;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V0lookup__intrinsic__name = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "lookup-intrinsic-name" };
VWEAK VWORD _V0cadr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cadr" };
VWEAK VWORD _V0list__ref;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0list__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "list-ref" };
VWEAK VWORD _V0_E;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_E = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "=" };
VWEAK VWORD _V0append;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0append = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "append" };
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "error" };
VWEAK VWORD _V0map;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "map" };
VWEAK VWORD _V0cddr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cddr" };
VWEAK VWORD _V0iota;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0iota = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "iota" };
VWEAK VWORD _V0length;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "length" };
VWEAK VWORD _V0printf;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0printf = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "printf" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
VWEAK VWORD _V0sprintf;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0sprintf = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "sprintf" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D1870 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VDllMain~A" };
VWEAK VWORD _V0printout2;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0printout2 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "printout2" };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D1869 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "#include \"vscheme/vruntime.h\"" };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D1868 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "#include \"vscheme/vlibrary.h\"" };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D1867 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "#include \"vscheme/vinlines.h\"" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D1866 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "#include <stdarg.h>" };
static struct { VBlob sym; char bytes[51]; } _V10_Dstring_D1865 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 51 }, "shared library has toplevel expressions or defines" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D1864 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "#include <stdlib.h>" };
static struct { VBlob sym; char bytes[23]; } _V10_Dstring_D1863 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, "int VanityCurToplevel;" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D1862 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "VRuntime * VanityRuntime;" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D1861 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "int VanityStatus;" };
static struct { VBlob sym; char bytes[24]; } _V10_Dstring_D1860 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "void VanityMainLoop() {" };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D1859 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "  if(VanityStatus == VEXITED)" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D1858 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "    return;" };
static struct { VBlob sym; char bytes[61]; } _V10_Dstring_D1857 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 61 }, "  bool dotoplevel = VanityCurToplevel < VanityToplevelCount;" };
static struct { VBlob sym; char bytes[70]; } _V10_Dstring_D1856 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 70 }, "  VClosure * thunk = dotoplevel \? &VanityToplevels[VanityCurToplevel]" };
static struct { VBlob sym; char bytes[84]; } _V10_Dstring_D1855 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 84 }, "                                : (VClosure[]){VMakeClosure2((VFunc)VExit2, NULL)};" };
static struct { VBlob sym; char bytes[49]; } _V10_Dstring_D1854 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 49 }, "  VanityStatus = VExecute(VanityRuntime, thunk);" };
static struct { VBlob sym; char bytes[32]; } _V10_Dstring_D1853 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 32 }, "  if(VanityStatus == VEXITED) {" };
static struct { VBlob sym; char bytes[60]; } _V10_Dstring_D1852 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 60 }, "    int ret = VDecodeExitCode(VGetExitCode(VanityRuntime));" };
static struct { VBlob sym; char bytes[36]; } _V10_Dstring_D1851 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 36 }, "    VDestroyRuntime(VanityRuntime);" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D1850 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "    exit(ret);" };
static struct { VBlob sym; char bytes[4]; } _V10_Dstring_D1849 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, "  }" };
static struct { VBlob sym; char bytes[32]; } _V10_Dstring_D1848 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 32 }, "  if(VanityStatus == VFINISHED)" };
static struct { VBlob sym; char bytes[25]; } _V10_Dstring_D1847 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 25 }, "    VanityCurToplevel++;" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D1846 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "none" };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D1845 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "emscripten-loop" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D1844 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "winmain" };
static struct { VBlob sym; char bytes[93]; } _V10_Dstring_D1843 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 93 }, "int __stdcall WinMain(void* hInstance, void* hPrevInstance, char* lpCmdLine, int nShowCmd) {" };
static struct { VBlob sym; char bytes[49]; } _V10_Dstring_D1842 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 49 }, "  VInitRuntime2(&VanityRuntime, __argc, __argv);" };
static struct { VBlob sym; char bytes[29]; } _V10_Dstring_D1841 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 29 }, "  while(1) VanityMainLoop();" };
static struct { VBlob sym; char bytes[35]; } _V10_Dstring_D1840 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 35 }, "#include <emscripten/emscripten.h>" };
static struct { VBlob sym; char bytes[35]; } _V10_Dstring_D1839 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 35 }, "int main(int argc, char ** argv) {" };
static struct { VBlob sym; char bytes[45]; } _V10_Dstring_D1838 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 45 }, "  VInitRuntime2(&VanityRuntime, argc, argv);" };
static struct { VBlob sym; char bytes[50]; } _V10_Dstring_D1837 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 50 }, "  emscripten_set_main_loop(VanityMainLoop, 0, 1);" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D1836 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "VClosure VanityToplevels[] = {~N" };
static struct { VBlob sym; char bytes[70]; } _V10_Dstring_D1835 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 70 }, "  { .base.tag = VCLOSURE, .func = (VFunc)toplevel~A~N, .env = NULL }," };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D1834 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "};~N" };
static struct { VBlob sym; char bytes[78]; } _V10_Dstring_D1833 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 78 }, "int VanityToplevelCount = sizeof VanityToplevels / sizeof *VanityToplevels;~N" };
static struct { VBlob sym; char bytes[68]; } _V10_Dstring_D1832 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 68 }, "__attribute__((constructor)) static void VRegisterAllDeclares() {~N" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D1831 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "print-declaretable: unknown form" };
static struct { VBlob sym; char bytes[29]; } _V10_Dstring_D1830 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 29 }, "  VRegisterSym(\"~A\", &~A);~N" };
static struct { VBlob sym; char bytes[28]; } _V10_Dstring_D1829 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 28 }, "print-declare: unknown form" };
static struct { VBlob sym; char bytes[24]; } _V10_Dstring_D1828 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "VFunc ~A = (VFunc)~A;~N" };
static struct { VBlob sym; char bytes[36]; } _V10_Dstring_D1827 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 36 }, "print-foreign-declare: unknown form" };
VWEAK VWORD _V10vcore_Ddeclare;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Ddeclare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.declare" };
VWEAK VWORD _V10foreign_Ddeclare;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10foreign_Ddeclare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##foreign.declare" };
static struct { VBlob sym; char bytes[50]; } _V10_Dstring_D1826 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 50 }, "static void toplevel~A(V_CORE_ARGS, VWORD _k) {~N" };
static struct { VBlob sym; char bytes[24]; } _V10_Dstring_D1825 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "    VEnv * self = NULL;" };
static struct { VBlob sym; char bytes[55]; } _V10_Dstring_D1824 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 55 }, "static V_BEGIN_FUNC(toplevel~A, \"toplevel~A\", 1, _k)~N" };
static struct { VBlob sym; char bytes[17]; } _V10_Dstring_D1823 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "    self = NULL;" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1822 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_k" };
VWEAK VWORD _V0k;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0k = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "k" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D1821 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "_V20Case~A_~A" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D1820 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, " // ~S~N" };
static struct { VBlob sym; char bytes[61]; } _V10_Dstring_D1819 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 61 }, " VErrorC(runtime, \"Not enough arguments to ~A, got ~~D~~N\"~N" };
static struct { VBlob sym; char bytes[23]; } _V10_Dstring_D1818 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, " \"-- expected ~A~~N\"~N" };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D1817 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, " \"-- expected ~A or more~~N\"~N" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D1816 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, " , argc);~N" };
static struct { VBlob sym; char bytes[62]; } _V10_Dstring_D1815 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 62 }, "void ~A(VRuntime * runtime, VEnv * statics, int argc, ...);~N" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D1814 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "asm(~N" };
static struct { VBlob sym; char bytes[29]; } _V10_Dstring_D1813 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 29 }, "\".intel_syntax noprefix\\n\"~N" };
static struct { VBlob sym; char bytes[19]; } _V10_Dstring_D1812 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, "#ifdef __linux__~N" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D1811 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "\".type ~A, @function\\n\"~N" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D1810 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "#endif~N" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D1809 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "\"~A:\\n\"~N" };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D1808 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "\"    je ~A\\n\"~N" };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D1807 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "\"    cmp \" ARGC_REG \", ~A\\n\"~N" };
static struct { VBlob sym; char bytes[17]; } _V10_Dstring_D1806 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "\"    jge ~A\\n\"~N" };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D1805 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "\"    jmp _V20CaseError_~A\\n\"~N" };
static struct { VBlob sym; char bytes[32]; } _V10_Dstring_D1804 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 32 }, "V_BEGIN_FUNC_MIN(~A, \"~A\", 0)~N" };
static struct { VBlob sym; char bytes[42]; } _V10_Dstring_D1803 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 42 }, "  VFunc func = (VFunc)_V20CaseError_~A;~N" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D1802 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "  if(0)~N" };
static struct { VBlob sym; char bytes[17]; } _V10_Dstring_D1801 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "    /*dummy*/;~N" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D1800 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "match statement exhausted" };
static struct { VBlob sym; char bytes[24]; } _V10_Dstring_D1799 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "  else if(argc == ~A)~N" };
VWEAK VWORD _V0_P;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_P = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "+" };
static struct { VBlob sym; char bytes[24]; } _V10_Dstring_D1798 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "  else if(argc >= ~A)~N" };
static struct { VBlob sym; char bytes[24]; } _V10_Dstring_D1797 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "    func = (VFunc)~A;~N" };
static struct { VBlob sym; char bytes[40]; } _V10_Dstring_D1796 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 40 }, "  func(runtime, statics, argc, self);~N" };
static struct { VBlob sym; char bytes[106]; } _V10_Dstring_D1795 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 106 }, "__attribute__((used)) static void _V20CaseError_~A(VRuntime * runtime, VEnv * statics, int argc, ...) {~N" };
static struct { VBlob sym; char bytes[89]; } _V10_Dstring_D1794 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 89 }, "__attribute__((used)) static V_BEGIN_FUNC_MIN(_V20CaseError_~A, \"_V20CaseError_~A\", 0)~N" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D1793 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "  // ~S~N" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D1792 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "_varargs" };
static struct { VBlob sym; char bytes[53]; } _V10_Dstring_D1791 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 53 }, "  struct { VEnv self; VWORD argv[~A]; } container;~N" };
static struct { VBlob sym; char bytes[35]; } _V10_Dstring_D1790 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 35 }, "  VEnv * self = &container.self;~N" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D1789 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "  VInitEnv(self, ~A, ~A, statics);~N" };
static struct { VBlob sym; char bytes[25]; } _V10_Dstring_D1788 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 25 }, "  self->vars[~A] = ~A;~N" };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D1787 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "  self->vars[~A] = _varargs;~N" };
static struct { VBlob sym; char bytes[55]; } _V10_Dstring_D1786 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 55 }, " V_GATHER_VARARGS_VARIADIC(&_varargs, ~A, argc, ~A);~N" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D1785 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "argc" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D1784 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, " VWORD _varargs = VNULL;~N" };
static struct { VBlob sym; char bytes[48]; } _V10_Dstring_D1783 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 48 }, " V_GATHER_VARARGS_PUREC(&_varargs, ~A, argc);~N" };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D1782 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, " self->vars[~A] = _varargs;~N" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D1781 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, " if(argc != ~A) {~N" };
static struct { VBlob sym; char bytes[24]; } _V10_Dstring_D1780 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "  \"-- expected ~A~~N\"~N" };
static struct { VBlob sym; char bytes[19]; } _V10_Dstring_D1779 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, " if(argc < ~A) {~N" };
static struct { VBlob sym; char bytes[62]; } _V10_Dstring_D1778 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 62 }, "  VErrorC(runtime, \"Not enough arguments to ~A, got ~~D~~N\"~N" };
static struct { VBlob sym; char bytes[32]; } _V10_Dstring_D1777 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 32 }, "  \"-- expected ~A or more~~N\"~N" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D1776 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "  , argc);~N" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D1775 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, " }~N" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D1774 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, " static VDebugInfo dbg = { \"~A\" };~N" };
static struct { VBlob sym; char bytes[32]; } _V10_Dstring_D1773 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 32 }, " VRecordCall2(runtime, &dbg);~N" };
static struct { VBlob sym; char bytes[60]; } _V10_Dstring_D1772 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 60 }, "static void ~A(VRuntime * runtime, VEnv * statics, int argc" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D1771 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, ", VWORD ~A" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1770 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, ") {~N" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1769 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, ", ..." };
static struct { VBlob sym; char bytes[35]; } _V10_Dstring_D1768 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 35 }, "static V_BEGIN_FUNC~A(~A, \"~A\", ~A" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D1767 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, ", ~A" };
static struct { VBlob sym; char bytes[4]; } _V10_Dstring_D1766 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, ")~N" };
static struct { VBlob sym; char bytes[1]; } _V10_Dstring_D1765 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 1 }, "" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D1764 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "_MIN" };
static struct { VBlob sym; char bytes[23]; } _V10_Dstring_D1763 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, "__attribute__((used)) " };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D1762 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "_var~A" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D1761 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "print-expr: malformed expression" };
VWEAK VWORD _V10foreign_Dfunction;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10foreign_Dfunction = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##foreign.function" };
static struct { VBlob sym; char bytes[65]; } _V10_Dstring_D1760 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 65 }, "(VEncodeClosure(((VClosure[]){VMakeClosure2((VFunc)~A, NULL)})))" };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D1759 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "if(VDecodeBool(" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D1758 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, ")) {" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D1757 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "} else {" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D1756 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "}" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D1755 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "VGetArg(statics, ~A-1, ~A)" };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D1754 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "statics->up->up->up->vars[~A]" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D1753 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "statics->up->up->vars[~A]" };
static struct { VBlob sym; char bytes[22]; } _V10_Dstring_D1752 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "statics->up->vars[~A]" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D1751 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "statics->vars[~A]" };
static struct { VBlob sym; char bytes[63]; } _V10_Dstring_D1750 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 63 }, "(VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)~A, self)}))" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1749 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "VNULL" };
static struct { VBlob sym; char bytes[22]; } _V10_Dstring_D1748 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "~A(runtime,~N        " };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D1747 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, ",~N        " };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D1746 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "unknown inline" };
static struct { VBlob sym; char bytes[38]; } _V10_Dstring_D1745 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 38 }, "set!'s first argument is not a symbol" };
static struct { VBlob sym; char bytes[63]; } _V10_Dstring_D1744 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 63 }, "    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,~N      " };
static struct { VBlob sym; char bytes[55]; } _V10_Dstring_D1743 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 55 }, "    V_CALL_FUNC(VSetGlobalVar2, NULL, runtime,~N      " };
static struct { VBlob sym; char bytes[24]; } _V10_Dstring_D1742 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "print-set: unknown form" };
static struct { VBlob sym; char bytes[51]; } _V10_Dstring_D1741 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 51 }, ",~N      VEncodeInt(~Al), VEncodeInt(~Al),~N      " };
static struct { VBlob sym; char bytes[105]; } _V10_Dstring_D1740 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 105 }, "    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,~N      " };
static struct { VBlob sym; char bytes[110]; } _V10_Dstring_D1739 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 110 }, "    V_CALL((VEncodeClosure(((VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }))), runtime,~N      " };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D1738 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "~N    );~N" };
static struct { VBlob sym; char bytes[66]; } _V10_Dstring_D1737 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 66 }, "    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,~N      " };
static struct { VBlob sym; char bytes[58]; } _V10_Dstring_D1736 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 58 }, "    V_CALL_FUNC(VDefineGlobalVar2, NULL, runtime,~N      " };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1735 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "    {" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D1734 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "    VEnv * statics = self;" };
static struct { VBlob sym; char bytes[39]; } _V10_Dstring_D1733 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 39 }, "    VInitEnv(self, ~A, ~A, statics);~N" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D1732 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "self->vars[~A]" };
static struct { VBlob sym; char bytes[22]; } _V10_Dstring_D1731 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "    self->vars[~A] = " };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D1730 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, ";" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1729 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "    }" };
static struct { VBlob sym; char bytes[55]; } _V10_Dstring_D1728 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 55 }, "    struct { VEnv self; VWORD argv[~A]; } container;~N" };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D1727 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "    self = &container.self;~N" };
static struct { VBlob sym; char bytes[53]; } _V10_Dstring_D1726 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 53 }, "    self = alloca(sizeof(VEnv)+sizeof(VWORD[~A]));~N" };
static struct { VBlob sym; char bytes[63]; } _V10_Dstring_D1725 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 63 }, "    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, " };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1724 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "), ~A" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D1723 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "    V_CALL(" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D1722 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, ", runtime" };
static struct { VBlob sym; char bytes[88]; } _V10_Dstring_D1721 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 88 }, "    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)~A, .env = self }, }, ~A" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D1720 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, ");~N" };
static struct { VBlob sym; char bytes[43]; } _V10_Dstring_D1719 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 43 }, "    VCallFuncWithGC(runtime, (VFunc)~A, ~A" };
static struct { VBlob sym; char bytes[41]; } _V10_Dstring_D1718 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 41 }, "    V_CALL_FUNC((VFunc)~A, self, runtime" };
static struct { VBlob sym; char bytes[25]; } _V10_Dstring_D1717 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 25 }, "_VBasic_~A(runtime, NULL" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D1716 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, ",~N      " };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D1715 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, ")" };
static struct { VBlob sym; char bytes[46]; } _V10_Dstring_D1714 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 46 }, "basic expression that isn't an intrinsic call" };
static struct { VBlob sym; char bytes[22]; } _V10_Dstring_D1713 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "closes\?: unknown form" };
VWEAK VWORD _V0basic__block;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0basic__block = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "basic-block" };
VWEAK VWORD _V0letrec;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0letrec = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "letrec" };
VWEAK VWORD _V10inline;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V10inline = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "##inline" };
VWEAK VWORD _V0define;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0define = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "define" };
VWEAK VWORD _V0set_B;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "set!" };
VWEAK VWORD _V0if;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0if = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "if" };
VWEAK VWORD _V10string;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V10string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "##string" };
VWEAK VWORD _V0bruijn;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0bruijn = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "bruijn" };
VWEAK VWORD _V0quote;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0quote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "quote" };
VWEAK VWORD _V0close;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0close = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "close" };
static struct { VBlob sym; char bytes[50]; } _V10_Dstring_D1712 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 50 }, "static __attribute__((constructor)) void ~A() {~N" };
static struct { VBlob sym; char bytes[4]; } _V10_Dstring_D1711 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, "}~N" };
static struct { VBlob sym; char bytes[86]; } _V10_Dstring_D1710 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 86 }, "  _V40~A = VEncodePointer(VLookupConstant(\"_V40~A\", &_VW_V40~A), VPOINTER_CLOSURE);~N" };
static struct { VBlob sym; char bytes[72]; } _V10_Dstring_D1709 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 72 }, "  ~A = VEncodePointer(VLookupConstant(\"~A\", &_VW~A), VPOINTER_OTHER);~N" };
static struct { VBlob sym; char bytes[52]; } _V10_Dstring_D1708 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 52 }, "print-literal-table: unknown entry in literal table" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D1707 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "VWEAK VWORD _V40~A;" };
static struct { VBlob sym; char bytes[102]; } _V10_Dstring_D1706 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 102 }, "VWEAK VClosure _VW_V40~A = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)~A, NULL };~N" };
VWEAK VWORD _V10intrinsic;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10intrinsic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##intrinsic" };
static struct { VBlob sym; char bytes[139]; } _V10_Dstring_D1705 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 139 }, "static struct { VBlob sym; char bytes[~A]; } ~A = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, ~A }, \"~A\" };~N" };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D1704 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "VWEAK VWORD ~A;" };
static struct { VBlob sym; char bytes[123]; } _V10_Dstring_D1703 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 123 }, "VWEAK struct { VBlob sym; char bytes[~A]; } _VW~A = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, ~A }, \"~A\" };~N" };
static struct { VBlob sym; char bytes[36]; } _V10_Dstring_D1702 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 36 }, "print-literal: unknown literal type" };
static struct { VBlob sym; char bytes[19]; } _V10_Dstring_D1701 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, "VEncodeBool(false)" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D1700 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "VEncodeBool(true)" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D1699 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "VEncodeChar('~A')" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D1698 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "VNULLPTR" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1697 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "VVOID" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D1696 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "VEncodeNumber(~A)" };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D1695 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "VEncodeInt(~Al)" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D1694 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "_V40~A" };
static struct { VBlob sym; char bytes[40]; } _V10_Dstring_D1693 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 40 }, "VEncodePointer(&~A.sym, VPOINTER_OTHER)" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1692 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "\\'" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1691 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "\\\\" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1690 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "\\\?" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1689 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "\\r" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1688 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "\\n" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1687 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "\\t" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1686 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "\\b" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1685 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "\\a" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D1684 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "VLookupGlobalVarFast2(runtime, \"~A\")" };
static struct { VBlob sym; char bytes[64]; } _V10_Dstring_D1683 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 64 }, "(VEncodeClosure(((VClosure[]){VMakeClosure2((VFunc)~A,NULL)})))" };
static __attribute__((constructor)) void VDllMain1() {
  _V0reverse = VEncodePointer(VLookupConstant("_V0reverse", &_VW_V0reverse), VPOINTER_OTHER);
  _V0compiler__error = VEncodePointer(VLookupConstant("_V0compiler__error", &_VW_V0compiler__error), VPOINTER_OTHER);
  _V0for__each = VEncodePointer(VLookupConstant("_V0for__each", &_VW_V0for__each), VPOINTER_OTHER);
  _V0print__foreign__function = VEncodePointer(VLookupConstant("_V0print__foreign__function", &_VW_V0print__foreign__function), VPOINTER_OTHER);
  _V0displayln = VEncodePointer(VLookupConstant("_V0displayln", &_VW_V0displayln), VPOINTER_OTHER);
  _V0_L = VEncodePointer(VLookupConstant("_V0_L", &_VW_V0_L), VPOINTER_OTHER);
  _V0close__port = VEncodePointer(VLookupConstant("_V0close__port", &_VW_V0close__port), VPOINTER_OTHER);
  _V0get__output__string = VEncodePointer(VLookupConstant("_V0get__output__string", &_VW_V0get__output__string), VPOINTER_OTHER);
  _V0open__output__string = VEncodePointer(VLookupConstant("_V0open__output__string", &_VW_V0open__output__string), VPOINTER_OTHER);
  _V0number_Q = VEncodePointer(VLookupConstant("_V0number_Q", &_VW_V0number_Q), VPOINTER_OTHER);
  _V0caar = VEncodePointer(VLookupConstant("_V0caar", &_VW_V0caar), VPOINTER_OTHER);
  _V0cadar = VEncodePointer(VLookupConstant("_V0cadar", &_VW_V0cadar), VPOINTER_OTHER);
  _V0mangle__symbol = VEncodePointer(VLookupConstant("_V0mangle__symbol", &_VW_V0mangle__symbol), VPOINTER_OTHER);
  _V0lookup__inline__name = VEncodePointer(VLookupConstant("_V0lookup__inline__name", &_VW_V0lookup__inline__name), VPOINTER_OTHER);
  _V0display = VEncodePointer(VLookupConstant("_V0display", &_VW_V0display), VPOINTER_OTHER);
  _V0lookup__intrinsic__name = VEncodePointer(VLookupConstant("_V0lookup__intrinsic__name", &_VW_V0lookup__intrinsic__name), VPOINTER_OTHER);
  _V0cadr = VEncodePointer(VLookupConstant("_V0cadr", &_VW_V0cadr), VPOINTER_OTHER);
  _V0list__ref = VEncodePointer(VLookupConstant("_V0list__ref", &_VW_V0list__ref), VPOINTER_OTHER);
  _V0_E = VEncodePointer(VLookupConstant("_V0_E", &_VW_V0_E), VPOINTER_OTHER);
  _V0append = VEncodePointer(VLookupConstant("_V0append", &_VW_V0append), VPOINTER_OTHER);
  _V0error = VEncodePointer(VLookupConstant("_V0error", &_VW_V0error), VPOINTER_OTHER);
  _V0map = VEncodePointer(VLookupConstant("_V0map", &_VW_V0map), VPOINTER_OTHER);
  _V0cddr = VEncodePointer(VLookupConstant("_V0cddr", &_VW_V0cddr), VPOINTER_OTHER);
  _V0iota = VEncodePointer(VLookupConstant("_V0iota", &_VW_V0iota), VPOINTER_OTHER);
  _V0length = VEncodePointer(VLookupConstant("_V0length", &_VW_V0length), VPOINTER_OTHER);
  _V0printf = VEncodePointer(VLookupConstant("_V0printf", &_VW_V0printf), VPOINTER_OTHER);
  _V0equal_Q = VEncodePointer(VLookupConstant("_V0equal_Q", &_VW_V0equal_Q), VPOINTER_OTHER);
  _V0sprintf = VEncodePointer(VLookupConstant("_V0sprintf", &_VW_V0sprintf), VPOINTER_OTHER);
  _V0printout2 = VEncodePointer(VLookupConstant("_V0printout2", &_VW_V0printout2), VPOINTER_OTHER);
  _V10vcore_Ddeclare = VEncodePointer(VLookupConstant("_V10vcore_Ddeclare", &_VW_V10vcore_Ddeclare), VPOINTER_OTHER);
  _V10foreign_Ddeclare = VEncodePointer(VLookupConstant("_V10foreign_Ddeclare", &_VW_V10foreign_Ddeclare), VPOINTER_OTHER);
  _V0k = VEncodePointer(VLookupConstant("_V0k", &_VW_V0k), VPOINTER_OTHER);
  _V0_P = VEncodePointer(VLookupConstant("_V0_P", &_VW_V0_P), VPOINTER_OTHER);
  _V10foreign_Dfunction = VEncodePointer(VLookupConstant("_V10foreign_Dfunction", &_VW_V10foreign_Dfunction), VPOINTER_OTHER);
  _V0basic__block = VEncodePointer(VLookupConstant("_V0basic__block", &_VW_V0basic__block), VPOINTER_OTHER);
  _V0letrec = VEncodePointer(VLookupConstant("_V0letrec", &_VW_V0letrec), VPOINTER_OTHER);
  _V10inline = VEncodePointer(VLookupConstant("_V10inline", &_VW_V10inline), VPOINTER_OTHER);
  _V0define = VEncodePointer(VLookupConstant("_V0define", &_VW_V0define), VPOINTER_OTHER);
  _V0set_B = VEncodePointer(VLookupConstant("_V0set_B", &_VW_V0set_B), VPOINTER_OTHER);
  _V0if = VEncodePointer(VLookupConstant("_V0if", &_VW_V0if), VPOINTER_OTHER);
  _V10string = VEncodePointer(VLookupConstant("_V10string", &_VW_V10string), VPOINTER_OTHER);
  _V0bruijn = VEncodePointer(VLookupConstant("_V0bruijn", &_VW_V0bruijn), VPOINTER_OTHER);
  _V0quote = VEncodePointer(VLookupConstant("_V0quote", &_VW_V0quote), VPOINTER_OTHER);
  _V0close = VEncodePointer(VLookupConstant("_V0close", &_VW_V0close), VPOINTER_OTHER);
  _V10intrinsic = VEncodePointer(VLookupConstant("_V10intrinsic", &_VW_V10intrinsic), VPOINTER_OTHER);
}
static void _V10_Dprint__global_D235_k37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__global_D235_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.builtin.257 0 0) ((bruijn ##.x.669 7 0) (bruijn ##.k.673 1 0) (##string ##.string.1683) (bruijn ##.builtin.257 0 0)) ((bruijn ##.x.669 7 0) (bruijn ##.k.673 1 0) (##string ##.string.1684) (bruijn ##.sym.256 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1683.sym, VPOINTER_OTHER),
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1684.sym, VPOINTER_OTHER),
      statics->vars[1]);
}
}
static void _V10_Dprint__global_D235_lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__global_D235_lambda3, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.x.659 16 0) (close _V10_Dprint__global_D235_k37) (bruijn ##.sym.256 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__global_D235_k37, self)})),
      _var1);
}
static void _V10_Dloop_D259_k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D259_k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.692 1 0) ((bruijn ##.k.693 0 0) (bruijn ##.p.692 1 0)) (##vcore.eqv? (bruijn ##.k.693 0 0) (bruijn ##.reg.1656 9 0) '#\\))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      _var0,
      VGetArg(statics, 9-1, 0),
      VEncodeChar('\\'));
}
}
static void _V10_Dloop_D259_k50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D259_k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.1658) ((##vcore.string-ref (bruijn ##.s.258 17 1) (bruijn ##.i.260 14 1))) ((bruijn ##.x.658 34 0) (bruijn ##.k.682 9 0) (bruijn ##.reg.1658 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringRef2(runtime, NULL,
      VGetArg(statics, 17-1, 1),
      VGetArg(statics, 14-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 2,
      VGetArg(statics, 9-1, 0),
      self->vars[0]);
    }
}
static void _V10_Dloop_D259_k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D259_k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.688 0 0) ((bruijn ##.x.658 32 0) (close _V10_Dloop_D259_k50) #\\) (basic-block 1 1 (##.reg.1659) ((##vcore.string-ref (bruijn ##.s.258 16 1) (bruijn ##.i.260 13 1))) ((bruijn ##.x.658 33 0) (bruijn ##.k.682 8 0) (bruijn ##.reg.1659 0 0))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D259_k50, self)})),
      VEncodeChar('\\'));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringRef2(runtime, NULL,
      VGetArg(statics, 16-1, 1),
      VGetArg(statics, 13-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 2,
      VGetArg(statics, 8-1, 0),
      self->vars[0]);
    }
}
}
static void _V10_Dloop_D259_k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D259_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D259_k48) (close _V10_Dloop_D259_k49))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D259_k48, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D259_k49, self)})));
}
static void _V10_Dloop_D259_k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D259_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.687 0 0) ((bruijn ##.x.658 30 0) (bruijn ##.k.682 5 0) (##string ##.string.1690)) (##vcore.eqv? (close _V10_Dloop_D259_k47) (bruijn ##.reg.1656 7 0) '#\"))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 2,
      VGetArg(statics, 5-1, 0),
      VEncodePointer(&_V10_Dstring_D1690.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D259_k47, self)})),
      VGetArg(statics, 7-1, 0),
      VEncodeChar('"'));
}
}
static void _V10_Dloop_D259_k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D259_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.686 0 0) ((bruijn ##.x.658 29 0) (bruijn ##.k.682 4 0) (##string ##.string.1689)) (##vcore.eqv? (close _V10_Dloop_D259_k46) (bruijn ##.reg.1656 6 0) '#\?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 2,
      statics->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1689.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D259_k46, self)})),
      VGetArg(statics, 6-1, 0),
      VEncodeChar('?'));
}
}
static void _V10_Dloop_D259_k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D259_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.685 0 0) ((bruijn ##.x.658 28 0) (bruijn ##.k.682 3 0) (##string ##.string.1688)) (##vcore.eqv? (close _V10_Dloop_D259_k45) (bruijn ##.reg.1656 5 0) '#\return))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 2,
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1688.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D259_k45, self)})),
      VGetArg(statics, 5-1, 0),
      VEncodeChar('\r'));
}
}
static void _V10_Dloop_D259_k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D259_k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.684 0 0) ((bruijn ##.x.658 27 0) (bruijn ##.k.682 2 0) (##string ##.string.1687)) (##vcore.eqv? (close _V10_Dloop_D259_k44) (bruijn ##.reg.1656 4 0) '#\newline))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 2,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1687.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D259_k44, self)})),
      statics->up->up->up->vars[0],
      VEncodeChar('\n'));
}
}
static void _V10_Dloop_D259_k42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D259_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.683 0 0) ((bruijn ##.x.658 26 0) (bruijn ##.k.682 1 0) (##string ##.string.1686)) (##vcore.eqv? (close _V10_Dloop_D259_k43) (bruijn ##.reg.1656 3 0) '#\tab))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 2,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1686.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D259_k43, self)})),
      statics->up->up->vars[0],
      VEncodeChar('\t'));
}
}
static void _V10_Dloop_D259_k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D259_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.681 1 0) ((bruijn ##.x.658 25 0) (bruijn ##.k.682 0 0) (##string ##.string.1685)) (##vcore.eqv? (close _V10_Dloop_D259_k42) (bruijn ##.reg.1656 2 0) '#\backspace))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D1685.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D259_k42, self)})),
      statics->up->vars[0],
      VEncodeChar('\b'));
}
}
static void _V10_Dloop_D259_k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D259_k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.1657) ((##vcore.+ (bruijn ##.i.260 6 1) 1)) ((bruijn ##.loop.259 7 0) (bruijn ##.k.677 6 0) (bruijn ##.reg.1657 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 6-1, 1),
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 2,
      VGetArg(statics, 6-1, 0),
      self->vars[0]);
    }
}
static void _V10_Dloop_D259_k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D259_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D259_k41) (close _V10_Dloop_D259_k51))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D259_k41, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D259_k51, self)})));
}
static void _V10_Dloop_D259_k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D259_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.678 0 0) (basic-block 1 1 (##.reg.1656) ((##vcore.string-ref (bruijn ##.s.258 6 1) (bruijn ##.i.260 3 1))) (##vcore.eqv? (close _V10_Dloop_D259_k40) (bruijn ##.reg.1656 0 0) '#\alarm)) ((bruijn ##.k.677 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringRef2(runtime, NULL,
      VGetArg(statics, 6-1, 1),
      statics->up->up->vars[1]);
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D259_k40, self)})),
      self->vars[0],
      VEncodeChar('\a'));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D259_lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D259_lambda5, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.1655) ((##vcore.string-length (bruijn ##.s.258 4 1))) ((bruijn ##.x.649 30 0) (close _V10_Dloop_D259_k39) (bruijn ##.i.260 1 1) (bruijn ##.reg.1655 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringLength2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D259_k39, self)})),
      statics->vars[1],
      self->vars[0]);
    }
}
static void _V10_Dprint__string_D236_k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__string_D236_k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.658 20 0) (bruijn ##.k.674 3 0) #\")
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 2,
      statics->up->up->vars[0],
      VEncodeChar('"'));
}
static void _V10_Dprint__string_D236_k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__string_D236_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close _V10_Dloop_D259_lambda5)) ((bruijn ##.loop.259 0 0) (close _V10_Dprint__string_D236_k52) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D259_lambda5, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__string_D236_k52, self)})),
      VEncodeInt(0l));
    }
}
static void _V10_Dprint__string_D236_lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__string_D236_lambda4, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.x.658 17 0) (close _V10_Dprint__string_D236_k38) #\")
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__string_D236_k38, self)})),
      VEncodeChar('"'));
}
static void _V10_Dloop_D265_k63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D265_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.715 1 0) ((bruijn ##.k.716 0 0) (bruijn ##.p.715 1 0)) (##vcore.eqv? (bruijn ##.k.716 0 0) (bruijn ##.reg.1661 9 0) '#\\))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      _var0,
      VGetArg(statics, 9-1, 0),
      VEncodeChar('\\'));
}
}
static void _V10_Dloop_D265_k65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D265_k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.1663) ((##vcore.string-ref (bruijn ##.s.262 17 1) (bruijn ##.i.266 13 1))) ((bruijn ##.x.658 34 0) (bruijn ##.k.705 9 0) (bruijn ##.reg.1663 0 0) (bruijn ##.x.697 15 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringRef2(runtime, NULL,
      VGetArg(statics, 17-1, 1),
      VGetArg(statics, 13-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 3,
      VGetArg(statics, 9-1, 0),
      self->vars[0],
      VGetArg(statics, 15-1, 0));
    }
}
static void _V10_Dloop_D265_k64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D265_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.711 0 0) ((bruijn ##.x.658 32 0) (close _V10_Dloop_D265_k65) #\\ (bruijn ##.x.697 13 0)) (basic-block 1 1 (##.reg.1664) ((##vcore.string-ref (bruijn ##.s.262 16 1) (bruijn ##.i.266 12 1))) ((bruijn ##.x.658 33 0) (bruijn ##.k.705 8 0) (bruijn ##.reg.1664 0 0) (bruijn ##.x.697 14 0))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D265_k65, self)})),
      VEncodeChar('\\'),
      VGetArg(statics, 13-1, 0));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringRef2(runtime, NULL,
      VGetArg(statics, 16-1, 1),
      VGetArg(statics, 12-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 3,
      VGetArg(statics, 8-1, 0),
      self->vars[0],
      VGetArg(statics, 14-1, 0));
    }
}
}
static void _V10_Dloop_D265_k62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D265_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D265_k63) (close _V10_Dloop_D265_k64))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D265_k63, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D265_k64, self)})));
}
static void _V10_Dloop_D265_k61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D265_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.710 0 0) ((bruijn ##.x.658 30 0) (bruijn ##.k.705 5 0) (##string ##.string.1690) (bruijn ##.x.697 11 0)) (##vcore.eqv? (close _V10_Dloop_D265_k62) (bruijn ##.reg.1661 7 0) '#\"))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 3,
      VGetArg(statics, 5-1, 0),
      VEncodePointer(&_V10_Dstring_D1690.sym, VPOINTER_OTHER),
      VGetArg(statics, 11-1, 0));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D265_k62, self)})),
      VGetArg(statics, 7-1, 0),
      VEncodeChar('"'));
}
}
static void _V10_Dloop_D265_k60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D265_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.709 0 0) ((bruijn ##.x.658 29 0) (bruijn ##.k.705 4 0) (##string ##.string.1689) (bruijn ##.x.697 10 0)) (##vcore.eqv? (close _V10_Dloop_D265_k61) (bruijn ##.reg.1661 6 0) '#\?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 3,
      statics->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1689.sym, VPOINTER_OTHER),
      VGetArg(statics, 10-1, 0));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D265_k61, self)})),
      VGetArg(statics, 6-1, 0),
      VEncodeChar('?'));
}
}
static void _V10_Dloop_D265_k59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D265_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.708 0 0) ((bruijn ##.x.658 28 0) (bruijn ##.k.705 3 0) (##string ##.string.1688) (bruijn ##.x.697 9 0)) (##vcore.eqv? (close _V10_Dloop_D265_k60) (bruijn ##.reg.1661 5 0) '#\return))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 3,
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1688.sym, VPOINTER_OTHER),
      VGetArg(statics, 9-1, 0));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D265_k60, self)})),
      VGetArg(statics, 5-1, 0),
      VEncodeChar('\r'));
}
}
static void _V10_Dloop_D265_k58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D265_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.707 0 0) ((bruijn ##.x.658 27 0) (bruijn ##.k.705 2 0) (##string ##.string.1687) (bruijn ##.x.697 8 0)) (##vcore.eqv? (close _V10_Dloop_D265_k59) (bruijn ##.reg.1661 4 0) '#\newline))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 3,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1687.sym, VPOINTER_OTHER),
      VGetArg(statics, 8-1, 0));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D265_k59, self)})),
      statics->up->up->up->vars[0],
      VEncodeChar('\n'));
}
}
static void _V10_Dloop_D265_k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D265_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.706 0 0) ((bruijn ##.x.658 26 0) (bruijn ##.k.705 1 0) (##string ##.string.1686) (bruijn ##.x.697 7 0)) (##vcore.eqv? (close _V10_Dloop_D265_k58) (bruijn ##.reg.1661 3 0) '#\tab))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1686.sym, VPOINTER_OTHER),
      VGetArg(statics, 7-1, 0));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D265_k58, self)})),
      statics->up->up->vars[0],
      VEncodeChar('\t'));
}
}
static void _V10_Dloop_D265_k56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D265_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.704 1 0) ((bruijn ##.x.658 25 0) (bruijn ##.k.705 0 0) (##string ##.string.1685) (bruijn ##.x.697 6 0)) (##vcore.eqv? (close _V10_Dloop_D265_k57) (bruijn ##.reg.1661 2 0) '#\backspace))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1685.sym, VPOINTER_OTHER),
      VGetArg(statics, 6-1, 0));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D265_k57, self)})),
      statics->up->vars[0],
      VEncodeChar('\b'));
}
}
static void _V10_Dloop_D265_k66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D265_k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.1662) ((##vcore.+ (bruijn ##.i.266 5 1) 1)) ((bruijn ##.loop.265 6 0) (bruijn ##.k.700 5 0) (bruijn ##.reg.1662 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 5-1, 1),
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 2,
      VGetArg(statics, 5-1, 0),
      self->vars[0]);
    }
}
static void _V10_Dloop_D265_k55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D265_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D265_k56) (close _V10_Dloop_D265_k66))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D265_k56, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D265_k66, self)})));
}
static void _V10_Dloop_D265_k54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D265_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.701 0 0) (basic-block 1 1 (##.reg.1661) ((##vcore.string-ref (bruijn ##.s.262 6 1) (bruijn ##.i.266 2 1))) (##vcore.eqv? (close _V10_Dloop_D265_k55) (bruijn ##.reg.1661 0 0) '#\alarm)) ((bruijn ##.k.700 1 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringRef2(runtime, NULL,
      VGetArg(statics, 6-1, 1),
      statics->up->vars[1]);
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D265_k55, self)})),
      self->vars[0],
      VEncodeChar('\a'));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D265_lambda7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D265_lambda7, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.x.649 30 0) (close _V10_Dloop_D265_k54) (bruijn ##.i.266 0 1) (bruijn ##.reg.1660 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D265_k54, self)})),
      _var1,
      statics->up->up->vars[0]);
}
static void _V10_Descape__string_D237_k69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Descape__string_D237_k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.695 6 0) (bruijn ##.ret.268 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      statics->vars[0]);
}
static void _V10_Descape__string_D237_k68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Descape__string_D237_k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.650 30 0) (close _V10_Descape__string_D237_k69) (bruijn ##.x.697 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Descape__string_D237_k69, self)})),
      statics->up->up->vars[0]);
}
static void _V10_Descape__string_D237_k67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Descape__string_D237_k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.651 28 0) (close _V10_Descape__string_D237_k68) (bruijn ##.x.697 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Descape__string_D237_k68, self)})),
      statics->up->vars[0]);
}
static void _V10_Descape__string_D237_k53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Descape__string_D237_k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close _V10_Dloop_D265_lambda7)) ((bruijn ##.loop.265 0 0) (close _V10_Descape__string_D237_k67) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D265_lambda7, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Descape__string_D237_k67, self)})),
      VEncodeInt(0l));
    }
}
static void _V10_Descape__string_D237_lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Descape__string_D237_lambda6, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.1660) ((##vcore.string-length (bruijn ##.s.262 1 1))) ((bruijn ##.x.652 24 0) (close _V10_Descape__string_D237_k53)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringLength2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Descape__string_D237_k53, self)})));
    }
}
static void _V10_Descape__char_D238_k76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Descape__char_D238_k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.724 0 0) ((bruijn ##.k.717 7 0) (##string ##.string.1692)) ((bruijn ##.k.717 7 0) (bruijn ##.c.269 7 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1692.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VGetArg(statics, 7-1, 1));
}
}
static void _V10_Descape__char_D238_k75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Descape__char_D238_k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.723 0 0) ((bruijn ##.k.717 6 0) (##string ##.string.1691)) (##vcore.eqv? (close _V10_Descape__char_D238_k76) (bruijn ##.c.269 6 1) '#\'))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1691.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Descape__char_D238_k76, self)})),
      VGetArg(statics, 6-1, 1),
      VEncodeChar('\''));
}
}
static void _V10_Descape__char_D238_k74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Descape__char_D238_k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.722 0 0) ((bruijn ##.k.717 5 0) (##string ##.string.1689)) (##vcore.eqv? (close _V10_Descape__char_D238_k75) (bruijn ##.c.269 5 1) '#\\))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1689.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Descape__char_D238_k75, self)})),
      VGetArg(statics, 5-1, 1),
      VEncodeChar('\\'));
}
}
static void _V10_Descape__char_D238_k73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Descape__char_D238_k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.721 0 0) ((bruijn ##.k.717 4 0) (##string ##.string.1688)) (##vcore.eqv? (close _V10_Descape__char_D238_k74) (bruijn ##.c.269 4 1) '#\return))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D1688.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Descape__char_D238_k74, self)})),
      statics->up->up->up->vars[1],
      VEncodeChar('\r'));
}
}
static void _V10_Descape__char_D238_k72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Descape__char_D238_k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.720 0 0) ((bruijn ##.k.717 3 0) (##string ##.string.1687)) (##vcore.eqv? (close _V10_Descape__char_D238_k73) (bruijn ##.c.269 3 1) '#\newline))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D1687.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Descape__char_D238_k73, self)})),
      statics->up->up->vars[1],
      VEncodeChar('\n'));
}
}
static void _V10_Descape__char_D238_k71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Descape__char_D238_k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.719 0 0) ((bruijn ##.k.717 2 0) (##string ##.string.1686)) (##vcore.eqv? (close _V10_Descape__char_D238_k72) (bruijn ##.c.269 2 1) '#\tab))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D1686.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Descape__char_D238_k72, self)})),
      statics->up->vars[1],
      VEncodeChar('\t'));
}
}
static void _V10_Descape__char_D238_k70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Descape__char_D238_k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.718 0 0) ((bruijn ##.k.717 1 0) (##string ##.string.1685)) (##vcore.eqv? (close _V10_Descape__char_D238_k71) (bruijn ##.c.269 1 1) '#\backspace))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D1685.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Descape__char_D238_k71, self)})),
      statics->vars[1],
      VEncodeChar('\b'));
}
}
static void _V10_Descape__char_D238_lambda8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Descape__char_D238_lambda8, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.eqv? (close _V10_Descape__char_D238_k70) (bruijn ##.c.269 0 1) '#\alarm)
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Descape__char_D238_k70, self)})),
      _var1,
      VEncodeChar('\a'));
}
static void _V10_Dprint__literal__string_D239_k77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__string_D239_k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 7 0) (bruijn ##.k.725 1 0) (##string ##.string.1693) (bruijn ##.x.726 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1693.sym, VPOINTER_OTHER),
      _var0);
}
static void _V10_Dprint__literal__string_D239_lambda9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__string_D239_lambda9, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.x.656 19 0) (close _V10_Dprint__literal__string_D239_k77) (bruijn ##.x.271 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__string_D239_k77, self)})),
      _var1);
}
static void _V10_Dprint__intrinsic_D240_k78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__intrinsic_D240_k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 7 0) (bruijn ##.k.727 1 0) (##string ##.string.1694) (bruijn ##.x.728 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1694.sym, VPOINTER_OTHER),
      _var0);
}
static void _V10_Dprint__intrinsic_D240_lambda10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__intrinsic_D240_lambda10, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.x.656 19 0) (close _V10_Dprint__intrinsic_D240_k78) (bruijn ##.x.272 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__intrinsic_D240_k78, self)})),
      _var1);
}
static void _V10_Dprint__literal_D241_k80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal_D241_k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 12 0) (bruijn ##.k.729 6 0) (##string ##.string.1699) (bruijn ##.x.735 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 3,
      VGetArg(statics, 6-1, 0),
      VEncodePointer(&_V10_Dstring_D1699.sym, VPOINTER_OTHER),
      _var0);
}
static void _V10_Dprint__literal_D241_k81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal_D241_k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.658 24 0) (bruijn ##.k.729 7 0) (bruijn ##.x.739 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 2,
      VGetArg(statics, 7-1, 0),
      _var0);
}
static void _V10_Dprint__literal_D241_k79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal_D241_k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.731 0 0) ((bruijn ##.x.669 8 0) (bruijn ##.k.729 2 0) (##string ##.string.1696) (bruijn ##.x.273 2 1)) (basic-block 1 1 (##.reg.1666) ((##vcore.void? (bruijn ##.x.273 3 1))) (if (bruijn ##.reg.1666 0 0) ((bruijn ##.x.669 9 0) (bruijn ##.k.729 3 0) (##string ##.string.1697)) (basic-block 1 1 (##.reg.1667) ((##vcore.nullptr? (bruijn ##.x.273 4 1))) (if (bruijn ##.reg.1667 0 0) ((bruijn ##.x.669 10 0) (bruijn ##.k.729 4 0) (##string ##.string.1698)) (basic-block 1 1 (##.reg.1668) ((##vcore.char? (bruijn ##.x.273 5 1))) (if (bruijn ##.reg.1668 0 0) ((bruijn ##.escape-char.238 6 3) (close _V10_Dprint__literal_D241_k80) (bruijn ##.x.273 5 1)) (if (##inline ##vcore.eq? (bruijn ##.x.273 5 1) #t) ((bruijn ##.x.669 11 0) (bruijn ##.k.729 5 0) (##string ##.string.1700)) (if (##inline ##vcore.eq? (bruijn ##.x.273 5 1) #f) ((bruijn ##.x.669 11 0) (bruijn ##.k.729 5 0) (##string ##.string.1701)) (basic-block 1 1 (##.reg.1669) ((##vcore.symbol? (bruijn ##.x.273 6 1))) (if (bruijn ##.reg.1669 0 0) ((bruijn ##.x.656 25 0) (close _V10_Dprint__literal_D241_k81) (bruijn ##.x.273 6 1)) ((bruijn ##.x.645 36 0) (bruijn ##.k.729 6 0) (##string ##.string.1702) (bruijn ##.x.273 6 1)))))))))))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1696.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVoidP2(runtime, NULL,
      statics->up->up->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 2,
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1697.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullptrP2(runtime, NULL,
      statics->up->up->up->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 2,
      statics->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1698.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCharP2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 3)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal_D241_k80, self)})),
      VGetArg(statics, 5-1, 1));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        VGetArg(statics, 5-1, 1),
        VEncodeBool(true)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 2,
      VGetArg(statics, 5-1, 0),
      VEncodePointer(&_V10_Dstring_D1700.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        VGetArg(statics, 5-1, 1),
        VEncodeBool(false)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 2,
      VGetArg(statics, 5-1, 0),
      VEncodePointer(&_V10_Dstring_D1701.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal_D241_k81, self)})),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 3,
      VGetArg(statics, 6-1, 0),
      VEncodePointer(&_V10_Dstring_D1702.sym, VPOINTER_OTHER),
      VGetArg(statics, 6-1, 1));
}
    }
}
}
}
    }
}
    }
}
    }
}
}
static void _V10_Dprint__literal_D241_lambda11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal_D241_lambda11, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.1665) ((##vcore.int? (bruijn ##.x.273 1 1))) (if (bruijn ##.reg.1665 0 0) ((bruijn ##.x.669 7 0) (bruijn ##.k.729 1 0) (##string ##.string.1695) (bruijn ##.x.273 1 1)) ((bruijn ##.x.653 23 0) (close _V10_Dprint__literal_D241_k79) (bruijn ##.x.273 1 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VIntP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1695.sym, VPOINTER_OTHER),
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal_D241_k79, self)})),
      statics->vars[1]);
}
    }
}
static void _V10_Dprint__literal__declaration_D242_k86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D242_k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 13 0) (bruijn ##.k.740 7 0) (##string ##.string.1703) (bruijn ##.reg.1672 1 1) (bruijn ##.mangled.275 5 0) (bruijn ##.reg.1672 1 1) (bruijn ##.escaped.276 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 6,
      VGetArg(statics, 7-1, 0),
      VEncodePointer(&_V10_Dstring_D1703.sym, VPOINTER_OTHER),
      statics->vars[1],
      VGetArg(statics, 5-1, 0),
      statics->vars[1],
      statics->up->up->vars[0]);
}
static void _V10_Dprint__literal__declaration_D242_k85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D242_k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.reg.1671 ##.reg.1672) ((##vcore.string-length (bruijn ##.x.744 1 0)) (##vcore.+ (bruijn ##.reg.1671 0 0) 1)) ((bruijn ##.x.669 12 0) (close _V10_Dprint__literal__declaration_D242_k86) (##string ##.string.1704) (bruijn ##.mangled.275 4 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VStringLength2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VAdd2(runtime, NULL,
      self->vars[0],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D242_k86, self)})),
      VEncodePointer(&_V10_Dstring_D1704.sym, VPOINTER_OTHER),
      statics->up->up->up->vars[0]);
    }
}
static void _V10_Dprint__literal__declaration_D242_k84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D242_k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.symbol->string (close _V10_Dprint__literal__declaration_D242_k85) (##inline ##vcore.car (bruijn ##.lit.274 4 1)))
    VCallFuncWithGC(runtime, (VFunc)VSymbolString2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D242_k85, self)})),
      VInlineCar2(runtime,
        statics->up->up->up->vars[1]));
}
static void _V10_Dprint__literal__declaration_D242_k83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D242_k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.escape-string.237 4 2) (close _V10_Dprint__literal__declaration_D242_k84) (bruijn ##.x.746 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[2]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D242_k84, self)})),
      _var0);
}
static void _V10_Dprint__literal__declaration_D242_k82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D242_k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.symbol->string (close _V10_Dprint__literal__declaration_D242_k83) (##inline ##vcore.car (bruijn ##.lit.274 2 1)))
    VCallFuncWithGC(runtime, (VFunc)VSymbolString2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D242_k83, self)})),
      VInlineCar2(runtime,
        statics->up->vars[1]));
}
static void _V10_Dprint__literal__declaration_D242_k88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D242_k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.reg.1674 ##.reg.1675) ((##vcore.string-length (##inline ##vcore.car (bruijn ##.lit.274 5 1))) (##vcore.+ (bruijn ##.reg.1674 0 0) 1)) ((bruijn ##.x.669 11 0) (bruijn ##.k.740 5 0) (##string ##.string.1705) (bruijn ##.reg.1675 0 1) (bruijn ##.mangled.278 2 0) (bruijn ##.reg.1675 0 1) (bruijn ##.escaped.279 1 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VStringLength2(runtime, NULL,
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 1)));
    self->vars[1] = _VBasic_VAdd2(runtime, NULL,
      self->vars[0],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 6,
      VGetArg(statics, 5-1, 0),
      VEncodePointer(&_V10_Dstring_D1705.sym, VPOINTER_OTHER),
      self->vars[1],
      statics->up->vars[0],
      self->vars[1],
      statics->vars[0]);
    }
}
static void _V10_Dprint__literal__declaration_D242_k87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D242_k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.escape-string.237 4 2) (close _V10_Dprint__literal__declaration_D242_k88) (##inline ##vcore.car (bruijn ##.lit.274 3 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[2]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D242_k88, self)})),
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
}
static void _V10_Dprint__literal__declaration_D242_k90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D242_k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.eqv? (bruijn ##.k.759 1 0) (bruijn ##.x.760 0 0) '##intrinsic)
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      statics->vars[0],
      _var0,
      _V10intrinsic);
}
static void _V10_Dprint__literal__declaration_D242_k89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D242_k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (##inline ##vcore.car (bruijn ##.lit.274 3 1))) ((bruijn ##.x.654 24 0) (close _V10_Dprint__literal__declaration_D242_k90) (bruijn ##.lit.274 3 1)) ((bruijn ##.k.759 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D242_k90, self)})),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__literal__declaration_D242_k94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D242_k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 12 0) (bruijn ##.k.740 6 0) (##string ##.string.1706) (bruijn ##.mangled.281 1 0) (##inline ##vcore.cdr (bruijn ##.lit.274 6 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 4,
      VGetArg(statics, 6-1, 0),
      VEncodePointer(&_V10_Dstring_D1706.sym, VPOINTER_OTHER),
      statics->vars[0],
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 1)));
}
static void _V10_Dprint__literal__declaration_D242_k93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D242_k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 11 0) (close _V10_Dprint__literal__declaration_D242_k94) (##string ##.string.1707) (bruijn ##.mangled.281 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D242_k94, self)})),
      VEncodePointer(&_V10_Dstring_D1707.sym, VPOINTER_OTHER),
      _var0);
}
static void _V10_Dprint__literal__declaration_D242_k92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D242_k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.656 23 0) (close _V10_Dprint__literal__declaration_D242_k93) (bruijn ##.x.757 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D242_k93, self)})),
      _var0);
}
static void _V10_Dprint__literal__declaration_D242_k91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D242_k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.754 0 0) ((bruijn ##.x.655 23 0) (close _V10_Dprint__literal__declaration_D242_k92) (bruijn ##.lit.274 3 1)) ((bruijn ##.x.645 33 0) (bruijn ##.k.740 3 0) (##string ##.string.1708) (bruijn ##.lit.274 3 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D242_k92, self)})),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 3,
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1708.sym, VPOINTER_OTHER),
      statics->up->up->vars[1]);
}
}
static void _V10_Dprint__literal__declaration_D242_lambda12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D242_lambda12, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.1670) ((##vcore.symbol? (##inline ##vcore.car (bruijn ##.lit.274 1 1)))) (if (bruijn ##.reg.1670 0 0) ((bruijn ##.x.656 20 0) (close _V10_Dprint__literal__declaration_D242_k82) (##inline ##vcore.car (bruijn ##.lit.274 1 1))) (basic-block 1 1 (##.reg.1673) ((##vcore.string? (##inline ##vcore.car (bruijn ##.lit.274 2 1)))) (if (bruijn ##.reg.1673 0 0) ((bruijn ##.x.656 21 0) (close _V10_Dprint__literal__declaration_D242_k87) (##inline ##vcore.cdr (bruijn ##.lit.274 2 1))) ((close _V10_Dprint__literal__declaration_D242_k89) (close _V10_Dprint__literal__declaration_D242_k91))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      VInlineCar2(runtime,
        statics->vars[1]));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D242_k82, self)})),
      VInlineCar2(runtime,
        statics->vars[1]));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringP2(runtime, NULL,
      VInlineCar2(runtime,
        statics->up->vars[1]));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D242_k87, self)})),
      VInlineCdr2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__literal__declaration_D242_k89, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D242_k91, self)})));
}
    }
}
    }
}
static void _V10_Dprint__init_D283_k95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__init_D283_k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 10 0) (bruijn ##.k.765 2 0) (##string ##.string.1709) (bruijn ##.mangled.285 0 0) (bruijn ##.mangled.285 0 0) (bruijn ##.mangled.285 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 5,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1709.sym, VPOINTER_OTHER),
      _var0,
      _var0,
      _var0);
}
static void _V10_Dprint__init_D283_k97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__init_D283_k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.eqv? (bruijn ##.k.771 1 0) (bruijn ##.x.772 0 0) '##intrinsic)
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      statics->vars[0],
      _var0,
      _V10intrinsic);
}
static void _V10_Dprint__init_D283_k96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__init_D283_k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (##inline ##vcore.car (bruijn ##.lit.284 2 1))) ((bruijn ##.x.654 25 0) (close _V10_Dprint__init_D283_k97) (bruijn ##.lit.284 2 1)) ((bruijn ##.k.771 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__init_D283_k97, self)})),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__init_D283_k100(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__init_D283_k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 12 0) (bruijn ##.k.765 4 0) (##string ##.string.1710) (bruijn ##.mangled.286 0 0) (bruijn ##.mangled.286 0 0) (bruijn ##.mangled.286 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 5,
      statics->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1710.sym, VPOINTER_OTHER),
      _var0,
      _var0,
      _var0);
}
static void _V10_Dprint__init_D283_k99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__init_D283_k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.656 24 0) (close _V10_Dprint__init_D283_k100) (bruijn ##.x.769 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__init_D283_k100, self)})),
      _var0);
}
static void _V10_Dprint__init_D283_k98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__init_D283_k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.768 0 0) ((bruijn ##.x.655 24 0) (close _V10_Dprint__init_D283_k99) (bruijn ##.lit.284 2 1)) ((bruijn ##.k.765 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__init_D283_k99, self)})),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__init_D283_lambda14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__init_D283_lambda14, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.1676) ((##vcore.symbol? (##inline ##vcore.car (bruijn ##.lit.284 1 1)))) (if (bruijn ##.reg.1676 0 0) ((bruijn ##.x.656 22 0) (close _V10_Dprint__init_D283_k95) (##inline ##vcore.car (bruijn ##.lit.284 1 1))) ((close _V10_Dprint__init_D283_k96) (close _V10_Dprint__init_D283_k98))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      VInlineCar2(runtime,
        statics->vars[1]));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__init_D283_k95, self)})),
      VInlineCar2(runtime,
        statics->vars[1]));
} else {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__init_D283_k96, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__init_D283_k98, self)})));
}
    }
}
static void _V10_Dprint__dllmain_D243_k103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__dllmain_D243_k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 10 0) (bruijn ##.k.764 4 0) (##string ##.string.1711))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 2,
      statics->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1711.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__dllmain_D243_k102(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__dllmain_D243_k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.646 32 0) (close _V10_Dprint__dllmain_D243_k103) (bruijn ##.print-init.283 2 0) (bruijn ##.literals.282 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__dllmain_D243_k103, self)})),
      statics->up->vars[0],
      statics->up->up->vars[1]);
}
static void _V10_Dprint__dllmain_D243_k101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__dllmain_D243_k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 8 0) (close _V10_Dprint__dllmain_D243_k102) (##string ##.string.1712) (bruijn ##.x.777 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__dllmain_D243_k102, self)})),
      VEncodePointer(&_V10_Dstring_D1712.sym, VPOINTER_OTHER),
      _var0);
}
static void _V10_Dprint__dllmain_D243_lambda13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__dllmain_D243_lambda13, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dprint__init_D283_lambda14)) ((bruijn ##.gendllmain.224 4 0) (close _V10_Dprint__dllmain_D243_k101)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__init_D283_lambda14, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__dllmain_D243_k101, self)})));
    }
}
static void _V10_Dcloses_Q_D244_k107(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.891 0 0) (bruijn ##.k.887 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
static void _V10_Dcloses_Q_D244_lambda17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_lambda17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.892 0 0) #t)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
}
static void _V10_Dcloses_Q_D244_k106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.6.291 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.6.291 0 0))) (##vcore.call-with-values (close _V10_Dcloses_Q_D244_k107) (close _V10_Dcloses_Q_D244_lambda17) (bruijn ##.kk.3.288 3 1)) ((bruijn ##.k.887 2 0) #f)) ((bruijn ##.k.887 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D244_k107, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D244_lambda17, self)})),
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
static void _V10_Dcloses_Q_D244_k105(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.888 0 0) ((close _V10_Dcloses_Q_D244_k106) (##inline ##vcore.cdr (bruijn ##.expr.287 3 1))) ((bruijn ##.k.887 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D244_k106, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D244_k104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.287 2 1)) ((bruijn ##.x.670 7 0) (close _V10_Dcloses_Q_D244_k105) 'close (##inline ##vcore.car (bruijn ##.expr.287 2 1))) ((bruijn ##.k.887 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D244_k105, self)})),
      _V0close,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D244_k111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.883 0 0) (bruijn ##.k.881 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
static void _V10_Dcloses_Q_D244_lambda18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_lambda18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.884 0 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
static void _V10_Dcloses_Q_D244_k110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.882 0 0) (##vcore.call-with-values (close _V10_Dcloses_Q_D244_k111) (close _V10_Dcloses_Q_D244_lambda18) (bruijn ##.kk.3.288 3 1)) ((bruijn ##.k.881 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D244_k111, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D244_lambda18, self)})),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D244_k109(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.287 3 1)) ((bruijn ##.x.670 8 0) (close _V10_Dcloses_Q_D244_k110) 'quote (##inline ##vcore.car (bruijn ##.expr.287 3 1))) ((bruijn ##.k.881 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D244_k110, self)})),
      _V0quote,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D244_k115(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.877 0 0) (bruijn ##.k.875 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
static void _V10_Dcloses_Q_D244_lambda19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_lambda19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.878 0 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
static void _V10_Dcloses_Q_D244_k114(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.876 0 0) (##vcore.call-with-values (close _V10_Dcloses_Q_D244_k115) (close _V10_Dcloses_Q_D244_lambda19) (bruijn ##.kk.3.288 4 1)) ((bruijn ##.k.875 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D244_k115, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D244_lambda19, self)})),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D244_k113(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.287 4 1)) ((bruijn ##.x.670 9 0) (close _V10_Dcloses_Q_D244_k114) 'bruijn (##inline ##vcore.car (bruijn ##.expr.287 4 1))) ((bruijn ##.k.875 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D244_k114, self)})),
      _V0bruijn,
      VInlineCar2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D244_k119(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.871 0 0) (bruijn ##.k.869 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
static void _V10_Dcloses_Q_D244_lambda20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_lambda20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.872 0 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
static void _V10_Dcloses_Q_D244_k118(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.870 0 0) (##vcore.call-with-values (close _V10_Dcloses_Q_D244_k119) (close _V10_Dcloses_Q_D244_lambda20) (bruijn ##.kk.3.288 5 1)) ((bruijn ##.k.869 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D244_k119, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D244_lambda20, self)})),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D244_k117(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.287 5 1)) ((bruijn ##.x.670 10 0) (close _V10_Dcloses_Q_D244_k118) '##string (##inline ##vcore.car (bruijn ##.expr.287 5 1))) ((bruijn ##.k.869 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 5-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D244_k118, self)})),
      _V10string,
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D244_k123(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.865 0 0) (bruijn ##.k.863 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
static void _V10_Dcloses_Q_D244_lambda21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_lambda21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.866 0 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
static void _V10_Dcloses_Q_D244_k122(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.864 0 0) (##vcore.call-with-values (close _V10_Dcloses_Q_D244_k123) (close _V10_Dcloses_Q_D244_lambda21) (bruijn ##.kk.3.288 6 1)) ((bruijn ##.k.863 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D244_k123, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D244_lambda21, self)})),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D244_k121(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.287 6 1)) ((bruijn ##.x.670 11 0) (close _V10_Dcloses_Q_D244_k122) '##intrinsic (##inline ##vcore.car (bruijn ##.expr.287 6 1))) ((bruijn ##.k.863 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 6-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D244_k122, self)})),
      _V10intrinsic,
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D244_k130(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.856 0 0) (bruijn ##.k.850 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
static void _V10_Dcloses_Q_D244_k132(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.859 0 0) ((bruijn ##.k.857 2 0) (bruijn ##.p.859 0 0)) ((bruijn ##.closes?.244 15 9) (bruijn ##.k.857 2 0) (##inline ##vcore.car (bruijn ##.expr.14.302 3 0))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 9)), 2,
      statics->up->vars[0],
      VInlineCar2(runtime,
        statics->up->up->vars[0]));
}
}
static void _V10_Dcloses_Q_D244_k131(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.858 0 0) ((bruijn ##.k.857 1 0) (bruijn ##.p.858 0 0)) ((bruijn ##.closes?.244 14 9) (close _V10_Dcloses_Q_D244_k132) (##inline ##vcore.car (bruijn ##.expr.13.300 3 0))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 9)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D244_k132, self)})),
      VInlineCar2(runtime,
        statics->up->up->vars[0]));
}
}
static void _V10_Dcloses_Q_D244_lambda22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_lambda22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.closes?.244 13 9) (close _V10_Dcloses_Q_D244_k131) (##inline ##vcore.car (bruijn ##.expr.12.298 3 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 9)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D244_k131, self)})),
      VInlineCar2(runtime,
        statics->up->up->vars[0]));
}
static void _V10_Dcloses_Q_D244_k129(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.14.302 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.14.302 0 0))) (##vcore.call-with-values (close _V10_Dcloses_Q_D244_k130) (close _V10_Dcloses_Q_D244_lambda22) (bruijn ##.kk.3.288 10 1)) ((bruijn ##.k.850 4 0) #f)) ((bruijn ##.k.850 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D244_k130, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D244_lambda22, self)})),
      VGetArg(statics, 10-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D244_k128(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.13.300 0 0)) ((close _V10_Dcloses_Q_D244_k129) (##inline ##vcore.cdr (bruijn ##.expr.13.300 0 0))) ((bruijn ##.k.850 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D244_k129, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D244_k127(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.12.298 0 0)) ((close _V10_Dcloses_Q_D244_k128) (##inline ##vcore.cdr (bruijn ##.expr.12.298 0 0))) ((bruijn ##.k.850 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D244_k128, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D244_k126(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.851 0 0) ((close _V10_Dcloses_Q_D244_k127) (##inline ##vcore.cdr (bruijn ##.expr.287 8 1))) ((bruijn ##.k.850 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D244_k127, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 8-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D244_k125(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.287 7 1)) ((bruijn ##.x.670 12 0) (close _V10_Dcloses_Q_D244_k126) 'if (##inline ##vcore.car (bruijn ##.expr.287 7 1))) ((bruijn ##.k.850 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 7-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D244_k126, self)})),
      _V0if,
      VInlineCar2(runtime,
        VGetArg(statics, 7-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D244_k139(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.845 0 0) (bruijn ##.k.839 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
static void _V10_Dcloses_Q_D244_lambda23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_lambda23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.846 0 0) #t)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
}
static void _V10_Dcloses_Q_D244_k138(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.18.309 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.18.309 0 0))) (##vcore.call-with-values (close _V10_Dcloses_Q_D244_k139) (close _V10_Dcloses_Q_D244_lambda23) (bruijn ##.kk.3.288 11 1)) ((bruijn ##.k.839 4 0) #f)) ((bruijn ##.k.839 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D244_k139, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D244_lambda23, self)})),
      VGetArg(statics, 11-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D244_k137(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.17.307 0 0)) ((close _V10_Dcloses_Q_D244_k138) (##inline ##vcore.cdr (bruijn ##.expr.17.307 0 0))) ((bruijn ##.k.839 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D244_k138, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D244_k136(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.16.305 0 0)) ((close _V10_Dcloses_Q_D244_k137) (##inline ##vcore.cdr (bruijn ##.expr.16.305 0 0))) ((bruijn ##.k.839 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D244_k137, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D244_k135(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.840 0 0) ((close _V10_Dcloses_Q_D244_k136) (##inline ##vcore.cdr (bruijn ##.expr.287 9 1))) ((bruijn ##.k.839 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D244_k136, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 9-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D244_k134(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.287 8 1)) ((bruijn ##.x.670 13 0) (close _V10_Dcloses_Q_D244_k135) 'set! (##inline ##vcore.car (bruijn ##.expr.287 8 1))) ((bruijn ##.k.839 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 8-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D244_k135, self)})),
      _V0set_B,
      VInlineCar2(runtime,
        VGetArg(statics, 8-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D244_k146(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.834 0 0) (bruijn ##.k.828 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
static void _V10_Dcloses_Q_D244_lambda24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_lambda24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.835 0 0) #t)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
}
static void _V10_Dcloses_Q_D244_k145(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.22.316 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.22.316 0 0))) (##vcore.call-with-values (close _V10_Dcloses_Q_D244_k146) (close _V10_Dcloses_Q_D244_lambda24) (bruijn ##.kk.3.288 12 1)) ((bruijn ##.k.828 4 0) #f)) ((bruijn ##.k.828 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D244_k146, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D244_lambda24, self)})),
      VGetArg(statics, 12-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D244_k144(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.21.314 0 0)) ((close _V10_Dcloses_Q_D244_k145) (##inline ##vcore.cdr (bruijn ##.expr.21.314 0 0))) ((bruijn ##.k.828 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D244_k145, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D244_k143(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.20.312 0 0)) ((close _V10_Dcloses_Q_D244_k144) (##inline ##vcore.cdr (bruijn ##.expr.20.312 0 0))) ((bruijn ##.k.828 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D244_k144, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D244_k142(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.829 0 0) ((close _V10_Dcloses_Q_D244_k143) (##inline ##vcore.cdr (bruijn ##.expr.287 10 1))) ((bruijn ##.k.828 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D244_k143, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 10-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D244_k141(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.287 9 1)) ((bruijn ##.x.670 14 0) (close _V10_Dcloses_Q_D244_k142) 'define (##inline ##vcore.car (bruijn ##.expr.287 9 1))) ((bruijn ##.k.828 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 9-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D244_k142, self)})),
      _V0define,
      VInlineCar2(runtime,
        VGetArg(statics, 9-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D244_k151(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.824 0 0) (bruijn ##.k.821 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
static void _V10_Dcloses_Q_D244_lambda25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_lambda25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.closes?.244 14 9) (bruijn ##.k.825 0 0) (##inline ##vcore.cdr (bruijn ##.expr.24.319 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 9)), 2,
      _var0,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
static void _V10_Dcloses_Q_D244_k150(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.24.319 0 0)) (##vcore.call-with-values (close _V10_Dcloses_Q_D244_k151) (close _V10_Dcloses_Q_D244_lambda25) (bruijn ##.kk.3.288 11 1)) ((bruijn ##.k.821 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D244_k151, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D244_lambda25, self)})),
      VGetArg(statics, 11-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D244_k149(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.822 0 0) ((close _V10_Dcloses_Q_D244_k150) (##inline ##vcore.cdr (bruijn ##.expr.287 11 1))) ((bruijn ##.k.821 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D244_k150, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 11-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D244_k148(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.287 10 1)) ((bruijn ##.x.670 15 0) (close _V10_Dcloses_Q_D244_k149) '##inline (##inline ##vcore.car (bruijn ##.expr.287 10 1))) ((bruijn ##.k.821 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 10-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D244_k149, self)})),
      _V10inline,
      VInlineCar2(runtime,
        VGetArg(statics, 10-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D244_k155(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.817 0 0) (bruijn ##.k.815 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
static void _V10_Dcloses_Q_D244_lambda26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_lambda26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.818 0 0) #t)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
}
static void _V10_Dcloses_Q_D244_k154(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.816 0 0) (##vcore.call-with-values (close _V10_Dcloses_Q_D244_k155) (close _V10_Dcloses_Q_D244_lambda26) (bruijn ##.kk.3.288 11 1)) ((bruijn ##.k.815 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D244_k155, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D244_lambda26, self)})),
      VGetArg(statics, 11-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D244_k153(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.287 11 1)) ((bruijn ##.x.670 16 0) (close _V10_Dcloses_Q_D244_k154) 'letrec (##inline ##vcore.car (bruijn ##.expr.287 11 1))) ((bruijn ##.k.815 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 11-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D244_k154, self)})),
      _V0letrec,
      VInlineCar2(runtime,
        VGetArg(statics, 11-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D244_k159(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.811 0 0) (bruijn ##.k.809 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
static void _V10_Dcloses_Q_D244_lambda27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_lambda27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.812 0 0) #t)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
}
static void _V10_Dcloses_Q_D244_k158(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.810 0 0) (##vcore.call-with-values (close _V10_Dcloses_Q_D244_k159) (close _V10_Dcloses_Q_D244_lambda27) (bruijn ##.kk.3.288 12 1)) ((bruijn ##.k.809 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D244_k159, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D244_lambda27, self)})),
      VGetArg(statics, 12-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D244_k157(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.287 12 1)) ((bruijn ##.x.670 17 0) (close _V10_Dcloses_Q_D244_k158) 'basic-block (##inline ##vcore.car (bruijn ##.expr.287 12 1))) ((bruijn ##.k.809 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 12-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D244_k158, self)})),
      _V0basic__block,
      VInlineCar2(runtime,
        VGetArg(statics, 12-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D244_k162(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.805 0 0) (bruijn ##.k.803 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
static void _V10_Dcloses_Q_D244_lambda28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_lambda28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.closes?.244 15 9) (bruijn ##.k.806 0 0) (##inline ##vcore.car (bruijn ##.expr.287 14 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 9)), 2,
      _var0,
      VInlineCar2(runtime,
        VGetArg(statics, 14-1, 1)));
}
static void _V10_Dcloses_Q_D244_k161(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.287 13 1)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.287 13 1))) (##vcore.call-with-values (close _V10_Dcloses_Q_D244_k162) (close _V10_Dcloses_Q_D244_lambda28) (bruijn ##.kk.3.288 12 1)) ((bruijn ##.k.803 0 0) #f)) ((bruijn ##.k.803 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 13-1, 1)))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        VGetArg(statics, 13-1, 1))))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D244_k162, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D244_lambda28, self)})),
      VGetArg(statics, 12-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D244_k165(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.799 0 0) (bruijn ##.k.798 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
static void _V10_Dcloses_Q_D244_k166(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.801 0 0) ((bruijn ##.k.800 1 0) (bruijn ##.p.801 0 0)) ((bruijn ##.closes?.244 17 9) (bruijn ##.k.800 1 0) (##inline ##vcore.cdr (bruijn ##.expr.287 16 1))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 9)), 2,
      statics->vars[0],
      VInlineCdr2(runtime,
        VGetArg(statics, 16-1, 1)));
}
}
static void _V10_Dcloses_Q_D244_lambda29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_lambda29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.closes?.244 16 9) (close _V10_Dcloses_Q_D244_k166) (##inline ##vcore.car (bruijn ##.expr.287 15 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 9)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D244_k166, self)})),
      VInlineCar2(runtime,
        VGetArg(statics, 15-1, 1)));
}
static void _V10_Dcloses_Q_D244_k164(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.287 14 1)) (##vcore.call-with-values (close _V10_Dcloses_Q_D244_k165) (close _V10_Dcloses_Q_D244_lambda29) (bruijn ##.kk.3.288 13 1)) ((bruijn ##.k.798 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 14-1, 1)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D244_k165, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D244_lambda29, self)})),
      VGetArg(statics, 13-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D244_lambda30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_lambda30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.645 47 0) (bruijn ##.k.794 0 0) (##string ##.string.1713) (bruijn ##.expr.287 17 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 47-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1713.sym, VPOINTER_OTHER),
      VGetArg(statics, 17-1, 1));
}
static void _V10_Dcloses_Q_D244_k169(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.779 15 0) (close _V10_Dcloses_Q_D244_lambda30) (bruijn ##.kk.3.288 15 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 15-1, 0),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D244_lambda30, self)})),
      VGetArg(statics, 15-1, 1));
}
static void _V10_Dcloses_Q_D244_k168(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.795 0 0) (close _V10_Dcloses_Q_D244_k169))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D244_k169, self)})));
}
static void _V10_Dcloses_Q_D244_lambda31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_lambda31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.796 0 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
static void _V10_Dcloses_Q_D244_k167(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (close _V10_Dcloses_Q_D244_k168) (close _V10_Dcloses_Q_D244_lambda31) (bruijn ##.kk.3.288 13 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D244_k168, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D244_lambda31, self)})),
      VGetArg(statics, 13-1, 1));
}
static void _V10_Dcloses_Q_D244_k163(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dcloses_Q_D244_k164) (close _V10_Dcloses_Q_D244_k167))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D244_k164, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D244_k167, self)})));
}
static void _V10_Dcloses_Q_D244_k160(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dcloses_Q_D244_k161) (close _V10_Dcloses_Q_D244_k163))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D244_k161, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D244_k163, self)})));
}
static void _V10_Dcloses_Q_D244_k156(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dcloses_Q_D244_k157) (close _V10_Dcloses_Q_D244_k160))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D244_k157, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D244_k160, self)})));
}
static void _V10_Dcloses_Q_D244_k152(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dcloses_Q_D244_k153) (close _V10_Dcloses_Q_D244_k156))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D244_k153, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D244_k156, self)})));
}
static void _V10_Dcloses_Q_D244_k147(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dcloses_Q_D244_k148) (close _V10_Dcloses_Q_D244_k152))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D244_k148, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D244_k152, self)})));
}
static void _V10_Dcloses_Q_D244_k140(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dcloses_Q_D244_k141) (close _V10_Dcloses_Q_D244_k147))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D244_k141, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D244_k147, self)})));
}
static void _V10_Dcloses_Q_D244_k133(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dcloses_Q_D244_k134) (close _V10_Dcloses_Q_D244_k140))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D244_k134, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D244_k140, self)})));
}
static void _V10_Dcloses_Q_D244_k124(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dcloses_Q_D244_k125) (close _V10_Dcloses_Q_D244_k133))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D244_k125, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D244_k133, self)})));
}
static void _V10_Dcloses_Q_D244_k120(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dcloses_Q_D244_k121) (close _V10_Dcloses_Q_D244_k124))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D244_k121, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D244_k124, self)})));
}
static void _V10_Dcloses_Q_D244_k116(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dcloses_Q_D244_k117) (close _V10_Dcloses_Q_D244_k120))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D244_k117, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D244_k120, self)})));
}
static void _V10_Dcloses_Q_D244_k112(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dcloses_Q_D244_k113) (close _V10_Dcloses_Q_D244_k116))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D244_k113, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D244_k116, self)})));
}
static void _V10_Dcloses_Q_D244_k108(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dcloses_Q_D244_k109) (close _V10_Dcloses_Q_D244_k112))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D244_k109, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D244_k112, self)})));
}
static void _V10_Dcloses_Q_D244_lambda16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_lambda16, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Dcloses_Q_D244_k104) (close _V10_Dcloses_Q_D244_k108))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D244_k104, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D244_k108, self)})));
}
static void _V10_Dcloses_Q_D244_lambda15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D244_lambda15, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.k.778 0 0) (close _V10_Dcloses_Q_D244_lambda16))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D244_lambda16, self)})));
}
static void _V10_Dprint__basic__expr_D245_k171(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__basic__expr_D245_k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.not (bruijn ##.name.332 1 0)) ((bruijn ##.x.645 32 0) (bruijn ##.k.903 0 0) (##string ##.string.1714) (bruijn ##.expr.330 2 1)) ((bruijn ##.k.903 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1714.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__basic__expr_D245_k174(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__basic__expr_D245_k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 10 0) (bruijn ##.k.895 4 0) (##string ##.string.1715))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 2,
      statics->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1715.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__basic__expr_D245_k175(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__basic__expr_D245_k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.print-expr.246 6 11) (bruijn ##.k.898 1 0) (bruijn ##.x.333 1 1) (bruijn ##.args.331 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 11)), 3,
      statics->vars[0],
      statics->vars[1],
      VGetArg(statics, 5-1, 2));
}
static void _V10_Dprint__basic__expr_D245_lambda33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__basic__expr_D245_lambda33, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.x.669 10 0) (close _V10_Dprint__basic__expr_D245_k175) (##string ##.string.1716))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__basic__expr_D245_k175, self)})),
      VEncodePointer(&_V10_Dstring_D1716.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__basic__expr_D245_k173(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__basic__expr_D245_k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.646 32 0) (close _V10_Dprint__basic__expr_D245_k174) (close _V10_Dprint__basic__expr_D245_lambda33) (##inline ##vcore.cdr (bruijn ##.expr.330 3 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__basic__expr_D245_k174, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__basic__expr_D245_lambda33, self)})),
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
}
static void _V10_Dprint__basic__expr_D245_k172(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__basic__expr_D245_k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 8 0) (close _V10_Dprint__basic__expr_D245_k173) (##string ##.string.1717) (bruijn ##.name.332 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__basic__expr_D245_k173, self)})),
      VEncodePointer(&_V10_Dstring_D1717.sym, VPOINTER_OTHER),
      statics->vars[0]);
}
static void _V10_Dprint__basic__expr_D245_k170(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__basic__expr_D245_k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__basic__expr_D245_k171) (close _V10_Dprint__basic__expr_D245_k172))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__basic__expr_D245_k171, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__basic__expr_D245_k172, self)})));
}
static void _V10_Dprint__basic__expr_D245_lambda32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__basic__expr_D245_lambda32, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.x.659 16 0) (close _V10_Dprint__basic__expr_D245_k170) (##inline ##vcore.car (bruijn ##.expr.330 0 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__basic__expr_D245_k170, self)})),
      VInlineCar2(runtime,
        _var1));
}
static void _V10_Dprint__builtin__apply_D336_k177(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__builtin__apply_D336_k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 10 0) (bruijn ##.k.911 1 0) (##string ##.string.1718) (bruijn ##.x.912 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1718.sym, VPOINTER_OTHER),
      _var0);
}
static void _V10_Dprint__builtin__apply_D336_k179(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__builtin__apply_D336_k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 11 0) (bruijn ##.k.911 2 0) (##string ##.string.1719) (bruijn ##.x.913 1 0) (bruijn ##.x.914 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 4,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1719.sym, VPOINTER_OTHER),
      statics->vars[0],
      _var0);
}
static void _V10_Dprint__builtin__apply_D336_k178(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__builtin__apply_D336_k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.668 11 0) (close _V10_Dprint__builtin__apply_D336_k179) (bruijn ##.xs.344 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__builtin__apply_D336_k179, self)})),
      statics->up->vars[2]);
}
static void _V10_Dprint__builtin__apply_D336_k176(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__builtin__apply_D336_k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.purec?.227 5 2) ((bruijn ##.x.659 19 0) (close _V10_Dprint__builtin__apply_D336_k177) (bruijn ##.f.343 1 1)) ((bruijn ##.x.659 19 0) (close _V10_Dprint__builtin__apply_D336_k178) (bruijn ##.f.343 1 1)))
if(VDecodeBool(
VGetArg(statics, 5-1, 2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__builtin__apply_D336_k177, self)})),
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__builtin__apply_D336_k178, self)})),
      statics->vars[1]);
}
}
static void _V10_Dprint__builtin__apply_D336_k181(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__builtin__apply_D336_k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 10 0) (bruijn ##.k.906 2 0) (##string ##.string.1720))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 2,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1720.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__builtin__apply_D336_k182(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__builtin__apply_D336_k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.print-expr.246 6 11) (bruijn ##.k.909 1 0) (bruijn ##.x.346 1 1) (bruijn ##.args.335 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 11)), 3,
      statics->vars[0],
      statics->vars[1],
      VGetArg(statics, 5-1, 2));
}
static void _V10_Dprint__builtin__apply_D336_lambda36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__builtin__apply_D336_lambda36, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.x.669 10 0) (close _V10_Dprint__builtin__apply_D336_k182) (##string ##.string.1716))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__builtin__apply_D336_k182, self)})),
      VEncodePointer(&_V10_Dstring_D1716.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__builtin__apply_D336_k180(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__builtin__apply_D336_k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.646 32 0) (close _V10_Dprint__builtin__apply_D336_k181) (close _V10_Dprint__builtin__apply_D336_lambda36) (bruijn ##.xs.344 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__builtin__apply_D336_k181, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__builtin__apply_D336_lambda36, self)})),
      statics->vars[2]);
}
static void _V10_Dprint__builtin__apply_D336_lambda35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__builtin__apply_D336_lambda35, got ~D~N"
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
  // ((close _V10_Dprint__builtin__apply_D336_k176) (close _V10_Dprint__builtin__apply_D336_k180))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__builtin__apply_D336_k176, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__builtin__apply_D336_k180, self)})));
}
static void _V10_Dprint__closure__apply_D337_k184(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__closure__apply_D337_k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 10 0) (bruijn ##.k.915 2 0) (##string ##.string.1720))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 2,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1720.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__closure__apply_D337_k185(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__closure__apply_D337_k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.print-expr.246 6 11) (bruijn ##.k.918 1 0) (bruijn ##.x.355 1 1) (bruijn ##.args.335 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 11)), 3,
      statics->vars[0],
      statics->vars[1],
      VGetArg(statics, 5-1, 2));
}
static void _V10_Dprint__closure__apply_D337_lambda38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__closure__apply_D337_lambda38, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.x.669 10 0) (close _V10_Dprint__closure__apply_D337_k185) (##string ##.string.1716))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__closure__apply_D337_k185, self)})),
      VEncodePointer(&_V10_Dstring_D1716.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__closure__apply_D337_k183(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__closure__apply_D337_k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.646 32 0) (close _V10_Dprint__closure__apply_D337_k184) (close _V10_Dprint__closure__apply_D337_lambda38) (bruijn ##.xs.348 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__closure__apply_D337_k184, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__closure__apply_D337_lambda38, self)})),
      statics->vars[2]);
}
static void _V10_Dprint__closure__apply_D337_k190(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__closure__apply_D337_k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.933 0 0) (bruijn ##.k.929 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V10_Dprint__closure__apply_D337_k191(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__closure__apply_D337_k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 15 0) (bruijn ##.k.934 1 0) (##string ##.string.1721) (bruijn ##.fun.354 2 0) (bruijn ##.x.935 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 4,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1721.sym, VPOINTER_OTHER),
      statics->up->vars[0],
      _var0);
}
static void _V10_Dprint__closure__apply_D337_lambda40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__closure__apply_D337_lambda40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.purec?.227 10 2) ((bruijn ##.x.669 14 0) (bruijn ##.k.934 0 0) (##string ##.string.1718) (bruijn ##.fun.354 1 0)) ((bruijn ##.x.668 15 0) (close _V10_Dprint__closure__apply_D337_k191) (bruijn ##.xs.348 6 2)))
if(VDecodeBool(
VGetArg(statics, 10-1, 2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1718.sym, VPOINTER_OTHER),
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__closure__apply_D337_k191, self)})),
      VGetArg(statics, 6-1, 2));
}
}
static void _V10_Dprint__closure__apply_D337_k189(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__closure__apply_D337_k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.84.353 1 0))) (##vcore.call-with-values (close _V10_Dprint__closure__apply_D337_k190) (close _V10_Dprint__closure__apply_D337_lambda40) (bruijn ##.kk.81.350 4 1)) ((bruijn ##.k.929 3 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__closure__apply_D337_k190, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__closure__apply_D337_lambda40, self)})),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__closure__apply_D337_k188(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__closure__apply_D337_k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.84.353 0 0)) ((close _V10_Dprint__closure__apply_D337_k189) (##inline ##vcore.car (bruijn ##.expr.84.353 0 0))) ((bruijn ##.k.929 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__closure__apply_D337_k189, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__closure__apply_D337_k187(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__closure__apply_D337_k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.930 0 0) ((close _V10_Dprint__closure__apply_D337_k188) (##inline ##vcore.cdr (bruijn ##.f.347 3 1))) ((bruijn ##.k.929 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__closure__apply_D337_k188, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__closure__apply_D337_k186(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__closure__apply_D337_k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.f.347 2 1)) ((bruijn ##.x.670 9 0) (close _V10_Dprint__closure__apply_D337_k187) 'close (##inline ##vcore.car (bruijn ##.f.347 2 1))) ((bruijn ##.k.929 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__closure__apply_D337_k187, self)})),
      _V0close,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__closure__apply_D337_k194(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__closure__apply_D337_k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 13 0) (bruijn ##.k.922 2 0) (##string ##.string.1722))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 2,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1722.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__closure__apply_D337_k193(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__closure__apply_D337_k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.print-expr.246 7 11) (close _V10_Dprint__closure__apply_D337_k194) (bruijn ##.f.347 4 1) (bruijn ##.args.335 6 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 11)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__closure__apply_D337_k194, self)})),
      statics->up->up->up->vars[1],
      VGetArg(statics, 6-1, 2));
}
static void _V10_Dprint__closure__apply_D337_k197(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__closure__apply_D337_k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 14 0) (bruijn ##.k.922 3 0) (##string ##.string.1724) (bruijn ##.x.927 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 3,
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1724.sym, VPOINTER_OTHER),
      _var0);
}
static void _V10_Dprint__closure__apply_D337_k196(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__closure__apply_D337_k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.668 14 0) (close _V10_Dprint__closure__apply_D337_k197) (bruijn ##.xs.348 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__closure__apply_D337_k197, self)})),
      VGetArg(statics, 5-1, 2));
}
static void _V10_Dprint__closure__apply_D337_k195(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__closure__apply_D337_k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.print-expr.246 7 11) (close _V10_Dprint__closure__apply_D337_k196) (bruijn ##.f.347 4 1) (bruijn ##.args.335 6 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 11)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__closure__apply_D337_k196, self)})),
      statics->up->up->up->vars[1],
      VGetArg(statics, 6-1, 2));
}
static void _V10_Dprint__closure__apply_D337_lambda41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__closure__apply_D337_lambda41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.purec?.227 7 2) ((bruijn ##.x.658 22 0) (close _V10_Dprint__closure__apply_D337_k193) (##string ##.string.1723)) ((bruijn ##.x.658 22 0) (close _V10_Dprint__closure__apply_D337_k195) (##string ##.string.1725)))
if(VDecodeBool(
VGetArg(statics, 7-1, 2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__closure__apply_D337_k193, self)})),
      VEncodePointer(&_V10_Dstring_D1723.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__closure__apply_D337_k195, self)})),
      VEncodePointer(&_V10_Dstring_D1725.sym, VPOINTER_OTHER));
}
}
static void _V10_Dprint__closure__apply_D337_k192(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__closure__apply_D337_k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.920 1 0) (close _V10_Dprint__closure__apply_D337_lambda41) (bruijn ##.kk.81.350 1 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__closure__apply_D337_lambda41, self)})),
      statics->vars[1]);
}
static void _V10_Dprint__closure__apply_D337_lambda39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__closure__apply_D337_lambda39, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Dprint__closure__apply_D337_k186) (close _V10_Dprint__closure__apply_D337_k192))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__closure__apply_D337_k186, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__closure__apply_D337_k192, self)})));
}
static void _V10_Dprint__closure__apply_D337_lambda37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__closure__apply_D337_lambda37, got ~D~N"
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
  // (##vcore.call/cc (close _V10_Dprint__closure__apply_D337_k183) (close _V10_Dprint__closure__apply_D337_lambda39))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__closure__apply_D337_k183, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__closure__apply_D337_lambda39, self)})));
}
static void _V10_Dprint__letrec_D338_k201(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__letrec_D338_k201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 12 0) (bruijn ##.k.951 1 0) (##string ##.string.1727))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 2,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1727.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__letrec_D338_k200(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__letrec_D338_k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.purec?.227 7 2) ((bruijn ##.x.669 11 0) (bruijn ##.k.951 0 0) (##string ##.string.1726) (bruijn ##.n.356 3 1)) ((bruijn ##.x.669 11 0) (close _V10_Dprint__letrec_D338_k201) (##string ##.string.1728) (bruijn ##.n.356 3 1)))
if(VDecodeBool(
VGetArg(statics, 7-1, 2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1726.sym, VPOINTER_OTHER),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__letrec_D338_k201, self)})),
      VEncodePointer(&_V10_Dstring_D1728.sym, VPOINTER_OTHER),
      statics->up->up->vars[1]);
}
}
static void _V10_Dprint__letrec_D338_k208(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__letrec_D338_k208, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.648 38 0) (bruijn ##.k.938 9 0) (##string ##.string.1729))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 38-1, 0)), 2,
      VGetArg(statics, 9-1, 0),
      VEncodePointer(&_V10_Dstring_D1729.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__letrec_D338_k207(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__letrec_D338_k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.print-expr.246 11 11) (close _V10_Dprint__letrec_D338_k208) (bruijn ##.body.358 8 3) (bruijn ##.args.360 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 11)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__letrec_D338_k208, self)})),
      VGetArg(statics, 8-1, 3),
      statics->up->vars[0]);
}
static void _V10_Dprint__letrec_D338_k210(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__letrec_D338_k210, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.648 39 0) (bruijn ##.k.945 2 0) (##string ##.string.1730))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 39-1, 0)), 2,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1730.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__letrec_D338_k209(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__letrec_D338_k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.print-expr.246 12 11) (close _V10_Dprint__letrec_D338_k210) (bruijn ##.x.361 1 1) (bruijn ##.args.360 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 11)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__letrec_D338_k210, self)})),
      statics->vars[1],
      statics->up->up->vars[0]);
}
static void _V10_Dprint__letrec_D338_lambda43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__letrec_D338_lambda43, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.x.669 16 0) (close _V10_Dprint__letrec_D338_k209) (##string ##.string.1731) (bruijn ##.i.362 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__letrec_D338_k209, self)})),
      VEncodePointer(&_V10_Dstring_D1731.sym, VPOINTER_OTHER),
      _var2);
}
static void _V10_Dprint__letrec_D338_k206(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__letrec_D338_k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.646 38 0) (close _V10_Dprint__letrec_D338_k207) (close _V10_Dprint__letrec_D338_lambda43) (bruijn ##.xs.357 7 2) (bruijn ##.x.948 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 38-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__letrec_D338_k207, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__letrec_D338_lambda43, self)})),
      VGetArg(statics, 7-1, 2),
      _var0);
}
static void _V10_Dprint__letrec_D338_k205(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__letrec_D338_k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.667 16 0) (close _V10_Dprint__letrec_D338_k206) (bruijn ##.n.356 6 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__letrec_D338_k206, self)})),
      VGetArg(statics, 6-1, 1));
}
static void _V10_Dprint__letrec_D338_lambda44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__letrec_D338_lambda44, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.x.671 12 0) (bruijn ##.k.949 0 0) (##string ##.string.1732) (bruijn ##.i.363 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1732.sym, VPOINTER_OTHER),
      _var1);
}
static void _V10_Dprint__letrec_D338_k204(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__letrec_D338_k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.665 17 0) (close _V10_Dprint__letrec_D338_k205) (close _V10_Dprint__letrec_D338_lambda44) (bruijn ##.x.950 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__letrec_D338_k205, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__letrec_D338_lambda44, self)})),
      _var0);
}
static void _V10_Dprint__letrec_D338_k203(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__letrec_D338_k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.667 14 0) (close _V10_Dprint__letrec_D338_k204) (bruijn ##.n.356 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__letrec_D338_k204, self)})),
      statics->up->up->up->vars[1]);
}
static void _V10_Dprint__letrec_D338_k202(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__letrec_D338_k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 11 0) (close _V10_Dprint__letrec_D338_k203) (##string ##.string.1733) (bruijn ##.n.356 3 1) (bruijn ##.n.356 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__letrec_D338_k203, self)})),
      VEncodePointer(&_V10_Dstring_D1733.sym, VPOINTER_OTHER),
      statics->up->up->vars[1],
      statics->up->up->vars[1]);
}
static void _V10_Dprint__letrec_D338_k199(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__letrec_D338_k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__letrec_D338_k200) (close _V10_Dprint__letrec_D338_k202))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__letrec_D338_k200, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__letrec_D338_k202, self)})));
}
static void _V10_Dprint__letrec_D338_k198(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__letrec_D338_k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.648 30 0) (close _V10_Dprint__letrec_D338_k199) (##string ##.string.1734))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__letrec_D338_k199, self)})),
      VEncodePointer(&_V10_Dstring_D1734.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__letrec_D338_lambda42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 if(argc != 5) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__letrec_D338_lambda42, got ~D~N"
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
  // ((bruijn ##.x.648 29 0) (close _V10_Dprint__letrec_D338_k198) (##string ##.string.1735))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__letrec_D338_k198, self)})),
      VEncodePointer(&_V10_Dstring_D1735.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__basic__block_D339_k214(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__basic__block_D339_k214, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 12 0) (bruijn ##.k.966 1 0) (##string ##.string.1727))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 2,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1727.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__basic__block_D339_k213(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__basic__block_D339_k213, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.purec?.227 7 2) ((bruijn ##.x.669 11 0) (bruijn ##.k.966 0 0) (##string ##.string.1726) (bruijn ##.n.365 3 2)) ((bruijn ##.x.669 11 0) (close _V10_Dprint__basic__block_D339_k214) (##string ##.string.1728) (bruijn ##.n.365 3 2)))
if(VDecodeBool(
VGetArg(statics, 7-1, 2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1726.sym, VPOINTER_OTHER),
      statics->up->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__basic__block_D339_k214, self)})),
      VEncodePointer(&_V10_Dstring_D1728.sym, VPOINTER_OTHER),
      statics->up->up->vars[2]);
}
}
static void _V10_Dprint__basic__block_D339_k221(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__basic__block_D339_k221, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.648 38 0) (bruijn ##.k.953 9 0) (##string ##.string.1729))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 38-1, 0)), 2,
      VGetArg(statics, 9-1, 0),
      VEncodePointer(&_V10_Dstring_D1729.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__basic__block_D339_k220(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__basic__block_D339_k220, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.print-expr.246 11 11) (close _V10_Dprint__basic__block_D339_k221) (bruijn ##.body.368 8 5) (bruijn ##.args.369 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 11)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__basic__block_D339_k221, self)})),
      VGetArg(statics, 8-1, 5),
      statics->up->vars[0]);
}
static void _V10_Dprint__basic__block_D339_k223(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__basic__block_D339_k223, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.648 39 0) (bruijn ##.k.960 2 0) (##string ##.string.1730))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 39-1, 0)), 2,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1730.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__basic__block_D339_k222(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__basic__block_D339_k222, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.print-basic-expr.245 12 10) (close _V10_Dprint__basic__block_D339_k223) (bruijn ##.x.370 1 1) (bruijn ##.args.369 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 10)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__basic__block_D339_k223, self)})),
      statics->vars[1],
      statics->up->up->vars[0]);
}
static void _V10_Dprint__basic__block_D339_lambda46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__basic__block_D339_lambda46, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.x.669 16 0) (close _V10_Dprint__basic__block_D339_k222) (##string ##.string.1731) (bruijn ##.i.371 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__basic__block_D339_k222, self)})),
      VEncodePointer(&_V10_Dstring_D1731.sym, VPOINTER_OTHER),
      _var2);
}
static void _V10_Dprint__basic__block_D339_k219(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__basic__block_D339_k219, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.646 38 0) (close _V10_Dprint__basic__block_D339_k220) (close _V10_Dprint__basic__block_D339_lambda46) (bruijn ##.vals.367 7 4) (bruijn ##.x.963 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 38-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__basic__block_D339_k220, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__basic__block_D339_lambda46, self)})),
      VGetArg(statics, 7-1, 4),
      _var0);
}
static void _V10_Dprint__basic__block_D339_k218(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__basic__block_D339_k218, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.667 16 0) (close _V10_Dprint__basic__block_D339_k219) (bruijn ##.n.365 6 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__basic__block_D339_k219, self)})),
      VGetArg(statics, 6-1, 2));
}
static void _V10_Dprint__basic__block_D339_lambda47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__basic__block_D339_lambda47, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.x.671 12 0) (bruijn ##.k.964 0 0) (##string ##.string.1732) (bruijn ##.i.372 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1732.sym, VPOINTER_OTHER),
      _var1);
}
static void _V10_Dprint__basic__block_D339_k217(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__basic__block_D339_k217, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.665 17 0) (close _V10_Dprint__basic__block_D339_k218) (close _V10_Dprint__basic__block_D339_lambda47) (bruijn ##.x.965 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__basic__block_D339_k218, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__basic__block_D339_lambda47, self)})),
      _var0);
}
static void _V10_Dprint__basic__block_D339_k216(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__basic__block_D339_k216, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.667 14 0) (close _V10_Dprint__basic__block_D339_k217) (bruijn ##.n.365 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__basic__block_D339_k217, self)})),
      statics->up->up->up->vars[2]);
}
static void _V10_Dprint__basic__block_D339_k215(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__basic__block_D339_k215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 11 0) (close _V10_Dprint__basic__block_D339_k216) (##string ##.string.1733) (bruijn ##.n.365 3 2) (bruijn ##.n.365 3 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__basic__block_D339_k216, self)})),
      VEncodePointer(&_V10_Dstring_D1733.sym, VPOINTER_OTHER),
      statics->up->up->vars[2],
      statics->up->up->vars[2]);
}
static void _V10_Dprint__basic__block_D339_k212(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__basic__block_D339_k212, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__basic__block_D339_k213) (close _V10_Dprint__basic__block_D339_k215))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__basic__block_D339_k213, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__basic__block_D339_k215, self)})));
}
static void _V10_Dprint__basic__block_D339_k211(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__basic__block_D339_k211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.648 30 0) (close _V10_Dprint__basic__block_D339_k212) (##string ##.string.1734))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__basic__block_D339_k212, self)})),
      VEncodePointer(&_V10_Dstring_D1734.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__basic__block_D339_lambda45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5) {
 if(argc != 6) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__basic__block_D339_lambda45, got ~D~N"
  "-- expected 6~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[6]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 6, 6, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  self->vars[5] = _var5;
  // ((bruijn ##.x.648 29 0) (close _V10_Dprint__basic__block_D339_k211) (##string ##.string.1735))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__basic__block_D339_k211, self)})),
      VEncodePointer(&_V10_Dstring_D1735.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__define__global_D340_k224(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__define__global_D340_k224, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.purec?.227 5 2) ((bruijn ##.x.669 9 0) (bruijn ##.k.975 0 0) (##string ##.string.1736)) ((bruijn ##.x.669 9 0) (bruijn ##.k.975 0 0) (##string ##.string.1737)))
if(VDecodeBool(
VGetArg(statics, 5-1, 2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D1736.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D1737.sym, VPOINTER_OTHER));
}
}
static void _V10_Dprint__define__global_D340_k230(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__define__global_D340_k230, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 14 0) (bruijn ##.k.968 6 0) (##string ##.string.1738))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 2,
      VGetArg(statics, 6-1, 0),
      VEncodePointer(&_V10_Dstring_D1738.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__define__global_D340_k229(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__define__global_D340_k229, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.print-expr.246 8 11) (close _V10_Dprint__define__global_D340_k230) (bruijn ##.x.375 5 3) (bruijn ##.args.335 7 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 11)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__define__global_D340_k230, self)})),
      VGetArg(statics, 5-1, 3),
      VGetArg(statics, 7-1, 2));
}
static void _V10_Dprint__define__global_D340_k228(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__define__global_D340_k228, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 12 0) (close _V10_Dprint__define__global_D340_k229) (##string ##.string.1716))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__define__global_D340_k229, self)})),
      VEncodePointer(&_V10_Dstring_D1716.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__define__global_D340_k227(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__define__global_D340_k227, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.print-literal.241 6 6) (close _V10_Dprint__define__global_D340_k228) (bruijn ##.y.374 3 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 6)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__define__global_D340_k228, self)})),
      statics->up->up->vars[2]);
}
static void _V10_Dprint__define__global_D340_k226(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__define__global_D340_k226, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 10 0) (close _V10_Dprint__define__global_D340_k227) (##string ##.string.1716))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__define__global_D340_k227, self)})),
      VEncodePointer(&_V10_Dstring_D1716.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__define__global_D340_k225(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__define__global_D340_k225, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.print-expr.246 4 11) (close _V10_Dprint__define__global_D340_k226) (bruijn ##.k.373 1 1) (bruijn ##.args.335 3 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[11]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__define__global_D340_k226, self)})),
      statics->vars[1],
      statics->up->up->vars[2]);
}
static void _V10_Dprint__define__global_D340_lambda48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 if(argc != 5) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__define__global_D340_lambda48, got ~D~N"
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
  // ((close _V10_Dprint__define__global_D340_k224) (close _V10_Dprint__define__global_D340_k225))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__define__global_D340_k224, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__define__global_D340_k225, self)})));
}
static void _V10_Dprint__set_D341_k236(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D341_k236, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.998 0 0) (bruijn ##.k.992 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
static void _V10_Dprint__set_D341_k237(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D341_k237, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.purec?.227 12 2) ((bruijn ##.x.669 16 0) (bruijn ##.k.1004 0 0) (##string ##.string.1739)) ((bruijn ##.x.669 16 0) (bruijn ##.k.1004 0 0) (##string ##.string.1740)))
if(VDecodeBool(
VGetArg(statics, 12-1, 2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D1739.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D1740.sym, VPOINTER_OTHER));
}
}
static void _V10_Dprint__set_D341_k241(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D341_k241, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 19 0) (bruijn ##.k.999 4 0) (##string ##.string.1738))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 2,
      statics->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1738.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__set_D341_k240(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D341_k240, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.print-expr.246 13 11) (close _V10_Dprint__set_D341_k241) (bruijn ##.x.379 10 3) (bruijn ##.args.335 12 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 11)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D341_k241, self)})),
      VGetArg(statics, 10-1, 3),
      VGetArg(statics, 12-1, 2));
}
static void _V10_Dprint__set_D341_k239(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D341_k239, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 17 0) (close _V10_Dprint__set_D341_k240) (##string ##.string.1741) (##inline ##vcore.car (bruijn ##.expr.89.386 4 0)) (##inline ##vcore.car (bruijn ##.expr.90.388 3 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D341_k240, self)})),
      VEncodePointer(&_V10_Dstring_D1741.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        statics->up->up->up->vars[0]),
      VInlineCar2(runtime,
        statics->up->up->vars[0]));
}
static void _V10_Dprint__set_D341_k238(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D341_k238, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.print-expr.246 11 11) (close _V10_Dprint__set_D341_k239) (bruijn ##.k.377 8 1) (bruijn ##.args.335 10 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 11)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D341_k239, self)})),
      VGetArg(statics, 8-1, 1),
      VGetArg(statics, 10-1, 2));
}
static void _V10_Dprint__set_D341_lambda51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D341_lambda51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__set_D341_k237) (close _V10_Dprint__set_D341_k238))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__set_D341_k237, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D341_k238, self)})));
}
static void _V10_Dprint__set_D341_k235(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D341_k235, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.90.388 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.90.388 0 0))) (##vcore.call-with-values (close _V10_Dprint__set_D341_k236) (close _V10_Dprint__set_D341_lambda51) (bruijn ##.kk.85.381 5 1)) ((bruijn ##.k.992 4 0) #f)) ((bruijn ##.k.992 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D341_k236, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D341_lambda51, self)})),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__set_D341_k234(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D341_k234, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.89.386 0 0)) ((close _V10_Dprint__set_D341_k235) (##inline ##vcore.cdr (bruijn ##.expr.89.386 0 0))) ((bruijn ##.k.992 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__set_D341_k235, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__set_D341_k233(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D341_k233, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.88.384 0 0)) ((close _V10_Dprint__set_D341_k234) (##inline ##vcore.cdr (bruijn ##.expr.88.384 0 0))) ((bruijn ##.k.992 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__set_D341_k234, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__set_D341_k232(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D341_k232, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.993 0 0) ((close _V10_Dprint__set_D341_k233) (##inline ##vcore.cdr (bruijn ##.y.378 3 2))) ((bruijn ##.k.992 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__set_D341_k233, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__set_D341_k231(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D341_k231, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.y.378 2 2)) ((bruijn ##.x.670 9 0) (close _V10_Dprint__set_D341_k232) 'bruijn (##inline ##vcore.car (bruijn ##.y.378 2 2))) ((bruijn ##.k.992 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D341_k232, self)})),
      _V0bruijn,
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__set_D341_lambda52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D341_lambda52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.645 37 0) (bruijn ##.k.980 0 0) (##string ##.string.1742) (bruijn ##.y.378 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1742.sym, VPOINTER_OTHER),
      VGetArg(statics, 5-1, 2));
}
static void _V10_Dprint__set_D341_k244(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D341_k244, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.977 3 0) (close _V10_Dprint__set_D341_lambda52) (bruijn ##.kk.85.381 3 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->up->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D341_lambda52, self)})),
      statics->up->up->vars[1]);
}
static void _V10_Dprint__set_D341_k243(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D341_k243, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.981 0 0) (close _V10_Dprint__set_D341_k244))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D341_k244, self)})));
}
static void _V10_Dprint__set_D341_k245(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D341_k245, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.purec?.227 9 2) ((bruijn ##.x.669 13 0) (bruijn ##.k.990 0 0) (##string ##.string.1743)) ((bruijn ##.x.669 13 0) (bruijn ##.k.990 0 0) (##string ##.string.1744)))
if(VDecodeBool(
VGetArg(statics, 9-1, 2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D1743.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D1744.sym, VPOINTER_OTHER));
}
}
static void _V10_Dprint__set_D341_k251(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D341_k251, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 18 0) (bruijn ##.k.982 7 0) (##string ##.string.1738))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 2,
      VGetArg(statics, 7-1, 0),
      VEncodePointer(&_V10_Dstring_D1738.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__set_D341_k250(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D341_k250, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.print-expr.246 12 11) (close _V10_Dprint__set_D341_k251) (bruijn ##.x.379 9 3) (bruijn ##.args.335 11 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 11)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D341_k251, self)})),
      VGetArg(statics, 9-1, 3),
      VGetArg(statics, 11-1, 2));
}
static void _V10_Dprint__set_D341_k249(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D341_k249, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 16 0) (close _V10_Dprint__set_D341_k250) (##string ##.string.1716))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D341_k250, self)})),
      VEncodePointer(&_V10_Dstring_D1716.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__set_D341_k248(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D341_k248, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.print-literal.241 10 6) (close _V10_Dprint__set_D341_k249) (bruijn ##.y.378 7 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 6)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D341_k249, self)})),
      VGetArg(statics, 7-1, 2));
}
static void _V10_Dprint__set_D341_k247(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D341_k247, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 14 0) (close _V10_Dprint__set_D341_k248) (##string ##.string.1716))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D341_k248, self)})),
      VEncodePointer(&_V10_Dstring_D1716.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__set_D341_k246(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D341_k246, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.print-expr.246 8 11) (close _V10_Dprint__set_D341_k247) (bruijn ##.k.377 5 1) (bruijn ##.args.335 7 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 11)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D341_k247, self)})),
      VGetArg(statics, 5-1, 1),
      VGetArg(statics, 7-1, 2));
}
static void _V10_Dprint__set_D341_lambda53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D341_lambda53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.1677) ((##vcore.symbol? (bruijn ##.y.378 4 2))) (if (bruijn ##.reg.1677 0 0) ((close _V10_Dprint__set_D341_k245) (close _V10_Dprint__set_D341_k246)) ((bruijn ##.x.645 36 0) (bruijn ##.k.982 1 0) (##string ##.string.1745))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->up->up->up->vars[2]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__set_D341_k245, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D341_k246, self)})));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 2,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1745.sym, VPOINTER_OTHER));
}
    }
}
static void _V10_Dprint__set_D341_k242(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D341_k242, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (close _V10_Dprint__set_D341_k243) (close _V10_Dprint__set_D341_lambda53) (bruijn ##.kk.85.381 1 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D341_k243, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D341_lambda53, self)})),
      statics->vars[1]);
}
static void _V10_Dprint__set_D341_lambda50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D341_lambda50, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Dprint__set_D341_k231) (close _V10_Dprint__set_D341_k242))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__set_D341_k231, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D341_k242, self)})));
}
static void _V10_Dprint__set_D341_lambda49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 if(argc != 5) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D341_lambda49, got ~D~N"
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
  // (##vcore.call/cc (bruijn ##.k.976 0 0) (close _V10_Dprint__set_D341_lambda50))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D341_lambda50, self)})));
}
static void _V10_Dprint__inline_D342_k253(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__inline_D342_k253, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.not (bruijn ##.inline.393 1 0)) ((bruijn ##.x.645 34 0) (bruijn ##.k.1020 0 0) (##string ##.string.1746) (bruijn ##.f.391 2 1)) ((bruijn ##.k.1020 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1746.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__inline_D342_k258(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__inline_D342_k258, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.print-expr.246 10 11) (bruijn ##.k.1014 1 0) (bruijn ##.x.394 1 1) (bruijn ##.args.335 9 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 11)), 3,
      statics->vars[0],
      statics->vars[1],
      VGetArg(statics, 9-1, 2));
}
static void _V10_Dprint__inline_D342_lambda55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__inline_D342_lambda55, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.x.669 14 0) (close _V10_Dprint__inline_D342_k258) (##string ##.string.1747))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__inline_D342_k258, self)})),
      VEncodePointer(&_V10_Dstring_D1747.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__inline_D342_k257(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__inline_D342_k257, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.646 36 0) (bruijn ##.k.1012 1 0) (close _V10_Dprint__inline_D342_lambda55) (##inline ##vcore.cdr (bruijn ##.xs.392 5 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 3,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__inline_D342_lambda55, self)})),
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 2)));
}
static void _V10_Dprint__inline_D342_k256(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__inline_D342_k256, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.null? (bruijn ##.xs.392 4 2))) ((bruijn ##.print-expr.246 7 11) (close _V10_Dprint__inline_D342_k257) (##inline ##vcore.car (bruijn ##.xs.392 4 2)) (bruijn ##.args.335 6 2)) ((bruijn ##.k.1012 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlineNullP2(runtime,
        statics->up->up->up->vars[2])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 11)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__inline_D342_k257, self)})),
      VInlineCar2(runtime,
        statics->up->up->up->vars[2]),
      VGetArg(statics, 6-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__inline_D342_k259(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__inline_D342_k259, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 12 0) (bruijn ##.k.1007 4 0) (##string ##.string.1715))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 2,
      statics->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1715.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__inline_D342_k255(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__inline_D342_k255, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__inline_D342_k256) (close _V10_Dprint__inline_D342_k259))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__inline_D342_k256, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__inline_D342_k259, self)})));
}
static void _V10_Dprint__inline_D342_k254(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__inline_D342_k254, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 10 0) (close _V10_Dprint__inline_D342_k255) (##string ##.string.1748) (bruijn ##.inline.393 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__inline_D342_k255, self)})),
      VEncodePointer(&_V10_Dstring_D1748.sym, VPOINTER_OTHER),
      statics->vars[0]);
}
static void _V10_Dprint__inline_D342_k252(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__inline_D342_k252, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__inline_D342_k253) (close _V10_Dprint__inline_D342_k254))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__inline_D342_k253, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__inline_D342_k254, self)})));
}
static void _V10_Dprint__inline_D342_lambda54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__inline_D342_lambda54, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.x.657 20 0) (close _V10_Dprint__inline_D342_k252) (bruijn ##.f.391 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__inline_D342_k252, self)})),
      _var1);
}
static void _V10_Dprint__expr_D246_k263(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k263, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1221 0 0) (bruijn ##.k.1216 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
static void _V10_Dprint__expr_D246_lambda57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_lambda57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.658 23 0) (bruijn ##.k.1222 0 0) (##string ##.string.1749))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D1749.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__expr_D246_k262(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k262, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.32.398 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.car (bruijn ##.expr.32.398 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.32.398 0 0))) (##vcore.call-with-values (close _V10_Dprint__expr_D246_k263) (close _V10_Dprint__expr_D246_lambda57) (bruijn ##.kk.29.395 3 1)) ((bruijn ##.k.1216 2 0) #f)) ((bruijn ##.k.1216 2 0) #f)) ((bruijn ##.k.1216 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCar2(runtime,
        _var0)))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_k263, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_lambda57, self)})),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D246_k261(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k261, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1217 0 0) ((close _V10_Dprint__expr_D246_k262) (##inline ##vcore.cdr (bruijn ##.expr.334 4 1))) ((bruijn ##.k.1216 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D246_k262, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D246_k260(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k260, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.334 3 1)) ((bruijn ##.x.670 8 0) (close _V10_Dprint__expr_D246_k261) 'quote (##inline ##vcore.car (bruijn ##.expr.334 3 1))) ((bruijn ##.k.1216 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_k261, self)})),
      _V0quote,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D246_k271(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k271, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1209 0 0) (bruijn ##.k.1201 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
static void _V10_Dprint__expr_D246_lambda58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_lambda58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.print-literal-string.239 11 4) (bruijn ##.k.1210 0 0) (##inline ##vcore.car (bruijn ##.expr.36.402 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 4)), 2,
      _var0,
      VInlineCar2(runtime,
        statics->vars[0]));
}
static void _V10_Dprint__expr_D246_k270(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k270, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.36.402 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.36.402 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.34.400 3 0))) (##vcore.call-with-values (close _V10_Dprint__expr_D246_k271) (close _V10_Dprint__expr_D246_lambda58) (bruijn ##.kk.29.395 7 1)) ((bruijn ##.k.1201 5 0) #f)) ((bruijn ##.k.1201 5 0) #f)) ((bruijn ##.k.1201 5 0) #f))
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
        statics->up->up->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_k271, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_lambda58, self)})),
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
static void _V10_Dprint__expr_D246_k269(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k269, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1205 0 0) ((close _V10_Dprint__expr_D246_k270) (##inline ##vcore.cdr (bruijn ##.expr.35.401 1 0))) ((bruijn ##.k.1201 4 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D246_k270, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D246_k268(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k268, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.35.401 0 0)) ((bruijn ##.x.670 12 0) (close _V10_Dprint__expr_D246_k269) '##string (##inline ##vcore.car (bruijn ##.expr.35.401 0 0))) ((bruijn ##.k.1201 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_k269, self)})),
      _V10string,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D246_k267(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k267, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.34.400 0 0)) ((close _V10_Dprint__expr_D246_k268) (##inline ##vcore.car (bruijn ##.expr.34.400 0 0))) ((bruijn ##.k.1201 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D246_k268, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D246_k266(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k266, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1202 0 0) ((close _V10_Dprint__expr_D246_k267) (##inline ##vcore.cdr (bruijn ##.expr.334 5 1))) ((bruijn ##.k.1201 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D246_k267, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D246_k265(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k265, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.334 4 1)) ((bruijn ##.x.670 9 0) (close _V10_Dprint__expr_D246_k266) 'quote (##inline ##vcore.car (bruijn ##.expr.334 4 1))) ((bruijn ##.k.1201 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_k266, self)})),
      _V0quote,
      VInlineCar2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D246_k276(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k276, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1196 0 0) (bruijn ##.k.1192 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
static void _V10_Dprint__expr_D246_lambda59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_lambda59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.print-literal.241 9 6) (bruijn ##.k.1197 0 0) (##inline ##vcore.car (bruijn ##.expr.38.405 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 6)), 2,
      _var0,
      VInlineCar2(runtime,
        statics->vars[0]));
}
static void _V10_Dprint__expr_D246_k275(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k275, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.38.405 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.38.405 0 0))) (##vcore.call-with-values (close _V10_Dprint__expr_D246_k276) (close _V10_Dprint__expr_D246_lambda59) (bruijn ##.kk.29.395 5 1)) ((bruijn ##.k.1192 2 0) #f)) ((bruijn ##.k.1192 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_k276, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_lambda59, self)})),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D246_k274(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k274, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1193 0 0) ((close _V10_Dprint__expr_D246_k275) (##inline ##vcore.cdr (bruijn ##.expr.334 6 1))) ((bruijn ##.k.1192 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D246_k275, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D246_k273(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k273, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.334 5 1)) ((bruijn ##.x.670 10 0) (close _V10_Dprint__expr_D246_k274) 'quote (##inline ##vcore.car (bruijn ##.expr.334 5 1))) ((bruijn ##.k.1192 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 5-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_k274, self)})),
      _V0quote,
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D246_k281(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k281, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1187 0 0) (bruijn ##.k.1183 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
static void _V10_Dprint__expr_D246_lambda60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_lambda60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 15 0) (bruijn ##.k.1188 0 0) (##string ##.string.1750) (##inline ##vcore.car (bruijn ##.expr.40.408 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1750.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        statics->vars[0]));
}
static void _V10_Dprint__expr_D246_k280(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k280, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.40.408 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.40.408 0 0))) (##vcore.call-with-values (close _V10_Dprint__expr_D246_k281) (close _V10_Dprint__expr_D246_lambda60) (bruijn ##.kk.29.395 6 1)) ((bruijn ##.k.1183 2 0) #f)) ((bruijn ##.k.1183 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_k281, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_lambda60, self)})),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D246_k279(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k279, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1184 0 0) ((close _V10_Dprint__expr_D246_k280) (##inline ##vcore.cdr (bruijn ##.expr.334 7 1))) ((bruijn ##.k.1183 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D246_k280, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 7-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D246_k278(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k278, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.334 6 1)) ((bruijn ##.x.670 11 0) (close _V10_Dprint__expr_D246_k279) 'close (##inline ##vcore.car (bruijn ##.expr.334 6 1))) ((bruijn ##.k.1183 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 6-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_k279, self)})),
      _V0close,
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D246_k290(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k290, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1172 0 0) (bruijn ##.k.1166 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
}
static void _V10_Dprint__expr_D246_k292(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k292, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.658 33 0) (bruijn ##.k.1173 2 0) (bruijn ##.x.1175 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 2,
      statics->up->vars[0],
      _var0);
}
static void _V10_Dprint__expr_D246_k296(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k296, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1179 0 0) ((bruijn ##.x.669 25 0) (bruijn ##.k.1173 5 0) (##string ##.string.1754) (bruijn ##.right.416 6 0)) ((bruijn ##.x.669 25 0) (bruijn ##.k.1173 5 0) (##string ##.string.1755) (bruijn ##.up.414 8 0) (bruijn ##.right.416 6 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 3,
      VGetArg(statics, 5-1, 0),
      VEncodePointer(&_V10_Dstring_D1754.sym, VPOINTER_OTHER),
      VGetArg(statics, 6-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 4,
      VGetArg(statics, 5-1, 0),
      VEncodePointer(&_V10_Dstring_D1755.sym, VPOINTER_OTHER),
      VGetArg(statics, 8-1, 0),
      VGetArg(statics, 6-1, 0));
}
}
static void _V10_Dprint__expr_D246_k295(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k295, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1178 0 0) ((bruijn ##.x.669 24 0) (bruijn ##.k.1173 4 0) (##string ##.string.1753) (bruijn ##.right.416 5 0)) ((bruijn ##.x.662 31 0) (close _V10_Dprint__expr_D246_k296) (bruijn ##.up.414 7 0) 4))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 3,
      statics->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1753.sym, VPOINTER_OTHER),
      VGetArg(statics, 5-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_k296, self)})),
      VGetArg(statics, 7-1, 0),
      VEncodeInt(4l));
}
}
static void _V10_Dprint__expr_D246_k294(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k294, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1177 0 0) ((bruijn ##.x.669 23 0) (bruijn ##.k.1173 3 0) (##string ##.string.1752) (bruijn ##.right.416 4 0)) ((bruijn ##.x.662 30 0) (close _V10_Dprint__expr_D246_k295) (bruijn ##.up.414 6 0) 3))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 3,
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1752.sym, VPOINTER_OTHER),
      statics->up->up->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_k295, self)})),
      VGetArg(statics, 6-1, 0),
      VEncodeInt(3l));
}
}
static void _V10_Dprint__expr_D246_k293(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k293, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1176 0 0) ((bruijn ##.x.669 22 0) (bruijn ##.k.1173 2 0) (##string ##.string.1751) (bruijn ##.right.416 3 0)) ((bruijn ##.x.662 29 0) (close _V10_Dprint__expr_D246_k294) (bruijn ##.up.414 5 0) 2))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 3,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1751.sym, VPOINTER_OTHER),
      statics->up->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_k294, self)})),
      VGetArg(statics, 5-1, 0),
      VEncodeInt(2l));
}
}
static void _V10_Dprint__expr_D246_k291(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k291, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1174 0 0) ((bruijn ##.x.661 29 0) (close _V10_Dprint__expr_D246_k292) (bruijn ##.args.335 15 2) (bruijn ##.right.416 2 0)) ((bruijn ##.x.662 28 0) (close _V10_Dprint__expr_D246_k293) (bruijn ##.up.414 4 0) 1))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_k292, self)})),
      VGetArg(statics, 15-1, 2),
      statics->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_k293, self)})),
      statics->up->up->up->vars[0],
      VEncodeInt(1l));
}
}
static void _V10_Dprint__expr_D246_lambda61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_lambda61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.662 27 0) (close _V10_Dprint__expr_D246_k291) (bruijn ##.up.414 3 0) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_k291, self)})),
      statics->up->up->vars[0],
      VEncodeInt(0l));
}
static void _V10_Dprint__expr_D246_k289(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k289, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.44.415 1 0))) (##vcore.call-with-values (close _V10_Dprint__expr_D246_k290) (close _V10_Dprint__expr_D246_lambda61) (bruijn ##.kk.29.395 11 1)) ((bruijn ##.k.1166 6 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_k290, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_lambda61, self)})),
      VGetArg(statics, 11-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D246_k288(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k288, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.44.415 0 0)) ((close _V10_Dprint__expr_D246_k289) (##inline ##vcore.car (bruijn ##.expr.44.415 0 0))) ((bruijn ##.k.1166 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D246_k289, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D246_k287(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k287, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D246_k288) (##inline ##vcore.cdr (bruijn ##.expr.43.413 1 0)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D246_k288, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
static void _V10_Dprint__expr_D246_k286(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k286, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.43.413 0 0)) ((close _V10_Dprint__expr_D246_k287) (##inline ##vcore.car (bruijn ##.expr.43.413 0 0))) ((bruijn ##.k.1166 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D246_k287, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D246_k285(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k285, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.42.411 0 0)) ((close _V10_Dprint__expr_D246_k286) (##inline ##vcore.cdr (bruijn ##.expr.42.411 0 0))) ((bruijn ##.k.1166 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D246_k286, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D246_k284(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k284, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1167 0 0) ((close _V10_Dprint__expr_D246_k285) (##inline ##vcore.cdr (bruijn ##.expr.334 8 1))) ((bruijn ##.k.1166 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D246_k285, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 8-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D246_k283(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k283, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.334 7 1)) ((bruijn ##.x.670 12 0) (close _V10_Dprint__expr_D246_k284) 'bruijn (##inline ##vcore.car (bruijn ##.expr.334 7 1))) ((bruijn ##.k.1166 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 7-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_k284, self)})),
      _V0bruijn,
      VInlineCar2(runtime,
        VGetArg(statics, 7-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D246_k303(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k303, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1155 0 0) (bruijn ##.k.1149 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
static void _V10_Dprint__expr_D246_k309(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k309, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.648 46 0) (bruijn ##.k.1156 6 0) (##string ##.string.1756))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 46-1, 0)), 2,
      VGetArg(statics, 6-1, 0),
      VEncodePointer(&_V10_Dstring_D1756.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__expr_D246_k308(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k308, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.print-expr.246 19 11) (close _V10_Dprint__expr_D246_k309) (##inline ##vcore.car (bruijn ##.expr.48.422 6 0)) (bruijn ##.args.335 18 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 11)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_k309, self)})),
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 0)),
      VGetArg(statics, 18-1, 2));
}
static void _V10_Dprint__expr_D246_k307(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k307, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.648 44 0) (close _V10_Dprint__expr_D246_k308) (##string ##.string.1757))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 44-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_k308, self)})),
      VEncodePointer(&_V10_Dstring_D1757.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__expr_D246_k306(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k306, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.print-expr.246 17 11) (close _V10_Dprint__expr_D246_k307) (##inline ##vcore.car (bruijn ##.expr.47.420 5 0)) (bruijn ##.args.335 16 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 11)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_k307, self)})),
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 0)),
      VGetArg(statics, 16-1, 2));
}
static void _V10_Dprint__expr_D246_k305(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k305, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.648 42 0) (close _V10_Dprint__expr_D246_k306) (##string ##.string.1758))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 42-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_k306, self)})),
      VEncodePointer(&_V10_Dstring_D1758.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__expr_D246_k304(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k304, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.print-expr.246 15 11) (close _V10_Dprint__expr_D246_k305) (##inline ##vcore.car (bruijn ##.expr.46.418 4 0)) (bruijn ##.args.335 14 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 11)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_k305, self)})),
      VInlineCar2(runtime,
        statics->up->up->up->vars[0]),
      VGetArg(statics, 14-1, 2));
}
static void _V10_Dprint__expr_D246_lambda62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_lambda62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.648 40 0) (close _V10_Dprint__expr_D246_k304) (##string ##.string.1759))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 40-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_k304, self)})),
      VEncodePointer(&_V10_Dstring_D1759.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__expr_D246_k302(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k302, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.48.422 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.48.422 0 0))) (##vcore.call-with-values (close _V10_Dprint__expr_D246_k303) (close _V10_Dprint__expr_D246_lambda62) (bruijn ##.kk.29.395 10 1)) ((bruijn ##.k.1149 4 0) #f)) ((bruijn ##.k.1149 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_k303, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_lambda62, self)})),
      VGetArg(statics, 10-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D246_k301(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k301, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.47.420 0 0)) ((close _V10_Dprint__expr_D246_k302) (##inline ##vcore.cdr (bruijn ##.expr.47.420 0 0))) ((bruijn ##.k.1149 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D246_k302, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D246_k300(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k300, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.46.418 0 0)) ((close _V10_Dprint__expr_D246_k301) (##inline ##vcore.cdr (bruijn ##.expr.46.418 0 0))) ((bruijn ##.k.1149 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D246_k301, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D246_k299(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k299, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1150 0 0) ((close _V10_Dprint__expr_D246_k300) (##inline ##vcore.cdr (bruijn ##.expr.334 9 1))) ((bruijn ##.k.1149 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D246_k300, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 9-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D246_k298(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k298, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.334 8 1)) ((bruijn ##.x.670 13 0) (close _V10_Dprint__expr_D246_k299) 'if (##inline ##vcore.car (bruijn ##.expr.334 8 1))) ((bruijn ##.k.1149 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 8-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_k299, self)})),
      _V0if,
      VInlineCar2(runtime,
        VGetArg(statics, 8-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D246_k316(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k316, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1144 0 0) (bruijn ##.k.1138 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
static void _V10_Dprint__expr_D246_lambda63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_lambda63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.print-set.341 13 5) (bruijn ##.k.1145 0 0) (##inline ##vcore.car (bruijn ##.expr.50.425 3 0)) (##inline ##vcore.car (bruijn ##.expr.51.427 2 0)) (##inline ##vcore.car (bruijn ##.expr.52.429 1 0)) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 5)), 5,
      _var0,
      VInlineCar2(runtime,
        statics->up->up->vars[0]),
      VInlineCar2(runtime,
        statics->up->vars[0]),
      VInlineCar2(runtime,
        statics->vars[0]),
      VEncodeBool(false));
}
static void _V10_Dprint__expr_D246_k315(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k315, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.52.429 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.52.429 0 0))) (##vcore.call-with-values (close _V10_Dprint__expr_D246_k316) (close _V10_Dprint__expr_D246_lambda63) (bruijn ##.kk.29.395 11 1)) ((bruijn ##.k.1138 4 0) #f)) ((bruijn ##.k.1138 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_k316, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_lambda63, self)})),
      VGetArg(statics, 11-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D246_k314(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k314, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.51.427 0 0)) ((close _V10_Dprint__expr_D246_k315) (##inline ##vcore.cdr (bruijn ##.expr.51.427 0 0))) ((bruijn ##.k.1138 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D246_k315, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D246_k313(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k313, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.50.425 0 0)) ((close _V10_Dprint__expr_D246_k314) (##inline ##vcore.cdr (bruijn ##.expr.50.425 0 0))) ((bruijn ##.k.1138 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D246_k314, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D246_k312(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k312, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1139 0 0) ((close _V10_Dprint__expr_D246_k313) (##inline ##vcore.cdr (bruijn ##.expr.334 10 1))) ((bruijn ##.k.1138 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D246_k313, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 10-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D246_k311(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k311, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.334 9 1)) ((bruijn ##.x.670 14 0) (close _V10_Dprint__expr_D246_k312) 'set! (##inline ##vcore.car (bruijn ##.expr.334 9 1))) ((bruijn ##.k.1138 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 9-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_k312, self)})),
      _V0set_B,
      VInlineCar2(runtime,
        VGetArg(statics, 9-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D246_k323(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k323, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1133 0 0) (bruijn ##.k.1127 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
static void _V10_Dprint__expr_D246_lambda64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_lambda64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.print-define-global.340 14 4) (bruijn ##.k.1134 0 0) (##inline ##vcore.car (bruijn ##.expr.54.432 3 0)) (##inline ##vcore.car (bruijn ##.expr.55.434 2 0)) (##inline ##vcore.car (bruijn ##.expr.56.436 1 0)) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 4)), 5,
      _var0,
      VInlineCar2(runtime,
        statics->up->up->vars[0]),
      VInlineCar2(runtime,
        statics->up->vars[0]),
      VInlineCar2(runtime,
        statics->vars[0]),
      VEncodeBool(false));
}
static void _V10_Dprint__expr_D246_k322(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k322, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.56.436 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.56.436 0 0))) (##vcore.call-with-values (close _V10_Dprint__expr_D246_k323) (close _V10_Dprint__expr_D246_lambda64) (bruijn ##.kk.29.395 12 1)) ((bruijn ##.k.1127 4 0) #f)) ((bruijn ##.k.1127 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_k323, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_lambda64, self)})),
      VGetArg(statics, 12-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D246_k321(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k321, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.55.434 0 0)) ((close _V10_Dprint__expr_D246_k322) (##inline ##vcore.cdr (bruijn ##.expr.55.434 0 0))) ((bruijn ##.k.1127 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D246_k322, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D246_k320(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k320, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.54.432 0 0)) ((close _V10_Dprint__expr_D246_k321) (##inline ##vcore.cdr (bruijn ##.expr.54.432 0 0))) ((bruijn ##.k.1127 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D246_k321, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D246_k319(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k319, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1128 0 0) ((close _V10_Dprint__expr_D246_k320) (##inline ##vcore.cdr (bruijn ##.expr.334 11 1))) ((bruijn ##.k.1127 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D246_k320, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 11-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D246_k318(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k318, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.334 10 1)) ((bruijn ##.x.670 15 0) (close _V10_Dprint__expr_D246_k319) 'define (##inline ##vcore.car (bruijn ##.expr.334 10 1))) ((bruijn ##.k.1127 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 10-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_k319, self)})),
      _V0define,
      VInlineCar2(runtime,
        VGetArg(statics, 10-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D246_k328(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k328, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1123 0 0) (bruijn ##.k.1120 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
static void _V10_Dprint__expr_D246_lambda65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_lambda65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.print-inline.342 13 6) (bruijn ##.k.1124 0 0) (##inline ##vcore.car (bruijn ##.expr.58.439 1 0)) (##inline ##vcore.cdr (bruijn ##.expr.58.439 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 6)), 3,
      _var0,
      VInlineCar2(runtime,
        statics->vars[0]),
      VInlineCdr2(runtime,
        statics->vars[0]));
}
static void _V10_Dprint__expr_D246_k327(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k327, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.58.439 0 0)) (##vcore.call-with-values (close _V10_Dprint__expr_D246_k328) (close _V10_Dprint__expr_D246_lambda65) (bruijn ##.kk.29.395 11 1)) ((bruijn ##.k.1120 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_k328, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_lambda65, self)})),
      VGetArg(statics, 11-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D246_k326(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k326, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1121 0 0) ((close _V10_Dprint__expr_D246_k327) (##inline ##vcore.cdr (bruijn ##.expr.334 12 1))) ((bruijn ##.k.1120 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D246_k327, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 12-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D246_k325(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k325, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.334 11 1)) ((bruijn ##.x.670 16 0) (close _V10_Dprint__expr_D246_k326) '##inline (##inline ##vcore.car (bruijn ##.expr.334 11 1))) ((bruijn ##.k.1120 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 11-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_k326, self)})),
      _V10inline,
      VInlineCar2(runtime,
        VGetArg(statics, 11-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D246_k333(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k333, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1115 0 0) (bruijn ##.k.1111 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
static void _V10_Dprint__expr_D246_lambda66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_lambda66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.print-literal-string.239 16 4) (bruijn ##.k.1116 0 0) (##inline ##vcore.car (bruijn ##.expr.60.443 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 4)), 2,
      _var0,
      VInlineCar2(runtime,
        statics->vars[0]));
}
static void _V10_Dprint__expr_D246_k332(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k332, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.60.443 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.60.443 0 0))) (##vcore.call-with-values (close _V10_Dprint__expr_D246_k333) (close _V10_Dprint__expr_D246_lambda66) (bruijn ##.kk.29.395 12 1)) ((bruijn ##.k.1111 2 0) #f)) ((bruijn ##.k.1111 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_k333, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_lambda66, self)})),
      VGetArg(statics, 12-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D246_k331(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k331, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1112 0 0) ((close _V10_Dprint__expr_D246_k332) (##inline ##vcore.cdr (bruijn ##.expr.334 13 1))) ((bruijn ##.k.1111 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D246_k332, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 13-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D246_k330(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k330, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.334 12 1)) ((bruijn ##.x.670 17 0) (close _V10_Dprint__expr_D246_k331) '##string (##inline ##vcore.car (bruijn ##.expr.334 12 1))) ((bruijn ##.k.1111 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 12-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_k331, self)})),
      _V10string,
      VInlineCar2(runtime,
        VGetArg(statics, 12-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D246_k338(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k338, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1106 0 0) (bruijn ##.k.1102 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
static void _V10_Dprint__expr_D246_lambda67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_lambda67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.print-intrinsic.240 17 5) (bruijn ##.k.1107 0 0) (##inline ##vcore.car (bruijn ##.expr.62.446 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 5)), 2,
      _var0,
      VInlineCar2(runtime,
        statics->vars[0]));
}
static void _V10_Dprint__expr_D246_k337(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k337, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.62.446 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.62.446 0 0))) (##vcore.call-with-values (close _V10_Dprint__expr_D246_k338) (close _V10_Dprint__expr_D246_lambda67) (bruijn ##.kk.29.395 13 1)) ((bruijn ##.k.1102 2 0) #f)) ((bruijn ##.k.1102 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_k338, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_lambda67, self)})),
      VGetArg(statics, 13-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D246_k336(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k336, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1103 0 0) ((close _V10_Dprint__expr_D246_k337) (##inline ##vcore.cdr (bruijn ##.expr.334 14 1))) ((bruijn ##.k.1102 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D246_k337, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 14-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D246_k335(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k335, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.334 13 1)) ((bruijn ##.x.670 18 0) (close _V10_Dprint__expr_D246_k336) '##intrinsic (##inline ##vcore.car (bruijn ##.expr.334 13 1))) ((bruijn ##.k.1102 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 13-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_k336, self)})),
      _V10intrinsic,
      VInlineCar2(runtime,
        VGetArg(statics, 13-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D246_k343(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k343, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1097 0 0) (bruijn ##.k.1093 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
static void _V10_Dprint__expr_D246_lambda68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_lambda68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 23 0) (bruijn ##.k.1098 0 0) (##string ##.string.1760) (##inline ##vcore.car (bruijn ##.expr.64.449 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1760.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        statics->vars[0]));
}
static void _V10_Dprint__expr_D246_k342(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k342, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.64.449 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.64.449 0 0))) (##vcore.call-with-values (close _V10_Dprint__expr_D246_k343) (close _V10_Dprint__expr_D246_lambda68) (bruijn ##.kk.29.395 14 1)) ((bruijn ##.k.1093 2 0) #f)) ((bruijn ##.k.1093 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_k343, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_lambda68, self)})),
      VGetArg(statics, 14-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D246_k341(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k341, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1094 0 0) ((close _V10_Dprint__expr_D246_k342) (##inline ##vcore.cdr (bruijn ##.expr.334 15 1))) ((bruijn ##.k.1093 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D246_k342, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 15-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D246_k340(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k340, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.334 14 1)) ((bruijn ##.x.670 19 0) (close _V10_Dprint__expr_D246_k341) '##foreign.function (##inline ##vcore.car (bruijn ##.expr.334 14 1))) ((bruijn ##.k.1093 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 14-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_k341, self)})),
      _V10foreign_Dfunction,
      VInlineCar2(runtime,
        VGetArg(statics, 14-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D246_k350(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k350, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1088 0 0) (bruijn ##.k.1082 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
static void _V10_Dprint__expr_D246_lambda69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_lambda69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.print-letrec.338 19 2) (bruijn ##.k.1089 0 0) (##inline ##vcore.car (bruijn ##.expr.66.452 3 0)) (##inline ##vcore.car (bruijn ##.expr.67.454 2 0)) (##inline ##vcore.car (bruijn ##.expr.68.456 1 0)) (bruijn ##.args.335 20 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 2)), 5,
      _var0,
      VInlineCar2(runtime,
        statics->up->up->vars[0]),
      VInlineCar2(runtime,
        statics->up->vars[0]),
      VInlineCar2(runtime,
        statics->vars[0]),
      VGetArg(statics, 20-1, 2));
}
static void _V10_Dprint__expr_D246_k349(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k349, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.68.456 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.68.456 0 0))) (##vcore.call-with-values (close _V10_Dprint__expr_D246_k350) (close _V10_Dprint__expr_D246_lambda69) (bruijn ##.kk.29.395 17 1)) ((bruijn ##.k.1082 4 0) #f)) ((bruijn ##.k.1082 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_k350, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_lambda69, self)})),
      VGetArg(statics, 17-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D246_k348(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k348, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.67.454 0 0)) ((close _V10_Dprint__expr_D246_k349) (##inline ##vcore.cdr (bruijn ##.expr.67.454 0 0))) ((bruijn ##.k.1082 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D246_k349, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D246_k347(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k347, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.66.452 0 0)) ((close _V10_Dprint__expr_D246_k348) (##inline ##vcore.cdr (bruijn ##.expr.66.452 0 0))) ((bruijn ##.k.1082 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D246_k348, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D246_k346(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k346, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1083 0 0) ((close _V10_Dprint__expr_D246_k347) (##inline ##vcore.cdr (bruijn ##.expr.334 16 1))) ((bruijn ##.k.1082 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D246_k347, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 16-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D246_k345(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k345, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.334 15 1)) ((bruijn ##.x.670 20 0) (close _V10_Dprint__expr_D246_k346) 'letrec (##inline ##vcore.car (bruijn ##.expr.334 15 1))) ((bruijn ##.k.1082 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 15-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_k346, self)})),
      _V0letrec,
      VInlineCar2(runtime,
        VGetArg(statics, 15-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D246_k359(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k359, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1077 0 0) (bruijn ##.k.1069 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
}
static void _V10_Dprint__expr_D246_lambda70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_lambda70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.print-basic-block.339 22 3) (bruijn ##.k.1078 0 0) (##inline ##vcore.car (bruijn ##.expr.70.459 5 0)) (##inline ##vcore.car (bruijn ##.expr.71.461 4 0)) (##inline ##vcore.car (bruijn ##.expr.72.463 3 0)) (##inline ##vcore.car (bruijn ##.expr.73.465 2 0)) (##inline ##vcore.car (bruijn ##.expr.74.467 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 3)), 6,
      _var0,
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 0)),
      VInlineCar2(runtime,
        statics->up->up->up->vars[0]),
      VInlineCar2(runtime,
        statics->up->up->vars[0]),
      VInlineCar2(runtime,
        statics->up->vars[0]),
      VInlineCar2(runtime,
        statics->vars[0]));
}
static void _V10_Dprint__expr_D246_k358(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k358, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.74.467 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.74.467 0 0))) (##vcore.call-with-values (close _V10_Dprint__expr_D246_k359) (close _V10_Dprint__expr_D246_lambda70) (bruijn ##.kk.29.395 20 1)) ((bruijn ##.k.1069 6 0) #f)) ((bruijn ##.k.1069 6 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_k359, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_lambda70, self)})),
      VGetArg(statics, 20-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D246_k357(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k357, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.73.465 0 0)) ((close _V10_Dprint__expr_D246_k358) (##inline ##vcore.cdr (bruijn ##.expr.73.465 0 0))) ((bruijn ##.k.1069 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D246_k358, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D246_k356(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k356, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.72.463 0 0)) ((close _V10_Dprint__expr_D246_k357) (##inline ##vcore.cdr (bruijn ##.expr.72.463 0 0))) ((bruijn ##.k.1069 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D246_k357, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D246_k355(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k355, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.71.461 0 0)) ((close _V10_Dprint__expr_D246_k356) (##inline ##vcore.cdr (bruijn ##.expr.71.461 0 0))) ((bruijn ##.k.1069 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D246_k356, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D246_k354(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k354, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.70.459 0 0)) ((close _V10_Dprint__expr_D246_k355) (##inline ##vcore.cdr (bruijn ##.expr.70.459 0 0))) ((bruijn ##.k.1069 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D246_k355, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D246_k353(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k353, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1070 0 0) ((close _V10_Dprint__expr_D246_k354) (##inline ##vcore.cdr (bruijn ##.expr.334 17 1))) ((bruijn ##.k.1069 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D246_k354, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 17-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D246_k352(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k352, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.334 16 1)) ((bruijn ##.x.670 21 0) (close _V10_Dprint__expr_D246_k353) 'basic-block (##inline ##vcore.car (bruijn ##.expr.334 16 1))) ((bruijn ##.k.1069 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 16-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_k353, self)})),
      _V0basic__block,
      VInlineCar2(runtime,
        VGetArg(statics, 16-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D473_k364(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D473_k364, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.78.472 4 1) (bruijn ##.k.1055 1 0) (bruijn ##.expr.80.474 2 1) (bruijn ##.x.1056 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      statics->vars[0],
      statics->up->vars[1],
      _var0);
}
static void _V10_Dloop_D473_k363(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D473_k363, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.80.474 1 1))) ((bruijn ##.x.644 54 0) (close _V10_Dloop_D473_k364) (bruijn ##.xs.77.475 1 2)) ((bruijn ##.k.1055 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 54-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D473_k364, self)})),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D473_k367(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D473_k367, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.78.472 7 1) (bruijn ##.k.1049 2 0) (bruijn ##.expr.80.474 5 1) (bruijn ##.x.1051 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      statics->up->vars[0],
      VGetArg(statics, 5-1, 1),
      _var0);
}
static void _V10_Dloop_D473_k366(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D473_k366, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.644 57 0) (close _V10_Dloop_D473_k367) (bruijn ##.xs.77.475 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 57-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D473_k367, self)})),
      statics->up->up->up->vars[2]);
}
static void _V10_Dloop_D473_lambda75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D473_lambda75, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.kk.79.476 0 1) (close _V10_Dloop_D473_k366) (##inline ##vcore.cdr (bruijn ##.expr.80.474 3 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.80.474 3 1)) (bruijn ##.xs.77.475 3 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var1), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D473_k366, self)})),
      VInlineCdr2(runtime,
        statics->up->up->vars[1]),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[1]),
        statics->up->up->vars[2]));
}
static void _V10_Dloop_D473_lambda74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D473_lambda74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1048 0 0) (close _V10_Dloop_D473_lambda75))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D473_lambda75, self)})));
}
static void _V10_Dloop_D473_k365(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D473_k365, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1046 1 0) (close _V10_Dloop_D473_lambda74) (bruijn ##.loop.473 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D473_lambda74, self)})),
      statics->up->vars[0]);
}
static void _V10_Dloop_D473_lambda73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D473_lambda73, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V10_Dloop_D473_k363) (close _V10_Dloop_D473_k365))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D473_k363, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D473_k365, self)})));
}
static void _V10_Dprint__expr_D246_lambda72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_lambda72, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D473_lambda73)) ((bruijn ##.loop.473 0 0) (bruijn ##.k.1045 1 0) (##inline ##vcore.cdr (bruijn ##.expr.334 21 1)) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D473_lambda73, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->vars[0],
      VInlineCdr2(runtime,
        VGetArg(statics, 21-1, 1)),
      VNULL);
    }
}
static void _V10_Dprint__expr_D246_lambda71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_lambda71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1044 0 0) (close _V10_Dprint__expr_D246_lambda72))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_lambda72, self)})));
}
static void _V10_Dprint__expr_D246_k368(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k368, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1060 0 0) (bruijn ##.k.1058 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
static void _V10_Dprint__expr_D246_k370(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k370, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.f.470 4 0)) (##vcore.eqv? (bruijn ##.k.1066 0 0) (##inline ##vcore.car (bruijn ##.f.470 4 0)) '##intrinsic) ((bruijn ##.k.1066 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->up->vars[0]))) {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      _var0,
      VInlineCar2(runtime,
        statics->up->up->up->vars[0]),
      _V10intrinsic);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D246_k372(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k372, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.print-builtin-apply.336 22 0) (bruijn ##.k.1061 3 0) (bruijn ##.x.1064 0 0) (bruijn ##.xs.479 4 2) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 4,
      statics->up->up->vars[0],
      _var0,
      statics->up->up->up->vars[2],
      VEncodeBool(false));
}
static void _V10_Dprint__expr_D246_k371(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k371, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1063 0 0) ((bruijn ##.x.660 37 0) (close _V10_Dprint__expr_D246_k372) (bruijn ##.f.470 4 0)) ((bruijn ##.print-closure-apply.337 21 1) (bruijn ##.k.1061 2 0) (bruijn ##.f.470 4 0) (bruijn ##.xs.479 3 2) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_k372, self)})),
      statics->up->up->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 1)), 4,
      statics->up->vars[0],
      statics->up->up->up->vars[0],
      statics->up->up->vars[2],
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D246_k369(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k369, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1062 0 0) ((bruijn ##.print-builtin-apply.336 20 0) (bruijn ##.k.1061 1 0) (bruijn ##.f.470 3 0) (bruijn ##.xs.479 2 2) #f) ((close _V10_Dprint__expr_D246_k370) (close _V10_Dprint__expr_D246_k371)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 4,
      statics->vars[0],
      statics->up->up->vars[0],
      statics->up->vars[2],
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D246_k370, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_k371, self)})));
}
}
static void _V10_Dprint__expr_D246_lambda77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_lambda77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.659 36 0) (close _V10_Dprint__expr_D246_k369) (bruijn ##.f.470 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_k369, self)})),
      statics->up->vars[0]);
}
static void _V10_Dprint__expr_D246_lambda76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_lambda76, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.478 0 1)) (##vcore.call-with-values (close _V10_Dprint__expr_D246_k368) (close _V10_Dprint__expr_D246_lambda77) (bruijn ##.kk.29.395 17 1)) ((bruijn ##.k.1058 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_k368, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_lambda77, self)})),
      VGetArg(statics, 17-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D246_k362(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k362, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1043 1 0) (close _V10_Dprint__expr_D246_lambda71) (close _V10_Dprint__expr_D246_lambda76))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_lambda71, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_lambda76, self)})));
}
static void _V10_Dprint__expr_D246_k361(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k361, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.334 17 1)) ((close _V10_Dprint__expr_D246_k362) (##inline ##vcore.car (bruijn ##.expr.334 17 1))) ((bruijn ##.k.1043 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 17-1, 1)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D246_k362, .env = self }, }, 1,
      VInlineCar2(runtime,
        VGetArg(statics, 17-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D246_lambda78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_lambda78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.645 50 0) (bruijn ##.k.1038 0 0) (##string ##.string.1761) (bruijn ##.expr.334 20 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 50-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1761.sym, VPOINTER_OTHER),
      VGetArg(statics, 20-1, 1));
}
static void _V10_Dprint__expr_D246_k375(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k375, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1021 17 0) (close _V10_Dprint__expr_D246_lambda78) (bruijn ##.kk.29.395 17 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 17-1, 0),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_lambda78, self)})),
      VGetArg(statics, 17-1, 1));
}
static void _V10_Dprint__expr_D246_k374(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k374, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.1039 0 0) (close _V10_Dprint__expr_D246_k375))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_k375, self)})));
}
static void _V10_Dprint__expr_D246_lambda79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_lambda79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.1678) ((##vcore.symbol? (bruijn ##.expr.334 19 1))) (if (bruijn ##.reg.1678 0 0) ((bruijn ##.print-global.235 20 0) (bruijn ##.k.1040 1 0) (bruijn ##.expr.334 19 1)) ((bruijn ##.print-literal.241 20 6) (bruijn ##.k.1040 1 0) (bruijn ##.expr.334 19 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      VGetArg(statics, 19-1, 1));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 2,
      statics->vars[0],
      VGetArg(statics, 19-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 6)), 2,
      statics->vars[0],
      VGetArg(statics, 19-1, 1));
}
    }
}
static void _V10_Dprint__expr_D246_k373(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k373, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (close _V10_Dprint__expr_D246_k374) (close _V10_Dprint__expr_D246_lambda79) (bruijn ##.kk.29.395 15 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_k374, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_lambda79, self)})),
      VGetArg(statics, 15-1, 1));
}
static void _V10_Dprint__expr_D246_k360(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k360, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D246_k361) (close _V10_Dprint__expr_D246_k373))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D246_k361, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_k373, self)})));
}
static void _V10_Dprint__expr_D246_k351(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k351, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D246_k352) (close _V10_Dprint__expr_D246_k360))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D246_k352, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_k360, self)})));
}
static void _V10_Dprint__expr_D246_k344(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k344, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D246_k345) (close _V10_Dprint__expr_D246_k351))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D246_k345, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_k351, self)})));
}
static void _V10_Dprint__expr_D246_k339(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k339, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D246_k340) (close _V10_Dprint__expr_D246_k344))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D246_k340, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_k344, self)})));
}
static void _V10_Dprint__expr_D246_k334(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k334, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D246_k335) (close _V10_Dprint__expr_D246_k339))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D246_k335, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_k339, self)})));
}
static void _V10_Dprint__expr_D246_k329(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k329, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D246_k330) (close _V10_Dprint__expr_D246_k334))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D246_k330, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_k334, self)})));
}
static void _V10_Dprint__expr_D246_k324(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k324, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D246_k325) (close _V10_Dprint__expr_D246_k329))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D246_k325, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_k329, self)})));
}
static void _V10_Dprint__expr_D246_k317(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k317, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D246_k318) (close _V10_Dprint__expr_D246_k324))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D246_k318, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_k324, self)})));
}
static void _V10_Dprint__expr_D246_k310(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k310, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D246_k311) (close _V10_Dprint__expr_D246_k317))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D246_k311, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_k317, self)})));
}
static void _V10_Dprint__expr_D246_k297(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k297, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D246_k298) (close _V10_Dprint__expr_D246_k310))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D246_k298, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_k310, self)})));
}
static void _V10_Dprint__expr_D246_k282(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k282, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D246_k283) (close _V10_Dprint__expr_D246_k297))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D246_k283, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_k297, self)})));
}
static void _V10_Dprint__expr_D246_k277(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k277, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D246_k278) (close _V10_Dprint__expr_D246_k282))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D246_k278, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_k282, self)})));
}
static void _V10_Dprint__expr_D246_k272(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k272, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D246_k273) (close _V10_Dprint__expr_D246_k277))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D246_k273, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_k277, self)})));
}
static void _V10_Dprint__expr_D246_k264(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_k264, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D246_k265) (close _V10_Dprint__expr_D246_k272))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D246_k265, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_k272, self)})));
}
static void _V10_Dprint__expr_D246_lambda56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_lambda56, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Dprint__expr_D246_k260) (close _V10_Dprint__expr_D246_k264))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D246_k260, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_k264, self)})));
}
static void _V10_Dprint__expr_D246_lambda34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D246_lambda34, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 7 ((close _V10_Dprint__builtin__apply_D336_lambda35) (close _V10_Dprint__closure__apply_D337_lambda37) (close _V10_Dprint__letrec_D338_lambda42) (close _V10_Dprint__basic__block_D339_lambda45) (close _V10_Dprint__define__global_D340_lambda48) (close _V10_Dprint__set_D341_lambda49) (close _V10_Dprint__inline_D342_lambda54)) (##vcore.call/cc (bruijn ##.k.905 1 0) (close _V10_Dprint__expr_D246_lambda56)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[7]; } container;
    self = &container.self;
    VInitEnv(self, 7, 7, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__builtin__apply_D336_lambda35, self)}));
    self->vars[1] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__closure__apply_D337_lambda37, self)}));
    self->vars[2] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__letrec_D338_lambda42, self)}));
    self->vars[3] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__basic__block_D339_lambda45, self)}));
    self->vars[4] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__define__global_D340_lambda48, self)}));
    self->vars[5] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D341_lambda49, self)}));
    self->vars[6] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__inline_D342_lambda54, self)}));
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_lambda56, self)})));
    }
}
static void _V10_Dgen__args_D487_lambda82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgen__args_D487_lambda82, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.x.671 8 0) (bruijn ##.k.1228 0 0) (##string ##.string.1762) (bruijn ##.e.489 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1762.sym, VPOINTER_OTHER),
      _var1);
}
static void _V10_Dgen__args_D487_k376(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgen__args_D487_k376, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.665 13 0) (bruijn ##.k.1227 1 0) (close _V10_Dgen__args_D487_lambda82) (bruijn ##.x.1229 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 3,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgen__args_D487_lambda82, self)})),
      _var0);
}
static void _V10_Dgen__args_D487_lambda81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgen__args_D487_lambda81, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.x.667 10 0) (close _V10_Dgen__args_D487_k376) (bruijn ##.num.488 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgen__args_D487_k376, self)})),
      _var1);
}
static void _V10_Dprint__fun__single_D247_k378(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D247_k378, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.needs-used?.486 3 6) ((bruijn ##.x.669 9 0) (bruijn ##.k.1287 0 0) (##string ##.string.1763)) ((bruijn ##.k.1287 0 0) #f))
if(VDecodeBool(
statics->up->up->vars[6])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D1763.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__single_D247_k381(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D247_k381, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.variadic?.484 5 4) ((bruijn ##.k.1281 0 0) (##string ##.string.1764)) ((bruijn ##.k.1281 0 0) (##string ##.string.1765)))
if(VDecodeBool(
VGetArg(statics, 5-1, 4))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D1764.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D1765.sym, VPOINTER_OTHER));
}
}
static void _V10_Dprint__fun__single_D247_k384(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D247_k384, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 13 0) (bruijn ##.k.1276 3 0) (##string ##.string.1766))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 2,
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1766.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__single_D247_lambda83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D247_lambda83, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.x.669 13 0) (bruijn ##.k.1279 0 0) (##string ##.string.1767) (bruijn ##.arg.491 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1767.sym, VPOINTER_OTHER),
      _var1);
}
static void _V10_Dprint__fun__single_D247_k383(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D247_k383, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.646 35 0) (close _V10_Dprint__fun__single_D247_k384) (close _V10_Dprint__fun__single_D247_lambda83) (bruijn ##.args.490 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 35-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D247_k384, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D247_lambda83, self)})),
      statics->up->up->up->vars[0]);
}
static void _V10_Dprint__fun__single_D247_k382(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D247_k382, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 11 0) (close _V10_Dprint__fun__single_D247_k383) (##string ##.string.1768) (bruijn ##.x.1280 0 0) (bruijn ##.name.481 5 1) (bruijn ##.name.481 5 1) (bruijn ##.num.483 5 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 6,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D247_k383, self)})),
      VEncodePointer(&_V10_Dstring_D1768.sym, VPOINTER_OTHER),
      _var0,
      VGetArg(statics, 5-1, 1),
      VGetArg(statics, 5-1, 1),
      VGetArg(statics, 5-1, 3));
}
static void _V10_Dprint__fun__single_D247_k387(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D247_k387, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.variadic?.484 7 4) ((bruijn ##.x.669 13 0) (bruijn ##.k.1285 0 0) (##string ##.string.1769)) ((bruijn ##.k.1285 0 0) #f))
if(VDecodeBool(
VGetArg(statics, 7-1, 4))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D1769.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__single_D247_k388(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D247_k388, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 13 0) (bruijn ##.k.1276 3 0) (##string ##.string.1770))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 2,
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1770.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__single_D247_k386(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D247_k386, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__fun__single_D247_k387) (close _V10_Dprint__fun__single_D247_k388))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__single_D247_k387, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D247_k388, self)})));
}
static void _V10_Dprint__fun__single_D247_lambda84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D247_lambda84, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.x.669 12 0) (bruijn ##.k.1286 0 0) (##string ##.string.1771) (bruijn ##.arg.492 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1771.sym, VPOINTER_OTHER),
      _var1);
}
static void _V10_Dprint__fun__single_D247_k385(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D247_k385, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.646 34 0) (close _V10_Dprint__fun__single_D247_k386) (close _V10_Dprint__fun__single_D247_lambda84) (bruijn ##.args.490 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D247_k386, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D247_lambda84, self)})),
      statics->up->up->vars[0]);
}
static void _V10_Dprint__fun__single_D247_k380(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D247_k380, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.purec?.227 6 2) ((close _V10_Dprint__fun__single_D247_k381) (close _V10_Dprint__fun__single_D247_k382)) ((bruijn ##.x.669 10 0) (close _V10_Dprint__fun__single_D247_k385) (##string ##.string.1772) (bruijn ##.name.481 4 1)))
if(VDecodeBool(
VGetArg(statics, 6-1, 2))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__single_D247_k381, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D247_k382, self)})));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D247_k385, self)})),
      VEncodePointer(&_V10_Dstring_D1772.sym, VPOINTER_OTHER),
      statics->up->up->up->vars[1]);
}
}
static void _V10_Dprint__fun__single_D247_k391(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D247_k391, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 12 0) (bruijn ##.k.1274 1 0) (##string ##.string.1773))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 2,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1773.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__single_D247_k390(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D247_k390, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.debug?.228 7 3) ((bruijn ##.x.669 11 0) (close _V10_Dprint__fun__single_D247_k391) (##string ##.string.1774) (bruijn ##.name.481 5 1)) ((bruijn ##.k.1274 0 0) #f))
if(VDecodeBool(
VGetArg(statics, 7-1, 3))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D247_k391, self)})),
      VEncodePointer(&_V10_Dstring_D1774.sym, VPOINTER_OTHER),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__single_D247_k393(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D247_k393, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.not (bruijn ##.purec?.227 8 2)) ((bruijn ##.k.1273 0 0) (bruijn ##.check-args?.482 6 2)) ((bruijn ##.k.1273 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VGetArg(statics, 8-1, 2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__single_D247_k399(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D247_k399, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 17 0) (bruijn ##.k.1263 4 0) (##string ##.string.1775))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 2,
      statics->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1775.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__single_D247_k398(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D247_k398, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 16 0) (close _V10_Dprint__fun__single_D247_k399) (##string ##.string.1776))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D247_k399, self)})),
      VEncodePointer(&_V10_Dstring_D1776.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__single_D247_k397(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D247_k397, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 15 0) (close _V10_Dprint__fun__single_D247_k398) (##string ##.string.1777) (bruijn ##.num.483 9 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D247_k398, self)})),
      VEncodePointer(&_V10_Dstring_D1777.sym, VPOINTER_OTHER),
      VGetArg(statics, 9-1, 3));
}
static void _V10_Dprint__fun__single_D247_k396(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D247_k396, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 14 0) (close _V10_Dprint__fun__single_D247_k397) (##string ##.string.1778) (bruijn ##.name.481 8 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D247_k397, self)})),
      VEncodePointer(&_V10_Dstring_D1778.sym, VPOINTER_OTHER),
      VGetArg(statics, 8-1, 1));
}
static void _V10_Dprint__fun__single_D247_k403(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D247_k403, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 17 0) (bruijn ##.k.1263 4 0) (##string ##.string.1775))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 2,
      statics->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1775.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__single_D247_k402(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D247_k402, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 16 0) (close _V10_Dprint__fun__single_D247_k403) (##string ##.string.1776))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D247_k403, self)})),
      VEncodePointer(&_V10_Dstring_D1776.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__single_D247_k401(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D247_k401, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 15 0) (close _V10_Dprint__fun__single_D247_k402) (##string ##.string.1780) (bruijn ##.num.483 9 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D247_k402, self)})),
      VEncodePointer(&_V10_Dstring_D1780.sym, VPOINTER_OTHER),
      VGetArg(statics, 9-1, 3));
}
static void _V10_Dprint__fun__single_D247_k400(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D247_k400, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 14 0) (close _V10_Dprint__fun__single_D247_k401) (##string ##.string.1778) (bruijn ##.name.481 8 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D247_k401, self)})),
      VEncodePointer(&_V10_Dstring_D1778.sym, VPOINTER_OTHER),
      VGetArg(statics, 8-1, 1));
}
static void _V10_Dprint__fun__single_D247_k395(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D247_k395, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1262 1 0) (if (bruijn ##.variadic?.484 7 4) ((bruijn ##.x.669 13 0) (close _V10_Dprint__fun__single_D247_k396) (##string ##.string.1779) (bruijn ##.num.483 7 3)) ((bruijn ##.x.669 13 0) (close _V10_Dprint__fun__single_D247_k400) (##string ##.string.1781) (bruijn ##.num.483 7 3))) ((bruijn ##.k.1263 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
if(VDecodeBool(
VGetArg(statics, 7-1, 4))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D247_k396, self)})),
      VEncodePointer(&_V10_Dstring_D1779.sym, VPOINTER_OTHER),
      VGetArg(statics, 7-1, 3));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D247_k400, self)})),
      VEncodePointer(&_V10_Dstring_D1781.sym, VPOINTER_OTHER),
      VGetArg(statics, 7-1, 3));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__single_D247_k407(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D247_k407, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 16 0) (bruijn ##.k.1254 2 0) (##string ##.string.1782) (bruijn ##.num.483 10 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 3,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1782.sym, VPOINTER_OTHER),
      VGetArg(statics, 10-1, 3));
}
static void _V10_Dprint__fun__single_D247_k406(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D247_k406, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 15 0) (close _V10_Dprint__fun__single_D247_k407) (##string ##.string.1783) (bruijn ##.num.483 9 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D247_k407, self)})),
      VEncodePointer(&_V10_Dstring_D1783.sym, VPOINTER_OTHER),
      VGetArg(statics, 9-1, 3));
}
static void _V10_Dprint__fun__single_D247_k410(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D247_k410, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1259 1 0) ((bruijn ##.k.1260 0 0) (##string ##.string.1785)) (basic-block 1 1 (##.reg.1681) ((##vcore.- (bruijn ##.num.483 12 3) 1)) ((bruijn ##.x.661 26 0) (bruijn ##.k.1260 1 0) (bruijn ##.args.490 10 0) (bruijn ##.reg.1681 0 0))))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D1785.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      VGetArg(statics, 12-1, 3),
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 3,
      statics->vars[0],
      VGetArg(statics, 10-1, 0),
      self->vars[0]);
    }
}
}
static void _V10_Dprint__fun__single_D247_k411(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D247_k411, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 17 0) (bruijn ##.k.1254 3 0) (##string ##.string.1786) (bruijn ##.num.483 11 3) (bruijn ##.x.1258 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 4,
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1786.sym, VPOINTER_OTHER),
      VGetArg(statics, 11-1, 3),
      _var0);
}
static void _V10_Dprint__fun__single_D247_k409(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D247_k409, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__fun__single_D247_k410) (close _V10_Dprint__fun__single_D247_k411))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__single_D247_k410, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D247_k411, self)})));
}
static void _V10_Dprint__fun__single_D247_k408(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D247_k408, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.662 22 0) (close _V10_Dprint__fun__single_D247_k409) (bruijn ##.num.483 9 3) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D247_k409, self)})),
      VGetArg(statics, 9-1, 3),
      VEncodeInt(0l));
}
static void _V10_Dprint__fun__single_D247_k405(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D247_k405, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.variadic?.484 8 4) (if (bruijn ##.purec?.227 10 2) ((bruijn ##.x.669 14 0) (close _V10_Dprint__fun__single_D247_k406) (##string ##.string.1784)) ((bruijn ##.x.669 14 0) (close _V10_Dprint__fun__single_D247_k408) (##string ##.string.1784))) ((bruijn ##.k.1254 0 0) #f))
if(VDecodeBool(
VGetArg(statics, 8-1, 4))) {
if(VDecodeBool(
VGetArg(statics, 10-1, 2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D247_k406, self)})),
      VEncodePointer(&_V10_Dstring_D1784.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D247_k408, self)})),
      VEncodePointer(&_V10_Dstring_D1784.sym, VPOINTER_OTHER));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__single_D247_k413(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D247_k413, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.not (bruijn ##.purec?.227 11 2)) ((bruijn ##.closes?.244 10 9) (bruijn ##.k.1253 0 0) (bruijn ##.body.485 9 5)) ((bruijn ##.k.1253 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VGetArg(statics, 11-1, 2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 9)), 2,
      _var0,
      VGetArg(statics, 9-1, 5));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__single_D247_k416(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D247_k416, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.variadic?.484 11 4) (basic-block 1 1 (##.reg.1680) ((##vcore.+ (bruijn ##.num.483 12 3) 1)) ((bruijn ##.k.1251 1 0) (bruijn ##.reg.1680 0 0))) ((bruijn ##.k.1251 0 0) (bruijn ##.num.483 11 3)))
if(VDecodeBool(
VGetArg(statics, 11-1, 4))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 12-1, 3),
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 11-1, 3));
}
}
static void _V10_Dprint__fun__single_D247_k420(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D247_k420, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.variadic?.484 14 4) (basic-block 1 1 (##.reg.1679) ((##vcore.+ (bruijn ##.num.483 15 3) 1)) ((bruijn ##.k.1249 1 0) (bruijn ##.reg.1679 0 0))) ((bruijn ##.k.1249 0 0) (bruijn ##.num.483 14 3)))
if(VDecodeBool(
VGetArg(statics, 14-1, 4))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 15-1, 3),
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 14-1, 3));
}
}
static void _V10_Dprint__fun__single_D247_k424(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D247_k424, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.variadic?.484 17 4) ((bruijn ##.x.669 23 0) (bruijn ##.k.1242 7 0) (##string ##.string.1787) (bruijn ##.num.483 17 3)) ((bruijn ##.k.1242 7 0) #f))
if(VDecodeBool(
VGetArg(statics, 17-1, 4))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 3,
      VGetArg(statics, 7-1, 0),
      VEncodePointer(&_V10_Dstring_D1787.sym, VPOINTER_OTHER),
      VGetArg(statics, 17-1, 3));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__single_D247_lambda85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D247_lambda85, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // ((bruijn ##.x.669 23 0) (bruijn ##.k.1247 0 0) (##string ##.string.1788) (bruijn ##.i.494 0 1) (bruijn ##.arg.495 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 4,
      _var0,
      VEncodePointer(&_V10_Dstring_D1788.sym, VPOINTER_OTHER),
      _var1,
      _var2);
}
static void _V10_Dprint__fun__single_D247_k423(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D247_k423, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.646 45 0) (close _V10_Dprint__fun__single_D247_k424) (close _V10_Dprint__fun__single_D247_lambda85) (bruijn ##.x.1248 0 0) (bruijn ##.args.490 14 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 45-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D247_k424, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D247_lambda85, self)})),
      _var0,
      VGetArg(statics, 14-1, 0));
}
static void _V10_Dprint__fun__single_D247_k422(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D247_k422, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.667 23 0) (close _V10_Dprint__fun__single_D247_k423) (bruijn ##.num.483 15 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D247_k423, self)})),
      VGetArg(statics, 15-1, 3));
}
static void _V10_Dprint__fun__single_D247_k421(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D247_k421, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 20 0) (close _V10_Dprint__fun__single_D247_k422) (##string ##.string.1789) (bruijn ##.nargs.493 0 0) (bruijn ##.nargs.493 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D247_k422, self)})),
      VEncodePointer(&_V10_Dstring_D1789.sym, VPOINTER_OTHER),
      _var0,
      _var0);
}
static void _V10_Dprint__fun__single_D247_k419(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D247_k419, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__fun__single_D247_k420) (close _V10_Dprint__fun__single_D247_k421))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__single_D247_k420, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D247_k421, self)})));
}
static void _V10_Dprint__fun__single_D247_k418(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D247_k418, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 18 0) (close _V10_Dprint__fun__single_D247_k419) (##string ##.string.1790))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D247_k419, self)})),
      VEncodePointer(&_V10_Dstring_D1790.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__single_D247_k417(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D247_k417, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 17 0) (close _V10_Dprint__fun__single_D247_k418) (##string ##.string.1791) (bruijn ##.x.1250 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D247_k418, self)})),
      VEncodePointer(&_V10_Dstring_D1791.sym, VPOINTER_OTHER),
      _var0);
}
static void _V10_Dprint__fun__single_D247_k415(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D247_k415, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1241 1 0) ((close _V10_Dprint__fun__single_D247_k416) (close _V10_Dprint__fun__single_D247_k417)) ((bruijn ##.k.1242 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__single_D247_k416, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D247_k417, self)})));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__single_D247_k427(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D247_k427, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.variadic?.484 12 4) ((bruijn ##.x.663 24 0) (bruijn ##.k.1239 0 0) (bruijn ##.args.490 10 0) (##inline ##vcore.qcons '(##string ##.string.1792) '())) ((bruijn ##.k.1239 0 0) (bruijn ##.args.490 10 0)))
if(VDecodeBool(
VGetArg(statics, 12-1, 4))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 3,
      _var0,
      VGetArg(statics, 10-1, 0),
      VInlineCons2(runtime,
        VEncodePointer(&_V10_Dstring_D1792.sym, VPOINTER_OTHER),
        VNULL));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 10-1, 0));
}
}
static void _V10_Dprint__fun__single_D247_k429(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D247_k429, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 19 0) (bruijn ##.k.1226 13 0) (##string ##.string.1711))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 2,
      VGetArg(statics, 13-1, 0),
      VEncodePointer(&_V10_Dstring_D1711.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__single_D247_k428(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D247_k428, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.print-expr.246 13 11) (close _V10_Dprint__fun__single_D247_k429) (bruijn ##.body.485 12 5) (bruijn ##.x.1238 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 11)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D247_k429, self)})),
      VGetArg(statics, 12-1, 5),
      _var0);
}
static void _V10_Dprint__fun__single_D247_k426(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D247_k426, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__fun__single_D247_k427) (close _V10_Dprint__fun__single_D247_k428))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__single_D247_k427, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D247_k428, self)})));
}
static void _V10_Dprint__fun__single_D247_k425(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D247_k425, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 16 0) (close _V10_Dprint__fun__single_D247_k426) (##string ##.string.1793) (bruijn ##.body.485 10 5))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D247_k426, self)})),
      VEncodePointer(&_V10_Dstring_D1793.sym, VPOINTER_OTHER),
      VGetArg(statics, 10-1, 5));
}
static void _V10_Dprint__fun__single_D247_k414(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D247_k414, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__fun__single_D247_k415) (close _V10_Dprint__fun__single_D247_k425))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__single_D247_k415, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D247_k425, self)})));
}
static void _V10_Dprint__fun__single_D247_k412(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D247_k412, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__fun__single_D247_k413) (close _V10_Dprint__fun__single_D247_k414))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__single_D247_k413, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D247_k414, self)})));
}
static void _V10_Dprint__fun__single_D247_k404(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D247_k404, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__fun__single_D247_k405) (close _V10_Dprint__fun__single_D247_k412))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__single_D247_k405, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D247_k412, self)})));
}
static void _V10_Dprint__fun__single_D247_k394(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D247_k394, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__fun__single_D247_k395) (close _V10_Dprint__fun__single_D247_k404))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__single_D247_k395, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D247_k404, self)})));
}
static void _V10_Dprint__fun__single_D247_k392(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D247_k392, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__fun__single_D247_k393) (close _V10_Dprint__fun__single_D247_k394))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__single_D247_k393, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D247_k394, self)})));
}
static void _V10_Dprint__fun__single_D247_k389(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D247_k389, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__fun__single_D247_k390) (close _V10_Dprint__fun__single_D247_k392))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__single_D247_k390, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D247_k392, self)})));
}
static void _V10_Dprint__fun__single_D247_k379(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D247_k379, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__fun__single_D247_k380) (close _V10_Dprint__fun__single_D247_k389))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__single_D247_k380, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D247_k389, self)})));
}
static void _V10_Dprint__fun__single_D247_k377(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D247_k377, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__fun__single_D247_k378) (close _V10_Dprint__fun__single_D247_k379))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__single_D247_k378, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D247_k379, self)})));
}
static void _V10_Dprint__fun__single_D247_lambda80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6) {
 if(argc != 7) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D247_lambda80, got ~D~N"
  "-- expected 7~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[7]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 7, 7, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  self->vars[5] = _var5;
  self->vars[6] = _var6;
  // (letrec 1 ((close _V10_Dgen__args_D487_lambda81)) ((bruijn ##.gen-args.487 0 0) (close _V10_Dprint__fun__single_D247_k377) (bruijn ##.num.483 1 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgen__args_D487_lambda81, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D247_k377, self)})),
      statics->vars[3]);
    }
}
static void _V10_Dprint__fun__case_D248_k435(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k435, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.purec?.227 8 2) ((bruijn ##.x.669 12 0) (bruijn ##.k.1439 0 0) (##string ##.string.1794) (bruijn ##.name.497 5 0) (bruijn ##.name.497 5 0)) ((bruijn ##.x.669 12 0) (bruijn ##.k.1439 0 0) (##string ##.string.1795) (bruijn ##.name.497 5 0)))
if(VDecodeBool(
VGetArg(statics, 8-1, 2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 4,
      _var0,
      VEncodePointer(&_V10_Dstring_D1794.sym, VPOINTER_OTHER),
      VGetArg(statics, 5-1, 0),
      VGetArg(statics, 5-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1795.sym, VPOINTER_OTHER),
      VGetArg(statics, 5-1, 0));
}
}
static void _V10_Dprint__fun__case_D248_k448(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k448, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 24 0) (bruijn ##.k.1288 18 0) (##string ##.string.1711))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 2,
      VGetArg(statics, 18-1, 0),
      VEncodePointer(&_V10_Dstring_D1711.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__case_D248_k447(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k447, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 23 0) (close _V10_Dprint__fun__case_D248_k448) (##string ##.string.1796))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D248_k448, self)})),
      VEncodePointer(&_V10_Dstring_D1796.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__case_D248_k456(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k456, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1329 0 0) (bruijn ##.k.1320 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
}
static void _V10_Dprint__fun__case_D248_k457(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k457, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 33 0) (bruijn ##.k.1330 1 0) (##string ##.string.1797) (##inline ##vcore.car (bruijn ##.e.537 10 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1797.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        VGetArg(statics, 10-1, 1)));
}
static void _V10_Dprint__fun__case_D248_lambda89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_lambda89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 32 0) (close _V10_Dprint__fun__case_D248_k457) (##string ##.string.1798) (##inline ##vcore.car (bruijn ##.expr.122.544 4 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D248_k457, self)})),
      VEncodePointer(&_V10_Dstring_D1798.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        statics->up->up->up->vars[0]));
}
static void _V10_Dprint__fun__case_D248_k455(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k455, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.124.547 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.124.547 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.121.543 4 0))) (##vcore.call-with-values (close _V10_Dprint__fun__case_D248_k456) (close _V10_Dprint__fun__case_D248_lambda89) (bruijn ##.kk.117.538 7 1)) ((bruijn ##.k.1320 6 0) #f)) ((bruijn ##.k.1320 6 0) #f)) ((bruijn ##.k.1320 6 0) #f))
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
        statics->up->up->up->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D248_k456, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D248_lambda89, self)})),
      VGetArg(statics, 7-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D248_k454(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k454, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1325 0 0) ((close _V10_Dprint__fun__case_D248_k455) (##inline ##vcore.cdr (bruijn ##.expr.123.546 1 0))) ((bruijn ##.k.1320 5 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D248_k455, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D248_k453(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k453, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.123.546 0 0)) ((bruijn ##.x.670 28 0) (close _V10_Dprint__fun__case_D248_k454) '+ (##inline ##vcore.car (bruijn ##.expr.123.546 0 0))) ((bruijn ##.k.1320 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D248_k454, self)})),
      _V0_P,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D248_k452(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k452, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.122.544 0 0)) ((close _V10_Dprint__fun__case_D248_k453) (##inline ##vcore.cdr (bruijn ##.expr.122.544 0 0))) ((bruijn ##.k.1320 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D248_k453, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D248_k451(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k451, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.121.543 0 0)) ((close _V10_Dprint__fun__case_D248_k452) (##inline ##vcore.car (bruijn ##.expr.121.543 0 0))) ((bruijn ##.k.1320 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D248_k452, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D248_k450(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k450, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.120.542 0 0)) ((close _V10_Dprint__fun__case_D248_k451) (##inline ##vcore.cdr (bruijn ##.expr.120.542 0 0))) ((bruijn ##.k.1320 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D248_k451, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D248_k449(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k449, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.e.537 2 1)) ((close _V10_Dprint__fun__case_D248_k450) (##inline ##vcore.cdr (bruijn ##.e.537 2 1))) ((bruijn ##.k.1320 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D248_k450, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D248_k464(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k464, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1314 0 0) (bruijn ##.k.1307 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
static void _V10_Dprint__fun__case_D248_k465(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k465, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 32 0) (bruijn ##.k.1315 1 0) (##string ##.string.1797) (##inline ##vcore.car (bruijn ##.e.537 9 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1797.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        VGetArg(statics, 9-1, 1)));
}
static void _V10_Dprint__fun__case_D248_lambda90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_lambda90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 31 0) (close _V10_Dprint__fun__case_D248_k465) (##string ##.string.1799) (##inline ##vcore.car (bruijn ##.expr.128.552 2 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D248_k465, self)})),
      VEncodePointer(&_V10_Dstring_D1799.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        statics->up->vars[0]));
}
static void _V10_Dprint__fun__case_D248_k463(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k463, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.129.554 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.129.554 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.127.551 2 0))) (##vcore.call-with-values (close _V10_Dprint__fun__case_D248_k464) (close _V10_Dprint__fun__case_D248_lambda90) (bruijn ##.kk.117.538 6 1)) ((bruijn ##.k.1307 4 0) #f)) ((bruijn ##.k.1307 4 0) #f)) ((bruijn ##.k.1307 4 0) #f))
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
        statics->up->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D248_k464, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D248_lambda90, self)})),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D248_k462(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k462, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.128.552 0 0)) ((close _V10_Dprint__fun__case_D248_k463) (##inline ##vcore.cdr (bruijn ##.expr.128.552 0 0))) ((bruijn ##.k.1307 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D248_k463, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D248_k461(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k461, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.127.551 0 0)) ((close _V10_Dprint__fun__case_D248_k462) (##inline ##vcore.car (bruijn ##.expr.127.551 0 0))) ((bruijn ##.k.1307 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D248_k462, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D248_k460(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k460, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.126.550 0 0)) ((close _V10_Dprint__fun__case_D248_k461) (##inline ##vcore.cdr (bruijn ##.expr.126.550 0 0))) ((bruijn ##.k.1307 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D248_k461, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D248_k459(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k459, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.e.537 3 1)) ((close _V10_Dprint__fun__case_D248_k460) (##inline ##vcore.cdr (bruijn ##.e.537 3 1))) ((bruijn ##.k.1307 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D248_k460, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D248_k466(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k466, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.664 31 0) (bruijn ##.k.1303 2 0) (##string ##.string.1800))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 2,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1800.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__case_D248_k458(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k458, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__fun__case_D248_k459) (close _V10_Dprint__fun__case_D248_k466))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D248_k459, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D248_k466, self)})));
}
static void _V10_Dprint__fun__case_D248_lambda88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_lambda88, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Dprint__fun__case_D248_k449) (close _V10_Dprint__fun__case_D248_k458))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D248_k449, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D248_k458, self)})));
}
static void _V10_Dprint__fun__case_D248_lambda87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_lambda87, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.k.1302 0 0) (close _V10_Dprint__fun__case_D248_lambda88))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D248_lambda88, self)})));
}
static void _V10_Dprint__fun__case_D248_k446(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k446, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.646 45 0) (close _V10_Dprint__fun__case_D248_k447) (close _V10_Dprint__fun__case_D248_lambda87) (bruijn ##.cases.499 11 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 45-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D248_k447, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D248_lambda87, self)})),
      VGetArg(statics, 11-1, 0));
}
static void _V10_Dprint__fun__case_D248_k445(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k445, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 21 0) (close _V10_Dprint__fun__case_D248_k446) (##string ##.string.1801))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D248_k446, self)})),
      VEncodePointer(&_V10_Dstring_D1801.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__case_D248_k444(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k444, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 20 0) (close _V10_Dprint__fun__case_D248_k445) (##string ##.string.1802))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D248_k445, self)})),
      VEncodePointer(&_V10_Dstring_D1802.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__case_D248_k443(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k443, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 19 0) (close _V10_Dprint__fun__case_D248_k444) (##string ##.string.1803) (bruijn ##.name.497 12 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D248_k444, self)})),
      VEncodePointer(&_V10_Dstring_D1803.sym, VPOINTER_OTHER),
      VGetArg(statics, 12-1, 0));
}
static void _V10_Dprint__fun__case_D248_k475(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k475, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 27 0) (bruijn ##.k.1288 21 0) (##string ##.string.1720))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 2,
      VGetArg(statics, 21-1, 0),
      VEncodePointer(&_V10_Dstring_D1720.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__case_D248_k474(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k474, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 26 0) (close _V10_Dprint__fun__case_D248_k475) (##string ##.string.1805) (bruijn ##.name.497 19 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D248_k475, self)})),
      VEncodePointer(&_V10_Dstring_D1805.sym, VPOINTER_OTHER),
      VGetArg(statics, 19-1, 0));
}
static void _V10_Dprint__fun__case_D248_k483(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k483, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1371 0 0) (bruijn ##.k.1362 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
}
static void _V10_Dprint__fun__case_D248_k484(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k484, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 36 0) (bruijn ##.k.1372 1 0) (##string ##.string.1806) (##inline ##vcore.car (bruijn ##.e.555 10 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1806.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        VGetArg(statics, 10-1, 1)));
}
static void _V10_Dprint__fun__case_D248_lambda93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_lambda93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 35 0) (close _V10_Dprint__fun__case_D248_k484) (##string ##.string.1807) (##inline ##vcore.car (bruijn ##.expr.135.562 4 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 35-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D248_k484, self)})),
      VEncodePointer(&_V10_Dstring_D1807.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        statics->up->up->up->vars[0]));
}
static void _V10_Dprint__fun__case_D248_k482(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k482, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.137.565 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.137.565 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.134.561 4 0))) (##vcore.call-with-values (close _V10_Dprint__fun__case_D248_k483) (close _V10_Dprint__fun__case_D248_lambda93) (bruijn ##.kk.130.556 7 1)) ((bruijn ##.k.1362 6 0) #f)) ((bruijn ##.k.1362 6 0) #f)) ((bruijn ##.k.1362 6 0) #f))
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
        statics->up->up->up->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D248_k483, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D248_lambda93, self)})),
      VGetArg(statics, 7-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D248_k481(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k481, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1367 0 0) ((close _V10_Dprint__fun__case_D248_k482) (##inline ##vcore.cdr (bruijn ##.expr.136.564 1 0))) ((bruijn ##.k.1362 5 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D248_k482, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D248_k480(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k480, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.136.564 0 0)) ((bruijn ##.x.670 31 0) (close _V10_Dprint__fun__case_D248_k481) '+ (##inline ##vcore.car (bruijn ##.expr.136.564 0 0))) ((bruijn ##.k.1362 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D248_k481, self)})),
      _V0_P,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D248_k479(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k479, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.135.562 0 0)) ((close _V10_Dprint__fun__case_D248_k480) (##inline ##vcore.cdr (bruijn ##.expr.135.562 0 0))) ((bruijn ##.k.1362 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D248_k480, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D248_k478(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k478, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.134.561 0 0)) ((close _V10_Dprint__fun__case_D248_k479) (##inline ##vcore.car (bruijn ##.expr.134.561 0 0))) ((bruijn ##.k.1362 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D248_k479, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D248_k477(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k477, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.133.560 0 0)) ((close _V10_Dprint__fun__case_D248_k478) (##inline ##vcore.cdr (bruijn ##.expr.133.560 0 0))) ((bruijn ##.k.1362 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D248_k478, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D248_k476(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k476, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.e.555 2 1)) ((close _V10_Dprint__fun__case_D248_k477) (##inline ##vcore.cdr (bruijn ##.e.555 2 1))) ((bruijn ##.k.1362 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D248_k477, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D248_k491(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k491, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1356 0 0) (bruijn ##.k.1349 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
static void _V10_Dprint__fun__case_D248_k492(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k492, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 35 0) (bruijn ##.k.1357 1 0) (##string ##.string.1808) (##inline ##vcore.car (bruijn ##.e.555 9 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 35-1, 0)), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1808.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        VGetArg(statics, 9-1, 1)));
}
static void _V10_Dprint__fun__case_D248_lambda94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_lambda94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 34 0) (close _V10_Dprint__fun__case_D248_k492) (##string ##.string.1807) (##inline ##vcore.car (bruijn ##.expr.141.570 2 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D248_k492, self)})),
      VEncodePointer(&_V10_Dstring_D1807.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        statics->up->vars[0]));
}
static void _V10_Dprint__fun__case_D248_k490(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k490, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.142.572 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.142.572 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.140.569 2 0))) (##vcore.call-with-values (close _V10_Dprint__fun__case_D248_k491) (close _V10_Dprint__fun__case_D248_lambda94) (bruijn ##.kk.130.556 6 1)) ((bruijn ##.k.1349 4 0) #f)) ((bruijn ##.k.1349 4 0) #f)) ((bruijn ##.k.1349 4 0) #f))
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
        statics->up->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D248_k491, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D248_lambda94, self)})),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D248_k489(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k489, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.141.570 0 0)) ((close _V10_Dprint__fun__case_D248_k490) (##inline ##vcore.cdr (bruijn ##.expr.141.570 0 0))) ((bruijn ##.k.1349 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D248_k490, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D248_k488(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k488, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.140.569 0 0)) ((close _V10_Dprint__fun__case_D248_k489) (##inline ##vcore.car (bruijn ##.expr.140.569 0 0))) ((bruijn ##.k.1349 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D248_k489, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D248_k487(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k487, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.139.568 0 0)) ((close _V10_Dprint__fun__case_D248_k488) (##inline ##vcore.cdr (bruijn ##.expr.139.568 0 0))) ((bruijn ##.k.1349 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D248_k488, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D248_k486(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k486, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.e.555 3 1)) ((close _V10_Dprint__fun__case_D248_k487) (##inline ##vcore.cdr (bruijn ##.e.555 3 1))) ((bruijn ##.k.1349 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D248_k487, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D248_k493(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k493, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.664 34 0) (bruijn ##.k.1345 2 0) (##string ##.string.1800))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 2,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1800.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__case_D248_k485(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k485, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__fun__case_D248_k486) (close _V10_Dprint__fun__case_D248_k493))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D248_k486, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D248_k493, self)})));
}
static void _V10_Dprint__fun__case_D248_lambda92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_lambda92, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Dprint__fun__case_D248_k476) (close _V10_Dprint__fun__case_D248_k485))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D248_k476, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D248_k485, self)})));
}
static void _V10_Dprint__fun__case_D248_lambda91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_lambda91, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.k.1344 0 0) (close _V10_Dprint__fun__case_D248_lambda92))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D248_lambda92, self)})));
}
static void _V10_Dprint__fun__case_D248_k473(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k473, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.646 48 0) (close _V10_Dprint__fun__case_D248_k474) (close _V10_Dprint__fun__case_D248_lambda91) (bruijn ##.cases.499 14 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 48-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D248_k474, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D248_lambda91, self)})),
      VGetArg(statics, 14-1, 0));
}
static void _V10_Dprint__fun__case_D248_k472(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k472, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 24 0) (close _V10_Dprint__fun__case_D248_k473) (##string ##.string.1809) (bruijn ##.name.497 17 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D248_k473, self)})),
      VEncodePointer(&_V10_Dstring_D1809.sym, VPOINTER_OTHER),
      VGetArg(statics, 17-1, 0));
}
static void _V10_Dprint__fun__case_D248_k471(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k471, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 23 0) (close _V10_Dprint__fun__case_D248_k472) (##string ##.string.1810))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D248_k472, self)})),
      VEncodePointer(&_V10_Dstring_D1810.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__case_D248_k470(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k470, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 22 0) (close _V10_Dprint__fun__case_D248_k471) (##string ##.string.1811) (bruijn ##.name.497 15 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D248_k471, self)})),
      VEncodePointer(&_V10_Dstring_D1811.sym, VPOINTER_OTHER),
      VGetArg(statics, 15-1, 0));
}
static void _V10_Dprint__fun__case_D248_k469(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k469, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 21 0) (close _V10_Dprint__fun__case_D248_k470) (##string ##.string.1812))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D248_k470, self)})),
      VEncodePointer(&_V10_Dstring_D1812.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__case_D248_k468(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k468, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 20 0) (close _V10_Dprint__fun__case_D248_k469) (##string ##.string.1813))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D248_k469, self)})),
      VEncodePointer(&_V10_Dstring_D1813.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__case_D248_k467(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k467, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 19 0) (close _V10_Dprint__fun__case_D248_k468) (##string ##.string.1814))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D248_k468, self)})),
      VEncodePointer(&_V10_Dstring_D1814.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__case_D248_k442(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k442, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.purec?.227 14 2) ((bruijn ##.x.669 18 0) (close _V10_Dprint__fun__case_D248_k443) (##string ##.string.1804) (bruijn ##.name.497 11 0) (bruijn ##.name.497 11 0)) ((bruijn ##.x.669 18 0) (close _V10_Dprint__fun__case_D248_k467) (##string ##.string.1815) (bruijn ##.name.497 11 0)))
if(VDecodeBool(
VGetArg(statics, 14-1, 2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D248_k443, self)})),
      VEncodePointer(&_V10_Dstring_D1804.sym, VPOINTER_OTHER),
      VGetArg(statics, 11-1, 0),
      VGetArg(statics, 11-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D248_k467, self)})),
      VEncodePointer(&_V10_Dstring_D1815.sym, VPOINTER_OTHER),
      VGetArg(statics, 11-1, 0));
}
}
static void _V10_Dprint__fun__case_D248_k501(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k501, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1403 0 0) (bruijn ##.k.1394 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
}
static void _V10_Dprint__fun__case_D248_lambda97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_lambda97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.print-fun-single.247 22 12) (bruijn ##.k.1404 0 0) (##inline ##vcore.car (bruijn ##.e.517 9 1)) #f (##inline ##vcore.car (bruijn ##.expr.109.524 4 0)) #t (##inline ##vcore.car (bruijn ##.expr.111.527 1 0)) #t)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 12)), 7,
      _var0,
      VInlineCar2(runtime,
        VGetArg(statics, 9-1, 1)),
      VEncodeBool(false),
      VInlineCar2(runtime,
        statics->up->up->up->vars[0]),
      VEncodeBool(true),
      VInlineCar2(runtime,
        statics->vars[0]),
      VEncodeBool(true));
}
static void _V10_Dprint__fun__case_D248_k500(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k500, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.111.527 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.111.527 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.108.523 4 0))) (##vcore.call-with-values (close _V10_Dprint__fun__case_D248_k501) (close _V10_Dprint__fun__case_D248_lambda97) (bruijn ##.kk.104.518 7 1)) ((bruijn ##.k.1394 6 0) #f)) ((bruijn ##.k.1394 6 0) #f)) ((bruijn ##.k.1394 6 0) #f))
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
        statics->up->up->up->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D248_k501, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D248_lambda97, self)})),
      VGetArg(statics, 7-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D248_k499(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k499, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1399 0 0) ((close _V10_Dprint__fun__case_D248_k500) (##inline ##vcore.cdr (bruijn ##.expr.110.526 1 0))) ((bruijn ##.k.1394 5 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D248_k500, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D248_k498(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k498, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.110.526 0 0)) ((bruijn ##.x.670 23 0) (close _V10_Dprint__fun__case_D248_k499) '+ (##inline ##vcore.car (bruijn ##.expr.110.526 0 0))) ((bruijn ##.k.1394 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D248_k499, self)})),
      _V0_P,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D248_k497(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k497, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.109.524 0 0)) ((close _V10_Dprint__fun__case_D248_k498) (##inline ##vcore.cdr (bruijn ##.expr.109.524 0 0))) ((bruijn ##.k.1394 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D248_k498, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D248_k496(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k496, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.108.523 0 0)) ((close _V10_Dprint__fun__case_D248_k497) (##inline ##vcore.car (bruijn ##.expr.108.523 0 0))) ((bruijn ##.k.1394 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D248_k497, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D248_k495(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k495, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.107.522 0 0)) ((close _V10_Dprint__fun__case_D248_k496) (##inline ##vcore.cdr (bruijn ##.expr.107.522 0 0))) ((bruijn ##.k.1394 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D248_k496, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D248_k494(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k494, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.e.517 2 1)) ((close _V10_Dprint__fun__case_D248_k495) (##inline ##vcore.cdr (bruijn ##.e.517 2 1))) ((bruijn ##.k.1394 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D248_k495, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D248_k508(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k508, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1389 0 0) (bruijn ##.k.1382 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
static void _V10_Dprint__fun__case_D248_lambda98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_lambda98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.print-fun-single.247 21 12) (bruijn ##.k.1390 0 0) (##inline ##vcore.car (bruijn ##.e.517 8 1)) #f (##inline ##vcore.car (bruijn ##.expr.115.533 2 0)) #f (##inline ##vcore.car (bruijn ##.expr.116.535 1 0)) #t)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 12)), 7,
      _var0,
      VInlineCar2(runtime,
        VGetArg(statics, 8-1, 1)),
      VEncodeBool(false),
      VInlineCar2(runtime,
        statics->up->vars[0]),
      VEncodeBool(false),
      VInlineCar2(runtime,
        statics->vars[0]),
      VEncodeBool(true));
}
static void _V10_Dprint__fun__case_D248_k507(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k507, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.116.535 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.116.535 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.114.532 2 0))) (##vcore.call-with-values (close _V10_Dprint__fun__case_D248_k508) (close _V10_Dprint__fun__case_D248_lambda98) (bruijn ##.kk.104.518 6 1)) ((bruijn ##.k.1382 4 0) #f)) ((bruijn ##.k.1382 4 0) #f)) ((bruijn ##.k.1382 4 0) #f))
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
        statics->up->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D248_k508, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D248_lambda98, self)})),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D248_k506(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k506, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.115.533 0 0)) ((close _V10_Dprint__fun__case_D248_k507) (##inline ##vcore.cdr (bruijn ##.expr.115.533 0 0))) ((bruijn ##.k.1382 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D248_k507, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D248_k505(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k505, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.114.532 0 0)) ((close _V10_Dprint__fun__case_D248_k506) (##inline ##vcore.car (bruijn ##.expr.114.532 0 0))) ((bruijn ##.k.1382 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D248_k506, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D248_k504(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k504, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.113.531 0 0)) ((close _V10_Dprint__fun__case_D248_k505) (##inline ##vcore.cdr (bruijn ##.expr.113.531 0 0))) ((bruijn ##.k.1382 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D248_k505, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D248_k503(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k503, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.e.517 3 1)) ((close _V10_Dprint__fun__case_D248_k504) (##inline ##vcore.cdr (bruijn ##.e.517 3 1))) ((bruijn ##.k.1382 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D248_k504, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D248_k509(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k509, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.664 26 0) (bruijn ##.k.1378 2 0) (##string ##.string.1800))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 2,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1800.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__case_D248_k502(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k502, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__fun__case_D248_k503) (close _V10_Dprint__fun__case_D248_k509))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D248_k503, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D248_k509, self)})));
}
static void _V10_Dprint__fun__case_D248_lambda96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_lambda96, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Dprint__fun__case_D248_k494) (close _V10_Dprint__fun__case_D248_k502))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D248_k494, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D248_k502, self)})));
}
static void _V10_Dprint__fun__case_D248_lambda95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_lambda95, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.k.1377 0 0) (close _V10_Dprint__fun__case_D248_lambda96))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D248_lambda96, self)})));
}
static void _V10_Dprint__fun__case_D248_k441(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k441, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.646 40 0) (close _V10_Dprint__fun__case_D248_k442) (close _V10_Dprint__fun__case_D248_lambda95) (bruijn ##.cases.499 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 40-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D248_k442, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D248_lambda95, self)})),
      VGetArg(statics, 6-1, 0));
}
static void _V10_Dprint__fun__case_D248_k440(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k440, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 16 0) (close _V10_Dprint__fun__case_D248_k441) (##string ##.string.1711))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D248_k441, self)})),
      VEncodePointer(&_V10_Dstring_D1711.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__case_D248_k439(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k439, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 15 0) (close _V10_Dprint__fun__case_D248_k440) (##string ##.string.1816))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D248_k440, self)})),
      VEncodePointer(&_V10_Dstring_D1816.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__case_D248_k517(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k517, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1434 0 0) (bruijn ##.k.1425 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
}
static void _V10_Dprint__fun__case_D248_lambda101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_lambda101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 24 0) (bruijn ##.k.1435 0 0) (##string ##.string.1817) (##inline ##vcore.car (bruijn ##.expr.96.507 4 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1817.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        statics->up->up->up->vars[0]));
}
static void _V10_Dprint__fun__case_D248_k516(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k516, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.98.510 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.98.510 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.95.506 4 0))) (##vcore.call-with-values (close _V10_Dprint__fun__case_D248_k517) (close _V10_Dprint__fun__case_D248_lambda101) (bruijn ##.kk.91.501 7 1)) ((bruijn ##.k.1425 6 0) #f)) ((bruijn ##.k.1425 6 0) #f)) ((bruijn ##.k.1425 6 0) #f))
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
        statics->up->up->up->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D248_k517, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D248_lambda101, self)})),
      VGetArg(statics, 7-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D248_k515(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k515, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1430 0 0) ((close _V10_Dprint__fun__case_D248_k516) (##inline ##vcore.cdr (bruijn ##.expr.97.509 1 0))) ((bruijn ##.k.1425 5 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D248_k516, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D248_k514(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k514, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.97.509 0 0)) ((bruijn ##.x.670 20 0) (close _V10_Dprint__fun__case_D248_k515) '+ (##inline ##vcore.car (bruijn ##.expr.97.509 0 0))) ((bruijn ##.k.1425 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D248_k515, self)})),
      _V0_P,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D248_k513(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k513, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.96.507 0 0)) ((close _V10_Dprint__fun__case_D248_k514) (##inline ##vcore.cdr (bruijn ##.expr.96.507 0 0))) ((bruijn ##.k.1425 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D248_k514, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D248_k512(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k512, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.95.506 0 0)) ((close _V10_Dprint__fun__case_D248_k513) (##inline ##vcore.car (bruijn ##.expr.95.506 0 0))) ((bruijn ##.k.1425 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D248_k513, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D248_k511(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k511, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.94.505 0 0)) ((close _V10_Dprint__fun__case_D248_k512) (##inline ##vcore.cdr (bruijn ##.expr.94.505 0 0))) ((bruijn ##.k.1425 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D248_k512, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D248_k510(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k510, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.e.500 2 1)) ((close _V10_Dprint__fun__case_D248_k511) (##inline ##vcore.cdr (bruijn ##.e.500 2 1))) ((bruijn ##.k.1425 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D248_k511, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D248_k524(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k524, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1420 0 0) (bruijn ##.k.1413 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
static void _V10_Dprint__fun__case_D248_lambda102(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_lambda102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 23 0) (bruijn ##.k.1421 0 0) (##string ##.string.1818) (##inline ##vcore.car (bruijn ##.expr.102.514 2 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1818.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        statics->up->vars[0]));
}
static void _V10_Dprint__fun__case_D248_k523(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k523, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.103.516 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.103.516 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.101.513 2 0))) (##vcore.call-with-values (close _V10_Dprint__fun__case_D248_k524) (close _V10_Dprint__fun__case_D248_lambda102) (bruijn ##.kk.91.501 6 1)) ((bruijn ##.k.1413 4 0) #f)) ((bruijn ##.k.1413 4 0) #f)) ((bruijn ##.k.1413 4 0) #f))
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
        statics->up->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D248_k524, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D248_lambda102, self)})),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D248_k522(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k522, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.102.514 0 0)) ((close _V10_Dprint__fun__case_D248_k523) (##inline ##vcore.cdr (bruijn ##.expr.102.514 0 0))) ((bruijn ##.k.1413 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D248_k523, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D248_k521(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k521, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.101.513 0 0)) ((close _V10_Dprint__fun__case_D248_k522) (##inline ##vcore.car (bruijn ##.expr.101.513 0 0))) ((bruijn ##.k.1413 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D248_k522, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D248_k520(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k520, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.100.512 0 0)) ((close _V10_Dprint__fun__case_D248_k521) (##inline ##vcore.cdr (bruijn ##.expr.100.512 0 0))) ((bruijn ##.k.1413 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D248_k521, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D248_k519(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k519, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.e.500 3 1)) ((close _V10_Dprint__fun__case_D248_k520) (##inline ##vcore.cdr (bruijn ##.e.500 3 1))) ((bruijn ##.k.1413 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D248_k520, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D248_k525(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k525, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.664 23 0) (bruijn ##.k.1409 2 0) (##string ##.string.1800))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 2,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1800.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__case_D248_k518(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k518, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__fun__case_D248_k519) (close _V10_Dprint__fun__case_D248_k525))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D248_k519, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D248_k525, self)})));
}
static void _V10_Dprint__fun__case_D248_lambda100(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_lambda100, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Dprint__fun__case_D248_k510) (close _V10_Dprint__fun__case_D248_k518))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D248_k510, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D248_k518, self)})));
}
static void _V10_Dprint__fun__case_D248_lambda99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_lambda99, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.k.1408 0 0) (close _V10_Dprint__fun__case_D248_lambda100))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D248_lambda100, self)})));
}
static void _V10_Dprint__fun__case_D248_k438(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k438, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.646 37 0) (close _V10_Dprint__fun__case_D248_k439) (close _V10_Dprint__fun__case_D248_lambda99) (bruijn ##.cases.499 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D248_k439, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D248_lambda99, self)})),
      statics->up->up->vars[0]);
}
static void _V10_Dprint__fun__case_D248_k437(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k437, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 13 0) (close _V10_Dprint__fun__case_D248_k438) (##string ##.string.1819) (bruijn ##.name.497 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D248_k438, self)})),
      VEncodePointer(&_V10_Dstring_D1819.sym, VPOINTER_OTHER),
      VGetArg(statics, 6-1, 0));
}
static void _V10_Dprint__fun__case_D248_k436(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k436, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 12 0) (close _V10_Dprint__fun__case_D248_k437) (##string ##.string.1820) (bruijn ##.fun.496 6 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D248_k437, self)})),
      VEncodePointer(&_V10_Dstring_D1820.sym, VPOINTER_OTHER),
      VGetArg(statics, 6-1, 1));
}
static void _V10_Dprint__fun__case_D248_k434(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k434, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__fun__case_D248_k435) (close _V10_Dprint__fun__case_D248_k436))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D248_k435, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D248_k436, self)})));
}
static void _V10_Dprint__fun__case_D248_k526(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k526, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1440 1 0) (##inline ##vcore.cons (bruijn ##.x.1441 0 0) (##inline ##vcore.cons '#f (##inline ##vcore.cons (bruijn ##.e.574 1 2) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        _var0,
        VInlineCons2(runtime,
        VEncodeBool(false),
        VInlineCons2(runtime,
        statics->vars[2],
        VNULL))));
}
static void _V10_Dprint__fun__case_D248_lambda103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_lambda103, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.x.671 9 0) (close _V10_Dprint__fun__case_D248_k526) (##string ##.string.1821) (bruijn ##.i.573 0 1) (bruijn ##.name.497 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D248_k526, self)})),
      VEncodePointer(&_V10_Dstring_D1821.sym, VPOINTER_OTHER),
      _var1,
      statics->up->up->up->vars[0]);
}
static void _V10_Dprint__fun__case_D248_k433(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k433, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.665 14 0) (close _V10_Dprint__fun__case_D248_k434) (close _V10_Dprint__fun__case_D248_lambda103) (bruijn ##.x.1444 0 0) (bruijn ##.cases.498 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D248_k434, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D248_lambda103, self)})),
      _var0,
      statics->up->vars[0]);
}
static void _V10_Dprint__fun__case_D248_k432(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k432, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.667 11 0) (close _V10_Dprint__fun__case_D248_k433) (bruijn ##.x.1445 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D248_k433, self)})),
      _var0);
}
static void _V10_Dprint__fun__case_D248_k431(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k431, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.668 9 0) (close _V10_Dprint__fun__case_D248_k432) (bruijn ##.cases.498 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D248_k432, self)})),
      _var0);
}
static void _V10_Dprint__fun__case_D248_k430(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_k430, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.666 10 0) (close _V10_Dprint__fun__case_D248_k431) (bruijn ##.fun.496 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D248_k431, self)})),
      statics->vars[1]);
}
static void _V10_Dprint__fun__case_D248_lambda86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D248_lambda86, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Dprint__fun__case_D248_k430) (##inline ##vcore.car (bruijn ##.fun.496 0 1)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D248_k430, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var1));
}
static void _V10_Dprint__fun_D249_k532(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D249_k532, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1474 0 0) (bruijn ##.k.1467 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
static void _V10_Dprint__fun_D249_lambda106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D249_lambda106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.print-fun-single.247 8 12) (bruijn ##.k.1475 0 0) (##inline ##vcore.car (bruijn ##.fun.575 7 1)) (##inline ##vcore.car (bruijn ##.expr.146.580 4 0)) (##inline ##vcore.car (bruijn ##.expr.148.583 2 0)) #f (##inline ##vcore.car (bruijn ##.expr.149.585 1 0)) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 12)), 7,
      _var0,
      VInlineCar2(runtime,
        VGetArg(statics, 7-1, 1)),
      VInlineCar2(runtime,
        statics->up->up->up->vars[0]),
      VInlineCar2(runtime,
        statics->up->vars[0]),
      VEncodeBool(false),
      VInlineCar2(runtime,
        statics->vars[0]),
      VEncodeBool(false));
}
static void _V10_Dprint__fun_D249_k531(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D249_k531, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.149.585 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.149.585 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.147.582 2 0))) (##vcore.call-with-values (close _V10_Dprint__fun_D249_k532) (close _V10_Dprint__fun_D249_lambda106) (bruijn ##.kk.143.576 5 1)) ((bruijn ##.k.1467 4 0) #f)) ((bruijn ##.k.1467 4 0) #f)) ((bruijn ##.k.1467 4 0) #f))
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
        statics->up->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun_D249_k532, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun_D249_lambda106, self)})),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun_D249_k530(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D249_k530, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.148.583 0 0)) ((close _V10_Dprint__fun_D249_k531) (##inline ##vcore.cdr (bruijn ##.expr.148.583 0 0))) ((bruijn ##.k.1467 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun_D249_k531, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun_D249_k529(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D249_k529, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.147.582 0 0)) ((close _V10_Dprint__fun_D249_k530) (##inline ##vcore.car (bruijn ##.expr.147.582 0 0))) ((bruijn ##.k.1467 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun_D249_k530, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun_D249_k528(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D249_k528, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.146.580 0 0)) ((close _V10_Dprint__fun_D249_k529) (##inline ##vcore.cdr (bruijn ##.expr.146.580 0 0))) ((bruijn ##.k.1467 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun_D249_k529, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun_D249_k527(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D249_k527, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.fun.575 2 1)) ((close _V10_Dprint__fun_D249_k528) (##inline ##vcore.cdr (bruijn ##.fun.575 2 1))) ((bruijn ##.k.1467 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun_D249_k528, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun_D249_k541(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D249_k541, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1461 0 0) (bruijn ##.k.1452 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
}
static void _V10_Dprint__fun_D249_lambda107(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D249_lambda107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.print-fun-single.247 11 12) (bruijn ##.k.1462 0 0) (##inline ##vcore.car (bruijn ##.fun.575 10 1)) (##inline ##vcore.car (bruijn ##.expr.151.589 6 0)) (##inline ##vcore.car (bruijn ##.expr.153.592 4 0)) #t (##inline ##vcore.car (bruijn ##.expr.155.595 1 0)) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 12)), 7,
      _var0,
      VInlineCar2(runtime,
        VGetArg(statics, 10-1, 1)),
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 0)),
      VInlineCar2(runtime,
        statics->up->up->up->vars[0]),
      VEncodeBool(true),
      VInlineCar2(runtime,
        statics->vars[0]),
      VEncodeBool(false));
}
static void _V10_Dprint__fun_D249_k540(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D249_k540, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.155.595 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.155.595 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.152.591 4 0))) (##vcore.call-with-values (close _V10_Dprint__fun_D249_k541) (close _V10_Dprint__fun_D249_lambda107) (bruijn ##.kk.143.576 8 1)) ((bruijn ##.k.1452 6 0) #f)) ((bruijn ##.k.1452 6 0) #f)) ((bruijn ##.k.1452 6 0) #f))
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
        statics->up->up->up->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun_D249_k541, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun_D249_lambda107, self)})),
      VGetArg(statics, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun_D249_k539(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D249_k539, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1457 0 0) ((close _V10_Dprint__fun_D249_k540) (##inline ##vcore.cdr (bruijn ##.expr.154.594 1 0))) ((bruijn ##.k.1452 5 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun_D249_k540, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun_D249_k538(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D249_k538, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.154.594 0 0)) ((bruijn ##.x.670 12 0) (close _V10_Dprint__fun_D249_k539) '+ (##inline ##vcore.car (bruijn ##.expr.154.594 0 0))) ((bruijn ##.k.1452 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun_D249_k539, self)})),
      _V0_P,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun_D249_k537(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D249_k537, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.153.592 0 0)) ((close _V10_Dprint__fun_D249_k538) (##inline ##vcore.cdr (bruijn ##.expr.153.592 0 0))) ((bruijn ##.k.1452 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun_D249_k538, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun_D249_k536(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D249_k536, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.152.591 0 0)) ((close _V10_Dprint__fun_D249_k537) (##inline ##vcore.car (bruijn ##.expr.152.591 0 0))) ((bruijn ##.k.1452 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun_D249_k537, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun_D249_k535(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D249_k535, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.151.589 0 0)) ((close _V10_Dprint__fun_D249_k536) (##inline ##vcore.cdr (bruijn ##.expr.151.589 0 0))) ((bruijn ##.k.1452 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun_D249_k536, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun_D249_k534(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D249_k534, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.fun.575 3 1)) ((close _V10_Dprint__fun_D249_k535) (##inline ##vcore.cdr (bruijn ##.fun.575 3 1))) ((bruijn ##.k.1452 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun_D249_k535, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun_D249_lambda108(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D249_lambda108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.print-fun-case.248 5 13) (bruijn ##.k.1450 0 0) (bruijn ##.fun.575 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 13)), 2,
      _var0,
      statics->up->up->up->vars[1]);
}
static void _V10_Dprint__fun_D249_k542(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D249_k542, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1447 2 0) (close _V10_Dprint__fun_D249_lambda108) (bruijn ##.kk.143.576 2 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun_D249_lambda108, self)})),
      statics->up->vars[1]);
}
static void _V10_Dprint__fun_D249_k533(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D249_k533, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__fun_D249_k534) (close _V10_Dprint__fun_D249_k542))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun_D249_k534, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun_D249_k542, self)})));
}
static void _V10_Dprint__fun_D249_lambda105(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D249_lambda105, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Dprint__fun_D249_k527) (close _V10_Dprint__fun_D249_k533))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun_D249_k527, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun_D249_k533, self)})));
}
static void _V10_Dprint__fun_D249_lambda104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D249_lambda104, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.k.1446 0 0) (close _V10_Dprint__fun_D249_lambda105))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun_D249_lambda105, self)})));
}
static void _V10_Dprint__toplevel_D250_k545(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__toplevel_D250_k545, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.648 30 0) (bruijn ##.k.1478 3 0) (##string ##.string.1756))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 2,
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1756.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__toplevel_D250_k544(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__toplevel_D250_k544, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.print-expr.246 3 11) (close _V10_Dprint__toplevel_D250_k545) (##inline ##vcore.cons (bruijn ##.expr.598 2 2) (##inline ##vcore.cons (##inline ##vcore.cons 'bruijn (##inline ##vcore.cons 'k (##inline ##vcore.cons '0 (##inline ##vcore.cons '0 '())))) '())) (##inline ##vcore.qcons '(##string ##.string.1822) '()))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[11]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__toplevel_D250_k545, self)})),
      VInlineCons2(runtime,
        statics->up->vars[2],
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0bruijn,
        VInlineCons2(runtime,
        _V0k,
        VInlineCons2(runtime,
        VEncodeInt(0l),
        VInlineCons2(runtime,
        VEncodeInt(0l),
        VNULL)))),
        VNULL)),
      VInlineCons2(runtime,
        VEncodePointer(&_V10_Dstring_D1822.sym, VPOINTER_OTHER),
        VNULL));
}
static void _V10_Dprint__toplevel_D250_k543(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__toplevel_D250_k543, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.648 28 0) (close _V10_Dprint__toplevel_D250_k544) (##string ##.string.1823))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__toplevel_D250_k544, self)})),
      VEncodePointer(&_V10_Dstring_D1823.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__toplevel_D250_k548(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__toplevel_D250_k548, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.648 30 0) (bruijn ##.k.1478 3 0) (##string ##.string.1756))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 2,
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1756.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__toplevel_D250_k547(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__toplevel_D250_k547, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.print-expr.246 3 11) (close _V10_Dprint__toplevel_D250_k548) (##inline ##vcore.cons (bruijn ##.expr.598 2 2) (##inline ##vcore.cons (##inline ##vcore.cons 'bruijn (##inline ##vcore.cons 'k (##inline ##vcore.cons '0 (##inline ##vcore.cons '0 '())))) '())) (##inline ##vcore.qcons '(##string ##.string.1822) '()))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[11]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__toplevel_D250_k548, self)})),
      VInlineCons2(runtime,
        statics->up->vars[2],
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0bruijn,
        VInlineCons2(runtime,
        _V0k,
        VInlineCons2(runtime,
        VEncodeInt(0l),
        VInlineCons2(runtime,
        VEncodeInt(0l),
        VNULL)))),
        VNULL)),
      VInlineCons2(runtime,
        VEncodePointer(&_V10_Dstring_D1822.sym, VPOINTER_OTHER),
        VNULL));
}
static void _V10_Dprint__toplevel_D250_k546(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__toplevel_D250_k546, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.648 28 0) (close _V10_Dprint__toplevel_D250_k547) (##string ##.string.1825))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__toplevel_D250_k547, self)})),
      VEncodePointer(&_V10_Dstring_D1825.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__toplevel_D250_lambda109(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__toplevel_D250_lambda109, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (bruijn ##.purec?.227 2 2) ((bruijn ##.x.669 6 0) (close _V10_Dprint__toplevel_D250_k543) (##string ##.string.1824) (bruijn ##.i.597 0 1) (bruijn ##.i.597 0 1)) ((bruijn ##.x.669 6 0) (close _V10_Dprint__toplevel_D250_k546) (##string ##.string.1826) (bruijn ##.i.597 0 1)))
if(VDecodeBool(
statics->up->vars[2])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__toplevel_D250_k543, self)})),
      VEncodePointer(&_V10_Dstring_D1824.sym, VPOINTER_OTHER),
      _var1,
      _var1);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__toplevel_D250_k546, self)})),
      VEncodePointer(&_V10_Dstring_D1826.sym, VPOINTER_OTHER),
      _var1);
}
}
static void _V10_Dprint__foreign__declare_D251_k552(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__declare_D251_k552, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1519 0 0) (bruijn ##.k.1515 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
static void _V10_Dprint__foreign__declare_D251_lambda112(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__declare_D251_lambda112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.648 32 0) (bruijn ##.k.1520 0 0) (##inline ##vcore.car (bruijn ##.expr.159.603 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 2,
      _var0,
      VInlineCar2(runtime,
        statics->vars[0]));
}
static void _V10_Dprint__foreign__declare_D251_k551(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__declare_D251_k551, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.159.603 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.159.603 0 0))) (##vcore.call-with-values (close _V10_Dprint__foreign__declare_D251_k552) (close _V10_Dprint__foreign__declare_D251_lambda112) (bruijn ##.kk.156.600 3 1)) ((bruijn ##.k.1515 2 0) #f)) ((bruijn ##.k.1515 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__declare_D251_k552, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__declare_D251_lambda112, self)})),
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
static void _V10_Dprint__foreign__declare_D251_k550(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__declare_D251_k550, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1516 0 0) ((close _V10_Dprint__foreign__declare_D251_k551) (##inline ##vcore.cdr (bruijn ##.declare.599 3 1))) ((bruijn ##.k.1515 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__foreign__declare_D251_k551, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__foreign__declare_D251_k549(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__declare_D251_k549, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.declare.599 2 1)) ((bruijn ##.x.670 7 0) (close _V10_Dprint__foreign__declare_D251_k550) '##foreign.declare (##inline ##vcore.car (bruijn ##.declare.599 2 1))) ((bruijn ##.k.1515 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__declare_D251_k550, self)})),
      _V10foreign_Ddeclare,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__foreign__declare_D251_k558(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__declare_D251_k558, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1510 0 0) (bruijn ##.k.1505 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V10_Dprint__foreign__declare_D251_lambda113(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__declare_D251_lambda113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1511 0 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
static void _V10_Dprint__foreign__declare_D251_k557(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__declare_D251_k557, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.162.608 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.162.608 0 0))) (##vcore.call-with-values (close _V10_Dprint__foreign__declare_D251_k558) (close _V10_Dprint__foreign__declare_D251_lambda113) (bruijn ##.kk.156.600 5 1)) ((bruijn ##.k.1505 3 0) #f)) ((bruijn ##.k.1505 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__declare_D251_k558, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__declare_D251_lambda113, self)})),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__foreign__declare_D251_k556(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__declare_D251_k556, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.161.606 0 0)) ((close _V10_Dprint__foreign__declare_D251_k557) (##inline ##vcore.cdr (bruijn ##.expr.161.606 0 0))) ((bruijn ##.k.1505 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__foreign__declare_D251_k557, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__foreign__declare_D251_k555(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__declare_D251_k555, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1506 0 0) ((close _V10_Dprint__foreign__declare_D251_k556) (##inline ##vcore.cdr (bruijn ##.declare.599 4 1))) ((bruijn ##.k.1505 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__foreign__declare_D251_k556, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__foreign__declare_D251_k554(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__declare_D251_k554, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.declare.599 3 1)) ((bruijn ##.x.670 8 0) (close _V10_Dprint__foreign__declare_D251_k555) '##vcore.declare (##inline ##vcore.car (bruijn ##.declare.599 3 1))) ((bruijn ##.k.1505 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__declare_D251_k555, self)})),
      _V10vcore_Ddeclare,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__foreign__declare_D251_lambda114(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__declare_D251_lambda114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.645 34 0) (bruijn ##.k.1503 0 0) (##string ##.string.1827) (bruijn ##.declare.599 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1827.sym, VPOINTER_OTHER),
      statics->up->up->up->vars[1]);
}
static void _V10_Dprint__foreign__declare_D251_k559(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__declare_D251_k559, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1500 2 0) (close _V10_Dprint__foreign__declare_D251_lambda114) (bruijn ##.kk.156.600 2 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__declare_D251_lambda114, self)})),
      statics->up->vars[1]);
}
static void _V10_Dprint__foreign__declare_D251_k553(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__declare_D251_k553, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__foreign__declare_D251_k554) (close _V10_Dprint__foreign__declare_D251_k559))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__foreign__declare_D251_k554, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__declare_D251_k559, self)})));
}
static void _V10_Dprint__foreign__declare_D251_lambda111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__declare_D251_lambda111, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Dprint__foreign__declare_D251_k549) (close _V10_Dprint__foreign__declare_D251_k553))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__foreign__declare_D251_k549, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__declare_D251_k553, self)})));
}
static void _V10_Dprint__foreign__declare_D251_lambda110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__declare_D251_lambda110, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.k.1499 0 0) (close _V10_Dprint__foreign__declare_D251_lambda111))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__declare_D251_lambda111, self)})));
}
static void _V10_Dprint__declare_D252_k563(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declare_D252_k563, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1543 0 0) (bruijn ##.k.1539 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
static void _V10_Dprint__declare_D252_lambda117(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declare_D252_lambda117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1544 0 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
static void _V10_Dprint__declare_D252_k562(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declare_D252_k562, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.166.614 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.166.614 0 0))) (##vcore.call-with-values (close _V10_Dprint__declare_D252_k563) (close _V10_Dprint__declare_D252_lambda117) (bruijn ##.kk.163.611 3 1)) ((bruijn ##.k.1539 2 0) #f)) ((bruijn ##.k.1539 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__declare_D252_k563, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__declare_D252_lambda117, self)})),
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
static void _V10_Dprint__declare_D252_k561(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declare_D252_k561, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1540 0 0) ((close _V10_Dprint__declare_D252_k562) (##inline ##vcore.cdr (bruijn ##.declare.610 3 1))) ((bruijn ##.k.1539 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__declare_D252_k562, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__declare_D252_k560(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declare_D252_k560, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.declare.610 2 1)) ((bruijn ##.x.670 7 0) (close _V10_Dprint__declare_D252_k561) '##foreign.declare (##inline ##vcore.car (bruijn ##.declare.610 2 1))) ((bruijn ##.k.1539 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__declare_D252_k561, self)})),
      _V10foreign_Ddeclare,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__declare_D252_k569(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declare_D252_k569, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1534 0 0) (bruijn ##.k.1529 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V10_Dprint__declare_D252_lambda118(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declare_D252_lambda118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 13 0) (bruijn ##.k.1535 0 0) (##string ##.string.1828) (##inline ##vcore.car (bruijn ##.expr.168.617 2 0)) (##inline ##vcore.car (bruijn ##.expr.169.619 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 4,
      _var0,
      VEncodePointer(&_V10_Dstring_D1828.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        statics->up->vars[0]),
      VInlineCar2(runtime,
        statics->vars[0]));
}
static void _V10_Dprint__declare_D252_k568(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declare_D252_k568, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.169.619 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.169.619 0 0))) (##vcore.call-with-values (close _V10_Dprint__declare_D252_k569) (close _V10_Dprint__declare_D252_lambda118) (bruijn ##.kk.163.611 5 1)) ((bruijn ##.k.1529 3 0) #f)) ((bruijn ##.k.1529 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__declare_D252_k569, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__declare_D252_lambda118, self)})),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__declare_D252_k567(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declare_D252_k567, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.168.617 0 0)) ((close _V10_Dprint__declare_D252_k568) (##inline ##vcore.cdr (bruijn ##.expr.168.617 0 0))) ((bruijn ##.k.1529 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__declare_D252_k568, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__declare_D252_k566(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declare_D252_k566, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1530 0 0) ((close _V10_Dprint__declare_D252_k567) (##inline ##vcore.cdr (bruijn ##.declare.610 4 1))) ((bruijn ##.k.1529 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__declare_D252_k567, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__declare_D252_k565(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declare_D252_k565, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.declare.610 3 1)) ((bruijn ##.x.670 8 0) (close _V10_Dprint__declare_D252_k566) '##vcore.declare (##inline ##vcore.car (bruijn ##.declare.610 3 1))) ((bruijn ##.k.1529 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__declare_D252_k566, self)})),
      _V10vcore_Ddeclare,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__declare_D252_lambda119(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declare_D252_lambda119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.645 34 0) (bruijn ##.k.1527 0 0) (##string ##.string.1829) (bruijn ##.declare.610 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1829.sym, VPOINTER_OTHER),
      statics->up->up->up->vars[1]);
}
static void _V10_Dprint__declare_D252_k570(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declare_D252_k570, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1524 2 0) (close _V10_Dprint__declare_D252_lambda119) (bruijn ##.kk.163.611 2 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__declare_D252_lambda119, self)})),
      statics->up->vars[1]);
}
static void _V10_Dprint__declare_D252_k564(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declare_D252_k564, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__declare_D252_k565) (close _V10_Dprint__declare_D252_k570))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__declare_D252_k565, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__declare_D252_k570, self)})));
}
static void _V10_Dprint__declare_D252_lambda116(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declare_D252_lambda116, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Dprint__declare_D252_k560) (close _V10_Dprint__declare_D252_k564))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__declare_D252_k560, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__declare_D252_k564, self)})));
}
static void _V10_Dprint__declare_D252_lambda115(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declare_D252_lambda115, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.k.1523 0 0) (close _V10_Dprint__declare_D252_lambda116))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__declare_D252_lambda116, self)})));
}
static void _V10_Dprint__declaretable_D253_k572(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declaretable_D253_k572, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 8 0) (bruijn ##.k.1547 2 0) (##string ##.string.1711))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 2,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1711.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__declaretable_D253_k576(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declaretable_D253_k576, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1570 0 0) (bruijn ##.k.1566 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
static void _V10_Dprint__declaretable_D253_lambda123(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declaretable_D253_lambda123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1571 0 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
static void _V10_Dprint__declaretable_D253_k575(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declaretable_D253_k575, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.173.626 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.173.626 0 0))) (##vcore.call-with-values (close _V10_Dprint__declaretable_D253_k576) (close _V10_Dprint__declaretable_D253_lambda123) (bruijn ##.kk.170.623 3 1)) ((bruijn ##.k.1566 2 0) #f)) ((bruijn ##.k.1566 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__declaretable_D253_k576, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__declaretable_D253_lambda123, self)})),
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
static void _V10_Dprint__declaretable_D253_k574(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declaretable_D253_k574, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1567 0 0) ((close _V10_Dprint__declaretable_D253_k575) (##inline ##vcore.cdr (bruijn ##.declare.622 3 1))) ((bruijn ##.k.1566 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__declaretable_D253_k575, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__declaretable_D253_k573(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declaretable_D253_k573, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.declare.622 2 1)) ((bruijn ##.x.670 9 0) (close _V10_Dprint__declaretable_D253_k574) '##foreign.declare (##inline ##vcore.car (bruijn ##.declare.622 2 1))) ((bruijn ##.k.1566 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__declaretable_D253_k574, self)})),
      _V10foreign_Ddeclare,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__declaretable_D253_k583(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declaretable_D253_k583, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1561 0 0) (bruijn ##.k.1556 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
static void _V10_Dprint__declaretable_D253_lambda124(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declaretable_D253_lambda124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 16 0) (bruijn ##.k.1562 0 0) (##string ##.string.1830) (bruijn ##.f.630 2 0) (bruijn ##.f.630 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 4,
      _var0,
      VEncodePointer(&_V10_Dstring_D1830.sym, VPOINTER_OTHER),
      statics->up->vars[0],
      statics->up->vars[0]);
}
static void _V10_Dprint__declaretable_D253_k582(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declaretable_D253_k582, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.176.631 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.176.631 0 0))) (##vcore.call-with-values (close _V10_Dprint__declaretable_D253_k583) (close _V10_Dprint__declaretable_D253_lambda124) (bruijn ##.kk.170.623 6 1)) ((bruijn ##.k.1556 4 0) #f)) ((bruijn ##.k.1556 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__declaretable_D253_k583, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__declaretable_D253_lambda124, self)})),
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
static void _V10_Dprint__declaretable_D253_k581(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declaretable_D253_k581, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__declaretable_D253_k582) (##inline ##vcore.cdr (bruijn ##.expr.175.629 1 0)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__declaretable_D253_k582, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
static void _V10_Dprint__declaretable_D253_k580(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declaretable_D253_k580, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.175.629 0 0)) ((close _V10_Dprint__declaretable_D253_k581) (##inline ##vcore.car (bruijn ##.expr.175.629 0 0))) ((bruijn ##.k.1556 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__declaretable_D253_k581, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__declaretable_D253_k579(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declaretable_D253_k579, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1557 0 0) ((close _V10_Dprint__declaretable_D253_k580) (##inline ##vcore.cdr (bruijn ##.declare.622 4 1))) ((bruijn ##.k.1556 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__declaretable_D253_k580, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__declaretable_D253_k578(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declaretable_D253_k578, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.declare.622 3 1)) ((bruijn ##.x.670 10 0) (close _V10_Dprint__declaretable_D253_k579) '##vcore.declare (##inline ##vcore.car (bruijn ##.declare.622 3 1))) ((bruijn ##.k.1556 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__declaretable_D253_k579, self)})),
      _V10vcore_Ddeclare,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__declaretable_D253_lambda125(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declaretable_D253_lambda125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.645 36 0) (bruijn ##.k.1554 0 0) (##string ##.string.1831) (bruijn ##.declare.622 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1831.sym, VPOINTER_OTHER),
      statics->up->up->up->vars[1]);
}
static void _V10_Dprint__declaretable_D253_k584(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declaretable_D253_k584, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1551 2 0) (close _V10_Dprint__declaretable_D253_lambda125) (bruijn ##.kk.170.623 2 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__declaretable_D253_lambda125, self)})),
      statics->up->vars[1]);
}
static void _V10_Dprint__declaretable_D253_k577(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declaretable_D253_k577, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprint__declaretable_D253_k578) (close _V10_Dprint__declaretable_D253_k584))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__declaretable_D253_k578, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__declaretable_D253_k584, self)})));
}
static void _V10_Dprint__declaretable_D253_lambda122(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declaretable_D253_lambda122, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Dprint__declaretable_D253_k573) (close _V10_Dprint__declaretable_D253_k577))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__declaretable_D253_k573, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__declaretable_D253_k577, self)})));
}
static void _V10_Dprint__declaretable_D253_lambda121(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declaretable_D253_lambda121, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.k.1550 0 0) (close _V10_Dprint__declaretable_D253_lambda122))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__declaretable_D253_lambda122, self)})));
}
static void _V10_Dprint__declaretable_D253_k571(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declaretable_D253_k571, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.646 30 0) (close _V10_Dprint__declaretable_D253_k572) (close _V10_Dprint__declaretable_D253_lambda121) (bruijn ##.declares.621 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__declaretable_D253_k572, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__declaretable_D253_lambda121, self)})),
      statics->vars[1]);
}
static void _V10_Dprint__declaretable_D253_lambda120(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declaretable_D253_lambda120, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.x.669 6 0) (close _V10_Dprint__declaretable_D253_k571) (##string ##.string.1832))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__declaretable_D253_k571, self)})),
      VEncodePointer(&_V10_Dstring_D1832.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__toplevels_D254_k592(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__toplevels_D254_k592, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.669 14 0) (bruijn ##.k.1574 8 0) (##string ##.string.1833))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 2,
      VGetArg(statics, 8-1, 0),
      VEncodePointer(&_V10_Dstring_D1833.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__toplevels_D254_k591(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__toplevels_D254_k591, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 13 0) (close _V10_Dprint__toplevels_D254_k592) (##string ##.string.1834))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__toplevels_D254_k592, self)})),
      VEncodePointer(&_V10_Dstring_D1834.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__toplevels_D254_lambda127(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__toplevels_D254_lambda127, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.x.669 13 0) (bruijn ##.k.1579 0 0) (##string ##.string.1835) (bruijn ##.i.636 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1835.sym, VPOINTER_OTHER),
      _var1);
}
static void _V10_Dprint__toplevels_D254_k590(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__toplevels_D254_k590, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.646 35 0) (close _V10_Dprint__toplevels_D254_k591) (close _V10_Dprint__toplevels_D254_lambda127) (bruijn ##.x.1580 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 35-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__toplevels_D254_k591, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__toplevels_D254_lambda127, self)})),
      _var0);
}
static void _V10_Dprint__toplevels_D254_k589(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__toplevels_D254_k589, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.667 13 0) (close _V10_Dprint__toplevels_D254_k590) (bruijn ##.x.1581 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__toplevels_D254_k590, self)})),
      _var0);
}
static void _V10_Dprint__toplevels_D254_k588(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__toplevels_D254_k588, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.668 11 0) (close _V10_Dprint__toplevels_D254_k589) (bruijn ##.toplevels.633 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__toplevels_D254_k589, self)})),
      statics->up->up->up->vars[1]);
}
static void _V10_Dprint__toplevels_D254_k587(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__toplevels_D254_k587, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.669 9 0) (close _V10_Dprint__toplevels_D254_k588) (##string ##.string.1836))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__toplevels_D254_k588, self)})),
      VEncodePointer(&_V10_Dstring_D1836.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__toplevels_D254_lambda128(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__toplevels_D254_lambda128, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // ((bruijn ##.print-toplevel.250 4 15) (bruijn ##.k.1582 0 0) (bruijn ##.x.177.634 0 1) (bruijn ##.x.178.635 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[15]), 3,
      _var0,
      _var1,
      _var2);
}
static void _V10_Dprint__toplevels_D254_k586(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__toplevels_D254_k586, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.646 31 0) (close _V10_Dprint__toplevels_D254_k587) (close _V10_Dprint__toplevels_D254_lambda128) (bruijn ##.x.1583 0 0) (bruijn ##.toplevels.633 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__toplevels_D254_k587, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__toplevels_D254_lambda128, self)})),
      _var0,
      statics->up->vars[1]);
}
static void _V10_Dprint__toplevels_D254_k585(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__toplevels_D254_k585, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.667 9 0) (close _V10_Dprint__toplevels_D254_k586) (bruijn ##.x.1584 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__toplevels_D254_k586, self)})),
      _var0);
}
static void _V10_Dprint__toplevels_D254_lambda126(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__toplevels_D254_lambda126, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.x.668 7 0) (close _V10_Dprint__toplevels_D254_k585) (bruijn ##.toplevels.633 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__toplevels_D254_k585, self)})),
      _var1);
}
static void _V10_Dprint__main__standard_D255_k618(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main__standard_D255_k618, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.648 53 0) (bruijn ##.k.1585 26 0) (##string ##.string.1756))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 53-1, 0)), 2,
      VGetArg(statics, 26-1, 0),
      VEncodePointer(&_V10_Dstring_D1756.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main__standard_D255_k617(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main__standard_D255_k617, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.648 52 0) (close _V10_Dprint__main__standard_D255_k618) (##string ##.string.1837))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 52-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main__standard_D255_k618, self)})),
      VEncodePointer(&_V10_Dstring_D1837.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main__standard_D255_k616(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main__standard_D255_k616, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.648 51 0) (close _V10_Dprint__main__standard_D255_k617) (##string ##.string.1838))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 51-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main__standard_D255_k617, self)})),
      VEncodePointer(&_V10_Dstring_D1838.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main__standard_D255_k615(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main__standard_D255_k615, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.648 50 0) (close _V10_Dprint__main__standard_D255_k616) (##string ##.string.1839))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 50-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main__standard_D255_k616, self)})),
      VEncodePointer(&_V10_Dstring_D1839.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main__standard_D255_k622(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main__standard_D255_k622, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.648 53 0) (bruijn ##.k.1585 26 0) (##string ##.string.1756))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 53-1, 0)), 2,
      VGetArg(statics, 26-1, 0),
      VEncodePointer(&_V10_Dstring_D1756.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main__standard_D255_k621(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main__standard_D255_k621, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.648 52 0) (close _V10_Dprint__main__standard_D255_k622) (##string ##.string.1841))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 52-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main__standard_D255_k622, self)})),
      VEncodePointer(&_V10_Dstring_D1841.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main__standard_D255_k620(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main__standard_D255_k620, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.648 51 0) (close _V10_Dprint__main__standard_D255_k621) (##string ##.string.1842))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 51-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main__standard_D255_k621, self)})),
      VEncodePointer(&_V10_Dstring_D1842.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main__standard_D255_k625(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main__standard_D255_k625, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.648 53 0) (bruijn ##.k.1585 26 0) (##string ##.string.1756))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 53-1, 0)), 2,
      VGetArg(statics, 26-1, 0),
      VEncodePointer(&_V10_Dstring_D1756.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main__standard_D255_k624(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main__standard_D255_k624, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.648 52 0) (close _V10_Dprint__main__standard_D255_k625) (##string ##.string.1841))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 52-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main__standard_D255_k625, self)})),
      VEncodePointer(&_V10_Dstring_D1841.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main__standard_D255_k623(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main__standard_D255_k623, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.648 51 0) (close _V10_Dprint__main__standard_D255_k624) (##string ##.string.1838))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 51-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main__standard_D255_k624, self)})),
      VEncodePointer(&_V10_Dstring_D1838.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main__standard_D255_k619(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main__standard_D255_k619, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1612 0 0) ((bruijn ##.x.648 50 0) (close _V10_Dprint__main__standard_D255_k620) (##string ##.string.1843)) ((bruijn ##.x.648 50 0) (close _V10_Dprint__main__standard_D255_k623) (##string ##.string.1839)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 50-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main__standard_D255_k620, self)})),
      VEncodePointer(&_V10_Dstring_D1843.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 50-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main__standard_D255_k623, self)})),
      VEncodePointer(&_V10_Dstring_D1839.sym, VPOINTER_OTHER));
}
}
static void _V10_Dprint__main__standard_D255_k614(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main__standard_D255_k614, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1607 0 0) ((bruijn ##.x.648 49 0) (close _V10_Dprint__main__standard_D255_k615) (##string ##.string.1840)) ((bruijn ##.x.670 27 0) (close _V10_Dprint__main__standard_D255_k619) (bruijn ##.main.637 22 1) (##string ##.string.1844)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 49-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main__standard_D255_k615, self)})),
      VEncodePointer(&_V10_Dstring_D1840.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main__standard_D255_k619, self)})),
      VGetArg(statics, 22-1, 1),
      VEncodePointer(&_V10_Dstring_D1844.sym, VPOINTER_OTHER));
}
}
static void _V10_Dprint__main__standard_D255_k613(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main__standard_D255_k613, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1606 0 0) ((bruijn ##.k.1585 21 0) #f) ((bruijn ##.x.670 26 0) (close _V10_Dprint__main__standard_D255_k614) (bruijn ##.main.637 21 1) (##string ##.string.1845)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 1,
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main__standard_D255_k614, self)})),
      VGetArg(statics, 21-1, 1),
      VEncodePointer(&_V10_Dstring_D1845.sym, VPOINTER_OTHER));
}
}
static void _V10_Dprint__main__standard_D255_k612(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main__standard_D255_k612, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.670 25 0) (close _V10_Dprint__main__standard_D255_k613) (bruijn ##.main.637 20 1) (##string ##.string.1846))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main__standard_D255_k613, self)})),
      VGetArg(statics, 20-1, 1),
      VEncodePointer(&_V10_Dstring_D1846.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main__standard_D255_k611(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main__standard_D255_k611, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.648 46 0) (close _V10_Dprint__main__standard_D255_k612) (##string ##.string.1765))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 46-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main__standard_D255_k612, self)})),
      VEncodePointer(&_V10_Dstring_D1765.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main__standard_D255_k610(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main__standard_D255_k610, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.648 45 0) (close _V10_Dprint__main__standard_D255_k611) (##string ##.string.1756))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 45-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main__standard_D255_k611, self)})),
      VEncodePointer(&_V10_Dstring_D1756.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main__standard_D255_k609(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main__standard_D255_k609, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.648 44 0) (close _V10_Dprint__main__standard_D255_k610) (##string ##.string.1847))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 44-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main__standard_D255_k610, self)})),
      VEncodePointer(&_V10_Dstring_D1847.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main__standard_D255_k608(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main__standard_D255_k608, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.648 43 0) (close _V10_Dprint__main__standard_D255_k609) (##string ##.string.1848))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 43-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main__standard_D255_k609, self)})),
      VEncodePointer(&_V10_Dstring_D1848.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main__standard_D255_k607(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main__standard_D255_k607, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.648 42 0) (close _V10_Dprint__main__standard_D255_k608) (##string ##.string.1849))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 42-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main__standard_D255_k608, self)})),
      VEncodePointer(&_V10_Dstring_D1849.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main__standard_D255_k606(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main__standard_D255_k606, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.648 41 0) (close _V10_Dprint__main__standard_D255_k607) (##string ##.string.1850))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 41-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main__standard_D255_k607, self)})),
      VEncodePointer(&_V10_Dstring_D1850.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main__standard_D255_k605(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main__standard_D255_k605, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.648 40 0) (close _V10_Dprint__main__standard_D255_k606) (##string ##.string.1851))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 40-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main__standard_D255_k606, self)})),
      VEncodePointer(&_V10_Dstring_D1851.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main__standard_D255_k604(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main__standard_D255_k604, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.648 39 0) (close _V10_Dprint__main__standard_D255_k605) (##string ##.string.1852))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 39-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main__standard_D255_k605, self)})),
      VEncodePointer(&_V10_Dstring_D1852.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main__standard_D255_k603(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main__standard_D255_k603, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.648 38 0) (close _V10_Dprint__main__standard_D255_k604) (##string ##.string.1853))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 38-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main__standard_D255_k604, self)})),
      VEncodePointer(&_V10_Dstring_D1853.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main__standard_D255_k602(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main__standard_D255_k602, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.648 37 0) (close _V10_Dprint__main__standard_D255_k603) (##string ##.string.1854))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main__standard_D255_k603, self)})),
      VEncodePointer(&_V10_Dstring_D1854.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main__standard_D255_k601(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main__standard_D255_k601, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.648 36 0) (close _V10_Dprint__main__standard_D255_k602) (##string ##.string.1855))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main__standard_D255_k602, self)})),
      VEncodePointer(&_V10_Dstring_D1855.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main__standard_D255_k600(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main__standard_D255_k600, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.648 35 0) (close _V10_Dprint__main__standard_D255_k601) (##string ##.string.1856))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 35-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main__standard_D255_k601, self)})),
      VEncodePointer(&_V10_Dstring_D1856.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main__standard_D255_k599(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main__standard_D255_k599, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.648 34 0) (close _V10_Dprint__main__standard_D255_k600) (##string ##.string.1857))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main__standard_D255_k600, self)})),
      VEncodePointer(&_V10_Dstring_D1857.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main__standard_D255_k598(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main__standard_D255_k598, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.648 33 0) (close _V10_Dprint__main__standard_D255_k599) (##string ##.string.1858))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main__standard_D255_k599, self)})),
      VEncodePointer(&_V10_Dstring_D1858.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main__standard_D255_k597(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main__standard_D255_k597, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.648 32 0) (close _V10_Dprint__main__standard_D255_k598) (##string ##.string.1859))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main__standard_D255_k598, self)})),
      VEncodePointer(&_V10_Dstring_D1859.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main__standard_D255_k596(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main__standard_D255_k596, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.648 31 0) (close _V10_Dprint__main__standard_D255_k597) (##string ##.string.1860))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main__standard_D255_k597, self)})),
      VEncodePointer(&_V10_Dstring_D1860.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main__standard_D255_k595(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main__standard_D255_k595, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.648 30 0) (close _V10_Dprint__main__standard_D255_k596) (##string ##.string.1861))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main__standard_D255_k596, self)})),
      VEncodePointer(&_V10_Dstring_D1861.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main__standard_D255_k594(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main__standard_D255_k594, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.648 29 0) (close _V10_Dprint__main__standard_D255_k595) (##string ##.string.1862))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main__standard_D255_k595, self)})),
      VEncodePointer(&_V10_Dstring_D1862.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main__standard_D255_k593(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main__standard_D255_k593, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.648 28 0) (close _V10_Dprint__main__standard_D255_k594) (##string ##.string.1863))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main__standard_D255_k594, self)})),
      VEncodePointer(&_V10_Dstring_D1863.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main__standard_D255_lambda129(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main__standard_D255_lambda129, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.x.648 27 0) (close _V10_Dprint__main__standard_D255_k593) (##string ##.string.1864))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main__standard_D255_k593, self)})),
      VEncodePointer(&_V10_Dstring_D1864.sym, VPOINTER_OTHER));
}
static void _V10_Dprintout2_D225_k638(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D225_k638, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.purec?.227 14 2) ((bruijn ##.print-declaretable.253 13 18) (bruijn ##.k.1639 0 0) (bruijn ##.declares.233 14 8)) ((bruijn ##.k.1639 0 0) #f))
if(VDecodeBool(
VGetArg(statics, 14-1, 2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 18)), 2,
      _var0,
      VGetArg(statics, 14-1, 8));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprintout2_D225_k640(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D225_k640, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.shared?.229 15 4) ((bruijn ##.k.1638 0 0) (bruijn ##.x.1619 13 0)) ((bruijn ##.k.1638 0 0) #f))
if(VDecodeBool(
VGetArg(statics, 15-1, 4))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 13-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprintout2_D225_k642(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D225_k642, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1636 1 0) ((bruijn ##.x.645 44 0) (bruijn ##.k.1637 0 0) (##string ##.string.1865) (bruijn ##.toplevels.234 16 9)) ((bruijn ##.k.1637 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 44-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1865.sym, VPOINTER_OTHER),
      VGetArg(statics, 16-1, 9));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprintout2_D225_k645(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D225_k645, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.print-main-standard.255 17 20) (bruijn ##.k.1634 1 0) (bruijn ##.main.226 18 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 20)), 2,
      statics->vars[0],
      VGetArg(statics, 18-1, 1));
}
static void _V10_Dprintout2_D225_k644(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D225_k644, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.1619 15 0) ((bruijn ##.print-toplevels.254 16 19) (close _V10_Dprintout2_D225_k645) (bruijn ##.toplevels.234 17 9)) ((bruijn ##.k.1634 0 0) #f))
if(VDecodeBool(
VGetArg(statics, 15-1, 0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 19)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout2_D225_k645, self)})),
      VGetArg(statics, 17-1, 9));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprintout2_D225_k646(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D225_k646, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.672 17 0) (bruijn ##.x.1619 15 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 1,
      VGetArg(statics, 15-1, 0));
}
static void _V10_Dprintout2_D225_k643(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D225_k643, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprintout2_D225_k644) (close _V10_Dprintout2_D225_k646))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprintout2_D225_k644, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout2_D225_k646, self)})));
}
static void _V10_Dprintout2_D225_k641(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D225_k641, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprintout2_D225_k642) (close _V10_Dprintout2_D225_k643))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprintout2_D225_k642, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout2_D225_k643, self)})));
}
static void _V10_Dprintout2_D225_k639(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D225_k639, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprintout2_D225_k640) (close _V10_Dprintout2_D225_k641))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprintout2_D225_k640, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout2_D225_k641, self)})));
}
static void _V10_Dprintout2_D225_k637(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D225_k637, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dprintout2_D225_k638) (close _V10_Dprintout2_D225_k639))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprintout2_D225_k638, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout2_D225_k639, self)})));
}
static void _V10_Dprintout2_D225_k636(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D225_k636, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.646 39 0) (close _V10_Dprintout2_D225_k637) (bruijn ##.print-declare.252 11 17) (bruijn ##.declares.233 12 8))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 39-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout2_D225_k637, self)})),
      VGetArg(statics, 11-1, 17),
      VGetArg(statics, 12-1, 8));
}
static void _V10_Dprintout2_D225_k635(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D225_k635, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.646 38 0) (close _V10_Dprintout2_D225_k636) (bruijn ##.print-fun.249 10 14) (bruijn ##.x.1620 8 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 38-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout2_D225_k636, self)})),
      VGetArg(statics, 10-1, 14),
      VGetArg(statics, 8-1, 0));
}
static void _V10_Dprintout2_D225_lambda130(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D225_lambda130, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.x.647 37 0) (bruijn ##.k.1640 0 0) (bruijn ##.purec?.227 11 2) (bruijn ##.e.640 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 3,
      _var0,
      VGetArg(statics, 11-1, 2),
      _var1);
}
static void _V10_Dprintout2_D225_k634(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D225_k634, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.646 37 0) (close _V10_Dprintout2_D225_k635) (close _V10_Dprintout2_D225_lambda130) (bruijn ##.foreign-functions.231 10 6))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout2_D225_k635, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout2_D225_lambda130, self)})),
      VGetArg(statics, 10-1, 6));
}
static void _V10_Dprintout2_D225_k633(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D225_k633, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.646 36 0) (close _V10_Dprintout2_D225_k634) (bruijn ##.print-foreign-declare.251 8 16) (bruijn ##.declares.233 9 8))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout2_D225_k634, self)})),
      VGetArg(statics, 8-1, 16),
      VGetArg(statics, 9-1, 8));
}
static void _V10_Dprintout2_D225_k632(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D225_k632, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.print-dllmain.243 7 8) (close _V10_Dprintout2_D225_k633) (bruijn ##.literal-table.230 8 5))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 8)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout2_D225_k633, self)})),
      VGetArg(statics, 8-1, 5));
}
static void _V10_Dprintout2_D225_k631(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D225_k631, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.646 34 0) (close _V10_Dprintout2_D225_k632) (bruijn ##.print-literal-declaration.242 6 7) (bruijn ##.literal-table.230 7 5))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout2_D225_k632, self)})),
      VGetArg(statics, 6-1, 7),
      VGetArg(statics, 7-1, 5));
}
static void _V10_Dprintout2_D225_k630(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D225_k630, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.648 31 0) (close _V10_Dprintout2_D225_k631) (##string ##.string.1866))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout2_D225_k631, self)})),
      VEncodePointer(&_V10_Dstring_D1866.sym, VPOINTER_OTHER));
}
static void _V10_Dprintout2_D225_k629(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D225_k629, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.648 30 0) (close _V10_Dprintout2_D225_k630) (##string ##.string.1867))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout2_D225_k630, self)})),
      VEncodePointer(&_V10_Dstring_D1867.sym, VPOINTER_OTHER));
}
static void _V10_Dprintout2_D225_k628(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D225_k628, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.648 29 0) (close _V10_Dprintout2_D225_k629) (##string ##.string.1868))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout2_D225_k629, self)})),
      VEncodePointer(&_V10_Dstring_D1868.sym, VPOINTER_OTHER));
}
static void _V10_Dprintout2_D225_k627(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D225_k627, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.648 28 0) (close _V10_Dprintout2_D225_k628) (##string ##.string.1869))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout2_D225_k628, self)})),
      VEncodePointer(&_V10_Dstring_D1869.sym, VPOINTER_OTHER));
}
static void _V10_Dprintout2_D225_k626(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D225_k626, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.644 31 0) (close _V10_Dprintout2_D225_k627) (bruijn ##.functions.232 2 7))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout2_D225_k627, self)})),
      statics->up->vars[7]);
}
static void _V10_Dprintout2_D225_lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9) {
 if(argc != 10) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D225_lambda2, got ~D~N"
  "-- expected 10~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[10]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 10, 10, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  self->vars[5] = _var5;
  self->vars[6] = _var6;
  self->vars[7] = _var7;
  self->vars[8] = _var8;
  self->vars[9] = _var9;
  // (letrec 21 ((close _V10_Dprint__global_D235_lambda3) (close _V10_Dprint__string_D236_lambda4) (close _V10_Descape__string_D237_lambda6) (close _V10_Descape__char_D238_lambda8) (close _V10_Dprint__literal__string_D239_lambda9) (close _V10_Dprint__intrinsic_D240_lambda10) (close _V10_Dprint__literal_D241_lambda11) (close _V10_Dprint__literal__declaration_D242_lambda12) (close _V10_Dprint__dllmain_D243_lambda13) (close _V10_Dcloses_Q_D244_lambda15) (close _V10_Dprint__basic__expr_D245_lambda32) (close _V10_Dprint__expr_D246_lambda34) (close _V10_Dprint__fun__single_D247_lambda80) (close _V10_Dprint__fun__case_D248_lambda86) (close _V10_Dprint__fun_D249_lambda104) (close _V10_Dprint__toplevel_D250_lambda109) (close _V10_Dprint__foreign__declare_D251_lambda110) (close _V10_Dprint__declare_D252_lambda115) (close _V10_Dprint__declaretable_D253_lambda120) (close _V10_Dprint__toplevels_D254_lambda126) (close _V10_Dprint__main__standard_D255_lambda129)) ((close _V10_Dprintout2_D225_k626) (##inline ##vcore.not (##inline ##vcore.null? (bruijn ##.toplevels.234 1 9)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[21]; } container;
    self = &container.self;
    VInitEnv(self, 21, 21, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__global_D235_lambda3, self)}));
    self->vars[1] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__string_D236_lambda4, self)}));
    self->vars[2] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Descape__string_D237_lambda6, self)}));
    self->vars[3] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Descape__char_D238_lambda8, self)}));
    self->vars[4] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__string_D239_lambda9, self)}));
    self->vars[5] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__intrinsic_D240_lambda10, self)}));
    self->vars[6] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal_D241_lambda11, self)}));
    self->vars[7] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D242_lambda12, self)}));
    self->vars[8] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__dllmain_D243_lambda13, self)}));
    self->vars[9] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D244_lambda15, self)}));
    self->vars[10] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__basic__expr_D245_lambda32, self)}));
    self->vars[11] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D246_lambda34, self)}));
    self->vars[12] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D247_lambda80, self)}));
    self->vars[13] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D248_lambda86, self)}));
    self->vars[14] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun_D249_lambda104, self)}));
    self->vars[15] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__toplevel_D250_lambda109, self)}));
    self->vars[16] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__declare_D251_lambda110, self)}));
    self->vars[17] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__declare_D252_lambda115, self)}));
    self->vars[18] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__declaretable_D253_lambda120, self)}));
    self->vars[19] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__toplevels_D254_lambda126, self)}));
    self->vars[20] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main__standard_D255_lambda129, self)}));
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprintout2_D225_k626, .env = self }, }, 1,
      VInlineNot2(runtime,
        VInlineNullP2(runtime,
        statics->vars[9])));
    }
}
static void _V0vanity_V0compiler_V0transpile_V20_k648(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k648, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.643 40 0) (##inline ##vcore.cons (##inline ##vcore.cons 'printout2 (bruijn ##.printout2.225 3 1)) '()))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 40-1, 0)), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0printout2,
        statics->up->up->vars[1]),
        VNULL));
}
static void _V0vanity_V0compiler_V0transpile_V20_k647(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k647, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0transpile_V20_k648) (bruijn ##.gendllmain.224 2 0) (bruijn ##.x.1644 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k648, self)})),
      VEncodeInt(2l), VEncodeInt(0l),
      _var0
    );
}
static void _V0vanity_V0compiler_V0transpile_V20_k649(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k649, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.671 5 0) (bruijn ##.k.1645 2 0) (##string ##.string.1870) (bruijn ##.x.641 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1870.sym, VPOINTER_OTHER),
      statics->up->up->vars[0]);
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda132(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_lambda132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.1682) ((##vcore.+ (bruijn ##.x.641 2 0) 1)) (set! (close _V0vanity_V0compiler_V0transpile_V20_k649) (bruijn ##.x.641 2 0) (bruijn ##.reg.1682 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->vars[0],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k649, self)})),
      VEncodeInt(2l), VEncodeInt(0l),
      self->vars[0]
    );
    }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda131(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_k647) (close _V0vanity_V0compiler_V0transpile_V20_lambda132))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V0vanity_V0compiler_V0transpile_V20_k647, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda132, self)})));
}
static void _V0vanity_V0compiler_V0transpile_V20_k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 2 (#f (close _V10_Dprintout2_D225_lambda2)) ((close _V0vanity_V0compiler_V0transpile_V20_lambda131) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = VEncodeBool(false);
    self->vars[1] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout2_D225_lambda2, self)}));
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda131, .env = self }, }, 1,
      VEncodeInt(0l));
    }
}
static void _V0vanity_V0compiler_V0transpile_V20_k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 27 0) (close _V0vanity_V0compiler_V0transpile_V20_k36) 'sprintf)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k36, self)})),
      _V0sprintf);
}
static void _V0vanity_V0compiler_V0transpile_V20_k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 26 0) (close _V0vanity_V0compiler_V0transpile_V20_k35) 'equal?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k35, self)})),
      _V0equal_Q);
}
static void _V0vanity_V0compiler_V0transpile_V20_k33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 25 0) (close _V0vanity_V0compiler_V0transpile_V20_k34) 'printf)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k34, self)})),
      _V0printf);
}
static void _V0vanity_V0compiler_V0transpile_V20_k32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 24 0) (close _V0vanity_V0compiler_V0transpile_V20_k33) 'length)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k33, self)})),
      _V0length);
}
static void _V0vanity_V0compiler_V0transpile_V20_k31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 23 0) (close _V0vanity_V0compiler_V0transpile_V20_k32) 'iota)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k32, self)})),
      _V0iota);
}
static void _V0vanity_V0compiler_V0transpile_V20_k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 22 0) (close _V0vanity_V0compiler_V0transpile_V20_k31) 'cddr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k31, self)})),
      _V0cddr);
}
static void _V0vanity_V0compiler_V0transpile_V20_k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 21 0) (close _V0vanity_V0compiler_V0transpile_V20_k30) 'map)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k30, self)})),
      _V0map);
}
static void _V0vanity_V0compiler_V0transpile_V20_k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 20 0) (close _V0vanity_V0compiler_V0transpile_V20_k29) 'error)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k29, self)})),
      _V0error);
}
static void _V0vanity_V0compiler_V0transpile_V20_k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 19 0) (close _V0vanity_V0compiler_V0transpile_V20_k28) 'append)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k28, self)})),
      _V0append);
}
static void _V0vanity_V0compiler_V0transpile_V20_k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 18 0) (close _V0vanity_V0compiler_V0transpile_V20_k27) '=)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k27, self)})),
      _V0_E);
}
static void _V0vanity_V0compiler_V0transpile_V20_k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 17 0) (close _V0vanity_V0compiler_V0transpile_V20_k26) 'list-ref)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k26, self)})),
      _V0list__ref);
}
static void _V0vanity_V0compiler_V0transpile_V20_k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 16 0) (close _V0vanity_V0compiler_V0transpile_V20_k25) 'cadr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k25, self)})),
      _V0cadr);
}
static void _V0vanity_V0compiler_V0transpile_V20_k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 15 0) (close _V0vanity_V0compiler_V0transpile_V20_k24) 'lookup-intrinsic-name)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k24, self)})),
      _V0lookup__intrinsic__name);
}
static void _V0vanity_V0compiler_V0transpile_V20_k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 14 0) (close _V0vanity_V0compiler_V0transpile_V20_k23) 'display)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k23, self)})),
      _V0display);
}
static void _V0vanity_V0compiler_V0transpile_V20_k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 13 0) (close _V0vanity_V0compiler_V0transpile_V20_k22) 'lookup-inline-name)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k22, self)})),
      _V0lookup__inline__name);
}
static void _V0vanity_V0compiler_V0transpile_V20_k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 12 0) (close _V0vanity_V0compiler_V0transpile_V20_k21) 'mangle-symbol)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k21, self)})),
      _V0mangle__symbol);
}
static void _V0vanity_V0compiler_V0transpile_V20_k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 11 0) (close _V0vanity_V0compiler_V0transpile_V20_k20) 'cadar)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k20, self)})),
      _V0cadar);
}
static void _V0vanity_V0compiler_V0transpile_V20_k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 10 0) (close _V0vanity_V0compiler_V0transpile_V20_k19) 'caar)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k19, self)})),
      _V0caar);
}
static void _V0vanity_V0compiler_V0transpile_V20_k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 9 0) (close _V0vanity_V0compiler_V0transpile_V20_k18) 'number?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k18, self)})),
      _V0number_Q);
}
static void _V0vanity_V0compiler_V0transpile_V20_k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 8 0) (close _V0vanity_V0compiler_V0transpile_V20_k17) 'open-output-string)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k17, self)})),
      _V0open__output__string);
}
static void _V0vanity_V0compiler_V0transpile_V20_k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 7 0) (close _V0vanity_V0compiler_V0transpile_V20_k16) 'get-output-string)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k16, self)})),
      _V0get__output__string);
}
static void _V0vanity_V0compiler_V0transpile_V20_k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 6 0) (close _V0vanity_V0compiler_V0transpile_V20_k15) 'close-port)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k15, self)})),
      _V0close__port);
}
static void _V0vanity_V0compiler_V0transpile_V20_k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 5 0) (close _V0vanity_V0compiler_V0transpile_V20_k14) '<)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k14, self)})),
      _V0_L);
}
static void _V0vanity_V0compiler_V0transpile_V20_k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 4 0) (close _V0vanity_V0compiler_V0transpile_V20_k13) 'displayln)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k13, self)})),
      _V0displayln);
}
static void _V0vanity_V0compiler_V0transpile_V20_k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 3 0) (close _V0vanity_V0compiler_V0transpile_V20_k12) 'print-foreign-function)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k12, self)})),
      _V0print__foreign__function);
}
static void _V0vanity_V0compiler_V0transpile_V20_k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 2 0) (close _V0vanity_V0compiler_V0transpile_V20_k11) 'for-each)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k11, self)})),
      _V0for__each);
}
static void _V0vanity_V0compiler_V0transpile_V20_k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 1 0) (close _V0vanity_V0compiler_V0transpile_V20_k10) 'compiler-error)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k10, self)})),
      _V0compiler__error);
}
static void _V0vanity_V0compiler_V0transpile_V20_k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.179 0 0) (close _V0vanity_V0compiler_V0transpile_V20_k9) 'reverse)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k9, self)})),
      _V0reverse);
}
static void _V0vanity_V0compiler_V0transpile_V20_k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.make-import (close _V0vanity_V0compiler_V0transpile_V20_k8) (##string ##.string.1871) (bruijn ##.x.1648 6 0) (bruijn ##.x.1649 5 0) (bruijn ##.x.1650 4 0) (bruijn ##.x.1651 3 0) (bruijn ##.x.1652 2 0) (bruijn ##.x.1653 1 0) (bruijn ##.x.1654 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMakeImport2, 9,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k8, self)})),
      VEncodePointer(&_V10_Dstring_D1871.sym, VPOINTER_OTHER),
      VGetArg(statics, 6-1, 0),
      VGetArg(statics, 5-1, 0),
      statics->up->up->up->vars[0],
      statics->up->up->vars[0],
      statics->up->vars[0],
      statics->vars[0],
      _var0);
}
static void _V0vanity_V0compiler_V0transpile_V20_k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0transpile_V20_k7) (##string ##.string.1872))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k7, self)})),
      VEncodePointer(&_V10_Dstring_D1872.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0transpile_V20_k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0transpile_V20_k6) (##string ##.string.1873))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k6, self)})),
      VEncodePointer(&_V10_Dstring_D1873.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0transpile_V20_k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0transpile_V20_k5) (##string ##.string.1874))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k5, self)})),
      VEncodePointer(&_V10_Dstring_D1874.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0transpile_V20_k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0transpile_V20_k4) (##string ##.string.1875))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k4, self)})),
      VEncodePointer(&_V10_Dstring_D1875.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0transpile_V20_k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0transpile_V20_k3) (##string ##.string.1876))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k3, self)})),
      VEncodePointer(&_V10_Dstring_D1876.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0transpile_V20_k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0transpile_V20_k2) (##string ##.string.1877))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k2, self)})),
      VEncodePointer(&_V10_Dstring_D1877.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0transpile_V20_k1) (##string ##.string.1878))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k1, self)})),
      VEncodePointer(&_V10_Dstring_D1878.sym, VPOINTER_OTHER));
}
VFunc _V0vanity_V0compiler_V0transpile_V20 = (VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda1;
